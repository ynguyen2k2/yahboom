// Generated by gencpp from file yahboomcar_msgs/ArmJoint.msg
// DO NOT EDIT!


#ifndef YAHBOOMCAR_MSGS_MESSAGE_ARMJOINT_H
#define YAHBOOMCAR_MSGS_MESSAGE_ARMJOINT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace yahboomcar_msgs
{
template <class ContainerAllocator>
struct ArmJoint_
{
  typedef ArmJoint_<ContainerAllocator> Type;

  ArmJoint_()
    : id(0)
    , run_time(0)
    , angle(0.0)
    , joints()  {
    }
  ArmJoint_(const ContainerAllocator& _alloc)
    : id(0)
    , run_time(0)
    , angle(0.0)
    , joints(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _run_time_type;
  _run_time_type run_time;

   typedef float _angle_type;
  _angle_type angle;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _joints_type;
  _joints_type joints;





  typedef boost::shared_ptr< ::yahboomcar_msgs::ArmJoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yahboomcar_msgs::ArmJoint_<ContainerAllocator> const> ConstPtr;

}; // struct ArmJoint_

typedef ::yahboomcar_msgs::ArmJoint_<std::allocator<void> > ArmJoint;

typedef boost::shared_ptr< ::yahboomcar_msgs::ArmJoint > ArmJointPtr;
typedef boost::shared_ptr< ::yahboomcar_msgs::ArmJoint const> ArmJointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yahboomcar_msgs::ArmJoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yahboomcar_msgs::ArmJoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::yahboomcar_msgs::ArmJoint_<ContainerAllocator1> & lhs, const ::yahboomcar_msgs::ArmJoint_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.run_time == rhs.run_time &&
    lhs.angle == rhs.angle &&
    lhs.joints == rhs.joints;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::yahboomcar_msgs::ArmJoint_<ContainerAllocator1> & lhs, const ::yahboomcar_msgs::ArmJoint_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace yahboomcar_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::yahboomcar_msgs::ArmJoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yahboomcar_msgs::ArmJoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yahboomcar_msgs::ArmJoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yahboomcar_msgs::ArmJoint_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yahboomcar_msgs::ArmJoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yahboomcar_msgs::ArmJoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yahboomcar_msgs::ArmJoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a1cefc25e3f9baafff8b51ba13bc770b";
  }

  static const char* value(const ::yahboomcar_msgs::ArmJoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa1cefc25e3f9baafULL;
  static const uint64_t static_value2 = 0xff8b51ba13bc770bULL;
};

template<class ContainerAllocator>
struct DataType< ::yahboomcar_msgs::ArmJoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yahboomcar_msgs/ArmJoint";
  }

  static const char* value(const ::yahboomcar_msgs::ArmJoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yahboomcar_msgs::ArmJoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n"
"int32 run_time\n"
"float32 angle\n"
"float32[] joints\n"
;
  }

  static const char* value(const ::yahboomcar_msgs::ArmJoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yahboomcar_msgs::ArmJoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.run_time);
      stream.next(m.angle);
      stream.next(m.joints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ArmJoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yahboomcar_msgs::ArmJoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yahboomcar_msgs::ArmJoint_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "run_time: ";
    Printer<int32_t>::stream(s, indent + "  ", v.run_time);
    s << indent << "angle: ";
    Printer<float>::stream(s, indent + "  ", v.angle);
    s << indent << "joints[]" << std::endl;
    for (size_t i = 0; i < v.joints.size(); ++i)
    {
      s << indent << "  joints[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.joints[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // YAHBOOMCAR_MSGS_MESSAGE_ARMJOINT_H