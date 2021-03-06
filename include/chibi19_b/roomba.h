// Generated by gencpp from file chibi19_b/roomba.msg
// DO NOT EDIT!


#ifndef CHIBI19_B_MESSAGE_ROOMBA_H
#define CHIBI19_B_MESSAGE_ROOMBA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace chibi19_b
{
template <class ContainerAllocator>
struct roomba_
{
  typedef roomba_<ContainerAllocator> Type;

  roomba_()
    : status(0)  {
    }
  roomba_(const ContainerAllocator& _alloc)
    : status(0)  {
  (void)_alloc;
    }



   typedef int8_t _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::chibi19_b::roomba_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::chibi19_b::roomba_<ContainerAllocator> const> ConstPtr;

}; // struct roomba_

typedef ::chibi19_b::roomba_<std::allocator<void> > roomba;

typedef boost::shared_ptr< ::chibi19_b::roomba > roombaPtr;
typedef boost::shared_ptr< ::chibi19_b::roomba const> roombaConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::chibi19_b::roomba_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::chibi19_b::roomba_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace chibi19_b

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'chibi19_b': ['/home/wataru/ros_catkin_ws/src/chibi19_b/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::chibi19_b::roomba_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::chibi19_b::roomba_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::chibi19_b::roomba_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::chibi19_b::roomba_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::chibi19_b::roomba_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::chibi19_b::roomba_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::chibi19_b::roomba_<ContainerAllocator> >
{
  static const char* value()
  {
    return "581cc55c12abfc219e446416014f6d0e";
  }

  static const char* value(const ::chibi19_b::roomba_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x581cc55c12abfc21ULL;
  static const uint64_t static_value2 = 0x9e446416014f6d0eULL;
};

template<class ContainerAllocator>
struct DataType< ::chibi19_b::roomba_<ContainerAllocator> >
{
  static const char* value()
  {
    return "chibi19_b/roomba";
  }

  static const char* value(const ::chibi19_b::roomba_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::chibi19_b::roomba_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 status\n\
";
  }

  static const char* value(const ::chibi19_b::roomba_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::chibi19_b::roomba_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct roomba_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::chibi19_b::roomba_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::chibi19_b::roomba_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CHIBI19_B_MESSAGE_ROOMBA_H
