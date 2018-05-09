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
#include <service/ServiceRoverGrooveUltrasonicSensor.h>
#include <roverapi/rover_grooveultrasonic.hpp>

using namespace rover;

static RoverGrooveUltrasonic rearSensor(static_cast<const RoverSensorID_t>(rover_sensor_id::rear));
static RoverGrooveUltrasonic frontSensor(static_cast<const RoverSensorID_t>(rover_sensor_id::front));

inline RoverGrooveUltrasonic getSensor(const rover_sensor_id id) {
  switch (id) {
    case rear:
      return rearSensor;
    case front:
      return frontSensor;
    default:
      return frontSensor; // Note that the id is check in every function
  }
}

inline bool check_id(const rover_sensor_id id) {
  switch (id) {
    case rear:
    case front:
      return true;
    default:
      return false;
  }
}

ServiceRoverGrooveUltrasonicSensor::ServiceRoverGrooveUltrasonicSensor() {
  AFB_NOTICE("[ServiceRoverGrooveUltrasonicSensor] Constructor ");
}

int ServiceRoverGrooveUltrasonicSensor::init() {
  AFB_NOTICE("[ServiceRoverGrooveUltrasonicSensor] Init ");

  rearSensor.initialize();
  frontSensor.initialize();

  return 0;
}


/** Autogenrated doc for check */
int ServiceRoverGrooveUltrasonicSensor::check(const rover_sensor_id in_sensor_id,
    bool &out_enable) {

  AFB_NOTICE("[ServiceRoverGrooveUltrasonicSensor] Check");

  RoverGrooveUltrasonic sensor = getSensor(in_sensor_id);

  if (!check_id(in_sensor_id)) {
    return -1;
  }

  // TODO: Implement this check
  out_enable = true;

  return 0;
}

/** Autogenrated doc for get_sig_pin */
int ServiceRoverGrooveUltrasonicSensor::get_sig_pin(const rover_sensor_id in_sensor_id,
    int &out_sig_pin) {

  AFB_NOTICE("[ServiceRoverGrooveUltrasonicSensor] Get_sig_pin");
  RoverGrooveUltrasonic sensor = getSensor(in_sensor_id);

  if (!check_id(in_sensor_id)) {
    return -1;
  }

  out_sig_pin = sensor.getSigPin();

  return 0;
}

/** Autogenrated doc for read */
int ServiceRoverGrooveUltrasonicSensor::read(const rover_sensor_id in_sensor_id,
    double &out_distance) {

  AFB_NOTICE("[ServiceRoverGrooveUltrasonicSensor] Read");
  RoverGrooveUltrasonic sensor = getSensor(in_sensor_id);

  if (!check_id(in_sensor_id)) {
    return -1;
  }

  out_distance = static_cast<double>(sensor.read());

  return 0;
}

/** Autogenrated doc for set_sig_pin */
int ServiceRoverGrooveUltrasonicSensor::set_sig_pin(const rover_sensor_id in_sensor_id,
    const int in_sig_pin) {

  AFB_NOTICE("[ServiceRoverGrooveUltrasonicSensor] Set_sig_pin");
  RoverGrooveUltrasonic sensor = getSensor(in_sensor_id);

  if (!check_id(in_sensor_id)) {
    return -1;
  }

  sensor.setSigPin(in_sig_pin);

  return 0;
}
