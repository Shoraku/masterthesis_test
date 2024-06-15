# Client node 
import time 

from interfaces.srv import MakeSquare
import rclpy 
from rclpy.node import Node 
import random

class A(Node):
    def __init__(self, id):
        super().__init__("NodeA")
        self.cli = self.create_client(MakeSquare, "make_square")
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Service is not available, waiting again...")
        self.req = MakeSquare.Request()
        self.id = id
    
    def get_receiver_id(self):
        test = self.get_service_names_and_types()
        self.get_logger().info(f"Test: {test}")

    def send_request(self, value, server_id=None):
        self.req.value = value
        self.req.sender_id = self.id
        self.req.receiver_id = server_id if server_id != None else 0
        self.req.message_type = "request"
        self.req.timestamp = self.get_clock().now().to_msg()
        self.get_logger().info(f"Send Request with the value: {self.req.value} and with the following informations\nSender ID: {self.req.sender_id}\nReceiver ID: {self.req.receiver_id}\nMessage Type: {self.req.message_type}\nTime Stamp: {self.req.timestamp}\n")
        # sendet eine Anfrage asynchron und erhält ein Future-Objekt zurück
        self.future  = self.cli.call_async(self.req)
        # blockiert die Ausführung bis das Future-Objekt abgeschlossen ist (die Antwort vom Service empfangen wurde)
        rclpy.spin_until_future_complete(self,self.future, timeout_sec= 1)
        # Gibt das Ergebnis zurück vom Future Objekt, das die Antwort des Services enthält
        if self.future.result() is not None: 
            self.get_logger().info(f"Result of the value: {self.future.result()}")
            return self.future.result()
        else: 
            self.get_logger().error("Failed to get a response within the timeout period.")
            return None

def main(args=None):
    rclpy.init(args=args)
    id = 98765
    A_client = A(id)
    # generates numbers in range between 0 and 1000
    receiver_id = None
    while True: 

        random_number = random.uniform(0,1000)
        
        response = A_client.send_request(random_number, receiver_id)
        if response is not None:
            A_client.get_logger().info(
                f"Result of Square of {random_number}: {response.result}"
            )
            receiver_id = response.sender_id
        else:
            A_client.get_logger().warning(
                f"No response received for value: {random_number}\n"
            )
        time.sleep(2)
        

    A_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()