#pragma once
#include <stdint.h>
#include "t550.h"
#include "t61.h"
struct t185  : public t550
{
	t61 f0;
};
// Native definition for marshalling of: UnityEngine.AsyncOperation
struct t185_marshaled
{
	t61 f0;
};
