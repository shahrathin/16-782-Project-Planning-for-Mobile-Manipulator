// Generated by gencpp from file planner_msgs/run_planner_map_goal_pose.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_RUN_PLANNER_MAP_GOAL_POSE_H
#define PLANNER_MSGS_MESSAGE_RUN_PLANNER_MAP_GOAL_POSE_H

#include <ros/service_traits.h>


#include <planner_msgs/run_planner_map_goal_poseRequest.h>
#include <planner_msgs/run_planner_map_goal_poseResponse.h>


namespace planner_msgs
{

struct run_planner_map_goal_pose
{

typedef run_planner_map_goal_poseRequest Request;
typedef run_planner_map_goal_poseResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct run_planner_map_goal_pose
} // namespace planner_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::planner_msgs::run_planner_map_goal_pose > {
  static const char* value()
  {
    return "806516a836da7fc446686544dee493ea";
  }

  static const char* value(const ::planner_msgs::run_planner_map_goal_pose&) { return value(); }
};

template<>
struct DataType< ::planner_msgs::run_planner_map_goal_pose > {
  static const char* value()
  {
    return "planner_msgs/run_planner_map_goal_pose";
  }

  static const char* value(const ::planner_msgs::run_planner_map_goal_pose&) { return value(); }
};


// service_traits::MD5Sum< ::planner_msgs::run_planner_map_goal_poseRequest> should match
// service_traits::MD5Sum< ::planner_msgs::run_planner_map_goal_pose >
template<>
struct MD5Sum< ::planner_msgs::run_planner_map_goal_poseRequest>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::run_planner_map_goal_pose >::value();
  }
  static const char* value(const ::planner_msgs::run_planner_map_goal_poseRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::run_planner_map_goal_poseRequest> should match
// service_traits::DataType< ::planner_msgs::run_planner_map_goal_pose >
template<>
struct DataType< ::planner_msgs::run_planner_map_goal_poseRequest>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::run_planner_map_goal_pose >::value();
  }
  static const char* value(const ::planner_msgs::run_planner_map_goal_poseRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::planner_msgs::run_planner_map_goal_poseResponse> should match
// service_traits::MD5Sum< ::planner_msgs::run_planner_map_goal_pose >
template<>
struct MD5Sum< ::planner_msgs::run_planner_map_goal_poseResponse>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::run_planner_map_goal_pose >::value();
  }
  static const char* value(const ::planner_msgs::run_planner_map_goal_poseResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::run_planner_map_goal_poseResponse> should match
// service_traits::DataType< ::planner_msgs::run_planner_map_goal_pose >
template<>
struct DataType< ::planner_msgs::run_planner_map_goal_poseResponse>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::run_planner_map_goal_pose >::value();
  }
  static const char* value(const ::planner_msgs::run_planner_map_goal_poseResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_RUN_PLANNER_MAP_GOAL_POSE_H