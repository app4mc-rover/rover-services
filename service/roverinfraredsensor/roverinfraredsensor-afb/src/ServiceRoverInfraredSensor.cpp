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
#include <service/ServiceRoverInfraredSensor.h>
#include <roverapi/rover_infraredsensor.hpp>

static RoverInfraredSensor obj;

ServiceRoverInfraredSensor::ServiceRoverInfraredSensor() {
  AFB_NOTICE("[ServiceRoverInfraredSensor] Constructor ");
}

int ServiceRoverInfraredSensor::init() {
  AFB_NOTICE("[ServiceRoverInfraredSensor] Init ");

  obj.initialize();

  return 0;
}


/** Autogenrated doc for read */
int ServiceRoverInfraredSensor::read(double &out_speed) {

  AFB_NOTICE("[ServiceRoverInfraredSensor] Read");

  out_speed = obj.read();

  return 0;
}
