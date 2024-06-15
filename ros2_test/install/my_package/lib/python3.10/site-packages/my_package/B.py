# Server Node 
from interfaces.srv import MakeSquare

import rclpy
from rclpy.node import Node
import random 
import time 

class B(Node):

    def __init__(self, id):
        super().__init__("NodeB")
        self.srv = self.create_service(MakeSquare, "make_square", self.make_square)
        self.id = id

    def get_calculation_time(self):
        return random.uniform(-1.5,0)*(-1) 

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


    
    def make_square(self, request, response):
        response.sender_id = self.id
        response.receiver_id = request.sender_id
        response.message_type = "response"
        timestamp_received = self.get_clock().now().to_msg()
        self.get_logger().info(f"Incoming Request:\n value:{request.value}")

        # calculation time of lazy robot 
        calculation_time = self.get_calculation_time()
        self.get_logger().info(f"Calculation time will take {calculation_time} seconds")
        time.sleep(calculation_time)

        response.result = request.value**2

        response.timestamp = self.get_clock().now().to_msg()

        response.timeslot = self.Diff_of_two_Timestamps(timestamp_received, response.timestamp)

        self.get_logger().info(f"Result for incoming request:\n Result:{response.result}")
        return response


 
def main(args=None):
    rclpy.init(args=args)
    B_node_service = B(12345)
    rclpy.spin(B_node_service)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

