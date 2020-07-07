#include "ros/ros.h"
#include "ros_tutorials_topic/HMK.h"
void msgCallback(const ros_tutorials_topic::HMK::ConstPtr&msg)
{

ROS_INFO("sum=%d",msg->sum);
}
int main (int argc,char **argv)
{
ros::init(argc,argv,"topic_subscriber");
ros::NodeHandle nh;
ros::Subscriber ros_tutorial_sub=nh.subscribe("ros_tutorial_msg",100,msgCallback);
ros::spin();
return 0;
}
