// Generated by gencpp from file planner_msgs/run_planner_poses.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_RUN_PLANNER_POSES_H
#define PLANNER_MSGS_MESSAGE_RUN_PLANNER_POSES_H

#include <ros/service_traits.h>


#include <planner_msgs/run_planner_posesRequest.h>
#include <planner_msgs/run_planner_posesResponse.h>


namespace planner_msgs
{

struct run_planner_poses
{

typedef run_planner_posesRequest Request;
typedef run_planner_posesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct run_planner_poses
} // namespace planner_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::planner_msgs::run_planner_poses > {
  static const char* value()
  {
    return "a6cba430226c7744dd14ae64a4634010";
  }

  static const char* value(const ::planner_msgs::run_planner_poses&) { return value(); }
};

template<>
struct DataType< ::planner_msgs::run_planner_poses > {
  static const char* value()
  {
    return "planner_msgs/run_planner_poses";
  }

  static const char* value(const ::planner_msgs::run_planner_poses&) { return value(); }
};


// service_traits::MD5Sum< ::planner_msgs::run_planner_posesRequest> should match
// service_traits::MD5Sum< ::planner_msgs::run_planner_poses >
template<>
struct MD5Sum< ::planner_msgs::run_planner_posesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::run_planner_poses >::value();
  }
  static const char* value(const ::planner_msgs::run_planner_posesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::run_planner_posesRequest> should match
// service_traits::DataType< ::planner_msgs::run_planner_poses >
template<>
struct DataType< ::planner_msgs::run_planner_posesRequest>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::run_planner_poses >::value();
  }
  static const char* value(const ::planner_msgs::run_planner_posesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::planner_msgs::run_planner_posesResponse> should match
// service_traits::MD5Sum< ::planner_msgs::run_planner_poses >
template<>
struct MD5Sum< ::planner_msgs::run_planner_posesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::run_planner_poses >::value();
  }
  static const char* value(const ::planner_msgs::run_planner_posesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::run_planner_posesResponse> should match
// service_traits::DataType< ::planner_msgs::run_planner_poses >
template<>
struct DataType< ::planner_msgs::run_planner_posesResponse>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::run_planner_poses >::value();
  }
  static const char* value(const ::planner_msgs::run_planner_posesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_RUN_PLANNER_POSES_H