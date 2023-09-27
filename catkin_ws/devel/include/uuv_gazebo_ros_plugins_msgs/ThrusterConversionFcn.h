// Generated by gencpp from file uuv_gazebo_ros_plugins_msgs/ThrusterConversionFcn.msg
// DO NOT EDIT!


#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_THRUSTERCONVERSIONFCN_H
#define UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_THRUSTERCONVERSIONFCN_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uuv_gazebo_ros_plugins_msgs
{
template <class ContainerAllocator>
struct ThrusterConversionFcn_
{
  typedef ThrusterConversionFcn_<ContainerAllocator> Type;

  ThrusterConversionFcn_()
    : function_name()
    , tags()
    , data()
    , lookup_table_input()
    , lookup_table_output()  {
    }
  ThrusterConversionFcn_(const ContainerAllocator& _alloc)
    : function_name(_alloc)
    , tags(_alloc)
    , data(_alloc)
    , lookup_table_input(_alloc)
    , lookup_table_output(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _function_name_type;
  _function_name_type function_name;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _tags_type;
  _tags_type tags;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _data_type;
  _data_type data;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _lookup_table_input_type;
  _lookup_table_input_type lookup_table_input;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _lookup_table_output_type;
  _lookup_table_output_type lookup_table_output;





  typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> const> ConstPtr;

}; // struct ThrusterConversionFcn_

typedef ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<std::allocator<void> > ThrusterConversionFcn;

typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn > ThrusterConversionFcnPtr;
typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn const> ThrusterConversionFcnConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator1> & lhs, const ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator2> & rhs)
{
  return lhs.function_name == rhs.function_name &&
    lhs.tags == rhs.tags &&
    lhs.data == rhs.data &&
    lhs.lookup_table_input == rhs.lookup_table_input &&
    lhs.lookup_table_output == rhs.lookup_table_output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator1> & lhs, const ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace uuv_gazebo_ros_plugins_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5cc7c4f30276fbc995f2325f64846776";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5cc7c4f30276fbc9ULL;
  static const uint64_t static_value2 = 0x95f2325f64846776ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_gazebo_ros_plugins_msgs/ThrusterConversionFcn";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright (c) 2016 The UUV Simulator Authors.\n"
"# All rights reserved.\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#     http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"string function_name\n"
"string[] tags\n"
"float64[] data\n"
"float64[] lookup_table_input\n"
"float64[] lookup_table_output\n"
;
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.function_name);
      stream.next(m.tags);
      stream.next(m.data);
      stream.next(m.lookup_table_input);
      stream.next(m.lookup_table_output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ThrusterConversionFcn_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator>& v)
  {
    s << indent << "function_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.function_name);
    s << indent << "tags[]" << std::endl;
    for (size_t i = 0; i < v.tags.size(); ++i)
    {
      s << indent << "  tags[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.tags[i]);
    }
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.data[i]);
    }
    s << indent << "lookup_table_input[]" << std::endl;
    for (size_t i = 0; i < v.lookup_table_input.size(); ++i)
    {
      s << indent << "  lookup_table_input[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.lookup_table_input[i]);
    }
    s << indent << "lookup_table_output[]" << std::endl;
    for (size_t i = 0; i < v.lookup_table_output.size(); ++i)
    {
      s << indent << "  lookup_table_output[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.lookup_table_output[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_THRUSTERCONVERSIONFCN_H