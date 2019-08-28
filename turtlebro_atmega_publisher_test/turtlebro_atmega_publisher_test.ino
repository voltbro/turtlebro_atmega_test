#include <ros.h>
#include <std_msgs/String.h>

class NewHardware : public ArduinoHardware
{
  public:
  NewHardware():ArduinoHardware(&Serial1, 115200){};
};

ros::NodeHandle_<NewHardware>  nh;

std_msgs::String str_msg;
ros::Publisher chatter("atmega_publisher_demo", &str_msg);

char hello[16] = "Hello turtlebro";

void setup()
{
  nh.initNode();
  nh.advertise(chatter);
}

void loop()
{
  str_msg.data = hello;
  chatter.publish( &str_msg );
  nh.spinOnce();
  delay(100);
}
