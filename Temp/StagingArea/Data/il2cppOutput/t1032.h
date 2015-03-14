#pragma once
#include <stdint.h>
struct t25;
struct t168;
struct t1023;
#include "t25.h"
struct t1032  : public t25
{
	t25 * f0;
	bool f1;
	bool f2;
	t168 * f3;
	int32_t f4;
	t1023 * f5;
};
