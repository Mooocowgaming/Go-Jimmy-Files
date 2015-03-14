#pragma once
#include <stdint.h>
#include "t25.h"
#include "t1015.h"
#include "t61.h"
struct t1027  : public t25
{
};
struct t1027_SFs{
	int32_t f0;
	t61 f1;
};
