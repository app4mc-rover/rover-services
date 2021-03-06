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
extern "C"
{
   #define AFB_BINDING_VERSION 2
   #include <afb/afb-binding.h>
};


#include <cstddef>
#include <cstdio>
#include <cstring>

#include <json-c/json.h>

#include <service/ServiceRoverGrooveUltrasonicSensor.h>
// #include <all_types.h>

static ServiceRoverGrooveUltrasonicSensor obj;

static int init()
{
  int rc = 0;
	AFB_NOTICE("Initializing... ");
  rc = obj.init();
	AFB_NOTICE("Initialization done!");
	return rc;
}

static void read(struct afb_req request) {
  json_object *args = afb_req_json(request);
  double _var_distance = static_cast<double>(0);
  json_object * new_json = json_object_new_object();
  json_object * new_sub_json = NULL;
  json_object *val[1];
  int ret = 0;

  AFB_NOTICE("[rovergrooveultrasonicsensor] Calling read");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "sensor_id", &val[0])) {
      AFB_ERROR("[rovergrooveultrasonicsensor] No 'sensor_id' param provided");
      afb_req_fail(request, "bad-request", "No 'sensor_id' param provided");
      return;
    }


  }


  ret = obj.read(static_cast<rover_sensor_id>(json_object_get_int(val[0])),
      _var_distance);
  if (ret) {
    AFB_ERROR("[rovergrooveultrasonicsensor] Verb 'read' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'read' returning error %d", ret);
    return;
  }


  new_sub_json = json_object_new_double(_var_distance);
  json_object_object_add(new_json, "distance", new_sub_json);

  afb_req_success(request, new_json, NULL);
  // Release the request json object
  json_object_put(new_json);

}

static void set_sig_pin(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[2];
  int ret = 0;

  AFB_NOTICE("[rovergrooveultrasonicsensor] Calling set_sig_pin");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "sensor_id", &val[0])) {
      AFB_ERROR("[rovergrooveultrasonicsensor] No 'sensor_id' param provided");
      afb_req_fail(request, "bad-request", "No 'sensor_id' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "sig_pin", &val[1])) {
      AFB_ERROR("[rovergrooveultrasonicsensor] No 'sig_pin' param provided");
      afb_req_fail(request, "bad-request", "No 'sig_pin' param provided");
      return;
    }


  }


  ret = obj.set_sig_pin(static_cast<rover_sensor_id>(json_object_get_int(val[0])),
      static_cast<int>(json_object_get_int(val[1])));
  if (ret) {
    AFB_ERROR("[rovergrooveultrasonicsensor] Verb 'set_sig_pin' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'set_sig_pin' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void check(struct afb_req request) {
  json_object *args = afb_req_json(request);
  bool _var_enable = static_cast<bool>(0);
  json_object * new_json = json_object_new_object();
  json_object * new_sub_json = NULL;
  json_object *val[1];
  int ret = 0;

  AFB_NOTICE("[rovergrooveultrasonicsensor] Calling check");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "sensor_id", &val[0])) {
      AFB_ERROR("[rovergrooveultrasonicsensor] No 'sensor_id' param provided");
      afb_req_fail(request, "bad-request", "No 'sensor_id' param provided");
      return;
    }


  }


  ret = obj.check(static_cast<rover_sensor_id>(json_object_get_int(val[0])),
      _var_enable);
  if (ret) {
    AFB_ERROR("[rovergrooveultrasonicsensor] Verb 'check' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'check' returning error %d", ret);
    return;
  }


  new_sub_json = json_object_new_boolean(_var_enable);
  json_object_object_add(new_json, "enable", new_sub_json);

  afb_req_success(request, new_json, NULL);
  // Release the request json object
  json_object_put(new_json);

}

static void get_sig_pin(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int _var_sig_pin = static_cast<int>(0);
  json_object * new_json = json_object_new_object();
  json_object * new_sub_json = NULL;
  json_object *val[1];
  int ret = 0;

  AFB_NOTICE("[rovergrooveultrasonicsensor] Calling get_sig_pin");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "sensor_id", &val[0])) {
      AFB_ERROR("[rovergrooveultrasonicsensor] No 'sensor_id' param provided");
      afb_req_fail(request, "bad-request", "No 'sensor_id' param provided");
      return;
    }


  }


  ret = obj.get_sig_pin(static_cast<rover_sensor_id>(json_object_get_int(val[0])),
      _var_sig_pin);
  if (ret) {
    AFB_ERROR("[rovergrooveultrasonicsensor] Verb 'get_sig_pin' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'get_sig_pin' returning error %d", ret);
    return;
  }


  new_sub_json = json_object_new_int(_var_sig_pin);
  json_object_object_add(new_json, "sig_pin", new_sub_json);

  afb_req_success(request, new_json, NULL);
  // Release the request json object
  json_object_put(new_json);

}


// static const struct afb_auth _afb_auths_v2_monitor[] = {
// 	{type : afb_auth_Permission, text : "urn:AGL:permission:monitor:public:set"},
// 	{type : afb_auth_Permission, text : "urn:AGL:permission:monitor:public:get"},
// 	{type : afb_auth_Or, first : &_afb_auths_v2_monitor[1], next : &_afb_auths_v2_monitor[0]}
// };

static const struct afb_verb_v2 verbs[] = {
  /*Without security*/
  {.verb = "read", .callback = read, .auth = NULL, .info = "Read Data From Sensor", .session = 0},
  {.verb = "set_sig_pin", .callback = set_sig_pin, .auth = NULL, .info = "Sets the private attribute sigPin for Groove Ultrasonic Sensor", .session = 0},
  {.verb = "check", .callback = check, .auth = NULL, .info = "Check if the sensor is enabled", .session = 0},
  {.verb = "get_sig_pin", .callback = get_sig_pin, .auth = NULL, .info = "Sets the private attribute sigPin for Groove Ultrasonic Sensor", .session = 0},
  {.verb= NULL, .callback=NULL, .auth = NULL, .info = NULL, .session = 0 }
};

const struct afb_binding_v2 afbBindingV2 = {
  .api = "rovergrooveultrasonicsensor",
  .specification = "",
  .info = "Auto generated - Rover Groove Ultrasonic Sensor",
  .verbs = verbs,
  .preinit = NULL,
  .init = init,
  .onevent = NULL,
  .noconcurrency = 1
};