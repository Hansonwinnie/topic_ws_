#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include <math.h>
#include <fstream>
#include <ctime>
using namespace std;
#define RAD2DEG(x) ((x)*180./M_PI)
std::ofstream ofs;
std::ifstream ifs;
using std::chrono::duration_cast;
using std::chrono::milliseconds;
using std::chrono::seconds;
using std::chrono::system_clock;





void scanCb(sensor_msgs::msg::LaserScan::SharedPtr scan) {
  int count = scan->scan_time / scan->time_increment;
  printf("[SLLIDAR INFO]: I heard a laser scan %s[%d]:\n", scan->header.frame_id.c_str(), count);
  printf("[SLLIDAR INFO]: angle_range : [%f, %f]\n", RAD2DEG(scan->angle_min),
         RAD2DEG(scan->angle_max));
  
  
  
  for (int i = 0; i < count; i++) {
    float degree = RAD2DEG(scan->angle_min + scan->angle_increment * i);
    printf("[SLLIDAR INFO]: angle-distance : [%f, %f]\n", degree, scan->ranges[i]);
      if(90.3<degree && degree<90.5){
      auto millisec_since_epoch = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
      float t = millisec_since_epoch;
     
      ofs.open("output.txt",std::ios_base::app); 
      ofs << millisec_since_epoch <<" "<<degree << " " <<scan->ranges[i] << "\n"; 
      ofs.close(); 
      }
      else{
      
      continue;
      } 
     
    }
   
    
    
  }
 
  



int main(int argc, char **argv) {
  rclcpp::init(argc, argv);


  auto node = rclcpp::Node::make_shared("sllidar_client");

  auto lidar_info_sub = node->create_subscription<sensor_msgs::msg::LaserScan>(
                        "scan", rclcpp::SensorDataQoS(), scanCb);
  
    
  rclcpp::spin(node);

  rclcpp::shutdown();


  return 0;
}
