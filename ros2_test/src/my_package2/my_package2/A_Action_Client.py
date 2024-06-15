import time 
import random 

import rclpy 
from rclpy.action import ActionClient 
from rclpy.node import Node 

from interfaces.action import MakeSquare

class A_Action_Client(Node):

    def __init__(self, id):
        super().__init__('makesquare_action_client')
        self._action_client = ActionClient(self, MakeSquare, 'makesquare')
        self.id = id
        self.server_id = None
        self.send_goal()
    
    def send_goal(self):
        goal_msg = MakeSquare.Goal()
        goal_msg.sender_id = self.id 
        goal_msg.receiver_id = self.server_id if self.server_id != None else 0
        goal_msg.timestamp = self.get_clock().now().to_msg()
        # creating a random value between 0 and 999 
        goal_msg.value = random.uniform(0,1000)
        goal_msg.message_type = "request"
        self.get_logger().info(f"Send Request with the value: {goal_msg.value} and with the following informations\nSender ID: {goal_msg.sender_id}\nReceiver ID: {goal_msg.receiver_id}\nMessage Type: {goal_msg.message_type}\nTime Stamp: {goal_msg.timestamp}")
        
        self._action_client.wait_for_server()
        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)
    
    def goal_response_callback(self, future):
        goal_handle = future.result()

        if not goal_handle.accepted: 
            self.get_logger().info('Goal rejected !')
            return
        
        self.get_logger().info('Goal accepted.')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

        self.timer = self.create_timer(1, self.after_timer_callback)
    
    def get_result_callback(self, future):
        if future.done():
            self.timer.cancel()
            result = future.result().result
            self.server_id = result.sender_id
            self.get_logger().info(f'Result: {result.result}\nWith the Server ID: {self.server_id}\n')
        
        # repeating 
        time.sleep(20)
        self.send_goal()

    def after_timer_callback(self):
        if not self._get_result_future.done():
            self.timer.cancel()
            self.get_logger().warning(f'Timeout: Result not reveiced within 1 second !')
            self._get_result_future.cancel()          
    

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Received feedback: {feedback.calculation_process}')


def main(args=None):
    rclpy.init(args=args)

    id = 12345
    action_client = A_Action_Client(id)

    try:
        while rclpy.ok():
            rclpy.spin_once(action_client)  # Verarbeitet eingehende Ereignisse
    except KeyboardInterrupt:
        pass
    finally:
        rclpy.shutdown()

