// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/MapGraph.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__MAP_GRAPH__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__MAP_GRAPH__BUILDER_HPP_

#include "rtabmap_msgs/msg/detail/map_graph__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_MapGraph_links
{
public:
  explicit Init_MapGraph_links(::rtabmap_msgs::msg::MapGraph & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::MapGraph links(::rtabmap_msgs::msg::MapGraph::_links_type arg)
  {
    msg_.links = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::MapGraph msg_;
};

class Init_MapGraph_poses
{
public:
  explicit Init_MapGraph_poses(::rtabmap_msgs::msg::MapGraph & msg)
  : msg_(msg)
  {}
  Init_MapGraph_links poses(::rtabmap_msgs::msg::MapGraph::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_MapGraph_links(msg_);
  }

private:
  ::rtabmap_msgs::msg::MapGraph msg_;
};

class Init_MapGraph_poses_id
{
public:
  explicit Init_MapGraph_poses_id(::rtabmap_msgs::msg::MapGraph & msg)
  : msg_(msg)
  {}
  Init_MapGraph_poses poses_id(::rtabmap_msgs::msg::MapGraph::_poses_id_type arg)
  {
    msg_.poses_id = std::move(arg);
    return Init_MapGraph_poses(msg_);
  }

private:
  ::rtabmap_msgs::msg::MapGraph msg_;
};

class Init_MapGraph_map_to_odom
{
public:
  explicit Init_MapGraph_map_to_odom(::rtabmap_msgs::msg::MapGraph & msg)
  : msg_(msg)
  {}
  Init_MapGraph_poses_id map_to_odom(::rtabmap_msgs::msg::MapGraph::_map_to_odom_type arg)
  {
    msg_.map_to_odom = std::move(arg);
    return Init_MapGraph_poses_id(msg_);
  }

private:
  ::rtabmap_msgs::msg::MapGraph msg_;
};

class Init_MapGraph_header
{
public:
  Init_MapGraph_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapGraph_map_to_odom header(::rtabmap_msgs::msg::MapGraph::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MapGraph_map_to_odom(msg_);
  }

private:
  ::rtabmap_msgs::msg::MapGraph msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::MapGraph>()
{
  return rtabmap_msgs::msg::builder::Init_MapGraph_header();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__MAP_GRAPH__BUILDER_HPP_
