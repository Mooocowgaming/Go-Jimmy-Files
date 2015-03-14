#pragma once
#include <stdint.h>
#include "t550.h"
#include "t61.h"
struct t181  : public t550
{
	t61 f0;
};
// Native definition for marshalling of: UnityEngine.Coroutine
struct t181_marshaled
{
	t61 f0;
};
