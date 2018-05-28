/* Copyright 2018 Pedro Cuadra - pjcuadra@gmail.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* WARNING: This file is automatically generated by raml2agl */
#ifndef __RAML2AGL_SERVICE_CLASS_SERVICEROVERHMC5883L_H_
#define __RAML2AGL_SERVICE_CLASS_SERVICEROVERHMC5883L_H_

#pragma once
#include <cstddef>
#include <string.h>
#include <string>

extern "C"
{
    #define AFB_BINDING_VERSION 2
    #include <afb/afb-binding.h>
};

enum rover_button_id {
  user_button,
  shutdown_button,
  custom_button
};
enum rover_demo_id {
  buzzer,
  driving,
  buttons,
  infrared,
  rover_demo_max
};
enum rover_sensor_id {
  rear_right,
  front_right,
  rear_left,
  front_left,
  front,
  rear
};

class ServiceRoverHmc5883L {
public:
  ServiceRoverHmc5883L();

  int init();

    /** Autogenrated doc for calibrate */
    int calibrate();

    /** Autogenrated doc for get_address */
    int get_address(int &out_address);

    /** Autogenrated doc for get_calibration_period */
    int get_calibration_period(int &out_period);

    /** Autogenrated doc for get_declination_angle */
    int get_declination_angle(double &out_angle);

    /** Autogenrated doc for read */
    int read(double &out_bearing_value);

    /** Autogenrated doc for set_address */
    int set_address(const int in_address);

    /** Autogenrated doc for set_calibration_period */
    int set_calibration_period(const int in_period);

    /** Autogenrated doc for set_declination_angle */
    int set_declination_angle(const double in_angle);

};

#endif //__RAML2AGL_SERVICE_CLASS_SERVICEROVERHMC5883L_H_