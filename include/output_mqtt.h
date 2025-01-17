/** @file
    MQTT output for rtl_433 events

    Copyright (C) 2019 Christian Zuckschwerdt

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
*/

#ifndef INCLUDE_OUTPUT_MQTT_H_
#define INCLUDE_OUTPUT_MQTT_H_

#include "data.h"
#include "pulse_detect.h"

struct mg_mgr;

struct data_output *data_output_mqtt_create(struct mg_mgr *mgr, char *param, char const *dev_hint);

const char *input_mqtt_rfraw_config(const char *topic);
int input_mqtt_rfraw_read(pulse_data_t *data);

#endif /* INCLUDE_OUTPUT_MQTT_H_ */
