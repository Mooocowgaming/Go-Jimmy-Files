#pragma once
#include <stdint.h>
struct t25;
struct t905;
#include "t117.h"
#include "t1385.h"
struct t1385 
{
	int32_t f0;
	int16_t f1;
	int16_t f2;
	uint8_t f3;
	uint8_t f4;
	uint8_t f5;
	uint8_t f6;
	uint8_t f7;
	uint8_t f8;
	uint8_t f9;
	uint8_t f10;
};
struct t1385_SFs{
	t1385  f11;
	t25 * f12;
	t905 * f13;
};
