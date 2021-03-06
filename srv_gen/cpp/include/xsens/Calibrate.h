/* Auto-generated by genmsg_cpp for file /home/santiago/workspace/ros/xsens/srv/Calibrate.srv */
#ifndef XSENS_SERVICE_CALIBRATE_H
#define XSENS_SERVICE_CALIBRATE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"



#include "geometry_msgs/Vector3.h"

namespace xsens
{
template <class ContainerAllocator>
struct CalibrateRequest_ {
  typedef CalibrateRequest_<ContainerAllocator> Type;

  CalibrateRequest_()
  : kind(0)
  , samples(0)
  {
  }

  CalibrateRequest_(const ContainerAllocator& _alloc)
  : kind(0)
  , samples(0)
  {
  }

  typedef int32_t _kind_type;
  int32_t kind;

  typedef int32_t _samples_type;
  int32_t samples;

  enum { ORIENTATION = 1 };
  enum { DRIFT = 2 };

  typedef boost::shared_ptr< ::xsens::CalibrateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xsens::CalibrateRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CalibrateRequest
typedef  ::xsens::CalibrateRequest_<std::allocator<void> > CalibrateRequest;

typedef boost::shared_ptr< ::xsens::CalibrateRequest> CalibrateRequestPtr;
typedef boost::shared_ptr< ::xsens::CalibrateRequest const> CalibrateRequestConstPtr;


template <class ContainerAllocator>
struct CalibrateResponse_ {
  typedef CalibrateResponse_<ContainerAllocator> Type;

  CalibrateResponse_()
  : compensation()
  {
  }

  CalibrateResponse_(const ContainerAllocator& _alloc)
  : compensation(_alloc)
  {
  }

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _compensation_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  compensation;


  typedef boost::shared_ptr< ::xsens::CalibrateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xsens::CalibrateResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CalibrateResponse
typedef  ::xsens::CalibrateResponse_<std::allocator<void> > CalibrateResponse;

typedef boost::shared_ptr< ::xsens::CalibrateResponse> CalibrateResponsePtr;
typedef boost::shared_ptr< ::xsens::CalibrateResponse const> CalibrateResponseConstPtr;

struct Calibrate
{

typedef CalibrateRequest Request;
typedef CalibrateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Calibrate
} // namespace xsens

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::xsens::CalibrateRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::xsens::CalibrateRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::xsens::CalibrateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6bb73ea196686a0c6c1f47cec4e388ba";
  }

  static const char* value(const  ::xsens::CalibrateRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6bb73ea196686a0cULL;
  static const uint64_t static_value2 = 0x6c1f47cec4e388baULL;
};

template<class ContainerAllocator>
struct DataType< ::xsens::CalibrateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "xsens/CalibrateRequest";
  }

  static const char* value(const  ::xsens::CalibrateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::xsens::CalibrateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
int32 ORIENTATION=1\n\
int32 DRIFT=2\n\
\n\
int32 kind\n\
int32 samples\n\
\n\
";
  }

  static const char* value(const  ::xsens::CalibrateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::xsens::CalibrateRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::xsens::CalibrateResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::xsens::CalibrateResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::xsens::CalibrateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e176c7fa8cadfc517116f2eec0643305";
  }

  static const char* value(const  ::xsens::CalibrateResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe176c7fa8cadfc51ULL;
  static const uint64_t static_value2 = 0x7116f2eec0643305ULL;
};

template<class ContainerAllocator>
struct DataType< ::xsens::CalibrateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "xsens/CalibrateResponse";
  }

  static const char* value(const  ::xsens::CalibrateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::xsens::CalibrateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "geometry_msgs/Vector3 compensation\n\
\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::xsens::CalibrateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::xsens::CalibrateResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::xsens::CalibrateRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.kind);
    stream.next(m.samples);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CalibrateRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::xsens::CalibrateResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.compensation);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CalibrateResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<xsens::Calibrate> {
  static const char* value() 
  {
    return "728ba486b30d3957849534789a026b96";
  }

  static const char* value(const xsens::Calibrate&) { return value(); } 
};

template<>
struct DataType<xsens::Calibrate> {
  static const char* value() 
  {
    return "xsens/Calibrate";
  }

  static const char* value(const xsens::Calibrate&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<xsens::CalibrateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "728ba486b30d3957849534789a026b96";
  }

  static const char* value(const xsens::CalibrateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<xsens::CalibrateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "xsens/Calibrate";
  }

  static const char* value(const xsens::CalibrateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<xsens::CalibrateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "728ba486b30d3957849534789a026b96";
  }

  static const char* value(const xsens::CalibrateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<xsens::CalibrateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "xsens/Calibrate";
  }

  static const char* value(const xsens::CalibrateResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // XSENS_SERVICE_CALIBRATE_H

