#pragma once
#include <stdint.h>
struct t25;
#include "t25.h"
#include "t61.h"
struct t1392  : public t25
{
	t25 * f0;
	t61 f1;
	t25 * f2;
	t25 * f3;
	t25 * f4;
	t25 * f5;
	int64_t f6;
};
