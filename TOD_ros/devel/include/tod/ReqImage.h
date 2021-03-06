// Generated by gencpp from file tod/ReqImage.msg
// DO NOT EDIT!


#ifndef TOD_MESSAGE_REQIMAGE_H
#define TOD_MESSAGE_REQIMAGE_H

#include <ros/service_traits.h>


#include <tod/ReqImageRequest.h>
#include <tod/ReqImageResponse.h>


namespace tod
{

struct ReqImage
{

typedef ReqImageRequest Request;
typedef ReqImageResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ReqImage
} // namespace tod


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tod::ReqImage > {
  static const char* value()
  {
    return "6abf24ca3eea6d1d556c12b7504c3b47";
  }

  static const char* value(const ::tod::ReqImage&) { return value(); }
};

template<>
struct DataType< ::tod::ReqImage > {
  static const char* value()
  {
    return "tod/ReqImage";
  }

  static const char* value(const ::tod::ReqImage&) { return value(); }
};


// service_traits::MD5Sum< ::tod::ReqImageRequest> should match 
// service_traits::MD5Sum< ::tod::ReqImage > 
template<>
struct MD5Sum< ::tod::ReqImageRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tod::ReqImage >::value();
  }
  static const char* value(const ::tod::ReqImageRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tod::ReqImageRequest> should match 
// service_traits::DataType< ::tod::ReqImage > 
template<>
struct DataType< ::tod::ReqImageRequest>
{
  static const char* value()
  {
    return DataType< ::tod::ReqImage >::value();
  }
  static const char* value(const ::tod::ReqImageRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tod::ReqImageResponse> should match 
// service_traits::MD5Sum< ::tod::ReqImage > 
template<>
struct MD5Sum< ::tod::ReqImageResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tod::ReqImage >::value();
  }
  static const char* value(const ::tod::ReqImageResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tod::ReqImageResponse> should match 
// service_traits::DataType< ::tod::ReqImage > 
template<>
struct DataType< ::tod::ReqImageResponse>
{
  static const char* value()
  {
    return DataType< ::tod::ReqImage >::value();
  }
  static const char* value(const ::tod::ReqImageResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TOD_MESSAGE_REQIMAGE_H
