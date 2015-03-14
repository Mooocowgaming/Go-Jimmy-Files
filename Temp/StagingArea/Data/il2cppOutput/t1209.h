#pragma once
#include <stdint.h>
struct t25;
struct t823;
struct t1163;
struct t1160;
struct t438;
struct t822;
struct t1210;
struct t1209;
#include "t25.h"
#include "t1215.h"
struct t1209  : public t25
{
	uint8_t f0;
	t25 * f1;
	t25 * f2;
	int64_t f3;
	t823 * f4;
	int64_t f5;
	t25 * f6;
	t25 * f7;
	t438 * f8;
	t822* f9;
	t1210 * f10;
	t1210 * f11;
	t1209 * f12;
};
