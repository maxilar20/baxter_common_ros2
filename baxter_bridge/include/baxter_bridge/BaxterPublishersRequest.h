// Generated by gencpp from file baxter_bridge/BaxterPublishersRequest.msg
// DO NOT EDIT!


#ifndef BAXTER_BRIDGE_MESSAGE_BAXTERPUBLISHERSREQUEST_H
#define BAXTER_BRIDGE_MESSAGE_BAXTERPUBLISHERSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace baxter_bridge
{
template <class ContainerAllocator>
struct BaxterPublishersRequest_
{
  typedef BaxterPublishersRequest_<ContainerAllocator> Type;

  BaxterPublishersRequest_()
    : topic()
    , user()  {
    }
  BaxterPublishersRequest_(const ContainerAllocator& _alloc)
    : topic(_alloc)
    , user(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topic_type;
  _topic_type topic;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _user_type;
  _user_type user;





  typedef boost::shared_ptr< ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator> const> ConstPtr;

}; // struct BaxterPublishersRequest_

typedef ::baxter_bridge::BaxterPublishersRequest_<std::allocator<void> > BaxterPublishersRequest;

typedef boost::shared_ptr< ::baxter_bridge::BaxterPublishersRequest > BaxterPublishersRequestPtr;
typedef boost::shared_ptr< ::baxter_bridge::BaxterPublishersRequest const> BaxterPublishersRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator1> & lhs, const ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator2> & rhs)
{
  return lhs.topic == rhs.topic &&
    lhs.user == rhs.user;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator1> & lhs, const ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace baxter_bridge

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b16cb0c81cf9122d3d29f22bf77acc6e";
  }

  static const char* value(const ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb16cb0c81cf9122dULL;
  static const uint64_t static_value2 = 0x3d29f22bf77acc6eULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_bridge/BaxterPublishersRequest";
  }

  static const char* value(const ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string topic\n"
"string user\n"
;
  }

  static const char* value(const ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topic);
      stream.next(m.user);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BaxterPublishersRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_bridge::BaxterPublishersRequest_<ContainerAllocator>& v)
  {
    s << indent << "topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topic);
    s << indent << "user: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.user);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_BRIDGE_MESSAGE_BAXTERPUBLISHERSREQUEST_H