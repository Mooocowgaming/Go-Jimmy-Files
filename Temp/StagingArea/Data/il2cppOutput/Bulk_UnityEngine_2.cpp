#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t384.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo t384_TI;
#include "t384MD.h"

#include "t125.h"
#include "t148.h"
#include "t434.h"
#include "t117.h"
#include "t25.h"
#include "t6.h"
#include "t124.h"
#include "t134.h"
#include "t296.h"
#include "t297.h"
#include "t298.h"
#include "t299.h"
#include "t295.h"
#include "t60.h"
extern TypeInfo t434_TI;
extern TypeInfo t117_TI;
extern TypeInfo t125_TI;
extern TypeInfo t25_TI;
extern TypeInfo t6_TI;
extern TypeInfo t126_TI;
extern TypeInfo t384_TI;
#include "t434MD.h"
#include "t117MD.h"
#include "t126MD.h"
#include "t60MD.h"
extern MethodInfo m2091_MI;
extern MethodInfo m625_MI;
extern MethodInfo m1969_MI;
extern MethodInfo m3299_MI;
extern MethodInfo m3300_MI;
extern MethodInfo m411_MI;

#include "t122.h"

extern MethodInfo m3299_MI;
 bool m3299 (t384 * __this, t148  p0, t148  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3299_MI);
	t434  V_0 = {0};
	t434  V_1 = {0};
	{
		t434  L_0 = m2091(NULL, p0, &m2091_MI);
		V_0 = L_0;
		t434  L_1 = m2091(NULL, p1, &m2091_MI);
		V_1 = L_1;
		t434  L_2 = V_0;
		t25 * L_3 = Box(InitializedTypeInfo(&t434_TI), &L_2);
		t434  L_4 = V_1;
		t25 * L_5 = Box(InitializedTypeInfo(&t434_TI), &L_4);
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t25 * >::Invoke(&m625_MI, L_3, L_5);
		return L_6;
	}
}
extern MethodInfo m3300_MI;
 bool m3300 (t384 * __this, t6  p0, t6  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3300_MI);
	int32_t G_B3_0 = 0;
	{
		NullCheck((&p0));
		float L_0 = ((&p0)->f1);
		NullCheck((&p1));
		float L_1 = ((&p1)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		bool L_2 = m1969(NULL, L_0, L_1, &m1969_MI);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		NullCheck((&p0));
		float L_3 = ((&p0)->f2);
		NullCheck((&p1));
		float L_4 = ((&p1)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		bool L_5 = m1969(NULL, L_3, L_4, &m1969_MI);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
extern MethodInfo m3301_MI;
 bool m3301 (t384 * __this, t384  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3301_MI);
	int32_t G_B19_0 = 0;
	{
		t148  L_0 = (__this->f1);
		NullCheck((&p0));
		t148  L_1 = ((&p0)->f1);
		bool L_2 = m3299(__this, L_0, L_1, &m3299_MI);
		if (!L_2)
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_3 = (__this->f2);
		NullCheck((&p0));
		int32_t L_4 = ((&p0)->f2);
		if ((((uint32_t)L_3) != ((uint32_t)L_4)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_5 = (__this->f8);
		NullCheck((&p0));
		int32_t L_6 = ((&p0)->f8);
		if ((((uint32_t)L_5) != ((uint32_t)L_6)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_7 = (__this->f9);
		NullCheck((&p0));
		int32_t L_8 = ((&p0)->f9);
		if ((((uint32_t)L_7) != ((uint32_t)L_8)))
		{
			goto IL_015d;
		}
	}
	{
		float L_9 = (__this->f3);
		NullCheck((&p0));
		float L_10 = ((&p0)->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		bool L_11 = m1969(NULL, L_9, L_10, &m1969_MI);
		if (!L_11)
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_12 = (__this->f5);
		NullCheck((&p0));
		int32_t L_13 = ((&p0)->f5);
		if ((((uint32_t)L_12) != ((uint32_t)L_13)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_14 = (__this->f4);
		NullCheck((&p0));
		bool L_15 = ((&p0)->f4);
		if ((((uint32_t)L_14) != ((uint32_t)L_15)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_16 = (__this->f6);
		NullCheck((&p0));
		int32_t L_17 = ((&p0)->f6);
		if ((((uint32_t)L_16) != ((uint32_t)L_17)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_18 = (__this->f7);
		NullCheck((&p0));
		bool L_19 = ((&p0)->f7);
		if ((((uint32_t)L_18) != ((uint32_t)L_19)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_20 = (__this->f8);
		NullCheck((&p0));
		int32_t L_21 = ((&p0)->f8);
		if ((((uint32_t)L_20) != ((uint32_t)L_21)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_22 = (__this->f9);
		NullCheck((&p0));
		int32_t L_23 = ((&p0)->f9);
		if ((((uint32_t)L_22) != ((uint32_t)L_23)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_24 = (__this->f7);
		NullCheck((&p0));
		bool L_25 = ((&p0)->f7);
		if ((((uint32_t)L_24) != ((uint32_t)L_25)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_26 = (__this->f10);
		NullCheck((&p0));
		bool L_27 = ((&p0)->f10);
		if ((((uint32_t)L_26) != ((uint32_t)L_27)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_28 = (__this->f12);
		NullCheck((&p0));
		int32_t L_29 = ((&p0)->f12);
		if ((((uint32_t)L_28) != ((uint32_t)L_29)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_30 = (__this->f11);
		NullCheck((&p0));
		int32_t L_31 = ((&p0)->f11);
		if ((((uint32_t)L_30) != ((uint32_t)L_31)))
		{
			goto IL_015d;
		}
	}
	{
		t6  L_32 = (__this->f13);
		NullCheck((&p0));
		t6  L_33 = ((&p0)->f13);
		bool L_34 = m3300(__this, L_32, L_33, &m3300_MI);
		if (!L_34)
		{
			goto IL_015d;
		}
	}
	{
		t6  L_35 = (__this->f14);
		NullCheck((&p0));
		t6  L_36 = ((&p0)->f14);
		bool L_37 = m3300(__this, L_35, L_36, &m3300_MI);
		if (!L_37)
		{
			goto IL_015d;
		}
	}
	{
		t295 * L_38 = (__this->f0);
		NullCheck((&p0));
		t295 * L_39 = ((&p0)->f0);
		bool L_40 = m411(NULL, L_38, L_39, &m411_MI);
		G_B19_0 = ((int32_t)(L_40));
		goto IL_015e;
	}

IL_015d:
	{
		G_B19_0 = 0;
	}

IL_015e:
	{
		return G_B19_0;
	}
}
// Metadata Definition UnityEngine.TextGenerationSettings
extern Il2CppType t295_0_0_6;
FieldInfo t384_f0_FieldInfo = 
{
	"font", &t295_0_0_6, &t384_TI, offsetof(t384, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t148_0_0_6;
FieldInfo t384_f1_FieldInfo = 
{
	"color", &t148_0_0_6, &t384_TI, offsetof(t384, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_6;
FieldInfo t384_f2_FieldInfo = 
{
	"fontSize", &t134_0_0_6, &t384_TI, offsetof(t384, f2) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t384_f3_FieldInfo = 
{
	"lineSpacing", &t124_0_0_6, &t384_TI, offsetof(t384, f3) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t384_f4_FieldInfo = 
{
	"richText", &t125_0_0_6, &t384_TI, offsetof(t384, f4) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t296_0_0_6;
FieldInfo t384_f5_FieldInfo = 
{
	"fontStyle", &t296_0_0_6, &t384_TI, offsetof(t384, f5) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t297_0_0_6;
FieldInfo t384_f6_FieldInfo = 
{
	"textAnchor", &t297_0_0_6, &t384_TI, offsetof(t384, f6) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t384_f7_FieldInfo = 
{
	"resizeTextForBestFit", &t125_0_0_6, &t384_TI, offsetof(t384, f7) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_6;
FieldInfo t384_f8_FieldInfo = 
{
	"resizeTextMinSize", &t134_0_0_6, &t384_TI, offsetof(t384, f8) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_6;
FieldInfo t384_f9_FieldInfo = 
{
	"resizeTextMaxSize", &t134_0_0_6, &t384_TI, offsetof(t384, f9) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t384_f10_FieldInfo = 
{
	"updateBounds", &t125_0_0_6, &t384_TI, offsetof(t384, f10) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t299_0_0_6;
FieldInfo t384_f11_FieldInfo = 
{
	"verticalOverflow", &t299_0_0_6, &t384_TI, offsetof(t384, f11) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t298_0_0_6;
FieldInfo t384_f12_FieldInfo = 
{
	"horizontalOverflow", &t298_0_0_6, &t384_TI, offsetof(t384, f12) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t6_0_0_6;
FieldInfo t384_f13_FieldInfo = 
{
	"generationExtents", &t6_0_0_6, &t384_TI, offsetof(t384, f13) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t6_0_0_6;
FieldInfo t384_f14_FieldInfo = 
{
	"pivot", &t6_0_0_6, &t384_TI, offsetof(t384, f14) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t384_f15_FieldInfo = 
{
	"generateOutOfBounds", &t125_0_0_6, &t384_TI, offsetof(t384, f15) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t384_FIs[] =
{
	&t384_f0_FieldInfo,
	&t384_f1_FieldInfo,
	&t384_f2_FieldInfo,
	&t384_f3_FieldInfo,
	&t384_f4_FieldInfo,
	&t384_f5_FieldInfo,
	&t384_f6_FieldInfo,
	&t384_f7_FieldInfo,
	&t384_f8_FieldInfo,
	&t384_f9_FieldInfo,
	&t384_f10_FieldInfo,
	&t384_f11_FieldInfo,
	&t384_f12_FieldInfo,
	&t384_f13_FieldInfo,
	&t384_f14_FieldInfo,
	&t384_f15_FieldInfo,
	NULL
};
extern Il2CppType t148_0_0_0;
extern Il2CppType t148_0_0_0;
static ParameterInfo t384_m3299_ParameterInfos[] = 
{
	{"left", 0, 134219085, &EmptyCustomAttributesCache, &t148_0_0_0},
	{"right", 1, 134219086, &EmptyCustomAttributesCache, &t148_0_0_0},
};
extern TypeInfo t384_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t148_t148 (MethodInfo* method, void* obj, void** args);
MethodInfo m3299_MI = 
{
	"CompareColors", (methodPointerType)&m3299, &t384_TI, &t125_0_0_0, RuntimeInvoker_t125_t148_t148, t384_m3299_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 1256, NULL, (methodPointerType)NULL};
extern Il2CppType t6_0_0_0;
extern Il2CppType t6_0_0_0;
static ParameterInfo t384_m3300_ParameterInfos[] = 
{
	{"left", 0, 134219087, &EmptyCustomAttributesCache, &t6_0_0_0},
	{"right", 1, 134219088, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern TypeInfo t384_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t6_t6 (MethodInfo* method, void* obj, void** args);
MethodInfo m3300_MI = 
{
	"CompareVector2", (methodPointerType)&m3300, &t384_TI, &t125_0_0_0, RuntimeInvoker_t125_t6_t6, t384_m3300_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 1257, NULL, (methodPointerType)NULL};
extern Il2CppType t384_0_0_0;
static ParameterInfo t384_m3301_ParameterInfos[] = 
{
	{"other", 0, 134219089, &EmptyCustomAttributesCache, &t384_0_0_0},
};
extern TypeInfo t384_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t384 (MethodInfo* method, void* obj, void** args);
MethodInfo m3301_MI = 
{
	"Equals", (methodPointerType)&m3301, &t384_TI, &t125_0_0_0, RuntimeInvoker_t125_t384, t384_m3301_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1258, NULL, (methodPointerType)NULL};
static MethodInfo* t384_MIs[] =
{
	&m3299_MI,
	&m3300_MI,
	&m3301_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
static MethodInfo* t384_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t384_0_0_0;
extern Il2CppType t384_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t384_TI;
TypeInfo t384_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TextGenerationSettings", "UnityEngine", t384_MIs, NULL, t384_FIs, NULL, &t117_TI, NULL, NULL, &t384_TI, NULL, t384_VT, &EmptyCustomAttributesCache, &t384_TI, &t384_0_0_0, &t384_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t384)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 16, 0, 0, 4, 0, 0};
#include "t620.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t620_TI;
#include "t620MD.h"

#include "t61.h"
extern TypeInfo t620_TI;
extern TypeInfo t61_TI;
#include "t61MD.h"
extern MethodInfo m3304_MI;
extern MethodInfo m3471_MI;
extern MethodInfo m3472_MI;


extern MethodInfo m3302_MI;
 bool m3302 (t620 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3302_MI);
	{
		bool L_0 = m3304(NULL, ((t620 *)IsInst(p0, InitializedTypeInfo(&t620_TI))), __this, &m3304_MI);
		return L_0;
	}
}
extern MethodInfo m3303_MI;
 int32_t m3303 (t620 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3303_MI);
	{
		t61 L_0 = (__this->f0);
		int32_t L_1 = m3471(NULL, L_0, &m3471_MI);
		return L_1;
	}
}
extern MethodInfo m3304_MI;
 bool m3304 (t25 * __this, t620 * p0, t620 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3304_MI);
	t25 * V_0 = {0};
	t25 * V_1 = {0};
	{
		V_0 = p0;
		V_1 = p1;
		if (V_1)
		{
			goto IL_0012;
		}
	}
	{
		if (V_0)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		if (V_1)
		{
			goto IL_0029;
		}
	}
	{
		NullCheck(p0);
		t61 L_0 = (p0->f0);
		bool L_1 = m3472(NULL, L_0, (((t61_SFs*)InitializedTypeInfo(&t61_TI)->static_fields)->f1), &m3472_MI);
		return L_1;
	}

IL_0029:
	{
		if (V_0)
		{
			goto IL_0040;
		}
	}
	{
		NullCheck(p1);
		t61 L_2 = (p1->f0);
		bool L_3 = m3472(NULL, L_2, (((t61_SFs*)InitializedTypeInfo(&t61_TI)->static_fields)->f1), &m3472_MI);
		return L_3;
	}

IL_0040:
	{
		NullCheck(p0);
		t61 L_4 = (p0->f0);
		NullCheck(p1);
		t61 L_5 = (p1->f0);
		bool L_6 = m3472(NULL, L_4, L_5, &m3472_MI);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void t620_marshal(const t620& unmarshaled, t620_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t620_marshal_back(const t620_marshaled& marshaled, t620& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void t620_marshal_cleanup(t620_marshaled& marshaled)
{
}
// Metadata Definition UnityEngine.TrackedReference
extern Il2CppType t61_0_0_3;
FieldInfo t620_f0_FieldInfo = 
{
	"m_Ptr", &t61_0_0_3, &t620_TI, offsetof(t620, f0), &EmptyCustomAttributesCache};
static FieldInfo* t620_FIs[] =
{
	&t620_f0_FieldInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
static ParameterInfo t620_m3302_ParameterInfos[] = 
{
	{"o", 0, 134219090, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t620_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3302_MI = 
{
	"Equals", (methodPointerType)&m3302, &t620_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t620_m3302_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 1259, NULL, (methodPointerType)NULL};
extern TypeInfo t620_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m3303_MI = 
{
	"GetHashCode", (methodPointerType)&m3303, &t620_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 1260, NULL, (methodPointerType)NULL};
extern Il2CppType t620_0_0_0;
extern Il2CppType t620_0_0_0;
static ParameterInfo t620_m3304_ParameterInfos[] = 
{
	{"x", 0, 134219091, &EmptyCustomAttributesCache, &t620_0_0_0},
	{"y", 1, 134219092, &EmptyCustomAttributesCache, &t620_0_0_0},
};
extern TypeInfo t620_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3304_MI = 
{
	"op_Equality", (methodPointerType)&m3304, &t620_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t620_m3304_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 1261, NULL, (methodPointerType)NULL};
static MethodInfo* t620_MIs[] =
{
	&m3302_MI,
	&m3303_MI,
	&m3304_MI,
	NULL
};
extern MethodInfo m3302_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3303_MI;
extern MethodInfo m457_MI;
static MethodInfo* t620_VT[] =
{
	&m3302_MI,
	&m352_MI,
	&m3303_MI,
	&m457_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t620_0_0_0;
extern Il2CppType t620_1_0_0;
extern TypeInfo t25_TI;
struct t620;
extern TypeInfo t620_TI;
TypeInfo t620_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TrackedReference", "UnityEngine", t620_MIs, NULL, t620_FIs, NULL, &t25_TI, NULL, NULL, &t620_TI, NULL, t620_VT, &EmptyCustomAttributesCache, &t620_TI, &t620_0_0_0, &t620_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t620_marshal, (methodPointerType)t620_marshal_back, (methodPointerType)t620_marshal_cleanup, sizeof (t620), 0, sizeof(t620_marshaled), 0, 0, -1, 1048585, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 4, 0, 0};
#include "t654.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t654_TI;
#include "t654MD.h"



// Metadata Definition UnityEngine.Events.PersistentListenerMode
extern Il2CppType t134_0_0_1542;
FieldInfo t654_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t654_TI, offsetof(t654, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t654_0_0_32854;
FieldInfo t654_f2_FieldInfo = 
{
	"EventDefined", &t654_0_0_32854, &t654_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t654_0_0_32854;
FieldInfo t654_f3_FieldInfo = 
{
	"Void", &t654_0_0_32854, &t654_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t654_0_0_32854;
FieldInfo t654_f4_FieldInfo = 
{
	"Object", &t654_0_0_32854, &t654_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t654_0_0_32854;
FieldInfo t654_f5_FieldInfo = 
{
	"Int", &t654_0_0_32854, &t654_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t654_0_0_32854;
FieldInfo t654_f6_FieldInfo = 
{
	"Float", &t654_0_0_32854, &t654_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t654_0_0_32854;
FieldInfo t654_f7_FieldInfo = 
{
	"String", &t654_0_0_32854, &t654_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t654_0_0_32854;
FieldInfo t654_f8_FieldInfo = 
{
	"Bool", &t654_0_0_32854, &t654_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t654_FIs[] =
{
	&t654_f1_FieldInfo,
	&t654_f2_FieldInfo,
	&t654_f3_FieldInfo,
	&t654_f4_FieldInfo,
	&t654_f5_FieldInfo,
	&t654_f6_FieldInfo,
	&t654_f7_FieldInfo,
	&t654_f8_FieldInfo,
	NULL
};
static const int32_t t654_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t654_f2_DefaultValue = 
{
	&t654_f2_FieldInfo, { (char*)&t654_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t654_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t654_f3_DefaultValue = 
{
	&t654_f3_FieldInfo, { (char*)&t654_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t654_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t654_f4_DefaultValue = 
{
	&t654_f4_FieldInfo, { (char*)&t654_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t654_f5_DefaultValueData = 3;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t654_f5_DefaultValue = 
{
	&t654_f5_FieldInfo, { (char*)&t654_f5_DefaultValueData, &t134_0_0_0 }};
static const int32_t t654_f6_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t654_f6_DefaultValue = 
{
	&t654_f6_FieldInfo, { (char*)&t654_f6_DefaultValueData, &t134_0_0_0 }};
static const int32_t t654_f7_DefaultValueData = 5;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t654_f7_DefaultValue = 
{
	&t654_f7_FieldInfo, { (char*)&t654_f7_DefaultValueData, &t134_0_0_0 }};
static const int32_t t654_f8_DefaultValueData = 6;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t654_f8_DefaultValue = 
{
	&t654_f8_FieldInfo, { (char*)&t654_f8_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t654_FDVs[] = 
{
	&t654_f2_DefaultValue,
	&t654_f3_DefaultValue,
	&t654_f4_DefaultValue,
	&t654_f5_DefaultValue,
	&t654_f6_DefaultValue,
	&t654_f7_DefaultValue,
	&t654_f8_DefaultValue,
	NULL
};
static MethodInfo* t654_MIs[] =
{
	NULL
};
extern MethodInfo m389_MI;
extern MethodInfo m352_MI;
extern MethodInfo m390_MI;
extern MethodInfo m391_MI;
extern MethodInfo m392_MI;
extern MethodInfo m393_MI;
extern MethodInfo m394_MI;
extern MethodInfo m395_MI;
extern MethodInfo m396_MI;
extern MethodInfo m397_MI;
extern MethodInfo m398_MI;
extern MethodInfo m399_MI;
extern MethodInfo m400_MI;
extern MethodInfo m401_MI;
extern MethodInfo m402_MI;
extern MethodInfo m403_MI;
extern MethodInfo m404_MI;
extern MethodInfo m405_MI;
extern MethodInfo m406_MI;
extern MethodInfo m407_MI;
extern MethodInfo m408_MI;
extern MethodInfo m409_MI;
extern MethodInfo m410_MI;
static MethodInfo* t654_VT[] =
{
	&m389_MI,
	&m352_MI,
	&m390_MI,
	&m391_MI,
	&m392_MI,
	&m393_MI,
	&m394_MI,
	&m395_MI,
	&m396_MI,
	&m397_MI,
	&m398_MI,
	&m399_MI,
	&m400_MI,
	&m401_MI,
	&m402_MI,
	&m403_MI,
	&m404_MI,
	&m405_MI,
	&m406_MI,
	&m407_MI,
	&m408_MI,
	&m409_MI,
	&m410_MI,
};
extern TypeInfo t141_TI;
extern TypeInfo t142_TI;
extern TypeInfo t143_TI;
static Il2CppInterfaceOffsetPair t654_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t654_0_0_0;
extern Il2CppType t654_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
TypeInfo t654_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "PersistentListenerMode", "UnityEngine.Events", t654_MIs, NULL, t654_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t654_VT, &EmptyCustomAttributesCache, &t134_TI, &t654_0_0_0, &t654_1_0_0, t654_IOs, NULL, NULL, t654_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t654)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 8, 0, 0, 23, 0, 3};
#include "t655.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t655_TI;
#include "t655MD.h"

#include "t27.h"
#include "t123.h"
extern TypeInfo t655_TI;
#include "t25MD.h"
extern MethodInfo m452_MI;


extern MethodInfo m3305_MI;
 void m3305 (t655 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3305_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m3306_MI;
 t60 * m3306 (t655 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3306_MI);
	{
		t60 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3307_MI;
 t27* m3307 (t655 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3307_MI);
	{
		t27* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3308_MI;
 int32_t m3308 (t655 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3308_MI);
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3309_MI;
 float m3309 (t655 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3309_MI);
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3310_MI;
 t27* m3310 (t655 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3310_MI);
	{
		t27* L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3311_MI;
 bool m3311 (t655 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3311_MI);
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
// Metadata Definition UnityEngine.Events.ArgumentCache
extern Il2CppType t60_0_0_1;
extern CustomAttributesCache t655__CustomAttributeCache_m_ObjectArgument;
FieldInfo t655_f0_FieldInfo = 
{
	"m_ObjectArgument", &t60_0_0_1, &t655_TI, offsetof(t655, f0), &t655__CustomAttributeCache_m_ObjectArgument};
extern Il2CppType t27_0_0_1;
extern CustomAttributesCache t655__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName;
FieldInfo t655_f1_FieldInfo = 
{
	"m_ObjectArgumentAssemblyTypeName", &t27_0_0_1, &t655_TI, offsetof(t655, f1), &t655__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName};
extern Il2CppType t134_0_0_1;
extern CustomAttributesCache t655__CustomAttributeCache_m_IntArgument;
FieldInfo t655_f2_FieldInfo = 
{
	"m_IntArgument", &t134_0_0_1, &t655_TI, offsetof(t655, f2), &t655__CustomAttributeCache_m_IntArgument};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t655__CustomAttributeCache_m_FloatArgument;
FieldInfo t655_f3_FieldInfo = 
{
	"m_FloatArgument", &t124_0_0_1, &t655_TI, offsetof(t655, f3), &t655__CustomAttributeCache_m_FloatArgument};
extern Il2CppType t27_0_0_1;
extern CustomAttributesCache t655__CustomAttributeCache_m_StringArgument;
FieldInfo t655_f4_FieldInfo = 
{
	"m_StringArgument", &t27_0_0_1, &t655_TI, offsetof(t655, f4), &t655__CustomAttributeCache_m_StringArgument};
extern Il2CppType t125_0_0_1;
extern CustomAttributesCache t655__CustomAttributeCache_m_BoolArgument;
FieldInfo t655_f5_FieldInfo = 
{
	"m_BoolArgument", &t125_0_0_1, &t655_TI, offsetof(t655, f5), &t655__CustomAttributeCache_m_BoolArgument};
static FieldInfo* t655_FIs[] =
{
	&t655_f0_FieldInfo,
	&t655_f1_FieldInfo,
	&t655_f2_FieldInfo,
	&t655_f3_FieldInfo,
	&t655_f4_FieldInfo,
	&t655_f5_FieldInfo,
	NULL
};
extern MethodInfo m3306_MI;
static PropertyInfo t655____unityObjectArgument_PropertyInfo = 
{
	&t655_TI, "unityObjectArgument", &m3306_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3307_MI;
static PropertyInfo t655____unityObjectArgumentAssemblyTypeName_PropertyInfo = 
{
	&t655_TI, "unityObjectArgumentAssemblyTypeName", &m3307_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3308_MI;
static PropertyInfo t655____intArgument_PropertyInfo = 
{
	&t655_TI, "intArgument", &m3308_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3309_MI;
static PropertyInfo t655____floatArgument_PropertyInfo = 
{
	&t655_TI, "floatArgument", &m3309_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3310_MI;
static PropertyInfo t655____stringArgument_PropertyInfo = 
{
	&t655_TI, "stringArgument", &m3310_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3311_MI;
static PropertyInfo t655____boolArgument_PropertyInfo = 
{
	&t655_TI, "boolArgument", &m3311_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t655_PIs[] =
{
	&t655____unityObjectArgument_PropertyInfo,
	&t655____unityObjectArgumentAssemblyTypeName_PropertyInfo,
	&t655____intArgument_PropertyInfo,
	&t655____floatArgument_PropertyInfo,
	&t655____stringArgument_PropertyInfo,
	&t655____boolArgument_PropertyInfo,
	NULL
};
extern TypeInfo t655_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3305_MI = 
{
	".ctor", (methodPointerType)&m3305, &t655_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1262, NULL, (methodPointerType)NULL};
extern TypeInfo t655_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3306_MI = 
{
	"get_unityObjectArgument", (methodPointerType)&m3306, &t655_TI, &t60_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1263, NULL, (methodPointerType)NULL};
extern TypeInfo t655_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3307_MI = 
{
	"get_unityObjectArgumentAssemblyTypeName", (methodPointerType)&m3307, &t655_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1264, NULL, (methodPointerType)NULL};
extern TypeInfo t655_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m3308_MI = 
{
	"get_intArgument", (methodPointerType)&m3308, &t655_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1265, NULL, (methodPointerType)NULL};
extern TypeInfo t655_TI;
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m3309_MI = 
{
	"get_floatArgument", (methodPointerType)&m3309, &t655_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1266, NULL, (methodPointerType)NULL};
extern TypeInfo t655_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3310_MI = 
{
	"get_stringArgument", (methodPointerType)&m3310, &t655_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1267, NULL, (methodPointerType)NULL};
extern TypeInfo t655_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3311_MI = 
{
	"get_boolArgument", (methodPointerType)&m3311, &t655_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1268, NULL, (methodPointerType)NULL};
static MethodInfo* t655_MIs[] =
{
	&m3305_MI,
	&m3306_MI,
	&m3307_MI,
	&m3308_MI,
	&m3309_MI,
	&m3310_MI,
	&m3311_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t655_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t440_TI;
#include "t440.h"
#include "t440MD.h"
extern MethodInfo m1873_MI;
extern TypeInfo t138_TI;
#include "t138.h"
#include "t138MD.h"
extern MethodInfo m383_MI;
void t655_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t440 * tmp;
		tmp = (t440 *)il2cpp_codegen_object_new (&t440_TI);
		m1873(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), &m1873_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
extern TypeInfo t440_TI;
extern MethodInfo m1873_MI;
void t655_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t440 * tmp;
		tmp = (t440 *)il2cpp_codegen_object_new (&t440_TI);
		m1873(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), &m1873_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t440_TI;
extern MethodInfo m1873_MI;
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t655_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t440 * tmp;
		tmp = (t440 *)il2cpp_codegen_object_new (&t440_TI);
		m1873(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), &m1873_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
extern TypeInfo t440_TI;
extern MethodInfo m1873_MI;
void t655_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t440 * tmp;
		tmp = (t440 *)il2cpp_codegen_object_new (&t440_TI);
		m1873(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), &m1873_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t440_TI;
extern MethodInfo m1873_MI;
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t655_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t440 * tmp;
		tmp = (t440 *)il2cpp_codegen_object_new (&t440_TI);
		m1873(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), &m1873_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t655_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t655__CustomAttributeCache_m_ObjectArgument = {
2,
NULL,
&t655_CustomAttributesCacheGenerator_m_ObjectArgument
};
CustomAttributesCache t655__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName = {
2,
NULL,
&t655_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName
};
CustomAttributesCache t655__CustomAttributeCache_m_IntArgument = {
2,
NULL,
&t655_CustomAttributesCacheGenerator_m_IntArgument
};
CustomAttributesCache t655__CustomAttributeCache_m_FloatArgument = {
2,
NULL,
&t655_CustomAttributesCacheGenerator_m_FloatArgument
};
CustomAttributesCache t655__CustomAttributeCache_m_StringArgument = {
2,
NULL,
&t655_CustomAttributesCacheGenerator_m_StringArgument
};
CustomAttributesCache t655__CustomAttributeCache_m_BoolArgument = {
1,
NULL,
&t655_CustomAttributesCacheGenerator_m_BoolArgument
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t655_0_0_0;
extern Il2CppType t655_1_0_0;
extern TypeInfo t25_TI;
struct t655;
extern TypeInfo t655_TI;
extern CustomAttributesCache t655__CustomAttributeCache_m_ObjectArgument;
extern CustomAttributesCache t655__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName;
extern CustomAttributesCache t655__CustomAttributeCache_m_IntArgument;
extern CustomAttributesCache t655__CustomAttributeCache_m_FloatArgument;
extern CustomAttributesCache t655__CustomAttributeCache_m_StringArgument;
extern CustomAttributesCache t655__CustomAttributeCache_m_BoolArgument;
TypeInfo t655_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "ArgumentCache", "UnityEngine.Events", t655_MIs, t655_PIs, t655_FIs, NULL, &t25_TI, NULL, NULL, &t655_TI, NULL, t655_VT, &EmptyCustomAttributesCache, &t655_TI, &t655_0_0_0, &t655_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t655), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 7, 6, 6, 0, 0, 4, 0, 0};
#include "t656.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t656_TI;
#include "t656MD.h"

#include "t657.h"
#include "t165.h"
#include "mscorlib_ArrayTypes.h"
#include "t466.h"
#include "t731.h"
extern TypeInfo t165_TI;
extern TypeInfo t731_TI;
extern TypeInfo t125_TI;
#include "t165MD.h"
#include "t466MD.h"
#include "t731MD.h"
extern MethodInfo m452_MI;
extern MethodInfo m489_MI;
extern MethodInfo m3473_MI;
extern MethodInfo m3474_MI;
extern MethodInfo m3475_MI;


extern MethodInfo m3312_MI;
 void m3312 (t656 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3312_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m3313_MI;
 void m3313 (t656 * __this, t25 * p0, t657 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3313_MI);
	{
		m452(__this, &m452_MI);
		if (p0)
		{
			goto IL_0017;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral212, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0017:
	{
		if (p1)
		{
			goto IL_0028;
		}
	}
	{
		t165 * L_1 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_1, (t27*) &_stringLiteral213, &m489_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0028:
	{
		return;
	}
}
extern MethodInfo m3314_MI;
 bool m3314 (t25 * __this, t466 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3314_MI);
	int32_t G_B3_0 = 0;
	{
		NullCheck(p0);
		t657 * L_0 = m3473(p0, &m3473_MI);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3474_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		NullCheck(p0);
		t25 * L_2 = m3475(p0, &m3475_MI);
		G_B3_0 = ((((int32_t)((((t25 *)L_2) == ((t25 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// Metadata Definition UnityEngine.Events.BaseInvokableCall
extern TypeInfo t656_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3312_MI = 
{
	".ctor", (methodPointerType)&m3312, &t656_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 1269, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t656_m3313_ParameterInfos[] = 
{
	{"target", 0, 134219093, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"function", 1, 134219094, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t656_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3313_MI = 
{
	".ctor", (methodPointerType)&m3313, &t656_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t656_m3313_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 1270, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t656_m3476_ParameterInfos[] = 
{
	{"args", 0, 134219095, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t656_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3476_MI = 
{
	"Invoke", NULL, &t656_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t656_m3476_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 1271, NULL, (methodPointerType)NULL};
extern TypeInfo t656_TI;
extern Il2CppType t123_0_0_0;
extern Il2CppGenericContainer m3477_IGC;
extern TypeInfo m3477_gp_T_0_TI;
Il2CppGenericParamFull m3477_gp_T_0_TI_GenericParamFull = { { &m3477_IGC, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* m3477_IGPA[1] = 
{
	&m3477_gp_T_0_TI_GenericParamFull,
};
extern MethodInfo m3477_MI;
Il2CppGenericContainer m3477_IGC = { { NULL, NULL }, NULL, &m3477_MI, 1, 1, m3477_IGPA };
MethodInfo m3477_MI = 
{
	"ThrowOnInvalidArg", NULL, &t656_TI, &t123_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 148, 0, 255, 0, true, false, 1272, NULL, (methodPointerType)NULL};
extern Il2CppType t466_0_0_0;
static ParameterInfo t656_m3314_ParameterInfos[] = 
{
	{"delegate", 0, 134219097, &EmptyCustomAttributesCache, &t466_0_0_0},
};
extern TypeInfo t656_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3314_MI = 
{
	"AllowInvoke", (methodPointerType)&m3314, &t656_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t656_m3314_ParameterInfos, &EmptyCustomAttributesCache, 148, 0, 255, 1, false, false, 1273, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t656_m3478_ParameterInfos[] = 
{
	{"targetObj", 0, 134219098, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134219099, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t656_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3478_MI = 
{
	"Find", NULL, &t656_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t656_m3478_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, false, 1274, NULL, (methodPointerType)NULL};
static MethodInfo* t656_MIs[] =
{
	&m3312_MI,
	&m3313_MI,
	&m3476_MI,
	&m3477_MI,
	&m3314_MI,
	&m3478_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t656_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	NULL,
	NULL,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t656_0_0_0;
extern Il2CppType t656_1_0_0;
extern TypeInfo t25_TI;
struct t656;
extern TypeInfo t656_TI;
TypeInfo t656_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "BaseInvokableCall", "UnityEngine.Events", t656_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t656_TI, NULL, t656_VT, &EmptyCustomAttributesCache, &t656_TI, &t656_0_0_0, &t656_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t656), 0, -1, 0, 0, -1, 1048704, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 0, 0, 0, 0, 6, 0, 0};
#include "t658.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t658_TI;
#include "t658MD.h"

#include "t310.h"
#include "t131.h"
#include "t132.h"
extern TypeInfo t658_TI;
extern TypeInfo t310_TI;
extern TypeInfo t131_TI;
extern TypeInfo t123_TI;
#include "t131MD.h"
#include "t310MD.h"
extern Il2CppType t310_0_0_0;
extern MethodInfo m3313_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m2105_MI;
extern MethodInfo m3314_MI;
extern MethodInfo m2073_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;


extern MethodInfo m3315_MI;
 void m3315 (t658 * __this, t25 * p0, t657 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3315_MI);
	{
		m3313(__this, p0, p1, &m3313_MI);
		t310 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t310_0_0_0), &m484_MI);
		t466 * L_2 = m3479(NULL, L_1, p0, p1, &m3479_MI);
		t466 * L_3 = m2105(NULL, L_0, ((t310 *)IsInst(L_2, InitializedTypeInfo(&t310_TI))), &m2105_MI);
		__this->f0 = ((t310 *)Castclass(L_3, InitializedTypeInfo(&t310_TI)));
		return;
	}
}
extern MethodInfo m3316_MI;
 void m3316 (t658 * __this, t158* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3316_MI);
	{
		t310 * L_0 = (__this->f0);
		bool L_1 = m3314(NULL, L_0, &m3314_MI);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		t310 * L_2 = (__this->f0);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&m2073_MI, L_2);
	}

IL_001b:
	{
		return;
	}
}
extern MethodInfo m3317_MI;
 bool m3317 (t658 * __this, t25 * p0, t657 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3317_MI);
	int32_t G_B3_0 = 0;
	{
		t310 * L_0 = (__this->f0);
		NullCheck(L_0);
		t25 * L_1 = m3475(L_0, &m3475_MI);
		if ((((t25 *)L_1) != ((t25 *)p0)))
		{
			goto IL_0021;
		}
	}
	{
		t310 * L_2 = (__this->f0);
		NullCheck(L_2);
		t657 * L_3 = m3473(L_2, &m3473_MI);
		G_B3_0 = ((((t657 *)L_3) == ((t657 *)p1))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// Metadata Definition UnityEngine.Events.InvokableCall
extern Il2CppType t310_0_0_1;
FieldInfo t658_f0_FieldInfo = 
{
	"Delegate", &t310_0_0_1, &t658_TI, offsetof(t658, f0), &EmptyCustomAttributesCache};
static FieldInfo* t658_FIs[] =
{
	&t658_f0_FieldInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t658_m3315_ParameterInfos[] = 
{
	{"target", 0, 134219100, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134219101, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t658_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3315_MI = 
{
	".ctor", (methodPointerType)&m3315, &t658_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t658_m3315_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 1275, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t658_m3316_ParameterInfos[] = 
{
	{"args", 0, 134219102, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t658_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3316_MI = 
{
	"Invoke", (methodPointerType)&m3316, &t658_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t658_m3316_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 1276, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t658_m3317_ParameterInfos[] = 
{
	{"targetObj", 0, 134219103, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134219104, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t658_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3317_MI = 
{
	"Find", (methodPointerType)&m3317, &t658_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t658_m3317_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 1277, NULL, (methodPointerType)NULL};
static MethodInfo* t658_MIs[] =
{
	&m3315_MI,
	&m3316_MI,
	&m3317_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m3316_MI;
extern MethodInfo m3317_MI;
static MethodInfo* t658_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m3316_MI,
	&m3317_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t658_0_0_0;
extern Il2CppType t658_1_0_0;
extern TypeInfo t656_TI;
struct t658;
extern TypeInfo t658_TI;
TypeInfo t658_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall", "UnityEngine.Events", t658_MIs, NULL, t658_FIs, NULL, &t656_TI, NULL, NULL, &t658_TI, NULL, t658_VT, &EmptyCustomAttributesCache, &t658_TI, &t658_0_0_0, &t658_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t658), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 6, 0, 0};
#include "t659.h"
extern Il2CppGenericContainer t659_IGC;
extern TypeInfo t659_gp_T1_0_TI;
Il2CppGenericParamFull t659_gp_T1_0_TI_GenericParamFull = { { &t659_IGC, 0}, {NULL, "T1", 0, 0, NULL} };
static Il2CppGenericParamFull* t659_IGPA[1] = 
{
	&t659_gp_T1_0_TI_GenericParamFull,
};
extern TypeInfo t659_TI;
Il2CppGenericContainer t659_IGC = { { NULL, NULL }, NULL, &t659_TI, 1, 0, t659_IGPA };
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t659_m3480_ParameterInfos[] = 
{
	{"target", 0, 134219105, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134219106, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t659_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3480_MI = 
{
	".ctor", NULL, &t659_TI, &t123_0_0_0, NULL, t659_m3480_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 1278, NULL, (methodPointerType)NULL};
extern Il2CppType t735_0_0_0;
static ParameterInfo t659_m3481_ParameterInfos[] = 
{
	{"callback", 0, 134219107, &EmptyCustomAttributesCache, &t735_0_0_0},
};
extern TypeInfo t659_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3481_MI = 
{
	".ctor", NULL, &t659_TI, &t123_0_0_0, NULL, t659_m3481_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1279, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t659_m3482_ParameterInfos[] = 
{
	{"args", 0, 134219108, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t659_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3482_MI = 
{
	"Invoke", NULL, &t659_TI, &t123_0_0_0, NULL, t659_m3482_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 1280, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t659_m3483_ParameterInfos[] = 
{
	{"targetObj", 0, 134219109, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134219110, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t659_TI;
extern Il2CppType t125_0_0_0;
MethodInfo m3483_MI = 
{
	"Find", NULL, &t659_TI, &t125_0_0_0, NULL, t659_m3483_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 1281, NULL, (methodPointerType)NULL};
static MethodInfo* t659_MIs[] =
{
	&m3480_MI,
	&m3481_MI,
	&m3482_MI,
	&m3483_MI,
	NULL
};
extern Il2CppType t735_0_0_1;
FieldInfo t659_f0_FieldInfo = 
{
	"Delegate", &t735_0_0_1, &t659_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t659_FIs[] =
{
	&t659_f0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t659_0_0_0;
extern Il2CppType t659_1_0_0;
struct t659;
extern TypeInfo t659_TI;
TypeInfo t659_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t659_MIs, NULL, t659_FIs, NULL, NULL, NULL, NULL, &t659_TI, NULL, NULL, NULL, NULL, &t659_0_0_0, &t659_1_0_0, NULL, NULL, &t659_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 0, 0, 0};
#include "t660.h"
extern Il2CppGenericContainer t660_IGC;
extern TypeInfo t660_gp_T1_0_TI;
Il2CppGenericParamFull t660_gp_T1_0_TI_GenericParamFull = { { &t660_IGC, 0}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo t660_gp_T2_1_TI;
Il2CppGenericParamFull t660_gp_T2_1_TI_GenericParamFull = { { &t660_IGC, 1}, {NULL, "T2", 0, 0, NULL} };
static Il2CppGenericParamFull* t660_IGPA[2] = 
{
	&t660_gp_T1_0_TI_GenericParamFull,
	&t660_gp_T2_1_TI_GenericParamFull,
};
extern TypeInfo t660_TI;
Il2CppGenericContainer t660_IGC = { { NULL, NULL }, NULL, &t660_TI, 2, 0, t660_IGPA };
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t660_m3484_ParameterInfos[] = 
{
	{"target", 0, 134219111, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134219112, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t660_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3484_MI = 
{
	".ctor", NULL, &t660_TI, &t123_0_0_0, NULL, t660_m3484_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 1282, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t660_m3485_ParameterInfos[] = 
{
	{"args", 0, 134219113, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t660_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3485_MI = 
{
	"Invoke", NULL, &t660_TI, &t123_0_0_0, NULL, t660_m3485_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 1283, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t660_m3486_ParameterInfos[] = 
{
	{"targetObj", 0, 134219114, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134219115, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t660_TI;
extern Il2CppType t125_0_0_0;
MethodInfo m3486_MI = 
{
	"Find", NULL, &t660_TI, &t125_0_0_0, NULL, t660_m3486_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 1284, NULL, (methodPointerType)NULL};
static MethodInfo* t660_MIs[] =
{
	&m3484_MI,
	&m3485_MI,
	&m3486_MI,
	NULL
};
extern Il2CppType t737_0_0_1;
FieldInfo t660_f0_FieldInfo = 
{
	"Delegate", &t737_0_0_1, &t660_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t660_FIs[] =
{
	&t660_f0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t660_0_0_0;
extern Il2CppType t660_1_0_0;
struct t660;
extern TypeInfo t660_TI;
TypeInfo t660_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`2", "UnityEngine.Events", t660_MIs, NULL, t660_FIs, NULL, NULL, NULL, NULL, &t660_TI, NULL, NULL, NULL, NULL, &t660_0_0_0, &t660_1_0_0, NULL, NULL, &t660_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 0, 0, 0};
#include "t661.h"
extern Il2CppGenericContainer t661_IGC;
extern TypeInfo t661_gp_T1_0_TI;
Il2CppGenericParamFull t661_gp_T1_0_TI_GenericParamFull = { { &t661_IGC, 0}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo t661_gp_T2_1_TI;
Il2CppGenericParamFull t661_gp_T2_1_TI_GenericParamFull = { { &t661_IGC, 1}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo t661_gp_T3_2_TI;
Il2CppGenericParamFull t661_gp_T3_2_TI_GenericParamFull = { { &t661_IGC, 2}, {NULL, "T3", 0, 0, NULL} };
static Il2CppGenericParamFull* t661_IGPA[3] = 
{
	&t661_gp_T1_0_TI_GenericParamFull,
	&t661_gp_T2_1_TI_GenericParamFull,
	&t661_gp_T3_2_TI_GenericParamFull,
};
extern TypeInfo t661_TI;
Il2CppGenericContainer t661_IGC = { { NULL, NULL }, NULL, &t661_TI, 3, 0, t661_IGPA };
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t661_m3487_ParameterInfos[] = 
{
	{"target", 0, 134219116, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134219117, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t661_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3487_MI = 
{
	".ctor", NULL, &t661_TI, &t123_0_0_0, NULL, t661_m3487_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 1285, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t661_m3488_ParameterInfos[] = 
{
	{"args", 0, 134219118, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t661_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3488_MI = 
{
	"Invoke", NULL, &t661_TI, &t123_0_0_0, NULL, t661_m3488_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 1286, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t661_m3489_ParameterInfos[] = 
{
	{"targetObj", 0, 134219119, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134219120, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t661_TI;
extern Il2CppType t125_0_0_0;
MethodInfo m3489_MI = 
{
	"Find", NULL, &t661_TI, &t125_0_0_0, NULL, t661_m3489_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 1287, NULL, (methodPointerType)NULL};
static MethodInfo* t661_MIs[] =
{
	&m3487_MI,
	&m3488_MI,
	&m3489_MI,
	NULL
};
extern Il2CppType t740_0_0_1;
FieldInfo t661_f0_FieldInfo = 
{
	"Delegate", &t740_0_0_1, &t661_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t661_FIs[] =
{
	&t661_f0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t661_0_0_0;
extern Il2CppType t661_1_0_0;
struct t661;
extern TypeInfo t661_TI;
TypeInfo t661_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`3", "UnityEngine.Events", t661_MIs, NULL, t661_FIs, NULL, NULL, NULL, NULL, &t661_TI, NULL, NULL, NULL, NULL, &t661_0_0_0, &t661_1_0_0, NULL, NULL, &t661_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 0, 0, 0};
#include "t662.h"
extern Il2CppGenericContainer t662_IGC;
extern TypeInfo t662_gp_T1_0_TI;
Il2CppGenericParamFull t662_gp_T1_0_TI_GenericParamFull = { { &t662_IGC, 0}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo t662_gp_T2_1_TI;
Il2CppGenericParamFull t662_gp_T2_1_TI_GenericParamFull = { { &t662_IGC, 1}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo t662_gp_T3_2_TI;
Il2CppGenericParamFull t662_gp_T3_2_TI_GenericParamFull = { { &t662_IGC, 2}, {NULL, "T3", 0, 0, NULL} };
extern TypeInfo t662_gp_T4_3_TI;
Il2CppGenericParamFull t662_gp_T4_3_TI_GenericParamFull = { { &t662_IGC, 3}, {NULL, "T4", 0, 0, NULL} };
static Il2CppGenericParamFull* t662_IGPA[4] = 
{
	&t662_gp_T1_0_TI_GenericParamFull,
	&t662_gp_T2_1_TI_GenericParamFull,
	&t662_gp_T3_2_TI_GenericParamFull,
	&t662_gp_T4_3_TI_GenericParamFull,
};
extern TypeInfo t662_TI;
Il2CppGenericContainer t662_IGC = { { NULL, NULL }, NULL, &t662_TI, 4, 0, t662_IGPA };
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t662_m3490_ParameterInfos[] = 
{
	{"target", 0, 134219121, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134219122, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t662_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3490_MI = 
{
	".ctor", NULL, &t662_TI, &t123_0_0_0, NULL, t662_m3490_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 1288, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t662_m3491_ParameterInfos[] = 
{
	{"args", 0, 134219123, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t662_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3491_MI = 
{
	"Invoke", NULL, &t662_TI, &t123_0_0_0, NULL, t662_m3491_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 1289, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t662_m3492_ParameterInfos[] = 
{
	{"targetObj", 0, 134219124, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134219125, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t662_TI;
extern Il2CppType t125_0_0_0;
MethodInfo m3492_MI = 
{
	"Find", NULL, &t662_TI, &t125_0_0_0, NULL, t662_m3492_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 1290, NULL, (methodPointerType)NULL};
static MethodInfo* t662_MIs[] =
{
	&m3490_MI,
	&m3491_MI,
	&m3492_MI,
	NULL
};
extern Il2CppType t744_0_0_1;
FieldInfo t662_f0_FieldInfo = 
{
	"Delegate", &t744_0_0_1, &t662_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t662_FIs[] =
{
	&t662_f0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t662_0_0_0;
extern Il2CppType t662_1_0_0;
struct t662;
extern TypeInfo t662_TI;
TypeInfo t662_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`4", "UnityEngine.Events", t662_MIs, NULL, t662_FIs, NULL, NULL, NULL, NULL, &t662_TI, NULL, NULL, NULL, NULL, &t662_0_0_0, &t662_1_0_0, NULL, NULL, &t662_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 0, 0, 0};
#include "t663.h"
extern Il2CppGenericContainer t663_IGC;
extern TypeInfo t663_gp_T_0_TI;
Il2CppGenericParamFull t663_gp_T_0_TI_GenericParamFull = { { &t663_IGC, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* t663_IGPA[1] = 
{
	&t663_gp_T_0_TI_GenericParamFull,
};
extern TypeInfo t663_TI;
Il2CppGenericContainer t663_IGC = { { NULL, NULL }, NULL, &t663_TI, 1, 0, t663_IGPA };
extern Il2CppType t60_0_0_0;
extern Il2CppType t657_0_0_0;
extern Il2CppType t663_gp_0_0_0_0;
static ParameterInfo t663_m3493_ParameterInfos[] = 
{
	{"target", 0, 134219126, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"theFunction", 1, 134219127, &EmptyCustomAttributesCache, &t657_0_0_0},
	{"argument", 2, 134219128, &EmptyCustomAttributesCache, &t663_gp_0_0_0_0},
};
extern TypeInfo t663_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3493_MI = 
{
	".ctor", NULL, &t663_TI, &t123_0_0_0, NULL, t663_m3493_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 1291, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t663_m3494_ParameterInfos[] = 
{
	{"args", 0, 134219129, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t663_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3494_MI = 
{
	"Invoke", NULL, &t663_TI, &t123_0_0_0, NULL, t663_m3494_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 1292, NULL, (methodPointerType)NULL};
static MethodInfo* t663_MIs[] =
{
	&m3493_MI,
	&m3494_MI,
	NULL
};
extern Il2CppType t158_0_0_33;
FieldInfo t663_f1_FieldInfo = 
{
	"m_Arg1", &t158_0_0_33, &t663_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t663_FIs[] =
{
	&t663_f1_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t663_0_0_0;
extern Il2CppType t663_1_0_0;
struct t663;
extern TypeInfo t663_TI;
TypeInfo t663_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t663_MIs, NULL, t663_FIs, NULL, NULL, NULL, NULL, &t663_TI, NULL, NULL, NULL, NULL, &t663_0_0_0, &t663_1_0_0, NULL, NULL, &t663_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 0, 0, 0};
#include "t664.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t664_TI;
#include "t664MD.h"



// Metadata Definition UnityEngine.Events.UnityEventCallState
extern Il2CppType t134_0_0_1542;
FieldInfo t664_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t664_TI, offsetof(t664, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t664_0_0_32854;
FieldInfo t664_f2_FieldInfo = 
{
	"Off", &t664_0_0_32854, &t664_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t664_0_0_32854;
FieldInfo t664_f3_FieldInfo = 
{
	"EditorAndRuntime", &t664_0_0_32854, &t664_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t664_0_0_32854;
FieldInfo t664_f4_FieldInfo = 
{
	"RuntimeOnly", &t664_0_0_32854, &t664_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t664_FIs[] =
{
	&t664_f1_FieldInfo,
	&t664_f2_FieldInfo,
	&t664_f3_FieldInfo,
	&t664_f4_FieldInfo,
	NULL
};
static const int32_t t664_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t664_f2_DefaultValue = 
{
	&t664_f2_FieldInfo, { (char*)&t664_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t664_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t664_f3_DefaultValue = 
{
	&t664_f3_FieldInfo, { (char*)&t664_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t664_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t664_f4_DefaultValue = 
{
	&t664_f4_FieldInfo, { (char*)&t664_f4_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t664_FDVs[] = 
{
	&t664_f2_DefaultValue,
	&t664_f3_DefaultValue,
	&t664_f4_DefaultValue,
	NULL
};
static MethodInfo* t664_MIs[] =
{
	NULL
};
extern MethodInfo m389_MI;
extern MethodInfo m352_MI;
extern MethodInfo m390_MI;
extern MethodInfo m391_MI;
extern MethodInfo m392_MI;
extern MethodInfo m393_MI;
extern MethodInfo m394_MI;
extern MethodInfo m395_MI;
extern MethodInfo m396_MI;
extern MethodInfo m397_MI;
extern MethodInfo m398_MI;
extern MethodInfo m399_MI;
extern MethodInfo m400_MI;
extern MethodInfo m401_MI;
extern MethodInfo m402_MI;
extern MethodInfo m403_MI;
extern MethodInfo m404_MI;
extern MethodInfo m405_MI;
extern MethodInfo m406_MI;
extern MethodInfo m407_MI;
extern MethodInfo m408_MI;
extern MethodInfo m409_MI;
extern MethodInfo m410_MI;
static MethodInfo* t664_VT[] =
{
	&m389_MI,
	&m352_MI,
	&m390_MI,
	&m391_MI,
	&m392_MI,
	&m393_MI,
	&m394_MI,
	&m395_MI,
	&m396_MI,
	&m397_MI,
	&m398_MI,
	&m399_MI,
	&m400_MI,
	&m401_MI,
	&m402_MI,
	&m403_MI,
	&m404_MI,
	&m405_MI,
	&m406_MI,
	&m407_MI,
	&m408_MI,
	&m409_MI,
	&m410_MI,
};
extern TypeInfo t141_TI;
extern TypeInfo t142_TI;
extern TypeInfo t143_TI;
static Il2CppInterfaceOffsetPair t664_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t664_0_0_0;
extern Il2CppType t664_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
TypeInfo t664_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEventCallState", "UnityEngine.Events", t664_MIs, NULL, t664_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t664_VT, &EmptyCustomAttributesCache, &t134_TI, &t664_0_0_0, &t664_1_0_0, t664_IOs, NULL, NULL, t664_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t664)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t665.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t665_TI;
#include "t665MD.h"

#include "t666.h"
#include "t750.h"
#include "t751.h"
#include "t752.h"
#include "t753.h"
#include "t754.h"
extern TypeInfo t665_TI;
extern TypeInfo t655_TI;
extern TypeInfo t27_TI;
extern TypeInfo t666_TI;
extern TypeInfo t656_TI;
extern TypeInfo t25_TI;
extern TypeInfo t657_TI;
extern TypeInfo t750_TI;
extern TypeInfo t751_TI;
extern TypeInfo t752_TI;
extern TypeInfo t753_TI;
extern TypeInfo t658_TI;
extern TypeInfo t60_TI;
extern TypeInfo t131_TI;
extern TypeInfo t663_TI;
extern TypeInfo t637_TI;
extern TypeInfo t754_TI;
extern TypeInfo t125_TI;
extern TypeInfo t158_TI;
#include "t27MD.h"
#include "t666MD.h"
#include "t750MD.h"
#include "t751MD.h"
#include "t752MD.h"
#include "t753MD.h"
#include "t754MD.h"
extern Il2CppType t60_0_0_0;
extern Il2CppType t663_0_0_0;
extern Il2CppType t657_0_0_0;
extern MethodInfo m3305_MI;
extern MethodInfo m452_MI;
extern MethodInfo m3319_MI;
extern MethodInfo m371_MI;
extern MethodInfo m3320_MI;
extern MethodInfo m2264_MI;
extern MethodInfo m3335_MI;
extern MethodInfo m3495_MI;
extern MethodInfo m3325_MI;
extern MethodInfo m3309_MI;
extern MethodInfo m3496_MI;
extern MethodInfo m3308_MI;
extern MethodInfo m3497_MI;
extern MethodInfo m3310_MI;
extern MethodInfo m3498_MI;
extern MethodInfo m3311_MI;
extern MethodInfo m3499_MI;
extern MethodInfo m3315_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3307_MI;
extern MethodInfo m3500_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m3502_MI;
extern MethodInfo m3306_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3504_MI;


extern MethodInfo m3318_MI;
 void m3318 (t665 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3318_MI);
	{
		t655 * L_0 = (t655 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t655_TI));
		m3305(L_0, &m3305_MI);
		__this->f3 = L_0;
		__this->f4 = 2;
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m3319_MI;
 t60 * m3319 (t665 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3319_MI);
	{
		t60 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3320_MI;
 t27* m3320 (t665 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3320_MI);
	{
		t27* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3321_MI;
 int32_t m3321 (t665 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3321_MI);
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3322_MI;
 t655 * m3322 (t665 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3322_MI);
	{
		t655 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3323_MI;
 bool m3323 (t665 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3323_MI);
	int32_t G_B3_0 = 0;
	{
		t60 * L_0 = m3319(__this, &m3319_MI);
		bool L_1 = m371(NULL, L_0, (t60 *)NULL, &m371_MI);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		t27* L_2 = m3320(__this, &m3320_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_3 = m2264(NULL, L_2, &m2264_MI);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
extern MethodInfo m3324_MI;
 t656 * m3324 (t665 * __this, t666 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3324_MI);
	t657 * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		if (p0)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (t656 *)NULL;
	}

IL_0013:
	{
		NullCheck(p0);
		t657 * L_1 = m3335(p0, __this, &m3335_MI);
		V_0 = L_1;
		if (V_0)
		{
			goto IL_0023;
		}
	}
	{
		return (t656 *)NULL;
	}

IL_0023:
	{
		int32_t L_2 = (__this->f2);
		V_1 = L_2;
		if (V_1 == 0)
		{
			goto IL_0051;
		}
		if (V_1 == 1)
		{
			goto IL_00d2;
		}
		if (V_1 == 2)
		{
			goto IL_005f;
		}
		if (V_1 == 3)
		{
			goto IL_008a;
		}
		if (V_1 == 4)
		{
			goto IL_0072;
		}
		if (V_1 == 5)
		{
			goto IL_00a2;
		}
		if (V_1 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		t60 * L_3 = m3319(__this, &m3319_MI);
		NullCheck(p0);
		t656 * L_4 = (t656 *)VirtFuncInvoker2< t656 *, t25 *, t657 * >::Invoke(&m3495_MI, p0, L_3, V_0);
		return L_4;
	}

IL_005f:
	{
		t60 * L_5 = m3319(__this, &m3319_MI);
		t655 * L_6 = (__this->f3);
		t656 * L_7 = m3325(NULL, L_5, V_0, L_6, &m3325_MI);
		return L_7;
	}

IL_0072:
	{
		t60 * L_8 = m3319(__this, &m3319_MI);
		t655 * L_9 = (__this->f3);
		NullCheck(L_9);
		float L_10 = m3309(L_9, &m3309_MI);
		t750 * L_11 = (t750 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t750_TI));
		m3496(L_11, L_8, V_0, L_10, &m3496_MI);
		return L_11;
	}

IL_008a:
	{
		t60 * L_12 = m3319(__this, &m3319_MI);
		t655 * L_13 = (__this->f3);
		NullCheck(L_13);
		int32_t L_14 = m3308(L_13, &m3308_MI);
		t751 * L_15 = (t751 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t751_TI));
		m3497(L_15, L_12, V_0, L_14, &m3497_MI);
		return L_15;
	}

IL_00a2:
	{
		t60 * L_16 = m3319(__this, &m3319_MI);
		t655 * L_17 = (__this->f3);
		NullCheck(L_17);
		t27* L_18 = m3310(L_17, &m3310_MI);
		t752 * L_19 = (t752 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t752_TI));
		m3498(L_19, L_16, V_0, L_18, &m3498_MI);
		return L_19;
	}

IL_00ba:
	{
		t60 * L_20 = m3319(__this, &m3319_MI);
		t655 * L_21 = (__this->f3);
		NullCheck(L_21);
		bool L_22 = m3311(L_21, &m3311_MI);
		t753 * L_23 = (t753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t753_TI));
		m3499(L_23, L_20, V_0, L_22, &m3499_MI);
		return L_23;
	}

IL_00d2:
	{
		t60 * L_24 = m3319(__this, &m3319_MI);
		t658 * L_25 = (t658 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t658_TI));
		m3315(L_25, L_24, V_0, &m3315_MI);
		return L_25;
	}

IL_00df:
	{
		return (t656 *)NULL;
	}
}
extern MethodInfo m3325_MI;
 t656 * m3325 (t25 * __this, t60 * p0, t657 * p1, t655 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3325_MI);
	t131 * V_0 = {0};
	t131 * V_1 = {0};
	t131 * V_2 = {0};
	t754 * V_3 = {0};
	t60 * V_4 = {0};
	t131 * G_B3_0 = {0};
	t131 * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t60_0_0_0), &m484_MI);
		V_0 = L_0;
		NullCheck(p2);
		t27* L_1 = m3307(p2, &m3307_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_2 = m2264(NULL, L_1, &m2264_MI);
		if (L_2)
		{
			goto IL_0039;
		}
	}
	{
		NullCheck(p2);
		t27* L_3 = m3307(p2, &m3307_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_4 = m3500(NULL, L_3, 0, &m3500_MI);
		t131 * L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_6 = m484(NULL, LoadTypeToken(&t60_0_0_0), &m484_MI);
		G_B3_0 = L_6;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_7 = m484(NULL, LoadTypeToken(&t663_0_0_0), &m484_MI);
		V_1 = L_7;
		t637* L_8 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), 1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, V_0);
		*((t131 **)(t131 **)SZArrayLdElema(L_8, 0)) = (t131 *)V_0;
		NullCheck(V_1);
		t131 * L_9 = (t131 *)VirtFuncInvoker1< t131 *, t637* >::Invoke(&m3501_MI, V_1, L_8);
		V_2 = L_9;
		t637* L_10 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), 3));
		t131 * L_11 = m484(NULL, LoadTypeToken(&t60_0_0_0), &m484_MI);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((t131 **)(t131 **)SZArrayLdElema(L_10, 0)) = (t131 *)L_11;
		t637* L_12 = L_10;
		t131 * L_13 = m484(NULL, LoadTypeToken(&t657_0_0_0), &m484_MI);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		ArrayElementTypeCheck (L_12, L_13);
		*((t131 **)(t131 **)SZArrayLdElema(L_12, 1)) = (t131 *)L_13;
		t637* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
		ArrayElementTypeCheck (L_14, V_0);
		*((t131 **)(t131 **)SZArrayLdElema(L_14, 2)) = (t131 *)V_0;
		NullCheck(V_2);
		t754 * L_15 = (t754 *)VirtFuncInvoker1< t754 *, t637* >::Invoke(&m3502_MI, V_2, L_14);
		V_3 = L_15;
		NullCheck(p2);
		t60 * L_16 = m3306(p2, &m3306_MI);
		V_4 = L_16;
		bool L_17 = m371(NULL, V_4, (t60 *)NULL, &m371_MI);
		if (!L_17)
		{
			goto IL_00aa;
		}
	}
	{
		NullCheck(V_4);
		t131 * L_18 = m1959(V_4, &m1959_MI);
		NullCheck(V_0);
		bool L_19 = (bool)VirtFuncInvoker1< bool, t131 * >::Invoke(&m3503_MI, V_0, L_18);
		if (L_19)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (t60 *)NULL;
	}

IL_00aa:
	{
		t158* L_20 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), 3));
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, p0);
		*((t25 **)(t25 **)SZArrayLdElema(L_20, 0)) = (t25 *)p0;
		t158* L_21 = L_20;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 1);
		ArrayElementTypeCheck (L_21, p1);
		*((t25 **)(t25 **)SZArrayLdElema(L_21, 1)) = (t25 *)p1;
		t158* L_22 = L_21;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 2);
		ArrayElementTypeCheck (L_22, V_4);
		*((t25 **)(t25 **)SZArrayLdElema(L_22, 2)) = (t25 *)V_4;
		NullCheck(V_3);
		t25 * L_23 = m3504(V_3, L_22, &m3504_MI);
		return ((t656 *)IsInst(L_23, InitializedTypeInfo(&t656_TI)));
	}
}
// Metadata Definition UnityEngine.Events.PersistentCall
extern Il2CppType t60_0_0_1;
extern CustomAttributesCache t665__CustomAttributeCache_m_Target;
FieldInfo t665_f0_FieldInfo = 
{
	"m_Target", &t60_0_0_1, &t665_TI, offsetof(t665, f0), &t665__CustomAttributeCache_m_Target};
extern Il2CppType t27_0_0_1;
extern CustomAttributesCache t665__CustomAttributeCache_m_MethodName;
FieldInfo t665_f1_FieldInfo = 
{
	"m_MethodName", &t27_0_0_1, &t665_TI, offsetof(t665, f1), &t665__CustomAttributeCache_m_MethodName};
extern Il2CppType t654_0_0_1;
extern CustomAttributesCache t665__CustomAttributeCache_m_Mode;
FieldInfo t665_f2_FieldInfo = 
{
	"m_Mode", &t654_0_0_1, &t665_TI, offsetof(t665, f2), &t665__CustomAttributeCache_m_Mode};
extern Il2CppType t655_0_0_1;
extern CustomAttributesCache t665__CustomAttributeCache_m_Arguments;
FieldInfo t665_f3_FieldInfo = 
{
	"m_Arguments", &t655_0_0_1, &t665_TI, offsetof(t665, f3), &t665__CustomAttributeCache_m_Arguments};
extern Il2CppType t664_0_0_1;
extern CustomAttributesCache t665__CustomAttributeCache_m_CallState;
FieldInfo t665_f4_FieldInfo = 
{
	"m_CallState", &t664_0_0_1, &t665_TI, offsetof(t665, f4), &t665__CustomAttributeCache_m_CallState};
static FieldInfo* t665_FIs[] =
{
	&t665_f0_FieldInfo,
	&t665_f1_FieldInfo,
	&t665_f2_FieldInfo,
	&t665_f3_FieldInfo,
	&t665_f4_FieldInfo,
	NULL
};
extern MethodInfo m3319_MI;
static PropertyInfo t665____target_PropertyInfo = 
{
	&t665_TI, "target", &m3319_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3320_MI;
static PropertyInfo t665____methodName_PropertyInfo = 
{
	&t665_TI, "methodName", &m3320_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3321_MI;
static PropertyInfo t665____mode_PropertyInfo = 
{
	&t665_TI, "mode", &m3321_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3322_MI;
static PropertyInfo t665____arguments_PropertyInfo = 
{
	&t665_TI, "arguments", &m3322_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t665_PIs[] =
{
	&t665____target_PropertyInfo,
	&t665____methodName_PropertyInfo,
	&t665____mode_PropertyInfo,
	&t665____arguments_PropertyInfo,
	NULL
};
extern TypeInfo t665_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3318_MI = 
{
	".ctor", (methodPointerType)&m3318, &t665_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1293, NULL, (methodPointerType)NULL};
extern TypeInfo t665_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3319_MI = 
{
	"get_target", (methodPointerType)&m3319, &t665_TI, &t60_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1294, NULL, (methodPointerType)NULL};
extern TypeInfo t665_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3320_MI = 
{
	"get_methodName", (methodPointerType)&m3320, &t665_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1295, NULL, (methodPointerType)NULL};
extern TypeInfo t665_TI;
extern Il2CppType t654_0_0_0;
extern void* RuntimeInvoker_t654 (MethodInfo* method, void* obj, void** args);
MethodInfo m3321_MI = 
{
	"get_mode", (methodPointerType)&m3321, &t665_TI, &t654_0_0_0, RuntimeInvoker_t654, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1296, NULL, (methodPointerType)NULL};
extern TypeInfo t665_TI;
extern Il2CppType t655_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3322_MI = 
{
	"get_arguments", (methodPointerType)&m3322, &t665_TI, &t655_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1297, NULL, (methodPointerType)NULL};
extern TypeInfo t665_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m3323_MI = 
{
	"IsValid", (methodPointerType)&m3323, &t665_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 1298, NULL, (methodPointerType)NULL};
extern Il2CppType t666_0_0_0;
static ParameterInfo t665_m3324_ParameterInfos[] = 
{
	{"theEvent", 0, 134219130, &EmptyCustomAttributesCache, &t666_0_0_0},
};
extern TypeInfo t665_TI;
extern Il2CppType t656_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3324_MI = 
{
	"GetRuntimeCall", (methodPointerType)&m3324, &t665_TI, &t656_0_0_0, RuntimeInvoker_t25_t25, t665_m3324_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1299, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t657_0_0_0;
extern Il2CppType t655_0_0_0;
static ParameterInfo t665_m3325_ParameterInfos[] = 
{
	{"target", 0, 134219131, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"method", 1, 134219132, &EmptyCustomAttributesCache, &t657_0_0_0},
	{"arguments", 2, 134219133, &EmptyCustomAttributesCache, &t655_0_0_0},
};
extern TypeInfo t665_TI;
extern Il2CppType t656_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3325_MI = 
{
	"GetObjectCall", (methodPointerType)&m3325, &t665_TI, &t656_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t665_m3325_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 1300, NULL, (methodPointerType)NULL};
static MethodInfo* t665_MIs[] =
{
	&m3318_MI,
	&m3319_MI,
	&m3320_MI,
	&m3321_MI,
	&m3322_MI,
	&m3323_MI,
	&m3324_MI,
	&m3325_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t665_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t440_TI;
extern MethodInfo m1873_MI;
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t665_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t440 * tmp;
		tmp = (t440 *)il2cpp_codegen_object_new (&t440_TI);
		m1873(tmp, il2cpp_codegen_string_new_wrapper("instance"), &m1873_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t440_TI;
extern MethodInfo m1873_MI;
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t665_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t440 * tmp;
		tmp = (t440 *)il2cpp_codegen_object_new (&t440_TI);
		m1873(tmp, il2cpp_codegen_string_new_wrapper("methodName"), &m1873_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
extern TypeInfo t440_TI;
extern MethodInfo m1873_MI;
void t665_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t440 * tmp;
		tmp = (t440 *)il2cpp_codegen_object_new (&t440_TI);
		m1873(tmp, il2cpp_codegen_string_new_wrapper("mode"), &m1873_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t440_TI;
extern MethodInfo m1873_MI;
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t665_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t440 * tmp;
		tmp = (t440 *)il2cpp_codegen_object_new (&t440_TI);
		m1873(tmp, il2cpp_codegen_string_new_wrapper("arguments"), &m1873_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
extern TypeInfo t440_TI;
extern MethodInfo m1873_MI;
extern TypeInfo t440_TI;
extern MethodInfo m1873_MI;
void t665_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t440 * tmp;
		tmp = (t440 *)il2cpp_codegen_object_new (&t440_TI);
		m1873(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), &m1873_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t440 * tmp;
		tmp = (t440 *)il2cpp_codegen_object_new (&t440_TI);
		m1873(tmp, il2cpp_codegen_string_new_wrapper("enabled"), &m1873_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t665__CustomAttributeCache_m_Target = {
2,
NULL,
&t665_CustomAttributesCacheGenerator_m_Target
};
CustomAttributesCache t665__CustomAttributeCache_m_MethodName = {
2,
NULL,
&t665_CustomAttributesCacheGenerator_m_MethodName
};
CustomAttributesCache t665__CustomAttributeCache_m_Mode = {
2,
NULL,
&t665_CustomAttributesCacheGenerator_m_Mode
};
CustomAttributesCache t665__CustomAttributeCache_m_Arguments = {
2,
NULL,
&t665_CustomAttributesCacheGenerator_m_Arguments
};
CustomAttributesCache t665__CustomAttributeCache_m_CallState = {
3,
NULL,
&t665_CustomAttributesCacheGenerator_m_CallState
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t665_0_0_0;
extern Il2CppType t665_1_0_0;
extern TypeInfo t25_TI;
struct t665;
extern TypeInfo t665_TI;
extern CustomAttributesCache t665__CustomAttributeCache_m_Target;
extern CustomAttributesCache t665__CustomAttributeCache_m_MethodName;
extern CustomAttributesCache t665__CustomAttributeCache_m_Mode;
extern CustomAttributesCache t665__CustomAttributeCache_m_Arguments;
extern CustomAttributesCache t665__CustomAttributeCache_m_CallState;
TypeInfo t665_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "PersistentCall", "UnityEngine.Events", t665_MIs, t665_PIs, t665_FIs, NULL, &t25_TI, NULL, NULL, &t665_TI, NULL, t665_VT, &EmptyCustomAttributesCache, &t665_TI, &t665_0_0_0, &t665_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t665), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 8, 4, 5, 0, 0, 4, 0, 0};
#include "t667.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t667_TI;
#include "t667MD.h"

#include "t668.h"
#include "t669.h"
#include "t755.h"
extern TypeInfo t668_TI;
extern TypeInfo t667_TI;
extern TypeInfo t755_TI;
extern TypeInfo t665_TI;
extern TypeInfo t125_TI;
extern TypeInfo t167_TI;
extern TypeInfo t123_TI;
#include "t668MD.h"
#include "t755MD.h"
#include "t669MD.h"
extern MethodInfo m452_MI;
extern MethodInfo m3505_MI;
extern MethodInfo m3506_MI;
extern MethodInfo m3507_MI;
extern MethodInfo m3323_MI;
extern MethodInfo m3324_MI;
extern MethodInfo m3329_MI;
extern MethodInfo m3508_MI;
extern MethodInfo m507_MI;


extern MethodInfo m3326_MI;
 void m3326 (t667 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3326_MI);
	{
		m452(__this, &m452_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t668_TI));
		t668 * L_0 = (t668 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t668_TI));
		m3505(L_0, &m3505_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3327_MI;
 void m3327 (t667 * __this, t669 * p0, t666 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3327_MI);
	t665 * V_0 = {0};
	t755  V_1 = {0};
	t656 * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t668 * L_0 = (__this->f0);
		NullCheck(L_0);
		t755  L_1 = m3506(L_0, &m3506_MI);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			t665 * L_2 = m3507((&V_1), &m3507_MI);
			V_0 = L_2;
			NullCheck(V_0);
			bool L_3 = m3323(V_0, &m3323_MI);
			if (L_3)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			NullCheck(V_0);
			t656 * L_4 = m3324(V_0, p1, &m3324_MI);
			V_2 = L_4;
			if (!V_2)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			NullCheck(p0);
			m3329(p0, V_2, &m3329_MI);
		}

IL_003e:
		{
			bool L_5 = m3508((&V_1), &m3508_MI);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			// IL_004a: leave IL_005b
			leaveInstructions[0] = 0x5B; // 1
			THROW_SENTINEL(IL_005b);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_004f;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_004f;
	}

IL_004f:
	{ // begin finally (depth: 1)
		t755  L_6 = V_1;
		t25 * L_7 = Box(InitializedTypeInfo(&t755_TI), &L_6);
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(&m507_MI, L_7);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x5B:
				goto IL_005b;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				t168 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception (_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_005b:
	{
		return;
	}
}
// Metadata Definition UnityEngine.Events.PersistentCallGroup
extern Il2CppType t668_0_0_1;
extern CustomAttributesCache t667__CustomAttributeCache_m_Calls;
FieldInfo t667_f0_FieldInfo = 
{
	"m_Calls", &t668_0_0_1, &t667_TI, offsetof(t667, f0), &t667__CustomAttributeCache_m_Calls};
static FieldInfo* t667_FIs[] =
{
	&t667_f0_FieldInfo,
	NULL
};
extern TypeInfo t667_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3326_MI = 
{
	".ctor", (methodPointerType)&m3326, &t667_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1301, NULL, (methodPointerType)NULL};
extern Il2CppType t669_0_0_0;
extern Il2CppType t666_0_0_0;
static ParameterInfo t667_m3327_ParameterInfos[] = 
{
	{"invokableList", 0, 134219134, &EmptyCustomAttributesCache, &t669_0_0_0},
	{"unityEventBase", 1, 134219135, &EmptyCustomAttributesCache, &t666_0_0_0},
};
extern TypeInfo t667_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3327_MI = 
{
	"Initialize", (methodPointerType)&m3327, &t667_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t667_m3327_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 1302, NULL, (methodPointerType)NULL};
static MethodInfo* t667_MIs[] =
{
	&m3326_MI,
	&m3327_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t667_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
extern TypeInfo t440_TI;
extern MethodInfo m1873_MI;
void t667_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t440 * tmp;
		tmp = (t440 *)il2cpp_codegen_object_new (&t440_TI);
		m1873(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), &m1873_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t667__CustomAttributeCache_m_Calls = {
2,
NULL,
&t667_CustomAttributesCacheGenerator_m_Calls
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t667_0_0_0;
extern Il2CppType t667_1_0_0;
extern TypeInfo t25_TI;
struct t667;
extern TypeInfo t667_TI;
extern CustomAttributesCache t667__CustomAttributeCache_m_Calls;
TypeInfo t667_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "PersistentCallGroup", "UnityEngine.Events", t667_MIs, NULL, t667_FIs, NULL, &t25_TI, NULL, NULL, &t667_TI, NULL, t667_VT, &EmptyCustomAttributesCache, &t667_TI, &t667_0_0_0, &t667_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t667), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t669_TI;

#include "t670.h"
#include "t756.h"
extern TypeInfo t670_TI;
extern TypeInfo t669_TI;
extern TypeInfo t123_TI;
extern TypeInfo t656_TI;
extern TypeInfo t134_TI;
extern TypeInfo t125_TI;
extern TypeInfo t25_TI;
extern TypeInfo t657_TI;
extern TypeInfo t756_TI;
extern TypeInfo t158_TI;
#include "t670MD.h"
#include "t756MD.h"
extern MethodInfo m3509_MI;
extern MethodInfo m452_MI;
extern MethodInfo m3510_MI;
extern MethodInfo m3511_MI;
extern MethodInfo m3478_MI;
extern MethodInfo m3512_MI;
extern MethodInfo m3513_MI;
extern MethodInfo m3514_MI;
extern MethodInfo m3515_MI;
extern MethodInfo m3516_MI;
extern MethodInfo m3517_MI;
extern MethodInfo m3476_MI;


extern MethodInfo m3328_MI;
 void m3328 (t669 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3328_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t670_TI));
		t670 * L_0 = (t670 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t670_TI));
		m3509(L_0, &m3509_MI);
		__this->f0 = L_0;
		t670 * L_1 = (t670 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t670_TI));
		m3509(L_1, &m3509_MI);
		__this->f1 = L_1;
		t670 * L_2 = (t670 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t670_TI));
		m3509(L_2, &m3509_MI);
		__this->f2 = L_2;
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m3329_MI;
 void m3329 (t669 * __this, t656 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3329_MI);
	{
		t670 * L_0 = (__this->f0);
		NullCheck(L_0);
		VirtActionInvoker1< t656 * >::Invoke(&m3510_MI, L_0, p0);
		return;
	}
}
extern MethodInfo m3330_MI;
 void m3330 (t669 * __this, t656 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3330_MI);
	{
		t670 * L_0 = (__this->f1);
		NullCheck(L_0);
		VirtActionInvoker1< t656 * >::Invoke(&m3510_MI, L_0, p0);
		return;
	}
}
extern MethodInfo m3331_MI;
 void m3331 (t669 * __this, t25 * p0, t657 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3331_MI);
	t670 * V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t670_TI));
		t670 * L_0 = (t670 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t670_TI));
		m3509(L_0, &m3509_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		t670 * L_1 = (__this->f1);
		NullCheck(L_1);
		t656 * L_2 = (t656 *)VirtFuncInvoker1< t656 *, int32_t >::Invoke(&m3511_MI, L_1, V_1);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker2< bool, t25 *, t657 * >::Invoke(&m3478_MI, L_2, p0, p1);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		t670 * L_4 = (__this->f1);
		NullCheck(L_4);
		t656 * L_5 = (t656 *)VirtFuncInvoker1< t656 *, int32_t >::Invoke(&m3511_MI, L_4, V_1);
		NullCheck(V_0);
		VirtActionInvoker1< t656 * >::Invoke(&m3510_MI, V_0, L_5);
	}

IL_0037:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_003b:
	{
		t670 * L_6 = (__this->f1);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3512_MI, L_6);
		if ((((int32_t)V_1) < ((int32_t)L_7)))
		{
			goto IL_000d;
		}
	}
	{
		t670 * L_8 = (__this->f1);
		t670 * L_9 = V_0;
		t61 L_10 = { GetVirtualMethodInfo(L_9, &m3513_MI) };
		t756 * L_11 = (t756 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t756_TI));
		m3514(L_11, L_9, L_10, &m3514_MI);
		NullCheck(L_8);
		m3515(L_8, L_11, &m3515_MI);
		return;
	}
}
extern MethodInfo m3332_MI;
 void m3332 (t669 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3332_MI);
	{
		t670 * L_0 = (__this->f0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&m3516_MI, L_0);
		return;
	}
}
extern MethodInfo m3333_MI;
 void m3333 (t669 * __this, t158* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3333_MI);
	int32_t V_0 = 0;
	{
		t670 * L_0 = (__this->f2);
		t670 * L_1 = (__this->f0);
		NullCheck(L_0);
		m3517(L_0, L_1, &m3517_MI);
		t670 * L_2 = (__this->f2);
		t670 * L_3 = (__this->f1);
		NullCheck(L_2);
		m3517(L_2, L_3, &m3517_MI);
		V_0 = 0;
		goto IL_003f;
	}

IL_0029:
	{
		t670 * L_4 = (__this->f2);
		NullCheck(L_4);
		t656 * L_5 = (t656 *)VirtFuncInvoker1< t656 *, int32_t >::Invoke(&m3511_MI, L_4, V_0);
		NullCheck(L_5);
		VirtActionInvoker1< t158* >::Invoke(&m3476_MI, L_5, p0);
		V_0 = ((int32_t)(V_0+1));
	}

IL_003f:
	{
		t670 * L_6 = (__this->f2);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3512_MI, L_6);
		if ((((int32_t)V_0) < ((int32_t)L_7)))
		{
			goto IL_0029;
		}
	}
	{
		t670 * L_8 = (__this->f2);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(&m3516_MI, L_8);
		return;
	}
}
// Metadata Definition UnityEngine.Events.InvokableCallList
extern Il2CppType t670_0_0_33;
FieldInfo t669_f0_FieldInfo = 
{
	"m_PersistentCalls", &t670_0_0_33, &t669_TI, offsetof(t669, f0), &EmptyCustomAttributesCache};
extern Il2CppType t670_0_0_33;
FieldInfo t669_f1_FieldInfo = 
{
	"m_RuntimeCalls", &t670_0_0_33, &t669_TI, offsetof(t669, f1), &EmptyCustomAttributesCache};
extern Il2CppType t670_0_0_33;
FieldInfo t669_f2_FieldInfo = 
{
	"m_ExecutingCalls", &t670_0_0_33, &t669_TI, offsetof(t669, f2), &EmptyCustomAttributesCache};
static FieldInfo* t669_FIs[] =
{
	&t669_f0_FieldInfo,
	&t669_f1_FieldInfo,
	&t669_f2_FieldInfo,
	NULL
};
extern TypeInfo t669_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3328_MI = 
{
	".ctor", (methodPointerType)&m3328, &t669_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1303, NULL, (methodPointerType)NULL};
extern Il2CppType t656_0_0_0;
static ParameterInfo t669_m3329_ParameterInfos[] = 
{
	{"call", 0, 134219136, &EmptyCustomAttributesCache, &t656_0_0_0},
};
extern TypeInfo t669_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3329_MI = 
{
	"AddPersistentInvokableCall", (methodPointerType)&m3329, &t669_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t669_m3329_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1304, NULL, (methodPointerType)NULL};
extern Il2CppType t656_0_0_0;
static ParameterInfo t669_m3330_ParameterInfos[] = 
{
	{"call", 0, 134219137, &EmptyCustomAttributesCache, &t656_0_0_0},
};
extern TypeInfo t669_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3330_MI = 
{
	"AddListener", (methodPointerType)&m3330, &t669_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t669_m3330_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1305, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t669_m3331_ParameterInfos[] = 
{
	{"targetObj", 0, 134219138, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134219139, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t669_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3331_MI = 
{
	"RemoveListener", (methodPointerType)&m3331, &t669_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t669_m3331_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 1306, NULL, (methodPointerType)NULL};
extern TypeInfo t669_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3332_MI = 
{
	"ClearPersistent", (methodPointerType)&m3332, &t669_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 1307, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t669_m3333_ParameterInfos[] = 
{
	{"parameters", 0, 134219140, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t669_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3333_MI = 
{
	"Invoke", (methodPointerType)&m3333, &t669_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t669_m3333_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1308, NULL, (methodPointerType)NULL};
static MethodInfo* t669_MIs[] =
{
	&m3328_MI,
	&m3329_MI,
	&m3330_MI,
	&m3331_MI,
	&m3332_MI,
	&m3333_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t669_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t669_0_0_0;
extern Il2CppType t669_1_0_0;
extern TypeInfo t25_TI;
struct t669;
extern TypeInfo t669_TI;
TypeInfo t669_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCallList", "UnityEngine.Events", t669_MIs, NULL, t669_FIs, NULL, &t25_TI, NULL, NULL, &t669_TI, NULL, t669_VT, &EmptyCustomAttributesCache, &t669_TI, &t669_0_0_0, &t669_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t669), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 0, 3, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t666_TI;

#include "t732.h"
#include "t725.h"
#include "t726.h"
#include "t727.h"
extern TypeInfo t666_TI;
extern TypeInfo t669_TI;
extern TypeInfo t667_TI;
extern TypeInfo t131_TI;
extern TypeInfo t27_TI;
extern TypeInfo t60_TI;
extern TypeInfo t657_TI;
extern TypeInfo t25_TI;
extern TypeInfo t637_TI;
extern TypeInfo t124_TI;
extern TypeInfo t134_TI;
extern TypeInfo t125_TI;
extern TypeInfo t725_TI;
extern TypeInfo t726_TI;
extern TypeInfo t729_TI;
extern TypeInfo t727_TI;
extern TypeInfo t731_TI;
extern TypeInfo t733_TI;
extern TypeInfo t732_TI;
#include "t732MD.h"
extern Il2CppType t60_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m3328_MI;
extern MethodInfo m3326_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m3518_MI;
extern MethodInfo m3337_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3322_MI;
extern MethodInfo m3307_MI;
extern MethodInfo m2264_MI;
extern MethodInfo m3500_MI;
extern MethodInfo m3320_MI;
extern MethodInfo m3319_MI;
extern MethodInfo m3321_MI;
extern MethodInfo m3336_MI;
extern MethodInfo m3519_MI;
extern MethodInfo m3342_MI;
extern MethodInfo m3332_MI;
extern MethodInfo m3327_MI;
extern MethodInfo m3330_MI;
extern MethodInfo m3331_MI;
extern MethodInfo m3338_MI;
extern MethodInfo m3333_MI;
extern MethodInfo m457_MI;
extern MethodInfo m3520_MI;
extern MethodInfo m532_MI;
extern MethodInfo m3521_MI;
extern MethodInfo m3463_MI;
extern MethodInfo m3464_MI;
extern MethodInfo m3522_MI;
extern MethodInfo m3432_MI;


extern MethodInfo m3334_MI;
 void m3334 (t666 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3334_MI);
	{
		__this->f3 = 1;
		m452(__this, &m452_MI);
		t669 * L_0 = (t669 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t669_TI));
		m3328(L_0, &m3328_MI);
		__this->f0 = L_0;
		t667 * L_1 = (t667 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t667_TI));
		m3326(L_1, &m3326_MI);
		__this->f1 = L_1;
		t131 * L_2 = m1959(__this, &m1959_MI);
		NullCheck(L_2);
		t27* L_3 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, L_2);
		__this->f2 = L_3;
		return;
	}
}
extern MethodInfo m1876_MI;
 void m1876 (t666 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m1876_MI);
	{
		return;
	}
}
extern MethodInfo m1877_MI;
 void m1877 (t666 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m1877_MI);
	{
		m3337(__this, &m3337_MI);
		t131 * L_0 = m1959(__this, &m1959_MI);
		NullCheck(L_0);
		t27* L_1 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, L_0);
		__this->f2 = L_1;
		return;
	}
}
extern MethodInfo m3335_MI;
 t657 * m3335 (t666 * __this, t665 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3335_MI);
	t131 * V_0 = {0};
	t131 * G_B3_0 = {0};
	t131 * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t60_0_0_0), &m484_MI);
		V_0 = L_0;
		NullCheck(p0);
		t655 * L_1 = m3322(p0, &m3322_MI);
		NullCheck(L_1);
		t27* L_2 = m3307(L_1, &m3307_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_3 = m2264(NULL, L_2, &m2264_MI);
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		NullCheck(p0);
		t655 * L_4 = m3322(p0, &m3322_MI);
		NullCheck(L_4);
		t27* L_5 = m3307(L_4, &m3307_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_6 = m3500(NULL, L_5, 0, &m3500_MI);
		t131 * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_8 = m484(NULL, LoadTypeToken(&t60_0_0_0), &m484_MI);
		G_B3_0 = L_8;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		NullCheck(p0);
		t27* L_9 = m3320(p0, &m3320_MI);
		NullCheck(p0);
		t60 * L_10 = m3319(p0, &m3319_MI);
		NullCheck(p0);
		int32_t L_11 = m3321(p0, &m3321_MI);
		t657 * L_12 = m3336(__this, L_9, L_10, L_11, V_0, &m3336_MI);
		return L_12;
	}
}
extern MethodInfo m3336_MI;
 t657 * m3336 (t666 * __this, t27* p0, t25 * p1, int32_t p2, t131 * p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3336_MI);
	int32_t V_0 = {0};
	t131 * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	t637* G_B10_2 = {0};
	t637* G_B10_3 = {0};
	t27* G_B10_4 = {0};
	t25 * G_B10_5 = {0};
	t131 * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	t637* G_B9_2 = {0};
	t637* G_B9_3 = {0};
	t27* G_B9_4 = {0};
	t25 * G_B9_5 = {0};
	{
		V_0 = p2;
		if (V_0 == 0)
		{
			goto IL_0029;
		}
		if (V_0 == 1)
		{
			goto IL_0032;
		}
		if (V_0 == 2)
		{
			goto IL_00ac;
		}
		if (V_0 == 3)
		{
			goto IL_005b;
		}
		if (V_0 == 4)
		{
			goto IL_0040;
		}
		if (V_0 == 5)
		{
			goto IL_0091;
		}
		if (V_0 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		t657 * L_0 = (t657 *)VirtFuncInvoker2< t657 *, t27*, t25 * >::Invoke(&m3519_MI, __this, p0, p1);
		return L_0;
	}

IL_0032:
	{
		t657 * L_1 = m3342(NULL, p1, p0, ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), 0)), &m3342_MI);
		return L_1;
	}

IL_0040:
	{
		t637* L_2 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_3 = m484(NULL, LoadTypeToken(&t124_0_0_0), &m484_MI);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((t131 **)(t131 **)SZArrayLdElema(L_2, 0)) = (t131 *)L_3;
		t657 * L_4 = m3342(NULL, p1, p0, L_2, &m3342_MI);
		return L_4;
	}

IL_005b:
	{
		t637* L_5 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_6 = m484(NULL, LoadTypeToken(&t134_0_0_0), &m484_MI);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_6);
		*((t131 **)(t131 **)SZArrayLdElema(L_5, 0)) = (t131 *)L_6;
		t657 * L_7 = m3342(NULL, p1, p0, L_5, &m3342_MI);
		return L_7;
	}

IL_0076:
	{
		t637* L_8 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_9 = m484(NULL, LoadTypeToken(&t125_0_0_0), &m484_MI);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_9);
		*((t131 **)(t131 **)SZArrayLdElema(L_8, 0)) = (t131 *)L_9;
		t657 * L_10 = m3342(NULL, p1, p0, L_8, &m3342_MI);
		return L_10;
	}

IL_0091:
	{
		t637* L_11 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_12 = m484(NULL, LoadTypeToken(&t27_0_0_0), &m484_MI);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((t131 **)(t131 **)SZArrayLdElema(L_11, 0)) = (t131 *)L_12;
		t657 * L_13 = m3342(NULL, p1, p0, L_11, &m3342_MI);
		return L_13;
	}

IL_00ac:
	{
		t637* L_14 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), 1));
		t131 * L_15 = p3;
		G_B9_0 = L_15;
		G_B9_1 = 0;
		G_B9_2 = L_14;
		G_B9_3 = L_14;
		G_B9_4 = p0;
		G_B9_5 = p1;
		if (L_15)
		{
			G_B10_0 = L_15;
			G_B10_1 = 0;
			G_B10_2 = L_14;
			G_B10_3 = L_14;
			G_B10_4 = p0;
			G_B10_5 = p1;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_16 = m484(NULL, LoadTypeToken(&t60_0_0_0), &m484_MI);
		G_B10_0 = L_16;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((t131 **)(t131 **)SZArrayLdElema(G_B10_2, G_B10_1)) = (t131 *)G_B10_0;
		t657 * L_17 = m3342(NULL, G_B10_5, G_B10_4, G_B10_3, &m3342_MI);
		return L_17;
	}

IL_00d0:
	{
		return (t657 *)NULL;
	}
}
extern MethodInfo m3337_MI;
 void m3337 (t666 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3337_MI);
	{
		t669 * L_0 = (__this->f0);
		NullCheck(L_0);
		m3332(L_0, &m3332_MI);
		__this->f3 = 1;
		return;
	}
}
extern MethodInfo m3338_MI;
 void m3338 (t666 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3338_MI);
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		t667 * L_1 = (__this->f1);
		t669 * L_2 = (__this->f0);
		NullCheck(L_1);
		m3327(L_1, L_2, __this, &m3327_MI);
		__this->f3 = 0;
	}

IL_0024:
	{
		return;
	}
}
extern MethodInfo m3339_MI;
 void m3339 (t666 * __this, t656 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3339_MI);
	{
		t669 * L_0 = (__this->f0);
		NullCheck(L_0);
		m3330(L_0, p0, &m3330_MI);
		return;
	}
}
extern MethodInfo m3340_MI;
 void m3340 (t666 * __this, t25 * p0, t657 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3340_MI);
	{
		t669 * L_0 = (__this->f0);
		NullCheck(L_0);
		m3331(L_0, p0, p1, &m3331_MI);
		return;
	}
}
extern MethodInfo m3341_MI;
 void m3341 (t666 * __this, t158* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3341_MI);
	{
		m3338(__this, &m3338_MI);
		t669 * L_0 = (__this->f0);
		NullCheck(L_0);
		m3333(L_0, p0, &m3333_MI);
		return;
	}
}
extern MethodInfo m1875_MI;
 t27* m1875 (t666 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m1875_MI);
	{
		t27* L_0 = m457(__this, &m457_MI);
		t131 * L_1 = m1959(__this, &m1959_MI);
		NullCheck(L_1);
		t27* L_2 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_3 = m532(NULL, L_0, (t27*) &_stringLiteral101, L_2, &m532_MI);
		return L_3;
	}
}
extern MethodInfo m3342_MI;
 t657 * m3342 (t25 * __this, t25 * p0, t27* p1, t637* p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3342_MI);
	t131 * V_0 = {0};
	t657 * V_1 = {0};
	t733* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	t732 * V_5 = {0};
	t733* V_6 = {0};
	int32_t V_7 = 0;
	t131 * V_8 = {0};
	t131 * V_9 = {0};
	{
		NullCheck(p0);
		t131 * L_0 = m1959(p0, &m1959_MI);
		V_0 = L_0;
		goto IL_008e;
	}

IL_000c:
	{
		NullCheck(V_0);
		t657 * L_1 = (t657 *)VirtFuncInvoker5< t657 *, t27*, int32_t, t726 *, t637*, t729* >::Invoke(&m3521_MI, V_0, p1, ((int32_t)52), (t726 *)NULL, p2, (t729*)(t729*)NULL);
		V_1 = L_1;
		if (!V_1)
		{
			goto IL_0087;
		}
	}
	{
		NullCheck(V_1);
		t733* L_2 = (t733*)VirtFuncInvoker0< t733* >::Invoke(&m3463_MI, V_1);
		V_2 = L_2;
		V_3 = 1;
		V_4 = 0;
		V_6 = V_2;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, V_7);
		V_5 = (*(t732 **)(t732 **)SZArrayLdElema(V_6, V_7));
		NullCheck(p2);
		IL2CPP_ARRAY_BOUNDS_CHECK(p2, V_4);
		V_8 = (*(t131 **)(t131 **)SZArrayLdElema(p2, V_4));
		NullCheck(V_5);
		t131 * L_3 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3464_MI, V_5);
		V_9 = L_3;
		NullCheck(V_8);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3522_MI, V_8);
		NullCheck(V_9);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3522_MI, V_9);
		V_3 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		if (V_3)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		V_4 = ((int32_t)(V_4+1));
		V_7 = ((int32_t)(V_7+1));
	}

IL_0074:
	{
		NullCheck(V_6);
		if ((((int32_t)V_7) < ((int32_t)(((int32_t)(((t122 *)V_6)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		if (!V_3)
		{
			goto IL_0087;
		}
	}
	{
		return V_1;
	}

IL_0087:
	{
		NullCheck(V_0);
		t131 * L_6 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3432_MI, V_0);
		V_0 = L_6;
	}

IL_008e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_7 = m484(NULL, LoadTypeToken(&t25_0_0_0), &m484_MI);
		if ((((t131 *)V_0) == ((t131 *)L_7)))
		{
			goto IL_00a4;
		}
	}
	{
		if (V_0)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (t657 *)NULL;
	}
}
// Metadata Definition UnityEngine.Events.UnityEventBase
extern Il2CppType t669_0_0_1;
FieldInfo t666_f0_FieldInfo = 
{
	"m_Calls", &t669_0_0_1, &t666_TI, offsetof(t666, f0), &EmptyCustomAttributesCache};
extern Il2CppType t667_0_0_1;
extern CustomAttributesCache t666__CustomAttributeCache_m_PersistentCalls;
FieldInfo t666_f1_FieldInfo = 
{
	"m_PersistentCalls", &t667_0_0_1, &t666_TI, offsetof(t666, f1), &t666__CustomAttributeCache_m_PersistentCalls};
extern Il2CppType t27_0_0_1;
extern CustomAttributesCache t666__CustomAttributeCache_m_TypeName;
FieldInfo t666_f2_FieldInfo = 
{
	"m_TypeName", &t27_0_0_1, &t666_TI, offsetof(t666, f2), &t666__CustomAttributeCache_m_TypeName};
extern Il2CppType t125_0_0_1;
FieldInfo t666_f3_FieldInfo = 
{
	"m_CallsDirty", &t125_0_0_1, &t666_TI, offsetof(t666, f3), &EmptyCustomAttributesCache};
static FieldInfo* t666_FIs[] =
{
	&t666_f0_FieldInfo,
	&t666_f1_FieldInfo,
	&t666_f2_FieldInfo,
	&t666_f3_FieldInfo,
	NULL
};
extern TypeInfo t666_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3334_MI = 
{
	".ctor", (methodPointerType)&m3334, &t666_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 1309, NULL, (methodPointerType)NULL};
extern TypeInfo t666_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m1876_MI = 
{
	"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", (methodPointerType)&m1876, &t666_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 1310, NULL, (methodPointerType)NULL};
extern TypeInfo t666_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m1877_MI = 
{
	"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", (methodPointerType)&m1877, &t666_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 5, 0, false, false, 1311, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t666_m3519_ParameterInfos[] = 
{
	{"name", 0, 134219141, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"targetObj", 1, 134219142, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t666_TI;
extern Il2CppType t657_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3519_MI = 
{
	"FindMethod_Impl", NULL, &t666_TI, &t657_0_0_0, RuntimeInvoker_t25_t25_t25, t666_m3519_ParameterInfos, &EmptyCustomAttributesCache, 1476, 0, 6, 2, false, false, 1312, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t666_m3495_ParameterInfos[] = 
{
	{"target", 0, 134219143, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134219144, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t666_TI;
extern Il2CppType t656_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3495_MI = 
{
	"GetDelegate", NULL, &t666_TI, &t656_0_0_0, RuntimeInvoker_t25_t25_t25, t666_m3495_ParameterInfos, &EmptyCustomAttributesCache, 1475, 0, 7, 2, false, false, 1313, NULL, (methodPointerType)NULL};
extern Il2CppType t665_0_0_0;
static ParameterInfo t666_m3335_ParameterInfos[] = 
{
	{"call", 0, 134219145, &EmptyCustomAttributesCache, &t665_0_0_0},
};
extern TypeInfo t666_TI;
extern Il2CppType t657_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3335_MI = 
{
	"FindMethod", (methodPointerType)&m3335, &t666_TI, &t657_0_0_0, RuntimeInvoker_t25_t25, t666_m3335_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 1314, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t654_0_0_0;
extern Il2CppType t131_0_0_0;
static ParameterInfo t666_m3336_ParameterInfos[] = 
{
	{"name", 0, 134219146, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"listener", 1, 134219147, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"mode", 2, 134219148, &EmptyCustomAttributesCache, &t654_0_0_0},
	{"argumentType", 3, 134219149, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t666_TI;
extern Il2CppType t657_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3336_MI = 
{
	"FindMethod", (methodPointerType)&m3336, &t666_TI, &t657_0_0_0, RuntimeInvoker_t25_t25_t25_t134_t25, t666_m3336_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 4, false, false, 1315, NULL, (methodPointerType)NULL};
extern TypeInfo t666_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3337_MI = 
{
	"DirtyPersistentCalls", (methodPointerType)&m3337, &t666_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 1316, NULL, (methodPointerType)NULL};
extern TypeInfo t666_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3338_MI = 
{
	"RebuildPersistentCallsIfNeeded", (methodPointerType)&m3338, &t666_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 1317, NULL, (methodPointerType)NULL};
extern Il2CppType t656_0_0_0;
static ParameterInfo t666_m3339_ParameterInfos[] = 
{
	{"call", 0, 134219150, &EmptyCustomAttributesCache, &t656_0_0_0},
};
extern TypeInfo t666_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3339_MI = 
{
	"AddCall", (methodPointerType)&m3339, &t666_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t666_m3339_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 1318, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t666_m3340_ParameterInfos[] = 
{
	{"targetObj", 0, 134219151, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134219152, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t666_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3340_MI = 
{
	"RemoveListener", (methodPointerType)&m3340, &t666_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t666_m3340_ParameterInfos, &EmptyCustomAttributesCache, 132, 0, 255, 2, false, false, 1319, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t666_m3341_ParameterInfos[] = 
{
	{"parameters", 0, 134219153, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t666_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3341_MI = 
{
	"Invoke", (methodPointerType)&m3341, &t666_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t666_m3341_ParameterInfos, &EmptyCustomAttributesCache, 132, 0, 255, 1, false, false, 1320, NULL, (methodPointerType)NULL};
extern TypeInfo t666_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m1875_MI = 
{
	"ToString", (methodPointerType)&m1875, &t666_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 1321, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t637_0_0_0;
static ParameterInfo t666_m3342_ParameterInfos[] = 
{
	{"obj", 0, 134219154, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"functionName", 1, 134219155, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"argumentTypes", 2, 134219156, &EmptyCustomAttributesCache, &t637_0_0_0},
};
extern TypeInfo t666_TI;
extern Il2CppType t657_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3342_MI = 
{
	"GetValidMethodInfo", (methodPointerType)&m3342, &t666_TI, &t657_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t666_m3342_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 1322, NULL, (methodPointerType)NULL};
static MethodInfo* t666_MIs[] =
{
	&m3334_MI,
	&m1876_MI,
	&m1877_MI,
	&m3519_MI,
	&m3495_MI,
	&m3335_MI,
	&m3336_MI,
	&m3337_MI,
	&m3338_MI,
	&m3339_MI,
	&m3340_MI,
	&m3341_MI,
	&m1875_MI,
	&m3342_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m1875_MI;
extern MethodInfo m1876_MI;
extern MethodInfo m1877_MI;
static MethodInfo* t666_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m1875_MI,
	&m1876_MI,
	&m1877_MI,
	NULL,
	NULL,
};
extern TypeInfo t441_TI;
static TypeInfo* t666_ITIs[] = 
{
	&t441_TI,
};
extern TypeInfo t441_TI;
static Il2CppInterfaceOffsetPair t666_IOs[] = 
{
	{ &t441_TI, 4},
};
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
extern TypeInfo t440_TI;
extern MethodInfo m1873_MI;
void t666_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t440 * tmp;
		tmp = (t440 *)il2cpp_codegen_object_new (&t440_TI);
		m1873(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), &m1873_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t666_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t666__CustomAttributeCache_m_PersistentCalls = {
2,
NULL,
&t666_CustomAttributesCacheGenerator_m_PersistentCalls
};
CustomAttributesCache t666__CustomAttributeCache_m_TypeName = {
1,
NULL,
&t666_CustomAttributesCacheGenerator_m_TypeName
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t666_0_0_0;
extern Il2CppType t666_1_0_0;
extern TypeInfo t25_TI;
struct t666;
extern TypeInfo t666_TI;
extern CustomAttributesCache t666__CustomAttributeCache_m_PersistentCalls;
extern CustomAttributesCache t666__CustomAttributeCache_m_TypeName;
TypeInfo t666_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEventBase", "UnityEngine.Events", t666_MIs, NULL, t666_FIs, NULL, &t25_TI, NULL, NULL, &t666_TI, t666_ITIs, t666_VT, &EmptyCustomAttributesCache, &t666_TI, &t666_0_0_0, &t666_1_0_0, t666_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t666), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 14, 0, 4, 0, 0, 8, 1, 1};
#include "t283.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t283_TI;
#include "t283MD.h"

extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t283_TI;
extern TypeInfo t637_TI;
extern TypeInfo t131_TI;
extern TypeInfo t658_TI;
extern MethodInfo m3334_MI;
extern MethodInfo m3342_MI;
extern MethodInfo m3315_MI;
extern MethodInfo m3341_MI;


extern MethodInfo m2026_MI;
 void m2026 (t283 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2026_MI);
	{
		__this->f4 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), 0));
		m3334(__this, &m3334_MI);
		return;
	}
}
extern MethodInfo m2027_MI;
 t657 * m2027 (t283 * __this, t27* p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2027_MI);
	{
		t657 * L_0 = m3342(NULL, p1, p0, ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), 0)), &m3342_MI);
		return L_0;
	}
}
extern MethodInfo m2028_MI;
 t656 * m2028 (t283 * __this, t25 * p0, t657 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2028_MI);
	{
		t658 * L_0 = (t658 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t658_TI));
		m3315(L_0, p0, p1, &m3315_MI);
		return L_0;
	}
}
extern MethodInfo m2030_MI;
 void m2030 (t283 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2030_MI);
	{
		t158* L_0 = (__this->f4);
		m3341(__this, L_0, &m3341_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Events.UnityEvent
extern Il2CppType t158_0_0_33;
FieldInfo t283_f4_FieldInfo = 
{
	"m_InvokeArray", &t158_0_0_33, &t283_TI, offsetof(t283, f4), &EmptyCustomAttributesCache};
static FieldInfo* t283_FIs[] =
{
	&t283_f4_FieldInfo,
	NULL
};
extern TypeInfo t283_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2026_MI = 
{
	".ctor", (methodPointerType)&m2026, &t283_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1323, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t283_m2027_ParameterInfos[] = 
{
	{"name", 0, 134219157, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"targetObj", 1, 134219158, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t283_TI;
extern Il2CppType t657_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2027_MI = 
{
	"FindMethod_Impl", (methodPointerType)&m2027, &t283_TI, &t657_0_0_0, RuntimeInvoker_t25_t25_t25, t283_m2027_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, false, 1324, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t283_m2028_ParameterInfos[] = 
{
	{"target", 0, 134219159, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134219160, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t283_TI;
extern Il2CppType t656_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2028_MI = 
{
	"GetDelegate", (methodPointerType)&m2028, &t283_TI, &t656_0_0_0, RuntimeInvoker_t25_t25_t25, t283_m2028_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, false, 1325, NULL, (methodPointerType)NULL};
extern TypeInfo t283_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2030_MI = 
{
	"Invoke", (methodPointerType)&m2030, &t283_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 1326, NULL, (methodPointerType)NULL};
static MethodInfo* t283_MIs[] =
{
	&m2026_MI,
	&m2027_MI,
	&m2028_MI,
	&m2030_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m1875_MI;
extern MethodInfo m1876_MI;
extern MethodInfo m1877_MI;
extern MethodInfo m2027_MI;
extern MethodInfo m2028_MI;
static MethodInfo* t283_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m1875_MI,
	&m1876_MI,
	&m1877_MI,
	&m2027_MI,
	&m2028_MI,
};
extern TypeInfo t441_TI;
static Il2CppInterfaceOffsetPair t283_IOs[] = 
{
	{ &t441_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t283_0_0_0;
extern Il2CppType t283_1_0_0;
extern TypeInfo t666_TI;
struct t283;
extern TypeInfo t283_TI;
TypeInfo t283_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent", "UnityEngine.Events", t283_MIs, NULL, t283_FIs, NULL, &t666_TI, NULL, NULL, &t283_TI, NULL, t283_VT, &EmptyCustomAttributesCache, &t283_TI, &t283_0_0_0, &t283_1_0_0, t283_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t283), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 8, 0, 1};
#include "t671.h"
extern Il2CppGenericContainer t671_IGC;
extern TypeInfo t671_gp_T0_0_TI;
Il2CppGenericParamFull t671_gp_T0_0_TI_GenericParamFull = { { &t671_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
static Il2CppGenericParamFull* t671_IGPA[1] = 
{
	&t671_gp_T0_0_TI_GenericParamFull,
};
extern TypeInfo t671_TI;
Il2CppGenericContainer t671_IGC = { { NULL, NULL }, NULL, &t671_TI, 1, 0, t671_IGPA };
extern TypeInfo t671_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3523_MI = 
{
	".ctor", NULL, &t671_TI, &t123_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 1327, NULL, (methodPointerType)NULL};
extern Il2CppType t757_0_0_0;
static ParameterInfo t671_m3524_ParameterInfos[] = 
{
	{"call", 0, 134219161, &EmptyCustomAttributesCache, &t757_0_0_0},
};
extern TypeInfo t671_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3524_MI = 
{
	"AddListener", NULL, &t671_TI, &t123_0_0_0, NULL, t671_m3524_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1328, NULL, (methodPointerType)NULL};
extern Il2CppType t757_0_0_0;
static ParameterInfo t671_m3525_ParameterInfos[] = 
{
	{"call", 0, 134219162, &EmptyCustomAttributesCache, &t757_0_0_0},
};
extern TypeInfo t671_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3525_MI = 
{
	"RemoveListener", NULL, &t671_TI, &t123_0_0_0, NULL, t671_m3525_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1329, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t671_m3526_ParameterInfos[] = 
{
	{"name", 0, 134219163, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"targetObj", 1, 134219164, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t671_TI;
extern Il2CppType t657_0_0_0;
MethodInfo m3526_MI = 
{
	"FindMethod_Impl", NULL, &t671_TI, &t657_0_0_0, NULL, t671_m3526_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, false, 1330, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t671_m3527_ParameterInfos[] = 
{
	{"target", 0, 134219165, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134219166, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t671_TI;
extern Il2CppType t656_0_0_0;
MethodInfo m3527_MI = 
{
	"GetDelegate", NULL, &t671_TI, &t656_0_0_0, NULL, t671_m3527_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, false, 1331, NULL, (methodPointerType)NULL};
extern Il2CppType t757_0_0_0;
static ParameterInfo t671_m3528_ParameterInfos[] = 
{
	{"action", 0, 134219167, &EmptyCustomAttributesCache, &t757_0_0_0},
};
extern TypeInfo t671_TI;
extern Il2CppType t656_0_0_0;
MethodInfo m3528_MI = 
{
	"GetDelegate", NULL, &t671_TI, &t656_0_0_0, NULL, t671_m3528_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 1332, NULL, (methodPointerType)NULL};
extern Il2CppType t671_gp_0_0_0_0;
static ParameterInfo t671_m3529_ParameterInfos[] = 
{
	{"arg0", 0, 134219168, &EmptyCustomAttributesCache, &t671_gp_0_0_0_0},
};
extern TypeInfo t671_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3529_MI = 
{
	"Invoke", NULL, &t671_TI, &t123_0_0_0, NULL, t671_m3529_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1333, NULL, (methodPointerType)NULL};
static MethodInfo* t671_MIs[] =
{
	&m3523_MI,
	&m3524_MI,
	&m3525_MI,
	&m3526_MI,
	&m3527_MI,
	&m3528_MI,
	&m3529_MI,
	NULL
};
extern Il2CppType t158_0_0_33;
FieldInfo t671_f4_FieldInfo = 
{
	"m_InvokeArray", &t158_0_0_33, &t671_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t671_FIs[] =
{
	&t671_f4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t671_0_0_0;
extern Il2CppType t671_1_0_0;
struct t671;
extern TypeInfo t671_TI;
TypeInfo t671_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`1", "UnityEngine.Events", t671_MIs, NULL, t671_FIs, NULL, NULL, NULL, NULL, &t671_TI, NULL, NULL, NULL, NULL, &t671_0_0_0, &t671_1_0_0, NULL, NULL, &t671_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 0, 1, 0, 0, 0, 0, 0};
#include "t672.h"
extern Il2CppGenericContainer t672_IGC;
extern TypeInfo t672_gp_T0_0_TI;
Il2CppGenericParamFull t672_gp_T0_0_TI_GenericParamFull = { { &t672_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo t672_gp_T1_1_TI;
Il2CppGenericParamFull t672_gp_T1_1_TI_GenericParamFull = { { &t672_IGC, 1}, {NULL, "T1", 0, 0, NULL} };
static Il2CppGenericParamFull* t672_IGPA[2] = 
{
	&t672_gp_T0_0_TI_GenericParamFull,
	&t672_gp_T1_1_TI_GenericParamFull,
};
extern TypeInfo t672_TI;
Il2CppGenericContainer t672_IGC = { { NULL, NULL }, NULL, &t672_TI, 2, 0, t672_IGPA };
extern TypeInfo t672_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3530_MI = 
{
	".ctor", NULL, &t672_TI, &t123_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 1334, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t672_m3531_ParameterInfos[] = 
{
	{"name", 0, 134219169, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"targetObj", 1, 134219170, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t672_TI;
extern Il2CppType t657_0_0_0;
MethodInfo m3531_MI = 
{
	"FindMethod_Impl", NULL, &t672_TI, &t657_0_0_0, NULL, t672_m3531_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, false, 1335, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t672_m3532_ParameterInfos[] = 
{
	{"target", 0, 134219171, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134219172, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t672_TI;
extern Il2CppType t656_0_0_0;
MethodInfo m3532_MI = 
{
	"GetDelegate", NULL, &t672_TI, &t656_0_0_0, NULL, t672_m3532_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, false, 1336, NULL, (methodPointerType)NULL};
static MethodInfo* t672_MIs[] =
{
	&m3530_MI,
	&m3531_MI,
	&m3532_MI,
	NULL
};
extern Il2CppType t158_0_0_33;
FieldInfo t672_f4_FieldInfo = 
{
	"m_InvokeArray", &t158_0_0_33, &t672_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t672_FIs[] =
{
	&t672_f4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t672_0_0_0;
extern Il2CppType t672_1_0_0;
struct t672;
extern TypeInfo t672_TI;
TypeInfo t672_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`2", "UnityEngine.Events", t672_MIs, NULL, t672_FIs, NULL, NULL, NULL, NULL, &t672_TI, NULL, NULL, NULL, NULL, &t672_0_0_0, &t672_1_0_0, NULL, NULL, &t672_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 0, 0, 0};
#include "t673.h"
extern Il2CppGenericContainer t673_IGC;
extern TypeInfo t673_gp_T0_0_TI;
Il2CppGenericParamFull t673_gp_T0_0_TI_GenericParamFull = { { &t673_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo t673_gp_T1_1_TI;
Il2CppGenericParamFull t673_gp_T1_1_TI_GenericParamFull = { { &t673_IGC, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo t673_gp_T2_2_TI;
Il2CppGenericParamFull t673_gp_T2_2_TI_GenericParamFull = { { &t673_IGC, 2}, {NULL, "T2", 0, 0, NULL} };
static Il2CppGenericParamFull* t673_IGPA[3] = 
{
	&t673_gp_T0_0_TI_GenericParamFull,
	&t673_gp_T1_1_TI_GenericParamFull,
	&t673_gp_T2_2_TI_GenericParamFull,
};
extern TypeInfo t673_TI;
Il2CppGenericContainer t673_IGC = { { NULL, NULL }, NULL, &t673_TI, 3, 0, t673_IGPA };
extern TypeInfo t673_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3533_MI = 
{
	".ctor", NULL, &t673_TI, &t123_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 1337, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t673_m3534_ParameterInfos[] = 
{
	{"name", 0, 134219173, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"targetObj", 1, 134219174, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t673_TI;
extern Il2CppType t657_0_0_0;
MethodInfo m3534_MI = 
{
	"FindMethod_Impl", NULL, &t673_TI, &t657_0_0_0, NULL, t673_m3534_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, false, 1338, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t673_m3535_ParameterInfos[] = 
{
	{"target", 0, 134219175, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134219176, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t673_TI;
extern Il2CppType t656_0_0_0;
MethodInfo m3535_MI = 
{
	"GetDelegate", NULL, &t673_TI, &t656_0_0_0, NULL, t673_m3535_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, false, 1339, NULL, (methodPointerType)NULL};
static MethodInfo* t673_MIs[] =
{
	&m3533_MI,
	&m3534_MI,
	&m3535_MI,
	NULL
};
extern Il2CppType t158_0_0_33;
FieldInfo t673_f4_FieldInfo = 
{
	"m_InvokeArray", &t158_0_0_33, &t673_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t673_FIs[] =
{
	&t673_f4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t673_0_0_0;
extern Il2CppType t673_1_0_0;
struct t673;
extern TypeInfo t673_TI;
TypeInfo t673_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`3", "UnityEngine.Events", t673_MIs, NULL, t673_FIs, NULL, NULL, NULL, NULL, &t673_TI, NULL, NULL, NULL, NULL, &t673_0_0_0, &t673_1_0_0, NULL, NULL, &t673_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 0, 0, 0};
#include "t674.h"
extern Il2CppGenericContainer t674_IGC;
extern TypeInfo t674_gp_T0_0_TI;
Il2CppGenericParamFull t674_gp_T0_0_TI_GenericParamFull = { { &t674_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo t674_gp_T1_1_TI;
Il2CppGenericParamFull t674_gp_T1_1_TI_GenericParamFull = { { &t674_IGC, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo t674_gp_T2_2_TI;
Il2CppGenericParamFull t674_gp_T2_2_TI_GenericParamFull = { { &t674_IGC, 2}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo t674_gp_T3_3_TI;
Il2CppGenericParamFull t674_gp_T3_3_TI_GenericParamFull = { { &t674_IGC, 3}, {NULL, "T3", 0, 0, NULL} };
static Il2CppGenericParamFull* t674_IGPA[4] = 
{
	&t674_gp_T0_0_TI_GenericParamFull,
	&t674_gp_T1_1_TI_GenericParamFull,
	&t674_gp_T2_2_TI_GenericParamFull,
	&t674_gp_T3_3_TI_GenericParamFull,
};
extern TypeInfo t674_TI;
Il2CppGenericContainer t674_IGC = { { NULL, NULL }, NULL, &t674_TI, 4, 0, t674_IGPA };
extern TypeInfo t674_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3536_MI = 
{
	".ctor", NULL, &t674_TI, &t123_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 1340, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t674_m3537_ParameterInfos[] = 
{
	{"name", 0, 134219177, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"targetObj", 1, 134219178, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t674_TI;
extern Il2CppType t657_0_0_0;
MethodInfo m3537_MI = 
{
	"FindMethod_Impl", NULL, &t674_TI, &t657_0_0_0, NULL, t674_m3537_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, false, 1341, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t674_m3538_ParameterInfos[] = 
{
	{"target", 0, 134219179, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134219180, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t674_TI;
extern Il2CppType t656_0_0_0;
MethodInfo m3538_MI = 
{
	"GetDelegate", NULL, &t674_TI, &t656_0_0_0, NULL, t674_m3538_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, false, 1342, NULL, (methodPointerType)NULL};
static MethodInfo* t674_MIs[] =
{
	&m3536_MI,
	&m3537_MI,
	&m3538_MI,
	NULL
};
extern Il2CppType t158_0_0_33;
FieldInfo t674_f4_FieldInfo = 
{
	"m_InvokeArray", &t158_0_0_33, &t674_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t674_FIs[] =
{
	&t674_f4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t674_0_0_0;
extern Il2CppType t674_1_0_0;
struct t674;
extern TypeInfo t674_TI;
TypeInfo t674_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`4", "UnityEngine.Events", t674_MIs, NULL, t674_FIs, NULL, NULL, NULL, NULL, &t674_TI, NULL, NULL, NULL, NULL, &t674_0_0_0, &t674_1_0_0, NULL, NULL, &t674_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 0, 0, 0};
#include "t675.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t675_TI;
#include "t675MD.h"

#include "t3MD.h"
extern MethodInfo m334_MI;


extern MethodInfo m3343_MI;
 void m3343 (t675 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3343_MI);
	{
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m3344_MI;
 void m3344 (t675 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3344_MI);
	{
		return;
	}
}
extern MethodInfo m3345_MI;
 void m3345 (t675 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3345_MI);
	{
		return;
	}
}
extern MethodInfo m3346_MI;
 void m3346 (t675 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3346_MI);
	{
		return;
	}
}
// Metadata Definition UnityEngine.UserAuthorizationDialog
extern TypeInfo t675_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3343_MI = 
{
	".ctor", (methodPointerType)&m3343, &t675_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1343, NULL, (methodPointerType)NULL};
extern TypeInfo t675_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3344_MI = 
{
	"Start", (methodPointerType)&m3344, &t675_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 1344, NULL, (methodPointerType)NULL};
extern TypeInfo t675_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3345_MI = 
{
	"OnGUI", (methodPointerType)&m3345, &t675_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 1345, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t675_m3346_ParameterInfos[] = 
{
	{"windowID", 0, 134219181, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t675_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m3346_MI = 
{
	"DoUserAuthorizationDialog", (methodPointerType)&m3346, &t675_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t675_m3346_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 1346, NULL, (methodPointerType)NULL};
static MethodInfo* t675_MIs[] =
{
	&m3343_MI,
	&m3344_MI,
	&m3345_MI,
	&m3346_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t675_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t439_TI;
#include "t439.h"
#include "t439MD.h"
extern MethodInfo m1872_MI;
void t675_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t439 * tmp;
		tmp = (t439 *)il2cpp_codegen_object_new (&t439_TI);
		m1872(tmp, il2cpp_codegen_string_new_wrapper(""), &m1872_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t675__CustomAttributeCache = {
1,
NULL,
&t675_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t675_0_0_0;
extern Il2CppType t675_1_0_0;
extern TypeInfo t3_TI;
struct t675;
extern TypeInfo t675_TI;
extern CustomAttributesCache t675__CustomAttributeCache;
TypeInfo t675_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UserAuthorizationDialog", "UnityEngine", t675_MIs, NULL, NULL, NULL, &t3_TI, NULL, NULL, &t675_TI, NULL, t675_VT, &t675__CustomAttributeCache, &t675_TI, &t675_0_0_0, &t675_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t675), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 4, 0, 0};
#include "t676.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t676_TI;
#include "t676MD.h"

#include "t591.h"
extern TypeInfo t676_TI;
extern TypeInfo t25_TI;
extern TypeInfo t125_TI;
extern TypeInfo t591_TI;
extern TypeInfo t134_TI;
#include "t591MD.h"
extern MethodInfo m3403_MI;
extern MethodInfo m3348_MI;
extern MethodInfo m455_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m456_MI;


extern MethodInfo m3347_MI;
 void m3347 (t676 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3347_MI);
	{
		m3403(__this, &m3403_MI);
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m3348_MI;
 t25 * m3348 (t676 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3348_MI);
	{
		t25 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3349_MI;
 bool m3349 (t676 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3349_MI);
	t676 * V_0 = {0};
	{
		V_0 = ((t676 *)IsInst(p0, InitializedTypeInfo(&t676_TI)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		t25 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		NullCheck(V_0);
		t25 * L_1 = m3348(V_0, &m3348_MI);
		return ((((t25 *)L_1) == ((t25 *)NULL))? 1 : 0);
	}

IL_0024:
	{
		t25 * L_2 = (__this->f0);
		NullCheck(V_0);
		t25 * L_3 = m3348(V_0, &m3348_MI);
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, t25 * >::Invoke(&m455_MI, L_2, L_3);
		return L_4;
	}
}
extern MethodInfo m3350_MI;
 int32_t m3350 (t676 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3350_MI);
	{
		t25 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = m3405(__this, &m3405_MI);
		return L_1;
	}

IL_0012:
	{
		t25 * L_2 = (__this->f0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m456_MI, L_2);
		return L_3;
	}
}
// Metadata Definition UnityEngine.Internal.DefaultValueAttribute
extern Il2CppType t25_0_0_1;
FieldInfo t676_f0_FieldInfo = 
{
	"DefaultValue", &t25_0_0_1, &t676_TI, offsetof(t676, f0), &EmptyCustomAttributesCache};
static FieldInfo* t676_FIs[] =
{
	&t676_f0_FieldInfo,
	NULL
};
extern MethodInfo m3348_MI;
static PropertyInfo t676____Value_PropertyInfo = 
{
	&t676_TI, "Value", &m3348_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t676_PIs[] =
{
	&t676____Value_PropertyInfo,
	NULL
};
extern Il2CppType t27_0_0_0;
static ParameterInfo t676_m3347_ParameterInfos[] = 
{
	{"value", 0, 134219182, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t676_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3347_MI = 
{
	".ctor", (methodPointerType)&m3347, &t676_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t676_m3347_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1347, NULL, (methodPointerType)NULL};
extern TypeInfo t676_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3348_MI = 
{
	"get_Value", (methodPointerType)&m3348, &t676_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1348, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t676_m3349_ParameterInfos[] = 
{
	{"obj", 0, 134219183, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t676_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3349_MI = 
{
	"Equals", (methodPointerType)&m3349, &t676_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t676_m3349_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 1349, NULL, (methodPointerType)NULL};
extern TypeInfo t676_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m3350_MI = 
{
	"GetHashCode", (methodPointerType)&m3350, &t676_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 1350, NULL, (methodPointerType)NULL};
static MethodInfo* t676_MIs[] =
{
	&m3347_MI,
	&m3348_MI,
	&m3349_MI,
	&m3350_MI,
	NULL
};
extern MethodInfo m3349_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3350_MI;
extern MethodInfo m457_MI;
static MethodInfo* t676_VT[] =
{
	&m3349_MI,
	&m352_MI,
	&m3350_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t676_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t724_TI;
#include "t724.h"
#include "t724MD.h"
extern MethodInfo m3439_MI;
void t676_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 18432, &m3439_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t676__CustomAttributeCache = {
1,
NULL,
&t676_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t676_0_0_0;
extern Il2CppType t676_1_0_0;
extern TypeInfo t591_TI;
struct t676;
extern TypeInfo t676_TI;
extern CustomAttributesCache t676__CustomAttributeCache;
TypeInfo t676_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "DefaultValueAttribute", "UnityEngine.Internal", t676_MIs, t676_PIs, t676_FIs, NULL, &t591_TI, NULL, NULL, &t676_TI, NULL, t676_VT, &t676__CustomAttributeCache, &t676_TI, &t676_0_0_0, &t676_1_0_0, t676_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t676), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 1, 1, 0, 0, 4, 0, 1};
#include "t677.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t677_TI;
#include "t677MD.h"

extern MethodInfo m3403_MI;


extern MethodInfo m3351_MI;
 void m3351 (t677 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3351_MI);
	{
		m3403(__this, &m3403_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Internal.ExcludeFromDocsAttribute
extern TypeInfo t677_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3351_MI = 
{
	".ctor", (methodPointerType)&m3351, &t677_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1351, NULL, (methodPointerType)NULL};
static MethodInfo* t677_MIs[] =
{
	&m3351_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t677_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t677_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
void t677_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 64, &m3439_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t677__CustomAttributeCache = {
1,
NULL,
&t677_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t677_0_0_0;
extern Il2CppType t677_1_0_0;
extern TypeInfo t591_TI;
struct t677;
extern TypeInfo t677_TI;
extern CustomAttributesCache t677__CustomAttributeCache;
TypeInfo t677_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "ExcludeFromDocsAttribute", "UnityEngine.Internal", t677_MIs, NULL, NULL, NULL, &t591_TI, NULL, NULL, &t677_TI, NULL, t677_VT, &t677__CustomAttributeCache, &t677_TI, &t677_0_0_0, &t677_1_0_0, t677_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t677), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t440_TI;

extern TypeInfo t440_TI;
extern MethodInfo m3403_MI;


extern MethodInfo m1873_MI;
 void m1873 (t440 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m1873_MI);
	{
		m3403(__this, &m3403_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition UnityEngine.Serialization.FormerlySerializedAsAttribute
extern Il2CppType t27_0_0_1;
FieldInfo t440_f0_FieldInfo = 
{
	"m_oldName", &t27_0_0_1, &t440_TI, offsetof(t440, f0), &EmptyCustomAttributesCache};
static FieldInfo* t440_FIs[] =
{
	&t440_f0_FieldInfo,
	NULL
};
extern Il2CppType t27_0_0_0;
static ParameterInfo t440_m1873_ParameterInfos[] = 
{
	{"oldName", 0, 134219184, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t440_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m1873_MI = 
{
	".ctor", (methodPointerType)&m1873, &t440_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t440_m1873_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1352, NULL, (methodPointerType)NULL};
static MethodInfo* t440_MIs[] =
{
	&m1873_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t440_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t440_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
void t440_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 256, &m3439_MI);
		extern MethodInfo m3441_MI;
		m3441(tmp, true, &m3441_MI);
		extern MethodInfo m3440_MI;
		m3440(tmp, false, &m3440_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t440__CustomAttributeCache = {
1,
NULL,
&t440_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t440_0_0_0;
extern Il2CppType t440_1_0_0;
extern TypeInfo t591_TI;
struct t440;
extern TypeInfo t440_TI;
extern CustomAttributesCache t440__CustomAttributeCache;
TypeInfo t440_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "FormerlySerializedAsAttribute", "UnityEngine.Serialization", t440_MIs, NULL, t440_FIs, NULL, &t591_TI, NULL, NULL, &t440_TI, NULL, t440_VT, &t440__CustomAttributeCache, &t440_TI, &t440_0_0_0, &t440_1_0_0, t440_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t440), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t678.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t678_TI;
#include "t678MD.h"



// Metadata Definition UnityEngineInternal.TypeInferenceRules
extern Il2CppType t134_0_0_1542;
FieldInfo t678_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t678_TI, offsetof(t678, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t678_0_0_32854;
FieldInfo t678_f2_FieldInfo = 
{
	"TypeReferencedByFirstArgument", &t678_0_0_32854, &t678_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t678_0_0_32854;
FieldInfo t678_f3_FieldInfo = 
{
	"TypeReferencedBySecondArgument", &t678_0_0_32854, &t678_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t678_0_0_32854;
FieldInfo t678_f4_FieldInfo = 
{
	"ArrayOfTypeReferencedByFirstArgument", &t678_0_0_32854, &t678_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t678_0_0_32854;
FieldInfo t678_f5_FieldInfo = 
{
	"TypeOfFirstArgument", &t678_0_0_32854, &t678_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t678_FIs[] =
{
	&t678_f1_FieldInfo,
	&t678_f2_FieldInfo,
	&t678_f3_FieldInfo,
	&t678_f4_FieldInfo,
	&t678_f5_FieldInfo,
	NULL
};
static const int32_t t678_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t678_f2_DefaultValue = 
{
	&t678_f2_FieldInfo, { (char*)&t678_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t678_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t678_f3_DefaultValue = 
{
	&t678_f3_FieldInfo, { (char*)&t678_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t678_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t678_f4_DefaultValue = 
{
	&t678_f4_FieldInfo, { (char*)&t678_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t678_f5_DefaultValueData = 3;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t678_f5_DefaultValue = 
{
	&t678_f5_FieldInfo, { (char*)&t678_f5_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t678_FDVs[] = 
{
	&t678_f2_DefaultValue,
	&t678_f3_DefaultValue,
	&t678_f4_DefaultValue,
	&t678_f5_DefaultValue,
	NULL
};
static MethodInfo* t678_MIs[] =
{
	NULL
};
extern MethodInfo m389_MI;
extern MethodInfo m352_MI;
extern MethodInfo m390_MI;
extern MethodInfo m391_MI;
extern MethodInfo m392_MI;
extern MethodInfo m393_MI;
extern MethodInfo m394_MI;
extern MethodInfo m395_MI;
extern MethodInfo m396_MI;
extern MethodInfo m397_MI;
extern MethodInfo m398_MI;
extern MethodInfo m399_MI;
extern MethodInfo m400_MI;
extern MethodInfo m401_MI;
extern MethodInfo m402_MI;
extern MethodInfo m403_MI;
extern MethodInfo m404_MI;
extern MethodInfo m405_MI;
extern MethodInfo m406_MI;
extern MethodInfo m407_MI;
extern MethodInfo m408_MI;
extern MethodInfo m409_MI;
extern MethodInfo m410_MI;
static MethodInfo* t678_VT[] =
{
	&m389_MI,
	&m352_MI,
	&m390_MI,
	&m391_MI,
	&m392_MI,
	&m393_MI,
	&m394_MI,
	&m395_MI,
	&m396_MI,
	&m397_MI,
	&m398_MI,
	&m399_MI,
	&m400_MI,
	&m401_MI,
	&m402_MI,
	&m403_MI,
	&m404_MI,
	&m405_MI,
	&m406_MI,
	&m407_MI,
	&m408_MI,
	&m409_MI,
	&m410_MI,
};
extern TypeInfo t141_TI;
extern TypeInfo t142_TI;
extern TypeInfo t143_TI;
static Il2CppInterfaceOffsetPair t678_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t678_0_0_0;
extern Il2CppType t678_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
TypeInfo t678_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TypeInferenceRules", "UnityEngineInternal", t678_MIs, NULL, t678_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t678_VT, &EmptyCustomAttributesCache, &t134_TI, &t678_0_0_0, &t678_1_0_0, t678_IOs, NULL, NULL, t678_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t678)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t679.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t679_TI;
#include "t679MD.h"

#include "t15.h"
extern TypeInfo t678_TI;
extern TypeInfo t15_TI;
extern TypeInfo t27_TI;
extern TypeInfo t679_TI;
#include "t15MD.h"
extern MethodInfo m391_MI;
extern MethodInfo m3353_MI;
extern MethodInfo m3403_MI;


extern MethodInfo m3352_MI;
 void m3352 (t679 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3352_MI);
	{
		int32_t L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t678_TI), &L_0);
		NullCheck(L_1);
		t27* L_2 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m391_MI, L_1);
		m3353(__this, L_2, &m3353_MI);
		return;
	}
}
extern MethodInfo m3353_MI;
 void m3353 (t679 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3353_MI);
	{
		m3403(__this, &m3403_MI);
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m3354_MI;
 t27* m3354 (t679 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3354_MI);
	{
		t27* L_0 = (__this->f0);
		return L_0;
	}
}
// Metadata Definition UnityEngineInternal.TypeInferenceRuleAttribute
extern Il2CppType t27_0_0_33;
FieldInfo t679_f0_FieldInfo = 
{
	"_rule", &t27_0_0_33, &t679_TI, offsetof(t679, f0), &EmptyCustomAttributesCache};
static FieldInfo* t679_FIs[] =
{
	&t679_f0_FieldInfo,
	NULL
};
extern Il2CppType t678_0_0_0;
static ParameterInfo t679_m3352_ParameterInfos[] = 
{
	{"rule", 0, 134219185, &EmptyCustomAttributesCache, &t678_0_0_0},
};
extern TypeInfo t679_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m3352_MI = 
{
	".ctor", (methodPointerType)&m3352, &t679_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t679_m3352_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1353, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t679_m3353_ParameterInfos[] = 
{
	{"rule", 0, 134219186, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t679_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3353_MI = 
{
	".ctor", (methodPointerType)&m3353, &t679_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t679_m3353_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1354, NULL, (methodPointerType)NULL};
extern TypeInfo t679_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3354_MI = 
{
	"ToString", (methodPointerType)&m3354, &t679_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 1355, NULL, (methodPointerType)NULL};
static MethodInfo* t679_MIs[] =
{
	&m3352_MI,
	&m3353_MI,
	&m3354_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m3354_MI;
static MethodInfo* t679_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m3354_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t679_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
void t679_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 64, &m3439_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t679__CustomAttributeCache = {
1,
NULL,
&t679_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t679_0_0_0;
extern Il2CppType t679_1_0_0;
extern TypeInfo t591_TI;
struct t679;
extern TypeInfo t679_TI;
extern CustomAttributesCache t679__CustomAttributeCache;
TypeInfo t679_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TypeInferenceRuleAttribute", "UnityEngineInternal", t679_MIs, NULL, t679_FIs, NULL, &t591_TI, NULL, NULL, &t679_TI, NULL, t679_VT, &t679__CustomAttributeCache, &t679_TI, &t679_0_0_0, &t679_1_0_0, t679_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t679), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 4, 0, 1};
#include "t565.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t565_TI;
#include "t565MD.h"

#include "t680MD.h"
extern MethodInfo m3539_MI;


extern MethodInfo m3355_MI;
 void m3355 (t565 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3355_MI);
	{
		m3539(__this, &m3539_MI);
		return;
	}
}
// Metadata Definition UnityEngineInternal.GenericStack
extern TypeInfo t565_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3355_MI = 
{
	".ctor", (methodPointerType)&m3355, &t565_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1356, NULL, (methodPointerType)NULL};
static MethodInfo* t565_MIs[] =
{
	&m3355_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m3540_MI;
extern MethodInfo m3541_MI;
extern MethodInfo m3542_MI;
extern MethodInfo m3543_MI;
extern MethodInfo m3544_MI;
extern MethodInfo m3541_MI;
extern MethodInfo m3542_MI;
extern MethodInfo m3543_MI;
extern MethodInfo m3370_MI;
extern MethodInfo m3544_MI;
extern MethodInfo m3540_MI;
extern MethodInfo m3545_MI;
extern MethodInfo m3546_MI;
extern MethodInfo m3366_MI;
static MethodInfo* t565_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m3540_MI,
	&m3541_MI,
	&m3542_MI,
	&m3543_MI,
	&m3544_MI,
	&m3541_MI,
	&m3542_MI,
	&m3543_MI,
	&m3370_MI,
	&m3544_MI,
	&m3540_MI,
	&m3545_MI,
	&m3546_MI,
	&m3366_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t484_TI;
extern TypeInfo t759_TI;
static Il2CppInterfaceOffsetPair t565_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t484_TI, 5},
	{ &t759_TI, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t565_0_0_0;
extern Il2CppType t565_1_0_0;
extern TypeInfo t680_TI;
struct t565;
extern TypeInfo t565_TI;
TypeInfo t565_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GenericStack", "UnityEngineInternal", t565_MIs, NULL, NULL, NULL, &t680_TI, NULL, NULL, &t565_TI, NULL, t565_VT, &EmptyCustomAttributesCache, &t565_TI, &t565_0_0_0, &t565_1_0_0, t565_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t565), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 18, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t310_TI;

#include "t219.h"


extern MethodInfo m2230_MI;
 void m2230 (t310 * __this, t25 * p0, t61 p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2230_MI);
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m2073_MI;
 void m2073 (t310 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2073_MI);
	typedef  void (*FunctionPointerType) (t25 * __this, MethodInfo* method);
	if (__this->f9)
		m2073((t310 *)__this->f9 , method);
	((FunctionPointerType)__this->f0)(__this->f2, (MethodInfo*)(__this->f3.f0));
}
void pinvoke_delegate_wrapper_t310(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m3356_MI;
 t25 * m3356 (t310 * __this, t219 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3356_MI);
	void *__d_args[1] = {0};
	return (t25 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m3357_MI;
 void m3357 (t310 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3357_MI);
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition UnityEngine.Events.UnityAction
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t310_m2230_ParameterInfos[] = 
{
	{"object", 0, 134219187, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134219188, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t310_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m2230_MI = 
{
	".ctor", (methodPointerType)&m2230, &t310_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t310_m2230_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 1357, NULL, (methodPointerType)NULL};
extern TypeInfo t310_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2073_MI = 
{
	"Invoke", (methodPointerType)&m2073, &t310_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 454, 3, 10, 0, false, false, 1358, NULL, (methodPointerType)NULL};
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t310_m3356_ParameterInfos[] = 
{
	{"callback", 0, 134219189, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 1, 134219190, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t310_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3356_MI = 
{
	"BeginInvoke", (methodPointerType)&m3356, &t310_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25, t310_m3356_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 2, false, false, 1359, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t310_m3357_ParameterInfos[] = 
{
	{"result", 0, 134219191, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t310_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3357_MI = 
{
	"EndInvoke", (methodPointerType)&m3357, &t310_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t310_m3357_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 1360, NULL, (methodPointerType)NULL};
static MethodInfo* t310_MIs[] =
{
	&m2230_MI,
	&m2073_MI,
	&m3356_MI,
	&m3357_MI,
	NULL
};
extern MethodInfo m2195_MI;
extern MethodInfo m352_MI;
extern MethodInfo m2196_MI;
extern MethodInfo m457_MI;
extern MethodInfo m2197_MI;
extern MethodInfo m2198_MI;
extern MethodInfo m2197_MI;
extern MethodInfo m2199_MI;
extern MethodInfo m2200_MI;
extern MethodInfo m2201_MI;
extern MethodInfo m2073_MI;
extern MethodInfo m3356_MI;
extern MethodInfo m3357_MI;
static MethodInfo* t310_VT[] =
{
	&m2195_MI,
	&m352_MI,
	&m2196_MI,
	&m457_MI,
	&m2197_MI,
	&m2198_MI,
	&m2197_MI,
	&m2199_MI,
	&m2200_MI,
	&m2201_MI,
	&m2073_MI,
	&m3356_MI,
	&m3357_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t310_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t310_0_0_0;
extern Il2CppType t310_1_0_0;
extern TypeInfo t345_TI;
struct t310;
extern TypeInfo t310_TI;
TypeInfo t310_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction", "UnityEngine.Events", t310_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t310_TI, NULL, t310_VT, &EmptyCustomAttributesCache, &t310_TI, &t310_0_0_0, &t310_1_0_0, t310_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t310, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t310), 0, sizeof(methodPointerType), 0, 0, -1, 257, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t681.h"
extern Il2CppGenericContainer t681_IGC;
extern TypeInfo t681_gp_T0_0_TI;
Il2CppGenericParamFull t681_gp_T0_0_TI_GenericParamFull = { { &t681_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
static Il2CppGenericParamFull* t681_IGPA[1] = 
{
	&t681_gp_T0_0_TI_GenericParamFull,
};
extern TypeInfo t681_TI;
Il2CppGenericContainer t681_IGC = { { NULL, NULL }, NULL, &t681_TI, 1, 0, t681_IGPA };
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t681_m3547_ParameterInfos[] = 
{
	{"object", 0, 134219192, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134219193, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t681_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3547_MI = 
{
	".ctor", NULL, &t681_TI, &t123_0_0_0, NULL, t681_m3547_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 1361, NULL, (methodPointerType)NULL};
extern Il2CppType t681_gp_0_0_0_0;
static ParameterInfo t681_m3548_ParameterInfos[] = 
{
	{"arg0", 0, 134219194, &EmptyCustomAttributesCache, &t681_gp_0_0_0_0},
};
extern TypeInfo t681_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3548_MI = 
{
	"Invoke", NULL, &t681_TI, &t123_0_0_0, NULL, t681_m3548_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 1362, NULL, (methodPointerType)NULL};
extern Il2CppType t681_gp_0_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t681_m3549_ParameterInfos[] = 
{
	{"arg0", 0, 134219195, &EmptyCustomAttributesCache, &t681_gp_0_0_0_0},
	{"callback", 1, 134219196, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134219197, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t681_TI;
extern Il2CppType t218_0_0_0;
MethodInfo m3549_MI = 
{
	"BeginInvoke", NULL, &t681_TI, &t218_0_0_0, NULL, t681_m3549_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 1363, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t681_m3550_ParameterInfos[] = 
{
	{"result", 0, 134219198, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t681_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3550_MI = 
{
	"EndInvoke", NULL, &t681_TI, &t123_0_0_0, NULL, t681_m3550_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 1364, NULL, (methodPointerType)NULL};
static MethodInfo* t681_MIs[] =
{
	&m3547_MI,
	&m3548_MI,
	&m3549_MI,
	&m3550_MI,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t681_0_0_0;
extern Il2CppType t681_1_0_0;
struct t681;
extern TypeInfo t681_TI;
TypeInfo t681_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t681_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t681_TI, NULL, NULL, NULL, NULL, &t681_0_0_0, &t681_1_0_0, NULL, NULL, &t681_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#include "t682.h"
extern Il2CppGenericContainer t682_IGC;
extern TypeInfo t682_gp_T0_0_TI;
Il2CppGenericParamFull t682_gp_T0_0_TI_GenericParamFull = { { &t682_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo t682_gp_T1_1_TI;
Il2CppGenericParamFull t682_gp_T1_1_TI_GenericParamFull = { { &t682_IGC, 1}, {NULL, "T1", 0, 0, NULL} };
static Il2CppGenericParamFull* t682_IGPA[2] = 
{
	&t682_gp_T0_0_TI_GenericParamFull,
	&t682_gp_T1_1_TI_GenericParamFull,
};
extern TypeInfo t682_TI;
Il2CppGenericContainer t682_IGC = { { NULL, NULL }, NULL, &t682_TI, 2, 0, t682_IGPA };
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t682_m3551_ParameterInfos[] = 
{
	{"object", 0, 134219199, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134219200, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t682_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3551_MI = 
{
	".ctor", NULL, &t682_TI, &t123_0_0_0, NULL, t682_m3551_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 1365, NULL, (methodPointerType)NULL};
extern Il2CppType t682_gp_0_0_0_0;
extern Il2CppType t682_gp_1_0_0_0;
static ParameterInfo t682_m3552_ParameterInfos[] = 
{
	{"arg0", 0, 134219201, &EmptyCustomAttributesCache, &t682_gp_0_0_0_0},
	{"arg1", 1, 134219202, &EmptyCustomAttributesCache, &t682_gp_1_0_0_0},
};
extern TypeInfo t682_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3552_MI = 
{
	"Invoke", NULL, &t682_TI, &t123_0_0_0, NULL, t682_m3552_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, false, 1366, NULL, (methodPointerType)NULL};
extern Il2CppType t682_gp_0_0_0_0;
extern Il2CppType t682_gp_1_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t682_m3553_ParameterInfos[] = 
{
	{"arg0", 0, 134219203, &EmptyCustomAttributesCache, &t682_gp_0_0_0_0},
	{"arg1", 1, 134219204, &EmptyCustomAttributesCache, &t682_gp_1_0_0_0},
	{"callback", 2, 134219205, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 3, 134219206, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t682_TI;
extern Il2CppType t218_0_0_0;
MethodInfo m3553_MI = 
{
	"BeginInvoke", NULL, &t682_TI, &t218_0_0_0, NULL, t682_m3553_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, false, 1367, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t682_m3554_ParameterInfos[] = 
{
	{"result", 0, 134219207, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t682_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3554_MI = 
{
	"EndInvoke", NULL, &t682_TI, &t123_0_0_0, NULL, t682_m3554_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 1368, NULL, (methodPointerType)NULL};
static MethodInfo* t682_MIs[] =
{
	&m3551_MI,
	&m3552_MI,
	&m3553_MI,
	&m3554_MI,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t682_0_0_0;
extern Il2CppType t682_1_0_0;
struct t682;
extern TypeInfo t682_TI;
TypeInfo t682_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`2", "UnityEngine.Events", t682_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t682_TI, NULL, NULL, NULL, NULL, &t682_0_0_0, &t682_1_0_0, NULL, NULL, &t682_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#include "t683.h"
extern Il2CppGenericContainer t683_IGC;
extern TypeInfo t683_gp_T0_0_TI;
Il2CppGenericParamFull t683_gp_T0_0_TI_GenericParamFull = { { &t683_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo t683_gp_T1_1_TI;
Il2CppGenericParamFull t683_gp_T1_1_TI_GenericParamFull = { { &t683_IGC, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo t683_gp_T2_2_TI;
Il2CppGenericParamFull t683_gp_T2_2_TI_GenericParamFull = { { &t683_IGC, 2}, {NULL, "T2", 0, 0, NULL} };
static Il2CppGenericParamFull* t683_IGPA[3] = 
{
	&t683_gp_T0_0_TI_GenericParamFull,
	&t683_gp_T1_1_TI_GenericParamFull,
	&t683_gp_T2_2_TI_GenericParamFull,
};
extern TypeInfo t683_TI;
Il2CppGenericContainer t683_IGC = { { NULL, NULL }, NULL, &t683_TI, 3, 0, t683_IGPA };
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t683_m3555_ParameterInfos[] = 
{
	{"object", 0, 134219208, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134219209, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t683_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3555_MI = 
{
	".ctor", NULL, &t683_TI, &t123_0_0_0, NULL, t683_m3555_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 1369, NULL, (methodPointerType)NULL};
extern Il2CppType t683_gp_0_0_0_0;
extern Il2CppType t683_gp_1_0_0_0;
extern Il2CppType t683_gp_2_0_0_0;
static ParameterInfo t683_m3556_ParameterInfos[] = 
{
	{"arg0", 0, 134219210, &EmptyCustomAttributesCache, &t683_gp_0_0_0_0},
	{"arg1", 1, 134219211, &EmptyCustomAttributesCache, &t683_gp_1_0_0_0},
	{"arg2", 2, 134219212, &EmptyCustomAttributesCache, &t683_gp_2_0_0_0},
};
extern TypeInfo t683_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3556_MI = 
{
	"Invoke", NULL, &t683_TI, &t123_0_0_0, NULL, t683_m3556_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 3, false, false, 1370, NULL, (methodPointerType)NULL};
extern Il2CppType t683_gp_0_0_0_0;
extern Il2CppType t683_gp_1_0_0_0;
extern Il2CppType t683_gp_2_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t683_m3557_ParameterInfos[] = 
{
	{"arg0", 0, 134219213, &EmptyCustomAttributesCache, &t683_gp_0_0_0_0},
	{"arg1", 1, 134219214, &EmptyCustomAttributesCache, &t683_gp_1_0_0_0},
	{"arg2", 2, 134219215, &EmptyCustomAttributesCache, &t683_gp_2_0_0_0},
	{"callback", 3, 134219216, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 4, 134219217, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t683_TI;
extern Il2CppType t218_0_0_0;
MethodInfo m3557_MI = 
{
	"BeginInvoke", NULL, &t683_TI, &t218_0_0_0, NULL, t683_m3557_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 5, false, false, 1371, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t683_m3558_ParameterInfos[] = 
{
	{"result", 0, 134219218, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t683_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3558_MI = 
{
	"EndInvoke", NULL, &t683_TI, &t123_0_0_0, NULL, t683_m3558_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 1372, NULL, (methodPointerType)NULL};
static MethodInfo* t683_MIs[] =
{
	&m3555_MI,
	&m3556_MI,
	&m3557_MI,
	&m3558_MI,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t683_0_0_0;
extern Il2CppType t683_1_0_0;
struct t683;
extern TypeInfo t683_TI;
TypeInfo t683_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`3", "UnityEngine.Events", t683_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t683_TI, NULL, NULL, NULL, NULL, &t683_0_0_0, &t683_1_0_0, NULL, NULL, &t683_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#include "t684.h"
extern Il2CppGenericContainer t684_IGC;
extern TypeInfo t684_gp_T0_0_TI;
Il2CppGenericParamFull t684_gp_T0_0_TI_GenericParamFull = { { &t684_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo t684_gp_T1_1_TI;
Il2CppGenericParamFull t684_gp_T1_1_TI_GenericParamFull = { { &t684_IGC, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo t684_gp_T2_2_TI;
Il2CppGenericParamFull t684_gp_T2_2_TI_GenericParamFull = { { &t684_IGC, 2}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo t684_gp_T3_3_TI;
Il2CppGenericParamFull t684_gp_T3_3_TI_GenericParamFull = { { &t684_IGC, 3}, {NULL, "T3", 0, 0, NULL} };
static Il2CppGenericParamFull* t684_IGPA[4] = 
{
	&t684_gp_T0_0_TI_GenericParamFull,
	&t684_gp_T1_1_TI_GenericParamFull,
	&t684_gp_T2_2_TI_GenericParamFull,
	&t684_gp_T3_3_TI_GenericParamFull,
};
extern TypeInfo t684_TI;
Il2CppGenericContainer t684_IGC = { { NULL, NULL }, NULL, &t684_TI, 4, 0, t684_IGPA };
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t684_m3559_ParameterInfos[] = 
{
	{"object", 0, 134219219, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134219220, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t684_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3559_MI = 
{
	".ctor", NULL, &t684_TI, &t123_0_0_0, NULL, t684_m3559_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 1373, NULL, (methodPointerType)NULL};
extern Il2CppType t684_gp_0_0_0_0;
extern Il2CppType t684_gp_1_0_0_0;
extern Il2CppType t684_gp_2_0_0_0;
extern Il2CppType t684_gp_3_0_0_0;
static ParameterInfo t684_m3560_ParameterInfos[] = 
{
	{"arg0", 0, 134219221, &EmptyCustomAttributesCache, &t684_gp_0_0_0_0},
	{"arg1", 1, 134219222, &EmptyCustomAttributesCache, &t684_gp_1_0_0_0},
	{"arg2", 2, 134219223, &EmptyCustomAttributesCache, &t684_gp_2_0_0_0},
	{"arg3", 3, 134219224, &EmptyCustomAttributesCache, &t684_gp_3_0_0_0},
};
extern TypeInfo t684_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3560_MI = 
{
	"Invoke", NULL, &t684_TI, &t123_0_0_0, NULL, t684_m3560_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 4, false, false, 1374, NULL, (methodPointerType)NULL};
extern Il2CppType t684_gp_0_0_0_0;
extern Il2CppType t684_gp_1_0_0_0;
extern Il2CppType t684_gp_2_0_0_0;
extern Il2CppType t684_gp_3_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t684_m3561_ParameterInfos[] = 
{
	{"arg0", 0, 134219225, &EmptyCustomAttributesCache, &t684_gp_0_0_0_0},
	{"arg1", 1, 134219226, &EmptyCustomAttributesCache, &t684_gp_1_0_0_0},
	{"arg2", 2, 134219227, &EmptyCustomAttributesCache, &t684_gp_2_0_0_0},
	{"arg3", 3, 134219228, &EmptyCustomAttributesCache, &t684_gp_3_0_0_0},
	{"callback", 4, 134219229, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 5, 134219230, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t684_TI;
extern Il2CppType t218_0_0_0;
MethodInfo m3561_MI = 
{
	"BeginInvoke", NULL, &t684_TI, &t218_0_0_0, NULL, t684_m3561_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 6, false, false, 1375, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t684_m3562_ParameterInfos[] = 
{
	{"result", 0, 134219231, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t684_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3562_MI = 
{
	"EndInvoke", NULL, &t684_TI, &t123_0_0_0, NULL, t684_m3562_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 1376, NULL, (methodPointerType)NULL};
static MethodInfo* t684_MIs[] =
{
	&m3559_MI,
	&m3560_MI,
	&m3561_MI,
	&m3562_MI,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t684_0_0_0;
extern Il2CppType t684_1_0_0;
struct t684;
extern TypeInfo t684_TI;
TypeInfo t684_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`4", "UnityEngine.Events", t684_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t684_TI, NULL, NULL, NULL, NULL, &t684_0_0_0, &t684_1_0_0, NULL, NULL, &t684_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
