#pragma once
#include <pebble.h>

typedef Layer DateLayer;

DateLayer *date_layer_create(GPoint origin);
void date_layer_destroy(DateLayer *this);
