/**
 * @file main.cpp
 * @author Sai Teja Giluara (saitejag@umd.edu) - Driver, Aaqib Barodawala
 * (abarodaw@umd.edu) - Navigator
 * @author Darshit Desai (darshit@umd.edu) - Driver, Sameer Arjun S
 * (ssarjun@umd.edu) - Navigator
 * @brief A program to run the control system using PIDController class
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

#include "../include/PIDController.hpp"
int main() {
  tddgroup7_pair1::PIDController pid;
  double setPoint = 0.0;
  double currentState = 0.0;
  double kp = 0.0;
  double ki = 0.0;
  double kd = 0.0;
  std::cout << "Enter the value of kp: " << std::endl;
  std::cin >> kp;
  std::cout << "Enter the value of ki: " << std::endl;
  std::cin >> ki;
  std::cout << "Enter the value of kd: " << std::endl;
  std::cin >> kd;
  pid.setKp(kp);
  pid.setKi(ki);
  pid.setKd(kd);
  std::cout << "Enter the value of setPoint: " << std::endl;
  std::cin >> setPoint;
  std::cout << "Enter the value of currentState: " << std::endl;
  std::cin >> currentState;
  std::cout << "The error after running one iteration of PID loop is: "
            << pid.computeError(setPoint, currentState) << std::endl;
  return 0;
}
