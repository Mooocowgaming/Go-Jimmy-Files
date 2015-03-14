#pragma once
#include <stdint.h>
struct t210;
#include "t25.h"
#include "t213.h"
struct t212  : public t25
{
	int32_t f0;
	t210 * f1;
};
