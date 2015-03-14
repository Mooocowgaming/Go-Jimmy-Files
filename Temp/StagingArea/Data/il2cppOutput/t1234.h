#pragma once
#include <stdint.h>
struct t25;
struct t972;
#include "t25.h"
struct t1234  : public t25
{
};
struct t1234_SFs{
	t25 * f0;
	t972 * f1;
	t972 * f2;
};
