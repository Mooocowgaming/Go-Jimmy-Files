#pragma once
#include <stdint.h>
struct t595;
#include "t25.h"
struct t140  : public t25
{
};
struct t140_SFs{
	t595 * f0;
	t595 * f1;
};
