// Generated by gencpp from file planner_msgs/run_planner_config_file.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_RUN_PLANNER_CONFIG_FILE_H
#define PLANNER_MSGS_MESSAGE_RUN_PLANNER_CONFIG_FILE_H

#include <ros/service_traits.h>


#include <planner_msgs/run_planner_config_fileRequest.h>
#include <planner_msgs/run_planner_config_fileResponse.h>


namespace planner_msgs
{

struct run_planner_config_file
{

typedef run_planner_config_fileRequest Request;
typedef run_planner_config_fileResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct run_planner_config_file
} // namespace planner_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::planner_msgs::run_planner_config_file > {
  static const char* value()
  {
    return "0e458c66c66f2aaa7786720f9a33b65b";
  }

  static const char* value(const ::planner_msgs::run_planner_config_file&) { return value(); }
};

template<>
struct DataType< ::planner_msgs::run_planner_config_file > {
  static const char* value()
  {
    return "planner_msgs/run_planner_config_file";
  }

  static const char* value(const ::planner_msgs::run_planner_config_file&) { return value(); }
};


// service_traits::MD5Sum< ::planner_msgs::run_planner_config_fileRequest> should match
// service_traits::MD5Sum< ::planner_msgs::run_planner_config_file >
template<>
struct MD5Sum< ::planner_msgs::run_planner_config_fileRequest>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::run_planner_config_file >::value();
  }
  static const char* value(const ::planner_msgs::run_planner_config_fileRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::run_planner_config_fileRequest> should match
// service_traits::DataType< ::planner_msgs::run_planner_config_file >
template<>
struct DataType< ::planner_msgs::run_planner_config_fileRequest>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::run_planner_config_file >::value();
  }
  static const char* value(const ::planner_msgs::run_planner_config_fileRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::planner_msgs::run_planner_config_fileResponse> should match
// service_traits::MD5Sum< ::planner_msgs::run_planner_config_file >
template<>
struct MD5Sum< ::planner_msgs::run_planner_config_fileResponse>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::run_planner_config_file >::value();
  }
  static const char* value(const ::planner_msgs::run_planner_config_fileResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::run_planner_config_fileResponse> should match
// service_traits::DataType< ::planner_msgs::run_planner_config_file >
template<>
struct DataType< ::planner_msgs::run_planner_config_fileResponse>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::run_planner_config_file >::value();
  }
  static const char* value(const ::planner_msgs::run_planner_config_fileResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_RUN_PLANNER_CONFIG_FILE_H
