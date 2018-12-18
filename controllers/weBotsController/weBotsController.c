#include <webots/robot.h>
#include <webots/motor.h>

#define TIME_STEP 64

int main() {
   wb_robot_init();

  // initialize motors
  WbDeviceTag frontRight = wb_robot_get_device("rtm_front_right_wheel");
  WbDeviceTag backRight = wb_robot_get_device("rtm_back_right_wheel"); 
  WbDeviceTag midRight = wb_robot_get_device("rtm_mid_right_wheel");
  
  WbDeviceTag frontLeft = wb_robot_get_device("rtm_front_left_wheel");
  WbDeviceTag backLeft = wb_robot_get_device("rtm_back_left_wheel");

  //Set speeds
  double speed = 1.5;
  wb_motor_set_position(frontRight, INFINITY);
  wb_motor_set_velocity(frontRight, speed);
  wb_motor_set_position(backRight, INFINITY);
  wb_motor_set_velocity(backRight, speed);
  wb_motor_set_position(midRight, INFINITY);
  wb_motor_set_velocity(midRight, speed);
  
  
  wb_motor_set_position(frontLeft, INFINITY);
  wb_motor_set_velocity(frontLeft, speed);
  wb_motor_set_position(backLeft, INFINITY);
  wb_motor_set_velocity(backLeft, speed);
  
  while (wb_robot_step(TIME_STEP) != -1){
  }
  
  wb_robot_cleanup();
  return 0;
}
