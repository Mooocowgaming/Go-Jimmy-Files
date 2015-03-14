#pragma once
#include <stdint.h>
struct t25;
struct t1023;
struct t219;
#include "t25.h"
struct t1022  : public t25
{
	t25 * f0;
	t1023 * f1;
	t219 * f2;
	int32_t f3;
	int32_t f4;
	int32_t f5;
	t219 * f6;
};
