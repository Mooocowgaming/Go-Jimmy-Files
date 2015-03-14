#pragma once
#include <stdint.h>
struct t25;
#include "t905.h"
#include "t61.h"
struct t1264  : public t905
{
	t61 f1;
};
struct t1264_SFs{
	t25 * f0;
};
