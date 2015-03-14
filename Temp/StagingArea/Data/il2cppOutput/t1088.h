#pragma once
#include <stdint.h>
struct t1090;
#include "t841.h"
#include "t61.h"
#include "t1086.h"
#include "t1089.h"
struct t1088  : public t841
{
	t61 f0;
	t61 f1;
	t1086  f2;
	int32_t f3;
	t1090 * f4;
};
