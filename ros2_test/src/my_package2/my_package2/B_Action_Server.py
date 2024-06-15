import random 
import time 

import rclpy 
from rclpy.action import ActionServer
from rclpy.node import Node 

from builtin_interfaces.msg import Time

from interfaces.action import MakeSquare


class B_Action_Server(Node):
    
    def __init__(self, id):
        super().__init__('makesquare_action_server')
        self._action_server = ActionServer(
            self,
            MakeSquare,
            'makesquare', # Name of Action Server
            self.execute_callback)
        self.get_logger().info('Action Server has been started.')
        self.id = id
    
    def get_calculation_time(self):
        return random.uniform(-1.5, 0) * (-1)

    def Diff_of_two_Timestamps(self, timestamp_received, timestamp_send):
        timeslot = self.get_clock().now().to_msg()
        # Berechnung der Zeitdifferenz
        if timestamp_send.nanosec < timestamp_received.nanosec:
            # Leihe 1 Sekunde von den Sekunden
            timestamp_send.sec -= 1
            timestamp_send.nanosec += 1_000_000_000

        timeslot.sec = timestamp_send.sec - timestamp_received.sec
        timeslot.nanosec = timestamp_send.nanosec - timestamp_received.nanosec
        return timeslot

        
    def execute_callback(self, goal_handle):
        self.get_logger().info(f'Starting Request for Goal.')

        timestamp_received = self.get_clock().now().to_msg()
        feedback_msg = MakeSquare.Feedback()
        value = goal_handle.request.value 
        receiver_id = goal_handle.request.sender_id
        

        calculation_time = self.get_calculation_time()
        feedback_msg.calculation_process = f"Starting with Calculation..."
        goal_handle.publish_feedback(feedback_msg)
        self.get_logger().info('First feedback published: Starting with Calculation...')    
        
        time.sleep(calculation_time)

        feedback_msg.calculation_process = f"Calculation Time needed {calculation_time}"
        goal_handle.publish_feedback(feedback_msg)
        self.get_logger().info(f'Second feedback published: Calculation Time needed {calculation_time:.2f} seconds')
        

        result = MakeSquare.Result()
        result.result = value**2
        result.receiver_id = receiver_id
        result.sender_id = self.id
        result.message_type = "response"
        result.timestamp = self.get_clock().now().to_msg()
        result.timeslot = self.Diff_of_two_Timestamps(timestamp_received, result.timestamp)

        goal_handle.succeed()
        self.get_logger().info(f"Sending Response !\n")
        return result

def main(args=None):
    rclpy.init(args=args)

    id = 98765
    b_action_server = B_Action_Server(id)
    
    rclpy.spin(b_action_server)

if __name__ == '__main__':
    main()