#include <ros/ros.h>

#include "ros_example_msgs/Message1.h"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "example_node");
  ros::NodeHandle nh;

  ros::spin();
  return 0;
}
