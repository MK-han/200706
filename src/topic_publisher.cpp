#include "ros/ros.h"
#include "ros_tutorials_topic/HMK.h"
int main (int argc,char **argv)
{
ros::init(argc,argv,"topic_publisher");
ros::NodeHandle nh;
ros::Publisher ros_tutorial_pub=nh.advertise<ros_tutorials_topic::HMK>
("ros_tutorial_msg",100);
ros_tutorials_topic::HMK msg;


while (ros::ok())
{

printf("number:");
scanf("%d",&msg.data);
msg.sum+=msg.data;
//msg.stamp=ros::Time::now();
//ROS::scanf("%d",data);
//ROS_INFO("send msg=%d",msg.stamp.sec);
//ROS_INFO("send msg=%d",msg.stamp.nsec);
//ROS_INFO("send msg=%d",msg.data);

ros_tutorial_pub.publish(msg);
//loop_rate.sleep();
//++count;
}
return 0;
}
