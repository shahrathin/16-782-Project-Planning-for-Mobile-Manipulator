// Generated by gencpp from file planner_msgs/run_planner_start_config_goal_poseRequest.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_RUN_PLANNER_START_CONFIG_GOAL_POSEREQUEST_H
#define PLANNER_MSGS_MESSAGE_RUN_PLANNER_START_CONFIG_GOAL_POSEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <planner_msgs/array2d_double.h>

namespace planner_msgs
{
template <class ContainerAllocator>
struct run_planner_start_config_goal_poseRequest_
{
  typedef run_planner_start_config_goal_poseRequest_<ContainerAllocator> Type;

  run_planner_start_config_goal_poseRequest_()
    : start_config()
    , goal_ee_pose()
    , constraint_vec_goal_pose()
    , target_coordinate_dev()
    , planner_type()
    , run_id(0)
    , flag_iter_or_time(0)
    , iter_or_time(0.0)
    , tree_optimization(false)
    , informed_sampling(false)
    , show_tree(false)  {
    }
  run_planner_start_config_goal_poseRequest_(const ContainerAllocator& _alloc)
    : start_config(_alloc)
    , goal_ee_pose(_alloc)
    , constraint_vec_goal_pose(_alloc)
    , target_coordinate_dev(_alloc)
    , planner_type(_alloc)
    , run_id(0)
    , flag_iter_or_time(0)
    , iter_or_time(0.0)
    , tree_optimization(false)
    , informed_sampling(false)
    , show_tree(false)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _start_config_type;
  _start_config_type start_config;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _goal_ee_pose_type;
  _goal_ee_pose_type goal_ee_pose;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _constraint_vec_goal_pose_type;
  _constraint_vec_goal_pose_type constraint_vec_goal_pose;

   typedef  ::planner_msgs::array2d_double_<ContainerAllocator>  _target_coordinate_dev_type;
  _target_coordinate_dev_type target_coordinate_dev;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _planner_type_type;
  _planner_type_type planner_type;

   typedef uint8_t _run_id_type;
  _run_id_type run_id;

   typedef uint8_t _flag_iter_or_time_type;
  _flag_iter_or_time_type flag_iter_or_time;

   typedef double _iter_or_time_type;
  _iter_or_time_type iter_or_time;

   typedef uint8_t _tree_optimization_type;
  _tree_optimization_type tree_optimization;

   typedef uint8_t _informed_sampling_type;
  _informed_sampling_type informed_sampling;

   typedef uint8_t _show_tree_type;
  _show_tree_type show_tree;





  typedef boost::shared_ptr< ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator> const> ConstPtr;

}; // struct run_planner_start_config_goal_poseRequest_

typedef ::planner_msgs::run_planner_start_config_goal_poseRequest_<std::allocator<void> > run_planner_start_config_goal_poseRequest;

typedef boost::shared_ptr< ::planner_msgs::run_planner_start_config_goal_poseRequest > run_planner_start_config_goal_poseRequestPtr;
typedef boost::shared_ptr< ::planner_msgs::run_planner_start_config_goal_poseRequest const> run_planner_start_config_goal_poseRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator2> & rhs)
{
  return lhs.start_config == rhs.start_config &&
    lhs.goal_ee_pose == rhs.goal_ee_pose &&
    lhs.constraint_vec_goal_pose == rhs.constraint_vec_goal_pose &&
    lhs.target_coordinate_dev == rhs.target_coordinate_dev &&
    lhs.planner_type == rhs.planner_type &&
    lhs.run_id == rhs.run_id &&
    lhs.flag_iter_or_time == rhs.flag_iter_or_time &&
    lhs.iter_or_time == rhs.iter_or_time &&
    lhs.tree_optimization == rhs.tree_optimization &&
    lhs.informed_sampling == rhs.informed_sampling &&
    lhs.show_tree == rhs.show_tree;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6c80be67d948a787e54626f8f4a12ac0";
  }

  static const char* value(const ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6c80be67d948a787ULL;
  static const uint64_t static_value2 = 0xe54626f8f4a12ac0ULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/run_planner_start_config_goal_poseRequest";
  }

  static const char* value(const ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"#Start and Goal Config\n"
"float64[] start_config\n"
"\n"
"#Goal EE pose\n"
"float64[] goal_ee_pose\n"
"int32[] constraint_vec_goal_pose\n"
"\n"
"#Permitted displacement of EE w.r.t target frame\n"
"array2d_double target_coordinate_dev\n"
"\n"
"#Type of planner (uni or bidirectional)\n"
"string planner_type\n"
"\n"
"#ID of the planner run\n"
"uint8 run_id\n"
"\n"
"#Flag indicating whether maximum number of iterations of runtime is used\n"
"uint8 flag_iter_or_time\n"
"\n"
"#Max. number of iterations / or max. runtime \n"
"float64 iter_or_time\n"
"\n"
"#Flag indicating whether tree optimization is used\n"
"bool tree_optimization\n"
"\n"
"#Flag indicating whether informed sampling is used\n"
"bool informed_sampling\n"
"\n"
"#Flag to visualize planning process\n"
"bool show_tree\n"
"\n"
"\n"
"================================================================================\n"
"MSG: planner_msgs/array2d_double\n"
"array1d_double[] array2d_double\n"
"================================================================================\n"
"MSG: planner_msgs/array1d_double\n"
"float64[] array1d_double\n"
;
  }

  static const char* value(const ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.start_config);
      stream.next(m.goal_ee_pose);
      stream.next(m.constraint_vec_goal_pose);
      stream.next(m.target_coordinate_dev);
      stream.next(m.planner_type);
      stream.next(m.run_id);
      stream.next(m.flag_iter_or_time);
      stream.next(m.iter_or_time);
      stream.next(m.tree_optimization);
      stream.next(m.informed_sampling);
      stream.next(m.show_tree);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct run_planner_start_config_goal_poseRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::run_planner_start_config_goal_poseRequest_<ContainerAllocator>& v)
  {
    s << indent << "start_config[]" << std::endl;
    for (size_t i = 0; i < v.start_config.size(); ++i)
    {
      s << indent << "  start_config[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.start_config[i]);
    }
    s << indent << "goal_ee_pose[]" << std::endl;
    for (size_t i = 0; i < v.goal_ee_pose.size(); ++i)
    {
      s << indent << "  goal_ee_pose[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.goal_ee_pose[i]);
    }
    s << indent << "constraint_vec_goal_pose[]" << std::endl;
    for (size_t i = 0; i < v.constraint_vec_goal_pose.size(); ++i)
    {
      s << indent << "  constraint_vec_goal_pose[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.constraint_vec_goal_pose[i]);
    }
    s << indent << "target_coordinate_dev: ";
    s << std::endl;
    Printer< ::planner_msgs::array2d_double_<ContainerAllocator> >::stream(s, indent + "  ", v.target_coordinate_dev);
    s << indent << "planner_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.planner_type);
    s << indent << "run_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.run_id);
    s << indent << "flag_iter_or_time: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flag_iter_or_time);
    s << indent << "iter_or_time: ";
    Printer<double>::stream(s, indent + "  ", v.iter_or_time);
    s << indent << "tree_optimization: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tree_optimization);
    s << indent << "informed_sampling: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.informed_sampling);
    s << indent << "show_tree: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.show_tree);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_RUN_PLANNER_START_CONFIG_GOAL_POSEREQUEST_H