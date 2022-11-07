// Generated by gencpp from file planner_msgs/planning_scene_infoRequest.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNING_SCENE_INFOREQUEST_H
#define PLANNER_MSGS_MESSAGE_PLANNING_SCENE_INFOREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace planner_msgs
{
template <class ContainerAllocator>
struct planning_scene_infoRequest_
{
  typedef planning_scene_infoRequest_<ContainerAllocator> Type;

  planning_scene_infoRequest_()
    : env_size_x()
    , env_size_y()
    , show_environment_borders(false)  {
    }
  planning_scene_infoRequest_(const ContainerAllocator& _alloc)
    : env_size_x(_alloc)
    , env_size_y(_alloc)
    , show_environment_borders(false)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _env_size_x_type;
  _env_size_x_type env_size_x;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _env_size_y_type;
  _env_size_y_type env_size_y;

   typedef uint8_t _show_environment_borders_type;
  _show_environment_borders_type show_environment_borders;





  typedef boost::shared_ptr< ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator> const> ConstPtr;

}; // struct planning_scene_infoRequest_

typedef ::planner_msgs::planning_scene_infoRequest_<std::allocator<void> > planning_scene_infoRequest;

typedef boost::shared_ptr< ::planner_msgs::planning_scene_infoRequest > planning_scene_infoRequestPtr;
typedef boost::shared_ptr< ::planner_msgs::planning_scene_infoRequest const> planning_scene_infoRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator2> & rhs)
{
  return lhs.env_size_x == rhs.env_size_x &&
    lhs.env_size_y == rhs.env_size_y &&
    lhs.show_environment_borders == rhs.show_environment_borders;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bc137ffdcb050951f620d0d4a6e80962";
  }

  static const char* value(const ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbc137ffdcb050951ULL;
  static const uint64_t static_value2 = 0xf620d0d4a6e80962ULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/planning_scene_infoRequest";
  }

  static const char* value(const ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] env_size_x\n"
"float64[] env_size_y\n"
"bool show_environment_borders\n"
"\n"
;
  }

  static const char* value(const ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.env_size_x);
      stream.next(m.env_size_y);
      stream.next(m.show_environment_borders);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct planning_scene_infoRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::planning_scene_infoRequest_<ContainerAllocator>& v)
  {
    s << indent << "env_size_x[]" << std::endl;
    for (size_t i = 0; i < v.env_size_x.size(); ++i)
    {
      s << indent << "  env_size_x[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.env_size_x[i]);
    }
    s << indent << "env_size_y[]" << std::endl;
    for (size_t i = 0; i < v.env_size_y.size(); ++i)
    {
      s << indent << "  env_size_y[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.env_size_y[i]);
    }
    s << indent << "show_environment_borders: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.show_environment_borders);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNING_SCENE_INFOREQUEST_H