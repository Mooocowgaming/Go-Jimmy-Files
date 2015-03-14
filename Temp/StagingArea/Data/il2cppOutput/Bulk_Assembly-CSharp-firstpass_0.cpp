#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t0.h"
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
extern TypeInfo t0_TI;
#include "t0MD.h"


#include "t122.h"

// Metadata Definition <Module>
static MethodInfo* t0_MIs[] =
{
	NULL
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t0_0_0_0;
extern Il2CppType t0_1_0_0;
struct t0;
extern TypeInfo t0_TI;
TypeInfo t0_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "<Module>", "", t0_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t0_TI, NULL, NULL, &EmptyCustomAttributesCache, &t0_TI, &t0_0_0_0, &t0_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t0), 0, -1, 0, 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1_TI;
#include "t1MD.h"

#include "t123.h"
#include "t124.h"
#include "t4.h"
#include "t2.h"
#include "t125.h"
extern TypeInfo t1_TI;
extern TypeInfo t4_TI;
extern TypeInfo t126_TI;
#include "t3MD.h"
#include "t2MD.h"
#include "t127MD.h"
#include "t4MD.h"
#include "t126MD.h"
#include "t128MD.h"
extern MethodInfo m334_MI;
extern MethodInfo m335_MI;
extern MethodInfo m336_MI;
extern MethodInfo m337_MI;
extern MethodInfo m338_MI;
extern MethodInfo m339_MI;
extern MethodInfo m340_MI;
extern MethodInfo m341_MI;
extern MethodInfo m342_MI;
extern MethodInfo m343_MI;
extern MethodInfo m344_MI;
extern MethodInfo m345_MI;
extern MethodInfo m346_MI;
extern MethodInfo m347_MI;
extern MethodInfo m348_MI;
extern MethodInfo m349_MI;
extern MethodInfo m350_MI;


extern MethodInfo m0_MI;
 void m0 (t1 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m0_MI);
	{
		__this->f3 = (1.0f);
		__this->f4 = (3.0f);
		__this->f5 = (0.5f);
		__this->f6 = (0.1f);
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m1_MI;
 void m1 (t1 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m1_MI);
	t4  V_0 = {0};
	{
		t2 * L_0 = (__this->f2);
		NullCheck(L_0);
		t4  L_1 = m335(L_0, &m335_MI);
		__this->f8 = L_1;
		t2 * L_2 = m336(__this, &m336_MI);
		NullCheck(L_2);
		t4  L_3 = m335(L_2, &m335_MI);
		t2 * L_4 = (__this->f2);
		NullCheck(L_4);
		t4  L_5 = m335(L_4, &m335_MI);
		t4  L_6 = m337(NULL, L_3, L_5, &m337_MI);
		V_0 = L_6;
		NullCheck((&V_0));
		float L_7 = ((&V_0)->f3);
		__this->f7 = L_7;
		t2 * L_8 = m336(__this, &m336_MI);
		NullCheck(L_8);
		m338(L_8, (t2 *)NULL, &m338_MI);
		return;
	}
}
extern MethodInfo m2_MI;
 void m2 (t1 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2_MI);
	float V_0 = 0.0f;
	bool V_1 = false;
	t4  V_2 = {0};
	t4  V_3 = {0};
	t4  V_4 = {0};
	{
		t2 * L_0 = (__this->f2);
		NullCheck(L_0);
		t4  L_1 = m335(L_0, &m335_MI);
		t4  L_2 = (__this->f8);
		t4  L_3 = m337(NULL, L_1, L_2, &m337_MI);
		V_4 = L_3;
		NullCheck((&V_4));
		float L_4 = ((&V_4)->f1);
		V_0 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_5 = fabsf(V_0);
		float L_6 = (__this->f6);
		V_1 = ((((float)L_5) > ((float)L_6))? 1 : 0);
		if (!V_1)
		{
			goto IL_005b;
		}
	}
	{
		float L_7 = (__this->f4);
		t4  L_8 = m340(NULL, &m340_MI);
		t4  L_9 = m341(NULL, L_7, L_8, &m341_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_10 = m342(NULL, V_0, &m342_MI);
		t4  L_11 = m343(NULL, L_9, L_10, &m343_MI);
		__this->f10 = L_11;
		goto IL_007d;
	}

IL_005b:
	{
		t4  L_12 = (__this->f10);
		t4  L_13 = m344(NULL, &m344_MI);
		float L_14 = m345(NULL, &m345_MI);
		float L_15 = (__this->f5);
		t4  L_16 = m346(NULL, L_12, L_13, ((float)(L_14*L_15)), &m346_MI);
		__this->f10 = L_16;
	}

IL_007d:
	{
		t2 * L_17 = (__this->f2);
		NullCheck(L_17);
		t4  L_18 = m335(L_17, &m335_MI);
		t4  L_19 = (__this->f10);
		t4  L_20 = m347(NULL, L_18, L_19, &m347_MI);
		t4  L_21 = m348(NULL, &m348_MI);
		float L_22 = (__this->f7);
		t4  L_23 = m343(NULL, L_21, L_22, &m343_MI);
		t4  L_24 = m347(NULL, L_20, L_23, &m347_MI);
		V_2 = L_24;
		t2 * L_25 = m336(__this, &m336_MI);
		NullCheck(L_25);
		t4  L_26 = m335(L_25, &m335_MI);
		t4 * L_27 = &(__this->f9);
		float L_28 = (__this->f3);
		t4  L_29 = m349(NULL, L_26, V_2, L_27, L_28, &m349_MI);
		V_3 = L_29;
		t2 * L_30 = m336(__this, &m336_MI);
		NullCheck(L_30);
		m350(L_30, V_3, &m350_MI);
		t2 * L_31 = (__this->f2);
		NullCheck(L_31);
		t4  L_32 = m335(L_31, &m335_MI);
		__this->f8 = L_32;
		return;
	}
}
// Metadata Definition UnityStandardAssets._2D.Camera2DFollow
extern Il2CppType t2_0_0_6;
FieldInfo t1_f2_FieldInfo = 
{
	"target", &t2_0_0_6, &t1_TI, offsetof(t1, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t1_f3_FieldInfo = 
{
	"damping", &t124_0_0_6, &t1_TI, offsetof(t1, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t1_f4_FieldInfo = 
{
	"lookAheadFactor", &t124_0_0_6, &t1_TI, offsetof(t1, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t1_f5_FieldInfo = 
{
	"lookAheadReturnSpeed", &t124_0_0_6, &t1_TI, offsetof(t1, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t1_f6_FieldInfo = 
{
	"lookAheadMoveThreshold", &t124_0_0_6, &t1_TI, offsetof(t1, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1_f7_FieldInfo = 
{
	"m_OffsetZ", &t124_0_0_1, &t1_TI, offsetof(t1, f7), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t1_f8_FieldInfo = 
{
	"m_LastTargetPosition", &t4_0_0_1, &t1_TI, offsetof(t1, f8), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t1_f9_FieldInfo = 
{
	"m_CurrentVelocity", &t4_0_0_1, &t1_TI, offsetof(t1, f9), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t1_f10_FieldInfo = 
{
	"m_LookAheadPos", &t4_0_0_1, &t1_TI, offsetof(t1, f10), &EmptyCustomAttributesCache};
static FieldInfo* t1_FIs[] =
{
	&t1_f2_FieldInfo,
	&t1_f3_FieldInfo,
	&t1_f4_FieldInfo,
	&t1_f5_FieldInfo,
	&t1_f6_FieldInfo,
	&t1_f7_FieldInfo,
	&t1_f8_FieldInfo,
	&t1_f9_FieldInfo,
	&t1_f10_FieldInfo,
	NULL
};
extern TypeInfo t1_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m0_MI = 
{
	".ctor", (methodPointerType)&m0, &t1_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1, NULL, (methodPointerType)NULL};
extern TypeInfo t1_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m1_MI = 
{
	"Start", (methodPointerType)&m1, &t1_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2, NULL, (methodPointerType)NULL};
extern TypeInfo t1_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2_MI = 
{
	"Update", (methodPointerType)&m2, &t1_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3, NULL, (methodPointerType)NULL};
static MethodInfo* t1_MIs[] =
{
	&m0_MI,
	&m1_MI,
	&m2_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t1_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t1_0_0_0;
extern Il2CppType t1_1_0_0;
extern TypeInfo t3_TI;
struct t1;
extern TypeInfo t1_TI;
TypeInfo t1_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "Camera2DFollow", "UnityStandardAssets._2D", t1_MIs, NULL, t1_FIs, NULL, &t3_TI, NULL, NULL, &t1_TI, NULL, t1_VT, &EmptyCustomAttributesCache, &t1_TI, &t1_0_0_0, &t1_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 9, 0, 0, 4, 0, 0};
#include "t5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5_TI;
#include "t5MD.h"

#include "t27.h"
#include "t62.h"
#include "t6.h"
extern TypeInfo t5_TI;
extern TypeInfo t4_TI;
extern TypeInfo t126_TI;
extern TypeInfo t6_TI;
#include "t62MD.h"
extern MethodInfo m334_MI;
extern MethodInfo m355_MI;
extern MethodInfo m356_MI;
extern MethodInfo m336_MI;
extern MethodInfo m335_MI;
extern MethodInfo m339_MI;
extern MethodInfo m8_MI;
extern MethodInfo m5_MI;
extern MethodInfo m345_MI;
extern MethodInfo m357_MI;
extern MethodInfo m6_MI;
extern MethodInfo m358_MI;
extern MethodInfo m359_MI;
extern MethodInfo m350_MI;


extern MethodInfo m3_MI;
 void m3 (t5 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3_MI);
	{
		__this->f2 = (1.0f);
		__this->f3 = (1.0f);
		__this->f4 = (8.0f);
		__this->f5 = (8.0f);
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m4_MI;
 void m4 (t5 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m4_MI);
	{
		t62 * L_0 = m355(NULL, (t27*) &_stringLiteral1, &m355_MI);
		NullCheck(L_0);
		t2 * L_1 = m356(L_0, &m356_MI);
		__this->f8 = L_1;
		return;
	}
}
extern MethodInfo m5_MI;
 bool m5 (t5 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5_MI);
	t4  V_0 = {0};
	t4  V_1 = {0};
	{
		t2 * L_0 = m336(__this, &m336_MI);
		NullCheck(L_0);
		t4  L_1 = m335(L_0, &m335_MI);
		V_0 = L_1;
		NullCheck((&V_0));
		float L_2 = ((&V_0)->f1);
		t2 * L_3 = (__this->f8);
		NullCheck(L_3);
		t4  L_4 = m335(L_3, &m335_MI);
		V_1 = L_4;
		NullCheck((&V_1));
		float L_5 = ((&V_1)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_6 = fabsf(((float)(L_2-L_5)));
		float L_7 = (__this->f2);
		return ((((float)L_6) > ((float)L_7))? 1 : 0);
	}
}
extern MethodInfo m6_MI;
 bool m6 (t5 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6_MI);
	t4  V_0 = {0};
	t4  V_1 = {0};
	{
		t2 * L_0 = m336(__this, &m336_MI);
		NullCheck(L_0);
		t4  L_1 = m335(L_0, &m335_MI);
		V_0 = L_1;
		NullCheck((&V_0));
		float L_2 = ((&V_0)->f2);
		t2 * L_3 = (__this->f8);
		NullCheck(L_3);
		t4  L_4 = m335(L_3, &m335_MI);
		V_1 = L_4;
		NullCheck((&V_1));
		float L_5 = ((&V_1)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_6 = fabsf(((float)(L_2-L_5)));
		float L_7 = (__this->f3);
		return ((((float)L_6) > ((float)L_7))? 1 : 0);
	}
}
extern MethodInfo m7_MI;
 void m7 (t5 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m7_MI);
	{
		m8(__this, &m8_MI);
		return;
	}
}
extern MethodInfo m8_MI;
 void m8 (t5 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m8_MI);
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	t4  V_2 = {0};
	t4  V_3 = {0};
	t4  V_4 = {0};
	t4  V_5 = {0};
	t4  V_6 = {0};
	t4  V_7 = {0};
	t4  V_8 = {0};
	{
		t2 * L_0 = m336(__this, &m336_MI);
		NullCheck(L_0);
		t4  L_1 = m335(L_0, &m335_MI);
		V_2 = L_1;
		NullCheck((&V_2));
		float L_2 = ((&V_2)->f1);
		V_0 = L_2;
		t2 * L_3 = m336(__this, &m336_MI);
		NullCheck(L_3);
		t4  L_4 = m335(L_3, &m335_MI);
		V_3 = L_4;
		NullCheck((&V_3));
		float L_5 = ((&V_3)->f2);
		V_1 = L_5;
		bool L_6 = m5(__this, &m5_MI);
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		t2 * L_7 = m336(__this, &m336_MI);
		NullCheck(L_7);
		t4  L_8 = m335(L_7, &m335_MI);
		V_4 = L_8;
		NullCheck((&V_4));
		float L_9 = ((&V_4)->f1);
		t2 * L_10 = (__this->f8);
		NullCheck(L_10);
		t4  L_11 = m335(L_10, &m335_MI);
		V_5 = L_11;
		NullCheck((&V_5));
		float L_12 = ((&V_5)->f1);
		float L_13 = (__this->f4);
		float L_14 = m345(NULL, &m345_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_15 = m357(NULL, L_9, L_12, ((float)(L_13*L_14)), &m357_MI);
		V_0 = L_15;
	}

IL_006d:
	{
		bool L_16 = m6(__this, &m6_MI);
		if (!L_16)
		{
			goto IL_00b2;
		}
	}
	{
		t2 * L_17 = m336(__this, &m336_MI);
		NullCheck(L_17);
		t4  L_18 = m335(L_17, &m335_MI);
		V_6 = L_18;
		NullCheck((&V_6));
		float L_19 = ((&V_6)->f2);
		t2 * L_20 = (__this->f8);
		NullCheck(L_20);
		t4  L_21 = m335(L_20, &m335_MI);
		V_7 = L_21;
		NullCheck((&V_7));
		float L_22 = ((&V_7)->f2);
		float L_23 = (__this->f5);
		float L_24 = m345(NULL, &m345_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_25 = m357(NULL, L_19, L_22, ((float)(L_23*L_24)), &m357_MI);
		V_1 = L_25;
	}

IL_00b2:
	{
		t6 * L_26 = &(__this->f7);
		NullCheck(L_26);
		float L_27 = (L_26->f1);
		t6 * L_28 = &(__this->f6);
		NullCheck(L_28);
		float L_29 = (L_28->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_30 = m358(NULL, V_0, L_27, L_29, &m358_MI);
		V_0 = L_30;
		t6 * L_31 = &(__this->f7);
		NullCheck(L_31);
		float L_32 = (L_31->f2);
		t6 * L_33 = &(__this->f6);
		NullCheck(L_33);
		float L_34 = (L_33->f2);
		float L_35 = m358(NULL, V_1, L_32, L_34, &m358_MI);
		V_1 = L_35;
		t2 * L_36 = m336(__this, &m336_MI);
		t2 * L_37 = m336(__this, &m336_MI);
		NullCheck(L_37);
		t4  L_38 = m335(L_37, &m335_MI);
		V_8 = L_38;
		NullCheck((&V_8));
		float L_39 = ((&V_8)->f3);
		t4  L_40 = {0};
		m359(&L_40, V_0, V_1, L_39, &m359_MI);
		NullCheck(L_36);
		m350(L_36, L_40, &m350_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets._2D.CameraFollow
extern Il2CppType t124_0_0_6;
FieldInfo t5_f2_FieldInfo = 
{
	"xMargin", &t124_0_0_6, &t5_TI, offsetof(t5, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t5_f3_FieldInfo = 
{
	"yMargin", &t124_0_0_6, &t5_TI, offsetof(t5, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t5_f4_FieldInfo = 
{
	"xSmooth", &t124_0_0_6, &t5_TI, offsetof(t5, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t5_f5_FieldInfo = 
{
	"ySmooth", &t124_0_0_6, &t5_TI, offsetof(t5, f5), &EmptyCustomAttributesCache};
extern Il2CppType t6_0_0_6;
FieldInfo t5_f6_FieldInfo = 
{
	"maxXAndY", &t6_0_0_6, &t5_TI, offsetof(t5, f6), &EmptyCustomAttributesCache};
extern Il2CppType t6_0_0_6;
FieldInfo t5_f7_FieldInfo = 
{
	"minXAndY", &t6_0_0_6, &t5_TI, offsetof(t5, f7), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t5_f8_FieldInfo = 
{
	"m_Player", &t2_0_0_1, &t5_TI, offsetof(t5, f8), &EmptyCustomAttributesCache};
static FieldInfo* t5_FIs[] =
{
	&t5_f2_FieldInfo,
	&t5_f3_FieldInfo,
	&t5_f4_FieldInfo,
	&t5_f5_FieldInfo,
	&t5_f6_FieldInfo,
	&t5_f7_FieldInfo,
	&t5_f8_FieldInfo,
	NULL
};
extern TypeInfo t5_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3_MI = 
{
	".ctor", (methodPointerType)&m3, &t5_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4, NULL, (methodPointerType)NULL};
extern TypeInfo t5_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m4_MI = 
{
	"Awake", (methodPointerType)&m4, &t5_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 5, NULL, (methodPointerType)NULL};
extern TypeInfo t5_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5_MI = 
{
	"CheckXMargin", (methodPointerType)&m5, &t5_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 6, NULL, (methodPointerType)NULL};
extern TypeInfo t5_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6_MI = 
{
	"CheckYMargin", (methodPointerType)&m6, &t5_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 7, NULL, (methodPointerType)NULL};
extern TypeInfo t5_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m7_MI = 
{
	"Update", (methodPointerType)&m7, &t5_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 8, NULL, (methodPointerType)NULL};
extern TypeInfo t5_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8_MI = 
{
	"TrackPlayer", (methodPointerType)&m8, &t5_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 9, NULL, (methodPointerType)NULL};
static MethodInfo* t5_MIs[] =
{
	&m3_MI,
	&m4_MI,
	&m5_MI,
	&m6_MI,
	&m7_MI,
	&m8_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t5_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_1_0_0;
extern TypeInfo t3_TI;
struct t5;
extern TypeInfo t5_TI;
TypeInfo t5_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "CameraFollow", "UnityStandardAssets._2D", t5_MIs, NULL, t5_FIs, NULL, &t3_TI, NULL, NULL, &t5_TI, NULL, t5_VT, &EmptyCustomAttributesCache, &t5_TI, &t5_0_0_0, &t5_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t5), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 0, 7, 0, 0, 4, 0, 0};
#include "t7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7_TI;
#include "t7MD.h"

#include "t8.h"
#include "t129.h"
extern TypeInfo t7_TI;
extern TypeInfo t39_TI;
extern TypeInfo t130_TI;
#include "t39MD.h"
#include "t130MD.h"
#include "t8MD.h"
extern MethodInfo m334_MI;
extern MethodInfo m360_MI;
extern MethodInfo m104_MI;
extern MethodInfo m361_MI;
extern MethodInfo m100_MI;
extern MethodInfo m16_MI;
struct t127;
#include "t127.h"
#include "t131.h"
#include "t132.h"
struct t127;
#include "t25.h"
 t25 * m362_gshared (t127 * __this, MethodInfo* method);
#define m362(__this, method) (t25 *)m362_gshared((t127 *)__this, method)
#define m360(__this, method) (t8 *)m362_gshared((t127 *)__this, method)
extern MethodInfo m360_MI;


extern MethodInfo m9_MI;
 void m9 (t7 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m9_MI);
	{
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m10_MI;
 void m10 (t7 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m10_MI);
	{
		t8 * L_0 = m360(__this, &m360_MI);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m11_MI;
 void m11 (t7 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m11_MI);
	{
		bool L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		bool L_1 = m104(NULL, (t27*) &_stringLiteral2, &m104_MI);
		__this->f3 = L_1;
	}

IL_001b:
	{
		return;
	}
}
extern MethodInfo m12_MI;
 void m12 (t7 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12_MI);
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		bool L_0 = m361(NULL, ((int32_t)306), &m361_MI);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		float L_1 = m100(NULL, (t27*) &_stringLiteral3, &m100_MI);
		V_1 = L_1;
		t8 * L_2 = (__this->f2);
		bool L_3 = (__this->f3);
		NullCheck(L_2);
		m16(L_2, V_1, V_0, L_3, &m16_MI);
		__this->f3 = 0;
		return;
	}
}
// Metadata Definition UnityStandardAssets._2D.Platformer2DUserControl
extern Il2CppType t8_0_0_1;
FieldInfo t7_f2_FieldInfo = 
{
	"m_Character", &t8_0_0_1, &t7_TI, offsetof(t7, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t7_f3_FieldInfo = 
{
	"m_Jump", &t125_0_0_1, &t7_TI, offsetof(t7, f3), &EmptyCustomAttributesCache};
static FieldInfo* t7_FIs[] =
{
	&t7_f2_FieldInfo,
	&t7_f3_FieldInfo,
	NULL
};
extern TypeInfo t7_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m9_MI = 
{
	".ctor", (methodPointerType)&m9, &t7_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 10, NULL, (methodPointerType)NULL};
extern TypeInfo t7_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m10_MI = 
{
	"Awake", (methodPointerType)&m10, &t7_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 11, NULL, (methodPointerType)NULL};
extern TypeInfo t7_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m11_MI = 
{
	"Update", (methodPointerType)&m11, &t7_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 12, NULL, (methodPointerType)NULL};
extern TypeInfo t7_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12_MI = 
{
	"FixedUpdate", (methodPointerType)&m12, &t7_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 13, NULL, (methodPointerType)NULL};
static MethodInfo* t7_MIs[] =
{
	&m9_MI,
	&m10_MI,
	&m11_MI,
	&m12_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t7_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t133_TI;
#include "t133.h"
#include "t133MD.h"
extern MethodInfo m363_MI;
extern TypeInfo t8_TI;
void t7_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t133 * tmp;
		tmp = (t133 *)il2cpp_codegen_object_new (&t133_TI);
		m363(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t8_TI)), &m363_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t7__CustomAttributeCache = {
1,
NULL,
&t7_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_1_0_0;
extern TypeInfo t3_TI;
struct t7;
extern TypeInfo t7_TI;
extern CustomAttributesCache t7__CustomAttributeCache;
TypeInfo t7_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "Platformer2DUserControl", "UnityStandardAssets._2D", t7_MIs, NULL, t7_FIs, NULL, &t3_TI, NULL, NULL, &t7_TI, NULL, t7_VT, &t7__CustomAttributeCache, &t7_TI, &t7_0_0_0, &t7_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t7), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t8_TI;

#include "t9.h"
#include "t10.h"
#include "UnityEngine_ArrayTypes.h"
#include "t13.h"
#include "t134.h"
#include "t11.h"
#include "t60.h"
extern TypeInfo t8_TI;
extern TypeInfo t135_TI;
extern TypeInfo t6_TI;
extern TypeInfo t126_TI;
extern TypeInfo t4_TI;
#include "t6MD.h"
#include "t11MD.h"
#include "t135MD.h"
#include "t60MD.h"
#include "t9MD.h"
#include "t10MD.h"
extern MethodInfo m334_MI;
extern MethodInfo m336_MI;
extern MethodInfo m364_MI;
extern MethodInfo m365_MI;
extern MethodInfo m366_MI;
extern MethodInfo m335_MI;
extern MethodInfo m367_MI;
extern MethodInfo m368_MI;
extern MethodInfo m369_MI;
extern MethodInfo m370_MI;
extern MethodInfo m371_MI;
extern MethodInfo m372_MI;
extern MethodInfo m373_MI;
extern MethodInfo m374_MI;
extern MethodInfo m375_MI;
extern MethodInfo m376_MI;
extern MethodInfo m377_MI;
extern MethodInfo m339_MI;
extern MethodInfo m378_MI;
extern MethodInfo m379_MI;
extern MethodInfo m17_MI;
extern MethodInfo m380_MI;
extern MethodInfo m381_MI;
extern MethodInfo m382_MI;
struct t127;
#define m365(__this, method) (t9 *)m362_gshared((t127 *)__this, method)
extern MethodInfo m365_MI;
struct t127;
#define m366(__this, method) (t10 *)m362_gshared((t127 *)__this, method)
extern MethodInfo m366_MI;


extern MethodInfo m13_MI;
 void m13 (t8 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13_MI);
	{
		__this->f4 = (10.0f);
		__this->f5 = (400.0f);
		__this->f6 = (0.36f);
		__this->f14 = 1;
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m14_MI;
 void m14 (t8 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m14_MI);
	{
		t2 * L_0 = m336(__this, &m336_MI);
		NullCheck(L_0);
		t2 * L_1 = m364(L_0, (t27*) &_stringLiteral4, &m364_MI);
		__this->f9 = L_1;
		t2 * L_2 = m336(__this, &m336_MI);
		NullCheck(L_2);
		t2 * L_3 = m364(L_2, (t27*) &_stringLiteral5, &m364_MI);
		__this->f11 = L_3;
		t9 * L_4 = m365(__this, &m365_MI);
		__this->f12 = L_4;
		t10 * L_5 = m366(__this, &m366_MI);
		__this->f13 = L_5;
		return;
	}
}
extern MethodInfo m15_MI;
 void m15 (t8 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m15_MI);
	t136* V_0 = {0};
	int32_t V_1 = 0;
	t6  V_2 = {0};
	{
		__this->f10 = 0;
		t2 * L_0 = (__this->f9);
		NullCheck(L_0);
		t4  L_1 = m335(L_0, &m335_MI);
		t6  L_2 = m367(NULL, L_1, &m367_MI);
		t11  L_3 = (__this->f8);
		int32_t L_4 = m368(NULL, L_3, &m368_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t135_TI));
		t136* L_5 = m369(NULL, L_2, (0.2f), L_4, &m369_MI);
		V_0 = L_5;
		V_1 = 0;
		goto IL_0057;
	}

IL_0034:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		NullCheck((*(t13 **)(t13 **)SZArrayLdElema(V_0, V_1)));
		t62 * L_6 = m370((*(t13 **)(t13 **)SZArrayLdElema(V_0, V_1)), &m370_MI);
		t62 * L_7 = m370(__this, &m370_MI);
		bool L_8 = m371(NULL, L_6, L_7, &m371_MI);
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		__this->f10 = 1;
	}

IL_0053:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0057:
	{
		NullCheck(V_0);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t122 *)V_0)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		t9 * L_9 = (__this->f12);
		bool L_10 = (__this->f10);
		NullCheck(L_9);
		m372(L_9, (t27*) &_stringLiteral6, L_10, &m372_MI);
		t9 * L_11 = (__this->f12);
		t10 * L_12 = (__this->f13);
		NullCheck(L_12);
		t6  L_13 = m373(L_12, &m373_MI);
		V_2 = L_13;
		NullCheck((&V_2));
		float L_14 = ((&V_2)->f2);
		NullCheck(L_11);
		m374(L_11, (t27*) &_stringLiteral7, L_14, &m374_MI);
		return;
	}
}
extern MethodInfo m16_MI;
 void m16 (t8 * __this, float p0, bool p1, bool p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m16_MI);
	t6  V_0 = {0};
	float G_B9_0 = 0.0f;
	{
		if (p1)
		{
			goto IL_004d;
		}
	}
	{
		t9 * L_0 = (__this->f12);
		NullCheck(L_0);
		bool L_1 = m375(L_0, (t27*) &_stringLiteral8, &m375_MI);
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		t2 * L_2 = (__this->f11);
		NullCheck(L_2);
		t4  L_3 = m335(L_2, &m335_MI);
		t6  L_4 = m367(NULL, L_3, &m367_MI);
		t11  L_5 = (__this->f8);
		int32_t L_6 = m368(NULL, L_5, &m368_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t135_TI));
		t13 * L_7 = m376(NULL, L_4, (0.01f), L_6, &m376_MI);
		bool L_8 = m377(NULL, L_7, &m377_MI);
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		p1 = 1;
	}

IL_004d:
	{
		t9 * L_9 = (__this->f12);
		NullCheck(L_9);
		m372(L_9, (t27*) &_stringLiteral8, p1, &m372_MI);
		bool L_10 = (__this->f10);
		if (L_10)
		{
			goto IL_0074;
		}
	}
	{
		bool L_11 = (__this->f7);
		if (!L_11)
		{
			goto IL_0108;
		}
	}

IL_0074:
	{
		if (!p1)
		{
			goto IL_0087;
		}
	}
	{
		float L_12 = (__this->f6);
		G_B9_0 = ((float)(p0*L_12));
		goto IL_0088;
	}

IL_0087:
	{
		G_B9_0 = p0;
	}

IL_0088:
	{
		p0 = G_B9_0;
		t9 * L_13 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_14 = fabsf(p0);
		NullCheck(L_13);
		m374(L_13, (t27*) &_stringLiteral9, L_14, &m374_MI);
		t10 * L_15 = (__this->f13);
		float L_16 = (__this->f4);
		t10 * L_17 = (__this->f13);
		NullCheck(L_17);
		t6  L_18 = m373(L_17, &m373_MI);
		V_0 = L_18;
		NullCheck((&V_0));
		float L_19 = ((&V_0)->f2);
		t6  L_20 = {0};
		m378(&L_20, ((float)(p0*L_16)), L_19, &m378_MI);
		NullCheck(L_15);
		m379(L_15, L_20, &m379_MI);
		if ((((float)p0) <= ((float)(0.0f))))
		{
			goto IL_00ec;
		}
	}
	{
		bool L_21 = (__this->f14);
		if (L_21)
		{
			goto IL_00ec;
		}
	}
	{
		m17(__this, &m17_MI);
		goto IL_0108;
	}

IL_00ec:
	{
		if ((((float)p0) >= ((float)(0.0f))))
		{
			goto IL_0108;
		}
	}
	{
		bool L_22 = (__this->f14);
		if (!L_22)
		{
			goto IL_0108;
		}
	}
	{
		m17(__this, &m17_MI);
	}

IL_0108:
	{
		bool L_23 = (__this->f10);
		if (!L_23)
		{
			goto IL_0161;
		}
	}
	{
		if (!p2)
		{
			goto IL_0161;
		}
	}
	{
		t9 * L_24 = (__this->f12);
		NullCheck(L_24);
		bool L_25 = m375(L_24, (t27*) &_stringLiteral6, &m375_MI);
		if (!L_25)
		{
			goto IL_0161;
		}
	}
	{
		__this->f10 = 0;
		t9 * L_26 = (__this->f12);
		NullCheck(L_26);
		m372(L_26, (t27*) &_stringLiteral6, 0, &m372_MI);
		t10 * L_27 = (__this->f13);
		float L_28 = (__this->f5);
		t6  L_29 = {0};
		m378(&L_29, (0.0f), L_28, &m378_MI);
		NullCheck(L_27);
		m380(L_27, L_29, &m380_MI);
	}

IL_0161:
	{
		return;
	}
}
extern MethodInfo m17_MI;
 void m17 (t8 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17_MI);
	t4  V_0 = {0};
	{
		bool L_0 = (__this->f14);
		__this->f14 = ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		t2 * L_1 = m336(__this, &m336_MI);
		NullCheck(L_1);
		t4  L_2 = m381(L_1, &m381_MI);
		V_0 = L_2;
		t4 * L_3 = (&V_0);
		NullCheck(L_3);
		float L_4 = (L_3->f1);
		NullCheck(L_3);
		L_3->f1 = ((float)(L_4*(-1.0f)));
		t2 * L_5 = m336(__this, &m336_MI);
		NullCheck(L_5);
		m382(L_5, V_0, &m382_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets._2D.PlatformerCharacter2D
extern Il2CppType t124_0_0_32849;
FieldInfo t8_f2_FieldInfo = 
{
	"k_GroundedRadius", &t124_0_0_32849, &t8_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_32849;
FieldInfo t8_f3_FieldInfo = 
{
	"k_CeilingRadius", &t124_0_0_32849, &t8_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t8__CustomAttributeCache_m_MaxSpeed;
FieldInfo t8_f4_FieldInfo = 
{
	"m_MaxSpeed", &t124_0_0_1, &t8_TI, offsetof(t8, f4), &t8__CustomAttributeCache_m_MaxSpeed};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t8__CustomAttributeCache_m_JumpForce;
FieldInfo t8_f5_FieldInfo = 
{
	"m_JumpForce", &t124_0_0_1, &t8_TI, offsetof(t8, f5), &t8__CustomAttributeCache_m_JumpForce};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t8__CustomAttributeCache_m_CrouchSpeed;
FieldInfo t8_f6_FieldInfo = 
{
	"m_CrouchSpeed", &t124_0_0_1, &t8_TI, offsetof(t8, f6), &t8__CustomAttributeCache_m_CrouchSpeed};
extern Il2CppType t125_0_0_1;
extern CustomAttributesCache t8__CustomAttributeCache_m_AirControl;
FieldInfo t8_f7_FieldInfo = 
{
	"m_AirControl", &t125_0_0_1, &t8_TI, offsetof(t8, f7), &t8__CustomAttributeCache_m_AirControl};
extern Il2CppType t11_0_0_1;
extern CustomAttributesCache t8__CustomAttributeCache_m_WhatIsGround;
FieldInfo t8_f8_FieldInfo = 
{
	"m_WhatIsGround", &t11_0_0_1, &t8_TI, offsetof(t8, f8), &t8__CustomAttributeCache_m_WhatIsGround};
extern Il2CppType t2_0_0_1;
FieldInfo t8_f9_FieldInfo = 
{
	"m_GroundCheck", &t2_0_0_1, &t8_TI, offsetof(t8, f9), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t8_f10_FieldInfo = 
{
	"m_Grounded", &t125_0_0_1, &t8_TI, offsetof(t8, f10), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t8_f11_FieldInfo = 
{
	"m_CeilingCheck", &t2_0_0_1, &t8_TI, offsetof(t8, f11), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t8_f12_FieldInfo = 
{
	"m_Anim", &t9_0_0_1, &t8_TI, offsetof(t8, f12), &EmptyCustomAttributesCache};
extern Il2CppType t10_0_0_1;
FieldInfo t8_f13_FieldInfo = 
{
	"m_Rigidbody2D", &t10_0_0_1, &t8_TI, offsetof(t8, f13), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t8_f14_FieldInfo = 
{
	"m_FacingRight", &t125_0_0_1, &t8_TI, offsetof(t8, f14), &EmptyCustomAttributesCache};
static FieldInfo* t8_FIs[] =
{
	&t8_f2_FieldInfo,
	&t8_f3_FieldInfo,
	&t8_f4_FieldInfo,
	&t8_f5_FieldInfo,
	&t8_f6_FieldInfo,
	&t8_f7_FieldInfo,
	&t8_f8_FieldInfo,
	&t8_f9_FieldInfo,
	&t8_f10_FieldInfo,
	&t8_f11_FieldInfo,
	&t8_f12_FieldInfo,
	&t8_f13_FieldInfo,
	&t8_f14_FieldInfo,
	NULL
};
static const float t8_f2_DefaultValueData = 0.2f;
extern Il2CppType t124_0_0_0;
static Il2CppFieldDefaultValueEntry t8_f2_DefaultValue = 
{
	&t8_f2_FieldInfo, { (char*)&t8_f2_DefaultValueData, &t124_0_0_0 }};
static const float t8_f3_DefaultValueData = 0.01f;
extern Il2CppType t124_0_0_0;
static Il2CppFieldDefaultValueEntry t8_f3_DefaultValue = 
{
	&t8_f3_FieldInfo, { (char*)&t8_f3_DefaultValueData, &t124_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t8_FDVs[] = 
{
	&t8_f2_DefaultValue,
	&t8_f3_DefaultValue,
	NULL
};
extern TypeInfo t8_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13_MI = 
{
	".ctor", (methodPointerType)&m13, &t8_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 14, NULL, (methodPointerType)NULL};
extern TypeInfo t8_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m14_MI = 
{
	"Awake", (methodPointerType)&m14, &t8_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 15, NULL, (methodPointerType)NULL};
extern TypeInfo t8_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m15_MI = 
{
	"FixedUpdate", (methodPointerType)&m15, &t8_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 16, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t8_m16_ParameterInfos[] = 
{
	{"move", 0, 134217729, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"crouch", 1, 134217730, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"jump", 2, 134217731, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t8_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124_t137_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m16_MI = 
{
	"Move", (methodPointerType)&m16, &t8_TI, &t123_0_0_0, RuntimeInvoker_t123_t124_t137_t137, t8_m16_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 17, NULL, (methodPointerType)NULL};
extern TypeInfo t8_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17_MI = 
{
	"Flip", (methodPointerType)&m17, &t8_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 18, NULL, (methodPointerType)NULL};
static MethodInfo* t8_MIs[] =
{
	&m13_MI,
	&m14_MI,
	&m15_MI,
	&m16_MI,
	&m17_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t8_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t138_TI;
#include "t138.h"
#include "t138MD.h"
extern MethodInfo m383_MI;
void t8_CustomAttributesCacheGenerator_m_MaxSpeed(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t8_CustomAttributesCacheGenerator_m_JumpForce(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
extern TypeInfo t139_TI;
#include "t139.h"
#include "t139MD.h"
extern MethodInfo m384_MI;
void t8_CustomAttributesCacheGenerator_m_CrouchSpeed(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t139 * tmp;
		tmp = (t139 *)il2cpp_codegen_object_new (&t139_TI);
		m384(tmp, 0.0f, 1.0f, &m384_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t8_CustomAttributesCacheGenerator_m_AirControl(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t8_CustomAttributesCacheGenerator_m_WhatIsGround(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t8__CustomAttributeCache_m_MaxSpeed = {
1,
NULL,
&t8_CustomAttributesCacheGenerator_m_MaxSpeed
};
CustomAttributesCache t8__CustomAttributeCache_m_JumpForce = {
1,
NULL,
&t8_CustomAttributesCacheGenerator_m_JumpForce
};
CustomAttributesCache t8__CustomAttributeCache_m_CrouchSpeed = {
2,
NULL,
&t8_CustomAttributesCacheGenerator_m_CrouchSpeed
};
CustomAttributesCache t8__CustomAttributeCache_m_AirControl = {
1,
NULL,
&t8_CustomAttributesCacheGenerator_m_AirControl
};
CustomAttributesCache t8__CustomAttributeCache_m_WhatIsGround = {
1,
NULL,
&t8_CustomAttributesCacheGenerator_m_WhatIsGround
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t8_0_0_0;
extern Il2CppType t8_1_0_0;
extern TypeInfo t3_TI;
struct t8;
extern TypeInfo t8_TI;
extern CustomAttributesCache t8__CustomAttributeCache_m_MaxSpeed;
extern CustomAttributesCache t8__CustomAttributeCache_m_JumpForce;
extern CustomAttributesCache t8__CustomAttributeCache_m_CrouchSpeed;
extern CustomAttributesCache t8__CustomAttributeCache_m_AirControl;
extern CustomAttributesCache t8__CustomAttributeCache_m_WhatIsGround;
TypeInfo t8_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "PlatformerCharacter2D", "UnityStandardAssets._2D", t8_MIs, NULL, t8_FIs, NULL, &t3_TI, NULL, NULL, &t8_TI, NULL, t8_VT, &EmptyCustomAttributesCache, &t8_TI, &t8_0_0_0, &t8_1_0_0, NULL, NULL, NULL, t8_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t8), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 5, 0, 13, 0, 0, 4, 0, 0};
#include "t12.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t12_TI;
#include "t12MD.h"

extern TypeInfo t27_TI;
#include "t27MD.h"
#include "t140MD.h"
extern MethodInfo m334_MI;
extern MethodInfo m385_MI;
extern MethodInfo m386_MI;
extern MethodInfo m387_MI;
extern MethodInfo m388_MI;


extern MethodInfo m18_MI;
 void m18 (t12 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18_MI);
	{
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m19_MI;
 void m19 (t12 * __this, t13 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m19_MI);
	{
		NullCheck(p0);
		t27* L_0 = m385(p0, &m385_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_1 = m386(NULL, L_0, (t27*) &_stringLiteral1, &m386_MI);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		t27* L_2 = m387(NULL, &m387_MI);
		m388(NULL, L_2, &m388_MI);
	}

IL_001f:
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets._2D.Restarter
extern TypeInfo t12_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m18_MI = 
{
	".ctor", (methodPointerType)&m18, &t12_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 19, NULL, (methodPointerType)NULL};
extern Il2CppType t13_0_0_0;
static ParameterInfo t12_m19_ParameterInfos[] = 
{
	{"other", 0, 134217732, &EmptyCustomAttributesCache, &t13_0_0_0},
};
extern TypeInfo t12_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m19_MI = 
{
	"OnTriggerEnter2D", (methodPointerType)&m19, &t12_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t12_m19_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 20, NULL, (methodPointerType)NULL};
static MethodInfo* t12_MIs[] =
{
	&m18_MI,
	&m19_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t12_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t12_0_0_0;
extern Il2CppType t12_1_0_0;
extern TypeInfo t3_TI;
struct t12;
extern TypeInfo t12_TI;
TypeInfo t12_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "Restarter", "UnityStandardAssets._2D", t12_MIs, NULL, NULL, NULL, &t3_TI, NULL, NULL, &t12_TI, NULL, t12_VT, &EmptyCustomAttributesCache, &t12_TI, &t12_0_0_0, &t12_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t12), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 4, 0, 0};
#include "t14.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t14_TI;
#include "t14MD.h"



// Metadata Definition UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType
extern Il2CppType t134_0_0_1542;
FieldInfo t14_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t14_TI, offsetof(t14, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t14_0_0_32854;
FieldInfo t14_f2_FieldInfo = 
{
	"FixedUpdate", &t14_0_0_32854, &t14_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t14_0_0_32854;
FieldInfo t14_f3_FieldInfo = 
{
	"LateUpdate", &t14_0_0_32854, &t14_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t14_0_0_32854;
FieldInfo t14_f4_FieldInfo = 
{
	"ManualUpdate", &t14_0_0_32854, &t14_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t14_FIs[] =
{
	&t14_f1_FieldInfo,
	&t14_f2_FieldInfo,
	&t14_f3_FieldInfo,
	&t14_f4_FieldInfo,
	NULL
};
static const int32_t t14_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t14_f2_DefaultValue = 
{
	&t14_f2_FieldInfo, { (char*)&t14_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t14_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t14_f3_DefaultValue = 
{
	&t14_f3_FieldInfo, { (char*)&t14_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t14_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t14_f4_DefaultValue = 
{
	&t14_f4_FieldInfo, { (char*)&t14_f4_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t14_FDVs[] = 
{
	&t14_f2_DefaultValue,
	&t14_f3_DefaultValue,
	&t14_f4_DefaultValue,
	NULL
};
static MethodInfo* t14_MIs[] =
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
static MethodInfo* t14_VT[] =
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
static Il2CppInterfaceOffsetPair t14_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern TypeInfo t16_TI;
TypeInfo t14_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "UpdateType", "", t14_MIs, NULL, t14_FIs, NULL, &t15_TI, NULL, &t16_TI, &t134_TI, NULL, t14_VT, &EmptyCustomAttributesCache, &t134_TI, &t14_0_0_0, &t14_1_0_0, t14_IOs, NULL, NULL, t14_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t14)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 258, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t16.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t16_TI;
#include "t16MD.h"

#include "t17.h"
extern TypeInfo t16_TI;
extern TypeInfo t123_TI;
extern TypeInfo t124_TI;
extern TypeInfo t2_TI;
extern MethodInfo m334_MI;
extern MethodInfo m25_MI;
extern MethodInfo m411_MI;
extern MethodInfo m412_MI;
extern MethodInfo m370_MI;
extern MethodInfo m413_MI;
extern MethodInfo m345_MI;
extern MethodInfo m414_MI;
extern MethodInfo m355_MI;
extern MethodInfo m377_MI;
extern MethodInfo m356_MI;
extern MethodInfo m26_MI;
struct t127;
#define m412(__this, method) (t17 *)m362_gshared((t127 *)__this, method)
extern MethodInfo m412_MI;


extern MethodInfo m20_MI;
 void m20 (t16 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m20_MI);
	{
		__this->f3 = 1;
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m21_MI;
 void m21 (t16 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m21_MI);
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		m25(__this, &m25_MI);
	}

IL_0011:
	{
		t2 * L_1 = (__this->f2);
		bool L_2 = m411(NULL, L_1, (t60 *)NULL, &m411_MI);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		t2 * L_3 = (__this->f2);
		NullCheck(L_3);
		t17 * L_4 = m412(L_3, &m412_MI);
		__this->f5 = L_4;
		return;
	}
}
extern MethodInfo m22_MI;
 void m22 (t16 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m22_MI);
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		t2 * L_1 = (__this->f2);
		bool L_2 = m411(NULL, L_1, (t60 *)NULL, &m411_MI);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		t2 * L_3 = (__this->f2);
		NullCheck(L_3);
		t62 * L_4 = m370(L_3, &m370_MI);
		NullCheck(L_4);
		bool L_5 = m413(L_4, &m413_MI);
		if (L_5)
		{
			goto IL_0037;
		}
	}

IL_0031:
	{
		m25(__this, &m25_MI);
	}

IL_0037:
	{
		int32_t L_6 = (__this->f4);
		if (L_6)
		{
			goto IL_004d;
		}
	}
	{
		float L_7 = m345(NULL, &m345_MI);
		VirtActionInvoker1< float >::Invoke(&m414_MI, __this, L_7);
	}

IL_004d:
	{
		return;
	}
}
extern MethodInfo m23_MI;
 void m23 (t16 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m23_MI);
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		t2 * L_1 = (__this->f2);
		bool L_2 = m411(NULL, L_1, (t60 *)NULL, &m411_MI);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		t2 * L_3 = (__this->f2);
		NullCheck(L_3);
		t62 * L_4 = m370(L_3, &m370_MI);
		NullCheck(L_4);
		bool L_5 = m413(L_4, &m413_MI);
		if (L_5)
		{
			goto IL_0037;
		}
	}

IL_0031:
	{
		m25(__this, &m25_MI);
	}

IL_0037:
	{
		int32_t L_6 = (__this->f4);
		if ((((uint32_t)L_6) != ((uint32_t)1)))
		{
			goto IL_004e;
		}
	}
	{
		float L_7 = m345(NULL, &m345_MI);
		VirtActionInvoker1< float >::Invoke(&m414_MI, __this, L_7);
	}

IL_004e:
	{
		return;
	}
}
extern MethodInfo m24_MI;
 void m24 (t16 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m24_MI);
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		t2 * L_1 = (__this->f2);
		bool L_2 = m411(NULL, L_1, (t60 *)NULL, &m411_MI);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		t2 * L_3 = (__this->f2);
		NullCheck(L_3);
		t62 * L_4 = m370(L_3, &m370_MI);
		NullCheck(L_4);
		bool L_5 = m413(L_4, &m413_MI);
		if (L_5)
		{
			goto IL_0037;
		}
	}

IL_0031:
	{
		m25(__this, &m25_MI);
	}

IL_0037:
	{
		int32_t L_6 = (__this->f4);
		if ((((uint32_t)L_6) != ((uint32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		float L_7 = m345(NULL, &m345_MI);
		VirtActionInvoker1< float >::Invoke(&m414_MI, __this, L_7);
	}

IL_004e:
	{
		return;
	}
}
extern MethodInfo m25_MI;
 void m25 (t16 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m25_MI);
	t62 * V_0 = {0};
	{
		t62 * L_0 = m355(NULL, (t27*) &_stringLiteral1, &m355_MI);
		V_0 = L_0;
		bool L_1 = m377(NULL, V_0, &m377_MI);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		NullCheck(V_0);
		t2 * L_2 = m356(V_0, &m356_MI);
		VirtActionInvoker1< t2 * >::Invoke(&m26_MI, __this, L_2);
	}

IL_0022:
	{
		return;
	}
}
extern MethodInfo m26_MI;
 void m26 (t16 * __this, t2 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m26_MI);
	{
		__this->f2 = p0;
		return;
	}
}
extern MethodInfo m27_MI;
 t2 * m27 (t16 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m27_MI);
	{
		t2 * L_0 = (__this->f2);
		return L_0;
	}
}
// Metadata Definition UnityStandardAssets.Cameras.AbstractTargetFollower
extern Il2CppType t2_0_0_4;
extern CustomAttributesCache t16__CustomAttributeCache_m_Target;
FieldInfo t16_f2_FieldInfo = 
{
	"m_Target", &t2_0_0_4, &t16_TI, offsetof(t16, f2), &t16__CustomAttributeCache_m_Target};
extern Il2CppType t125_0_0_1;
extern CustomAttributesCache t16__CustomAttributeCache_m_AutoTargetPlayer;
FieldInfo t16_f3_FieldInfo = 
{
	"m_AutoTargetPlayer", &t125_0_0_1, &t16_TI, offsetof(t16, f3), &t16__CustomAttributeCache_m_AutoTargetPlayer};
extern Il2CppType t14_0_0_1;
extern CustomAttributesCache t16__CustomAttributeCache_m_UpdateType;
FieldInfo t16_f4_FieldInfo = 
{
	"m_UpdateType", &t14_0_0_1, &t16_TI, offsetof(t16, f4), &t16__CustomAttributeCache_m_UpdateType};
extern Il2CppType t17_0_0_4;
FieldInfo t16_f5_FieldInfo = 
{
	"targetRigidbody", &t17_0_0_4, &t16_TI, offsetof(t16, f5), &EmptyCustomAttributesCache};
static FieldInfo* t16_FIs[] =
{
	&t16_f2_FieldInfo,
	&t16_f3_FieldInfo,
	&t16_f4_FieldInfo,
	&t16_f5_FieldInfo,
	NULL
};
extern MethodInfo m27_MI;
static PropertyInfo t16____Target_PropertyInfo = 
{
	&t16_TI, "Target", &m27_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t16_PIs[] =
{
	&t16____Target_PropertyInfo,
	NULL
};
extern TypeInfo t16_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m20_MI = 
{
	".ctor", (methodPointerType)&m20, &t16_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 21, NULL, (methodPointerType)NULL};
extern TypeInfo t16_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m21_MI = 
{
	"Start", (methodPointerType)&m21, &t16_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 452, 0, 4, 0, false, false, 22, NULL, (methodPointerType)NULL};
extern TypeInfo t16_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m22_MI = 
{
	"FixedUpdate", (methodPointerType)&m22, &t16_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 23, NULL, (methodPointerType)NULL};
extern TypeInfo t16_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m23_MI = 
{
	"LateUpdate", (methodPointerType)&m23, &t16_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 24, NULL, (methodPointerType)NULL};
extern TypeInfo t16_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m24_MI = 
{
	"ManualUpdate", (methodPointerType)&m24, &t16_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 25, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t16_m414_ParameterInfos[] = 
{
	{"deltaTime", 0, 134217733, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t16_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m414_MI = 
{
	"FollowTarget", NULL, &t16_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t16_m414_ParameterInfos, &EmptyCustomAttributesCache, 1476, 0, 5, 1, false, false, 26, NULL, (methodPointerType)NULL};
extern TypeInfo t16_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m25_MI = 
{
	"FindAndTargetPlayer", (methodPointerType)&m25, &t16_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 27, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t16_m26_ParameterInfos[] = 
{
	{"newTransform", 0, 134217734, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t16_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m26_MI = 
{
	"SetTarget", (methodPointerType)&m26, &t16_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t16_m26_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 1, false, false, 28, NULL, (methodPointerType)NULL};
extern TypeInfo t16_TI;
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27_MI = 
{
	"get_Target", (methodPointerType)&m27, &t16_TI, &t2_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 29, NULL, (methodPointerType)NULL};
static MethodInfo* t16_MIs[] =
{
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m23_MI,
	&m24_MI,
	&m414_MI,
	&m25_MI,
	&m26_MI,
	&m27_MI,
	NULL
};
extern TypeInfo t14_TI;
static TypeInfo* t16_TI__nestedTypes[2] =
{
	&t14_TI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
extern MethodInfo m21_MI;
extern MethodInfo m26_MI;
static MethodInfo* t16_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
	&m21_MI,
	NULL,
	&m26_MI,
};
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t16_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t16_CustomAttributesCacheGenerator_m_AutoTargetPlayer(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t16_CustomAttributesCacheGenerator_m_UpdateType(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t16__CustomAttributeCache_m_Target = {
1,
NULL,
&t16_CustomAttributesCacheGenerator_m_Target
};
CustomAttributesCache t16__CustomAttributeCache_m_AutoTargetPlayer = {
1,
NULL,
&t16_CustomAttributesCacheGenerator_m_AutoTargetPlayer
};
CustomAttributesCache t16__CustomAttributeCache_m_UpdateType = {
1,
NULL,
&t16_CustomAttributesCacheGenerator_m_UpdateType
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_1_0_0;
extern TypeInfo t3_TI;
struct t16;
extern TypeInfo t16_TI;
extern CustomAttributesCache t16__CustomAttributeCache_m_Target;
extern CustomAttributesCache t16__CustomAttributeCache_m_AutoTargetPlayer;
extern CustomAttributesCache t16__CustomAttributeCache_m_UpdateType;
TypeInfo t16_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "AbstractTargetFollower", "UnityStandardAssets.Cameras", t16_MIs, t16_PIs, t16_FIs, NULL, &t3_TI, t16_TI__nestedTypes, NULL, &t16_TI, NULL, t16_VT, &EmptyCustomAttributesCache, &t16_TI, &t16_0_0_0, &t16_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t16), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 9, 1, 4, 0, 1, 7, 0, 0};
#include "t18.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t18_TI;
#include "t18MD.h"

#include "t21.h"
extern TypeInfo t18_TI;
extern TypeInfo t16_TI;
extern TypeInfo t126_TI;
extern TypeInfo t4_TI;
#include "t19MD.h"
#include "t17MD.h"
#include "t21MD.h"
extern MethodInfo m415_MI;
extern MethodInfo m41_MI;
extern MethodInfo m411_MI;
extern MethodInfo m416_MI;
extern MethodInfo m417_MI;
extern MethodInfo m418_MI;
extern MethodInfo m419_MI;
extern MethodInfo m420_MI;
extern MethodInfo m421_MI;
extern MethodInfo m422_MI;
extern MethodInfo m423_MI;
extern MethodInfo m424_MI;
extern MethodInfo m339_MI;
extern MethodInfo m425_MI;
extern MethodInfo m336_MI;
extern MethodInfo m335_MI;
extern MethodInfo m426_MI;
extern MethodInfo m350_MI;
extern MethodInfo m427_MI;
extern MethodInfo m428_MI;
extern MethodInfo m429_MI;
extern MethodInfo m430_MI;
extern MethodInfo m431_MI;
extern MethodInfo m432_MI;


extern MethodInfo m28_MI;
 void m28 (t18 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m28_MI);
	{
		__this->f9 = (3.0f);
		__this->f10 = (1.0f);
		__this->f11 = (0.2f);
		__this->f13 = 1;
		__this->f14 = (90.0f);
		__this->f15 = (4.0f);
		__this->f16 = (0.2f);
		t4  L_0 = m415(NULL, &m415_MI);
		__this->f20 = L_0;
		m41(__this, &m41_MI);
		return;
	}
}
extern MethodInfo m29_MI;
 void m29 (t18 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m29_MI);
	t4  V_0 = {0};
	t4  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	t21  V_6 = {0};
	t4  V_7 = {0};
	t4  V_8 = {0};
	float G_B13_0 = 0.0f;
	t18 * G_B24_0 = {0};
	t18 * G_B23_0 = {0};
	t4  G_B25_0 = {0};
	t18 * G_B25_1 = {0};
	{
		if ((((float)p0) <= ((float)(0.0f))))
		{
			goto IL_001c;
		}
	}
	{
		t2 * L_0 = (__this->f2);
		bool L_1 = m411(NULL, L_0, (t60 *)NULL, &m411_MI);
		if (!L_1)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		t2 * L_2 = (__this->f2);
		NullCheck(L_2);
		t4  L_3 = m416(L_2, &m416_MI);
		V_0 = L_3;
		t2 * L_4 = (__this->f2);
		NullCheck(L_4);
		t4  L_5 = m417(L_4, &m417_MI);
		V_1 = L_5;
		bool L_6 = (__this->f12);
		if (!L_6)
		{
			goto IL_00b6;
		}
	}
	{
		bool L_7 = m418(NULL, &m418_MI);
		if (!L_7)
		{
			goto IL_00b6;
		}
	}
	{
		t17 * L_8 = (__this->f5);
		NullCheck(L_8);
		t4  L_9 = m419(L_8, &m419_MI);
		V_7 = L_9;
		float L_10 = m420((&V_7), &m420_MI);
		float L_11 = (__this->f15);
		if ((((float)L_10) <= ((float)L_11)))
		{
			goto IL_0089;
		}
	}
	{
		t17 * L_12 = (__this->f5);
		NullCheck(L_12);
		t4  L_13 = m419(L_12, &m419_MI);
		V_8 = L_13;
		t4  L_14 = m421((&V_8), &m421_MI);
		V_0 = L_14;
		t4  L_15 = m415(NULL, &m415_MI);
		V_1 = L_15;
		goto IL_008f;
	}

IL_0089:
	{
		t4  L_16 = m415(NULL, &m415_MI);
		V_1 = L_16;
	}

IL_008f:
	{
		float L_17 = (__this->f18);
		float* L_18 = &(__this->f19);
		float L_19 = (__this->f16);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_20 = m422(NULL, L_17, (1.0f), L_18, L_19, &m422_MI);
		__this->f18 = L_20;
		goto IL_0175;
	}

IL_00b6:
	{
		NullCheck((&V_0));
		float L_21 = ((&V_0)->f1);
		NullCheck((&V_0));
		float L_22 = ((&V_0)->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_23 = atan2f(L_21, L_22);
		V_2 = ((float)(L_23*(57.29578f)));
		float L_24 = (__this->f14);
		if ((((float)L_24) <= ((float)(0.0f))))
		{
			goto IL_0163;
		}
	}
	{
		float L_25 = (__this->f17);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_26 = m424(NULL, L_25, V_2, &m424_MI);
		float L_27 = fabsf(L_26);
		V_3 = ((float)(L_27/p0));
		float L_28 = (__this->f14);
		float L_29 = (__this->f14);
		float L_30 = m425(NULL, L_28, ((float)(L_29*(0.75f))), V_3, &m425_MI);
		V_4 = L_30;
		float L_31 = (__this->f18);
		if ((((float)L_31) <= ((float)V_4)))
		{
			goto IL_0125;
		}
	}
	{
		G_B13_0 = (0.1f);
		goto IL_012a;
	}

IL_0125:
	{
		G_B13_0 = (1.0f);
	}

IL_012a:
	{
		V_5 = G_B13_0;
		bool L_32 = m418(NULL, &m418_MI);
		if (!L_32)
		{
			goto IL_0156;
		}
	}
	{
		float L_33 = (__this->f18);
		float* L_34 = &(__this->f19);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_35 = m422(NULL, L_33, V_4, L_34, V_5, &m422_MI);
		__this->f18 = L_35;
		goto IL_015e;
	}

IL_0156:
	{
		__this->f18 = V_4;
	}

IL_015e:
	{
		goto IL_016e;
	}

IL_0163:
	{
		__this->f18 = (1.0f);
	}

IL_016e:
	{
		__this->f17 = V_2;
	}

IL_0175:
	{
		t2 * L_36 = m336(__this, &m336_MI);
		t2 * L_37 = m336(__this, &m336_MI);
		NullCheck(L_37);
		t4  L_38 = m335(L_37, &m335_MI);
		t2 * L_39 = (__this->f2);
		NullCheck(L_39);
		t4  L_40 = m335(L_39, &m335_MI);
		float L_41 = (__this->f9);
		t4  L_42 = m426(NULL, L_38, L_40, ((float)(p0*L_41)), &m426_MI);
		NullCheck(L_36);
		m350(L_36, L_42, &m350_MI);
		bool L_43 = (__this->f13);
		if (L_43)
		{
			goto IL_01d7;
		}
	}
	{
		NullCheck((&V_0));
		(&V_0)->f2 = (0.0f);
		float L_44 = m427((&V_0), &m427_MI);
		if ((((float)L_44) >= ((float)(1.401298E-45f))))
		{
			goto IL_01d7;
		}
	}
	{
		t2 * L_45 = m336(__this, &m336_MI);
		NullCheck(L_45);
		t4  L_46 = m416(L_45, &m416_MI);
		V_0 = L_46;
	}

IL_01d7:
	{
		t4  L_47 = (__this->f20);
		t21  L_48 = m428(NULL, V_0, L_47, &m428_MI);
		V_6 = L_48;
		float L_49 = (__this->f11);
		G_B23_0 = __this;
		if ((((float)L_49) <= ((float)(0.0f))))
		{
			G_B24_0 = __this;
			goto IL_020f;
		}
	}
	{
		t4  L_50 = (__this->f20);
		float L_51 = (__this->f11);
		t4  L_52 = m429(NULL, L_50, V_1, ((float)(L_51*p0)), &m429_MI);
		G_B25_0 = L_52;
		G_B25_1 = G_B23_0;
		goto IL_0214;
	}

IL_020f:
	{
		t4  L_53 = m415(NULL, &m415_MI);
		G_B25_0 = L_53;
		G_B25_1 = G_B24_0;
	}

IL_0214:
	{
		NullCheck(G_B25_1);
		G_B25_1->f20 = G_B25_0;
		t2 * L_54 = m336(__this, &m336_MI);
		t2 * L_55 = m336(__this, &m336_MI);
		NullCheck(L_55);
		t21  L_56 = m430(L_55, &m430_MI);
		float L_57 = (__this->f10);
		float L_58 = (__this->f18);
		t21  L_59 = m431(NULL, L_56, V_6, ((float)(((float)(L_57*L_58))*p0)), &m431_MI);
		NullCheck(L_54);
		m432(L_54, L_59, &m432_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Cameras.AutoCam
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t18__CustomAttributeCache_m_MoveSpeed;
FieldInfo t18_f9_FieldInfo = 
{
	"m_MoveSpeed", &t124_0_0_1, &t18_TI, offsetof(t18, f9), &t18__CustomAttributeCache_m_MoveSpeed};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t18__CustomAttributeCache_m_TurnSpeed;
FieldInfo t18_f10_FieldInfo = 
{
	"m_TurnSpeed", &t124_0_0_1, &t18_TI, offsetof(t18, f10), &t18__CustomAttributeCache_m_TurnSpeed};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t18__CustomAttributeCache_m_RollSpeed;
FieldInfo t18_f11_FieldInfo = 
{
	"m_RollSpeed", &t124_0_0_1, &t18_TI, offsetof(t18, f11), &t18__CustomAttributeCache_m_RollSpeed};
extern Il2CppType t125_0_0_1;
extern CustomAttributesCache t18__CustomAttributeCache_m_FollowVelocity;
FieldInfo t18_f12_FieldInfo = 
{
	"m_FollowVelocity", &t125_0_0_1, &t18_TI, offsetof(t18, f12), &t18__CustomAttributeCache_m_FollowVelocity};
extern Il2CppType t125_0_0_1;
extern CustomAttributesCache t18__CustomAttributeCache_m_FollowTilt;
FieldInfo t18_f13_FieldInfo = 
{
	"m_FollowTilt", &t125_0_0_1, &t18_TI, offsetof(t18, f13), &t18__CustomAttributeCache_m_FollowTilt};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t18__CustomAttributeCache_m_SpinTurnLimit;
FieldInfo t18_f14_FieldInfo = 
{
	"m_SpinTurnLimit", &t124_0_0_1, &t18_TI, offsetof(t18, f14), &t18__CustomAttributeCache_m_SpinTurnLimit};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t18__CustomAttributeCache_m_TargetVelocityLowerLimit;
FieldInfo t18_f15_FieldInfo = 
{
	"m_TargetVelocityLowerLimit", &t124_0_0_1, &t18_TI, offsetof(t18, f15), &t18__CustomAttributeCache_m_TargetVelocityLowerLimit};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t18__CustomAttributeCache_m_SmoothTurnTime;
FieldInfo t18_f16_FieldInfo = 
{
	"m_SmoothTurnTime", &t124_0_0_1, &t18_TI, offsetof(t18, f16), &t18__CustomAttributeCache_m_SmoothTurnTime};
extern Il2CppType t124_0_0_1;
FieldInfo t18_f17_FieldInfo = 
{
	"m_LastFlatAngle", &t124_0_0_1, &t18_TI, offsetof(t18, f17), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t18_f18_FieldInfo = 
{
	"m_CurrentTurnAmount", &t124_0_0_1, &t18_TI, offsetof(t18, f18), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t18_f19_FieldInfo = 
{
	"m_TurnSpeedVelocityChange", &t124_0_0_1, &t18_TI, offsetof(t18, f19), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t18_f20_FieldInfo = 
{
	"m_RollUp", &t4_0_0_1, &t18_TI, offsetof(t18, f20), &EmptyCustomAttributesCache};
static FieldInfo* t18_FIs[] =
{
	&t18_f9_FieldInfo,
	&t18_f10_FieldInfo,
	&t18_f11_FieldInfo,
	&t18_f12_FieldInfo,
	&t18_f13_FieldInfo,
	&t18_f14_FieldInfo,
	&t18_f15_FieldInfo,
	&t18_f16_FieldInfo,
	&t18_f17_FieldInfo,
	&t18_f18_FieldInfo,
	&t18_f19_FieldInfo,
	&t18_f20_FieldInfo,
	NULL
};
extern TypeInfo t18_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m28_MI = 
{
	".ctor", (methodPointerType)&m28, &t18_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 30, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t18_m29_ParameterInfos[] = 
{
	{"deltaTime", 0, 134217735, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t18_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m29_MI = 
{
	"FollowTarget", (methodPointerType)&m29, &t18_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t18_m29_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 5, 1, false, false, 31, NULL, (methodPointerType)NULL};
static MethodInfo* t18_MIs[] =
{
	&m28_MI,
	&m29_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
extern MethodInfo m21_MI;
extern MethodInfo m29_MI;
extern MethodInfo m26_MI;
extern MethodInfo m42_MI;
static MethodInfo* t18_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
	&m21_MI,
	&m29_MI,
	&m26_MI,
	&m42_MI,
};
extern TypeInfo t144_TI;
#include "t144.h"
#include "t144MD.h"
extern MethodInfo m433_MI;
void t18_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t144 * tmp;
		tmp = (t144 *)il2cpp_codegen_object_new (&t144_TI);
		m433(tmp, &m433_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t18_CustomAttributesCacheGenerator_m_MoveSpeed(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t18_CustomAttributesCacheGenerator_m_TurnSpeed(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t18_CustomAttributesCacheGenerator_m_RollSpeed(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t18_CustomAttributesCacheGenerator_m_FollowVelocity(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t18_CustomAttributesCacheGenerator_m_FollowTilt(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t18_CustomAttributesCacheGenerator_m_SpinTurnLimit(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t18_CustomAttributesCacheGenerator_m_TargetVelocityLowerLimit(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t18_CustomAttributesCacheGenerator_m_SmoothTurnTime(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t18__CustomAttributeCache = {
1,
NULL,
&t18_CustomAttributesCacheGenerator
};
CustomAttributesCache t18__CustomAttributeCache_m_MoveSpeed = {
1,
NULL,
&t18_CustomAttributesCacheGenerator_m_MoveSpeed
};
CustomAttributesCache t18__CustomAttributeCache_m_TurnSpeed = {
1,
NULL,
&t18_CustomAttributesCacheGenerator_m_TurnSpeed
};
CustomAttributesCache t18__CustomAttributeCache_m_RollSpeed = {
1,
NULL,
&t18_CustomAttributesCacheGenerator_m_RollSpeed
};
CustomAttributesCache t18__CustomAttributeCache_m_FollowVelocity = {
1,
NULL,
&t18_CustomAttributesCacheGenerator_m_FollowVelocity
};
CustomAttributesCache t18__CustomAttributeCache_m_FollowTilt = {
1,
NULL,
&t18_CustomAttributesCacheGenerator_m_FollowTilt
};
CustomAttributesCache t18__CustomAttributeCache_m_SpinTurnLimit = {
1,
NULL,
&t18_CustomAttributesCacheGenerator_m_SpinTurnLimit
};
CustomAttributesCache t18__CustomAttributeCache_m_TargetVelocityLowerLimit = {
1,
NULL,
&t18_CustomAttributesCacheGenerator_m_TargetVelocityLowerLimit
};
CustomAttributesCache t18__CustomAttributeCache_m_SmoothTurnTime = {
1,
NULL,
&t18_CustomAttributesCacheGenerator_m_SmoothTurnTime
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_1_0_0;
extern TypeInfo t19_TI;
struct t18;
extern TypeInfo t18_TI;
extern CustomAttributesCache t18__CustomAttributeCache;
extern CustomAttributesCache t18__CustomAttributeCache_m_MoveSpeed;
extern CustomAttributesCache t18__CustomAttributeCache_m_TurnSpeed;
extern CustomAttributesCache t18__CustomAttributeCache_m_RollSpeed;
extern CustomAttributesCache t18__CustomAttributeCache_m_FollowVelocity;
extern CustomAttributesCache t18__CustomAttributeCache_m_FollowTilt;
extern CustomAttributesCache t18__CustomAttributeCache_m_SpinTurnLimit;
extern CustomAttributesCache t18__CustomAttributeCache_m_TargetVelocityLowerLimit;
extern CustomAttributesCache t18__CustomAttributeCache_m_SmoothTurnTime;
TypeInfo t18_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "AutoCam", "UnityStandardAssets.Cameras", t18_MIs, NULL, t18_FIs, NULL, &t19_TI, NULL, NULL, &t18_TI, NULL, t18_VT, &t18__CustomAttributeCache, &t18_TI, &t18_0_0_0, &t18_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t18), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 12, 0, 0, 8, 0, 0};
#include "t20.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t20_TI;
#include "t20MD.h"

#include "t19.h"
#include "t145.h"
extern TypeInfo t20_TI;
extern TypeInfo t19_TI;
extern TypeInfo t123_TI;
extern TypeInfo t130_TI;
extern TypeInfo t16_TI;
extern TypeInfo t39_TI;
extern TypeInfo t126_TI;
extern TypeInfo t4_TI;
#include "t146MD.h"
extern MethodInfo m41_MI;
extern MethodInfo m42_MI;
extern MethodInfo m434_MI;
extern MethodInfo m435_MI;
extern MethodInfo m430_MI;
extern MethodInfo m436_MI;
extern MethodInfo m336_MI;
extern MethodInfo m437_MI;
extern MethodInfo m35_MI;
extern MethodInfo m438_MI;
extern MethodInfo m411_MI;
extern MethodInfo m335_MI;
extern MethodInfo m426_MI;
extern MethodInfo m350_MI;
extern MethodInfo m439_MI;
extern MethodInfo m100_MI;
extern MethodInfo m440_MI;
extern MethodInfo m357_MI;
extern MethodInfo m358_MI;
extern MethodInfo m345_MI;
extern MethodInfo m441_MI;
extern MethodInfo m442_MI;


extern MethodInfo m30_MI;
 void m30 (t20 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m30_MI);
	{
		__this->f10 = (1.0f);
		__this->f11 = (1.5f);
		__this->f12 = (0.1f);
		__this->f13 = (75.0f);
		__this->f14 = (45.0f);
		m41(__this, &m41_MI);
		return;
	}
}
extern MethodInfo m31_MI;
 void m31 (t20 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m31_MI);
	t21  V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		m42(__this, &m42_MI);
		bool L_0 = (__this->f15);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		m434(NULL, G_B3_0, &m434_MI);
		bool L_1 = (__this->f15);
		m435(NULL, ((((int32_t)L_1) == ((int32_t)0))? 1 : 0), &m435_MI);
		t2 * L_2 = (__this->f7);
		NullCheck(L_2);
		t21  L_3 = m430(L_2, &m430_MI);
		V_0 = L_3;
		t4  L_4 = m436((&V_0), &m436_MI);
		__this->f19 = L_4;
		t2 * L_5 = (__this->f7);
		NullCheck(L_5);
		t2 * L_6 = m336(L_5, &m336_MI);
		NullCheck(L_6);
		t21  L_7 = m437(L_6, &m437_MI);
		__this->f20 = L_7;
		t2 * L_8 = m336(__this, &m336_MI);
		NullCheck(L_8);
		t21  L_9 = m437(L_8, &m437_MI);
		__this->f21 = L_9;
		return;
	}
}
extern MethodInfo m32_MI;
 void m32 (t20 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m32_MI);
	int32_t G_B5_0 = 0;
	{
		m35(__this, &m35_MI);
		bool L_0 = (__this->f15);
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		bool L_1 = m438(NULL, 0, &m438_MI);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		bool L_2 = (__this->f15);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_002e;
	}

IL_002d:
	{
		G_B5_0 = 0;
	}

IL_002e:
	{
		m434(NULL, G_B5_0, &m434_MI);
		bool L_3 = (__this->f15);
		m435(NULL, ((((int32_t)L_3) == ((int32_t)0))? 1 : 0), &m435_MI);
	}

IL_0041:
	{
		return;
	}
}
extern MethodInfo m33_MI;
 void m33 (t20 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m33_MI);
	{
		m434(NULL, 0, &m434_MI);
		m435(NULL, 1, &m435_MI);
		return;
	}
}
extern MethodInfo m34_MI;
 void m34 (t20 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m34_MI);
	{
		t2 * L_0 = (__this->f2);
		bool L_1 = m411(NULL, L_0, (t60 *)NULL, &m411_MI);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		t2 * L_2 = m336(__this, &m336_MI);
		t2 * L_3 = m336(__this, &m336_MI);
		NullCheck(L_3);
		t4  L_4 = m335(L_3, &m335_MI);
		t2 * L_5 = (__this->f2);
		NullCheck(L_5);
		t4  L_6 = m335(L_5, &m335_MI);
		float L_7 = (__this->f10);
		t4  L_8 = m426(NULL, L_4, L_6, ((float)(p0*L_7)), &m426_MI);
		NullCheck(L_2);
		m350(L_2, L_8, &m350_MI);
		return;
	}
}
extern MethodInfo m35_MI;
 void m35 (t20 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m35_MI);
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	t20 * G_B5_0 = {0};
	t20 * G_B4_0 = {0};
	float G_B6_0 = 0.0f;
	t20 * G_B6_1 = {0};
	{
		float L_0 = m439(NULL, &m439_MI);
		if ((((float)L_0) >= ((float)(1.401298E-45f))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		float L_1 = m100(NULL, (t27*) &_stringLiteral10, &m100_MI);
		V_0 = L_1;
		float L_2 = m100(NULL, (t27*) &_stringLiteral11, &m100_MI);
		V_1 = L_2;
		float L_3 = (__this->f17);
		float L_4 = (__this->f11);
		__this->f17 = ((float)(L_3+((float)(V_0*L_4))));
		float L_5 = (__this->f17);
		t21  L_6 = m440(NULL, (0.0f), L_5, (0.0f), &m440_MI);
		__this->f21 = L_6;
		bool L_7 = (__this->f16);
		if (!L_7)
		{
			goto IL_00a0;
		}
	}
	{
		G_B4_0 = __this;
		if ((((float)V_1) <= ((float)(0.0f))))
		{
			G_B5_0 = __this;
			goto IL_0084;
		}
	}
	{
		float L_8 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_9 = m357(NULL, (0.0f), ((-L_8)), V_1, &m357_MI);
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		goto IL_0096;
	}

IL_0084:
	{
		float L_10 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_11 = m357(NULL, (0.0f), L_10, ((-V_1)), &m357_MI);
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
	}

IL_0096:
	{
		NullCheck(G_B6_1);
		G_B6_1->f18 = G_B6_0;
		goto IL_00d3;
	}

IL_00a0:
	{
		float L_12 = (__this->f18);
		float L_13 = (__this->f11);
		__this->f18 = ((float)(L_12-((float)(V_1*L_13))));
		float L_14 = (__this->f18);
		float L_15 = (__this->f14);
		float L_16 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_17 = m358(NULL, L_14, ((-L_15)), L_16, &m358_MI);
		__this->f18 = L_17;
	}

IL_00d3:
	{
		float L_18 = (__this->f18);
		t4 * L_19 = &(__this->f19);
		NullCheck(L_19);
		float L_20 = (L_19->f2);
		t4 * L_21 = &(__this->f19);
		NullCheck(L_21);
		float L_22 = (L_21->f3);
		t21  L_23 = m440(NULL, L_18, L_20, L_22, &m440_MI);
		__this->f20 = L_23;
		float L_24 = (__this->f12);
		if ((((float)L_24) <= ((float)(0.0f))))
		{
			goto IL_0169;
		}
	}
	{
		t2 * L_25 = (__this->f7);
		t2 * L_26 = (__this->f7);
		NullCheck(L_26);
		t21  L_27 = m437(L_26, &m437_MI);
		t21  L_28 = (__this->f20);
		float L_29 = (__this->f12);
		float L_30 = m345(NULL, &m345_MI);
		t21  L_31 = m441(NULL, L_27, L_28, ((float)(L_29*L_30)), &m441_MI);
		NullCheck(L_25);
		m442(L_25, L_31, &m442_MI);
		t2 * L_32 = m336(__this, &m336_MI);
		t2 * L_33 = m336(__this, &m336_MI);
		NullCheck(L_33);
		t21  L_34 = m437(L_33, &m437_MI);
		t21  L_35 = (__this->f21);
		float L_36 = (__this->f12);
		float L_37 = m345(NULL, &m345_MI);
		t21  L_38 = m441(NULL, L_34, L_35, ((float)(L_36*L_37)), &m441_MI);
		NullCheck(L_32);
		m442(L_32, L_38, &m442_MI);
		goto IL_018b;
	}

IL_0169:
	{
		t2 * L_39 = (__this->f7);
		t21  L_40 = (__this->f20);
		NullCheck(L_39);
		m442(L_39, L_40, &m442_MI);
		t2 * L_41 = m336(__this, &m336_MI);
		t21  L_42 = (__this->f21);
		NullCheck(L_41);
		m442(L_41, L_42, &m442_MI);
	}

IL_018b:
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Cameras.FreeLookCam
extern Il2CppType t124_0_0_32849;
FieldInfo t20_f9_FieldInfo = 
{
	"k_LookDistance", &t124_0_0_32849, &t20_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t20__CustomAttributeCache_m_MoveSpeed;
FieldInfo t20_f10_FieldInfo = 
{
	"m_MoveSpeed", &t124_0_0_1, &t20_TI, offsetof(t20, f10), &t20__CustomAttributeCache_m_MoveSpeed};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t20__CustomAttributeCache_m_TurnSpeed;
FieldInfo t20_f11_FieldInfo = 
{
	"m_TurnSpeed", &t124_0_0_1, &t20_TI, offsetof(t20, f11), &t20__CustomAttributeCache_m_TurnSpeed};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t20__CustomAttributeCache_m_TurnSmoothing;
FieldInfo t20_f12_FieldInfo = 
{
	"m_TurnSmoothing", &t124_0_0_1, &t20_TI, offsetof(t20, f12), &t20__CustomAttributeCache_m_TurnSmoothing};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t20__CustomAttributeCache_m_TiltMax;
FieldInfo t20_f13_FieldInfo = 
{
	"m_TiltMax", &t124_0_0_1, &t20_TI, offsetof(t20, f13), &t20__CustomAttributeCache_m_TiltMax};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t20__CustomAttributeCache_m_TiltMin;
FieldInfo t20_f14_FieldInfo = 
{
	"m_TiltMin", &t124_0_0_1, &t20_TI, offsetof(t20, f14), &t20__CustomAttributeCache_m_TiltMin};
extern Il2CppType t125_0_0_1;
extern CustomAttributesCache t20__CustomAttributeCache_m_LockCursor;
FieldInfo t20_f15_FieldInfo = 
{
	"m_LockCursor", &t125_0_0_1, &t20_TI, offsetof(t20, f15), &t20__CustomAttributeCache_m_LockCursor};
extern Il2CppType t125_0_0_1;
extern CustomAttributesCache t20__CustomAttributeCache_m_VerticalAutoReturn;
FieldInfo t20_f16_FieldInfo = 
{
	"m_VerticalAutoReturn", &t125_0_0_1, &t20_TI, offsetof(t20, f16), &t20__CustomAttributeCache_m_VerticalAutoReturn};
extern Il2CppType t124_0_0_1;
FieldInfo t20_f17_FieldInfo = 
{
	"m_LookAngle", &t124_0_0_1, &t20_TI, offsetof(t20, f17), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t20_f18_FieldInfo = 
{
	"m_TiltAngle", &t124_0_0_1, &t20_TI, offsetof(t20, f18), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t20_f19_FieldInfo = 
{
	"m_PivotEulers", &t4_0_0_1, &t20_TI, offsetof(t20, f19), &EmptyCustomAttributesCache};
extern Il2CppType t21_0_0_1;
FieldInfo t20_f20_FieldInfo = 
{
	"m_PivotTargetRot", &t21_0_0_1, &t20_TI, offsetof(t20, f20), &EmptyCustomAttributesCache};
extern Il2CppType t21_0_0_1;
FieldInfo t20_f21_FieldInfo = 
{
	"m_TransformTargetRot", &t21_0_0_1, &t20_TI, offsetof(t20, f21), &EmptyCustomAttributesCache};
static FieldInfo* t20_FIs[] =
{
	&t20_f9_FieldInfo,
	&t20_f10_FieldInfo,
	&t20_f11_FieldInfo,
	&t20_f12_FieldInfo,
	&t20_f13_FieldInfo,
	&t20_f14_FieldInfo,
	&t20_f15_FieldInfo,
	&t20_f16_FieldInfo,
	&t20_f17_FieldInfo,
	&t20_f18_FieldInfo,
	&t20_f19_FieldInfo,
	&t20_f20_FieldInfo,
	&t20_f21_FieldInfo,
	NULL
};
static const float t20_f9_DefaultValueData = 100.0f;
extern Il2CppType t124_0_0_0;
static Il2CppFieldDefaultValueEntry t20_f9_DefaultValue = 
{
	&t20_f9_FieldInfo, { (char*)&t20_f9_DefaultValueData, &t124_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t20_FDVs[] = 
{
	&t20_f9_DefaultValue,
	NULL
};
extern TypeInfo t20_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30_MI = 
{
	".ctor", (methodPointerType)&m30, &t20_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 32, NULL, (methodPointerType)NULL};
extern TypeInfo t20_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m31_MI = 
{
	"Awake", (methodPointerType)&m31, &t20_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 196, 0, 7, 0, false, false, 33, NULL, (methodPointerType)NULL};
extern TypeInfo t20_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m32_MI = 
{
	"Update", (methodPointerType)&m32, &t20_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 132, 0, 255, 0, false, false, 34, NULL, (methodPointerType)NULL};
extern TypeInfo t20_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m33_MI = 
{
	"OnDisable", (methodPointerType)&m33, &t20_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 35, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t20_m34_ParameterInfos[] = 
{
	{"deltaTime", 0, 134217736, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t20_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m34_MI = 
{
	"FollowTarget", (methodPointerType)&m34, &t20_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t20_m34_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 5, 1, false, false, 36, NULL, (methodPointerType)NULL};
extern TypeInfo t20_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m35_MI = 
{
	"HandleRotationMovement", (methodPointerType)&m35, &t20_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 37, NULL, (methodPointerType)NULL};
static MethodInfo* t20_MIs[] =
{
	&m30_MI,
	&m31_MI,
	&m32_MI,
	&m33_MI,
	&m34_MI,
	&m35_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
extern MethodInfo m21_MI;
extern MethodInfo m34_MI;
extern MethodInfo m26_MI;
extern MethodInfo m31_MI;
static MethodInfo* t20_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
	&m21_MI,
	&m34_MI,
	&m26_MI,
	&m31_MI,
};
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t20_CustomAttributesCacheGenerator_m_MoveSpeed(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
extern TypeInfo t139_TI;
extern MethodInfo m384_MI;
void t20_CustomAttributesCacheGenerator_m_TurnSpeed(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t139 * tmp;
		tmp = (t139 *)il2cpp_codegen_object_new (&t139_TI);
		m384(tmp, 0.0f, 10.0f, &m384_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t20_CustomAttributesCacheGenerator_m_TurnSmoothing(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t20_CustomAttributesCacheGenerator_m_TiltMax(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t20_CustomAttributesCacheGenerator_m_TiltMin(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t20_CustomAttributesCacheGenerator_m_LockCursor(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t20_CustomAttributesCacheGenerator_m_VerticalAutoReturn(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t20__CustomAttributeCache_m_MoveSpeed = {
1,
NULL,
&t20_CustomAttributesCacheGenerator_m_MoveSpeed
};
CustomAttributesCache t20__CustomAttributeCache_m_TurnSpeed = {
2,
NULL,
&t20_CustomAttributesCacheGenerator_m_TurnSpeed
};
CustomAttributesCache t20__CustomAttributeCache_m_TurnSmoothing = {
1,
NULL,
&t20_CustomAttributesCacheGenerator_m_TurnSmoothing
};
CustomAttributesCache t20__CustomAttributeCache_m_TiltMax = {
1,
NULL,
&t20_CustomAttributesCacheGenerator_m_TiltMax
};
CustomAttributesCache t20__CustomAttributeCache_m_TiltMin = {
1,
NULL,
&t20_CustomAttributesCacheGenerator_m_TiltMin
};
CustomAttributesCache t20__CustomAttributeCache_m_LockCursor = {
1,
NULL,
&t20_CustomAttributesCacheGenerator_m_LockCursor
};
CustomAttributesCache t20__CustomAttributeCache_m_VerticalAutoReturn = {
1,
NULL,
&t20_CustomAttributesCacheGenerator_m_VerticalAutoReturn
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t20_0_0_0;
extern Il2CppType t20_1_0_0;
extern TypeInfo t19_TI;
struct t20;
extern TypeInfo t20_TI;
extern CustomAttributesCache t20__CustomAttributeCache_m_MoveSpeed;
extern CustomAttributesCache t20__CustomAttributeCache_m_TurnSpeed;
extern CustomAttributesCache t20__CustomAttributeCache_m_TurnSmoothing;
extern CustomAttributesCache t20__CustomAttributeCache_m_TiltMax;
extern CustomAttributesCache t20__CustomAttributeCache_m_TiltMin;
extern CustomAttributesCache t20__CustomAttributeCache_m_LockCursor;
extern CustomAttributesCache t20__CustomAttributeCache_m_VerticalAutoReturn;
TypeInfo t20_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "FreeLookCam", "UnityStandardAssets.Cameras", t20_MIs, NULL, t20_FIs, NULL, &t19_TI, NULL, NULL, &t20_TI, NULL, t20_VT, &EmptyCustomAttributesCache, &t20_TI, &t20_0_0_0, &t20_1_0_0, NULL, NULL, NULL, t20_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t20), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 0, 13, 0, 0, 8, 0, 0};
#include "t22.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t22_TI;
#include "t22MD.h"

#include "t23.h"
extern TypeInfo t22_TI;
extern TypeInfo t23_TI;
extern TypeInfo t123_TI;
extern TypeInfo t124_TI;
extern TypeInfo t126_TI;
extern TypeInfo t4_TI;
#include "t23MD.h"
extern MethodInfo m38_MI;
extern MethodInfo m40_MI;
extern MethodInfo m443_MI;
extern MethodInfo m444_MI;
extern MethodInfo m336_MI;
extern MethodInfo m445_MI;


extern MethodInfo m36_MI;
 void m36 (t22 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m36_MI);
	{
		__this->f11 = (0.5f);
		__this->f12 = (0.5f);
		__this->f13 = (0.5f);
		m38(__this, &m38_MI);
		return;
	}
}
extern MethodInfo m37_MI;
 void m37 (t22 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m37_MI);
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		m40(__this, p0, &m40_MI);
		float L_0 = m443(NULL, &m443_MI);
		float L_1 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_2 = m444(NULL, (0.0f), ((float)(L_0*L_1)), &m444_MI);
		V_0 = ((float)(L_2-(0.5f)));
		float L_3 = m443(NULL, &m443_MI);
		float L_4 = (__this->f11);
		float L_5 = m444(NULL, (0.0f), ((float)(((float)(L_3*L_4))+(100.0f))), &m444_MI);
		V_1 = ((float)(L_5-(0.5f)));
		float L_6 = (__this->f12);
		V_0 = ((float)(V_0*L_6));
		float L_7 = (__this->f12);
		V_1 = ((float)(V_1*L_7));
		float L_8 = m443(NULL, &m443_MI);
		float L_9 = (__this->f11);
		float L_10 = m444(NULL, (0.0f), ((float)(L_8*L_9)), &m444_MI);
		float L_11 = (__this->f14);
		V_2 = ((float)(((float)(L_10-(0.5f)))+L_11));
		float L_12 = m443(NULL, &m443_MI);
		float L_13 = (__this->f11);
		float L_14 = m444(NULL, (0.0f), ((float)(((float)(L_12*L_13))+(100.0f))), &m444_MI);
		float L_15 = (__this->f14);
		V_3 = ((float)(((float)(L_14-(0.5f)))+L_15));
		float L_16 = (__this->f13);
		t4 * L_17 = &(__this->f10);
		NullCheck(L_17);
		float L_18 = (L_17->f1);
		V_2 = ((float)(V_2*((float)(((-L_16))*L_18))));
		float L_19 = (__this->f13);
		t4 * L_20 = &(__this->f10);
		NullCheck(L_20);
		float L_21 = (L_20->f2);
		V_3 = ((float)(V_3*((float)(L_19*L_21))));
		t2 * L_22 = m336(__this, &m336_MI);
		NullCheck(L_22);
		m445(L_22, ((float)(V_0+V_2)), ((float)(V_1+V_3)), (0.0f), &m445_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Cameras.HandHeldCam
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t22__CustomAttributeCache_m_SwaySpeed;
FieldInfo t22_f11_FieldInfo = 
{
	"m_SwaySpeed", &t124_0_0_1, &t22_TI, offsetof(t22, f11), &t22__CustomAttributeCache_m_SwaySpeed};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t22__CustomAttributeCache_m_BaseSwayAmount;
FieldInfo t22_f12_FieldInfo = 
{
	"m_BaseSwayAmount", &t124_0_0_1, &t22_TI, offsetof(t22, f12), &t22__CustomAttributeCache_m_BaseSwayAmount};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t22__CustomAttributeCache_m_TrackingSwayAmount;
FieldInfo t22_f13_FieldInfo = 
{
	"m_TrackingSwayAmount", &t124_0_0_1, &t22_TI, offsetof(t22, f13), &t22__CustomAttributeCache_m_TrackingSwayAmount};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t22__CustomAttributeCache_m_TrackingBias;
FieldInfo t22_f14_FieldInfo = 
{
	"m_TrackingBias", &t124_0_0_1, &t22_TI, offsetof(t22, f14), &t22__CustomAttributeCache_m_TrackingBias};
static FieldInfo* t22_FIs[] =
{
	&t22_f11_FieldInfo,
	&t22_f12_FieldInfo,
	&t22_f13_FieldInfo,
	&t22_f14_FieldInfo,
	NULL
};
extern TypeInfo t22_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m36_MI = 
{
	".ctor", (methodPointerType)&m36, &t22_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 38, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t22_m37_ParameterInfos[] = 
{
	{"deltaTime", 0, 134217737, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t22_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m37_MI = 
{
	"FollowTarget", (methodPointerType)&m37, &t22_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t22_m37_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 5, 1, false, false, 39, NULL, (methodPointerType)NULL};
static MethodInfo* t22_MIs[] =
{
	&m36_MI,
	&m37_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
extern MethodInfo m39_MI;
extern MethodInfo m37_MI;
extern MethodInfo m26_MI;
static MethodInfo* t22_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
	&m39_MI,
	&m37_MI,
	&m26_MI,
};
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t22_CustomAttributesCacheGenerator_m_SwaySpeed(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t22_CustomAttributesCacheGenerator_m_BaseSwayAmount(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t22_CustomAttributesCacheGenerator_m_TrackingSwayAmount(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
extern TypeInfo t139_TI;
extern MethodInfo m384_MI;
void t22_CustomAttributesCacheGenerator_m_TrackingBias(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t139 * tmp;
		tmp = (t139 *)il2cpp_codegen_object_new (&t139_TI);
		m384(tmp, -1.0f, 1.0f, &m384_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t22__CustomAttributeCache_m_SwaySpeed = {
1,
NULL,
&t22_CustomAttributesCacheGenerator_m_SwaySpeed
};
CustomAttributesCache t22__CustomAttributeCache_m_BaseSwayAmount = {
1,
NULL,
&t22_CustomAttributesCacheGenerator_m_BaseSwayAmount
};
CustomAttributesCache t22__CustomAttributeCache_m_TrackingSwayAmount = {
1,
NULL,
&t22_CustomAttributesCacheGenerator_m_TrackingSwayAmount
};
CustomAttributesCache t22__CustomAttributeCache_m_TrackingBias = {
2,
NULL,
&t22_CustomAttributesCacheGenerator_m_TrackingBias
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t22_0_0_0;
extern Il2CppType t22_1_0_0;
extern TypeInfo t23_TI;
struct t22;
extern TypeInfo t22_TI;
extern CustomAttributesCache t22__CustomAttributeCache_m_SwaySpeed;
extern CustomAttributesCache t22__CustomAttributeCache_m_BaseSwayAmount;
extern CustomAttributesCache t22__CustomAttributeCache_m_TrackingSwayAmount;
extern CustomAttributesCache t22__CustomAttributeCache_m_TrackingBias;
TypeInfo t22_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "HandHeldCam", "UnityStandardAssets.Cameras", t22_MIs, NULL, t22_FIs, NULL, &t23_TI, NULL, NULL, &t22_TI, NULL, t22_VT, &EmptyCustomAttributesCache, &t22_TI, &t22_0_0_0, &t22_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t22), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 4, 0, 0, 7, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t23_TI;

extern TypeInfo t23_TI;
extern TypeInfo t16_TI;
extern TypeInfo t123_TI;
extern TypeInfo t4_TI;
extern TypeInfo t126_TI;
extern TypeInfo t6_TI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m336_MI;
extern MethodInfo m437_MI;
extern MethodInfo m442_MI;
extern MethodInfo m335_MI;
extern MethodInfo m446_MI;
extern MethodInfo m423_MI;
extern MethodInfo m358_MI;
extern MethodInfo m440_MI;
extern MethodInfo m447_MI;
extern MethodInfo m424_MI;
extern MethodInfo m448_MI;
extern MethodInfo m349_MI;


extern MethodInfo m38_MI;
 void m38 (t23 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m38_MI);
	{
		__this->f7 = (1.0f);
		m20(__this, &m20_MI);
		return;
	}
}
extern MethodInfo m39_MI;
 void m39 (t23 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m39_MI);
	{
		m21(__this, &m21_MI);
		t2 * L_0 = m336(__this, &m336_MI);
		NullCheck(L_0);
		t21  L_1 = m437(L_0, &m437_MI);
		__this->f9 = L_1;
		return;
	}
}
extern MethodInfo m40_MI;
 void m40 (t23 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m40_MI);
	t4  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	t4  V_3 = {0};
	{
		t2 * L_0 = m336(__this, &m336_MI);
		t21  L_1 = (__this->f9);
		NullCheck(L_0);
		m442(L_0, L_1, &m442_MI);
		t2 * L_2 = m336(__this, &m336_MI);
		t2 * L_3 = (__this->f2);
		NullCheck(L_3);
		t4  L_4 = m335(L_3, &m335_MI);
		NullCheck(L_2);
		t4  L_5 = m446(L_2, L_4, &m446_MI);
		V_0 = L_5;
		NullCheck((&V_0));
		float L_6 = ((&V_0)->f1);
		NullCheck((&V_0));
		float L_7 = ((&V_0)->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_8 = atan2f(L_6, L_7);
		V_1 = ((float)(L_8*(57.29578f)));
		t6 * L_9 = &(__this->f6);
		NullCheck(L_9);
		float L_10 = (L_9->f2);
		t6 * L_11 = &(__this->f6);
		NullCheck(L_11);
		float L_12 = (L_11->f2);
		float L_13 = m358(NULL, V_1, ((float)(((-L_10))*(0.5f))), ((float)(L_12*(0.5f))), &m358_MI);
		V_1 = L_13;
		t2 * L_14 = m336(__this, &m336_MI);
		t21  L_15 = (__this->f9);
		t21  L_16 = m440(NULL, (0.0f), V_1, (0.0f), &m440_MI);
		t21  L_17 = m447(NULL, L_15, L_16, &m447_MI);
		NullCheck(L_14);
		m442(L_14, L_17, &m442_MI);
		t2 * L_18 = m336(__this, &m336_MI);
		t2 * L_19 = (__this->f2);
		NullCheck(L_19);
		t4  L_20 = m335(L_19, &m335_MI);
		NullCheck(L_18);
		t4  L_21 = m446(L_18, L_20, &m446_MI);
		V_0 = L_21;
		NullCheck((&V_0));
		float L_22 = ((&V_0)->f2);
		NullCheck((&V_0));
		float L_23 = ((&V_0)->f3);
		float L_24 = atan2f(L_22, L_23);
		V_2 = ((float)(L_24*(57.29578f)));
		t6 * L_25 = &(__this->f6);
		NullCheck(L_25);
		float L_26 = (L_25->f1);
		t6 * L_27 = &(__this->f6);
		NullCheck(L_27);
		float L_28 = (L_27->f1);
		float L_29 = m358(NULL, V_2, ((float)(((-L_26))*(0.5f))), ((float)(L_28*(0.5f))), &m358_MI);
		V_2 = L_29;
		t4 * L_30 = &(__this->f8);
		NullCheck(L_30);
		float L_31 = (L_30->f1);
		t4 * L_32 = &(__this->f8);
		NullCheck(L_32);
		float L_33 = (L_32->f1);
		float L_34 = m424(NULL, L_33, V_2, &m424_MI);
		t4 * L_35 = &(__this->f8);
		NullCheck(L_35);
		float L_36 = (L_35->f2);
		t4 * L_37 = &(__this->f8);
		NullCheck(L_37);
		float L_38 = (L_37->f2);
		float L_39 = m424(NULL, L_38, V_1, &m424_MI);
		m448((&V_3), ((float)(L_31+L_34)), ((float)(L_36+L_39)), &m448_MI);
		t4  L_40 = (__this->f8);
		t4 * L_41 = &(__this->f10);
		float L_42 = (__this->f7);
		t4  L_43 = m349(NULL, L_40, V_3, L_41, L_42, &m349_MI);
		__this->f8 = L_43;
		t2 * L_44 = m336(__this, &m336_MI);
		t21  L_45 = (__this->f9);
		t4 * L_46 = &(__this->f8);
		NullCheck(L_46);
		float L_47 = (L_46->f1);
		t4 * L_48 = &(__this->f8);
		NullCheck(L_48);
		float L_49 = (L_48->f2);
		t21  L_50 = m440(NULL, ((-L_47)), L_49, (0.0f), &m440_MI);
		t21  L_51 = m447(NULL, L_45, L_50, &m447_MI);
		NullCheck(L_44);
		m442(L_44, L_51, &m442_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Cameras.LookatTarget
extern Il2CppType t6_0_0_1;
extern CustomAttributesCache t23__CustomAttributeCache_m_RotationRange;
FieldInfo t23_f6_FieldInfo = 
{
	"m_RotationRange", &t6_0_0_1, &t23_TI, offsetof(t23, f6), &t23__CustomAttributeCache_m_RotationRange};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t23__CustomAttributeCache_m_FollowSpeed;
FieldInfo t23_f7_FieldInfo = 
{
	"m_FollowSpeed", &t124_0_0_1, &t23_TI, offsetof(t23, f7), &t23__CustomAttributeCache_m_FollowSpeed};
extern Il2CppType t4_0_0_1;
FieldInfo t23_f8_FieldInfo = 
{
	"m_FollowAngles", &t4_0_0_1, &t23_TI, offsetof(t23, f8), &EmptyCustomAttributesCache};
extern Il2CppType t21_0_0_1;
FieldInfo t23_f9_FieldInfo = 
{
	"m_OriginalRotation", &t21_0_0_1, &t23_TI, offsetof(t23, f9), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_4;
FieldInfo t23_f10_FieldInfo = 
{
	"m_FollowVelocity", &t4_0_0_4, &t23_TI, offsetof(t23, f10), &EmptyCustomAttributesCache};
static FieldInfo* t23_FIs[] =
{
	&t23_f6_FieldInfo,
	&t23_f7_FieldInfo,
	&t23_f8_FieldInfo,
	&t23_f9_FieldInfo,
	&t23_f10_FieldInfo,
	NULL
};
extern TypeInfo t23_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m38_MI = 
{
	".ctor", (methodPointerType)&m38, &t23_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 40, NULL, (methodPointerType)NULL};
extern TypeInfo t23_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m39_MI = 
{
	"Start", (methodPointerType)&m39, &t23_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 196, 0, 4, 0, false, false, 41, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t23_m40_ParameterInfos[] = 
{
	{"deltaTime", 0, 134217738, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t23_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m40_MI = 
{
	"FollowTarget", (methodPointerType)&m40, &t23_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t23_m40_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 5, 1, false, false, 42, NULL, (methodPointerType)NULL};
static MethodInfo* t23_MIs[] =
{
	&m38_MI,
	&m39_MI,
	&m40_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
extern MethodInfo m39_MI;
extern MethodInfo m40_MI;
extern MethodInfo m26_MI;
static MethodInfo* t23_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
	&m39_MI,
	&m40_MI,
	&m26_MI,
};
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t23_CustomAttributesCacheGenerator_m_RotationRange(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t23_CustomAttributesCacheGenerator_m_FollowSpeed(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t23__CustomAttributeCache_m_RotationRange = {
1,
NULL,
&t23_CustomAttributesCacheGenerator_m_RotationRange
};
CustomAttributesCache t23__CustomAttributeCache_m_FollowSpeed = {
1,
NULL,
&t23_CustomAttributesCacheGenerator_m_FollowSpeed
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t23_0_0_0;
extern Il2CppType t23_1_0_0;
extern TypeInfo t16_TI;
struct t23;
extern TypeInfo t23_TI;
extern CustomAttributesCache t23__CustomAttributeCache_m_RotationRange;
extern CustomAttributesCache t23__CustomAttributeCache_m_FollowSpeed;
TypeInfo t23_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "LookatTarget", "UnityStandardAssets.Cameras", t23_MIs, NULL, t23_FIs, NULL, &t16_TI, NULL, NULL, &t23_TI, NULL, t23_VT, &EmptyCustomAttributesCache, &t23_TI, &t23_0_0_0, &t23_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t23), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 5, 0, 0, 7, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t19_TI;

#include "t32.h"
extern TypeInfo t19_TI;
extern MethodInfo m20_MI;
extern MethodInfo m449_MI;
extern MethodInfo m336_MI;
extern MethodInfo m450_MI;
struct t127;
struct t127;
 t25 * m451_gshared (t127 * __this, MethodInfo* method);
#define m451(__this, method) (t25 *)m451_gshared((t127 *)__this, method)
#define m449(__this, method) (t32 *)m451_gshared((t127 *)__this, method)
extern MethodInfo m449_MI;


extern MethodInfo m41_MI;
 void m41 (t19 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m41_MI);
	{
		m20(__this, &m20_MI);
		return;
	}
}
extern MethodInfo m42_MI;
 void m42 (t19 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m42_MI);
	{
		t32 * L_0 = m449(__this, &m449_MI);
		NullCheck(L_0);
		t2 * L_1 = m336(L_0, &m336_MI);
		__this->f6 = L_1;
		t2 * L_2 = (__this->f6);
		NullCheck(L_2);
		t2 * L_3 = m450(L_2, &m450_MI);
		__this->f7 = L_3;
		return;
	}
}
// Metadata Definition UnityStandardAssets.Cameras.PivotBasedCameraRig
extern Il2CppType t2_0_0_4;
FieldInfo t19_f6_FieldInfo = 
{
	"m_Cam", &t2_0_0_4, &t19_TI, offsetof(t19, f6), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_4;
FieldInfo t19_f7_FieldInfo = 
{
	"m_Pivot", &t2_0_0_4, &t19_TI, offsetof(t19, f7), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_4;
FieldInfo t19_f8_FieldInfo = 
{
	"m_LastTargetPosition", &t4_0_0_4, &t19_TI, offsetof(t19, f8), &EmptyCustomAttributesCache};
static FieldInfo* t19_FIs[] =
{
	&t19_f6_FieldInfo,
	&t19_f7_FieldInfo,
	&t19_f8_FieldInfo,
	NULL
};
extern TypeInfo t19_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m41_MI = 
{
	".ctor", (methodPointerType)&m41, &t19_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 43, NULL, (methodPointerType)NULL};
extern TypeInfo t19_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m42_MI = 
{
	"Awake", (methodPointerType)&m42, &t19_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 452, 0, 7, 0, false, false, 44, NULL, (methodPointerType)NULL};
static MethodInfo* t19_MIs[] =
{
	&m41_MI,
	&m42_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
extern MethodInfo m21_MI;
extern MethodInfo m26_MI;
extern MethodInfo m42_MI;
static MethodInfo* t19_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
	&m21_MI,
	NULL,
	&m26_MI,
	&m42_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t19_0_0_0;
extern Il2CppType t19_1_0_0;
extern TypeInfo t16_TI;
struct t19;
extern TypeInfo t19_TI;
TypeInfo t19_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "PivotBasedCameraRig", "UnityStandardAssets.Cameras", t19_MIs, NULL, t19_FIs, NULL, &t16_TI, NULL, NULL, &t19_TI, NULL, t19_VT, &EmptyCustomAttributesCache, &t19_TI, &t19_0_0_0, &t19_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t19), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 3, 0, 0, 8, 0, 0};
#include "t24.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t24_TI;
#include "t24MD.h"

#include "t29.h"
extern TypeInfo t29_TI;
extern TypeInfo t124_TI;
extern TypeInfo t134_TI;
#include "t25MD.h"
#include "t29MD.h"
#include "t124MD.h"
extern MethodInfo m452_MI;
extern MethodInfo m453_MI;
extern MethodInfo m454_MI;


extern MethodInfo m43_MI;
 void m43 (t24 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m43_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m44_MI;
 int32_t m44 (t24 * __this, t25 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m44_MI);
	t29  V_0 = {0};
	float V_1 = 0.0f;
	t29  V_2 = {0};
	{
		V_0 = ((*(t29 *)((t29 *)UnBox (p0, InitializedTypeInfo(&t29_TI)))));
		float L_0 = m453((&V_0), &m453_MI);
		V_1 = L_0;
		V_2 = ((*(t29 *)((t29 *)UnBox (p1, InitializedTypeInfo(&t29_TI)))));
		float L_1 = m453((&V_2), &m453_MI);
		int32_t L_2 = m454((&V_1), L_1, &m454_MI);
		return L_2;
	}
}
// Metadata Definition UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer
extern TypeInfo t24_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m43_MI = 
{
	".ctor", (methodPointerType)&m43, &t24_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 50, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t24_m44_ParameterInfos[] = 
{
	{"x", 0, 134217740, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217741, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t24_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m44_MI = 
{
	"Compare", (methodPointerType)&m44, &t24_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t24_m44_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 2, false, false, 51, NULL, (methodPointerType)NULL};
static MethodInfo* t24_MIs[] =
{
	&m43_MI,
	&m44_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m44_MI;
static MethodInfo* t24_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m44_MI,
};
extern TypeInfo t147_TI;
static TypeInfo* t24_ITIs[] = 
{
	&t147_TI,
};
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t24_IOs[] = 
{
	{ &t147_TI, 4},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t24_0_0_0;
extern Il2CppType t24_1_0_0;
extern TypeInfo t25_TI;
struct t24;
extern TypeInfo t24_TI;
extern TypeInfo t26_TI;
TypeInfo t24_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "RayHitComparer", "", t24_MIs, NULL, NULL, NULL, &t25_TI, NULL, &t26_TI, &t24_TI, t24_ITIs, t24_VT, &EmptyCustomAttributesCache, &t24_TI, &t24_0_0_0, &t24_1_0_0, t24_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t24), 0, -1, 0, 0, -1, 1048578, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 5, 1, 1};
#include "t26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t26_TI;
#include "t26MD.h"

#include "t63.h"
#include "t30.h"
#include "t148.h"
extern TypeInfo t26_TI;
extern TypeInfo t24_TI;
extern TypeInfo t4_TI;
extern TypeInfo t126_TI;
#include "t30MD.h"
#include "t149MD.h"
#include "t63MD.h"
#include "t122MD.h"
#include "t148MD.h"
#include "t150MD.h"
extern MethodInfo m334_MI;
extern MethodInfo m449_MI;
extern MethodInfo m336_MI;
extern MethodInfo m450_MI;
extern MethodInfo m458_MI;
extern MethodInfo m420_MI;
extern MethodInfo m43_MI;
extern MethodInfo m335_MI;
extern MethodInfo m416_MI;
extern MethodInfo m343_MI;
extern MethodInfo m347_MI;
extern MethodInfo m459_MI;
extern MethodInfo m460_MI;
extern MethodInfo m461_MI;
extern MethodInfo m462_MI;
extern MethodInfo m463_MI;
extern MethodInfo m464_MI;
extern MethodInfo m465_MI;
extern MethodInfo m371_MI;
extern MethodInfo m466_MI;
extern MethodInfo m467_MI;
extern MethodInfo m468_MI;
extern MethodInfo m469_MI;
extern MethodInfo m453_MI;
extern MethodInfo m470_MI;
extern MethodInfo m471_MI;
extern MethodInfo m446_MI;
extern MethodInfo m472_MI;
extern MethodInfo m473_MI;
extern MethodInfo m47_MI;
extern MethodInfo m422_MI;
extern MethodInfo m358_MI;
extern MethodInfo m348_MI;
extern MethodInfo m474_MI;
extern MethodInfo m449_MI;


extern MethodInfo m45_MI;
 void m45 (t26 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m45_MI);
	{
		__this->f2 = (0.05f);
		__this->f3 = (0.4f);
		__this->f4 = (0.1f);
		__this->f6 = (0.5f);
		__this->f7 = (t27*) &_stringLiteral1;
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m46_MI;
 bool m46 (t26 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m46_MI);
	{
		bool L_0 = (__this->f16);
		return L_0;
	}
}
extern MethodInfo m47_MI;
 void m47 (t26 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m47_MI);
	{
		__this->f16 = p0;
		return;
	}
}
extern MethodInfo m48_MI;
 void m48 (t26 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m48_MI);
	t4  V_0 = {0};
	{
		t32 * L_0 = m449(__this, &m449_MI);
		NullCheck(L_0);
		t2 * L_1 = m336(L_0, &m336_MI);
		__this->f8 = L_1;
		t2 * L_2 = (__this->f8);
		NullCheck(L_2);
		t2 * L_3 = m450(L_2, &m450_MI);
		__this->f9 = L_3;
		t2 * L_4 = (__this->f8);
		NullCheck(L_4);
		t4  L_5 = m458(L_4, &m458_MI);
		V_0 = L_5;
		float L_6 = m420((&V_0), &m420_MI);
		__this->f10 = L_6;
		float L_7 = (__this->f10);
		__this->f12 = L_7;
		t24 * L_8 = (t24 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t24_TI));
		m43(L_8, &m43_MI);
		__this->f15 = L_8;
		return;
	}
}
extern MethodInfo m49_MI;
 void m49 (t26 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m49_MI);
	float V_0 = 0.0f;
	t151* V_1 = {0};
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	t4  V_7 = {0};
	float* G_B22_0 = {0};
	float G_B22_1 = 0.0f;
	float G_B22_2 = 0.0f;
	t26 * G_B22_3 = {0};
	float* G_B21_0 = {0};
	float G_B21_1 = 0.0f;
	float G_B21_2 = 0.0f;
	t26 * G_B21_3 = {0};
	float G_B23_0 = 0.0f;
	float* G_B23_1 = {0};
	float G_B23_2 = 0.0f;
	float G_B23_3 = 0.0f;
	t26 * G_B23_4 = {0};
	{
		float L_0 = (__this->f10);
		V_0 = L_0;
		t30 * L_1 = &(__this->f13);
		t2 * L_2 = (__this->f9);
		NullCheck(L_2);
		t4  L_3 = m335(L_2, &m335_MI);
		t2 * L_4 = (__this->f9);
		NullCheck(L_4);
		t4  L_5 = m416(L_4, &m416_MI);
		float L_6 = (__this->f4);
		t4  L_7 = m343(NULL, L_5, L_6, &m343_MI);
		t4  L_8 = m347(NULL, L_3, L_7, &m347_MI);
		m459(L_1, L_8, &m459_MI);
		t30 * L_9 = &(__this->f13);
		t2 * L_10 = (__this->f9);
		NullCheck(L_10);
		t4  L_11 = m416(L_10, &m416_MI);
		t4  L_12 = m460(NULL, L_11, &m460_MI);
		m461(L_9, L_12, &m461_MI);
		t30 * L_13 = &(__this->f13);
		t4  L_14 = m462(L_13, &m462_MI);
		float L_15 = (__this->f4);
		t151* L_16 = m463(NULL, L_14, L_15, &m463_MI);
		V_1 = L_16;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		goto IL_00be;
	}

IL_0076:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_4);
		NullCheck((*(t63 **)(t63 **)SZArrayLdElema(V_1, V_4)));
		bool L_17 = m464((*(t63 **)(t63 **)SZArrayLdElema(V_1, V_4)), &m464_MI);
		if (L_17)
		{
			goto IL_00b8;
		}
	}
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_4);
		NullCheck((*(t63 **)(t63 **)SZArrayLdElema(V_1, V_4)));
		t17 * L_18 = m465((*(t63 **)(t63 **)SZArrayLdElema(V_1, V_4)), &m465_MI);
		bool L_19 = m371(NULL, L_18, (t60 *)NULL, &m371_MI);
		if (!L_19)
		{
			goto IL_00b1;
		}
	}
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_4);
		NullCheck((*(t63 **)(t63 **)SZArrayLdElema(V_1, V_4)));
		t17 * L_20 = m465((*(t63 **)(t63 **)SZArrayLdElema(V_1, V_4)), &m465_MI);
		t27* L_21 = (__this->f7);
		NullCheck(L_20);
		bool L_22 = m466(L_20, L_21, &m466_MI);
		if (L_22)
		{
			goto IL_00b8;
		}
	}

IL_00b1:
	{
		V_2 = 1;
		goto IL_00c8;
	}

IL_00b8:
	{
		V_4 = ((int32_t)(V_4+1));
	}

IL_00be:
	{
		NullCheck(V_1);
		if ((((int32_t)V_4) < ((int32_t)(((int32_t)(((t122 *)V_1)->max_length))))))
		{
			goto IL_0076;
		}
	}

IL_00c8:
	{
		if (!V_2)
		{
			goto IL_011d;
		}
	}
	{
		t30 * L_23 = &(__this->f13);
		t30 * L_24 = L_23;
		t4  L_25 = m462(L_24, &m462_MI);
		t2 * L_26 = (__this->f9);
		NullCheck(L_26);
		t4  L_27 = m416(L_26, &m416_MI);
		float L_28 = (__this->f4);
		t4  L_29 = m343(NULL, L_27, L_28, &m343_MI);
		t4  L_30 = m347(NULL, L_25, L_29, &m347_MI);
		m459(L_24, L_30, &m459_MI);
		t30  L_31 = (__this->f13);
		float L_32 = (__this->f10);
		float L_33 = (__this->f4);
		t28* L_34 = m467(NULL, L_31, ((float)(L_32-L_33)), &m467_MI);
		__this->f14 = L_34;
		goto IL_0141;
	}

IL_011d:
	{
		t30  L_35 = (__this->f13);
		float L_36 = (__this->f4);
		float L_37 = (__this->f10);
		float L_38 = (__this->f4);
		t28* L_39 = m468(NULL, L_35, L_36, ((float)(L_37+L_38)), &m468_MI);
		__this->f14 = L_39;
	}

IL_0141:
	{
		t28* L_40 = (__this->f14);
		t24 * L_41 = (__this->f15);
		m469(NULL, (t122 *)(t122 *)L_40, L_41, &m469_MI);
		V_5 = (std::numeric_limits<float>::infinity());
		V_6 = 0;
		goto IL_0223;
	}

IL_0161:
	{
		t28* L_42 = (__this->f14);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, V_6);
		float L_43 = m453(((t29 *)(t29 *)SZArrayLdElema(L_42, V_6)), &m453_MI);
		if ((((float)L_43) >= ((float)V_5)))
		{
			goto IL_021d;
		}
	}
	{
		t28* L_44 = (__this->f14);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, V_6);
		t63 * L_45 = m470(((t29 *)(t29 *)SZArrayLdElema(L_44, V_6)), &m470_MI);
		NullCheck(L_45);
		bool L_46 = m464(L_45, &m464_MI);
		if (L_46)
		{
			goto IL_021d;
		}
	}
	{
		t28* L_47 = (__this->f14);
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, V_6);
		t63 * L_48 = m470(((t29 *)(t29 *)SZArrayLdElema(L_47, V_6)), &m470_MI);
		NullCheck(L_48);
		t17 * L_49 = m465(L_48, &m465_MI);
		bool L_50 = m371(NULL, L_49, (t60 *)NULL, &m371_MI);
		if (!L_50)
		{
			goto IL_01df;
		}
	}
	{
		t28* L_51 = (__this->f14);
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, V_6);
		t63 * L_52 = m470(((t29 *)(t29 *)SZArrayLdElema(L_51, V_6)), &m470_MI);
		NullCheck(L_52);
		t17 * L_53 = m465(L_52, &m465_MI);
		t27* L_54 = (__this->f7);
		NullCheck(L_53);
		bool L_55 = m466(L_53, L_54, &m466_MI);
		if (L_55)
		{
			goto IL_021d;
		}
	}

IL_01df:
	{
		t28* L_56 = (__this->f14);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, V_6);
		float L_57 = m453(((t29 *)(t29 *)SZArrayLdElema(L_56, V_6)), &m453_MI);
		V_5 = L_57;
		t2 * L_58 = (__this->f9);
		t28* L_59 = (__this->f14);
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, V_6);
		t4  L_60 = m471(((t29 *)(t29 *)SZArrayLdElema(L_59, V_6)), &m471_MI);
		NullCheck(L_58);
		t4  L_61 = m446(L_58, L_60, &m446_MI);
		V_7 = L_61;
		NullCheck((&V_7));
		float L_62 = ((&V_7)->f3);
		V_0 = ((-L_62));
		V_3 = 1;
	}

IL_021d:
	{
		V_6 = ((int32_t)(V_6+1));
	}

IL_0223:
	{
		t28* L_63 = (__this->f14);
		NullCheck(L_63);
		if ((((int32_t)V_6) < ((int32_t)(((int32_t)(((t122 *)L_63)->max_length))))))
		{
			goto IL_0161;
		}
	}
	{
		if (!V_3)
		{
			goto IL_026a;
		}
	}
	{
		t30 * L_64 = &(__this->f13);
		t4  L_65 = m462(L_64, &m462_MI);
		t2 * L_66 = (__this->f9);
		NullCheck(L_66);
		t4  L_67 = m416(L_66, &m416_MI);
		t4  L_68 = m460(NULL, L_67, &m460_MI);
		float L_69 = (__this->f4);
		t4  L_70 = m343(NULL, L_68, ((float)(V_0+L_69)), &m343_MI);
		t148  L_71 = m472(NULL, &m472_MI);
		m473(NULL, L_65, L_70, L_71, &m473_MI);
	}

IL_026a:
	{
		m47(__this, V_3, &m47_MI);
		float L_72 = (__this->f12);
		float* L_73 = &(__this->f11);
		float L_74 = (__this->f12);
		G_B21_0 = L_73;
		G_B21_1 = V_0;
		G_B21_2 = L_72;
		G_B21_3 = __this;
		if ((((float)L_74) <= ((float)V_0)))
		{
			G_B22_0 = L_73;
			G_B22_1 = V_0;
			G_B22_2 = L_72;
			G_B22_3 = __this;
			goto IL_0296;
		}
	}
	{
		float L_75 = (__this->f2);
		G_B23_0 = L_75;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		G_B23_4 = G_B21_3;
		goto IL_029c;
	}

IL_0296:
	{
		float L_76 = (__this->f3);
		G_B23_0 = L_76;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
		G_B23_4 = G_B22_3;
	}

IL_029c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_77 = m422(NULL, G_B23_3, G_B23_2, G_B23_1, G_B23_0, &m422_MI);
		NullCheck(G_B23_4);
		G_B23_4->f12 = L_77;
		float L_78 = (__this->f12);
		float L_79 = (__this->f6);
		float L_80 = (__this->f10);
		float L_81 = m358(NULL, L_78, L_79, L_80, &m358_MI);
		__this->f12 = L_81;
		t2 * L_82 = (__this->f8);
		t4  L_83 = m348(NULL, &m348_MI);
		t4  L_84 = m460(NULL, L_83, &m460_MI);
		float L_85 = (__this->f12);
		t4  L_86 = m343(NULL, L_84, L_85, &m343_MI);
		NullCheck(L_82);
		m474(L_82, L_86, &m474_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Cameras.ProtectCameraFromWallClip
extern Il2CppType t124_0_0_6;
FieldInfo t26_f2_FieldInfo = 
{
	"clipMoveTime", &t124_0_0_6, &t26_TI, offsetof(t26, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t26_f3_FieldInfo = 
{
	"returnTime", &t124_0_0_6, &t26_TI, offsetof(t26, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t26_f4_FieldInfo = 
{
	"sphereCastRadius", &t124_0_0_6, &t26_TI, offsetof(t26, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t26_f5_FieldInfo = 
{
	"visualiseInEditor", &t125_0_0_6, &t26_TI, offsetof(t26, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t26_f6_FieldInfo = 
{
	"closestDistance", &t124_0_0_6, &t26_TI, offsetof(t26, f6), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_6;
FieldInfo t26_f7_FieldInfo = 
{
	"dontClipTag", &t27_0_0_6, &t26_TI, offsetof(t26, f7), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t26_f8_FieldInfo = 
{
	"m_Cam", &t2_0_0_1, &t26_TI, offsetof(t26, f8), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t26_f9_FieldInfo = 
{
	"m_Pivot", &t2_0_0_1, &t26_TI, offsetof(t26, f9), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t26_f10_FieldInfo = 
{
	"m_OriginalDist", &t124_0_0_1, &t26_TI, offsetof(t26, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t26_f11_FieldInfo = 
{
	"m_MoveVelocity", &t124_0_0_1, &t26_TI, offsetof(t26, f11), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t26_f12_FieldInfo = 
{
	"m_CurrentDist", &t124_0_0_1, &t26_TI, offsetof(t26, f12), &EmptyCustomAttributesCache};
extern Il2CppType t30_0_0_1;
FieldInfo t26_f13_FieldInfo = 
{
	"m_Ray", &t30_0_0_1, &t26_TI, offsetof(t26, f13), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_1;
FieldInfo t26_f14_FieldInfo = 
{
	"m_Hits", &t28_0_0_1, &t26_TI, offsetof(t26, f14), &EmptyCustomAttributesCache};
extern Il2CppType t24_0_0_1;
FieldInfo t26_f15_FieldInfo = 
{
	"m_RayHitComparer", &t24_0_0_1, &t26_TI, offsetof(t26, f15), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
extern CustomAttributesCache t26__CustomAttributeCache_U3CprotectingU3Ek__BackingField;
FieldInfo t26_f16_FieldInfo = 
{
	"<protecting>k__BackingField", &t125_0_0_1, &t26_TI, offsetof(t26, f16), &t26__CustomAttributeCache_U3CprotectingU3Ek__BackingField};
static FieldInfo* t26_FIs[] =
{
	&t26_f2_FieldInfo,
	&t26_f3_FieldInfo,
	&t26_f4_FieldInfo,
	&t26_f5_FieldInfo,
	&t26_f6_FieldInfo,
	&t26_f7_FieldInfo,
	&t26_f8_FieldInfo,
	&t26_f9_FieldInfo,
	&t26_f10_FieldInfo,
	&t26_f11_FieldInfo,
	&t26_f12_FieldInfo,
	&t26_f13_FieldInfo,
	&t26_f14_FieldInfo,
	&t26_f15_FieldInfo,
	&t26_f16_FieldInfo,
	NULL
};
extern MethodInfo m46_MI;
extern MethodInfo m47_MI;
static PropertyInfo t26____protecting_PropertyInfo = 
{
	&t26_TI, "protecting", &m46_MI, &m47_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t26_PIs[] =
{
	&t26____protecting_PropertyInfo,
	NULL
};
extern TypeInfo t26_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m45_MI = 
{
	".ctor", (methodPointerType)&m45, &t26_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 45, NULL, (methodPointerType)NULL};
extern TypeInfo t26_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t26__CustomAttributeCache_m46;
MethodInfo m46_MI = 
{
	"get_protecting", (methodPointerType)&m46, &t26_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t26__CustomAttributeCache_m46, 2182, 0, 255, 0, false, false, 46, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t26_m47_ParameterInfos[] = 
{
	{"value", 0, 134217739, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t26_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t26__CustomAttributeCache_m47;
MethodInfo m47_MI = 
{
	"set_protecting", (methodPointerType)&m47, &t26_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t26_m47_ParameterInfos, &t26__CustomAttributeCache_m47, 2177, 0, 255, 1, false, false, 47, NULL, (methodPointerType)NULL};
extern TypeInfo t26_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m48_MI = 
{
	"Start", (methodPointerType)&m48, &t26_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 48, NULL, (methodPointerType)NULL};
extern TypeInfo t26_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m49_MI = 
{
	"LateUpdate", (methodPointerType)&m49, &t26_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 49, NULL, (methodPointerType)NULL};
static MethodInfo* t26_MIs[] =
{
	&m45_MI,
	&m46_MI,
	&m47_MI,
	&m48_MI,
	&m49_MI,
	NULL
};
extern TypeInfo t24_TI;
static TypeInfo* t26_TI__nestedTypes[2] =
{
	&t24_TI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t26_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t152_TI;
#include "t152.h"
#include "t152MD.h"
extern MethodInfo m475_MI;
void t26_CustomAttributesCacheGenerator_U3CprotectingU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t26_CustomAttributesCacheGenerator_m46(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t26_CustomAttributesCacheGenerator_m47(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t26__CustomAttributeCache_U3CprotectingU3Ek__BackingField = {
1,
NULL,
&t26_CustomAttributesCacheGenerator_U3CprotectingU3Ek__BackingField
};
CustomAttributesCache t26__CustomAttributeCache_m46 = {
1,
NULL,
&t26_CustomAttributesCacheGenerator_m46
};
CustomAttributesCache t26__CustomAttributeCache_m47 = {
1,
NULL,
&t26_CustomAttributesCacheGenerator_m47
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t26_0_0_0;
extern Il2CppType t26_1_0_0;
extern TypeInfo t3_TI;
struct t26;
extern TypeInfo t26_TI;
extern CustomAttributesCache t26__CustomAttributeCache_U3CprotectingU3Ek__BackingField;
extern CustomAttributesCache t26__CustomAttributeCache_m46;
extern CustomAttributesCache t26__CustomAttributeCache_m47;
TypeInfo t26_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "ProtectCameraFromWallClip", "UnityStandardAssets.Cameras", t26_MIs, t26_PIs, t26_FIs, NULL, &t3_TI, t26_TI__nestedTypes, NULL, &t26_TI, NULL, t26_VT, &EmptyCustomAttributesCache, &t26_TI, &t26_0_0_0, &t26_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t26), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 5, 1, 15, 0, 1, 4, 0, 0};
#include "t31.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t31_TI;
#include "t31MD.h"

#include "t153.h"
#include "t154.h"
#include "t155.h"
#include "t156.h"
#include "t157.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo t31_TI;
extern TypeInfo t16_TI;
extern TypeInfo t123_TI;
extern TypeInfo t126_TI;
extern TypeInfo t2_TI;
extern TypeInfo t154_TI;
extern TypeInfo t155_TI;
extern TypeInfo t156_TI;
extern TypeInfo t157_TI;
extern TypeInfo t119_TI;
extern TypeInfo t124_TI;
extern TypeInfo t4_TI;
#include "t32MD.h"
#include "t153MD.h"
#include "t154MD.h"
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m54_MI;
extern MethodInfo m449_MI;
extern MethodInfo m335_MI;
extern MethodInfo m336_MI;
extern MethodInfo m337_MI;
extern MethodInfo m420_MI;
extern MethodInfo m423_MI;
extern MethodInfo m476_MI;
extern MethodInfo m422_MI;
extern MethodInfo m477_MI;
extern MethodInfo m26_MI;
extern MethodInfo m478_MI;
extern MethodInfo m479_MI;
extern MethodInfo m480_MI;
extern MethodInfo m481_MI;
extern MethodInfo m482_MI;
extern MethodInfo m449_MI;
struct t127;
struct t127;
 t158* m483_gshared (t127 * __this, MethodInfo* method);
#define m483(__this, method) (t158*)m483_gshared((t127 *)__this, method)
#define m478(__this, method) (t159*)m483_gshared((t127 *)__this, method)
extern MethodInfo m478_MI;


extern MethodInfo m50_MI;
 void m50 (t31 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m50_MI);
	{
		__this->f6 = (1.0f);
		__this->f7 = (2.0f);
		m20(__this, &m20_MI);
		return;
	}
}
extern MethodInfo m51_MI;
 void m51 (t31 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m51_MI);
	{
		m21(__this, &m21_MI);
		t2 * L_0 = (__this->f2);
		bool L_1 = (__this->f8);
		float L_2 = m54(NULL, L_0, L_1, &m54_MI);
		__this->f9 = L_2;
		t32 * L_3 = m449(__this, &m449_MI);
		__this->f11 = L_3;
		return;
	}
}
extern MethodInfo m52_MI;
 void m52 (t31 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m52_MI);
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	t4  V_2 = {0};
	{
		t2 * L_0 = (__this->f2);
		NullCheck(L_0);
		t4  L_1 = m335(L_0, &m335_MI);
		t2 * L_2 = m336(__this, &m336_MI);
		NullCheck(L_2);
		t4  L_3 = m335(L_2, &m335_MI);
		t4  L_4 = m337(NULL, L_1, L_3, &m337_MI);
		V_2 = L_4;
		float L_5 = m420((&V_2), &m420_MI);
		V_0 = L_5;
		float L_6 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_7 = atan2f(L_6, V_0);
		float L_8 = (__this->f7);
		V_1 = ((float)(((float)(L_7*(57.29578f)))*L_8));
		t32 * L_9 = (__this->f11);
		t32 * L_10 = (__this->f11);
		NullCheck(L_10);
		float L_11 = m476(L_10, &m476_MI);
		float* L_12 = &(__this->f10);
		float L_13 = (__this->f6);
		float L_14 = m422(NULL, L_11, V_1, L_12, L_13, &m422_MI);
		NullCheck(L_9);
		m477(L_9, L_14, &m477_MI);
		return;
	}
}
extern MethodInfo m53_MI;
 void m53 (t31 * __this, t2 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m53_MI);
	{
		m26(__this, p0, &m26_MI);
		bool L_0 = (__this->f8);
		float L_1 = m54(NULL, p0, L_0, &m54_MI);
		__this->f9 = L_1;
		return;
	}
}
extern MethodInfo m54_MI;
 float m54 (t25 * __this, t2 * p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m54_MI);
	t159* V_0 = {0};
	t154  V_1 = {0};
	bool V_2 = false;
	t153 * V_3 = {0};
	t159* V_4 = {0};
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	t4  V_7 = {0};
	t4  V_8 = {0};
	t4  V_9 = {0};
	{
		NullCheck(p0);
		t159* L_0 = m478(p0, &m478_MI);
		V_0 = L_0;
		Initobj (&t154_TI, (&V_1));
		V_2 = 0;
		V_4 = V_0;
		V_5 = 0;
		goto IL_006a;
	}

IL_001c:
	{
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, V_5);
		V_3 = (*(t153 **)(t153 **)SZArrayLdElema(V_4, V_5));
		if (((t155 *)IsInst(V_3, InitializedTypeInfo(&t155_TI))))
		{
			goto IL_0064;
		}
	}
	{
		if (((t156 *)IsInst(V_3, InitializedTypeInfo(&t156_TI))))
		{
			goto IL_0064;
		}
	}
	{
		if (((t157 *)IsInst(V_3, InitializedTypeInfo(&t157_TI))))
		{
			goto IL_0064;
		}
	}
	{
		if (V_2)
		{
			goto IL_0057;
		}
	}
	{
		V_2 = 1;
		NullCheck(V_3);
		t154  L_1 = m479(V_3, &m479_MI);
		V_1 = L_1;
		goto IL_0064;
	}

IL_0057:
	{
		NullCheck(V_3);
		t154  L_2 = m479(V_3, &m479_MI);
		m480((&V_1), L_2, &m480_MI);
	}

IL_0064:
	{
		V_5 = ((int32_t)(V_5+1));
	}

IL_006a:
	{
		NullCheck(V_4);
		if ((((int32_t)V_5) < ((int32_t)(((int32_t)(((t122 *)V_4)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		t119* L_3 = ((t119*)SZArrayNew(InitializedTypeInfo(&t119_TI), 3));
		t4  L_4 = m481((&V_1), &m481_MI);
		V_7 = L_4;
		NullCheck((&V_7));
		float L_5 = ((&V_7)->f1);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((float*)(float*)SZArrayLdElema(L_3, 0)) = (float)L_5;
		t119* L_6 = L_3;
		t4  L_7 = m481((&V_1), &m481_MI);
		V_8 = L_7;
		NullCheck((&V_8));
		float L_8 = ((&V_8)->f2);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		*((float*)(float*)SZArrayLdElema(L_6, 1)) = (float)L_8;
		t119* L_9 = L_6;
		t4  L_10 = m481((&V_1), &m481_MI);
		V_9 = L_10;
		NullCheck((&V_9));
		float L_11 = ((&V_9)->f3);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 2);
		*((float*)(float*)SZArrayLdElema(L_9, 2)) = (float)L_11;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_12 = m482(NULL, L_9, &m482_MI);
		V_6 = L_12;
		return V_6;
	}
}
// Metadata Definition UnityStandardAssets.Cameras.TargetFieldOfView
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t31__CustomAttributeCache_m_FovAdjustTime;
FieldInfo t31_f6_FieldInfo = 
{
	"m_FovAdjustTime", &t124_0_0_1, &t31_TI, offsetof(t31, f6), &t31__CustomAttributeCache_m_FovAdjustTime};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t31__CustomAttributeCache_m_ZoomAmountMultiplier;
FieldInfo t31_f7_FieldInfo = 
{
	"m_ZoomAmountMultiplier", &t124_0_0_1, &t31_TI, offsetof(t31, f7), &t31__CustomAttributeCache_m_ZoomAmountMultiplier};
extern Il2CppType t125_0_0_1;
extern CustomAttributesCache t31__CustomAttributeCache_m_IncludeEffectsInSize;
FieldInfo t31_f8_FieldInfo = 
{
	"m_IncludeEffectsInSize", &t125_0_0_1, &t31_TI, offsetof(t31, f8), &t31__CustomAttributeCache_m_IncludeEffectsInSize};
extern Il2CppType t124_0_0_1;
FieldInfo t31_f9_FieldInfo = 
{
	"m_BoundSize", &t124_0_0_1, &t31_TI, offsetof(t31, f9), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t31_f10_FieldInfo = 
{
	"m_FovAdjustVelocity", &t124_0_0_1, &t31_TI, offsetof(t31, f10), &EmptyCustomAttributesCache};
extern Il2CppType t32_0_0_1;
FieldInfo t31_f11_FieldInfo = 
{
	"m_Cam", &t32_0_0_1, &t31_TI, offsetof(t31, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t31_f12_FieldInfo = 
{
	"m_LastTarget", &t2_0_0_1, &t31_TI, offsetof(t31, f12), &EmptyCustomAttributesCache};
static FieldInfo* t31_FIs[] =
{
	&t31_f6_FieldInfo,
	&t31_f7_FieldInfo,
	&t31_f8_FieldInfo,
	&t31_f9_FieldInfo,
	&t31_f10_FieldInfo,
	&t31_f11_FieldInfo,
	&t31_f12_FieldInfo,
	NULL
};
extern TypeInfo t31_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m50_MI = 
{
	".ctor", (methodPointerType)&m50, &t31_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 52, NULL, (methodPointerType)NULL};
extern TypeInfo t31_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m51_MI = 
{
	"Start", (methodPointerType)&m51, &t31_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 196, 0, 4, 0, false, false, 53, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t31_m52_ParameterInfos[] = 
{
	{"deltaTime", 0, 134217742, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t31_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m52_MI = 
{
	"FollowTarget", (methodPointerType)&m52, &t31_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t31_m52_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 5, 1, false, false, 54, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t31_m53_ParameterInfos[] = 
{
	{"newTransform", 0, 134217743, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t31_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m53_MI = 
{
	"SetTarget", (methodPointerType)&m53, &t31_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t31_m53_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 55, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t31_m54_ParameterInfos[] = 
{
	{"obj", 0, 134217744, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"includeEffects", 1, 134217745, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t31_TI;
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m54_MI = 
{
	"MaxBoundsExtent", (methodPointerType)&m54, &t31_TI, &t124_0_0_0, RuntimeInvoker_t124_t25_t137, t31_m54_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 56, NULL, (methodPointerType)NULL};
static MethodInfo* t31_MIs[] =
{
	&m50_MI,
	&m51_MI,
	&m52_MI,
	&m53_MI,
	&m54_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
extern MethodInfo m51_MI;
extern MethodInfo m52_MI;
extern MethodInfo m53_MI;
static MethodInfo* t31_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
	&m51_MI,
	&m52_MI,
	&m53_MI,
};
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t31_CustomAttributesCacheGenerator_m_FovAdjustTime(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t31_CustomAttributesCacheGenerator_m_ZoomAmountMultiplier(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t31_CustomAttributesCacheGenerator_m_IncludeEffectsInSize(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t31__CustomAttributeCache_m_FovAdjustTime = {
1,
NULL,
&t31_CustomAttributesCacheGenerator_m_FovAdjustTime
};
CustomAttributesCache t31__CustomAttributeCache_m_ZoomAmountMultiplier = {
1,
NULL,
&t31_CustomAttributesCacheGenerator_m_ZoomAmountMultiplier
};
CustomAttributesCache t31__CustomAttributeCache_m_IncludeEffectsInSize = {
1,
NULL,
&t31_CustomAttributesCacheGenerator_m_IncludeEffectsInSize
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t31_0_0_0;
extern Il2CppType t31_1_0_0;
extern TypeInfo t16_TI;
struct t31;
extern TypeInfo t31_TI;
extern CustomAttributesCache t31__CustomAttributeCache_m_FovAdjustTime;
extern CustomAttributesCache t31__CustomAttributeCache_m_ZoomAmountMultiplier;
extern CustomAttributesCache t31__CustomAttributeCache_m_IncludeEffectsInSize;
TypeInfo t31_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "TargetFieldOfView", "UnityStandardAssets.Cameras", t31_MIs, NULL, t31_FIs, NULL, &t16_TI, NULL, NULL, &t31_TI, NULL, t31_VT, &EmptyCustomAttributesCache, &t31_TI, &t31_0_0_0, &t31_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t31), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 5, 0, 7, 0, 0, 7, 0, 0};
#include "t33.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t33_TI;
#include "t33MD.h"

#include "t34.h"
#include "Assembly-CSharp-firstpass_ArrayTypes.h"
#include "t35.h"
extern TypeInfo t33_TI;
extern TypeInfo t39_TI;
extern TypeInfo t34_TI;
extern TypeInfo t131_TI;
extern TypeInfo t160_TI;
extern TypeInfo t27_TI;
extern TypeInfo t126_TI;
#include "t34MD.h"
#include "t131MD.h"
extern Il2CppType t33_0_0_0;
extern MethodInfo m334_MI;
extern MethodInfo m93_MI;
extern MethodInfo m69_MI;
extern MethodInfo m95_MI;
extern MethodInfo m99_MI;
extern MethodInfo m57_MI;
extern MethodInfo m484_MI;
extern MethodInfo m485_MI;
extern MethodInfo m386_MI;
extern MethodInfo m371_MI;
extern MethodInfo m75_MI;
extern MethodInfo m411_MI;
extern MethodInfo m77_MI;
extern MethodInfo m345_MI;
extern MethodInfo m486_MI;
extern MethodInfo m76_MI;


extern MethodInfo m55_MI;
 void m55 (t33 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m55_MI);
	{
		__this->f2 = (t27*) &_stringLiteral3;
		__this->f3 = (1.0f);
		__this->f4 = (3.0f);
		__this->f5 = (3.0f);
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m56_MI;
 void m56 (t33 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m56_MI);
	{
		t27* L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		bool L_1 = m93(NULL, L_0, &m93_MI);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		t27* L_2 = (__this->f2);
		t34 * L_3 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m69(L_3, L_2, &m69_MI);
		__this->f7 = L_3;
		t34 * L_4 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m95(NULL, L_4, &m95_MI);
		goto IL_0042;
	}

IL_0031:
	{
		t27* L_5 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		t34 * L_6 = m99(NULL, L_5, &m99_MI);
		__this->f7 = L_6;
	}

IL_0042:
	{
		m57(__this, &m57_MI);
		return;
	}
}
extern MethodInfo m57_MI;
 void m57 (t33 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m57_MI);
	t160* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t33_0_0_0), &m484_MI);
		t161* L_1 = m485(NULL, L_0, &m485_MI);
		V_0 = ((t160*)IsInst(L_1, InitializedTypeInfo(&t160_TI)));
		if (!V_0)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = 0;
		goto IL_0055;
	}

IL_0022:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		NullCheck((*(t33 **)(t33 **)SZArrayLdElema(V_0, V_1)));
		t27* L_2 = ((*(t33 **)(t33 **)SZArrayLdElema(V_0, V_1))->f2);
		t27* L_3 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_4 = m386(NULL, L_2, L_3, &m386_MI);
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		bool L_5 = m371(NULL, (*(t33 **)(t33 **)SZArrayLdElema(V_0, V_1)), __this, &m371_MI);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		__this->f6 = (*(t33 **)(t33 **)SZArrayLdElema(V_0, V_1));
	}

IL_0051:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0055:
	{
		NullCheck(V_0);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t122 *)V_0)->max_length))))))
		{
			goto IL_0022;
		}
	}

IL_005e:
	{
		return;
	}
}
extern MethodInfo m58_MI;
 void m58 (t33 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m58_MI);
	{
		t34 * L_0 = (__this->f7);
		NullCheck(L_0);
		m75(L_0, &m75_MI);
		return;
	}
}
extern MethodInfo m59_MI;
 void m59 (t33 * __this, t35 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m59_MI);
	{
		t33 * L_0 = (__this->f6);
		bool L_1 = m411(NULL, L_0, (t60 *)NULL, &m411_MI);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		m57(__this, &m57_MI);
	}

IL_0017:
	{
		t34 * L_2 = (__this->f7);
		t34 * L_3 = (__this->f7);
		NullCheck(L_3);
		float L_4 = m77(L_3, &m77_MI);
		float L_5 = (__this->f3);
		float L_6 = (__this->f4);
		float L_7 = m345(NULL, &m345_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_8 = m486(NULL, L_4, L_5, ((float)(L_6*L_7)), &m486_MI);
		NullCheck(L_2);
		m76(L_2, L_8, &m76_MI);
		return;
	}
}
extern MethodInfo m60_MI;
 void m60 (t33 * __this, t35 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m60_MI);
	{
		t34 * L_0 = (__this->f7);
		t34 * L_1 = (__this->f7);
		NullCheck(L_1);
		float L_2 = m77(L_1, &m77_MI);
		float L_3 = (__this->f4);
		float L_4 = m345(NULL, &m345_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_5 = m486(NULL, L_2, (0.0f), ((float)(L_3*L_4)), &m486_MI);
		NullCheck(L_0);
		m76(L_0, L_5, &m76_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.CrossPlatformInput.AxisTouchButton
extern Il2CppType t27_0_0_6;
FieldInfo t33_f2_FieldInfo = 
{
	"axisName", &t27_0_0_6, &t33_TI, offsetof(t33, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t33_f3_FieldInfo = 
{
	"axisValue", &t124_0_0_6, &t33_TI, offsetof(t33, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t33_f4_FieldInfo = 
{
	"responseSpeed", &t124_0_0_6, &t33_TI, offsetof(t33, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t33_f5_FieldInfo = 
{
	"returnToCentreSpeed", &t124_0_0_6, &t33_TI, offsetof(t33, f5), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t33_f6_FieldInfo = 
{
	"m_PairedWith", &t33_0_0_1, &t33_TI, offsetof(t33, f6), &EmptyCustomAttributesCache};
extern Il2CppType t34_0_0_1;
FieldInfo t33_f7_FieldInfo = 
{
	"m_Axis", &t34_0_0_1, &t33_TI, offsetof(t33, f7), &EmptyCustomAttributesCache};
static FieldInfo* t33_FIs[] =
{
	&t33_f2_FieldInfo,
	&t33_f3_FieldInfo,
	&t33_f4_FieldInfo,
	&t33_f5_FieldInfo,
	&t33_f6_FieldInfo,
	&t33_f7_FieldInfo,
	NULL
};
extern TypeInfo t33_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m55_MI = 
{
	".ctor", (methodPointerType)&m55, &t33_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 57, NULL, (methodPointerType)NULL};
extern TypeInfo t33_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m56_MI = 
{
	"OnEnable", (methodPointerType)&m56, &t33_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 58, NULL, (methodPointerType)NULL};
extern TypeInfo t33_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m57_MI = 
{
	"FindPairedButton", (methodPointerType)&m57, &t33_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 59, NULL, (methodPointerType)NULL};
extern TypeInfo t33_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m58_MI = 
{
	"OnDisable", (methodPointerType)&m58, &t33_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 60, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t33_m59_ParameterInfos[] = 
{
	{"data", 0, 134217746, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t33_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m59_MI = 
{
	"OnPointerDown", (methodPointerType)&m59, &t33_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t33_m59_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, false, 61, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t33_m60_ParameterInfos[] = 
{
	{"data", 0, 134217747, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t33_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m60_MI = 
{
	"OnPointerUp", (methodPointerType)&m60, &t33_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t33_m60_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 1, false, false, 62, NULL, (methodPointerType)NULL};
static MethodInfo* t33_MIs[] =
{
	&m55_MI,
	&m56_MI,
	&m57_MI,
	&m58_MI,
	&m59_MI,
	&m60_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
extern MethodInfo m59_MI;
extern MethodInfo m60_MI;
static MethodInfo* t33_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
	&m59_MI,
	&m60_MI,
};
extern TypeInfo t162_TI;
extern TypeInfo t163_TI;
extern TypeInfo t164_TI;
static TypeInfo* t33_ITIs[] = 
{
	&t162_TI,
	&t163_TI,
	&t164_TI,
};
extern TypeInfo t162_TI;
extern TypeInfo t163_TI;
extern TypeInfo t164_TI;
static Il2CppInterfaceOffsetPair t33_IOs[] = 
{
	{ &t162_TI, 4},
	{ &t163_TI, 5},
	{ &t164_TI, 5},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t33_0_0_0;
extern Il2CppType t33_1_0_0;
extern TypeInfo t3_TI;
struct t33;
extern TypeInfo t33_TI;
TypeInfo t33_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "AxisTouchButton", "UnityStandardAssets.CrossPlatformInput", t33_MIs, NULL, t33_FIs, NULL, &t3_TI, NULL, NULL, &t33_TI, t33_ITIs, t33_VT, &EmptyCustomAttributesCache, &t33_TI, &t33_0_0_0, &t33_1_0_0, t33_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t33), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 0, 6, 0, 0, 6, 3, 3};
#include "t36.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t36_TI;
#include "t36MD.h"

extern TypeInfo t36_TI;
extern TypeInfo t39_TI;
extern MethodInfo m334_MI;
extern MethodInfo m106_MI;
extern MethodInfo m107_MI;
extern MethodInfo m108_MI;
extern MethodInfo m110_MI;
extern MethodInfo m109_MI;


extern MethodInfo m61_MI;
 void m61 (t36 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m61_MI);
	{
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m62_MI;
 void m62 (t36 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m62_MI);
	{
		return;
	}
}
extern MethodInfo m63_MI;
 void m63 (t36 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m63_MI);
	{
		t27* L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m106(NULL, L_0, &m106_MI);
		return;
	}
}
extern MethodInfo m64_MI;
 void m64 (t36 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m64_MI);
	{
		t27* L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m107(NULL, L_0, &m107_MI);
		return;
	}
}
extern MethodInfo m65_MI;
 void m65 (t36 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m65_MI);
	{
		t27* L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m108(NULL, L_0, &m108_MI);
		return;
	}
}
extern MethodInfo m66_MI;
 void m66 (t36 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m66_MI);
	{
		t27* L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m110(NULL, L_0, &m110_MI);
		return;
	}
}
extern MethodInfo m67_MI;
 void m67 (t36 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m67_MI);
	{
		t27* L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m109(NULL, L_0, &m109_MI);
		return;
	}
}
extern MethodInfo m68_MI;
 void m68 (t36 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m68_MI);
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.CrossPlatformInput.ButtonHandler
extern Il2CppType t27_0_0_6;
FieldInfo t36_f2_FieldInfo = 
{
	"Name", &t27_0_0_6, &t36_TI, offsetof(t36, f2), &EmptyCustomAttributesCache};
static FieldInfo* t36_FIs[] =
{
	&t36_f2_FieldInfo,
	NULL
};
extern TypeInfo t36_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m61_MI = 
{
	".ctor", (methodPointerType)&m61, &t36_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 63, NULL, (methodPointerType)NULL};
extern TypeInfo t36_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m62_MI = 
{
	"OnEnable", (methodPointerType)&m62, &t36_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 64, NULL, (methodPointerType)NULL};
extern TypeInfo t36_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m63_MI = 
{
	"SetDownState", (methodPointerType)&m63, &t36_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 65, NULL, (methodPointerType)NULL};
extern TypeInfo t36_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m64_MI = 
{
	"SetUpState", (methodPointerType)&m64, &t36_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 66, NULL, (methodPointerType)NULL};
extern TypeInfo t36_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m65_MI = 
{
	"SetAxisPositiveState", (methodPointerType)&m65, &t36_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 67, NULL, (methodPointerType)NULL};
extern TypeInfo t36_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m66_MI = 
{
	"SetAxisNeutralState", (methodPointerType)&m66, &t36_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 68, NULL, (methodPointerType)NULL};
extern TypeInfo t36_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m67_MI = 
{
	"SetAxisNegativeState", (methodPointerType)&m67, &t36_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 69, NULL, (methodPointerType)NULL};
extern TypeInfo t36_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m68_MI = 
{
	"Update", (methodPointerType)&m68, &t36_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 70, NULL, (methodPointerType)NULL};
static MethodInfo* t36_MIs[] =
{
	&m61_MI,
	&m62_MI,
	&m63_MI,
	&m64_MI,
	&m65_MI,
	&m66_MI,
	&m67_MI,
	&m68_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t36_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t36_0_0_0;
extern Il2CppType t36_1_0_0;
extern TypeInfo t3_TI;
struct t36;
extern TypeInfo t36_TI;
TypeInfo t36_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "ButtonHandler", "UnityStandardAssets.CrossPlatformInput", t36_MIs, NULL, t36_FIs, NULL, &t3_TI, NULL, NULL, &t36_TI, NULL, t36_VT, &EmptyCustomAttributesCache, &t36_TI, &t36_0_0_0, &t36_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t36), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 8, 0, 1, 0, 0, 4, 0, 0};
#include "t37.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t37_TI;
#include "t37MD.h"



// Metadata Definition UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
extern Il2CppType t134_0_0_1542;
FieldInfo t37_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t37_TI, offsetof(t37, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t37_0_0_32854;
FieldInfo t37_f2_FieldInfo = 
{
	"Hardware", &t37_0_0_32854, &t37_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t37_0_0_32854;
FieldInfo t37_f3_FieldInfo = 
{
	"Touch", &t37_0_0_32854, &t37_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t37_FIs[] =
{
	&t37_f1_FieldInfo,
	&t37_f2_FieldInfo,
	&t37_f3_FieldInfo,
	NULL
};
static const int32_t t37_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t37_f2_DefaultValue = 
{
	&t37_f2_FieldInfo, { (char*)&t37_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t37_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t37_f3_DefaultValue = 
{
	&t37_f3_FieldInfo, { (char*)&t37_f3_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t37_FDVs[] = 
{
	&t37_f2_DefaultValue,
	&t37_f3_DefaultValue,
	NULL
};
static MethodInfo* t37_MIs[] =
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
static MethodInfo* t37_VT[] =
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
static Il2CppInterfaceOffsetPair t37_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t37_0_0_0;
extern Il2CppType t37_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern TypeInfo t39_TI;
TypeInfo t37_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "ActiveInputMethod", "", t37_MIs, NULL, t37_FIs, NULL, &t15_TI, NULL, &t39_TI, &t134_TI, NULL, t37_VT, &EmptyCustomAttributesCache, &t134_TI, &t37_0_0_0, &t37_1_0_0, t37_IOs, NULL, NULL, t37_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t37)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 258, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t34_TI;

extern TypeInfo t34_TI;
extern TypeInfo t39_TI;
extern MethodInfo m70_MI;
extern MethodInfo m452_MI;
extern MethodInfo m72_MI;
extern MethodInfo m74_MI;
extern MethodInfo m71_MI;
extern MethodInfo m97_MI;


extern MethodInfo m69_MI;
 void m69 (t34 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m69_MI);
	{
		m70(__this, p0, 1, &m70_MI);
		return;
	}
}
extern MethodInfo m70_MI;
 void m70 (t34 * __this, t27* p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m70_MI);
	{
		m452(__this, &m452_MI);
		m72(__this, p0, &m72_MI);
		m74(__this, p1, &m74_MI);
		return;
	}
}
extern MethodInfo m71_MI;
 t27* m71 (t34 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m71_MI);
	{
		t27* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m72_MI;
 void m72 (t34 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m72_MI);
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m73_MI;
 bool m73 (t34 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m73_MI);
	{
		bool L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m74_MI;
 void m74 (t34 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m74_MI);
	{
		__this->f2 = p0;
		return;
	}
}
extern MethodInfo m75_MI;
 void m75 (t34 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m75_MI);
	{
		t27* L_0 = m71(__this, &m71_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m97(NULL, L_0, &m97_MI);
		return;
	}
}
extern MethodInfo m76_MI;
 void m76 (t34 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m76_MI);
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m77_MI;
 float m77 (t34 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m77_MI);
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m78_MI;
 float m78 (t34 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m78_MI);
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
// Metadata Definition UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
extern Il2CppType t124_0_0_1;
FieldInfo t34_f0_FieldInfo = 
{
	"m_Value", &t124_0_0_1, &t34_TI, offsetof(t34, f0), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
extern CustomAttributesCache t34__CustomAttributeCache_U3CnameU3Ek__BackingField;
FieldInfo t34_f1_FieldInfo = 
{
	"<name>k__BackingField", &t27_0_0_1, &t34_TI, offsetof(t34, f1), &t34__CustomAttributeCache_U3CnameU3Ek__BackingField};
extern Il2CppType t125_0_0_1;
extern CustomAttributesCache t34__CustomAttributeCache_U3CmatchWithInputManagerU3Ek__BackingField;
FieldInfo t34_f2_FieldInfo = 
{
	"<matchWithInputManager>k__BackingField", &t125_0_0_1, &t34_TI, offsetof(t34, f2), &t34__CustomAttributeCache_U3CmatchWithInputManagerU3Ek__BackingField};
static FieldInfo* t34_FIs[] =
{
	&t34_f0_FieldInfo,
	&t34_f1_FieldInfo,
	&t34_f2_FieldInfo,
	NULL
};
extern MethodInfo m71_MI;
extern MethodInfo m72_MI;
static PropertyInfo t34____name_PropertyInfo = 
{
	&t34_TI, "name", &m71_MI, &m72_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m73_MI;
extern MethodInfo m74_MI;
static PropertyInfo t34____matchWithInputManager_PropertyInfo = 
{
	&t34_TI, "matchWithInputManager", &m73_MI, &m74_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m77_MI;
static PropertyInfo t34____GetValue_PropertyInfo = 
{
	&t34_TI, "GetValue", &m77_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m78_MI;
static PropertyInfo t34____GetValueRaw_PropertyInfo = 
{
	&t34_TI, "GetValueRaw", &m78_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t34_PIs[] =
{
	&t34____name_PropertyInfo,
	&t34____matchWithInputManager_PropertyInfo,
	&t34____GetValue_PropertyInfo,
	&t34____GetValueRaw_PropertyInfo,
	NULL
};
extern Il2CppType t27_0_0_0;
static ParameterInfo t34_m69_ParameterInfos[] = 
{
	{"name", 0, 134217773, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t34_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m69_MI = 
{
	".ctor", (methodPointerType)&m69, &t34_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t34_m69_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 96, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t34_m70_ParameterInfos[] = 
{
	{"name", 0, 134217774, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"matchToInputSettings", 1, 134217775, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t34_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m70_MI = 
{
	".ctor", (methodPointerType)&m70, &t34_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t137, t34_m70_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 97, NULL, (methodPointerType)NULL};
extern TypeInfo t34_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m71;
MethodInfo m71_MI = 
{
	"get_name", (methodPointerType)&m71, &t34_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &t34__CustomAttributeCache_m71, 2182, 0, 255, 0, false, false, 98, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t34_m72_ParameterInfos[] = 
{
	{"value", 0, 134217776, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t34_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m72;
MethodInfo m72_MI = 
{
	"set_name", (methodPointerType)&m72, &t34_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t34_m72_ParameterInfos, &t34__CustomAttributeCache_m72, 2177, 0, 255, 1, false, false, 99, NULL, (methodPointerType)NULL};
extern TypeInfo t34_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m73;
MethodInfo m73_MI = 
{
	"get_matchWithInputManager", (methodPointerType)&m73, &t34_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t34__CustomAttributeCache_m73, 2182, 0, 255, 0, false, false, 100, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t34_m74_ParameterInfos[] = 
{
	{"value", 0, 134217777, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t34_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m74;
MethodInfo m74_MI = 
{
	"set_matchWithInputManager", (methodPointerType)&m74, &t34_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t34_m74_ParameterInfos, &t34__CustomAttributeCache_m74, 2177, 0, 255, 1, false, false, 101, NULL, (methodPointerType)NULL};
extern TypeInfo t34_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m75_MI = 
{
	"Remove", (methodPointerType)&m75, &t34_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 102, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t34_m76_ParameterInfos[] = 
{
	{"value", 0, 134217778, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t34_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m76_MI = 
{
	"Update", (methodPointerType)&m76, &t34_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t34_m76_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 103, NULL, (methodPointerType)NULL};
extern TypeInfo t34_TI;
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m77_MI = 
{
	"get_GetValue", (methodPointerType)&m77, &t34_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 104, NULL, (methodPointerType)NULL};
extern TypeInfo t34_TI;
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m78_MI = 
{
	"get_GetValueRaw", (methodPointerType)&m78, &t34_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 105, NULL, (methodPointerType)NULL};
static MethodInfo* t34_MIs[] =
{
	&m69_MI,
	&m70_MI,
	&m71_MI,
	&m72_MI,
	&m73_MI,
	&m74_MI,
	&m75_MI,
	&m76_MI,
	&m77_MI,
	&m78_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t34_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t34_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t34_CustomAttributesCacheGenerator_U3CmatchWithInputManagerU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t34_CustomAttributesCacheGenerator_m71(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t34_CustomAttributesCacheGenerator_m72(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t34_CustomAttributesCacheGenerator_m73(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t34_CustomAttributesCacheGenerator_m74(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t34__CustomAttributeCache_U3CnameU3Ek__BackingField = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField
};
CustomAttributesCache t34__CustomAttributeCache_U3CmatchWithInputManagerU3Ek__BackingField = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_U3CmatchWithInputManagerU3Ek__BackingField
};
CustomAttributesCache t34__CustomAttributeCache_m71 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m71
};
CustomAttributesCache t34__CustomAttributeCache_m72 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m72
};
CustomAttributesCache t34__CustomAttributeCache_m73 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m73
};
CustomAttributesCache t34__CustomAttributeCache_m74 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m74
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t34_0_0_0;
extern Il2CppType t34_1_0_0;
extern TypeInfo t25_TI;
struct t34;
extern TypeInfo t34_TI;
extern TypeInfo t39_TI;
extern CustomAttributesCache t34__CustomAttributeCache_U3CnameU3Ek__BackingField;
extern CustomAttributesCache t34__CustomAttributeCache_U3CmatchWithInputManagerU3Ek__BackingField;
extern CustomAttributesCache t34__CustomAttributeCache_m71;
extern CustomAttributesCache t34__CustomAttributeCache_m72;
extern CustomAttributesCache t34__CustomAttributeCache_m73;
extern CustomAttributesCache t34__CustomAttributeCache_m74;
TypeInfo t34_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "VirtualAxis", "", t34_MIs, t34_PIs, t34_FIs, NULL, &t25_TI, NULL, &t39_TI, &t34_TI, NULL, t34_VT, &EmptyCustomAttributesCache, &t34_TI, &t34_0_0_0, &t34_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t34), 0, -1, 0, 0, -1, 1048578, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 10, 4, 3, 0, 0, 4, 0, 0};
#include "t38.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t38_TI;
#include "t38MD.h"

extern TypeInfo t38_TI;
extern TypeInfo t39_TI;
extern MethodInfo m487_MI;
extern MethodInfo m80_MI;
extern MethodInfo m452_MI;
extern MethodInfo m82_MI;
extern MethodInfo m84_MI;
extern MethodInfo m81_MI;
extern MethodInfo m98_MI;


extern MethodInfo m79_MI;
 void m79 (t38 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m79_MI);
	{
		m80(__this, p0, 1, &m80_MI);
		return;
	}
}
extern MethodInfo m80_MI;
 void m80 (t38 * __this, t27* p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m80_MI);
	{
		__this->f0 = ((int32_t)-5);
		__this->f1 = ((int32_t)-5);
		m452(__this, &m452_MI);
		m82(__this, p0, &m82_MI);
		m84(__this, p1, &m84_MI);
		return;
	}
}
extern MethodInfo m81_MI;
 t27* m81 (t38 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m81_MI);
	{
		t27* L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m82_MI;
 void m82 (t38 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m82_MI);
	{
		__this->f3 = p0;
		return;
	}
}
extern MethodInfo m83_MI;
 bool m83 (t38 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m83_MI);
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m84_MI;
 void m84 (t38 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m84_MI);
	{
		__this->f4 = p0;
		return;
	}
}
extern MethodInfo m85_MI;
 void m85 (t38 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m85_MI);
	{
		bool L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->f2 = 1;
		int32_t L_1 = m487(NULL, &m487_MI);
		__this->f0 = L_1;
		return;
	}
}
extern MethodInfo m86_MI;
 void m86 (t38 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m86_MI);
	{
		__this->f2 = 0;
		int32_t L_0 = m487(NULL, &m487_MI);
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m87_MI;
 void m87 (t38 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m87_MI);
	{
		t27* L_0 = m81(__this, &m81_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m98(NULL, L_0, &m98_MI);
		return;
	}
}
extern MethodInfo m88_MI;
 bool m88 (t38 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m88_MI);
	{
		bool L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m89_MI;
 bool m89 (t38 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m89_MI);
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = m487(NULL, &m487_MI);
		return ((((int32_t)((int32_t)(L_0-L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
extern MethodInfo m90_MI;
 bool m90 (t38 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m90_MI);
	{
		int32_t L_0 = (__this->f1);
		int32_t L_1 = m487(NULL, &m487_MI);
		return ((((int32_t)L_0) == ((int32_t)((int32_t)(L_1-1))))? 1 : 0);
	}
}
// Metadata Definition UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
extern Il2CppType t134_0_0_1;
FieldInfo t38_f0_FieldInfo = 
{
	"m_LastPressedFrame", &t134_0_0_1, &t38_TI, offsetof(t38, f0), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t38_f1_FieldInfo = 
{
	"m_ReleasedFrame", &t134_0_0_1, &t38_TI, offsetof(t38, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t38_f2_FieldInfo = 
{
	"m_Pressed", &t125_0_0_1, &t38_TI, offsetof(t38, f2), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
extern CustomAttributesCache t38__CustomAttributeCache_U3CnameU3Ek__BackingField;
FieldInfo t38_f3_FieldInfo = 
{
	"<name>k__BackingField", &t27_0_0_1, &t38_TI, offsetof(t38, f3), &t38__CustomAttributeCache_U3CnameU3Ek__BackingField};
extern Il2CppType t125_0_0_1;
extern CustomAttributesCache t38__CustomAttributeCache_U3CmatchWithInputManagerU3Ek__BackingField;
FieldInfo t38_f4_FieldInfo = 
{
	"<matchWithInputManager>k__BackingField", &t125_0_0_1, &t38_TI, offsetof(t38, f4), &t38__CustomAttributeCache_U3CmatchWithInputManagerU3Ek__BackingField};
static FieldInfo* t38_FIs[] =
{
	&t38_f0_FieldInfo,
	&t38_f1_FieldInfo,
	&t38_f2_FieldInfo,
	&t38_f3_FieldInfo,
	&t38_f4_FieldInfo,
	NULL
};
extern MethodInfo m81_MI;
extern MethodInfo m82_MI;
static PropertyInfo t38____name_PropertyInfo = 
{
	&t38_TI, "name", &m81_MI, &m82_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m83_MI;
extern MethodInfo m84_MI;
static PropertyInfo t38____matchWithInputManager_PropertyInfo = 
{
	&t38_TI, "matchWithInputManager", &m83_MI, &m84_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m88_MI;
static PropertyInfo t38____GetButton_PropertyInfo = 
{
	&t38_TI, "GetButton", &m88_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m89_MI;
static PropertyInfo t38____GetButtonDown_PropertyInfo = 
{
	&t38_TI, "GetButtonDown", &m89_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m90_MI;
static PropertyInfo t38____GetButtonUp_PropertyInfo = 
{
	&t38_TI, "GetButtonUp", &m90_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t38_PIs[] =
{
	&t38____name_PropertyInfo,
	&t38____matchWithInputManager_PropertyInfo,
	&t38____GetButton_PropertyInfo,
	&t38____GetButtonDown_PropertyInfo,
	&t38____GetButtonUp_PropertyInfo,
	NULL
};
extern Il2CppType t27_0_0_0;
static ParameterInfo t38_m79_ParameterInfos[] = 
{
	{"name", 0, 134217779, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t38_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m79_MI = 
{
	".ctor", (methodPointerType)&m79, &t38_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t38_m79_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 106, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t38_m80_ParameterInfos[] = 
{
	{"name", 0, 134217780, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"matchToInputSettings", 1, 134217781, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t38_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m80_MI = 
{
	".ctor", (methodPointerType)&m80, &t38_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t137, t38_m80_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 107, NULL, (methodPointerType)NULL};
extern TypeInfo t38_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t38__CustomAttributeCache_m81;
MethodInfo m81_MI = 
{
	"get_name", (methodPointerType)&m81, &t38_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &t38__CustomAttributeCache_m81, 2182, 0, 255, 0, false, false, 108, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t38_m82_ParameterInfos[] = 
{
	{"value", 0, 134217782, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t38_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t38__CustomAttributeCache_m82;
MethodInfo m82_MI = 
{
	"set_name", (methodPointerType)&m82, &t38_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t38_m82_ParameterInfos, &t38__CustomAttributeCache_m82, 2177, 0, 255, 1, false, false, 109, NULL, (methodPointerType)NULL};
extern TypeInfo t38_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t38__CustomAttributeCache_m83;
MethodInfo m83_MI = 
{
	"get_matchWithInputManager", (methodPointerType)&m83, &t38_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t38__CustomAttributeCache_m83, 2182, 0, 255, 0, false, false, 110, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t38_m84_ParameterInfos[] = 
{
	{"value", 0, 134217783, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t38_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t38__CustomAttributeCache_m84;
MethodInfo m84_MI = 
{
	"set_matchWithInputManager", (methodPointerType)&m84, &t38_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t38_m84_ParameterInfos, &t38__CustomAttributeCache_m84, 2177, 0, 255, 1, false, false, 111, NULL, (methodPointerType)NULL};
extern TypeInfo t38_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m85_MI = 
{
	"Pressed", (methodPointerType)&m85, &t38_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 112, NULL, (methodPointerType)NULL};
extern TypeInfo t38_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m86_MI = 
{
	"Released", (methodPointerType)&m86, &t38_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 113, NULL, (methodPointerType)NULL};
extern TypeInfo t38_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m87_MI = 
{
	"Remove", (methodPointerType)&m87, &t38_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 114, NULL, (methodPointerType)NULL};
extern TypeInfo t38_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m88_MI = 
{
	"get_GetButton", (methodPointerType)&m88, &t38_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 115, NULL, (methodPointerType)NULL};
extern TypeInfo t38_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m89_MI = 
{
	"get_GetButtonDown", (methodPointerType)&m89, &t38_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 116, NULL, (methodPointerType)NULL};
extern TypeInfo t38_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m90_MI = 
{
	"get_GetButtonUp", (methodPointerType)&m90, &t38_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 117, NULL, (methodPointerType)NULL};
static MethodInfo* t38_MIs[] =
{
	&m79_MI,
	&m80_MI,
	&m81_MI,
	&m82_MI,
	&m83_MI,
	&m84_MI,
	&m85_MI,
	&m86_MI,
	&m87_MI,
	&m88_MI,
	&m89_MI,
	&m90_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t38_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t38_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t38_CustomAttributesCacheGenerator_U3CmatchWithInputManagerU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t38_CustomAttributesCacheGenerator_m81(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t38_CustomAttributesCacheGenerator_m82(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t38_CustomAttributesCacheGenerator_m83(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t38_CustomAttributesCacheGenerator_m84(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t38__CustomAttributeCache_U3CnameU3Ek__BackingField = {
1,
NULL,
&t38_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField
};
CustomAttributesCache t38__CustomAttributeCache_U3CmatchWithInputManagerU3Ek__BackingField = {
1,
NULL,
&t38_CustomAttributesCacheGenerator_U3CmatchWithInputManagerU3Ek__BackingField
};
CustomAttributesCache t38__CustomAttributeCache_m81 = {
1,
NULL,
&t38_CustomAttributesCacheGenerator_m81
};
CustomAttributesCache t38__CustomAttributeCache_m82 = {
1,
NULL,
&t38_CustomAttributesCacheGenerator_m82
};
CustomAttributesCache t38__CustomAttributeCache_m83 = {
1,
NULL,
&t38_CustomAttributesCacheGenerator_m83
};
CustomAttributesCache t38__CustomAttributeCache_m84 = {
1,
NULL,
&t38_CustomAttributesCacheGenerator_m84
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t38_0_0_0;
extern Il2CppType t38_1_0_0;
extern TypeInfo t25_TI;
struct t38;
extern TypeInfo t38_TI;
extern TypeInfo t39_TI;
extern CustomAttributesCache t38__CustomAttributeCache_U3CnameU3Ek__BackingField;
extern CustomAttributesCache t38__CustomAttributeCache_U3CmatchWithInputManagerU3Ek__BackingField;
extern CustomAttributesCache t38__CustomAttributeCache_m81;
extern CustomAttributesCache t38__CustomAttributeCache_m82;
extern CustomAttributesCache t38__CustomAttributeCache_m83;
extern CustomAttributesCache t38__CustomAttributeCache_m84;
TypeInfo t38_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "VirtualButton", "", t38_MIs, t38_PIs, t38_FIs, NULL, &t25_TI, NULL, &t39_TI, &t38_TI, NULL, t38_VT, &EmptyCustomAttributesCache, &t38_TI, &t38_0_0_0, &t38_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t38), 0, -1, 0, 0, -1, 1048578, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 12, 5, 5, 0, 0, 4, 0, 0};
#include "t39.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t39_TI;

#include "t40.h"
#include "t45.h"
#include "t46.h"
#include "t165.h"
extern TypeInfo t39_TI;
extern TypeInfo t40_TI;
extern TypeInfo t4_TI;
extern TypeInfo t45_TI;
extern TypeInfo t46_TI;
extern TypeInfo t165_TI;
extern TypeInfo t124_TI;
extern TypeInfo t27_TI;
extern TypeInfo t125_TI;
extern TypeInfo t123_TI;
#include "t40MD.h"
#include "t45MD.h"
#include "t46MD.h"
#include "t165MD.h"
extern MethodInfo m488_MI;
extern MethodInfo m131_MI;
extern MethodInfo m145_MI;
extern MethodInfo m173_MI;
extern MethodInfo m174_MI;
extern MethodInfo m175_MI;
extern MethodInfo m176_MI;
extern MethodInfo m489_MI;
extern MethodInfo m177_MI;
extern MethodInfo m178_MI;
extern MethodInfo m179_MI;
extern MethodInfo m102_MI;
extern MethodInfo m490_MI;
extern MethodInfo m491_MI;
extern MethodInfo m492_MI;
extern MethodInfo m493_MI;
extern MethodInfo m494_MI;
extern MethodInfo m495_MI;
extern MethodInfo m496_MI;
extern MethodInfo m497_MI;
extern MethodInfo m498_MI;
extern MethodInfo m499_MI;
extern MethodInfo m180_MI;
extern MethodInfo m181_MI;
extern MethodInfo m182_MI;


extern MethodInfo m91_MI;
 void m91 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m91_MI);
	{
		t45 * L_0 = (t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t45_TI));
		m131(L_0, &m131_MI);
		((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f1 = L_0;
		t46 * L_1 = (t46 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t46_TI));
		m145(L_1, &m145_MI);
		((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f2 = L_1;
		((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0 = (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f2);
		return;
	}
}
extern MethodInfo m92_MI;
 void m92 (t25 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m92_MI);
	int32_t V_0 = {0};
	{
		V_0 = p0;
		if (!V_0)
		{
			goto IL_0014;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0032;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0 = (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f2);
		goto IL_0032;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0 = (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f1);
		goto IL_0032;
	}

IL_0032:
	{
		return;
	}
}
extern MethodInfo m93_MI;
 bool m93 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m93_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		bool L_0 = m173((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0, &m173_MI);
		return L_0;
	}
}
extern MethodInfo m94_MI;
 bool m94 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m94_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		bool L_0 = m174((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0, &m174_MI);
		return L_0;
	}
}
extern MethodInfo m95_MI;
 void m95 (t25 * __this, t34 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m95_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		m175((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0, &m175_MI);
		return;
	}
}
extern MethodInfo m96_MI;
 void m96 (t25 * __this, t38 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m96_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		m176((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0, &m176_MI);
		return;
	}
}
extern MethodInfo m97_MI;
 void m97 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m97_MI);
	{
		if (p0)
		{
			goto IL_0011;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral12, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		m177((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0, &m177_MI);
		return;
	}
}
extern MethodInfo m98_MI;
 void m98 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m98_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		m178((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0, &m178_MI);
		return;
	}
}
extern MethodInfo m99_MI;
 t34 * m99 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m99_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		t34 * L_0 = m179((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0, &m179_MI);
		return L_0;
	}
}
extern MethodInfo m100_MI;
 float m100 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m100_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		float L_0 = m102(NULL, p0, 0, &m102_MI);
		return L_0;
	}
}
extern MethodInfo m101_MI;
 float m101 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m101_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		float L_0 = m102(NULL, p0, 1, &m102_MI);
		return L_0;
	}
}
extern MethodInfo m102_MI;
 float m102 (t25 * __this, t27* p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m102_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		float L_0 = (float)VirtFuncInvoker2< float, t27*, bool >::Invoke(&m490_MI, (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0, p1);
		return L_0;
	}
}
extern MethodInfo m103_MI;
 bool m103 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m103_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		bool L_0 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m491_MI, (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0);
		return L_0;
	}
}
extern MethodInfo m104_MI;
 bool m104 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m104_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		bool L_0 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m492_MI, (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0);
		return L_0;
	}
}
extern MethodInfo m105_MI;
 bool m105 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m105_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		bool L_0 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m493_MI, (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0);
		return L_0;
	}
}
extern MethodInfo m106_MI;
 void m106 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m106_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		VirtActionInvoker1< t27* >::Invoke(&m494_MI, (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0);
		return;
	}
}
extern MethodInfo m107_MI;
 void m107 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m107_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		VirtActionInvoker1< t27* >::Invoke(&m495_MI, (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0);
		return;
	}
}
extern MethodInfo m108_MI;
 void m108 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m108_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		VirtActionInvoker1< t27* >::Invoke(&m496_MI, (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0);
		return;
	}
}
extern MethodInfo m109_MI;
 void m109 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m109_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		VirtActionInvoker1< t27* >::Invoke(&m497_MI, (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0);
		return;
	}
}
extern MethodInfo m110_MI;
 void m110 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m110_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		VirtActionInvoker1< t27* >::Invoke(&m498_MI, (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0);
		return;
	}
}
extern MethodInfo m111_MI;
 void m111 (t25 * __this, t27* p0, float p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m111_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		VirtActionInvoker2< t27*, float >::Invoke(&m499_MI, (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0, p1);
		return;
	}
}
extern MethodInfo m112_MI;
 t4  m112 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m112_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		t4  L_0 = (t4 )VirtFuncInvoker0< t4  >::Invoke(&m488_MI, (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		return L_0;
	}
}
extern MethodInfo m113_MI;
 void m113 (t25 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m113_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		m180((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0, &m180_MI);
		return;
	}
}
extern MethodInfo m114_MI;
 void m114 (t25 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m114_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		m181((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0, &m181_MI);
		return;
	}
}
extern MethodInfo m115_MI;
 void m115 (t25 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m115_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		NullCheck((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0));
		m182((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0, &m182_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
extern Il2CppType t40_0_0_17;
FieldInfo t39_f0_FieldInfo = 
{
	"activeInput", &t40_0_0_17, &t39_TI, offsetof(t39_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t40_0_0_17;
FieldInfo t39_f1_FieldInfo = 
{
	"s_TouchInput", &t40_0_0_17, &t39_TI, offsetof(t39_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t40_0_0_17;
FieldInfo t39_f2_FieldInfo = 
{
	"s_HardwareInput", &t40_0_0_17, &t39_TI, offsetof(t39_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t39_FIs[] =
{
	&t39_f0_FieldInfo,
	&t39_f1_FieldInfo,
	&t39_f2_FieldInfo,
	NULL
};
extern MethodInfo m112_MI;
static PropertyInfo t39____mousePosition_PropertyInfo = 
{
	&t39_TI, "mousePosition", &m112_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t39_PIs[] =
{
	&t39____mousePosition_PropertyInfo,
	NULL
};
extern TypeInfo t39_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m91_MI = 
{
	".cctor", (methodPointerType)&m91, &t39_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 71, NULL, (methodPointerType)NULL};
extern Il2CppType t37_0_0_0;
static ParameterInfo t39_m92_ParameterInfos[] = 
{
	{"activeInputMethod", 0, 134217748, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m92_MI = 
{
	"SwitchActiveInputMethod", (methodPointerType)&m92, &t39_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t39_m92_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 72, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t39_m93_ParameterInfos[] = 
{
	{"name", 0, 134217749, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m93_MI = 
{
	"AxisExists", (methodPointerType)&m93, &t39_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t39_m93_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 73, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t39_m94_ParameterInfos[] = 
{
	{"name", 0, 134217750, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m94_MI = 
{
	"ButtonExists", (methodPointerType)&m94, &t39_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t39_m94_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 74, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t39_m95_ParameterInfos[] = 
{
	{"axis", 0, 134217751, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m95_MI = 
{
	"RegisterVirtualAxis", (methodPointerType)&m95, &t39_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t39_m95_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 75, NULL, (methodPointerType)NULL};
extern Il2CppType t38_0_0_0;
static ParameterInfo t39_m96_ParameterInfos[] = 
{
	{"button", 0, 134217752, &EmptyCustomAttributesCache, &t38_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m96_MI = 
{
	"RegisterVirtualButton", (methodPointerType)&m96, &t39_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t39_m96_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 76, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t39_m97_ParameterInfos[] = 
{
	{"name", 0, 134217753, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m97_MI = 
{
	"UnRegisterVirtualAxis", (methodPointerType)&m97, &t39_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t39_m97_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 77, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t39_m98_ParameterInfos[] = 
{
	{"name", 0, 134217754, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m98_MI = 
{
	"UnRegisterVirtualButton", (methodPointerType)&m98, &t39_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t39_m98_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 78, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t39_m99_ParameterInfos[] = 
{
	{"name", 0, 134217755, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m99_MI = 
{
	"VirtualAxisReference", (methodPointerType)&m99, &t39_TI, &t34_0_0_0, RuntimeInvoker_t25_t25, t39_m99_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 79, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t39_m100_ParameterInfos[] = 
{
	{"name", 0, 134217756, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m100_MI = 
{
	"GetAxis", (methodPointerType)&m100, &t39_TI, &t124_0_0_0, RuntimeInvoker_t124_t25, t39_m100_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 80, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t39_m101_ParameterInfos[] = 
{
	{"name", 0, 134217757, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m101_MI = 
{
	"GetAxisRaw", (methodPointerType)&m101, &t39_TI, &t124_0_0_0, RuntimeInvoker_t124_t25, t39_m101_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 81, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t39_m102_ParameterInfos[] = 
{
	{"name", 0, 134217758, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"raw", 1, 134217759, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m102_MI = 
{
	"GetAxis", (methodPointerType)&m102, &t39_TI, &t124_0_0_0, RuntimeInvoker_t124_t25_t137, t39_m102_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 82, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t39_m103_ParameterInfos[] = 
{
	{"name", 0, 134217760, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m103_MI = 
{
	"GetButton", (methodPointerType)&m103, &t39_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t39_m103_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 83, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t39_m104_ParameterInfos[] = 
{
	{"name", 0, 134217761, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m104_MI = 
{
	"GetButtonDown", (methodPointerType)&m104, &t39_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t39_m104_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 84, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t39_m105_ParameterInfos[] = 
{
	{"name", 0, 134217762, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m105_MI = 
{
	"GetButtonUp", (methodPointerType)&m105, &t39_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t39_m105_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 85, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t39_m106_ParameterInfos[] = 
{
	{"name", 0, 134217763, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m106_MI = 
{
	"SetButtonDown", (methodPointerType)&m106, &t39_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t39_m106_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 86, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t39_m107_ParameterInfos[] = 
{
	{"name", 0, 134217764, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m107_MI = 
{
	"SetButtonUp", (methodPointerType)&m107, &t39_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t39_m107_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 87, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t39_m108_ParameterInfos[] = 
{
	{"name", 0, 134217765, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m108_MI = 
{
	"SetAxisPositive", (methodPointerType)&m108, &t39_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t39_m108_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 88, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t39_m109_ParameterInfos[] = 
{
	{"name", 0, 134217766, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m109_MI = 
{
	"SetAxisNegative", (methodPointerType)&m109, &t39_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t39_m109_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 89, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t39_m110_ParameterInfos[] = 
{
	{"name", 0, 134217767, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m110_MI = 
{
	"SetAxisZero", (methodPointerType)&m110, &t39_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t39_m110_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 90, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t39_m111_ParameterInfos[] = 
{
	{"name", 0, 134217768, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134217769, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m111_MI = 
{
	"SetAxis", (methodPointerType)&m111, &t39_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t124, t39_m111_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 91, NULL, (methodPointerType)NULL};
extern TypeInfo t39_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m112_MI = 
{
	"get_mousePosition", (methodPointerType)&m112, &t39_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 92, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t39_m113_ParameterInfos[] = 
{
	{"f", 0, 134217770, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m113_MI = 
{
	"SetVirtualMousePositionX", (methodPointerType)&m113, &t39_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t39_m113_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 93, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t39_m114_ParameterInfos[] = 
{
	{"f", 0, 134217771, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m114_MI = 
{
	"SetVirtualMousePositionY", (methodPointerType)&m114, &t39_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t39_m114_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 94, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t39_m115_ParameterInfos[] = 
{
	{"f", 0, 134217772, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t39_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m115_MI = 
{
	"SetVirtualMousePositionZ", (methodPointerType)&m115, &t39_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t39_m115_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 95, NULL, (methodPointerType)NULL};
static MethodInfo* t39_MIs[] =
{
	&m91_MI,
	&m92_MI,
	&m93_MI,
	&m94_MI,
	&m95_MI,
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
	&m100_MI,
	&m101_MI,
	&m102_MI,
	&m103_MI,
	&m104_MI,
	&m105_MI,
	&m106_MI,
	&m107_MI,
	&m108_MI,
	&m109_MI,
	&m110_MI,
	&m111_MI,
	&m112_MI,
	&m113_MI,
	&m114_MI,
	&m115_MI,
	NULL
};
extern TypeInfo t37_TI;
extern TypeInfo t34_TI;
extern TypeInfo t38_TI;
static TypeInfo* t39_TI__nestedTypes[4] =
{
	&t37_TI,
	&t34_TI,
	&t38_TI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t39_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t39_0_0_0;
extern Il2CppType t39_1_0_0;
extern TypeInfo t25_TI;
struct t39;
extern TypeInfo t39_TI;
TypeInfo t39_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "CrossPlatformInputManager", "UnityStandardAssets.CrossPlatformInput", t39_MIs, t39_PIs, t39_FIs, NULL, &t25_TI, t39_TI__nestedTypes, NULL, &t39_TI, NULL, t39_VT, &EmptyCustomAttributesCache, &t39_TI, &t39_0_0_0, &t39_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t39), 0, -1, sizeof(t39_SFs), 0, -1, 385, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 25, 1, 3, 0, 3, 4, 0, 0};
#include "t41.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t41_TI;
#include "t41MD.h"

extern TypeInfo t41_TI;
extern TypeInfo t39_TI;
extern MethodInfo m334_MI;
extern MethodInfo m111_MI;


extern MethodInfo m116_MI;
 void m116 (t41 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m116_MI);
	{
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m117_MI;
 void m117 (t41 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m117_MI);
	{
		return;
	}
}
extern MethodInfo m118_MI;
 void m118 (t41 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m118_MI);
	{
		t27* L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m111(NULL, L_0, ((float)(((float)(p0*(2.0f)))-(1.0f))), &m111_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
extern Il2CppType t27_0_0_6;
FieldInfo t41_f2_FieldInfo = 
{
	"axis", &t27_0_0_6, &t41_TI, offsetof(t41, f2), &EmptyCustomAttributesCache};
static FieldInfo* t41_FIs[] =
{
	&t41_f2_FieldInfo,
	NULL
};
extern TypeInfo t41_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m116_MI = 
{
	".ctor", (methodPointerType)&m116, &t41_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 118, NULL, (methodPointerType)NULL};
extern TypeInfo t41_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m117_MI = 
{
	"Update", (methodPointerType)&m117, &t41_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 119, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t41_m118_ParameterInfos[] = 
{
	{"value", 0, 134217784, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t41_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m118_MI = 
{
	"HandleInput", (methodPointerType)&m118, &t41_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t41_m118_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 120, NULL, (methodPointerType)NULL};
static MethodInfo* t41_MIs[] =
{
	&m116_MI,
	&m117_MI,
	&m118_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t41_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t41_0_0_0;
extern Il2CppType t41_1_0_0;
extern TypeInfo t3_TI;
struct t41;
extern TypeInfo t41_TI;
TypeInfo t41_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "InputAxisScrollbar", "UnityStandardAssets.CrossPlatformInput", t41_MIs, NULL, t41_FIs, NULL, &t3_TI, NULL, NULL, &t41_TI, NULL, t41_VT, &EmptyCustomAttributesCache, &t41_TI, &t41_0_0_0, &t41_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t41), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 4, 0, 0};
#include "t42.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t42_TI;
#include "t42MD.h"



// Metadata Definition UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption
extern Il2CppType t134_0_0_1542;
FieldInfo t42_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t42_TI, offsetof(t42, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t42_0_0_32854;
FieldInfo t42_f2_FieldInfo = 
{
	"Both", &t42_0_0_32854, &t42_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t42_0_0_32854;
FieldInfo t42_f3_FieldInfo = 
{
	"OnlyHorizontal", &t42_0_0_32854, &t42_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t42_0_0_32854;
FieldInfo t42_f4_FieldInfo = 
{
	"OnlyVertical", &t42_0_0_32854, &t42_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t42_FIs[] =
{
	&t42_f1_FieldInfo,
	&t42_f2_FieldInfo,
	&t42_f3_FieldInfo,
	&t42_f4_FieldInfo,
	NULL
};
static const int32_t t42_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t42_f2_DefaultValue = 
{
	&t42_f2_FieldInfo, { (char*)&t42_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t42_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t42_f3_DefaultValue = 
{
	&t42_f3_FieldInfo, { (char*)&t42_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t42_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t42_f4_DefaultValue = 
{
	&t42_f4_FieldInfo, { (char*)&t42_f4_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t42_FDVs[] = 
{
	&t42_f2_DefaultValue,
	&t42_f3_DefaultValue,
	&t42_f4_DefaultValue,
	NULL
};
static MethodInfo* t42_MIs[] =
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
static MethodInfo* t42_VT[] =
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
static Il2CppInterfaceOffsetPair t42_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t42_0_0_0;
extern Il2CppType t42_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern TypeInfo t43_TI;
TypeInfo t42_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "AxisOption", "", t42_MIs, NULL, t42_FIs, NULL, &t15_TI, NULL, &t43_TI, &t134_TI, NULL, t42_VT, &EmptyCustomAttributesCache, &t134_TI, &t42_0_0_0, &t42_1_0_0, t42_IOs, NULL, NULL, t42_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t42)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 258, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t43.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t43_TI;
#include "t43MD.h"

extern TypeInfo t43_TI;
extern TypeInfo t4_TI;
extern TypeInfo t34_TI;
extern TypeInfo t39_TI;
extern TypeInfo t6_TI;
extern TypeInfo t126_TI;
#include "t35MD.h"
extern MethodInfo m334_MI;
extern MethodInfo m336_MI;
extern MethodInfo m335_MI;
extern MethodInfo m122_MI;
extern MethodInfo m337_MI;
extern MethodInfo m500_MI;
extern MethodInfo m76_MI;
extern MethodInfo m69_MI;
extern MethodInfo m95_MI;
extern MethodInfo m344_MI;
extern MethodInfo m501_MI;
extern MethodInfo m502_MI;
extern MethodInfo m359_MI;
extern MethodInfo m350_MI;
extern MethodInfo m121_MI;
extern MethodInfo m75_MI;


extern MethodInfo m119_MI;
 void m119 (t43 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m119_MI);
	{
		__this->f2 = ((int32_t)100);
		__this->f4 = (t27*) &_stringLiteral3;
		__this->f5 = (t27*) &_stringLiteral13;
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m120_MI;
 void m120 (t43 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m120_MI);
	{
		t2 * L_0 = m336(__this, &m336_MI);
		NullCheck(L_0);
		t4  L_1 = m335(L_0, &m335_MI);
		__this->f6 = L_1;
		m122(__this, &m122_MI);
		return;
	}
}
extern MethodInfo m121_MI;
 void m121 (t43 * __this, t4  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m121_MI);
	t4  V_0 = {0};
	{
		t4  L_0 = (__this->f6);
		t4  L_1 = m337(NULL, L_0, p0, &m337_MI);
		V_0 = L_1;
		NullCheck((&V_0));
		float L_2 = ((&V_0)->f2);
		NullCheck((&V_0));
		(&V_0)->f2 = ((-L_2));
		int32_t L_3 = (__this->f2);
		t4  L_4 = m500(NULL, V_0, (((float)L_3)), &m500_MI);
		V_0 = L_4;
		bool L_5 = (__this->f7);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		t34 * L_6 = (__this->f9);
		NullCheck((&V_0));
		float L_7 = ((&V_0)->f1);
		NullCheck(L_6);
		m76(L_6, ((-L_7)), &m76_MI);
	}

IL_0048:
	{
		bool L_8 = (__this->f8);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		t34 * L_9 = (__this->f10);
		NullCheck((&V_0));
		float L_10 = ((&V_0)->f2);
		NullCheck(L_9);
		m76(L_9, L_10, &m76_MI);
	}

IL_0065:
	{
		return;
	}
}
extern MethodInfo m122_MI;
 void m122 (t43 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m122_MI);
	t43 * G_B2_0 = {0};
	t43 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t43 * G_B3_1 = {0};
	t43 * G_B5_0 = {0};
	t43 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	t43 * G_B6_1 = {0};
	{
		int32_t L_0 = (__this->f3);
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = (__this->f3);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->f7 = G_B3_0;
		int32_t L_2 = (__this->f3);
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = (__this->f3);
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0035:
	{
		NullCheck(G_B6_1);
		G_B6_1->f8 = G_B6_0;
		bool L_4 = (__this->f7);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		t27* L_5 = (__this->f4);
		t34 * L_6 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m69(L_6, L_5, &m69_MI);
		__this->f9 = L_6;
		t34 * L_7 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m95(NULL, L_7, &m95_MI);
	}

IL_0061:
	{
		bool L_8 = (__this->f8);
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		t27* L_9 = (__this->f5);
		t34 * L_10 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m69(L_10, L_9, &m69_MI);
		__this->f10 = L_10;
		t34 * L_11 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m95(NULL, L_11, &m95_MI);
	}

IL_0088:
	{
		return;
	}
}
extern MethodInfo m123_MI;
 void m123 (t43 * __this, t35 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m123_MI);
	t4  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t6  V_3 = {0};
	t6  V_4 = {0};
	{
		t4  L_0 = m344(NULL, &m344_MI);
		V_0 = L_0;
		bool L_1 = (__this->f7);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		NullCheck(p0);
		t6  L_2 = m501(p0, &m501_MI);
		V_3 = L_2;
		NullCheck((&V_3));
		float L_3 = ((&V_3)->f1);
		t4 * L_4 = &(__this->f6);
		NullCheck(L_4);
		float L_5 = (L_4->f1);
		V_1 = (((int32_t)((float)(L_3-L_5))));
		int32_t L_6 = (__this->f2);
		int32_t L_7 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		int32_t L_8 = m502(NULL, V_1, ((-L_6)), L_7, &m502_MI);
		V_1 = L_8;
		NullCheck((&V_0));
		(&V_0)->f1 = (((float)V_1));
	}

IL_004a:
	{
		bool L_9 = (__this->f8);
		if (!L_9)
		{
			goto IL_008f;
		}
	}
	{
		NullCheck(p0);
		t6  L_10 = m501(p0, &m501_MI);
		V_4 = L_10;
		NullCheck((&V_4));
		float L_11 = ((&V_4)->f2);
		t4 * L_12 = &(__this->f6);
		NullCheck(L_12);
		float L_13 = (L_12->f2);
		V_2 = (((int32_t)((float)(L_11-L_13))));
		int32_t L_14 = (__this->f2);
		int32_t L_15 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		int32_t L_16 = m502(NULL, V_2, ((-L_14)), L_15, &m502_MI);
		V_2 = L_16;
		NullCheck((&V_0));
		(&V_0)->f2 = (((float)V_2));
	}

IL_008f:
	{
		t2 * L_17 = m336(__this, &m336_MI);
		t4 * L_18 = &(__this->f6);
		NullCheck(L_18);
		float L_19 = (L_18->f1);
		NullCheck((&V_0));
		float L_20 = ((&V_0)->f1);
		t4 * L_21 = &(__this->f6);
		NullCheck(L_21);
		float L_22 = (L_21->f2);
		NullCheck((&V_0));
		float L_23 = ((&V_0)->f2);
		t4 * L_24 = &(__this->f6);
		NullCheck(L_24);
		float L_25 = (L_24->f3);
		NullCheck((&V_0));
		float L_26 = ((&V_0)->f3);
		t4  L_27 = {0};
		m359(&L_27, ((float)(L_19+L_20)), ((float)(L_22+L_23)), ((float)(L_25+L_26)), &m359_MI);
		NullCheck(L_17);
		m350(L_17, L_27, &m350_MI);
		t2 * L_28 = m336(__this, &m336_MI);
		NullCheck(L_28);
		t4  L_29 = m335(L_28, &m335_MI);
		m121(__this, L_29, &m121_MI);
		return;
	}
}
extern MethodInfo m124_MI;
 void m124 (t43 * __this, t35 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m124_MI);
	{
		t2 * L_0 = m336(__this, &m336_MI);
		t4  L_1 = (__this->f6);
		NullCheck(L_0);
		m350(L_0, L_1, &m350_MI);
		t4  L_2 = (__this->f6);
		m121(__this, L_2, &m121_MI);
		return;
	}
}
extern MethodInfo m125_MI;
 void m125 (t43 * __this, t35 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m125_MI);
	{
		return;
	}
}
extern MethodInfo m126_MI;
 void m126 (t43 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m126_MI);
	{
		bool L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t34 * L_1 = (__this->f9);
		NullCheck(L_1);
		m75(L_1, &m75_MI);
	}

IL_0016:
	{
		bool L_2 = (__this->f8);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		t34 * L_3 = (__this->f10);
		NullCheck(L_3);
		m75(L_3, &m75_MI);
	}

IL_002c:
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.CrossPlatformInput.Joystick
extern Il2CppType t134_0_0_6;
FieldInfo t43_f2_FieldInfo = 
{
	"MovementRange", &t134_0_0_6, &t43_TI, offsetof(t43, f2), &EmptyCustomAttributesCache};
extern Il2CppType t42_0_0_6;
FieldInfo t43_f3_FieldInfo = 
{
	"axesToUse", &t42_0_0_6, &t43_TI, offsetof(t43, f3), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_6;
FieldInfo t43_f4_FieldInfo = 
{
	"horizontalAxisName", &t27_0_0_6, &t43_TI, offsetof(t43, f4), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_6;
FieldInfo t43_f5_FieldInfo = 
{
	"verticalAxisName", &t27_0_0_6, &t43_TI, offsetof(t43, f5), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t43_f6_FieldInfo = 
{
	"m_StartPos", &t4_0_0_1, &t43_TI, offsetof(t43, f6), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t43_f7_FieldInfo = 
{
	"m_UseX", &t125_0_0_1, &t43_TI, offsetof(t43, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t43_f8_FieldInfo = 
{
	"m_UseY", &t125_0_0_1, &t43_TI, offsetof(t43, f8), &EmptyCustomAttributesCache};
extern Il2CppType t34_0_0_1;
FieldInfo t43_f9_FieldInfo = 
{
	"m_HorizontalVirtualAxis", &t34_0_0_1, &t43_TI, offsetof(t43, f9), &EmptyCustomAttributesCache};
extern Il2CppType t34_0_0_1;
FieldInfo t43_f10_FieldInfo = 
{
	"m_VerticalVirtualAxis", &t34_0_0_1, &t43_TI, offsetof(t43, f10), &EmptyCustomAttributesCache};
static FieldInfo* t43_FIs[] =
{
	&t43_f2_FieldInfo,
	&t43_f3_FieldInfo,
	&t43_f4_FieldInfo,
	&t43_f5_FieldInfo,
	&t43_f6_FieldInfo,
	&t43_f7_FieldInfo,
	&t43_f8_FieldInfo,
	&t43_f9_FieldInfo,
	&t43_f10_FieldInfo,
	NULL
};
extern TypeInfo t43_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m119_MI = 
{
	".ctor", (methodPointerType)&m119, &t43_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 121, NULL, (methodPointerType)NULL};
extern TypeInfo t43_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m120_MI = 
{
	"OnEnable", (methodPointerType)&m120, &t43_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 122, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t43_m121_ParameterInfos[] = 
{
	{"value", 0, 134217785, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m121_MI = 
{
	"UpdateVirtualAxes", (methodPointerType)&m121, &t43_TI, &t123_0_0_0, RuntimeInvoker_t123_t4, t43_m121_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 123, NULL, (methodPointerType)NULL};
extern TypeInfo t43_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m122_MI = 
{
	"CreateVirtualAxes", (methodPointerType)&m122, &t43_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 124, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t43_m123_ParameterInfos[] = 
{
	{"data", 0, 134217786, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m123_MI = 
{
	"OnDrag", (methodPointerType)&m123, &t43_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t43_m123_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 1, false, false, 125, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t43_m124_ParameterInfos[] = 
{
	{"data", 0, 134217787, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m124_MI = 
{
	"OnPointerUp", (methodPointerType)&m124, &t43_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t43_m124_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 1, false, false, 126, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t43_m125_ParameterInfos[] = 
{
	{"data", 0, 134217788, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m125_MI = 
{
	"OnPointerDown", (methodPointerType)&m125, &t43_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t43_m125_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, false, 127, NULL, (methodPointerType)NULL};
extern TypeInfo t43_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m126_MI = 
{
	"OnDisable", (methodPointerType)&m126, &t43_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 128, NULL, (methodPointerType)NULL};
static MethodInfo* t43_MIs[] =
{
	&m119_MI,
	&m120_MI,
	&m121_MI,
	&m122_MI,
	&m123_MI,
	&m124_MI,
	&m125_MI,
	&m126_MI,
	NULL
};
extern TypeInfo t42_TI;
static TypeInfo* t43_TI__nestedTypes[2] =
{
	&t42_TI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
extern MethodInfo m125_MI;
extern MethodInfo m124_MI;
extern MethodInfo m123_MI;
static MethodInfo* t43_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
	&m125_MI,
	&m124_MI,
	&m123_MI,
};
extern TypeInfo t162_TI;
extern TypeInfo t163_TI;
extern TypeInfo t164_TI;
extern TypeInfo t166_TI;
static TypeInfo* t43_ITIs[] = 
{
	&t162_TI,
	&t163_TI,
	&t164_TI,
	&t166_TI,
};
extern TypeInfo t162_TI;
extern TypeInfo t163_TI;
extern TypeInfo t164_TI;
extern TypeInfo t166_TI;
static Il2CppInterfaceOffsetPair t43_IOs[] = 
{
	{ &t162_TI, 4},
	{ &t163_TI, 5},
	{ &t164_TI, 5},
	{ &t166_TI, 6},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t43_0_0_0;
extern Il2CppType t43_1_0_0;
extern TypeInfo t3_TI;
struct t43;
extern TypeInfo t43_TI;
TypeInfo t43_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "Joystick", "UnityStandardAssets.CrossPlatformInput", t43_MIs, NULL, t43_FIs, NULL, &t3_TI, t43_TI__nestedTypes, NULL, &t43_TI, t43_ITIs, t43_VT, &EmptyCustomAttributesCache, &t43_TI, &t43_0_0_0, &t43_1_0_0, t43_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t43), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 8, 0, 9, 0, 1, 7, 4, 4};
#include "t44.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t44_TI;
#include "t44MD.h"

extern TypeInfo t2_TI;
extern TypeInfo t78_TI;
extern TypeInfo t25_TI;
extern TypeInfo t125_TI;
extern TypeInfo t167_TI;
extern TypeInfo t123_TI;
extern MethodInfo m334_MI;
extern MethodInfo m129_MI;
extern MethodInfo m130_MI;
extern MethodInfo m336_MI;
extern MethodInfo m503_MI;
extern MethodInfo m504_MI;
extern MethodInfo m370_MI;
extern MethodInfo m505_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;


extern MethodInfo m127_MI;
 void m127 (t44 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m127_MI);
	{
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m128_MI;
 void m128 (t44 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m128_MI);
	{
		m129(__this, &m129_MI);
		return;
	}
}
extern MethodInfo m129_MI;
 void m129 (t44 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m129_MI);
	{
		m130(__this, 0, &m130_MI);
		return;
	}
}
extern MethodInfo m130_MI;
 void m130 (t44 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m130_MI);
	t2 * V_0 = {0};
	t25 * V_1 = {0};
	t25 * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t2 * L_0 = m336(__this, &m336_MI);
		NullCheck(L_0);
		t25 * L_1 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m503_MI, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_0011:
		{
			NullCheck(V_1);
			t25 * L_2 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m504_MI, V_1);
			V_0 = ((t2 *)Castclass(L_2, InitializedTypeInfo(&t2_TI)));
			NullCheck(V_0);
			t62 * L_3 = m370(V_0, &m370_MI);
			NullCheck(L_3);
			m505(L_3, p0, &m505_MI);
		}

IL_0029:
		{
			NullCheck(V_1);
			bool L_4 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m506_MI, V_1);
			if (L_4)
			{
				goto IL_0011;
			}
		}

IL_0034:
		{
			// IL_0034: leave IL_004b
			leaveInstructions[0] = 0x4B; // 1
			THROW_SENTINEL(IL_004b);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0039;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0039;
	}

IL_0039:
	{ // begin finally (depth: 1)
		{
			V_2 = ((t25 *)IsInst(V_1, InitializedTypeInfo(&t167_TI)));
			if (V_2)
			{
				goto IL_0044;
			}
		}

IL_0043:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x4B:
					goto IL_004b;
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
		}

IL_0044:
		{
			NullCheck(V_2);
			InterfaceActionInvoker0::Invoke(&m507_MI, V_2);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x4B:
					goto IL_004b;
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
		}
	} // end finally (depth: 1)

IL_004b:
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.CrossPlatformInput.MobileControlRig
extern TypeInfo t44_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m127_MI = 
{
	".ctor", (methodPointerType)&m127, &t44_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 129, NULL, (methodPointerType)NULL};
extern TypeInfo t44_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m128_MI = 
{
	"OnEnable", (methodPointerType)&m128, &t44_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 130, NULL, (methodPointerType)NULL};
extern TypeInfo t44_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m129_MI = 
{
	"CheckEnableControlRig", (methodPointerType)&m129, &t44_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 131, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t44_m130_ParameterInfos[] = 
{
	{"enabled", 0, 134217789, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t44_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m130_MI = 
{
	"EnableControlRig", (methodPointerType)&m130, &t44_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t44_m130_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 132, NULL, (methodPointerType)NULL};
static MethodInfo* t44_MIs[] =
{
	&m127_MI,
	&m128_MI,
	&m129_MI,
	&m130_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t44_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t144_TI;
extern MethodInfo m433_MI;
void t44_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t144 * tmp;
		tmp = (t144 *)il2cpp_codegen_object_new (&t144_TI);
		m433(tmp, &m433_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t44__CustomAttributeCache = {
1,
NULL,
&t44_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t44_0_0_0;
extern Il2CppType t44_1_0_0;
extern TypeInfo t3_TI;
struct t44;
extern TypeInfo t44_TI;
extern CustomAttributesCache t44__CustomAttributeCache;
TypeInfo t44_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "MobileControlRig", "UnityStandardAssets.CrossPlatformInput", t44_MIs, NULL, NULL, NULL, &t3_TI, NULL, NULL, &t44_TI, NULL, t44_VT, &t44__CustomAttributeCache, &t44_TI, &t44_0_0_0, &t44_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t44), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t45_TI;

#include "t55.h"
#include "t56.h"
extern TypeInfo t38_TI;
extern TypeInfo t39_TI;
extern TypeInfo t34_TI;
extern TypeInfo t40_TI;
extern TypeInfo t55_TI;
extern TypeInfo t125_TI;
extern TypeInfo t27_TI;
extern TypeInfo t56_TI;
#include "t55MD.h"
#include "t56MD.h"
extern MethodInfo m170_MI;
extern MethodInfo m79_MI;
extern MethodInfo m96_MI;
extern MethodInfo m69_MI;
extern MethodInfo m95_MI;
extern MethodInfo m508_MI;
extern MethodInfo m133_MI;
extern MethodInfo m509_MI;
extern MethodInfo m77_MI;
extern MethodInfo m510_MI;
extern MethodInfo m132_MI;
extern MethodInfo m511_MI;
extern MethodInfo m85_MI;
extern MethodInfo m86_MI;
extern MethodInfo m76_MI;
extern MethodInfo m89_MI;
extern MethodInfo m90_MI;
extern MethodInfo m88_MI;
extern MethodInfo m171_MI;


extern MethodInfo m131_MI;
 void m131 (t45 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m131_MI);
	{
		m170(__this, &m170_MI);
		return;
	}
}
extern MethodInfo m132_MI;
 void m132 (t45 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m132_MI);
	{
		t38 * L_0 = (t38 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t38_TI));
		m79(L_0, p0, &m79_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m96(NULL, L_0, &m96_MI);
		return;
	}
}
extern MethodInfo m133_MI;
 void m133 (t45 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m133_MI);
	{
		t34 * L_0 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m69(L_0, p0, &m69_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m95(NULL, L_0, &m95_MI);
		return;
	}
}
extern MethodInfo m134_MI;
 float m134 (t45 * __this, t27* p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m134_MI);
	{
		t55 * L_0 = (__this->f0);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m508_MI, L_0, p0);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		m133(__this, p0, &m133_MI);
	}

IL_0018:
	{
		t55 * L_2 = (__this->f0);
		NullCheck(L_2);
		t34 * L_3 = (t34 *)VirtFuncInvoker1< t34 *, t27* >::Invoke(&m509_MI, L_2, p0);
		NullCheck(L_3);
		float L_4 = m77(L_3, &m77_MI);
		return L_4;
	}
}
extern MethodInfo m135_MI;
 void m135 (t45 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m135_MI);
	{
		t56 * L_0 = (__this->f1);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m510_MI, L_0, p0);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		m132(__this, p0, &m132_MI);
	}

IL_0018:
	{
		t56 * L_2 = (__this->f1);
		NullCheck(L_2);
		t38 * L_3 = (t38 *)VirtFuncInvoker1< t38 *, t27* >::Invoke(&m511_MI, L_2, p0);
		NullCheck(L_3);
		m85(L_3, &m85_MI);
		return;
	}
}
extern MethodInfo m136_MI;
 void m136 (t45 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m136_MI);
	{
		t56 * L_0 = (__this->f1);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m510_MI, L_0, p0);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		m132(__this, p0, &m132_MI);
	}

IL_0018:
	{
		t56 * L_2 = (__this->f1);
		NullCheck(L_2);
		t38 * L_3 = (t38 *)VirtFuncInvoker1< t38 *, t27* >::Invoke(&m511_MI, L_2, p0);
		NullCheck(L_3);
		m86(L_3, &m86_MI);
		return;
	}
}
extern MethodInfo m137_MI;
 void m137 (t45 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m137_MI);
	{
		t55 * L_0 = (__this->f0);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m508_MI, L_0, p0);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		m133(__this, p0, &m133_MI);
	}

IL_0018:
	{
		t55 * L_2 = (__this->f0);
		NullCheck(L_2);
		t34 * L_3 = (t34 *)VirtFuncInvoker1< t34 *, t27* >::Invoke(&m509_MI, L_2, p0);
		NullCheck(L_3);
		m76(L_3, (1.0f), &m76_MI);
		return;
	}
}
extern MethodInfo m138_MI;
 void m138 (t45 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m138_MI);
	{
		t55 * L_0 = (__this->f0);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m508_MI, L_0, p0);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		m133(__this, p0, &m133_MI);
	}

IL_0018:
	{
		t55 * L_2 = (__this->f0);
		NullCheck(L_2);
		t34 * L_3 = (t34 *)VirtFuncInvoker1< t34 *, t27* >::Invoke(&m509_MI, L_2, p0);
		NullCheck(L_3);
		m76(L_3, (-1.0f), &m76_MI);
		return;
	}
}
extern MethodInfo m139_MI;
 void m139 (t45 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m139_MI);
	{
		t55 * L_0 = (__this->f0);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m508_MI, L_0, p0);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		m133(__this, p0, &m133_MI);
	}

IL_0018:
	{
		t55 * L_2 = (__this->f0);
		NullCheck(L_2);
		t34 * L_3 = (t34 *)VirtFuncInvoker1< t34 *, t27* >::Invoke(&m509_MI, L_2, p0);
		NullCheck(L_3);
		m76(L_3, (0.0f), &m76_MI);
		return;
	}
}
extern MethodInfo m140_MI;
 void m140 (t45 * __this, t27* p0, float p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m140_MI);
	{
		t55 * L_0 = (__this->f0);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m508_MI, L_0, p0);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		m133(__this, p0, &m133_MI);
	}

IL_0018:
	{
		t55 * L_2 = (__this->f0);
		NullCheck(L_2);
		t34 * L_3 = (t34 *)VirtFuncInvoker1< t34 *, t27* >::Invoke(&m509_MI, L_2, p0);
		NullCheck(L_3);
		m76(L_3, p1, &m76_MI);
		return;
	}
}
extern MethodInfo m141_MI;
 bool m141 (t45 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m141_MI);
	{
		t56 * L_0 = (__this->f1);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m510_MI, L_0, p0);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		t56 * L_2 = (__this->f1);
		NullCheck(L_2);
		t38 * L_3 = (t38 *)VirtFuncInvoker1< t38 *, t27* >::Invoke(&m511_MI, L_2, p0);
		NullCheck(L_3);
		bool L_4 = m89(L_3, &m89_MI);
		return L_4;
	}

IL_0023:
	{
		m132(__this, p0, &m132_MI);
		t56 * L_5 = (__this->f1);
		NullCheck(L_5);
		t38 * L_6 = (t38 *)VirtFuncInvoker1< t38 *, t27* >::Invoke(&m511_MI, L_5, p0);
		NullCheck(L_6);
		bool L_7 = m89(L_6, &m89_MI);
		return L_7;
	}
}
extern MethodInfo m142_MI;
 bool m142 (t45 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m142_MI);
	{
		t56 * L_0 = (__this->f1);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m510_MI, L_0, p0);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		t56 * L_2 = (__this->f1);
		NullCheck(L_2);
		t38 * L_3 = (t38 *)VirtFuncInvoker1< t38 *, t27* >::Invoke(&m511_MI, L_2, p0);
		NullCheck(L_3);
		bool L_4 = m90(L_3, &m90_MI);
		return L_4;
	}

IL_0023:
	{
		m132(__this, p0, &m132_MI);
		t56 * L_5 = (__this->f1);
		NullCheck(L_5);
		t38 * L_6 = (t38 *)VirtFuncInvoker1< t38 *, t27* >::Invoke(&m511_MI, L_5, p0);
		NullCheck(L_6);
		bool L_7 = m90(L_6, &m90_MI);
		return L_7;
	}
}
extern MethodInfo m143_MI;
 bool m143 (t45 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m143_MI);
	{
		t56 * L_0 = (__this->f1);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m510_MI, L_0, p0);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		t56 * L_2 = (__this->f1);
		NullCheck(L_2);
		t38 * L_3 = (t38 *)VirtFuncInvoker1< t38 *, t27* >::Invoke(&m511_MI, L_2, p0);
		NullCheck(L_3);
		bool L_4 = m88(L_3, &m88_MI);
		return L_4;
	}

IL_0023:
	{
		m132(__this, p0, &m132_MI);
		t56 * L_5 = (__this->f1);
		NullCheck(L_5);
		t38 * L_6 = (t38 *)VirtFuncInvoker1< t38 *, t27* >::Invoke(&m511_MI, L_5, p0);
		NullCheck(L_6);
		bool L_7 = m88(L_6, &m88_MI);
		return L_7;
	}
}
extern MethodInfo m144_MI;
 t4  m144 (t45 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m144_MI);
	{
		t4  L_0 = m171(__this, &m171_MI);
		return L_0;
	}
}
// Metadata Definition UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
extern TypeInfo t45_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m131_MI = 
{
	".ctor", (methodPointerType)&m131, &t45_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 133, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t45_m132_ParameterInfos[] = 
{
	{"name", 0, 134217790, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m132_MI = 
{
	"AddButton", (methodPointerType)&m132, &t45_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t45_m132_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 134, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t45_m133_ParameterInfos[] = 
{
	{"name", 0, 134217791, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m133_MI = 
{
	"AddAxes", (methodPointerType)&m133, &t45_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t45_m133_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 135, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t45_m134_ParameterInfos[] = 
{
	{"name", 0, 134217792, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"raw", 1, 134217793, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m134_MI = 
{
	"GetAxis", (methodPointerType)&m134, &t45_TI, &t124_0_0_0, RuntimeInvoker_t124_t25_t137, t45_m134_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 136, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t45_m135_ParameterInfos[] = 
{
	{"name", 0, 134217794, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m135_MI = 
{
	"SetButtonDown", (methodPointerType)&m135, &t45_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t45_m135_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 137, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t45_m136_ParameterInfos[] = 
{
	{"name", 0, 134217795, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m136_MI = 
{
	"SetButtonUp", (methodPointerType)&m136, &t45_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t45_m136_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 138, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t45_m137_ParameterInfos[] = 
{
	{"name", 0, 134217796, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m137_MI = 
{
	"SetAxisPositive", (methodPointerType)&m137, &t45_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t45_m137_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 139, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t45_m138_ParameterInfos[] = 
{
	{"name", 0, 134217797, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m138_MI = 
{
	"SetAxisNegative", (methodPointerType)&m138, &t45_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t45_m138_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 1, false, false, 140, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t45_m139_ParameterInfos[] = 
{
	{"name", 0, 134217798, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m139_MI = 
{
	"SetAxisZero", (methodPointerType)&m139, &t45_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t45_m139_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 141, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t45_m140_ParameterInfos[] = 
{
	{"name", 0, 134217799, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134217800, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m140_MI = 
{
	"SetAxis", (methodPointerType)&m140, &t45_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t124, t45_m140_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 142, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t45_m141_ParameterInfos[] = 
{
	{"name", 0, 134217801, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m141_MI = 
{
	"GetButtonDown", (methodPointerType)&m141, &t45_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t45_m141_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 143, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t45_m142_ParameterInfos[] = 
{
	{"name", 0, 134217802, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m142_MI = 
{
	"GetButtonUp", (methodPointerType)&m142, &t45_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t45_m142_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 1, false, false, 144, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t45_m143_ParameterInfos[] = 
{
	{"name", 0, 134217803, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m143_MI = 
{
	"GetButton", (methodPointerType)&m143, &t45_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t45_m143_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 145, NULL, (methodPointerType)NULL};
extern TypeInfo t45_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m144_MI = 
{
	"MousePosition", (methodPointerType)&m144, &t45_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 198, 0, 14, 0, false, false, 146, NULL, (methodPointerType)NULL};
static MethodInfo* t45_MIs[] =
{
	&m131_MI,
	&m132_MI,
	&m133_MI,
	&m134_MI,
	&m135_MI,
	&m136_MI,
	&m137_MI,
	&m138_MI,
	&m139_MI,
	&m140_MI,
	&m141_MI,
	&m142_MI,
	&m143_MI,
	&m144_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m134_MI;
extern MethodInfo m143_MI;
extern MethodInfo m141_MI;
extern MethodInfo m142_MI;
extern MethodInfo m135_MI;
extern MethodInfo m136_MI;
extern MethodInfo m137_MI;
extern MethodInfo m138_MI;
extern MethodInfo m139_MI;
extern MethodInfo m140_MI;
extern MethodInfo m144_MI;
static MethodInfo* t45_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m134_MI,
	&m143_MI,
	&m141_MI,
	&m142_MI,
	&m135_MI,
	&m136_MI,
	&m137_MI,
	&m138_MI,
	&m139_MI,
	&m140_MI,
	&m144_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t45_0_0_0;
extern Il2CppType t45_1_0_0;
extern TypeInfo t40_TI;
struct t45;
extern TypeInfo t45_TI;
TypeInfo t45_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "MobileInput", "UnityStandardAssets.CrossPlatformInput.PlatformSpecific", t45_MIs, NULL, NULL, NULL, &t40_TI, NULL, NULL, &t45_TI, NULL, t45_VT, &EmptyCustomAttributesCache, &t45_TI, &t45_0_0_0, &t45_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t45), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 14, 0, 0, 0, 0, 15, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t46_TI;

#include "t168.h"
extern TypeInfo t130_TI;
extern TypeInfo t168_TI;
#include "t168MD.h"
extern MethodInfo m170_MI;
extern MethodInfo m512_MI;
extern MethodInfo m513_MI;
extern MethodInfo m514_MI;
extern MethodInfo m515_MI;
extern MethodInfo m516_MI;
extern MethodInfo m517_MI;
extern MethodInfo m518_MI;


extern MethodInfo m145_MI;
 void m145 (t46 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m145_MI);
	{
		m170(__this, &m170_MI);
		return;
	}
}
extern MethodInfo m146_MI;
 float m146 (t46 * __this, t27* p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m146_MI);
	float G_B3_0 = 0.0f;
	{
		if (!p1)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		float L_0 = m512(NULL, p0, &m512_MI);
		G_B3_0 = L_0;
		goto IL_0017;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		float L_1 = m513(NULL, p0, &m513_MI);
		G_B3_0 = L_1;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
extern MethodInfo m147_MI;
 bool m147 (t46 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m147_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		bool L_0 = m514(NULL, p0, &m514_MI);
		return L_0;
	}
}
extern MethodInfo m148_MI;
 bool m148 (t46 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m148_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		bool L_0 = m515(NULL, p0, &m515_MI);
		return L_0;
	}
}
extern MethodInfo m149_MI;
 bool m149 (t46 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m149_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		bool L_0 = m516(NULL, p0, &m516_MI);
		return L_0;
	}
}
extern MethodInfo m150_MI;
 void m150 (t46 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m150_MI);
	{
		t168 * L_0 = (t168 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t168_TI));
		m517(L_0, (t27*) &_stringLiteral14, &m517_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m151_MI;
 void m151 (t46 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m151_MI);
	{
		t168 * L_0 = (t168 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t168_TI));
		m517(L_0, (t27*) &_stringLiteral14, &m517_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m152_MI;
 void m152 (t46 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m152_MI);
	{
		t168 * L_0 = (t168 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t168_TI));
		m517(L_0, (t27*) &_stringLiteral14, &m517_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m153_MI;
 void m153 (t46 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m153_MI);
	{
		t168 * L_0 = (t168 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t168_TI));
		m517(L_0, (t27*) &_stringLiteral14, &m517_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m154_MI;
 void m154 (t46 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m154_MI);
	{
		t168 * L_0 = (t168 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t168_TI));
		m517(L_0, (t27*) &_stringLiteral14, &m517_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m155_MI;
 void m155 (t46 * __this, t27* p0, float p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m155_MI);
	{
		t168 * L_0 = (t168 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t168_TI));
		m517(L_0, (t27*) &_stringLiteral14, &m517_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m156_MI;
 t4  m156 (t46 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m156_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		t4  L_0 = m518(NULL, &m518_MI);
		return L_0;
	}
}
// Metadata Definition UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
extern TypeInfo t46_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m145_MI = 
{
	".ctor", (methodPointerType)&m145, &t46_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 147, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t46_m146_ParameterInfos[] = 
{
	{"name", 0, 134217804, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"raw", 1, 134217805, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t46_TI;
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m146_MI = 
{
	"GetAxis", (methodPointerType)&m146, &t46_TI, &t124_0_0_0, RuntimeInvoker_t124_t25_t137, t46_m146_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 148, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t46_m147_ParameterInfos[] = 
{
	{"name", 0, 134217806, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t46_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m147_MI = 
{
	"GetButton", (methodPointerType)&m147, &t46_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t46_m147_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 1, false, false, 149, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t46_m148_ParameterInfos[] = 
{
	{"name", 0, 134217807, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t46_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m148_MI = 
{
	"GetButtonDown", (methodPointerType)&m148, &t46_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t46_m148_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 150, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t46_m149_ParameterInfos[] = 
{
	{"name", 0, 134217808, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t46_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m149_MI = 
{
	"GetButtonUp", (methodPointerType)&m149, &t46_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t46_m149_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 1, false, false, 151, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t46_m150_ParameterInfos[] = 
{
	{"name", 0, 134217809, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t46_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m150_MI = 
{
	"SetButtonDown", (methodPointerType)&m150, &t46_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t46_m150_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 152, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t46_m151_ParameterInfos[] = 
{
	{"name", 0, 134217810, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t46_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m151_MI = 
{
	"SetButtonUp", (methodPointerType)&m151, &t46_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t46_m151_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 153, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t46_m152_ParameterInfos[] = 
{
	{"name", 0, 134217811, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t46_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m152_MI = 
{
	"SetAxisPositive", (methodPointerType)&m152, &t46_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t46_m152_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 154, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t46_m153_ParameterInfos[] = 
{
	{"name", 0, 134217812, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t46_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m153_MI = 
{
	"SetAxisNegative", (methodPointerType)&m153, &t46_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t46_m153_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 1, false, false, 155, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t46_m154_ParameterInfos[] = 
{
	{"name", 0, 134217813, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t46_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m154_MI = 
{
	"SetAxisZero", (methodPointerType)&m154, &t46_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t46_m154_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 156, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t46_m155_ParameterInfos[] = 
{
	{"name", 0, 134217814, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134217815, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t46_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m155_MI = 
{
	"SetAxis", (methodPointerType)&m155, &t46_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t124, t46_m155_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 157, NULL, (methodPointerType)NULL};
extern TypeInfo t46_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m156_MI = 
{
	"MousePosition", (methodPointerType)&m156, &t46_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 198, 0, 14, 0, false, false, 158, NULL, (methodPointerType)NULL};
static MethodInfo* t46_MIs[] =
{
	&m145_MI,
	&m146_MI,
	&m147_MI,
	&m148_MI,
	&m149_MI,
	&m150_MI,
	&m151_MI,
	&m152_MI,
	&m153_MI,
	&m154_MI,
	&m155_MI,
	&m156_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m146_MI;
extern MethodInfo m147_MI;
extern MethodInfo m148_MI;
extern MethodInfo m149_MI;
extern MethodInfo m150_MI;
extern MethodInfo m151_MI;
extern MethodInfo m152_MI;
extern MethodInfo m153_MI;
extern MethodInfo m154_MI;
extern MethodInfo m155_MI;
extern MethodInfo m156_MI;
static MethodInfo* t46_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m146_MI,
	&m147_MI,
	&m148_MI,
	&m149_MI,
	&m150_MI,
	&m151_MI,
	&m152_MI,
	&m153_MI,
	&m154_MI,
	&m155_MI,
	&m156_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t46_0_0_0;
extern Il2CppType t46_1_0_0;
extern TypeInfo t40_TI;
struct t46;
extern TypeInfo t46_TI;
TypeInfo t46_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "StandaloneInput", "UnityStandardAssets.CrossPlatformInput.PlatformSpecific", t46_MIs, NULL, NULL, NULL, &t40_TI, NULL, NULL, &t46_TI, NULL, t46_VT, &EmptyCustomAttributesCache, &t46_TI, &t46_0_0_0, &t46_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t46), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 12, 0, 0, 0, 0, 15, 0, 0};
#include "t47.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t47_TI;
#include "t47MD.h"



// Metadata Definition UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions
extern Il2CppType t134_0_0_1542;
FieldInfo t47_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t47_TI, offsetof(t47, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_32854;
FieldInfo t47_f2_FieldInfo = 
{
	"ForwardAxis", &t47_0_0_32854, &t47_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_32854;
FieldInfo t47_f3_FieldInfo = 
{
	"SidewaysAxis", &t47_0_0_32854, &t47_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t47_FIs[] =
{
	&t47_f1_FieldInfo,
	&t47_f2_FieldInfo,
	&t47_f3_FieldInfo,
	NULL
};
static const int32_t t47_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t47_f2_DefaultValue = 
{
	&t47_f2_FieldInfo, { (char*)&t47_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t47_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t47_f3_DefaultValue = 
{
	&t47_f3_FieldInfo, { (char*)&t47_f3_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t47_FDVs[] = 
{
	&t47_f2_DefaultValue,
	&t47_f3_DefaultValue,
	NULL
};
static MethodInfo* t47_MIs[] =
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
static MethodInfo* t47_VT[] =
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
static Il2CppInterfaceOffsetPair t47_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern TypeInfo t50_TI;
TypeInfo t47_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "AxisOptions", "", t47_MIs, NULL, t47_FIs, NULL, &t15_TI, NULL, &t50_TI, &t134_TI, NULL, t47_VT, &EmptyCustomAttributesCache, &t134_TI, &t47_0_0_0, &t47_1_0_0, t47_IOs, NULL, NULL, t47_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t47)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 258, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t48.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t48_TI;
#include "t48MD.h"



// Metadata Definition UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType
extern Il2CppType t134_0_0_1542;
FieldInfo t48_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t48_TI, offsetof(t48, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t48_0_0_32854;
FieldInfo t48_f2_FieldInfo = 
{
	"NamedAxis", &t48_0_0_32854, &t48_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t48_0_0_32854;
FieldInfo t48_f3_FieldInfo = 
{
	"MousePositionX", &t48_0_0_32854, &t48_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t48_0_0_32854;
FieldInfo t48_f4_FieldInfo = 
{
	"MousePositionY", &t48_0_0_32854, &t48_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t48_0_0_32854;
FieldInfo t48_f5_FieldInfo = 
{
	"MousePositionZ", &t48_0_0_32854, &t48_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t48_FIs[] =
{
	&t48_f1_FieldInfo,
	&t48_f2_FieldInfo,
	&t48_f3_FieldInfo,
	&t48_f4_FieldInfo,
	&t48_f5_FieldInfo,
	NULL
};
static const int32_t t48_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t48_f2_DefaultValue = 
{
	&t48_f2_FieldInfo, { (char*)&t48_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t48_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t48_f3_DefaultValue = 
{
	&t48_f3_FieldInfo, { (char*)&t48_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t48_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t48_f4_DefaultValue = 
{
	&t48_f4_FieldInfo, { (char*)&t48_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t48_f5_DefaultValueData = 3;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t48_f5_DefaultValue = 
{
	&t48_f5_FieldInfo, { (char*)&t48_f5_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t48_FDVs[] = 
{
	&t48_f2_DefaultValue,
	&t48_f3_DefaultValue,
	&t48_f4_DefaultValue,
	&t48_f5_DefaultValue,
	NULL
};
static MethodInfo* t48_MIs[] =
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
static MethodInfo* t48_VT[] =
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
static Il2CppInterfaceOffsetPair t48_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t48_0_0_0;
extern Il2CppType t48_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern TypeInfo t49_TI;
TypeInfo t48_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "MappingType", "", t48_MIs, NULL, t48_FIs, NULL, &t15_TI, NULL, &t49_TI, &t134_TI, NULL, t48_VT, &EmptyCustomAttributesCache, &t134_TI, &t48_0_0_0, &t48_1_0_0, t48_IOs, NULL, NULL, t48_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t48)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 258, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t49.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t49_TI;
#include "t49MD.h"

extern MethodInfo m452_MI;


extern MethodInfo m157_MI;
 void m157 (t49 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m157_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
extern Il2CppType t48_0_0_6;
FieldInfo t49_f0_FieldInfo = 
{
	"type", &t48_0_0_6, &t49_TI, offsetof(t49, f0), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_6;
FieldInfo t49_f1_FieldInfo = 
{
	"axisName", &t27_0_0_6, &t49_TI, offsetof(t49, f1), &EmptyCustomAttributesCache};
static FieldInfo* t49_FIs[] =
{
	&t49_f0_FieldInfo,
	&t49_f1_FieldInfo,
	NULL
};
extern TypeInfo t49_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m157_MI = 
{
	".ctor", (methodPointerType)&m157, &t49_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 163, NULL, (methodPointerType)NULL};
static MethodInfo* t49_MIs[] =
{
	&m157_MI,
	NULL
};
extern TypeInfo t48_TI;
static TypeInfo* t49_TI__nestedTypes[2] =
{
	&t48_TI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t49_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t49_0_0_0;
extern Il2CppType t49_1_0_0;
extern TypeInfo t25_TI;
struct t49;
extern TypeInfo t49_TI;
extern TypeInfo t50_TI;
TypeInfo t49_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "AxisMapping", "", t49_MIs, NULL, t49_FIs, NULL, &t25_TI, t49_TI__nestedTypes, &t50_TI, &t49_TI, NULL, t49_VT, &EmptyCustomAttributesCache, &t49_TI, &t49_0_0_0, &t49_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t49), 0, -1, 0, 0, -1, 1056770, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 1, 4, 0, 0};
#include "t50.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t50_TI;
#include "t50MD.h"

extern TypeInfo t50_TI;
extern TypeInfo t49_TI;
extern TypeInfo t34_TI;
extern TypeInfo t39_TI;
extern TypeInfo t130_TI;
extern TypeInfo t4_TI;
extern TypeInfo t126_TI;
#include "t169MD.h"
extern MethodInfo m334_MI;
extern MethodInfo m69_MI;
extern MethodInfo m95_MI;
extern MethodInfo m519_MI;
extern MethodInfo m344_MI;
extern MethodInfo m520_MI;
extern MethodInfo m423_MI;
extern MethodInfo m425_MI;
extern MethodInfo m76_MI;
extern MethodInfo m521_MI;
extern MethodInfo m113_MI;
extern MethodInfo m114_MI;
extern MethodInfo m115_MI;
extern MethodInfo m75_MI;


extern MethodInfo m158_MI;
 void m158 (t50 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m158_MI);
	{
		__this->f4 = (25.0f);
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m159_MI;
 void m159 (t50 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m159_MI);
	{
		t49 * L_0 = (__this->f2);
		NullCheck(L_0);
		int32_t L_1 = (L_0->f0);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		t49 * L_2 = (__this->f2);
		NullCheck(L_2);
		t27* L_3 = (L_2->f1);
		t34 * L_4 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m69(L_4, L_3, &m69_MI);
		__this->f6 = L_4;
		t34 * L_5 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m95(NULL, L_5, &m95_MI);
	}

IL_0031:
	{
		return;
	}
}
extern MethodInfo m160_MI;
 void m160 (t50 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m160_MI);
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = {0};
	t4  V_3 = {0};
	t4  V_4 = {0};
	t4  V_5 = {0};
	t4  V_6 = {0};
	int32_t V_7 = {0};
	{
		V_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		t4  L_0 = m519(NULL, &m519_MI);
		t4  L_1 = m344(NULL, &m344_MI);
		bool L_2 = m520(NULL, L_0, L_1, &m520_MI);
		if (!L_2)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_3 = (__this->f3);
		V_2 = L_3;
		if (!V_2)
		{
			goto IL_0033;
		}
	}
	{
		if ((((int32_t)V_2) == ((int32_t)1)))
		{
			goto IL_0067;
		}
	}
	{
		goto IL_009c;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		t4  L_4 = m519(NULL, &m519_MI);
		V_3 = L_4;
		NullCheck((&V_3));
		float L_5 = ((&V_3)->f1);
		t4  L_6 = m519(NULL, &m519_MI);
		V_4 = L_6;
		NullCheck((&V_4));
		float L_7 = ((&V_4)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_8 = atan2f(L_5, ((-L_7)));
		float L_9 = (__this->f5);
		V_0 = ((float)(((float)(L_8*(57.29578f)))+L_9));
		goto IL_009c;
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		t4  L_10 = m519(NULL, &m519_MI);
		V_5 = L_10;
		NullCheck((&V_5));
		float L_11 = ((&V_5)->f3);
		t4  L_12 = m519(NULL, &m519_MI);
		V_6 = L_12;
		NullCheck((&V_6));
		float L_13 = ((&V_6)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_14 = atan2f(L_11, ((-L_13)));
		float L_15 = (__this->f5);
		V_0 = ((float)(((float)(L_14*(57.29578f)))+L_15));
		goto IL_009c;
	}

IL_009c:
	{
		float L_16 = (__this->f4);
		float L_17 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_18 = m425(NULL, ((-L_16)), L_17, V_0, &m425_MI);
		V_1 = ((float)(((float)(L_18*(2.0f)))-(1.0f)));
		t49 * L_19 = (__this->f2);
		NullCheck(L_19);
		int32_t L_20 = (L_19->f0);
		V_7 = L_20;
		if (V_7 == 0)
		{
			goto IL_00e5;
		}
		if (V_7 == 1)
		{
			goto IL_00f6;
		}
		if (V_7 == 2)
		{
			goto IL_0108;
		}
		if (V_7 == 3)
		{
			goto IL_011a;
		}
	}
	{
		goto IL_012c;
	}

IL_00e5:
	{
		t34 * L_21 = (__this->f6);
		NullCheck(L_21);
		m76(L_21, V_1, &m76_MI);
		goto IL_012c;
	}

IL_00f6:
	{
		int32_t L_22 = m521(NULL, &m521_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m113(NULL, ((float)(V_1*(((float)L_22)))), &m113_MI);
		goto IL_012c;
	}

IL_0108:
	{
		int32_t L_23 = m521(NULL, &m521_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m114(NULL, ((float)(V_1*(((float)L_23)))), &m114_MI);
		goto IL_012c;
	}

IL_011a:
	{
		int32_t L_24 = m521(NULL, &m521_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m115(NULL, ((float)(V_1*(((float)L_24)))), &m115_MI);
		goto IL_012c;
	}

IL_012c:
	{
		return;
	}
}
extern MethodInfo m161_MI;
 void m161 (t50 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m161_MI);
	{
		t34 * L_0 = (__this->f6);
		NullCheck(L_0);
		m75(L_0, &m75_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.CrossPlatformInput.TiltInput
extern Il2CppType t49_0_0_6;
FieldInfo t50_f2_FieldInfo = 
{
	"mapping", &t49_0_0_6, &t50_TI, offsetof(t50, f2), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_6;
FieldInfo t50_f3_FieldInfo = 
{
	"tiltAroundAxis", &t47_0_0_6, &t50_TI, offsetof(t50, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t50_f4_FieldInfo = 
{
	"fullTiltAngle", &t124_0_0_6, &t50_TI, offsetof(t50, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t50_f5_FieldInfo = 
{
	"centreAngleOffset", &t124_0_0_6, &t50_TI, offsetof(t50, f5), &EmptyCustomAttributesCache};
extern Il2CppType t34_0_0_1;
FieldInfo t50_f6_FieldInfo = 
{
	"m_SteerAxis", &t34_0_0_1, &t50_TI, offsetof(t50, f6), &EmptyCustomAttributesCache};
static FieldInfo* t50_FIs[] =
{
	&t50_f2_FieldInfo,
	&t50_f3_FieldInfo,
	&t50_f4_FieldInfo,
	&t50_f5_FieldInfo,
	&t50_f6_FieldInfo,
	NULL
};
extern TypeInfo t50_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m158_MI = 
{
	".ctor", (methodPointerType)&m158, &t50_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 159, NULL, (methodPointerType)NULL};
extern TypeInfo t50_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m159_MI = 
{
	"OnEnable", (methodPointerType)&m159, &t50_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 160, NULL, (methodPointerType)NULL};
extern TypeInfo t50_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m160_MI = 
{
	"Update", (methodPointerType)&m160, &t50_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 161, NULL, (methodPointerType)NULL};
extern TypeInfo t50_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m161_MI = 
{
	"OnDisable", (methodPointerType)&m161, &t50_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 162, NULL, (methodPointerType)NULL};
static MethodInfo* t50_MIs[] =
{
	&m158_MI,
	&m159_MI,
	&m160_MI,
	&m161_MI,
	NULL
};
extern TypeInfo t47_TI;
extern TypeInfo t49_TI;
static TypeInfo* t50_TI__nestedTypes[3] =
{
	&t47_TI,
	&t49_TI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t50_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t50_0_0_0;
extern Il2CppType t50_1_0_0;
extern TypeInfo t3_TI;
struct t50;
extern TypeInfo t50_TI;
TypeInfo t50_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "TiltInput", "UnityStandardAssets.CrossPlatformInput", t50_MIs, NULL, t50_FIs, NULL, &t3_TI, t50_TI__nestedTypes, NULL, &t50_TI, NULL, t50_VT, &EmptyCustomAttributesCache, &t50_TI, &t50_0_0_0, &t50_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t50), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 5, 0, 2, 4, 0, 0};
#include "t51.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t51_TI;
#include "t51MD.h"



// Metadata Definition UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
extern Il2CppType t134_0_0_1542;
FieldInfo t51_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t51_TI, offsetof(t51, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t51_0_0_32854;
FieldInfo t51_f2_FieldInfo = 
{
	"Both", &t51_0_0_32854, &t51_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t51_0_0_32854;
FieldInfo t51_f3_FieldInfo = 
{
	"OnlyHorizontal", &t51_0_0_32854, &t51_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t51_0_0_32854;
FieldInfo t51_f4_FieldInfo = 
{
	"OnlyVertical", &t51_0_0_32854, &t51_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t51_FIs[] =
{
	&t51_f1_FieldInfo,
	&t51_f2_FieldInfo,
	&t51_f3_FieldInfo,
	&t51_f4_FieldInfo,
	NULL
};
static const int32_t t51_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t51_f2_DefaultValue = 
{
	&t51_f2_FieldInfo, { (char*)&t51_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t51_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t51_f3_DefaultValue = 
{
	&t51_f3_FieldInfo, { (char*)&t51_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t51_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t51_f4_DefaultValue = 
{
	&t51_f4_FieldInfo, { (char*)&t51_f4_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t51_FDVs[] = 
{
	&t51_f2_DefaultValue,
	&t51_f3_DefaultValue,
	&t51_f4_DefaultValue,
	NULL
};
static MethodInfo* t51_MIs[] =
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
static MethodInfo* t51_VT[] =
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
static Il2CppInterfaceOffsetPair t51_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t51_0_0_0;
extern Il2CppType t51_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern TypeInfo t53_TI;
TypeInfo t51_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "AxisOption", "", t51_MIs, NULL, t51_FIs, NULL, &t15_TI, NULL, &t53_TI, &t134_TI, NULL, t51_VT, &EmptyCustomAttributesCache, &t134_TI, &t51_0_0_0, &t51_1_0_0, t51_IOs, NULL, NULL, t51_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t51)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 258, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t52.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t52_TI;
#include "t52MD.h"



// Metadata Definition UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
extern Il2CppType t134_0_0_1542;
FieldInfo t52_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t52_TI, offsetof(t52, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t52_0_0_32854;
FieldInfo t52_f2_FieldInfo = 
{
	"Absolute", &t52_0_0_32854, &t52_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t52_0_0_32854;
FieldInfo t52_f3_FieldInfo = 
{
	"Relative", &t52_0_0_32854, &t52_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t52_0_0_32854;
FieldInfo t52_f4_FieldInfo = 
{
	"Swipe", &t52_0_0_32854, &t52_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t52_FIs[] =
{
	&t52_f1_FieldInfo,
	&t52_f2_FieldInfo,
	&t52_f3_FieldInfo,
	&t52_f4_FieldInfo,
	NULL
};
static const int32_t t52_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t52_f2_DefaultValue = 
{
	&t52_f2_FieldInfo, { (char*)&t52_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t52_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t52_f3_DefaultValue = 
{
	&t52_f3_FieldInfo, { (char*)&t52_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t52_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t52_f4_DefaultValue = 
{
	&t52_f4_FieldInfo, { (char*)&t52_f4_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t52_FDVs[] = 
{
	&t52_f2_DefaultValue,
	&t52_f3_DefaultValue,
	&t52_f4_DefaultValue,
	NULL
};
static MethodInfo* t52_MIs[] =
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
static MethodInfo* t52_VT[] =
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
static Il2CppInterfaceOffsetPair t52_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t52_0_0_0;
extern Il2CppType t52_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern TypeInfo t53_TI;
TypeInfo t52_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "ControlStyle", "", t52_MIs, NULL, t52_FIs, NULL, &t15_TI, NULL, &t53_TI, &t134_TI, NULL, t52_VT, &EmptyCustomAttributesCache, &t134_TI, &t52_0_0_0, &t52_1_0_0, t52_IOs, NULL, NULL, t52_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t52)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 258, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t53.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t53_TI;
#include "t53MD.h"

#include "t54.h"
#include "t170.h"
extern TypeInfo t53_TI;
extern TypeInfo t34_TI;
extern TypeInfo t39_TI;
extern TypeInfo t4_TI;
extern TypeInfo t130_TI;
extern TypeInfo t6_TI;
#include "t170MD.h"
extern MethodInfo m334_MI;
extern MethodInfo m164_MI;
extern MethodInfo m522_MI;
extern MethodInfo m336_MI;
extern MethodInfo m335_MI;
extern MethodInfo m69_MI;
extern MethodInfo m95_MI;
extern MethodInfo m421_MI;
extern MethodInfo m76_MI;
extern MethodInfo m523_MI;
extern MethodInfo m501_MI;
extern MethodInfo m524_MI;
extern MethodInfo m525_MI;
extern MethodInfo m526_MI;
extern MethodInfo m527_MI;
extern MethodInfo m378_MI;
extern MethodInfo m528_MI;
extern MethodInfo m359_MI;
extern MethodInfo m165_MI;
extern MethodInfo m344_MI;
extern MethodInfo m93_MI;
extern MethodInfo m97_MI;
struct t127;
#define m522(__this, method) (t54 *)m362_gshared((t127 *)__this, method)
extern MethodInfo m522_MI;


extern MethodInfo m162_MI;
 void m162 (t53 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m162_MI);
	{
		__this->f4 = (t27*) &_stringLiteral3;
		__this->f5 = (t27*) &_stringLiteral13;
		__this->f6 = (1.0f);
		__this->f7 = (1.0f);
		__this->f16 = (-1);
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m163_MI;
 void m163 (t53 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m163_MI);
	{
		m164(__this, &m164_MI);
		t54 * L_0 = m522(__this, &m522_MI);
		__this->f19 = L_0;
		t54 * L_1 = (__this->f19);
		NullCheck(L_1);
		t2 * L_2 = m336(L_1, &m336_MI);
		NullCheck(L_2);
		t4  L_3 = m335(L_2, &m335_MI);
		__this->f18 = L_3;
		return;
	}
}
extern MethodInfo m164_MI;
 void m164 (t53 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m164_MI);
	t53 * G_B2_0 = {0};
	t53 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t53 * G_B3_1 = {0};
	t53 * G_B5_0 = {0};
	t53 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	t53 * G_B6_1 = {0};
	{
		int32_t L_0 = (__this->f2);
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->f11 = G_B3_0;
		int32_t L_2 = (__this->f2);
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = (__this->f2);
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0035:
	{
		NullCheck(G_B6_1);
		G_B6_1->f12 = G_B6_0;
		bool L_4 = (__this->f11);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		t27* L_5 = (__this->f4);
		t34 * L_6 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m69(L_6, L_5, &m69_MI);
		__this->f13 = L_6;
		t34 * L_7 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m95(NULL, L_7, &m95_MI);
	}

IL_0061:
	{
		bool L_8 = (__this->f12);
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		t27* L_9 = (__this->f5);
		t34 * L_10 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m69(L_10, L_9, &m69_MI);
		__this->f14 = L_10;
		t34 * L_11 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m95(NULL, L_11, &m95_MI);
	}

IL_0088:
	{
		return;
	}
}
extern MethodInfo m165_MI;
 void m165 (t53 * __this, t4  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m165_MI);
	{
		t4  L_0 = m421((&p0), &m421_MI);
		p0 = L_0;
		bool L_1 = (__this->f11);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		t34 * L_2 = (__this->f13);
		NullCheck((&p0));
		float L_3 = ((&p0)->f1);
		NullCheck(L_2);
		m76(L_2, L_3, &m76_MI);
	}

IL_0026:
	{
		bool L_4 = (__this->f12);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		t34 * L_5 = (__this->f14);
		NullCheck((&p0));
		float L_6 = ((&p0)->f2);
		NullCheck(L_5);
		m76(L_5, L_6, &m76_MI);
	}

IL_0043:
	{
		return;
	}
}
extern MethodInfo m166_MI;
 void m166 (t53 * __this, t35 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m166_MI);
	{
		__this->f15 = 1;
		NullCheck(p0);
		int32_t L_0 = m523(p0, &m523_MI);
		__this->f16 = L_0;
		int32_t L_1 = (__this->f3);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck(p0);
		t6  L_2 = m501(p0, &m501_MI);
		t4  L_3 = m524(NULL, L_2, &m524_MI);
		__this->f18 = L_3;
	}

IL_002f:
	{
		return;
	}
}
extern MethodInfo m167_MI;
 void m167 (t53 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m167_MI);
	t6  V_0 = {0};
	t6  V_1 = {0};
	t6  V_2 = {0};
	t6  V_3 = {0};
	{
		bool L_0 = (__this->f15);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		int32_t L_1 = m525(NULL, &m525_MI);
		int32_t L_2 = (__this->f16);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(L_2+1)))))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_3 = (__this->f16);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_4 = (__this->f3);
		if ((((uint32_t)L_4) != ((uint32_t)2)))
		{
			goto IL_0062;
		}
	}
	{
		t6  L_5 = (__this->f17);
		t4  L_6 = m524(NULL, L_5, &m524_MI);
		__this->f18 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		t171* L_7 = m526(NULL, &m526_MI);
		int32_t L_8 = (__this->f16);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		t6  L_9 = m527(((t170 *)(t170 *)SZArrayLdElema(L_7, L_8)), &m527_MI);
		__this->f17 = L_9;
	}

IL_0062:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		t171* L_10 = m526(NULL, &m526_MI);
		int32_t L_11 = (__this->f16);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		t6  L_12 = m527(((t170 *)(t170 *)SZArrayLdElema(L_10, L_11)), &m527_MI);
		V_2 = L_12;
		NullCheck((&V_2));
		float L_13 = ((&V_2)->f1);
		t4 * L_14 = &(__this->f18);
		NullCheck(L_14);
		float L_15 = (L_14->f1);
		t171* L_16 = m526(NULL, &m526_MI);
		int32_t L_17 = (__this->f16);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		t6  L_18 = m527(((t170 *)(t170 *)SZArrayLdElema(L_16, L_17)), &m527_MI);
		V_3 = L_18;
		NullCheck((&V_3));
		float L_19 = ((&V_3)->f2);
		t4 * L_20 = &(__this->f18);
		NullCheck(L_20);
		float L_21 = (L_20->f2);
		m378((&V_1), ((float)(L_13-L_15)), ((float)(L_19-L_21)), &m378_MI);
		t6  L_22 = m528((&V_1), &m528_MI);
		V_0 = L_22;
		t6 * L_23 = (&V_0);
		NullCheck(L_23);
		float L_24 = (L_23->f1);
		float L_25 = (__this->f6);
		NullCheck(L_23);
		L_23->f1 = ((float)(L_24*L_25));
		t6 * L_26 = (&V_0);
		NullCheck(L_26);
		float L_27 = (L_26->f2);
		float L_28 = (__this->f7);
		NullCheck(L_26);
		L_26->f2 = ((float)(L_27*L_28));
		NullCheck((&V_0));
		float L_29 = ((&V_0)->f1);
		NullCheck((&V_0));
		float L_30 = ((&V_0)->f2);
		t4  L_31 = {0};
		m359(&L_31, L_29, L_30, (0.0f), &m359_MI);
		m165(__this, L_31, &m165_MI);
	}

IL_0109:
	{
		return;
	}
}
extern MethodInfo m168_MI;
 void m168 (t53 * __this, t35 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m168_MI);
	{
		__this->f15 = 0;
		__this->f16 = (-1);
		t4  L_0 = m344(NULL, &m344_MI);
		m165(__this, L_0, &m165_MI);
		return;
	}
}
extern MethodInfo m169_MI;
 void m169 (t53 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m169_MI);
	{
		t27* L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		bool L_1 = m93(NULL, L_0, &m93_MI);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		t27* L_2 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m97(NULL, L_2, &m97_MI);
	}

IL_001b:
	{
		t27* L_3 = (__this->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		bool L_4 = m93(NULL, L_3, &m93_MI);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		t27* L_5 = (__this->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m97(NULL, L_5, &m97_MI);
	}

IL_0036:
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.CrossPlatformInput.TouchPad
extern Il2CppType t51_0_0_6;
FieldInfo t53_f2_FieldInfo = 
{
	"axesToUse", &t51_0_0_6, &t53_TI, offsetof(t53, f2), &EmptyCustomAttributesCache};
extern Il2CppType t52_0_0_6;
FieldInfo t53_f3_FieldInfo = 
{
	"controlStyle", &t52_0_0_6, &t53_TI, offsetof(t53, f3), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_6;
FieldInfo t53_f4_FieldInfo = 
{
	"horizontalAxisName", &t27_0_0_6, &t53_TI, offsetof(t53, f4), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_6;
FieldInfo t53_f5_FieldInfo = 
{
	"verticalAxisName", &t27_0_0_6, &t53_TI, offsetof(t53, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t53_f6_FieldInfo = 
{
	"Xsensitivity", &t124_0_0_6, &t53_TI, offsetof(t53, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t53_f7_FieldInfo = 
{
	"Ysensitivity", &t124_0_0_6, &t53_TI, offsetof(t53, f7), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t53_f8_FieldInfo = 
{
	"m_StartPos", &t4_0_0_1, &t53_TI, offsetof(t53, f8), &EmptyCustomAttributesCache};
extern Il2CppType t6_0_0_1;
FieldInfo t53_f9_FieldInfo = 
{
	"m_PreviousDelta", &t6_0_0_1, &t53_TI, offsetof(t53, f9), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t53_f10_FieldInfo = 
{
	"m_JoytickOutput", &t4_0_0_1, &t53_TI, offsetof(t53, f10), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t53_f11_FieldInfo = 
{
	"m_UseX", &t125_0_0_1, &t53_TI, offsetof(t53, f11), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t53_f12_FieldInfo = 
{
	"m_UseY", &t125_0_0_1, &t53_TI, offsetof(t53, f12), &EmptyCustomAttributesCache};
extern Il2CppType t34_0_0_1;
FieldInfo t53_f13_FieldInfo = 
{
	"m_HorizontalVirtualAxis", &t34_0_0_1, &t53_TI, offsetof(t53, f13), &EmptyCustomAttributesCache};
extern Il2CppType t34_0_0_1;
FieldInfo t53_f14_FieldInfo = 
{
	"m_VerticalVirtualAxis", &t34_0_0_1, &t53_TI, offsetof(t53, f14), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t53_f15_FieldInfo = 
{
	"m_Dragging", &t125_0_0_1, &t53_TI, offsetof(t53, f15), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t53_f16_FieldInfo = 
{
	"m_Id", &t134_0_0_1, &t53_TI, offsetof(t53, f16), &EmptyCustomAttributesCache};
extern Il2CppType t6_0_0_1;
FieldInfo t53_f17_FieldInfo = 
{
	"m_PreviousTouchPos", &t6_0_0_1, &t53_TI, offsetof(t53, f17), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t53_f18_FieldInfo = 
{
	"m_Center", &t4_0_0_1, &t53_TI, offsetof(t53, f18), &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_1;
FieldInfo t53_f19_FieldInfo = 
{
	"m_Image", &t54_0_0_1, &t53_TI, offsetof(t53, f19), &EmptyCustomAttributesCache};
static FieldInfo* t53_FIs[] =
{
	&t53_f2_FieldInfo,
	&t53_f3_FieldInfo,
	&t53_f4_FieldInfo,
	&t53_f5_FieldInfo,
	&t53_f6_FieldInfo,
	&t53_f7_FieldInfo,
	&t53_f8_FieldInfo,
	&t53_f9_FieldInfo,
	&t53_f10_FieldInfo,
	&t53_f11_FieldInfo,
	&t53_f12_FieldInfo,
	&t53_f13_FieldInfo,
	&t53_f14_FieldInfo,
	&t53_f15_FieldInfo,
	&t53_f16_FieldInfo,
	&t53_f17_FieldInfo,
	&t53_f18_FieldInfo,
	&t53_f19_FieldInfo,
	NULL
};
extern TypeInfo t53_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m162_MI = 
{
	".ctor", (methodPointerType)&m162, &t53_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 164, NULL, (methodPointerType)NULL};
extern TypeInfo t53_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m163_MI = 
{
	"OnEnable", (methodPointerType)&m163, &t53_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 165, NULL, (methodPointerType)NULL};
extern TypeInfo t53_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m164_MI = 
{
	"CreateVirtualAxes", (methodPointerType)&m164, &t53_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 166, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t53_m165_ParameterInfos[] = 
{
	{"value", 0, 134217816, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t53_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m165_MI = 
{
	"UpdateVirtualAxes", (methodPointerType)&m165, &t53_TI, &t123_0_0_0, RuntimeInvoker_t123_t4, t53_m165_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 167, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t53_m166_ParameterInfos[] = 
{
	{"data", 0, 134217817, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t53_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m166_MI = 
{
	"OnPointerDown", (methodPointerType)&m166, &t53_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t53_m166_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, false, 168, NULL, (methodPointerType)NULL};
extern TypeInfo t53_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m167_MI = 
{
	"Update", (methodPointerType)&m167, &t53_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 169, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t53_m168_ParameterInfos[] = 
{
	{"data", 0, 134217818, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t53_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m168_MI = 
{
	"OnPointerUp", (methodPointerType)&m168, &t53_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t53_m168_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 1, false, false, 170, NULL, (methodPointerType)NULL};
extern TypeInfo t53_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m169_MI = 
{
	"OnDisable", (methodPointerType)&m169, &t53_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 171, NULL, (methodPointerType)NULL};
static MethodInfo* t53_MIs[] =
{
	&m162_MI,
	&m163_MI,
	&m164_MI,
	&m165_MI,
	&m166_MI,
	&m167_MI,
	&m168_MI,
	&m169_MI,
	NULL
};
extern TypeInfo t51_TI;
extern TypeInfo t52_TI;
static TypeInfo* t53_TI__nestedTypes[3] =
{
	&t51_TI,
	&t52_TI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
extern MethodInfo m166_MI;
extern MethodInfo m168_MI;
static MethodInfo* t53_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
	&m166_MI,
	&m168_MI,
};
extern TypeInfo t162_TI;
extern TypeInfo t163_TI;
extern TypeInfo t164_TI;
static TypeInfo* t53_ITIs[] = 
{
	&t162_TI,
	&t163_TI,
	&t164_TI,
};
extern TypeInfo t162_TI;
extern TypeInfo t163_TI;
extern TypeInfo t164_TI;
static Il2CppInterfaceOffsetPair t53_IOs[] = 
{
	{ &t162_TI, 4},
	{ &t163_TI, 5},
	{ &t164_TI, 5},
};
extern TypeInfo t133_TI;
extern MethodInfo m363_MI;
extern TypeInfo t54_TI;
void t53_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t133 * tmp;
		tmp = (t133 *)il2cpp_codegen_object_new (&t133_TI);
		m363(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t54_TI)), &m363_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t53__CustomAttributeCache = {
1,
NULL,
&t53_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t53_0_0_0;
extern Il2CppType t53_1_0_0;
extern TypeInfo t3_TI;
struct t53;
extern TypeInfo t53_TI;
extern CustomAttributesCache t53__CustomAttributeCache;
TypeInfo t53_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "TouchPad", "UnityStandardAssets.CrossPlatformInput", t53_MIs, NULL, t53_FIs, NULL, &t3_TI, t53_TI__nestedTypes, NULL, &t53_TI, t53_ITIs, t53_VT, &t53__CustomAttributeCache, &t53_TI, &t53_0_0_0, &t53_1_0_0, t53_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t53), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 8, 0, 18, 0, 2, 6, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t40_TI;

#include "t57.h"
extern TypeInfo t40_TI;
extern TypeInfo t55_TI;
extern TypeInfo t56_TI;
extern TypeInfo t57_TI;
extern TypeInfo t125_TI;
extern TypeInfo t27_TI;
extern TypeInfo t123_TI;
extern TypeInfo t34_TI;
extern TypeInfo t38_TI;
extern TypeInfo t4_TI;
#include "t57MD.h"
extern MethodInfo m529_MI;
extern MethodInfo m530_MI;
extern MethodInfo m531_MI;
extern MethodInfo m452_MI;
extern MethodInfo m508_MI;
extern MethodInfo m510_MI;
extern MethodInfo m71_MI;
extern MethodInfo m532_MI;
extern MethodInfo m533_MI;
extern MethodInfo m534_MI;
extern MethodInfo m73_MI;
extern MethodInfo m535_MI;
extern MethodInfo m81_MI;
extern MethodInfo m536_MI;
extern MethodInfo m83_MI;
extern MethodInfo m537_MI;
extern MethodInfo m538_MI;
extern MethodInfo m509_MI;
extern MethodInfo m171_MI;
extern MethodInfo m359_MI;
extern MethodInfo m172_MI;


extern MethodInfo m170_MI;
 void m170 (t40 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m170_MI);
	{
		t55 * L_0 = (t55 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t55_TI));
		m529(L_0, &m529_MI);
		__this->f0 = L_0;
		t56 * L_1 = (t56 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t56_TI));
		m530(L_1, &m530_MI);
		__this->f1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t57_TI));
		t57 * L_2 = (t57 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t57_TI));
		m531(L_2, &m531_MI);
		__this->f2 = L_2;
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m171_MI;
 t4  m171 (t40 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m171_MI);
	{
		t4  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m172_MI;
 void m172 (t40 * __this, t4  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m172_MI);
	{
		__this->f3 = p0;
		return;
	}
}
extern MethodInfo m173_MI;
 bool m173 (t40 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m173_MI);
	{
		t55 * L_0 = (__this->f0);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m508_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m174_MI;
 bool m174 (t40 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m174_MI);
	{
		t56 * L_0 = (__this->f1);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m510_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m175_MI;
 void m175 (t40 * __this, t34 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m175_MI);
	{
		t55 * L_0 = (__this->f0);
		NullCheck(p0);
		t27* L_1 = m71(p0, &m71_MI);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m508_MI, L_0, L_1);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		NullCheck(p0);
		t27* L_3 = m71(p0, &m71_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_4 = m532(NULL, (t27*) &_stringLiteral15, L_3, (t27*) &_stringLiteral16, &m532_MI);
		m533(NULL, L_4, &m533_MI);
		goto IL_0063;
	}

IL_0035:
	{
		t55 * L_5 = (__this->f0);
		NullCheck(p0);
		t27* L_6 = m71(p0, &m71_MI);
		NullCheck(L_5);
		VirtActionInvoker2< t27*, t34 * >::Invoke(&m534_MI, L_5, L_6, p0);
		NullCheck(p0);
		bool L_7 = m73(p0, &m73_MI);
		if (L_7)
		{
			goto IL_0063;
		}
	}
	{
		t57 * L_8 = (__this->f2);
		NullCheck(p0);
		t27* L_9 = m71(p0, &m71_MI);
		NullCheck(L_8);
		VirtActionInvoker1< t27* >::Invoke(&m535_MI, L_8, L_9);
	}

IL_0063:
	{
		return;
	}
}
extern MethodInfo m176_MI;
 void m176 (t40 * __this, t38 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m176_MI);
	{
		t56 * L_0 = (__this->f1);
		NullCheck(p0);
		t27* L_1 = m81(p0, &m81_MI);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m510_MI, L_0, L_1);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		NullCheck(p0);
		t27* L_3 = m81(p0, &m81_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_4 = m532(NULL, (t27*) &_stringLiteral17, L_3, (t27*) &_stringLiteral16, &m532_MI);
		m533(NULL, L_4, &m533_MI);
		goto IL_0063;
	}

IL_0035:
	{
		t56 * L_5 = (__this->f1);
		NullCheck(p0);
		t27* L_6 = m81(p0, &m81_MI);
		NullCheck(L_5);
		VirtActionInvoker2< t27*, t38 * >::Invoke(&m536_MI, L_5, L_6, p0);
		NullCheck(p0);
		bool L_7 = m83(p0, &m83_MI);
		if (L_7)
		{
			goto IL_0063;
		}
	}
	{
		t57 * L_8 = (__this->f2);
		NullCheck(p0);
		t27* L_9 = m81(p0, &m81_MI);
		NullCheck(L_8);
		VirtActionInvoker1< t27* >::Invoke(&m535_MI, L_8, L_9);
	}

IL_0063:
	{
		return;
	}
}
extern MethodInfo m177_MI;
 void m177 (t40 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m177_MI);
	{
		t55 * L_0 = (__this->f0);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m508_MI, L_0, p0);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		t55 * L_2 = (__this->f0);
		NullCheck(L_2);
		VirtFuncInvoker1< bool, t27* >::Invoke(&m537_MI, L_2, p0);
	}

IL_001e:
	{
		return;
	}
}
extern MethodInfo m178_MI;
 void m178 (t40 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m178_MI);
	{
		t56 * L_0 = (__this->f1);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m510_MI, L_0, p0);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		t56 * L_2 = (__this->f1);
		NullCheck(L_2);
		VirtFuncInvoker1< bool, t27* >::Invoke(&m538_MI, L_2, p0);
	}

IL_001e:
	{
		return;
	}
}
extern MethodInfo m179_MI;
 t34 * m179 (t40 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m179_MI);
	t34 * G_B3_0 = {0};
	{
		t55 * L_0 = (__this->f0);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t27* >::Invoke(&m508_MI, L_0, p0);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		t55 * L_2 = (__this->f0);
		NullCheck(L_2);
		t34 * L_3 = (t34 *)VirtFuncInvoker1< t34 *, t27* >::Invoke(&m509_MI, L_2, p0);
		G_B3_0 = L_3;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = ((t34 *)(NULL));
	}

IL_0023:
	{
		return G_B3_0;
	}
}
extern MethodInfo m180_MI;
 void m180 (t40 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m180_MI);
	t4  V_0 = {0};
	t4  V_1 = {0};
	{
		t4  L_0 = m171(__this, &m171_MI);
		V_0 = L_0;
		NullCheck((&V_0));
		float L_1 = ((&V_0)->f2);
		t4  L_2 = m171(__this, &m171_MI);
		V_1 = L_2;
		NullCheck((&V_1));
		float L_3 = ((&V_1)->f3);
		t4  L_4 = {0};
		m359(&L_4, p0, L_1, L_3, &m359_MI);
		m172(__this, L_4, &m172_MI);
		return;
	}
}
extern MethodInfo m181_MI;
 void m181 (t40 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m181_MI);
	t4  V_0 = {0};
	t4  V_1 = {0};
	{
		t4  L_0 = m171(__this, &m171_MI);
		V_0 = L_0;
		NullCheck((&V_0));
		float L_1 = ((&V_0)->f1);
		t4  L_2 = m171(__this, &m171_MI);
		V_1 = L_2;
		NullCheck((&V_1));
		float L_3 = ((&V_1)->f3);
		t4  L_4 = {0};
		m359(&L_4, L_1, p0, L_3, &m359_MI);
		m172(__this, L_4, &m172_MI);
		return;
	}
}
extern MethodInfo m182_MI;
 void m182 (t40 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m182_MI);
	t4  V_0 = {0};
	t4  V_1 = {0};
	{
		t4  L_0 = m171(__this, &m171_MI);
		V_0 = L_0;
		NullCheck((&V_0));
		float L_1 = ((&V_0)->f1);
		t4  L_2 = m171(__this, &m171_MI);
		V_1 = L_2;
		NullCheck((&V_1));
		float L_3 = ((&V_1)->f2);
		t4  L_4 = {0};
		m359(&L_4, L_1, L_3, p0, &m359_MI);
		m172(__this, L_4, &m172_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.CrossPlatformInput.VirtualInput
extern Il2CppType t55_0_0_4;
FieldInfo t40_f0_FieldInfo = 
{
	"m_VirtualAxes", &t55_0_0_4, &t40_TI, offsetof(t40, f0), &EmptyCustomAttributesCache};
extern Il2CppType t56_0_0_4;
FieldInfo t40_f1_FieldInfo = 
{
	"m_VirtualButtons", &t56_0_0_4, &t40_TI, offsetof(t40, f1), &EmptyCustomAttributesCache};
extern Il2CppType t57_0_0_4;
FieldInfo t40_f2_FieldInfo = 
{
	"m_AlwaysUseVirtual", &t57_0_0_4, &t40_TI, offsetof(t40, f2), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
extern CustomAttributesCache t40__CustomAttributeCache_U3CvirtualMousePositionU3Ek__BackingField;
FieldInfo t40_f3_FieldInfo = 
{
	"<virtualMousePosition>k__BackingField", &t4_0_0_1, &t40_TI, offsetof(t40, f3), &t40__CustomAttributeCache_U3CvirtualMousePositionU3Ek__BackingField};
static FieldInfo* t40_FIs[] =
{
	&t40_f0_FieldInfo,
	&t40_f1_FieldInfo,
	&t40_f2_FieldInfo,
	&t40_f3_FieldInfo,
	NULL
};
extern MethodInfo m171_MI;
extern MethodInfo m172_MI;
static PropertyInfo t40____virtualMousePosition_PropertyInfo = 
{
	&t40_TI, "virtualMousePosition", &m171_MI, &m172_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t40_PIs[] =
{
	&t40____virtualMousePosition_PropertyInfo,
	NULL
};
extern TypeInfo t40_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m170_MI = 
{
	".ctor", (methodPointerType)&m170, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 172, NULL, (methodPointerType)NULL};
extern TypeInfo t40_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t40__CustomAttributeCache_m171;
MethodInfo m171_MI = 
{
	"get_virtualMousePosition", (methodPointerType)&m171, &t40_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &t40__CustomAttributeCache_m171, 2182, 0, 255, 0, false, false, 173, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t40_m172_ParameterInfos[] = 
{
	{"value", 0, 134217819, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t4 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t40__CustomAttributeCache_m172;
MethodInfo m172_MI = 
{
	"set_virtualMousePosition", (methodPointerType)&m172, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t4, t40_m172_ParameterInfos, &t40__CustomAttributeCache_m172, 2177, 0, 255, 1, false, false, 174, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t40_m173_ParameterInfos[] = 
{
	{"name", 0, 134217820, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m173_MI = 
{
	"AxisExists", (methodPointerType)&m173, &t40_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t40_m173_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 175, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t40_m174_ParameterInfos[] = 
{
	{"name", 0, 134217821, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m174_MI = 
{
	"ButtonExists", (methodPointerType)&m174, &t40_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t40_m174_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 176, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t40_m175_ParameterInfos[] = 
{
	{"axis", 0, 134217822, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m175_MI = 
{
	"RegisterVirtualAxis", (methodPointerType)&m175, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t40_m175_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 177, NULL, (methodPointerType)NULL};
extern Il2CppType t38_0_0_0;
static ParameterInfo t40_m176_ParameterInfos[] = 
{
	{"button", 0, 134217823, &EmptyCustomAttributesCache, &t38_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m176_MI = 
{
	"RegisterVirtualButton", (methodPointerType)&m176, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t40_m176_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 178, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t40_m177_ParameterInfos[] = 
{
	{"name", 0, 134217824, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m177_MI = 
{
	"UnRegisterVirtualAxis", (methodPointerType)&m177, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t40_m177_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 179, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t40_m178_ParameterInfos[] = 
{
	{"name", 0, 134217825, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m178_MI = 
{
	"UnRegisterVirtualButton", (methodPointerType)&m178, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t40_m178_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 180, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t40_m179_ParameterInfos[] = 
{
	{"name", 0, 134217826, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m179_MI = 
{
	"VirtualAxisReference", (methodPointerType)&m179, &t40_TI, &t34_0_0_0, RuntimeInvoker_t25_t25, t40_m179_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 181, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t40_m180_ParameterInfos[] = 
{
	{"f", 0, 134217827, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m180_MI = 
{
	"SetVirtualMousePositionX", (methodPointerType)&m180, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t40_m180_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 182, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t40_m181_ParameterInfos[] = 
{
	{"f", 0, 134217828, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m181_MI = 
{
	"SetVirtualMousePositionY", (methodPointerType)&m181, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t40_m181_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 183, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t40_m182_ParameterInfos[] = 
{
	{"f", 0, 134217829, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m182_MI = 
{
	"SetVirtualMousePositionZ", (methodPointerType)&m182, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t40_m182_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 184, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t40_m490_ParameterInfos[] = 
{
	{"name", 0, 134217830, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"raw", 1, 134217831, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m490_MI = 
{
	"GetAxis", NULL, &t40_TI, &t124_0_0_0, RuntimeInvoker_t124_t25_t137, t40_m490_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 2, false, false, 185, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t40_m491_ParameterInfos[] = 
{
	{"name", 0, 134217832, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m491_MI = 
{
	"GetButton", NULL, &t40_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t40_m491_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 186, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t40_m492_ParameterInfos[] = 
{
	{"name", 0, 134217833, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m492_MI = 
{
	"GetButtonDown", NULL, &t40_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t40_m492_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, false, 187, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t40_m493_ParameterInfos[] = 
{
	{"name", 0, 134217834, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m493_MI = 
{
	"GetButtonUp", NULL, &t40_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t40_m493_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 7, 1, false, false, 188, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t40_m494_ParameterInfos[] = 
{
	{"name", 0, 134217835, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m494_MI = 
{
	"SetButtonDown", NULL, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t40_m494_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, false, 189, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t40_m495_ParameterInfos[] = 
{
	{"name", 0, 134217836, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m495_MI = 
{
	"SetButtonUp", NULL, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t40_m495_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 1, false, false, 190, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t40_m496_ParameterInfos[] = 
{
	{"name", 0, 134217837, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m496_MI = 
{
	"SetAxisPositive", NULL, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t40_m496_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 10, 1, false, false, 191, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t40_m497_ParameterInfos[] = 
{
	{"name", 0, 134217838, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m497_MI = 
{
	"SetAxisNegative", NULL, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t40_m497_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 11, 1, false, false, 192, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t40_m498_ParameterInfos[] = 
{
	{"name", 0, 134217839, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m498_MI = 
{
	"SetAxisZero", NULL, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t40_m498_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 12, 1, false, false, 193, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t40_m499_ParameterInfos[] = 
{
	{"name", 0, 134217840, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134217841, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m499_MI = 
{
	"SetAxis", NULL, &t40_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t124, t40_m499_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 13, 2, false, false, 194, NULL, (methodPointerType)NULL};
extern TypeInfo t40_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m488_MI = 
{
	"MousePosition", NULL, &t40_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 14, 0, false, false, 195, NULL, (methodPointerType)NULL};
static MethodInfo* t40_MIs[] =
{
	&m170_MI,
	&m171_MI,
	&m172_MI,
	&m173_MI,
	&m174_MI,
	&m175_MI,
	&m176_MI,
	&m177_MI,
	&m178_MI,
	&m179_MI,
	&m180_MI,
	&m181_MI,
	&m182_MI,
	&m490_MI,
	&m491_MI,
	&m492_MI,
	&m493_MI,
	&m494_MI,
	&m495_MI,
	&m496_MI,
	&m497_MI,
	&m498_MI,
	&m499_MI,
	&m488_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t40_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t40_CustomAttributesCacheGenerator_U3CvirtualMousePositionU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t40_CustomAttributesCacheGenerator_m171(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t40_CustomAttributesCacheGenerator_m172(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t40__CustomAttributeCache_U3CvirtualMousePositionU3Ek__BackingField = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_U3CvirtualMousePositionU3Ek__BackingField
};
CustomAttributesCache t40__CustomAttributeCache_m171 = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_m171
};
CustomAttributesCache t40__CustomAttributeCache_m172 = {
1,
NULL,
&t40_CustomAttributesCacheGenerator_m172
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t40_0_0_0;
extern Il2CppType t40_1_0_0;
extern TypeInfo t25_TI;
struct t40;
extern TypeInfo t40_TI;
extern CustomAttributesCache t40__CustomAttributeCache_U3CvirtualMousePositionU3Ek__BackingField;
extern CustomAttributesCache t40__CustomAttributeCache_m171;
extern CustomAttributesCache t40__CustomAttributeCache_m172;
TypeInfo t40_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "VirtualInput", "UnityStandardAssets.CrossPlatformInput", t40_MIs, t40_PIs, t40_FIs, NULL, &t25_TI, NULL, NULL, &t40_TI, NULL, t40_VT, &EmptyCustomAttributesCache, &t40_TI, &t40_0_0_0, &t40_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t40), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 24, 1, 4, 0, 0, 15, 0, 0};
#include "t58.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t58_TI;
#include "t58MD.h"



// Metadata Definition UnityStandardAssets.Utility.ActivateTrigger/Mode
extern Il2CppType t134_0_0_1542;
FieldInfo t58_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t58_TI, offsetof(t58, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_32854;
FieldInfo t58_f2_FieldInfo = 
{
	"Trigger", &t58_0_0_32854, &t58_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_32854;
FieldInfo t58_f3_FieldInfo = 
{
	"Replace", &t58_0_0_32854, &t58_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_32854;
FieldInfo t58_f4_FieldInfo = 
{
	"Activate", &t58_0_0_32854, &t58_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_32854;
FieldInfo t58_f5_FieldInfo = 
{
	"Enable", &t58_0_0_32854, &t58_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_32854;
FieldInfo t58_f6_FieldInfo = 
{
	"Animate", &t58_0_0_32854, &t58_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_32854;
FieldInfo t58_f7_FieldInfo = 
{
	"Deactivate", &t58_0_0_32854, &t58_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t58_FIs[] =
{
	&t58_f1_FieldInfo,
	&t58_f2_FieldInfo,
	&t58_f3_FieldInfo,
	&t58_f4_FieldInfo,
	&t58_f5_FieldInfo,
	&t58_f6_FieldInfo,
	&t58_f7_FieldInfo,
	NULL
};
static const int32_t t58_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t58_f2_DefaultValue = 
{
	&t58_f2_FieldInfo, { (char*)&t58_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t58_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t58_f3_DefaultValue = 
{
	&t58_f3_FieldInfo, { (char*)&t58_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t58_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t58_f4_DefaultValue = 
{
	&t58_f4_FieldInfo, { (char*)&t58_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t58_f5_DefaultValueData = 3;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t58_f5_DefaultValue = 
{
	&t58_f5_FieldInfo, { (char*)&t58_f5_DefaultValueData, &t134_0_0_0 }};
static const int32_t t58_f6_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t58_f6_DefaultValue = 
{
	&t58_f6_FieldInfo, { (char*)&t58_f6_DefaultValueData, &t134_0_0_0 }};
static const int32_t t58_f7_DefaultValueData = 5;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t58_f7_DefaultValue = 
{
	&t58_f7_FieldInfo, { (char*)&t58_f7_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t58_FDVs[] = 
{
	&t58_f2_DefaultValue,
	&t58_f3_DefaultValue,
	&t58_f4_DefaultValue,
	&t58_f5_DefaultValue,
	&t58_f6_DefaultValue,
	&t58_f7_DefaultValue,
	NULL
};
static MethodInfo* t58_MIs[] =
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
static MethodInfo* t58_VT[] =
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
static Il2CppInterfaceOffsetPair t58_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t58_0_0_0;
extern Il2CppType t58_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern TypeInfo t59_TI;
TypeInfo t58_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "Mode", "", t58_MIs, NULL, t58_FIs, NULL, &t15_TI, NULL, &t59_TI, &t134_TI, NULL, t58_VT, &EmptyCustomAttributesCache, &t134_TI, &t58_0_0_0, &t58_1_0_0, t58_IOs, NULL, NULL, t58_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t58)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 258, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 7, 0, 0, 23, 0, 3};
#include "t59.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t59_TI;
#include "t59MD.h"

#include "t172.h"
#include "t173.h"
extern TypeInfo t59_TI;
extern TypeInfo t172_TI;
extern TypeInfo t62_TI;
#include "t172MD.h"
#include "t173MD.h"
extern MethodInfo m334_MI;
extern MethodInfo m370_MI;
extern MethodInfo m371_MI;
extern MethodInfo m539_MI;
extern MethodInfo m356_MI;
extern MethodInfo m335_MI;
extern MethodInfo m430_MI;
extern MethodInfo m540_MI;
extern MethodInfo m541_MI;
extern MethodInfo m505_MI;
extern MethodInfo m542_MI;
extern MethodInfo m543_MI;
extern MethodInfo m544_MI;
extern MethodInfo m184_MI;
struct t62;
struct t62;
 t25 * m545_gshared (t62 * __this, MethodInfo* method);
#define m545(__this, method) (t25 *)m545_gshared((t62 *)__this, method)
#define m543(__this, method) (t173 *)m545_gshared((t62 *)__this, method)
extern MethodInfo m543_MI;


extern MethodInfo m183_MI;
 void m183 (t59 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m183_MI);
	{
		__this->f2 = 2;
		__this->f5 = 1;
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m184_MI;
 void m184 (t59 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m184_MI);
	t60 * V_0 = {0};
	t172 * V_1 = {0};
	t62 * V_2 = {0};
	int32_t V_3 = {0};
	t60 * G_B4_0 = {0};
	t60 * G_B3_0 = {0};
	{
		int32_t L_0 = (__this->f5);
		__this->f5 = ((int32_t)(L_0-1));
		int32_t L_1 = (__this->f5);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2 = (__this->f6);
		if (!L_2)
		{
			goto IL_014e;
		}
	}

IL_0024:
	{
		t60 * L_3 = (__this->f3);
		t60 * L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0037;
		}
	}
	{
		t62 * L_5 = m370(__this, &m370_MI);
		G_B4_0 = ((t60 *)(L_5));
	}

IL_0037:
	{
		V_0 = G_B4_0;
		V_1 = ((t172 *)IsInst(V_0, InitializedTypeInfo(&t172_TI)));
		V_2 = ((t62 *)IsInst(V_0, InitializedTypeInfo(&t62_TI)));
		bool L_6 = m371(NULL, V_1, (t60 *)NULL, &m371_MI);
		if (!L_6)
		{
			goto IL_0059;
		}
	}
	{
		NullCheck(V_1);
		t62 * L_7 = m370(V_1, &m370_MI);
		V_2 = L_7;
	}

IL_0059:
	{
		int32_t L_8 = (__this->f2);
		V_3 = L_8;
		if (V_3 == 0)
		{
			goto IL_0083;
		}
		if (V_3 == 1)
		{
			goto IL_009f;
		}
		if (V_3 == 2)
		{
			goto IL_00e9;
		}
		if (V_3 == 3)
		{
			goto IL_0101;
		}
		if (V_3 == 4)
		{
			goto IL_0119;
		}
		if (V_3 == 5)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_014e;
	}

IL_0083:
	{
		bool L_9 = m371(NULL, V_2, (t60 *)NULL, &m371_MI);
		if (!L_9)
		{
			goto IL_009a;
		}
	}
	{
		NullCheck(V_2);
		m539(V_2, (t27*) &_stringLiteral18, &m539_MI);
	}

IL_009a:
	{
		goto IL_014e;
	}

IL_009f:
	{
		t62 * L_10 = (__this->f4);
		bool L_11 = m371(NULL, L_10, (t60 *)NULL, &m371_MI);
		if (!L_11)
		{
			goto IL_00e4;
		}
	}
	{
		bool L_12 = m371(NULL, V_2, (t60 *)NULL, &m371_MI);
		if (!L_12)
		{
			goto IL_00e4;
		}
	}
	{
		t62 * L_13 = (__this->f4);
		NullCheck(V_2);
		t2 * L_14 = m356(V_2, &m356_MI);
		NullCheck(L_14);
		t4  L_15 = m335(L_14, &m335_MI);
		NullCheck(V_2);
		t2 * L_16 = m356(V_2, &m356_MI);
		NullCheck(L_16);
		t21  L_17 = m430(L_16, &m430_MI);
		m540(NULL, L_13, L_15, L_17, &m540_MI);
		m541(NULL, V_2, &m541_MI);
	}

IL_00e4:
	{
		goto IL_014e;
	}

IL_00e9:
	{
		bool L_18 = m371(NULL, V_2, (t60 *)NULL, &m371_MI);
		if (!L_18)
		{
			goto IL_00fc;
		}
	}
	{
		NullCheck(V_2);
		m505(V_2, 1, &m505_MI);
	}

IL_00fc:
	{
		goto IL_014e;
	}

IL_0101:
	{
		bool L_19 = m371(NULL, V_1, (t60 *)NULL, &m371_MI);
		if (!L_19)
		{
			goto IL_0114;
		}
	}
	{
		NullCheck(V_1);
		m542(V_1, 1, &m542_MI);
	}

IL_0114:
	{
		goto IL_014e;
	}

IL_0119:
	{
		bool L_20 = m371(NULL, V_2, (t60 *)NULL, &m371_MI);
		if (!L_20)
		{
			goto IL_0131;
		}
	}
	{
		NullCheck(V_2);
		t173 * L_21 = m543(V_2, &m543_MI);
		NullCheck(L_21);
		m544(L_21, &m544_MI);
	}

IL_0131:
	{
		goto IL_014e;
	}

IL_0136:
	{
		bool L_22 = m371(NULL, V_2, (t60 *)NULL, &m371_MI);
		if (!L_22)
		{
			goto IL_0149;
		}
	}
	{
		NullCheck(V_2);
		m505(V_2, 0, &m505_MI);
	}

IL_0149:
	{
		goto IL_014e;
	}

IL_014e:
	{
		return;
	}
}
extern MethodInfo m185_MI;
 void m185 (t59 * __this, t63 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m185_MI);
	{
		m184(__this, &m184_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.ActivateTrigger
extern Il2CppType t58_0_0_6;
FieldInfo t59_f2_FieldInfo = 
{
	"action", &t58_0_0_6, &t59_TI, offsetof(t59, f2), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_6;
FieldInfo t59_f3_FieldInfo = 
{
	"target", &t60_0_0_6, &t59_TI, offsetof(t59, f3), &EmptyCustomAttributesCache};
extern Il2CppType t62_0_0_6;
FieldInfo t59_f4_FieldInfo = 
{
	"source", &t62_0_0_6, &t59_TI, offsetof(t59, f4), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_6;
FieldInfo t59_f5_FieldInfo = 
{
	"triggerCount", &t134_0_0_6, &t59_TI, offsetof(t59, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t59_f6_FieldInfo = 
{
	"repeatTrigger", &t125_0_0_6, &t59_TI, offsetof(t59, f6), &EmptyCustomAttributesCache};
static FieldInfo* t59_FIs[] =
{
	&t59_f2_FieldInfo,
	&t59_f3_FieldInfo,
	&t59_f4_FieldInfo,
	&t59_f5_FieldInfo,
	&t59_f6_FieldInfo,
	NULL
};
extern TypeInfo t59_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m183_MI = 
{
	".ctor", (methodPointerType)&m183, &t59_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 196, NULL, (methodPointerType)NULL};
extern TypeInfo t59_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m184_MI = 
{
	"DoActivateTrigger", (methodPointerType)&m184, &t59_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 197, NULL, (methodPointerType)NULL};
extern Il2CppType t63_0_0_0;
static ParameterInfo t59_m185_ParameterInfos[] = 
{
	{"other", 0, 134217842, &EmptyCustomAttributesCache, &t63_0_0_0},
};
extern TypeInfo t59_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m185_MI = 
{
	"OnTriggerEnter", (methodPointerType)&m185, &t59_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t59_m185_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 198, NULL, (methodPointerType)NULL};
static MethodInfo* t59_MIs[] =
{
	&m183_MI,
	&m184_MI,
	&m185_MI,
	NULL
};
extern TypeInfo t58_TI;
static TypeInfo* t59_TI__nestedTypes[2] =
{
	&t58_TI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t59_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t59_0_0_0;
extern Il2CppType t59_1_0_0;
extern TypeInfo t3_TI;
struct t59;
extern TypeInfo t59_TI;
TypeInfo t59_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "ActivateTrigger", "UnityStandardAssets.Utility", t59_MIs, NULL, t59_FIs, NULL, &t3_TI, t59_TI__nestedTypes, NULL, &t59_TI, NULL, t59_VT, &EmptyCustomAttributesCache, &t59_TI, &t59_0_0_0, &t59_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t59), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 5, 0, 1, 4, 0, 0};
#include "t64.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t64_TI;
#include "t64MD.h"

extern MethodInfo m452_MI;


extern MethodInfo m186_MI;
 void m186 (t64 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m186_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition
extern Il2CppType t65_0_0_6;
FieldInfo t64_f0_FieldInfo = 
{
	"original", &t65_0_0_6, &t64_TI, offsetof(t64, f0), &EmptyCustomAttributesCache};
extern Il2CppType t65_0_0_6;
FieldInfo t64_f1_FieldInfo = 
{
	"replacement", &t65_0_0_6, &t64_TI, offsetof(t64, f1), &EmptyCustomAttributesCache};
static FieldInfo* t64_FIs[] =
{
	&t64_f0_FieldInfo,
	&t64_f1_FieldInfo,
	NULL
};
extern TypeInfo t64_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m186_MI = 
{
	".ctor", (methodPointerType)&m186, &t64_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 201, NULL, (methodPointerType)NULL};
static MethodInfo* t64_MIs[] =
{
	&m186_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t64_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t64_0_0_0;
extern Il2CppType t64_1_0_0;
extern TypeInfo t25_TI;
struct t64;
extern TypeInfo t64_TI;
extern TypeInfo t68_TI;
TypeInfo t64_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "ReplacementDefinition", "", t64_MIs, NULL, t64_FIs, NULL, &t25_TI, NULL, &t68_TI, &t64_TI, NULL, t64_VT, &EmptyCustomAttributesCache, &t64_TI, &t64_0_0_0, &t64_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t64), 0, -1, 0, 0, -1, 1056770, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t66.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t66_TI;
#include "t66MD.h"

extern TypeInfo t67_TI;
extern TypeInfo t64_TI;
extern TypeInfo t66_TI;
extern MethodInfo m452_MI;


extern MethodInfo m187_MI;
 void m187 (t66 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m187_MI);
	{
		__this->f0 = ((t67*)SZArrayNew(InitializedTypeInfo(&t67_TI), 0));
		m452(__this, &m452_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList
extern Il2CppType t67_0_0_6;
FieldInfo t66_f0_FieldInfo = 
{
	"items", &t67_0_0_6, &t66_TI, offsetof(t66, f0), &EmptyCustomAttributesCache};
static FieldInfo* t66_FIs[] =
{
	&t66_f0_FieldInfo,
	NULL
};
extern TypeInfo t66_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m187_MI = 
{
	".ctor", (methodPointerType)&m187, &t66_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 202, NULL, (methodPointerType)NULL};
static MethodInfo* t66_MIs[] =
{
	&m187_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t66_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t66_0_0_0;
extern Il2CppType t66_1_0_0;
extern TypeInfo t25_TI;
struct t66;
extern TypeInfo t66_TI;
extern TypeInfo t68_TI;
TypeInfo t66_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "ReplacementList", "", t66_MIs, NULL, t66_FIs, NULL, &t25_TI, NULL, &t68_TI, &t66_TI, NULL, t66_VT, &EmptyCustomAttributesCache, &t66_TI, &t66_0_0_0, &t66_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t66), 0, -1, 0, 0, -1, 1056770, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 0};
#include "t68.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t68_TI;
#include "t68MD.h"

extern MethodInfo m334_MI;


extern MethodInfo m188_MI;
 void m188 (t68 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m188_MI);
	{
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m189_MI;
 void m189 (t68 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m189_MI);
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.AutoMobileShaderSwitch
extern Il2CppType t66_0_0_1;
extern CustomAttributesCache t68__CustomAttributeCache_m_ReplacementList;
FieldInfo t68_f2_FieldInfo = 
{
	"m_ReplacementList", &t66_0_0_1, &t68_TI, offsetof(t68, f2), &t68__CustomAttributeCache_m_ReplacementList};
static FieldInfo* t68_FIs[] =
{
	&t68_f2_FieldInfo,
	NULL
};
extern TypeInfo t68_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m188_MI = 
{
	".ctor", (methodPointerType)&m188, &t68_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 199, NULL, (methodPointerType)NULL};
extern TypeInfo t68_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m189_MI = 
{
	"OnEnable", (methodPointerType)&m189, &t68_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 200, NULL, (methodPointerType)NULL};
static MethodInfo* t68_MIs[] =
{
	&m188_MI,
	&m189_MI,
	NULL
};
extern TypeInfo t64_TI;
extern TypeInfo t66_TI;
static TypeInfo* t68_TI__nestedTypes[3] =
{
	&t64_TI,
	&t66_TI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t68_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t68_CustomAttributesCacheGenerator_m_ReplacementList(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t68__CustomAttributeCache_m_ReplacementList = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_m_ReplacementList
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t68_0_0_0;
extern Il2CppType t68_1_0_0;
extern TypeInfo t3_TI;
struct t68;
extern TypeInfo t68_TI;
extern CustomAttributesCache t68__CustomAttributeCache_m_ReplacementList;
TypeInfo t68_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "AutoMobileShaderSwitch", "UnityStandardAssets.Utility", t68_MIs, NULL, t68_FIs, NULL, &t3_TI, t68_TI__nestedTypes, NULL, &t68_TI, NULL, t68_VT, &EmptyCustomAttributesCache, &t68_TI, &t68_0_0_0, &t68_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t68), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 2, 4, 0, 0};
#include "t69.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t69_TI;
#include "t69MD.h"

#include "t70.h"
extern TypeInfo t69_TI;
extern MethodInfo m452_MI;


extern MethodInfo m190_MI;
 void m190 (t69 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m190_MI);
	{
		__this->f1 = 1;
		m452(__this, &m452_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
extern Il2CppType t4_0_0_6;
FieldInfo t69_f0_FieldInfo = 
{
	"value", &t4_0_0_6, &t69_TI, offsetof(t69, f0), &EmptyCustomAttributesCache};
extern Il2CppType t70_0_0_6;
FieldInfo t69_f1_FieldInfo = 
{
	"space", &t70_0_0_6, &t69_TI, offsetof(t69, f1), &EmptyCustomAttributesCache};
static FieldInfo* t69_FIs[] =
{
	&t69_f0_FieldInfo,
	&t69_f1_FieldInfo,
	NULL
};
extern TypeInfo t69_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m190_MI = 
{
	".ctor", (methodPointerType)&m190, &t69_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 206, NULL, (methodPointerType)NULL};
static MethodInfo* t69_MIs[] =
{
	&m190_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t69_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t69_0_0_0;
extern Il2CppType t69_1_0_0;
extern TypeInfo t25_TI;
struct t69;
extern TypeInfo t69_TI;
extern TypeInfo t71_TI;
TypeInfo t69_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "Vector3andSpace", "", t69_MIs, NULL, t69_FIs, NULL, &t25_TI, NULL, &t71_TI, &t69_TI, NULL, t69_VT, &EmptyCustomAttributesCache, &t69_TI, &t69_0_0_0, &t69_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t69), 0, -1, 0, 0, -1, 1056770, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t71.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t71_TI;
#include "t71MD.h"

extern TypeInfo t71_TI;
extern TypeInfo t69_TI;
extern MethodInfo m334_MI;
extern MethodInfo m546_MI;
extern MethodInfo m345_MI;
extern MethodInfo m336_MI;
extern MethodInfo m343_MI;
extern MethodInfo m547_MI;
extern MethodInfo m548_MI;


extern MethodInfo m191_MI;
 void m191 (t71 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m191_MI);
	{
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m192_MI;
 void m192 (t71 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m192_MI);
	{
		float L_0 = m546(NULL, &m546_MI);
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m193_MI;
 void m193 (t71 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m193_MI);
	float V_0 = 0.0f;
	{
		float L_0 = m345(NULL, &m345_MI);
		V_0 = L_0;
		bool L_1 = (__this->f4);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		float L_2 = m546(NULL, &m546_MI);
		float L_3 = (__this->f5);
		V_0 = ((float)(L_2-L_3));
		float L_4 = m546(NULL, &m546_MI);
		__this->f5 = L_4;
	}

IL_0029:
	{
		t2 * L_5 = m336(__this, &m336_MI);
		t69 * L_6 = (__this->f2);
		NullCheck(L_6);
		t4  L_7 = (L_6->f0);
		t4  L_8 = m343(NULL, L_7, V_0, &m343_MI);
		t69 * L_9 = (__this->f2);
		NullCheck(L_9);
		int32_t L_10 = (L_9->f1);
		NullCheck(L_5);
		m547(L_5, L_8, L_10, &m547_MI);
		t2 * L_11 = m336(__this, &m336_MI);
		t69 * L_12 = (__this->f3);
		NullCheck(L_12);
		t4  L_13 = (L_12->f0);
		t4  L_14 = m343(NULL, L_13, V_0, &m343_MI);
		t69 * L_15 = (__this->f2);
		NullCheck(L_15);
		int32_t L_16 = (L_15->f1);
		NullCheck(L_11);
		m548(L_11, L_14, L_16, &m548_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.AutoMoveAndRotate
extern Il2CppType t69_0_0_6;
FieldInfo t71_f2_FieldInfo = 
{
	"moveUnitsPerSecond", &t69_0_0_6, &t71_TI, offsetof(t71, f2), &EmptyCustomAttributesCache};
extern Il2CppType t69_0_0_6;
FieldInfo t71_f3_FieldInfo = 
{
	"rotateDegreesPerSecond", &t69_0_0_6, &t71_TI, offsetof(t71, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t71_f4_FieldInfo = 
{
	"ignoreTimescale", &t125_0_0_6, &t71_TI, offsetof(t71, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t71_f5_FieldInfo = 
{
	"m_LastRealTime", &t124_0_0_1, &t71_TI, offsetof(t71, f5), &EmptyCustomAttributesCache};
static FieldInfo* t71_FIs[] =
{
	&t71_f2_FieldInfo,
	&t71_f3_FieldInfo,
	&t71_f4_FieldInfo,
	&t71_f5_FieldInfo,
	NULL
};
extern TypeInfo t71_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m191_MI = 
{
	".ctor", (methodPointerType)&m191, &t71_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 203, NULL, (methodPointerType)NULL};
extern TypeInfo t71_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m192_MI = 
{
	"Start", (methodPointerType)&m192, &t71_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 204, NULL, (methodPointerType)NULL};
extern TypeInfo t71_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m193_MI = 
{
	"Update", (methodPointerType)&m193, &t71_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 205, NULL, (methodPointerType)NULL};
static MethodInfo* t71_MIs[] =
{
	&m191_MI,
	&m192_MI,
	&m193_MI,
	NULL
};
extern TypeInfo t69_TI;
static TypeInfo* t71_TI__nestedTypes[2] =
{
	&t69_TI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t71_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t71_0_0_0;
extern Il2CppType t71_1_0_0;
extern TypeInfo t3_TI;
struct t71;
extern TypeInfo t71_TI;
TypeInfo t71_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "AutoMoveAndRotate", "UnityStandardAssets.Utility", t71_MIs, NULL, t71_FIs, NULL, &t3_TI, t71_TI__nestedTypes, NULL, &t71_TI, NULL, t71_VT, &EmptyCustomAttributesCache, &t71_TI, &t71_0_0_0, &t71_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t71), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 4, 0, 1, 4, 0, 0};
#include "t72.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t72_TI;
#include "t72MD.h"

extern TypeInfo t72_TI;
extern MethodInfo m452_MI;
extern MethodInfo m336_MI;
extern MethodInfo m335_MI;
extern MethodInfo m347_MI;
extern MethodInfo m416_MI;
extern MethodInfo m549_MI;
extern MethodInfo m471_MI;
extern MethodInfo m550_MI;


extern MethodInfo m194_MI;
 void m194 (t72 * __this, t32 * p0, t2 * p1, t4  p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m194_MI);
	{
		m452(__this, &m452_MI);
		__this->f3 = p2;
		__this->f0 = p0;
		__this->f2 = p1;
		return;
	}
}
extern MethodInfo m195_MI;
 void m195 (t72 * __this, t32 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m195_MI);
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m196_MI;
 void m196 (t72 * __this, t2 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m196_MI);
	{
		__this->f2 = p0;
		return;
	}
}
extern MethodInfo m197_MI;
 void m197 (t72 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m197_MI);
	t29  V_0 = {0};
	{
		t2 * L_0 = (__this->f2);
		NullCheck(L_0);
		t2 * L_1 = m336(L_0, &m336_MI);
		NullCheck(L_1);
		t4  L_2 = m335(L_1, &m335_MI);
		t4  L_3 = (__this->f3);
		t4  L_4 = m347(NULL, L_2, L_3, &m347_MI);
		t2 * L_5 = (__this->f2);
		NullCheck(L_5);
		t2 * L_6 = m336(L_5, &m336_MI);
		NullCheck(L_6);
		t4  L_7 = m416(L_6, &m416_MI);
		bool L_8 = m549(NULL, L_4, L_7, (&V_0), (100.0f), &m549_MI);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		t4  L_9 = m471((&V_0), &m471_MI);
		__this->f1 = L_9;
		__this->f4 = 1;
		return;
	}

IL_0051:
	{
		__this->f4 = 0;
		return;
	}
}
extern MethodInfo m198_MI;
 void m198 (t72 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m198_MI);
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		t32 * L_1 = (__this->f0);
		NullCheck(L_1);
		t2 * L_2 = m336(L_1, &m336_MI);
		t4  L_3 = (__this->f1);
		NullCheck(L_2);
		m550(L_2, L_3, &m550_MI);
	}

IL_0021:
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.CameraRefocus
extern Il2CppType t32_0_0_6;
FieldInfo t72_f0_FieldInfo = 
{
	"Camera", &t32_0_0_6, &t72_TI, offsetof(t72, f0), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_6;
FieldInfo t72_f1_FieldInfo = 
{
	"Lookatpoint", &t4_0_0_6, &t72_TI, offsetof(t72, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t72_f2_FieldInfo = 
{
	"Parent", &t2_0_0_6, &t72_TI, offsetof(t72, f2), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t72_f3_FieldInfo = 
{
	"m_OrigCameraPos", &t4_0_0_1, &t72_TI, offsetof(t72, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t72_f4_FieldInfo = 
{
	"m_Refocus", &t125_0_0_1, &t72_TI, offsetof(t72, f4), &EmptyCustomAttributesCache};
static FieldInfo* t72_FIs[] =
{
	&t72_f0_FieldInfo,
	&t72_f1_FieldInfo,
	&t72_f2_FieldInfo,
	&t72_f3_FieldInfo,
	&t72_f4_FieldInfo,
	NULL
};
extern Il2CppType t32_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t72_m194_ParameterInfos[] = 
{
	{"camera", 0, 134217843, &EmptyCustomAttributesCache, &t32_0_0_0},
	{"parent", 1, 134217844, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"origCameraPos", 2, 134217845, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t72_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m194_MI = 
{
	".ctor", (methodPointerType)&m194, &t72_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t4, t72_m194_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 207, NULL, (methodPointerType)NULL};
extern Il2CppType t32_0_0_0;
static ParameterInfo t72_m195_ParameterInfos[] = 
{
	{"camera", 0, 134217846, &EmptyCustomAttributesCache, &t32_0_0_0},
};
extern TypeInfo t72_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m195_MI = 
{
	"ChangeCamera", (methodPointerType)&m195, &t72_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t72_m195_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 208, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t72_m196_ParameterInfos[] = 
{
	{"parent", 0, 134217847, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t72_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m196_MI = 
{
	"ChangeParent", (methodPointerType)&m196, &t72_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t72_m196_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 209, NULL, (methodPointerType)NULL};
extern TypeInfo t72_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m197_MI = 
{
	"GetFocusPoint", (methodPointerType)&m197, &t72_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 210, NULL, (methodPointerType)NULL};
extern TypeInfo t72_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m198_MI = 
{
	"SetFocusPoint", (methodPointerType)&m198, &t72_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 211, NULL, (methodPointerType)NULL};
static MethodInfo* t72_MIs[] =
{
	&m194_MI,
	&m195_MI,
	&m196_MI,
	&m197_MI,
	&m198_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t72_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t72_0_0_0;
extern Il2CppType t72_1_0_0;
extern TypeInfo t25_TI;
struct t72;
extern TypeInfo t72_TI;
TypeInfo t72_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "CameraRefocus", "UnityStandardAssets.Utility", t72_MIs, NULL, t72_FIs, NULL, &t25_TI, NULL, NULL, &t72_TI, NULL, t72_VT, &EmptyCustomAttributesCache, &t72_TI, &t72_0_0_0, &t72_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t72), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 5, 0, 5, 0, 0, 4, 0, 0};
#include "t73.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t73_TI;
#include "t73MD.h"

#include "t174.h"
#include "t74.h"
extern TypeInfo t73_TI;
extern TypeInfo t175_TI;
extern TypeInfo t174_TI;
extern TypeInfo t74_TI;
extern TypeInfo t4_TI;
#include "t174MD.h"
#include "t74MD.h"
extern MethodInfo m551_MI;
extern MethodInfo m552_MI;
extern MethodInfo m452_MI;
extern MethodInfo m336_MI;
extern MethodInfo m458_MI;
extern MethodInfo m553_MI;
extern MethodInfo m554_MI;
extern MethodInfo m555_MI;
extern MethodInfo m556_MI;
extern MethodInfo m345_MI;
extern MethodInfo m359_MI;


extern MethodInfo m199_MI;
 void m199 (t73 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m199_MI);
	{
		__this->f0 = (0.33f);
		__this->f1 = (0.33f);
		t175* L_0 = ((t175*)SZArrayNew(InitializedTypeInfo(&t175_TI), 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		t174  L_1 = {0};
		m551(&L_1, (0.0f), (0.0f), &m551_MI);
		*((t174 *)(t174 *)SZArrayLdElema(L_0, 0)) = L_1;
		t175* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		t174  L_3 = {0};
		m551(&L_3, (0.5f), (1.0f), &m551_MI);
		*((t174 *)(t174 *)SZArrayLdElema(L_2, 1)) = L_3;
		t175* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		t174  L_5 = {0};
		m551(&L_5, (1.0f), (0.0f), &m551_MI);
		*((t174 *)(t174 *)SZArrayLdElema(L_4, 2)) = L_5;
		t175* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		t174  L_7 = {0};
		m551(&L_7, (1.5f), (-1.0f), &m551_MI);
		*((t174 *)(t174 *)SZArrayLdElema(L_6, 3)) = L_7;
		t175* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		t174  L_9 = {0};
		m551(&L_9, (2.0f), (0.0f), &m551_MI);
		*((t174 *)(t174 *)SZArrayLdElema(L_8, 4)) = L_9;
		t74 * L_10 = (t74 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t74_TI));
		m552(L_10, L_8, &m552_MI);
		__this->f2 = L_10;
		__this->f3 = (1.0f);
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m200_MI;
 void m200 (t73 * __this, t32 * p0, float p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m200_MI);
	t174  V_0 = {0};
	{
		__this->f6 = p1;
		NullCheck(p0);
		t2 * L_0 = m336(p0, &m336_MI);
		NullCheck(L_0);
		t4  L_1 = m458(L_0, &m458_MI);
		__this->f7 = L_1;
		t74 * L_2 = (__this->f2);
		t74 * L_3 = (__this->f2);
		NullCheck(L_3);
		int32_t L_4 = m553(L_3, &m553_MI);
		NullCheck(L_2);
		t174  L_5 = m554(L_2, ((int32_t)(L_4-1)), &m554_MI);
		V_0 = L_5;
		float L_6 = m555((&V_0), &m555_MI);
		__this->f8 = L_6;
		return;
	}
}
extern MethodInfo m201_MI;
 t4  m201 (t73 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m201_MI);
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		t4 * L_0 = &(__this->f7);
		NullCheck(L_0);
		float L_1 = (L_0->f1);
		t74 * L_2 = (__this->f2);
		float L_3 = (__this->f4);
		NullCheck(L_2);
		float L_4 = m556(L_2, L_3, &m556_MI);
		float L_5 = (__this->f0);
		V_0 = ((float)(L_1+((float)(L_4*L_5))));
		t4 * L_6 = &(__this->f7);
		NullCheck(L_6);
		float L_7 = (L_6->f2);
		t74 * L_8 = (__this->f2);
		float L_9 = (__this->f5);
		NullCheck(L_8);
		float L_10 = m556(L_8, L_9, &m556_MI);
		float L_11 = (__this->f1);
		V_1 = ((float)(L_7+((float)(L_10*L_11))));
		float L_12 = (__this->f4);
		float L_13 = m345(NULL, &m345_MI);
		float L_14 = (__this->f6);
		__this->f4 = ((float)(L_12+((float)(((float)(p0*L_13))/L_14))));
		float L_15 = (__this->f5);
		float L_16 = m345(NULL, &m345_MI);
		float L_17 = (__this->f6);
		float L_18 = (__this->f3);
		__this->f5 = ((float)(L_15+((float)(((float)(((float)(p0*L_16))/L_17))*L_18))));
		float L_19 = (__this->f4);
		float L_20 = (__this->f8);
		if ((((float)L_19) <= ((float)L_20)))
		{
			goto IL_00ab;
		}
	}
	{
		float L_21 = (__this->f4);
		float L_22 = (__this->f8);
		__this->f4 = ((float)(L_21-L_22));
	}

IL_00ab:
	{
		float L_23 = (__this->f5);
		float L_24 = (__this->f8);
		if ((((float)L_23) <= ((float)L_24)))
		{
			goto IL_00cf;
		}
	}
	{
		float L_25 = (__this->f5);
		float L_26 = (__this->f8);
		__this->f5 = ((float)(L_25-L_26));
	}

IL_00cf:
	{
		t4  L_27 = {0};
		m359(&L_27, V_0, V_1, (0.0f), &m359_MI);
		return L_27;
	}
}
// Metadata Definition UnityStandardAssets.Utility.CurveControlledBob
extern Il2CppType t124_0_0_6;
FieldInfo t73_f0_FieldInfo = 
{
	"HorizontalBobRange", &t124_0_0_6, &t73_TI, offsetof(t73, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t73_f1_FieldInfo = 
{
	"VerticalBobRange", &t124_0_0_6, &t73_TI, offsetof(t73, f1), &EmptyCustomAttributesCache};
extern Il2CppType t74_0_0_6;
FieldInfo t73_f2_FieldInfo = 
{
	"Bobcurve", &t74_0_0_6, &t73_TI, offsetof(t73, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t73_f3_FieldInfo = 
{
	"VerticaltoHorizontalRatio", &t124_0_0_6, &t73_TI, offsetof(t73, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t73_f4_FieldInfo = 
{
	"m_CyclePositionX", &t124_0_0_1, &t73_TI, offsetof(t73, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t73_f5_FieldInfo = 
{
	"m_CyclePositionY", &t124_0_0_1, &t73_TI, offsetof(t73, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t73_f6_FieldInfo = 
{
	"m_BobBaseInterval", &t124_0_0_1, &t73_TI, offsetof(t73, f6), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t73_f7_FieldInfo = 
{
	"m_OriginalCameraPosition", &t4_0_0_1, &t73_TI, offsetof(t73, f7), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t73_f8_FieldInfo = 
{
	"m_Time", &t124_0_0_1, &t73_TI, offsetof(t73, f8), &EmptyCustomAttributesCache};
static FieldInfo* t73_FIs[] =
{
	&t73_f0_FieldInfo,
	&t73_f1_FieldInfo,
	&t73_f2_FieldInfo,
	&t73_f3_FieldInfo,
	&t73_f4_FieldInfo,
	&t73_f5_FieldInfo,
	&t73_f6_FieldInfo,
	&t73_f7_FieldInfo,
	&t73_f8_FieldInfo,
	NULL
};
extern TypeInfo t73_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m199_MI = 
{
	".ctor", (methodPointerType)&m199, &t73_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 212, NULL, (methodPointerType)NULL};
extern Il2CppType t32_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t73_m200_ParameterInfos[] = 
{
	{"camera", 0, 134217848, &EmptyCustomAttributesCache, &t32_0_0_0},
	{"bobBaseInterval", 1, 134217849, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t73_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m200_MI = 
{
	"Setup", (methodPointerType)&m200, &t73_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t124, t73_m200_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 213, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t73_m201_ParameterInfos[] = 
{
	{"speed", 0, 134217850, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t73_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m201_MI = 
{
	"DoHeadBob", (methodPointerType)&m201, &t73_TI, &t4_0_0_0, RuntimeInvoker_t4_t124, t73_m201_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 214, NULL, (methodPointerType)NULL};
static MethodInfo* t73_MIs[] =
{
	&m199_MI,
	&m200_MI,
	&m201_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t73_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t73_0_0_0;
extern Il2CppType t73_1_0_0;
extern TypeInfo t25_TI;
struct t73;
extern TypeInfo t73_TI;
TypeInfo t73_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "CurveControlledBob", "UnityStandardAssets.Utility", t73_MIs, NULL, t73_FIs, NULL, &t25_TI, NULL, NULL, &t73_TI, NULL, t73_VT, &EmptyCustomAttributesCache, &t73_TI, &t73_0_0_0, &t73_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t73), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 9, 0, 0, 4, 0, 0};
#include "t75.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t75_TI;
#include "t75MD.h"

#include "t176.h"
#include "t76.h"
#include "t77.h"
#include "t177.h"
extern TypeInfo t75_TI;
extern TypeInfo t76_TI;
extern TypeInfo t130_TI;
extern TypeInfo t177_TI;
#include "t178MD.h"
#include "t76MD.h"
#include "t177MD.h"
extern MethodInfo m452_MI;
extern MethodInfo m557_MI;
extern MethodInfo m558_MI;
extern MethodInfo m559_MI;
extern MethodInfo m560_MI;
extern MethodInfo m561_MI;
extern MethodInfo m211_MI;
extern MethodInfo m518_MI;
extern MethodInfo m562_MI;
extern MethodInfo m336_MI;
extern MethodInfo m563_MI;
extern MethodInfo m350_MI;
extern MethodInfo m564_MI;
extern MethodInfo m377_MI;
extern MethodInfo m565_MI;
extern MethodInfo m566_MI;


extern MethodInfo m202_MI;
 void m202 (t75 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m202_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m203_MI;
 t25 * m203 (t75 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m203_MI);
	{
		t25 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m204_MI;
 t25 * m204 (t75 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m204_MI);
	{
		t25 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m205_MI;
 bool m205 (t75 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m205_MI);
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f5);
		V_0 = L_0;
		__this->f5 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_00f0;
		}
	}
	{
		goto IL_0163;
	}

IL_0021:
	{
		t76 * L_1 = (__this->f8);
		NullCheck(L_1);
		t77 * L_2 = (L_1->f8);
		NullCheck(L_2);
		t17 * L_3 = m557(L_2, &m557_MI);
		NullCheck(L_3);
		float L_4 = m558(L_3, &m558_MI);
		__this->f0 = L_4;
		t76 * L_5 = (__this->f8);
		NullCheck(L_5);
		t77 * L_6 = (L_5->f8);
		NullCheck(L_6);
		t17 * L_7 = m557(L_6, &m557_MI);
		NullCheck(L_7);
		float L_8 = m559(L_7, &m559_MI);
		__this->f1 = L_8;
		t76 * L_9 = (__this->f8);
		NullCheck(L_9);
		t77 * L_10 = (L_9->f8);
		NullCheck(L_10);
		t17 * L_11 = m557(L_10, &m557_MI);
		NullCheck(L_11);
		m560(L_11, (10.0f), &m560_MI);
		t76 * L_12 = (__this->f8);
		NullCheck(L_12);
		t77 * L_13 = (L_12->f8);
		NullCheck(L_13);
		t17 * L_14 = m557(L_13, &m557_MI);
		NullCheck(L_14);
		m561(L_14, (5.0f), &m561_MI);
		t76 * L_15 = (__this->f8);
		NullCheck(L_15);
		t32 * L_16 = m211(L_15, &m211_MI);
		__this->f2 = L_16;
		goto IL_00f0;
	}

IL_00a1:
	{
		t32 * L_17 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		t4  L_18 = m518(NULL, &m518_MI);
		NullCheck(L_17);
		t30  L_19 = m562(L_17, L_18, &m562_MI);
		__this->f3 = L_19;
		t76 * L_20 = (__this->f8);
		NullCheck(L_20);
		t77 * L_21 = (L_20->f8);
		NullCheck(L_21);
		t2 * L_22 = m336(L_21, &m336_MI);
		t30 * L_23 = &(__this->f3);
		float L_24 = (__this->f4);
		t4  L_25 = m563(L_23, L_24, &m563_MI);
		NullCheck(L_22);
		m350(L_22, L_25, &m350_MI);
		__this->f6 = NULL;
		__this->f5 = 1;
		goto IL_0165;
	}

IL_00f0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		bool L_26 = m564(NULL, 0, &m564_MI);
		if (L_26)
		{
			goto IL_00a1;
		}
	}
	{
		t76 * L_27 = (__this->f8);
		NullCheck(L_27);
		t77 * L_28 = (L_27->f8);
		NullCheck(L_28);
		t17 * L_29 = m557(L_28, &m557_MI);
		bool L_30 = m377(NULL, L_29, &m377_MI);
		if (!L_30)
		{
			goto IL_015c;
		}
	}
	{
		t76 * L_31 = (__this->f8);
		NullCheck(L_31);
		t77 * L_32 = (L_31->f8);
		NullCheck(L_32);
		t17 * L_33 = m557(L_32, &m557_MI);
		float L_34 = (__this->f0);
		NullCheck(L_33);
		m560(L_33, L_34, &m560_MI);
		t76 * L_35 = (__this->f8);
		NullCheck(L_35);
		t77 * L_36 = (L_35->f8);
		NullCheck(L_36);
		t17 * L_37 = m557(L_36, &m557_MI);
		float L_38 = (__this->f1);
		NullCheck(L_37);
		m561(L_37, L_38, &m561_MI);
		t76 * L_39 = (__this->f8);
		NullCheck(L_39);
		t77 * L_40 = (L_39->f8);
		NullCheck(L_40);
		m565(L_40, (t17 *)NULL, &m565_MI);
	}

IL_015c:
	{
		__this->f5 = (-1);
	}

IL_0163:
	{
		return 0;
	}

IL_0165:
	{
		return 1;
	}
	// Dead block : IL_0167: ldloc.1
}
extern MethodInfo m206_MI;
 void m206 (t75 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m206_MI);
	{
		__this->f5 = (-1);
		return;
	}
}
extern MethodInfo m207_MI;
 void m207 (t75 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m207_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m566(L_0, &m566_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0
extern Il2CppType t124_0_0_3;
FieldInfo t75_f0_FieldInfo = 
{
	"<oldDrag>__0", &t124_0_0_3, &t75_TI, offsetof(t75, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t75_f1_FieldInfo = 
{
	"<oldAngularDrag>__1", &t124_0_0_3, &t75_TI, offsetof(t75, f1), &EmptyCustomAttributesCache};
extern Il2CppType t32_0_0_3;
FieldInfo t75_f2_FieldInfo = 
{
	"<mainCamera>__2", &t32_0_0_3, &t75_TI, offsetof(t75, f2), &EmptyCustomAttributesCache};
extern Il2CppType t30_0_0_3;
FieldInfo t75_f3_FieldInfo = 
{
	"<ray>__3", &t30_0_0_3, &t75_TI, offsetof(t75, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t75_f4_FieldInfo = 
{
	"distance", &t124_0_0_3, &t75_TI, offsetof(t75, f4), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t75_f5_FieldInfo = 
{
	"$PC", &t134_0_0_3, &t75_TI, offsetof(t75, f5), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_3;
FieldInfo t75_f6_FieldInfo = 
{
	"$current", &t25_0_0_3, &t75_TI, offsetof(t75, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t75_f7_FieldInfo = 
{
	"<$>distance", &t124_0_0_3, &t75_TI, offsetof(t75, f7), &EmptyCustomAttributesCache};
extern Il2CppType t76_0_0_3;
FieldInfo t75_f8_FieldInfo = 
{
	"<>f__this", &t76_0_0_3, &t75_TI, offsetof(t75, f8), &EmptyCustomAttributesCache};
static FieldInfo* t75_FIs[] =
{
	&t75_f0_FieldInfo,
	&t75_f1_FieldInfo,
	&t75_f2_FieldInfo,
	&t75_f3_FieldInfo,
	&t75_f4_FieldInfo,
	&t75_f5_FieldInfo,
	&t75_f6_FieldInfo,
	&t75_f7_FieldInfo,
	&t75_f8_FieldInfo,
	NULL
};
extern MethodInfo m203_MI;
static PropertyInfo t75____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&t75_TI, "System.Collections.Generic.IEnumerator<object>.Current", &m203_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m204_MI;
static PropertyInfo t75____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t75_TI, "System.Collections.IEnumerator.Current", &m204_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t75_PIs[] =
{
	&t75____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&t75____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t75_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m202_MI = 
{
	".ctor", (methodPointerType)&m202, &t75_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 219, NULL, (methodPointerType)NULL};
extern TypeInfo t75_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t75__CustomAttributeCache_m203;
MethodInfo m203_MI = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current", (methodPointerType)&m203, &t75_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t75__CustomAttributeCache_m203, 2529, 0, 4, 0, false, false, 220, NULL, (methodPointerType)NULL};
extern TypeInfo t75_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t75__CustomAttributeCache_m204;
MethodInfo m204_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m204, &t75_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t75__CustomAttributeCache_m204, 2529, 0, 5, 0, false, false, 221, NULL, (methodPointerType)NULL};
extern TypeInfo t75_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m205_MI = 
{
	"MoveNext", (methodPointerType)&m205, &t75_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 222, NULL, (methodPointerType)NULL};
extern TypeInfo t75_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t75__CustomAttributeCache_m206;
MethodInfo m206_MI = 
{
	"Dispose", (methodPointerType)&m206, &t75_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t75__CustomAttributeCache_m206, 486, 0, 7, 0, false, false, 223, NULL, (methodPointerType)NULL};
extern TypeInfo t75_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t75__CustomAttributeCache_m207;
MethodInfo m207_MI = 
{
	"Reset", (methodPointerType)&m207, &t75_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t75__CustomAttributeCache_m207, 486, 0, 8, 0, false, false, 224, NULL, (methodPointerType)NULL};
static MethodInfo* t75_MIs[] =
{
	&m202_MI,
	&m203_MI,
	&m204_MI,
	&m205_MI,
	&m206_MI,
	&m207_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m203_MI;
extern MethodInfo m204_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m207_MI;
static MethodInfo* t75_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m203_MI,
	&m204_MI,
	&m205_MI,
	&m206_MI,
	&m207_MI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t75_ITIs[] = 
{
	&t179_TI,
	&t78_TI,
	&t167_TI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static Il2CppInterfaceOffsetPair t75_IOs[] = 
{
	{ &t179_TI, 4},
	{ &t78_TI, 5},
	{ &t167_TI, 7},
};
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t75_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
#include "t180.h"
#include "t180MD.h"
extern MethodInfo m567_MI;
void t75_CustomAttributesCacheGenerator_m203(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t75_CustomAttributesCacheGenerator_m204(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t75_CustomAttributesCacheGenerator_m206(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t75_CustomAttributesCacheGenerator_m207(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t75__CustomAttributeCache = {
1,
NULL,
&t75_CustomAttributesCacheGenerator
};
CustomAttributesCache t75__CustomAttributeCache_m203 = {
1,
NULL,
&t75_CustomAttributesCacheGenerator_m203
};
CustomAttributesCache t75__CustomAttributeCache_m204 = {
1,
NULL,
&t75_CustomAttributesCacheGenerator_m204
};
CustomAttributesCache t75__CustomAttributeCache_m206 = {
1,
NULL,
&t75_CustomAttributesCacheGenerator_m206
};
CustomAttributesCache t75__CustomAttributeCache_m207 = {
1,
NULL,
&t75_CustomAttributesCacheGenerator_m207
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t75_0_0_0;
extern Il2CppType t75_1_0_0;
extern TypeInfo t25_TI;
struct t75;
extern TypeInfo t75_TI;
extern TypeInfo t76_TI;
extern CustomAttributesCache t75__CustomAttributeCache;
extern CustomAttributesCache t75__CustomAttributeCache_m203;
extern CustomAttributesCache t75__CustomAttributeCache_m204;
extern CustomAttributesCache t75__CustomAttributeCache_m206;
extern CustomAttributesCache t75__CustomAttributeCache_m207;
TypeInfo t75_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "<DragObject>c__Iterator0", "", t75_MIs, t75_PIs, t75_FIs, NULL, &t25_TI, NULL, &t76_TI, &t75_TI, t75_ITIs, t75_VT, &t75__CustomAttributeCache, &t75_TI, &t75_0_0_0, &t75_1_0_0, t75_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t75), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 2, 9, 0, 0, 9, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t76_TI;

#include "t181.h"
extern TypeInfo t130_TI;
extern TypeInfo t29_TI;
extern TypeInfo t76_TI;
extern TypeInfo t62_TI;
extern TypeInfo t124_TI;
extern TypeInfo t75_TI;
#include "t77MD.h"
extern MethodInfo m334_MI;
extern MethodInfo m568_MI;
extern MethodInfo m211_MI;
extern MethodInfo m518_MI;
extern MethodInfo m562_MI;
extern MethodInfo m462_MI;
extern MethodInfo m569_MI;
extern MethodInfo m570_MI;
extern MethodInfo m571_MI;
extern MethodInfo m377_MI;
extern MethodInfo m572_MI;
extern MethodInfo m573_MI;
extern MethodInfo m574_MI;
extern MethodInfo m575_MI;
extern MethodInfo m576_MI;
extern MethodInfo m336_MI;
extern MethodInfo m471_MI;
extern MethodInfo m350_MI;
extern MethodInfo m344_MI;
extern MethodInfo m577_MI;
extern MethodInfo m578_MI;
extern MethodInfo m579_MI;
extern MethodInfo m580_MI;
extern MethodInfo m565_MI;
extern MethodInfo m453_MI;
extern MethodInfo m581_MI;
extern MethodInfo m202_MI;
extern MethodInfo m582_MI;
extern MethodInfo m583_MI;
struct t62;
 t17 * m574 (t62 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m574_MI;
struct t62;
 t77 * m575 (t62 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m575_MI;
struct t127;
#define m582(__this, method) (t32 *)m362_gshared((t127 *)__this, method)
extern MethodInfo m582_MI;


extern MethodInfo m208_MI;
 void m208 (t76 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m208_MI);
	{
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m209_MI;
 void m209 (t76 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m209_MI);
	t32 * V_0 = {0};
	t29  V_1 = {0};
	t62 * V_2 = {0};
	t17 * V_3 = {0};
	t30  V_4 = {0};
	t30  V_5 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		bool L_0 = m568(NULL, 0, &m568_MI);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		t32 * L_1 = m211(__this, &m211_MI);
		V_0 = L_1;
		Initobj (&t29_TI, (&V_1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		t4  L_2 = m518(NULL, &m518_MI);
		NullCheck(V_0);
		t30  L_3 = m562(V_0, L_2, &m562_MI);
		V_4 = L_3;
		t4  L_4 = m462((&V_4), &m462_MI);
		t4  L_5 = m518(NULL, &m518_MI);
		NullCheck(V_0);
		t30  L_6 = m562(V_0, L_5, &m562_MI);
		V_5 = L_6;
		t4  L_7 = m569((&V_5), &m569_MI);
		bool L_8 = m570(NULL, L_4, L_7, (&V_1), (100.0f), ((int32_t)-5), &m570_MI);
		if (L_8)
		{
			goto IL_0057;
		}
	}
	{
		return;
	}

IL_0057:
	{
		t17 * L_9 = m571((&V_1), &m571_MI);
		bool L_10 = m377(NULL, L_9, &m377_MI);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		t17 * L_11 = m571((&V_1), &m571_MI);
		NullCheck(L_11);
		bool L_12 = m572(L_11, &m572_MI);
		if (!L_12)
		{
			goto IL_007a;
		}
	}

IL_0079:
	{
		return;
	}

IL_007a:
	{
		t77 * L_13 = (__this->f8);
		bool L_14 = m377(NULL, L_13, &m377_MI);
		if (L_14)
		{
			goto IL_00af;
		}
	}
	{
		t62 * L_15 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m573(L_15, (t27*) &_stringLiteral19, &m573_MI);
		V_2 = L_15;
		NullCheck(V_2);
		t17 * L_16 = m574(V_2, &m574_MI);
		V_3 = L_16;
		NullCheck(V_2);
		t77 * L_17 = m575(V_2, &m575_MI);
		__this->f8 = L_17;
		NullCheck(V_3);
		m576(V_3, 1, &m576_MI);
	}

IL_00af:
	{
		t77 * L_18 = (__this->f8);
		NullCheck(L_18);
		t2 * L_19 = m336(L_18, &m336_MI);
		t4  L_20 = m471((&V_1), &m471_MI);
		NullCheck(L_19);
		m350(L_19, L_20, &m350_MI);
		t77 * L_21 = (__this->f8);
		t4  L_22 = m344(NULL, &m344_MI);
		NullCheck(L_21);
		m577(L_21, L_22, &m577_MI);
		t77 * L_23 = (__this->f8);
		NullCheck(L_23);
		m578(L_23, (50.0f), &m578_MI);
		t77 * L_24 = (__this->f8);
		NullCheck(L_24);
		m579(L_24, (5.0f), &m579_MI);
		t77 * L_25 = (__this->f8);
		NullCheck(L_25);
		m580(L_25, (0.2f), &m580_MI);
		t77 * L_26 = (__this->f8);
		t17 * L_27 = m571((&V_1), &m571_MI);
		NullCheck(L_26);
		m565(L_26, L_27, &m565_MI);
		float L_28 = m453((&V_1), &m453_MI);
		float L_29 = L_28;
		t25 * L_30 = Box(InitializedTypeInfo(&t124_TI), &L_29);
		m581(__this, (t27*) &_stringLiteral20, L_30, &m581_MI);
		return;
	}
}
extern MethodInfo m210_MI;
 t25 * m210 (t76 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m210_MI);
	t75 * V_0 = {0};
	{
		t75 * L_0 = (t75 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t75_TI));
		m202(L_0, &m202_MI);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->f4 = p0;
		NullCheck(V_0);
		V_0->f7 = p0;
		NullCheck(V_0);
		V_0->f8 = __this;
		return V_0;
	}
}
extern MethodInfo m211_MI;
 t32 * m211 (t76 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m211_MI);
	{
		t32 * L_0 = m582(__this, &m582_MI);
		bool L_1 = m377(NULL, L_0, &m377_MI);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		t32 * L_2 = m582(__this, &m582_MI);
		return L_2;
	}

IL_0017:
	{
		t32 * L_3 = m583(NULL, &m583_MI);
		return L_3;
	}
}
// Metadata Definition UnityStandardAssets.Utility.DragRigidbody
extern Il2CppType t124_0_0_32849;
FieldInfo t76_f2_FieldInfo = 
{
	"k_Spring", &t124_0_0_32849, &t76_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_32849;
FieldInfo t76_f3_FieldInfo = 
{
	"k_Damper", &t124_0_0_32849, &t76_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_32849;
FieldInfo t76_f4_FieldInfo = 
{
	"k_Drag", &t124_0_0_32849, &t76_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_32849;
FieldInfo t76_f5_FieldInfo = 
{
	"k_AngularDrag", &t124_0_0_32849, &t76_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_32849;
FieldInfo t76_f6_FieldInfo = 
{
	"k_Distance", &t124_0_0_32849, &t76_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_32849;
FieldInfo t76_f7_FieldInfo = 
{
	"k_AttachToCenterOfMass", &t125_0_0_32849, &t76_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t77_0_0_1;
FieldInfo t76_f8_FieldInfo = 
{
	"m_SpringJoint", &t77_0_0_1, &t76_TI, offsetof(t76, f8), &EmptyCustomAttributesCache};
static FieldInfo* t76_FIs[] =
{
	&t76_f2_FieldInfo,
	&t76_f3_FieldInfo,
	&t76_f4_FieldInfo,
	&t76_f5_FieldInfo,
	&t76_f6_FieldInfo,
	&t76_f7_FieldInfo,
	&t76_f8_FieldInfo,
	NULL
};
static const float t76_f2_DefaultValueData = 50.0f;
extern Il2CppType t124_0_0_0;
static Il2CppFieldDefaultValueEntry t76_f2_DefaultValue = 
{
	&t76_f2_FieldInfo, { (char*)&t76_f2_DefaultValueData, &t124_0_0_0 }};
static const float t76_f3_DefaultValueData = 5.0f;
extern Il2CppType t124_0_0_0;
static Il2CppFieldDefaultValueEntry t76_f3_DefaultValue = 
{
	&t76_f3_FieldInfo, { (char*)&t76_f3_DefaultValueData, &t124_0_0_0 }};
static const float t76_f4_DefaultValueData = 10.0f;
extern Il2CppType t124_0_0_0;
static Il2CppFieldDefaultValueEntry t76_f4_DefaultValue = 
{
	&t76_f4_FieldInfo, { (char*)&t76_f4_DefaultValueData, &t124_0_0_0 }};
static const float t76_f5_DefaultValueData = 5.0f;
extern Il2CppType t124_0_0_0;
static Il2CppFieldDefaultValueEntry t76_f5_DefaultValue = 
{
	&t76_f5_FieldInfo, { (char*)&t76_f5_DefaultValueData, &t124_0_0_0 }};
static const float t76_f6_DefaultValueData = 0.2f;
extern Il2CppType t124_0_0_0;
static Il2CppFieldDefaultValueEntry t76_f6_DefaultValue = 
{
	&t76_f6_FieldInfo, { (char*)&t76_f6_DefaultValueData, &t124_0_0_0 }};
static const bool t76_f7_DefaultValueData = false;
extern Il2CppType t125_0_0_0;
static Il2CppFieldDefaultValueEntry t76_f7_DefaultValue = 
{
	&t76_f7_FieldInfo, { (char*)&t76_f7_DefaultValueData, &t125_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t76_FDVs[] = 
{
	&t76_f2_DefaultValue,
	&t76_f3_DefaultValue,
	&t76_f4_DefaultValue,
	&t76_f5_DefaultValue,
	&t76_f6_DefaultValue,
	&t76_f7_DefaultValue,
	NULL
};
extern TypeInfo t76_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m208_MI = 
{
	".ctor", (methodPointerType)&m208, &t76_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 215, NULL, (methodPointerType)NULL};
extern TypeInfo t76_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m209_MI = 
{
	"Update", (methodPointerType)&m209, &t76_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 216, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t76_m210_ParameterInfos[] = 
{
	{"distance", 0, 134217851, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t76_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t76__CustomAttributeCache_m210;
MethodInfo m210_MI = 
{
	"DragObject", (methodPointerType)&m210, &t76_TI, &t78_0_0_0, RuntimeInvoker_t25_t124, t76_m210_ParameterInfos, &t76__CustomAttributeCache_m210, 129, 0, 255, 1, false, false, 217, NULL, (methodPointerType)NULL};
extern TypeInfo t76_TI;
extern Il2CppType t32_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m211_MI = 
{
	"FindCamera", (methodPointerType)&m211, &t76_TI, &t32_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 218, NULL, (methodPointerType)NULL};
static MethodInfo* t76_MIs[] =
{
	&m208_MI,
	&m209_MI,
	&m210_MI,
	&m211_MI,
	NULL
};
extern TypeInfo t75_TI;
static TypeInfo* t76_TI__nestedTypes[2] =
{
	&t75_TI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t76_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t76_CustomAttributesCacheGenerator_m210(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t76__CustomAttributeCache_m210 = {
1,
NULL,
&t76_CustomAttributesCacheGenerator_m210
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_1_0_0;
extern TypeInfo t3_TI;
struct t76;
extern TypeInfo t76_TI;
extern CustomAttributesCache t76__CustomAttributeCache_m210;
TypeInfo t76_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "DragRigidbody", "UnityStandardAssets.Utility", t76_MIs, NULL, t76_FIs, NULL, &t3_TI, t76_TI__nestedTypes, NULL, &t76_TI, NULL, t76_VT, &EmptyCustomAttributesCache, &t76_TI, &t76_0_0_0, &t76_1_0_0, NULL, NULL, NULL, t76_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t76), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 7, 0, 1, 4, 0, 0};
#include "t79.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t79_TI;
#include "t79MD.h"

#include "t80.h"
extern TypeInfo t79_TI;
extern TypeInfo t4_TI;
extern TypeInfo t126_TI;
#include "t80MD.h"
#include "t182MD.h"
extern MethodInfo m334_MI;
extern MethodInfo m584_MI;
extern MethodInfo m583_MI;
extern MethodInfo m336_MI;
extern MethodInfo m335_MI;
extern MethodInfo m415_MI;
extern MethodInfo m460_MI;
extern MethodInfo m585_MI;
extern MethodInfo m586_MI;
extern MethodInfo m453_MI;
extern MethodInfo m339_MI;
extern MethodInfo m422_MI;
extern MethodInfo m425_MI;
extern MethodInfo m357_MI;
extern MethodInfo m587_MI;
extern MethodInfo m588_MI;
extern MethodInfo m589_MI;


extern MethodInfo m212_MI;
 void m212 (t79 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m212_MI);
	{
		__this->f3 = (10.0f);
		__this->f4 = (80.0f);
		__this->f5 = (1.0f);
		__this->f6 = (1000.0f);
		__this->f7 = (10000.0f);
		__this->f8 = (0.1f);
		__this->f9 = (1.0f);
		__this->f12 = (1.0f);
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m213_MI;
 void m213 (t79 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m213_MI);
	{
		t80 * L_0 = (__this->f2);
		NullCheck(L_0);
		float L_1 = m584(L_0, &m584_MI);
		__this->f12 = L_1;
		return;
	}
}
extern MethodInfo m214_MI;
 void m214 (t79 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m214_MI);
	t30  V_0 = {0};
	t29  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	t4  V_4 = {0};
	{
		t32 * L_0 = m583(NULL, &m583_MI);
		NullCheck(L_0);
		t2 * L_1 = m336(L_0, &m336_MI);
		NullCheck(L_1);
		t4  L_2 = m335(L_1, &m335_MI);
		t4  L_3 = m415(NULL, &m415_MI);
		t4  L_4 = m460(NULL, L_3, &m460_MI);
		m585((&V_0), L_2, L_4, &m585_MI);
		t2 * L_5 = m336(__this, &m336_MI);
		NullCheck(L_5);
		t4  L_6 = m335(L_5, &m335_MI);
		V_4 = L_6;
		NullCheck((&V_4));
		float L_7 = ((&V_4)->f2);
		V_2 = L_7;
		bool L_8 = m586(NULL, V_0, (&V_1), &m586_MI);
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		float L_9 = m453((&V_1), &m453_MI);
		V_2 = L_9;
	}

IL_004a:
	{
		float L_10 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_11 = fabsf(((float)(V_2-L_10)));
		if ((((float)L_11) <= ((float)(1.0f))))
		{
			goto IL_007f;
		}
	}
	{
		float L_12 = (__this->f10);
		float* L_13 = &(__this->f11);
		float L_14 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_15 = m422(NULL, L_12, V_2, L_13, L_14, &m422_MI);
		__this->f10 = L_15;
	}

IL_007f:
	{
		float L_16 = (__this->f3);
		float L_17 = (__this->f6);
		float L_18 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_19 = m425(NULL, L_16, L_17, L_18, &m425_MI);
		V_3 = L_19;
		float L_20 = (__this->f4);
		float L_21 = (__this->f7);
		float L_22 = m357(NULL, L_20, L_21, V_3, &m357_MI);
		m587(NULL, L_22, &m587_MI);
		t80 * L_23 = (__this->f2);
		float L_24 = (__this->f5);
		float L_25 = (__this->f8);
		float L_26 = m357(NULL, L_24, L_25, ((float)((1.0f)-((float)(((float)((1.0f)-V_3))*((float)((1.0f)-V_3)))))), &m357_MI);
		NullCheck(L_23);
		m588(L_23, L_26, &m588_MI);
		t80 * L_27 = (__this->f2);
		float L_28 = (__this->f12);
		float L_29 = m357(NULL, L_28, (0.0f), V_3, &m357_MI);
		NullCheck(L_27);
		m589(L_27, L_29, &m589_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.DynamicShadowSettings
extern Il2CppType t80_0_0_6;
FieldInfo t79_f2_FieldInfo = 
{
	"sunLight", &t80_0_0_6, &t79_TI, offsetof(t79, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t79_f3_FieldInfo = 
{
	"minHeight", &t124_0_0_6, &t79_TI, offsetof(t79, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t79_f4_FieldInfo = 
{
	"minShadowDistance", &t124_0_0_6, &t79_TI, offsetof(t79, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t79_f5_FieldInfo = 
{
	"minShadowBias", &t124_0_0_6, &t79_TI, offsetof(t79, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t79_f6_FieldInfo = 
{
	"maxHeight", &t124_0_0_6, &t79_TI, offsetof(t79, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t79_f7_FieldInfo = 
{
	"maxShadowDistance", &t124_0_0_6, &t79_TI, offsetof(t79, f7), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t79_f8_FieldInfo = 
{
	"maxShadowBias", &t124_0_0_6, &t79_TI, offsetof(t79, f8), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t79_f9_FieldInfo = 
{
	"adaptTime", &t124_0_0_6, &t79_TI, offsetof(t79, f9), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t79_f10_FieldInfo = 
{
	"m_SmoothHeight", &t124_0_0_1, &t79_TI, offsetof(t79, f10), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t79_f11_FieldInfo = 
{
	"m_ChangeSpeed", &t124_0_0_1, &t79_TI, offsetof(t79, f11), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t79_f12_FieldInfo = 
{
	"m_OriginalStrength", &t124_0_0_1, &t79_TI, offsetof(t79, f12), &EmptyCustomAttributesCache};
static FieldInfo* t79_FIs[] =
{
	&t79_f2_FieldInfo,
	&t79_f3_FieldInfo,
	&t79_f4_FieldInfo,
	&t79_f5_FieldInfo,
	&t79_f6_FieldInfo,
	&t79_f7_FieldInfo,
	&t79_f8_FieldInfo,
	&t79_f9_FieldInfo,
	&t79_f10_FieldInfo,
	&t79_f11_FieldInfo,
	&t79_f12_FieldInfo,
	NULL
};
extern TypeInfo t79_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m212_MI = 
{
	".ctor", (methodPointerType)&m212, &t79_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 225, NULL, (methodPointerType)NULL};
extern TypeInfo t79_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m213_MI = 
{
	"Start", (methodPointerType)&m213, &t79_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 226, NULL, (methodPointerType)NULL};
extern TypeInfo t79_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m214_MI = 
{
	"Update", (methodPointerType)&m214, &t79_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 227, NULL, (methodPointerType)NULL};
static MethodInfo* t79_MIs[] =
{
	&m212_MI,
	&m213_MI,
	&m214_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t79_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t79_0_0_0;
extern Il2CppType t79_1_0_0;
extern TypeInfo t3_TI;
struct t79;
extern TypeInfo t79_TI;
TypeInfo t79_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "DynamicShadowSettings", "UnityStandardAssets.Utility", t79_MIs, NULL, t79_FIs, NULL, &t3_TI, NULL, NULL, &t79_TI, NULL, t79_VT, &EmptyCustomAttributesCache, &t79_TI, &t79_0_0_0, &t79_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t79), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 11, 0, 0, 4, 0, 0};
#include "t81.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t81_TI;
#include "t81MD.h"

#include "t82.h"
#include "t183.h"
extern TypeInfo t81_TI;
extern TypeInfo t82_TI;
extern TypeInfo t126_TI;
extern TypeInfo t183_TI;
extern TypeInfo t177_TI;
#include "t183MD.h"
extern MethodInfo m452_MI;
extern MethodInfo m476_MI;
extern MethodInfo m339_MI;
extern MethodInfo m556_MI;
extern MethodInfo m477_MI;
extern MethodInfo m345_MI;
extern MethodInfo m590_MI;
extern MethodInfo m566_MI;


extern MethodInfo m215_MI;
 void m215 (t81 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m215_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m216_MI;
 t25 * m216 (t81 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m216_MI);
	{
		t25 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m217_MI;
 t25 * m217 (t81 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m217_MI);
	{
		t25 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m218_MI;
 bool m218 (t81 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m218_MI);
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_00e9;
	}

IL_0021:
	{
		t82 * L_1 = (__this->f3);
		NullCheck(L_1);
		t32 * L_2 = (L_1->f0);
		NullCheck(L_2);
		float L_3 = m476(L_2, &m476_MI);
		t82 * L_4 = (__this->f3);
		NullCheck(L_4);
		float L_5 = (L_4->f1);
		t82 * L_6 = (__this->f3);
		NullCheck(L_6);
		float L_7 = (L_6->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_8 = fabsf(((float)(((float)(L_3-L_5))/L_7)));
		__this->f0 = L_8;
		goto IL_00cc;
	}

IL_0059:
	{
		t82 * L_9 = (__this->f3);
		NullCheck(L_9);
		t32 * L_10 = (L_9->f0);
		t82 * L_11 = (__this->f3);
		NullCheck(L_11);
		float L_12 = (L_11->f1);
		t82 * L_13 = (__this->f3);
		NullCheck(L_13);
		t74 * L_14 = (L_13->f5);
		float L_15 = (__this->f0);
		t82 * L_16 = (__this->f3);
		NullCheck(L_16);
		float L_17 = (L_16->f3);
		NullCheck(L_14);
		float L_18 = m556(L_14, ((float)(L_15/L_17)), &m556_MI);
		t82 * L_19 = (__this->f3);
		NullCheck(L_19);
		float L_20 = (L_19->f2);
		NullCheck(L_10);
		m477(L_10, ((float)(L_12+((float)(L_18*L_20)))), &m477_MI);
		float L_21 = (__this->f0);
		float L_22 = m345(NULL, &m345_MI);
		__this->f0 = ((float)(L_21+L_22));
		t183 * L_23 = (t183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t183_TI));
		m590(L_23, &m590_MI);
		__this->f2 = L_23;
		__this->f1 = 1;
		goto IL_00eb;
	}

IL_00cc:
	{
		float L_24 = (__this->f0);
		t82 * L_25 = (__this->f3);
		NullCheck(L_25);
		float L_26 = (L_25->f3);
		if ((((float)L_24) < ((float)L_26)))
		{
			goto IL_0059;
		}
	}
	{
		__this->f1 = (-1);
	}

IL_00e9:
	{
		return 0;
	}

IL_00eb:
	{
		return 1;
	}
	// Dead block : IL_00ed: ldloc.1
}
extern MethodInfo m219_MI;
 void m219 (t81 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m219_MI);
	{
		__this->f1 = (-1);
		return;
	}
}
extern MethodInfo m220_MI;
 void m220 (t81 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m220_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m566(L_0, &m566_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1
extern Il2CppType t124_0_0_3;
FieldInfo t81_f0_FieldInfo = 
{
	"<t>__0", &t124_0_0_3, &t81_TI, offsetof(t81, f0), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t81_f1_FieldInfo = 
{
	"$PC", &t134_0_0_3, &t81_TI, offsetof(t81, f1), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_3;
FieldInfo t81_f2_FieldInfo = 
{
	"$current", &t25_0_0_3, &t81_TI, offsetof(t81, f2), &EmptyCustomAttributesCache};
extern Il2CppType t82_0_0_3;
FieldInfo t81_f3_FieldInfo = 
{
	"<>f__this", &t82_0_0_3, &t81_TI, offsetof(t81, f3), &EmptyCustomAttributesCache};
static FieldInfo* t81_FIs[] =
{
	&t81_f0_FieldInfo,
	&t81_f1_FieldInfo,
	&t81_f2_FieldInfo,
	&t81_f3_FieldInfo,
	NULL
};
extern MethodInfo m216_MI;
static PropertyInfo t81____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&t81_TI, "System.Collections.Generic.IEnumerator<object>.Current", &m216_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m217_MI;
static PropertyInfo t81____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t81_TI, "System.Collections.IEnumerator.Current", &m217_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t81_PIs[] =
{
	&t81____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&t81____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t81_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m215_MI = 
{
	".ctor", (methodPointerType)&m215, &t81_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 234, NULL, (methodPointerType)NULL};
extern TypeInfo t81_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t81__CustomAttributeCache_m216;
MethodInfo m216_MI = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current", (methodPointerType)&m216, &t81_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t81__CustomAttributeCache_m216, 2529, 0, 4, 0, false, false, 235, NULL, (methodPointerType)NULL};
extern TypeInfo t81_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t81__CustomAttributeCache_m217;
MethodInfo m217_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m217, &t81_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t81__CustomAttributeCache_m217, 2529, 0, 5, 0, false, false, 236, NULL, (methodPointerType)NULL};
extern TypeInfo t81_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m218_MI = 
{
	"MoveNext", (methodPointerType)&m218, &t81_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 237, NULL, (methodPointerType)NULL};
extern TypeInfo t81_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t81__CustomAttributeCache_m219;
MethodInfo m219_MI = 
{
	"Dispose", (methodPointerType)&m219, &t81_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t81__CustomAttributeCache_m219, 486, 0, 7, 0, false, false, 238, NULL, (methodPointerType)NULL};
extern TypeInfo t81_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t81__CustomAttributeCache_m220;
MethodInfo m220_MI = 
{
	"Reset", (methodPointerType)&m220, &t81_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t81__CustomAttributeCache_m220, 486, 0, 8, 0, false, false, 239, NULL, (methodPointerType)NULL};
static MethodInfo* t81_MIs[] =
{
	&m215_MI,
	&m216_MI,
	&m217_MI,
	&m218_MI,
	&m219_MI,
	&m220_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m216_MI;
extern MethodInfo m217_MI;
extern MethodInfo m218_MI;
extern MethodInfo m219_MI;
extern MethodInfo m220_MI;
static MethodInfo* t81_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m216_MI,
	&m217_MI,
	&m218_MI,
	&m219_MI,
	&m220_MI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t81_ITIs[] = 
{
	&t179_TI,
	&t78_TI,
	&t167_TI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static Il2CppInterfaceOffsetPair t81_IOs[] = 
{
	{ &t179_TI, 4},
	{ &t78_TI, 5},
	{ &t167_TI, 7},
};
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t81_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t81_CustomAttributesCacheGenerator_m216(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t81_CustomAttributesCacheGenerator_m217(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t81_CustomAttributesCacheGenerator_m219(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t81_CustomAttributesCacheGenerator_m220(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t81__CustomAttributeCache = {
1,
NULL,
&t81_CustomAttributesCacheGenerator
};
CustomAttributesCache t81__CustomAttributeCache_m216 = {
1,
NULL,
&t81_CustomAttributesCacheGenerator_m216
};
CustomAttributesCache t81__CustomAttributeCache_m217 = {
1,
NULL,
&t81_CustomAttributesCacheGenerator_m217
};
CustomAttributesCache t81__CustomAttributeCache_m219 = {
1,
NULL,
&t81_CustomAttributesCacheGenerator_m219
};
CustomAttributesCache t81__CustomAttributeCache_m220 = {
1,
NULL,
&t81_CustomAttributesCacheGenerator_m220
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t81_0_0_0;
extern Il2CppType t81_1_0_0;
extern TypeInfo t25_TI;
struct t81;
extern TypeInfo t81_TI;
extern TypeInfo t82_TI;
extern CustomAttributesCache t81__CustomAttributeCache;
extern CustomAttributesCache t81__CustomAttributeCache_m216;
extern CustomAttributesCache t81__CustomAttributeCache_m217;
extern CustomAttributesCache t81__CustomAttributeCache_m219;
extern CustomAttributesCache t81__CustomAttributeCache_m220;
TypeInfo t81_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "<FOVKickUp>c__Iterator1", "", t81_MIs, t81_PIs, t81_FIs, NULL, &t25_TI, NULL, &t82_TI, &t81_TI, t81_ITIs, t81_VT, &t81__CustomAttributeCache, &t81_TI, &t81_0_0_0, &t81_1_0_0, t81_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t81), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 9, 3, 3};
#include "t83.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t83_TI;
#include "t83MD.h"

extern TypeInfo t83_TI;
extern TypeInfo t82_TI;
extern TypeInfo t126_TI;
extern TypeInfo t183_TI;
extern TypeInfo t177_TI;
extern MethodInfo m452_MI;
extern MethodInfo m476_MI;
extern MethodInfo m339_MI;
extern MethodInfo m556_MI;
extern MethodInfo m477_MI;
extern MethodInfo m345_MI;
extern MethodInfo m590_MI;
extern MethodInfo m566_MI;


extern MethodInfo m221_MI;
 void m221 (t83 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m221_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m222_MI;
 t25 * m222 (t83 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m222_MI);
	{
		t25 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m223_MI;
 t25 * m223 (t83 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m223_MI);
	{
		t25 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m224_MI;
 bool m224 (t83 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m224_MI);
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_00fe;
	}

IL_0021:
	{
		t82 * L_1 = (__this->f3);
		NullCheck(L_1);
		t32 * L_2 = (L_1->f0);
		NullCheck(L_2);
		float L_3 = m476(L_2, &m476_MI);
		t82 * L_4 = (__this->f3);
		NullCheck(L_4);
		float L_5 = (L_4->f1);
		t82 * L_6 = (__this->f3);
		NullCheck(L_6);
		float L_7 = (L_6->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_8 = fabsf(((float)(((float)(L_3-L_5))/L_7)));
		__this->f0 = L_8;
		goto IL_00cc;
	}

IL_0059:
	{
		t82 * L_9 = (__this->f3);
		NullCheck(L_9);
		t32 * L_10 = (L_9->f0);
		t82 * L_11 = (__this->f3);
		NullCheck(L_11);
		float L_12 = (L_11->f1);
		t82 * L_13 = (__this->f3);
		NullCheck(L_13);
		t74 * L_14 = (L_13->f5);
		float L_15 = (__this->f0);
		t82 * L_16 = (__this->f3);
		NullCheck(L_16);
		float L_17 = (L_16->f4);
		NullCheck(L_14);
		float L_18 = m556(L_14, ((float)(L_15/L_17)), &m556_MI);
		t82 * L_19 = (__this->f3);
		NullCheck(L_19);
		float L_20 = (L_19->f2);
		NullCheck(L_10);
		m477(L_10, ((float)(L_12+((float)(L_18*L_20)))), &m477_MI);
		float L_21 = (__this->f0);
		float L_22 = m345(NULL, &m345_MI);
		__this->f0 = ((float)(L_21-L_22));
		t183 * L_23 = (t183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t183_TI));
		m590(L_23, &m590_MI);
		__this->f2 = L_23;
		__this->f1 = 1;
		goto IL_0100;
	}

IL_00cc:
	{
		float L_24 = (__this->f0);
		if ((((float)L_24) > ((float)(0.0f))))
		{
			goto IL_0059;
		}
	}
	{
		t82 * L_25 = (__this->f3);
		NullCheck(L_25);
		t32 * L_26 = (L_25->f0);
		t82 * L_27 = (__this->f3);
		NullCheck(L_27);
		float L_28 = (L_27->f1);
		NullCheck(L_26);
		m477(L_26, L_28, &m477_MI);
		__this->f1 = (-1);
	}

IL_00fe:
	{
		return 0;
	}

IL_0100:
	{
		return 1;
	}
	// Dead block : IL_0102: ldloc.1
}
extern MethodInfo m225_MI;
 void m225 (t83 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m225_MI);
	{
		__this->f1 = (-1);
		return;
	}
}
extern MethodInfo m226_MI;
 void m226 (t83 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m226_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m566(L_0, &m566_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2
extern Il2CppType t124_0_0_3;
FieldInfo t83_f0_FieldInfo = 
{
	"<t>__0", &t124_0_0_3, &t83_TI, offsetof(t83, f0), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t83_f1_FieldInfo = 
{
	"$PC", &t134_0_0_3, &t83_TI, offsetof(t83, f1), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_3;
FieldInfo t83_f2_FieldInfo = 
{
	"$current", &t25_0_0_3, &t83_TI, offsetof(t83, f2), &EmptyCustomAttributesCache};
extern Il2CppType t82_0_0_3;
FieldInfo t83_f3_FieldInfo = 
{
	"<>f__this", &t82_0_0_3, &t83_TI, offsetof(t83, f3), &EmptyCustomAttributesCache};
static FieldInfo* t83_FIs[] =
{
	&t83_f0_FieldInfo,
	&t83_f1_FieldInfo,
	&t83_f2_FieldInfo,
	&t83_f3_FieldInfo,
	NULL
};
extern MethodInfo m222_MI;
static PropertyInfo t83____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&t83_TI, "System.Collections.Generic.IEnumerator<object>.Current", &m222_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m223_MI;
static PropertyInfo t83____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t83_TI, "System.Collections.IEnumerator.Current", &m223_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t83_PIs[] =
{
	&t83____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&t83____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t83_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m221_MI = 
{
	".ctor", (methodPointerType)&m221, &t83_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 240, NULL, (methodPointerType)NULL};
extern TypeInfo t83_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t83__CustomAttributeCache_m222;
MethodInfo m222_MI = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current", (methodPointerType)&m222, &t83_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t83__CustomAttributeCache_m222, 2529, 0, 4, 0, false, false, 241, NULL, (methodPointerType)NULL};
extern TypeInfo t83_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t83__CustomAttributeCache_m223;
MethodInfo m223_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m223, &t83_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t83__CustomAttributeCache_m223, 2529, 0, 5, 0, false, false, 242, NULL, (methodPointerType)NULL};
extern TypeInfo t83_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m224_MI = 
{
	"MoveNext", (methodPointerType)&m224, &t83_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 243, NULL, (methodPointerType)NULL};
extern TypeInfo t83_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t83__CustomAttributeCache_m225;
MethodInfo m225_MI = 
{
	"Dispose", (methodPointerType)&m225, &t83_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t83__CustomAttributeCache_m225, 486, 0, 7, 0, false, false, 244, NULL, (methodPointerType)NULL};
extern TypeInfo t83_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t83__CustomAttributeCache_m226;
MethodInfo m226_MI = 
{
	"Reset", (methodPointerType)&m226, &t83_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t83__CustomAttributeCache_m226, 486, 0, 8, 0, false, false, 245, NULL, (methodPointerType)NULL};
static MethodInfo* t83_MIs[] =
{
	&m221_MI,
	&m222_MI,
	&m223_MI,
	&m224_MI,
	&m225_MI,
	&m226_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m222_MI;
extern MethodInfo m223_MI;
extern MethodInfo m224_MI;
extern MethodInfo m225_MI;
extern MethodInfo m226_MI;
static MethodInfo* t83_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m222_MI,
	&m223_MI,
	&m224_MI,
	&m225_MI,
	&m226_MI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t83_ITIs[] = 
{
	&t179_TI,
	&t78_TI,
	&t167_TI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static Il2CppInterfaceOffsetPair t83_IOs[] = 
{
	{ &t179_TI, 4},
	{ &t78_TI, 5},
	{ &t167_TI, 7},
};
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t83_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t83_CustomAttributesCacheGenerator_m222(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t83_CustomAttributesCacheGenerator_m223(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t83_CustomAttributesCacheGenerator_m225(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t83_CustomAttributesCacheGenerator_m226(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t83__CustomAttributeCache = {
1,
NULL,
&t83_CustomAttributesCacheGenerator
};
CustomAttributesCache t83__CustomAttributeCache_m222 = {
1,
NULL,
&t83_CustomAttributesCacheGenerator_m222
};
CustomAttributesCache t83__CustomAttributeCache_m223 = {
1,
NULL,
&t83_CustomAttributesCacheGenerator_m223
};
CustomAttributesCache t83__CustomAttributeCache_m225 = {
1,
NULL,
&t83_CustomAttributesCacheGenerator_m225
};
CustomAttributesCache t83__CustomAttributeCache_m226 = {
1,
NULL,
&t83_CustomAttributesCacheGenerator_m226
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t83_0_0_0;
extern Il2CppType t83_1_0_0;
extern TypeInfo t25_TI;
struct t83;
extern TypeInfo t83_TI;
extern TypeInfo t82_TI;
extern CustomAttributesCache t83__CustomAttributeCache;
extern CustomAttributesCache t83__CustomAttributeCache_m222;
extern CustomAttributesCache t83__CustomAttributeCache_m223;
extern CustomAttributesCache t83__CustomAttributeCache_m225;
extern CustomAttributesCache t83__CustomAttributeCache_m226;
TypeInfo t83_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "<FOVKickDown>c__Iterator2", "", t83_MIs, t83_PIs, t83_FIs, NULL, &t25_TI, NULL, &t82_TI, &t83_TI, t83_ITIs, t83_VT, &t83__CustomAttributeCache, &t83_TI, &t83_0_0_0, &t83_1_0_0, t83_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t83), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 9, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t82_TI;
#include "t82MD.h"

extern TypeInfo t82_TI;
extern TypeInfo t168_TI;
extern TypeInfo t81_TI;
extern TypeInfo t83_TI;
extern MethodInfo m452_MI;
extern MethodInfo m229_MI;
extern MethodInfo m476_MI;
extern MethodInfo m411_MI;
extern MethodInfo m517_MI;
extern MethodInfo m215_MI;
extern MethodInfo m221_MI;


extern MethodInfo m227_MI;
 void m227 (t82 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m227_MI);
	{
		__this->f2 = (3.0f);
		__this->f3 = (1.0f);
		__this->f4 = (1.0f);
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m228_MI;
 void m228 (t82 * __this, t32 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m228_MI);
	{
		m229(__this, p0, &m229_MI);
		__this->f0 = p0;
		NullCheck(p0);
		float L_0 = m476(p0, &m476_MI);
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m229_MI;
 void m229 (t82 * __this, t32 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m229_MI);
	{
		bool L_0 = m411(NULL, p0, (t60 *)NULL, &m411_MI);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		t168 * L_1 = (t168 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t168_TI));
		m517(L_1, (t27*) &_stringLiteral21, &m517_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0017:
	{
		t74 * L_2 = (__this->f5);
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		t168 * L_3 = (t168 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t168_TI));
		m517(L_3, (t27*) &_stringLiteral22, &m517_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m230_MI;
 void m230 (t82 * __this, t32 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m230_MI);
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m231_MI;
 t25 * m231 (t82 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m231_MI);
	t81 * V_0 = {0};
	{
		t81 * L_0 = (t81 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t81_TI));
		m215(L_0, &m215_MI);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->f3 = __this;
		return V_0;
	}
}
extern MethodInfo m232_MI;
 t25 * m232 (t82 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m232_MI);
	t83 * V_0 = {0};
	{
		t83 * L_0 = (t83 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t83_TI));
		m221(L_0, &m221_MI);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->f3 = __this;
		return V_0;
	}
}
// Metadata Definition UnityStandardAssets.Utility.FOVKick
extern Il2CppType t32_0_0_6;
FieldInfo t82_f0_FieldInfo = 
{
	"Camera", &t32_0_0_6, &t82_TI, offsetof(t82, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
extern CustomAttributesCache t82__CustomAttributeCache_originalFov;
FieldInfo t82_f1_FieldInfo = 
{
	"originalFov", &t124_0_0_6, &t82_TI, offsetof(t82, f1), &t82__CustomAttributeCache_originalFov};
extern Il2CppType t124_0_0_6;
FieldInfo t82_f2_FieldInfo = 
{
	"FOVIncrease", &t124_0_0_6, &t82_TI, offsetof(t82, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t82_f3_FieldInfo = 
{
	"TimeToIncrease", &t124_0_0_6, &t82_TI, offsetof(t82, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t82_f4_FieldInfo = 
{
	"TimeToDecrease", &t124_0_0_6, &t82_TI, offsetof(t82, f4), &EmptyCustomAttributesCache};
extern Il2CppType t74_0_0_6;
FieldInfo t82_f5_FieldInfo = 
{
	"IncreaseCurve", &t74_0_0_6, &t82_TI, offsetof(t82, f5), &EmptyCustomAttributesCache};
static FieldInfo* t82_FIs[] =
{
	&t82_f0_FieldInfo,
	&t82_f1_FieldInfo,
	&t82_f2_FieldInfo,
	&t82_f3_FieldInfo,
	&t82_f4_FieldInfo,
	&t82_f5_FieldInfo,
	NULL
};
extern TypeInfo t82_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m227_MI = 
{
	".ctor", (methodPointerType)&m227, &t82_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 228, NULL, (methodPointerType)NULL};
extern Il2CppType t32_0_0_0;
static ParameterInfo t82_m228_ParameterInfos[] = 
{
	{"camera", 0, 134217852, &EmptyCustomAttributesCache, &t32_0_0_0},
};
extern TypeInfo t82_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m228_MI = 
{
	"Setup", (methodPointerType)&m228, &t82_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t82_m228_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 229, NULL, (methodPointerType)NULL};
extern Il2CppType t32_0_0_0;
static ParameterInfo t82_m229_ParameterInfos[] = 
{
	{"camera", 0, 134217853, &EmptyCustomAttributesCache, &t32_0_0_0},
};
extern TypeInfo t82_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m229_MI = 
{
	"CheckStatus", (methodPointerType)&m229, &t82_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t82_m229_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 230, NULL, (methodPointerType)NULL};
extern Il2CppType t32_0_0_0;
static ParameterInfo t82_m230_ParameterInfos[] = 
{
	{"camera", 0, 134217854, &EmptyCustomAttributesCache, &t32_0_0_0},
};
extern TypeInfo t82_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m230_MI = 
{
	"ChangeCamera", (methodPointerType)&m230, &t82_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t82_m230_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 231, NULL, (methodPointerType)NULL};
extern TypeInfo t82_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t82__CustomAttributeCache_m231;
MethodInfo m231_MI = 
{
	"FOVKickUp", (methodPointerType)&m231, &t82_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &t82__CustomAttributeCache_m231, 134, 0, 255, 0, false, false, 232, NULL, (methodPointerType)NULL};
extern TypeInfo t82_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t82__CustomAttributeCache_m232;
MethodInfo m232_MI = 
{
	"FOVKickDown", (methodPointerType)&m232, &t82_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &t82__CustomAttributeCache_m232, 134, 0, 255, 0, false, false, 233, NULL, (methodPointerType)NULL};
static MethodInfo* t82_MIs[] =
{
	&m227_MI,
	&m228_MI,
	&m229_MI,
	&m230_MI,
	&m231_MI,
	&m232_MI,
	NULL
};
extern TypeInfo t81_TI;
extern TypeInfo t83_TI;
static TypeInfo* t82_TI__nestedTypes[3] =
{
	&t81_TI,
	&t83_TI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t82_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t184_TI;
#include "t184.h"
#include "t184MD.h"
extern MethodInfo m591_MI;
void t82_CustomAttributesCacheGenerator_originalFov(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t184 * tmp;
		tmp = (t184 *)il2cpp_codegen_object_new (&t184_TI);
		m591(tmp, &m591_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t82_CustomAttributesCacheGenerator_m231(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t82_CustomAttributesCacheGenerator_m232(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t82__CustomAttributeCache_originalFov = {
1,
NULL,
&t82_CustomAttributesCacheGenerator_originalFov
};
CustomAttributesCache t82__CustomAttributeCache_m231 = {
1,
NULL,
&t82_CustomAttributesCacheGenerator_m231
};
CustomAttributesCache t82__CustomAttributeCache_m232 = {
1,
NULL,
&t82_CustomAttributesCacheGenerator_m232
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t82_0_0_0;
extern Il2CppType t82_1_0_0;
extern TypeInfo t25_TI;
struct t82;
extern TypeInfo t82_TI;
extern CustomAttributesCache t82__CustomAttributeCache_originalFov;
extern CustomAttributesCache t82__CustomAttributeCache_m231;
extern CustomAttributesCache t82__CustomAttributeCache_m232;
TypeInfo t82_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "FOVKick", "UnityStandardAssets.Utility", t82_MIs, NULL, t82_FIs, NULL, &t25_TI, t82_TI__nestedTypes, NULL, &t82_TI, NULL, t82_VT, &EmptyCustomAttributesCache, &t82_TI, &t82_0_0_0, &t82_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t82), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 0, 6, 0, 2, 4, 0, 0};
#include "t84.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t84_TI;
#include "t84MD.h"

#include "t85.h"
extern TypeInfo t84_TI;
extern TypeInfo t134_TI;
extern TypeInfo t27_TI;
#include "t85MD.h"
extern MethodInfo m334_MI;
extern MethodInfo m546_MI;
extern MethodInfo m592_MI;
extern MethodInfo m593_MI;
extern MethodInfo m594_MI;
struct t127;
#define m592(__this, method) (t85 *)m362_gshared((t127 *)__this, method)
extern MethodInfo m592_MI;


extern MethodInfo m233_MI;
 void m233 (t84 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m233_MI);
	{
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m234_MI;
 void m234 (t84 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m234_MI);
	{
		float L_0 = m546(NULL, &m546_MI);
		__this->f5 = ((float)(L_0+(0.5f)));
		t85 * L_1 = m592(__this, &m592_MI);
		__this->f7 = L_1;
		return;
	}
}
extern MethodInfo m235_MI;
 void m235 (t84 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m235_MI);
	{
		int32_t L_0 = (__this->f4);
		__this->f4 = ((int32_t)(L_0+1));
		float L_1 = m546(NULL, &m546_MI);
		float L_2 = (__this->f5);
		if ((((float)L_1) <= ((float)L_2)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_3 = (__this->f4);
		__this->f6 = (((int32_t)((float)((((float)L_3))/(0.5f)))));
		__this->f4 = 0;
		float L_4 = (__this->f5);
		__this->f5 = ((float)(L_4+(0.5f)));
		t85 * L_5 = (__this->f7);
		int32_t L_6 = (__this->f6);
		int32_t L_7 = L_6;
		t25 * L_8 = Box(InitializedTypeInfo(&t134_TI), &L_7);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_9 = m593(NULL, (t27*) &_stringLiteral23, L_8, &m593_MI);
		NullCheck(L_5);
		m594(L_5, L_9, &m594_MI);
	}

IL_006b:
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.FPSCounter
extern Il2CppType t124_0_0_32849;
FieldInfo t84_f2_FieldInfo = 
{
	"fpsMeasurePeriod", &t124_0_0_32849, &t84_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_32849;
FieldInfo t84_f3_FieldInfo = 
{
	"display", &t27_0_0_32849, &t84_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t84_f4_FieldInfo = 
{
	"m_FpsAccumulator", &t134_0_0_1, &t84_TI, offsetof(t84, f4), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t84_f5_FieldInfo = 
{
	"m_FpsNextPeriod", &t124_0_0_1, &t84_TI, offsetof(t84, f5), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t84_f6_FieldInfo = 
{
	"m_CurrentFps", &t134_0_0_1, &t84_TI, offsetof(t84, f6), &EmptyCustomAttributesCache};
extern Il2CppType t85_0_0_1;
FieldInfo t84_f7_FieldInfo = 
{
	"m_GuiText", &t85_0_0_1, &t84_TI, offsetof(t84, f7), &EmptyCustomAttributesCache};
static FieldInfo* t84_FIs[] =
{
	&t84_f2_FieldInfo,
	&t84_f3_FieldInfo,
	&t84_f4_FieldInfo,
	&t84_f5_FieldInfo,
	&t84_f6_FieldInfo,
	&t84_f7_FieldInfo,
	NULL
};
static const float t84_f2_DefaultValueData = 0.5f;
extern Il2CppType t124_0_0_0;
static Il2CppFieldDefaultValueEntry t84_f2_DefaultValue = 
{
	&t84_f2_FieldInfo, { (char*)&t84_f2_DefaultValueData, &t124_0_0_0 }};
static const uint16_t t84_f3_DefaultValueData[] = { 0x7B, 0x30, 0x7D, 0x20, 0x46, 0x50, 0x53, 0x00 };
extern Il2CppType t27_0_0_0;
static Il2CppFieldDefaultValueEntry t84_f3_DefaultValue = 
{
	&t84_f3_FieldInfo, { (char*)&t84_f3_DefaultValueData, &t27_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t84_FDVs[] = 
{
	&t84_f2_DefaultValue,
	&t84_f3_DefaultValue,
	NULL
};
extern TypeInfo t84_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m233_MI = 
{
	".ctor", (methodPointerType)&m233, &t84_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 246, NULL, (methodPointerType)NULL};
extern TypeInfo t84_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m234_MI = 
{
	"Start", (methodPointerType)&m234, &t84_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 247, NULL, (methodPointerType)NULL};
extern TypeInfo t84_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m235_MI = 
{
	"Update", (methodPointerType)&m235, &t84_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 248, NULL, (methodPointerType)NULL};
static MethodInfo* t84_MIs[] =
{
	&m233_MI,
	&m234_MI,
	&m235_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t84_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t133_TI;
extern MethodInfo m363_MI;
extern TypeInfo t85_TI;
void t84_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t133 * tmp;
		tmp = (t133 *)il2cpp_codegen_object_new (&t133_TI);
		m363(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t85_TI)), &m363_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t84__CustomAttributeCache = {
1,
NULL,
&t84_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t84_0_0_0;
extern Il2CppType t84_1_0_0;
extern TypeInfo t3_TI;
struct t84;
extern TypeInfo t84_TI;
extern CustomAttributesCache t84__CustomAttributeCache;
TypeInfo t84_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "FPSCounter", "UnityStandardAssets.Utility", t84_MIs, NULL, t84_FIs, NULL, &t3_TI, NULL, NULL, &t84_TI, NULL, t84_VT, &t84__CustomAttributeCache, &t84_TI, &t84_0_0_0, &t84_1_0_0, NULL, NULL, NULL, t84_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t84), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 6, 0, 0, 4, 0, 0};
#include "t86.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t86_TI;
#include "t86MD.h"

extern TypeInfo t4_TI;
extern TypeInfo t86_TI;
extern MethodInfo m359_MI;
extern MethodInfo m334_MI;
extern MethodInfo m336_MI;
extern MethodInfo m335_MI;
extern MethodInfo m347_MI;
extern MethodInfo m350_MI;


extern MethodInfo m236_MI;
 void m236 (t86 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m236_MI);
	{
		t4  L_0 = {0};
		m359(&L_0, (0.0f), (7.5f), (0.0f), &m359_MI);
		__this->f3 = L_0;
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m237_MI;
 void m237 (t86 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m237_MI);
	{
		t2 * L_0 = m336(__this, &m336_MI);
		t2 * L_1 = (__this->f2);
		NullCheck(L_1);
		t4  L_2 = m335(L_1, &m335_MI);
		t4  L_3 = (__this->f3);
		t4  L_4 = m347(NULL, L_2, L_3, &m347_MI);
		NullCheck(L_0);
		m350(L_0, L_4, &m350_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.FollowTarget
extern Il2CppType t2_0_0_6;
FieldInfo t86_f2_FieldInfo = 
{
	"target", &t2_0_0_6, &t86_TI, offsetof(t86, f2), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_6;
FieldInfo t86_f3_FieldInfo = 
{
	"offset", &t4_0_0_6, &t86_TI, offsetof(t86, f3), &EmptyCustomAttributesCache};
static FieldInfo* t86_FIs[] =
{
	&t86_f2_FieldInfo,
	&t86_f3_FieldInfo,
	NULL
};
extern TypeInfo t86_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m236_MI = 
{
	".ctor", (methodPointerType)&m236, &t86_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 249, NULL, (methodPointerType)NULL};
extern TypeInfo t86_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m237_MI = 
{
	"LateUpdate", (methodPointerType)&m237, &t86_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 250, NULL, (methodPointerType)NULL};
static MethodInfo* t86_MIs[] =
{
	&m236_MI,
	&m237_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t86_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t86_0_0_0;
extern Il2CppType t86_1_0_0;
extern TypeInfo t3_TI;
struct t86;
extern TypeInfo t86_TI;
TypeInfo t86_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "FollowTarget", "UnityStandardAssets.Utility", t86_MIs, NULL, t86_FIs, NULL, &t3_TI, NULL, NULL, &t86_TI, NULL, t86_VT, &EmptyCustomAttributesCache, &t86_TI, &t86_0_0_0, &t86_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t86), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 2, 0, 0, 4, 0, 0};
#include "t87.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t87_TI;
#include "t87MD.h"

#include "t185.h"
extern TypeInfo t39_TI;
extern MethodInfo m334_MI;
extern MethodInfo m104_MI;
extern MethodInfo m387_MI;
extern MethodInfo m595_MI;


extern MethodInfo m238_MI;
 void m238 (t87 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m238_MI);
	{
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m239_MI;
 void m239 (t87 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m239_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		bool L_0 = m104(NULL, (t27*) &_stringLiteral24, &m104_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t27* L_1 = m387(NULL, &m387_MI);
		m595(NULL, L_1, &m595_MI);
	}

IL_001a:
	{
		return;
	}
}
// Metadata Definition ForcedReset
extern TypeInfo t87_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m238_MI = 
{
	".ctor", (methodPointerType)&m238, &t87_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 251, NULL, (methodPointerType)NULL};
extern TypeInfo t87_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m239_MI = 
{
	"Update", (methodPointerType)&m239, &t87_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 252, NULL, (methodPointerType)NULL};
static MethodInfo* t87_MIs[] =
{
	&m238_MI,
	&m239_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t87_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t133_TI;
extern MethodInfo m363_MI;
extern TypeInfo t186_TI;
#include "t186.h"
void t87_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t133 * tmp;
		tmp = (t133 *)il2cpp_codegen_object_new (&t133_TI);
		m363(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t186_TI)), &m363_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t87__CustomAttributeCache = {
1,
NULL,
&t87_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t87_0_0_0;
extern Il2CppType t87_1_0_0;
extern TypeInfo t3_TI;
struct t87;
extern TypeInfo t87_TI;
extern CustomAttributesCache t87__CustomAttributeCache;
TypeInfo t87_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "ForcedReset", "", t87_MIs, NULL, NULL, NULL, &t3_TI, NULL, NULL, &t87_TI, NULL, t87_VT, &t87__CustomAttributeCache, &t87_TI, &t87_0_0_0, &t87_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t87), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 4, 0, 0};
#include "t88.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t88_TI;
#include "t88MD.h"

#include "t89.h"
#include "t187.h"
extern TypeInfo t88_TI;
extern TypeInfo t89_TI;
extern TypeInfo t126_TI;
extern TypeInfo t187_TI;
extern TypeInfo t177_TI;
#include "t187MD.h"
extern MethodInfo m452_MI;
extern MethodInfo m357_MI;
extern MethodInfo m345_MI;
extern MethodInfo m596_MI;
extern MethodInfo m566_MI;


extern MethodInfo m240_MI;
 void m240 (t88 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m240_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m241_MI;
 t25 * m241 (t88 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m241_MI);
	{
		t25 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m242_MI;
 t25 * m242 (t88 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m242_MI);
	{
		t25 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m243_MI;
 bool m243 (t88 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m243_MI);
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (-1);
		if (V_0 == 0)
		{
			goto IL_0025;
		}
		if (V_0 == 1)
		{
			goto IL_0090;
		}
		if (V_0 == 2)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_013e;
	}

IL_0025:
	{
		__this->f0 = (0.0f);
		goto IL_0090;
	}

IL_0035:
	{
		t89 * L_1 = (__this->f3);
		t89 * L_2 = (__this->f3);
		NullCheck(L_2);
		float L_3 = (L_2->f1);
		float L_4 = (__this->f0);
		t89 * L_5 = (__this->f3);
		NullCheck(L_5);
		float L_6 = (L_5->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_7 = m357(NULL, (0.0f), L_3, ((float)(L_4/L_6)), &m357_MI);
		NullCheck(L_1);
		L_1->f2 = L_7;
		float L_8 = (__this->f0);
		float L_9 = m345(NULL, &m345_MI);
		__this->f0 = ((float)(L_8+L_9));
		t187 * L_10 = (t187 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t187_TI));
		m596(L_10, &m596_MI);
		__this->f2 = L_10;
		__this->f1 = 1;
		goto IL_0140;
	}

IL_0090:
	{
		float L_11 = (__this->f0);
		t89 * L_12 = (__this->f3);
		NullCheck(L_12);
		float L_13 = (L_12->f0);
		if ((((float)L_11) < ((float)L_13)))
		{
			goto IL_0035;
		}
	}
	{
		__this->f0 = (0.0f);
		goto IL_0111;
	}

IL_00b6:
	{
		t89 * L_14 = (__this->f3);
		t89 * L_15 = (__this->f3);
		NullCheck(L_15);
		float L_16 = (L_15->f1);
		float L_17 = (__this->f0);
		t89 * L_18 = (__this->f3);
		NullCheck(L_18);
		float L_19 = (L_18->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_20 = m357(NULL, L_16, (0.0f), ((float)(L_17/L_19)), &m357_MI);
		NullCheck(L_14);
		L_14->f2 = L_20;
		float L_21 = (__this->f0);
		float L_22 = m345(NULL, &m345_MI);
		__this->f0 = ((float)(L_21+L_22));
		t187 * L_23 = (t187 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t187_TI));
		m596(L_23, &m596_MI);
		__this->f2 = L_23;
		__this->f1 = 2;
		goto IL_0140;
	}

IL_0111:
	{
		float L_24 = (__this->f0);
		t89 * L_25 = (__this->f3);
		NullCheck(L_25);
		float L_26 = (L_25->f0);
		if ((((float)L_24) < ((float)L_26)))
		{
			goto IL_00b6;
		}
	}
	{
		t89 * L_27 = (__this->f3);
		NullCheck(L_27);
		L_27->f2 = (0.0f);
		__this->f1 = (-1);
	}

IL_013e:
	{
		return 0;
	}

IL_0140:
	{
		return 1;
	}
	// Dead block : IL_0142: ldloc.1
}
extern MethodInfo m244_MI;
 void m244 (t88 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m244_MI);
	{
		__this->f1 = (-1);
		return;
	}
}
extern MethodInfo m245_MI;
 void m245 (t88 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m245_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m566(L_0, &m566_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3
extern Il2CppType t124_0_0_3;
FieldInfo t88_f0_FieldInfo = 
{
	"<t>__0", &t124_0_0_3, &t88_TI, offsetof(t88, f0), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t88_f1_FieldInfo = 
{
	"$PC", &t134_0_0_3, &t88_TI, offsetof(t88, f1), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_3;
FieldInfo t88_f2_FieldInfo = 
{
	"$current", &t25_0_0_3, &t88_TI, offsetof(t88, f2), &EmptyCustomAttributesCache};
extern Il2CppType t89_0_0_3;
FieldInfo t88_f3_FieldInfo = 
{
	"<>f__this", &t89_0_0_3, &t88_TI, offsetof(t88, f3), &EmptyCustomAttributesCache};
static FieldInfo* t88_FIs[] =
{
	&t88_f0_FieldInfo,
	&t88_f1_FieldInfo,
	&t88_f2_FieldInfo,
	&t88_f3_FieldInfo,
	NULL
};
extern MethodInfo m241_MI;
static PropertyInfo t88____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&t88_TI, "System.Collections.Generic.IEnumerator<object>.Current", &m241_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m242_MI;
static PropertyInfo t88____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t88_TI, "System.Collections.IEnumerator.Current", &m242_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t88_PIs[] =
{
	&t88____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&t88____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t88_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m240_MI = 
{
	".ctor", (methodPointerType)&m240, &t88_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 256, NULL, (methodPointerType)NULL};
extern TypeInfo t88_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t88__CustomAttributeCache_m241;
MethodInfo m241_MI = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current", (methodPointerType)&m241, &t88_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t88__CustomAttributeCache_m241, 2529, 0, 4, 0, false, false, 257, NULL, (methodPointerType)NULL};
extern TypeInfo t88_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t88__CustomAttributeCache_m242;
MethodInfo m242_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m242, &t88_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t88__CustomAttributeCache_m242, 2529, 0, 5, 0, false, false, 258, NULL, (methodPointerType)NULL};
extern TypeInfo t88_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m243_MI = 
{
	"MoveNext", (methodPointerType)&m243, &t88_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 259, NULL, (methodPointerType)NULL};
extern TypeInfo t88_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t88__CustomAttributeCache_m244;
MethodInfo m244_MI = 
{
	"Dispose", (methodPointerType)&m244, &t88_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t88__CustomAttributeCache_m244, 486, 0, 7, 0, false, false, 260, NULL, (methodPointerType)NULL};
extern TypeInfo t88_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t88__CustomAttributeCache_m245;
MethodInfo m245_MI = 
{
	"Reset", (methodPointerType)&m245, &t88_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t88__CustomAttributeCache_m245, 486, 0, 8, 0, false, false, 261, NULL, (methodPointerType)NULL};
static MethodInfo* t88_MIs[] =
{
	&m240_MI,
	&m241_MI,
	&m242_MI,
	&m243_MI,
	&m244_MI,
	&m245_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m241_MI;
extern MethodInfo m242_MI;
extern MethodInfo m243_MI;
extern MethodInfo m244_MI;
extern MethodInfo m245_MI;
static MethodInfo* t88_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m241_MI,
	&m242_MI,
	&m243_MI,
	&m244_MI,
	&m245_MI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t88_ITIs[] = 
{
	&t179_TI,
	&t78_TI,
	&t167_TI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static Il2CppInterfaceOffsetPair t88_IOs[] = 
{
	{ &t179_TI, 4},
	{ &t78_TI, 5},
	{ &t167_TI, 7},
};
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t88_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t88_CustomAttributesCacheGenerator_m241(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t88_CustomAttributesCacheGenerator_m242(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t88_CustomAttributesCacheGenerator_m244(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t88_CustomAttributesCacheGenerator_m245(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t88__CustomAttributeCache = {
1,
NULL,
&t88_CustomAttributesCacheGenerator
};
CustomAttributesCache t88__CustomAttributeCache_m241 = {
1,
NULL,
&t88_CustomAttributesCacheGenerator_m241
};
CustomAttributesCache t88__CustomAttributeCache_m242 = {
1,
NULL,
&t88_CustomAttributesCacheGenerator_m242
};
CustomAttributesCache t88__CustomAttributeCache_m244 = {
1,
NULL,
&t88_CustomAttributesCacheGenerator_m244
};
CustomAttributesCache t88__CustomAttributeCache_m245 = {
1,
NULL,
&t88_CustomAttributesCacheGenerator_m245
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t88_0_0_0;
extern Il2CppType t88_1_0_0;
extern TypeInfo t25_TI;
struct t88;
extern TypeInfo t88_TI;
extern TypeInfo t89_TI;
extern CustomAttributesCache t88__CustomAttributeCache;
extern CustomAttributesCache t88__CustomAttributeCache_m241;
extern CustomAttributesCache t88__CustomAttributeCache_m242;
extern CustomAttributesCache t88__CustomAttributeCache_m244;
extern CustomAttributesCache t88__CustomAttributeCache_m245;
TypeInfo t88_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "<DoBobCycle>c__Iterator3", "", t88_MIs, t88_PIs, t88_FIs, NULL, &t25_TI, NULL, &t89_TI, &t88_TI, t88_ITIs, t88_VT, &t88__CustomAttributeCache, &t88_TI, &t88_0_0_0, &t88_1_0_0, t88_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t88), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 9, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t89_TI;
#include "t89MD.h"

extern TypeInfo t89_TI;
extern TypeInfo t88_TI;
extern MethodInfo m452_MI;
extern MethodInfo m240_MI;


extern MethodInfo m246_MI;
 void m246 (t89 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m246_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m247_MI;
 float m247 (t89 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m247_MI);
	{
		float L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m248_MI;
 t25 * m248 (t89 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m248_MI);
	t88 * V_0 = {0};
	{
		t88 * L_0 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m240(L_0, &m240_MI);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->f3 = __this;
		return V_0;
	}
}
// Metadata Definition UnityStandardAssets.Utility.LerpControlledBob
extern Il2CppType t124_0_0_6;
FieldInfo t89_f0_FieldInfo = 
{
	"BobDuration", &t124_0_0_6, &t89_TI, offsetof(t89, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t89_f1_FieldInfo = 
{
	"BobAmount", &t124_0_0_6, &t89_TI, offsetof(t89, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t89_f2_FieldInfo = 
{
	"m_Offset", &t124_0_0_1, &t89_TI, offsetof(t89, f2), &EmptyCustomAttributesCache};
static FieldInfo* t89_FIs[] =
{
	&t89_f0_FieldInfo,
	&t89_f1_FieldInfo,
	&t89_f2_FieldInfo,
	NULL
};
extern TypeInfo t89_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m246_MI = 
{
	".ctor", (methodPointerType)&m246, &t89_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 253, NULL, (methodPointerType)NULL};
extern TypeInfo t89_TI;
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m247_MI = 
{
	"Offset", (methodPointerType)&m247, &t89_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 254, NULL, (methodPointerType)NULL};
extern TypeInfo t89_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t89__CustomAttributeCache_m248;
MethodInfo m248_MI = 
{
	"DoBobCycle", (methodPointerType)&m248, &t89_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &t89__CustomAttributeCache_m248, 134, 0, 255, 0, false, false, 255, NULL, (methodPointerType)NULL};
static MethodInfo* t89_MIs[] =
{
	&m246_MI,
	&m247_MI,
	&m248_MI,
	NULL
};
extern TypeInfo t88_TI;
static TypeInfo* t89_TI__nestedTypes[2] =
{
	&t88_TI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t89_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t89_CustomAttributesCacheGenerator_m248(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t89__CustomAttributeCache_m248 = {
1,
NULL,
&t89_CustomAttributesCacheGenerator_m248
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t89_0_0_0;
extern Il2CppType t89_1_0_0;
extern TypeInfo t25_TI;
struct t89;
extern TypeInfo t89_TI;
extern CustomAttributesCache t89__CustomAttributeCache_m248;
TypeInfo t89_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "LerpControlledBob", "UnityStandardAssets.Utility", t89_MIs, NULL, t89_FIs, NULL, &t25_TI, t89_TI__nestedTypes, NULL, &t89_TI, NULL, t89_VT, &EmptyCustomAttributesCache, &t89_TI, &t89_0_0_0, &t89_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t89), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 3, 0, 1, 4, 0, 0};
#include "t90.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t90_TI;
#include "t90MD.h"

#include "t188.h"
#include "t92.h"
#include "t93.h"
extern TypeInfo t90_TI;
extern TypeInfo t188_TI;
extern TypeInfo t92_TI;
extern TypeInfo t93_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2_TI;
extern TypeInfo t177_TI;
#include "t188MD.h"
#include "t93MD.h"
extern MethodInfo m452_MI;
extern MethodInfo m597_MI;
extern MethodInfo m598_MI;
extern MethodInfo m599_MI;
extern MethodInfo m338_MI;
extern MethodInfo m336_MI;
extern MethodInfo m350_MI;
extern MethodInfo m432_MI;
extern MethodInfo m377_MI;
extern MethodInfo m344_MI;
extern MethodInfo m600_MI;
extern MethodInfo m601_MI;
extern MethodInfo m602_MI;
extern MethodInfo m566_MI;
struct t127;
#define m598(__this, method) (t91*)m483_gshared((t127 *)__this, method)
extern MethodInfo m598_MI;


extern MethodInfo m249_MI;
 void m249 (t90 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m249_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m250_MI;
 t25 * m250 (t90 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m250_MI);
	{
		t25 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m251_MI;
 t25 * m251 (t90 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m251_MI);
	{
		t25 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m252_MI;
 bool m252 (t90 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m252_MI);
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f4);
		V_0 = L_0;
		__this->f4 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0142;
	}

IL_0021:
	{
		float L_1 = (__this->f0);
		t188 * L_2 = (t188 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t188_TI));
		m597(L_2, L_1, &m597_MI);
		__this->f5 = L_2;
		__this->f4 = 1;
		goto IL_0144;
	}

IL_003e:
	{
		t92 * L_3 = (__this->f7);
		NullCheck(L_3);
		t91* L_4 = m598(L_3, &m598_MI);
		__this->f1 = L_4;
		__this->f2 = 0;
		goto IL_00a3;
	}

IL_005b:
	{
		t91* L_5 = (__this->f1);
		int32_t L_6 = (__this->f2);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		__this->f3 = (*(t2 **)(t2 **)SZArrayLdElema(L_5, L_6));
		t92 * L_7 = (__this->f7);
		NullCheck(L_7);
		t93 * L_8 = (L_7->f4);
		t2 * L_9 = (__this->f3);
		NullCheck(L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t2 * >::Invoke(&m599_MI, L_8, L_9);
		if (L_10)
		{
			goto IL_0095;
		}
	}
	{
		t2 * L_11 = (__this->f3);
		NullCheck(L_11);
		m338(L_11, (t2 *)NULL, &m338_MI);
	}

IL_0095:
	{
		int32_t L_12 = (__this->f2);
		__this->f2 = ((int32_t)(L_12+1));
	}

IL_00a3:
	{
		int32_t L_13 = (__this->f2);
		t91* L_14 = (__this->f1);
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((t122 *)L_14)->max_length))))))
		{
			goto IL_005b;
		}
	}
	{
		t92 * L_15 = (__this->f7);
		NullCheck(L_15);
		t2 * L_16 = m336(L_15, &m336_MI);
		t92 * L_17 = (__this->f7);
		NullCheck(L_17);
		t4  L_18 = (L_17->f2);
		NullCheck(L_16);
		m350(L_16, L_18, &m350_MI);
		t92 * L_19 = (__this->f7);
		NullCheck(L_19);
		t2 * L_20 = m336(L_19, &m336_MI);
		t92 * L_21 = (__this->f7);
		NullCheck(L_21);
		t21  L_22 = (L_21->f3);
		NullCheck(L_20);
		m432(L_20, L_22, &m432_MI);
		t92 * L_23 = (__this->f7);
		NullCheck(L_23);
		t17 * L_24 = (L_23->f5);
		bool L_25 = m377(NULL, L_24, &m377_MI);
		if (!L_25)
		{
			goto IL_012b;
		}
	}
	{
		t92 * L_26 = (__this->f7);
		NullCheck(L_26);
		t17 * L_27 = (L_26->f5);
		t4  L_28 = m344(NULL, &m344_MI);
		NullCheck(L_27);
		m600(L_27, L_28, &m600_MI);
		t92 * L_29 = (__this->f7);
		NullCheck(L_29);
		t17 * L_30 = (L_29->f5);
		t4  L_31 = m344(NULL, &m344_MI);
		NullCheck(L_30);
		m601(L_30, L_31, &m601_MI);
	}

IL_012b:
	{
		t92 * L_32 = (__this->f7);
		NullCheck(L_32);
		m602(L_32, (t27*) &_stringLiteral25, &m602_MI);
		__this->f4 = (-1);
	}

IL_0142:
	{
		return 0;
	}

IL_0144:
	{
		return 1;
	}
	// Dead block : IL_0146: ldloc.1
}
extern MethodInfo m253_MI;
 void m253 (t90 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m253_MI);
	{
		__this->f4 = (-1);
		return;
	}
}
extern MethodInfo m254_MI;
 void m254 (t90 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m254_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m566(L_0, &m566_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4
extern Il2CppType t124_0_0_3;
FieldInfo t90_f0_FieldInfo = 
{
	"delay", &t124_0_0_3, &t90_TI, offsetof(t90, f0), &EmptyCustomAttributesCache};
extern Il2CppType t91_0_0_3;
FieldInfo t90_f1_FieldInfo = 
{
	"<$s_4>__0", &t91_0_0_3, &t90_TI, offsetof(t90, f1), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t90_f2_FieldInfo = 
{
	"<$s_5>__1", &t134_0_0_3, &t90_TI, offsetof(t90, f2), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_3;
FieldInfo t90_f3_FieldInfo = 
{
	"<t>__2", &t2_0_0_3, &t90_TI, offsetof(t90, f3), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t90_f4_FieldInfo = 
{
	"$PC", &t134_0_0_3, &t90_TI, offsetof(t90, f4), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_3;
FieldInfo t90_f5_FieldInfo = 
{
	"$current", &t25_0_0_3, &t90_TI, offsetof(t90, f5), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t90_f6_FieldInfo = 
{
	"<$>delay", &t124_0_0_3, &t90_TI, offsetof(t90, f6), &EmptyCustomAttributesCache};
extern Il2CppType t92_0_0_3;
FieldInfo t90_f7_FieldInfo = 
{
	"<>f__this", &t92_0_0_3, &t90_TI, offsetof(t90, f7), &EmptyCustomAttributesCache};
static FieldInfo* t90_FIs[] =
{
	&t90_f0_FieldInfo,
	&t90_f1_FieldInfo,
	&t90_f2_FieldInfo,
	&t90_f3_FieldInfo,
	&t90_f4_FieldInfo,
	&t90_f5_FieldInfo,
	&t90_f6_FieldInfo,
	&t90_f7_FieldInfo,
	NULL
};
extern MethodInfo m250_MI;
static PropertyInfo t90____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&t90_TI, "System.Collections.Generic.IEnumerator<object>.Current", &m250_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m251_MI;
static PropertyInfo t90____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t90_TI, "System.Collections.IEnumerator.Current", &m251_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t90_PIs[] =
{
	&t90____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&t90____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t90_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m249_MI = 
{
	".ctor", (methodPointerType)&m249, &t90_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 266, NULL, (methodPointerType)NULL};
extern TypeInfo t90_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t90__CustomAttributeCache_m250;
MethodInfo m250_MI = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current", (methodPointerType)&m250, &t90_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t90__CustomAttributeCache_m250, 2529, 0, 4, 0, false, false, 267, NULL, (methodPointerType)NULL};
extern TypeInfo t90_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t90__CustomAttributeCache_m251;
MethodInfo m251_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m251, &t90_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t90__CustomAttributeCache_m251, 2529, 0, 5, 0, false, false, 268, NULL, (methodPointerType)NULL};
extern TypeInfo t90_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m252_MI = 
{
	"MoveNext", (methodPointerType)&m252, &t90_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 269, NULL, (methodPointerType)NULL};
extern TypeInfo t90_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t90__CustomAttributeCache_m253;
MethodInfo m253_MI = 
{
	"Dispose", (methodPointerType)&m253, &t90_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t90__CustomAttributeCache_m253, 486, 0, 7, 0, false, false, 270, NULL, (methodPointerType)NULL};
extern TypeInfo t90_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t90__CustomAttributeCache_m254;
MethodInfo m254_MI = 
{
	"Reset", (methodPointerType)&m254, &t90_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t90__CustomAttributeCache_m254, 486, 0, 8, 0, false, false, 271, NULL, (methodPointerType)NULL};
static MethodInfo* t90_MIs[] =
{
	&m249_MI,
	&m250_MI,
	&m251_MI,
	&m252_MI,
	&m253_MI,
	&m254_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m250_MI;
extern MethodInfo m251_MI;
extern MethodInfo m252_MI;
extern MethodInfo m253_MI;
extern MethodInfo m254_MI;
static MethodInfo* t90_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m250_MI,
	&m251_MI,
	&m252_MI,
	&m253_MI,
	&m254_MI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t90_ITIs[] = 
{
	&t179_TI,
	&t78_TI,
	&t167_TI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static Il2CppInterfaceOffsetPair t90_IOs[] = 
{
	{ &t179_TI, 4},
	{ &t78_TI, 5},
	{ &t167_TI, 7},
};
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t90_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t90_CustomAttributesCacheGenerator_m250(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t90_CustomAttributesCacheGenerator_m251(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t90_CustomAttributesCacheGenerator_m253(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t90_CustomAttributesCacheGenerator_m254(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t90__CustomAttributeCache = {
1,
NULL,
&t90_CustomAttributesCacheGenerator
};
CustomAttributesCache t90__CustomAttributeCache_m250 = {
1,
NULL,
&t90_CustomAttributesCacheGenerator_m250
};
CustomAttributesCache t90__CustomAttributeCache_m251 = {
1,
NULL,
&t90_CustomAttributesCacheGenerator_m251
};
CustomAttributesCache t90__CustomAttributeCache_m253 = {
1,
NULL,
&t90_CustomAttributesCacheGenerator_m253
};
CustomAttributesCache t90__CustomAttributeCache_m254 = {
1,
NULL,
&t90_CustomAttributesCacheGenerator_m254
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t90_0_0_0;
extern Il2CppType t90_1_0_0;
extern TypeInfo t25_TI;
struct t90;
extern TypeInfo t90_TI;
extern TypeInfo t92_TI;
extern CustomAttributesCache t90__CustomAttributeCache;
extern CustomAttributesCache t90__CustomAttributeCache_m250;
extern CustomAttributesCache t90__CustomAttributeCache_m251;
extern CustomAttributesCache t90__CustomAttributeCache_m253;
extern CustomAttributesCache t90__CustomAttributeCache_m254;
TypeInfo t90_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "<ResetCoroutine>c__Iterator4", "", t90_MIs, t90_PIs, t90_FIs, NULL, &t25_TI, NULL, &t92_TI, &t90_TI, t90_ITIs, t90_VT, &t90__CustomAttributeCache, &t90_TI, &t90_0_0_0, &t90_1_0_0, t90_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t90), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 2, 8, 0, 0, 9, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t92_TI;
#include "t92MD.h"

extern TypeInfo t93_TI;
extern TypeInfo t92_TI;
extern TypeInfo t90_TI;
extern MethodInfo m334_MI;
extern MethodInfo m598_MI;
extern MethodInfo m603_MI;
extern MethodInfo m336_MI;
extern MethodInfo m335_MI;
extern MethodInfo m430_MI;
extern MethodInfo m412_MI;
extern MethodInfo m258_MI;
extern MethodInfo m604_MI;
extern MethodInfo m249_MI;
extern MethodInfo m598_MI;
extern MethodInfo m412_MI;


extern MethodInfo m255_MI;
 void m255 (t92 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m255_MI);
	{
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m256_MI;
 void m256 (t92 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m256_MI);
	{
		t91* L_0 = m598(__this, &m598_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t93_TI));
		t93 * L_1 = (t93 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t93_TI));
		m603(L_1, (t25*)(t25*)L_0, &m603_MI);
		__this->f4 = L_1;
		t2 * L_2 = m336(__this, &m336_MI);
		NullCheck(L_2);
		t4  L_3 = m335(L_2, &m335_MI);
		__this->f2 = L_3;
		t2 * L_4 = m336(__this, &m336_MI);
		NullCheck(L_4);
		t21  L_5 = m430(L_4, &m430_MI);
		__this->f3 = L_5;
		t17 * L_6 = m412(__this, &m412_MI);
		__this->f5 = L_6;
		return;
	}
}
extern MethodInfo m257_MI;
 void m257 (t92 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m257_MI);
	{
		t25 * L_0 = m258(__this, p0, &m258_MI);
		m604(__this, L_0, &m604_MI);
		return;
	}
}
extern MethodInfo m258_MI;
 t25 * m258 (t92 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m258_MI);
	t90 * V_0 = {0};
	{
		t90 * L_0 = (t90 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t90_TI));
		m249(L_0, &m249_MI);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->f0 = p0;
		NullCheck(V_0);
		V_0->f6 = p0;
		NullCheck(V_0);
		V_0->f7 = __this;
		return V_0;
	}
}
// Metadata Definition UnityStandardAssets.Utility.ObjectResetter
extern Il2CppType t4_0_0_1;
FieldInfo t92_f2_FieldInfo = 
{
	"originalPosition", &t4_0_0_1, &t92_TI, offsetof(t92, f2), &EmptyCustomAttributesCache};
extern Il2CppType t21_0_0_1;
FieldInfo t92_f3_FieldInfo = 
{
	"originalRotation", &t21_0_0_1, &t92_TI, offsetof(t92, f3), &EmptyCustomAttributesCache};
extern Il2CppType t93_0_0_1;
FieldInfo t92_f4_FieldInfo = 
{
	"originalStructure", &t93_0_0_1, &t92_TI, offsetof(t92, f4), &EmptyCustomAttributesCache};
extern Il2CppType t17_0_0_1;
FieldInfo t92_f5_FieldInfo = 
{
	"Rigidbody", &t17_0_0_1, &t92_TI, offsetof(t92, f5), &EmptyCustomAttributesCache};
static FieldInfo* t92_FIs[] =
{
	&t92_f2_FieldInfo,
	&t92_f3_FieldInfo,
	&t92_f4_FieldInfo,
	&t92_f5_FieldInfo,
	NULL
};
extern TypeInfo t92_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m255_MI = 
{
	".ctor", (methodPointerType)&m255, &t92_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 262, NULL, (methodPointerType)NULL};
extern TypeInfo t92_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m256_MI = 
{
	"Start", (methodPointerType)&m256, &t92_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 263, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t92_m257_ParameterInfos[] = 
{
	{"delay", 0, 134217855, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t92_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m257_MI = 
{
	"DelayedReset", (methodPointerType)&m257, &t92_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t92_m257_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 264, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t92_m258_ParameterInfos[] = 
{
	{"delay", 0, 134217856, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t92_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t92__CustomAttributeCache_m258;
MethodInfo m258_MI = 
{
	"ResetCoroutine", (methodPointerType)&m258, &t92_TI, &t78_0_0_0, RuntimeInvoker_t25_t124, t92_m258_ParameterInfos, &t92__CustomAttributeCache_m258, 134, 0, 255, 1, false, false, 265, NULL, (methodPointerType)NULL};
static MethodInfo* t92_MIs[] =
{
	&m255_MI,
	&m256_MI,
	&m257_MI,
	&m258_MI,
	NULL
};
extern TypeInfo t90_TI;
static TypeInfo* t92_TI__nestedTypes[2] =
{
	&t90_TI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t92_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t92_CustomAttributesCacheGenerator_m258(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t92__CustomAttributeCache_m258 = {
1,
NULL,
&t92_CustomAttributesCacheGenerator_m258
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t92_0_0_0;
extern Il2CppType t92_1_0_0;
extern TypeInfo t3_TI;
struct t92;
extern TypeInfo t92_TI;
extern CustomAttributesCache t92__CustomAttributeCache_m258;
TypeInfo t92_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "ObjectResetter", "UnityStandardAssets.Utility", t92_MIs, NULL, t92_FIs, NULL, &t3_TI, t92_TI__nestedTypes, NULL, &t92_TI, NULL, t92_VT, &EmptyCustomAttributesCache, &t92_TI, &t92_0_0_0, &t92_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t92), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 4, 0, 1, 4, 0, 0};
#include "t94.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t94_TI;
#include "t94MD.h"

#include "t97.h"
#include "t96.h"
#include "t189.h"
extern TypeInfo t94_TI;
extern TypeInfo t97_TI;
extern TypeInfo t126_TI;
extern TypeInfo t27_TI;
extern TypeInfo t188_TI;
extern TypeInfo t177_TI;
#include "t96MD.h"
#include "t190MD.h"
extern MethodInfo m452_MI;
extern MethodInfo m605_MI;
extern MethodInfo m606_MI;
extern MethodInfo m607_MI;
extern MethodInfo m443_MI;
extern MethodInfo m608_MI;
extern MethodInfo m609_MI;
extern MethodInfo m610_MI;
extern MethodInfo m611_MI;
extern MethodInfo m612_MI;
extern MethodInfo m613_MI;
extern MethodInfo m597_MI;
extern MethodInfo m370_MI;
extern MethodInfo m614_MI;
extern MethodInfo m566_MI;
struct t127;
#define m605(__this, method) (t95*)m483_gshared((t127 *)__this, method)
extern MethodInfo m605_MI;


extern MethodInfo m259_MI;
 void m259 (t94 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m259_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m260_MI;
 t25 * m260 (t94 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m260_MI);
	{
		t25 * L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m261_MI;
 t25 * m261 (t94 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m261_MI);
	{
		t25 * L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m262_MI;
 bool m262 (t94 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m262_MI);
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f8);
		V_0 = L_0;
		__this->f8 = (-1);
		if (V_0 == 0)
		{
			goto IL_0025;
		}
		if (V_0 == 1)
		{
			goto IL_00e7;
		}
		if (V_0 == 2)
		{
			goto IL_01ac;
		}
	}
	{
		goto IL_01c3;
	}

IL_0025:
	{
		t97 * L_1 = (__this->f10);
		NullCheck(L_1);
		t95* L_2 = m605(L_1, &m605_MI);
		__this->f0 = L_2;
		t95* L_3 = (__this->f0);
		__this->f1 = L_3;
		__this->f2 = 0;
		goto IL_0095;
	}

IL_004e:
	{
		t95* L_4 = (__this->f1);
		int32_t L_5 = (__this->f2);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		__this->f3 = (*(t96 **)(t96 **)SZArrayLdElema(L_4, L_5));
		t97 * L_6 = (__this->f10);
		t96 * L_7 = (__this->f3);
		NullCheck(L_7);
		float L_8 = m606(L_7, &m606_MI);
		t97 * L_9 = (__this->f10);
		NullCheck(L_9);
		float L_10 = (L_9->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_11 = m607(NULL, L_8, L_10, &m607_MI);
		NullCheck(L_6);
		L_6->f4 = L_11;
		int32_t L_12 = (__this->f2);
		__this->f2 = ((int32_t)(L_12+1));
	}

IL_0095:
	{
		int32_t L_13 = (__this->f2);
		t95* L_14 = (__this->f1);
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((t122 *)L_14)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		float L_15 = m443(NULL, &m443_MI);
		t97 * L_16 = (__this->f10);
		NullCheck(L_16);
		float L_17 = (L_16->f2);
		t97 * L_18 = (__this->f10);
		NullCheck(L_18);
		float L_19 = (L_18->f3);
		float L_20 = m608(NULL, L_17, L_19, &m608_MI);
		__this->f4 = ((float)(L_15+L_20));
		goto IL_00e7;
	}

IL_00d4:
	{
		__this->f9 = NULL;
		__this->f8 = 1;
		goto IL_01c5;
	}

IL_00e7:
	{
		float L_21 = m443(NULL, &m443_MI);
		float L_22 = (__this->f4);
		if ((((float)L_21) < ((float)L_22)))
		{
			goto IL_00d4;
		}
	}
	{
		t97 * L_23 = (__this->f10);
		NullCheck(L_23);
		bool L_24 = (L_23->f5);
		if (L_24)
		{
			goto IL_00d4;
		}
	}
	{
		t97 * L_25 = (__this->f10);
		NullCheck(L_25);
		t27* L_26 = m609(L_25, &m609_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_27 = m610(NULL, (t27*) &_stringLiteral26, L_26, &m610_MI);
		m611(NULL, L_27, &m611_MI);
		t95* L_28 = (__this->f0);
		__this->f5 = L_28;
		__this->f6 = 0;
		goto IL_0166;
	}

IL_0139:
	{
		t95* L_29 = (__this->f5);
		int32_t L_30 = (__this->f6);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		__this->f7 = (*(t96 **)(t96 **)SZArrayLdElema(L_29, L_30));
		t96 * L_31 = (__this->f7);
		NullCheck(L_31);
		m612(L_31, 0, &m612_MI);
		int32_t L_32 = (__this->f6);
		__this->f6 = ((int32_t)(L_32+1));
	}

IL_0166:
	{
		int32_t L_33 = (__this->f6);
		t95* L_34 = (__this->f5);
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((t122 *)L_34)->max_length))))))
		{
			goto IL_0139;
		}
	}
	{
		t97 * L_35 = (__this->f10);
		NullCheck(L_35);
		m613(L_35, (t27*) &_stringLiteral27, 1, &m613_MI);
		t97 * L_36 = (__this->f10);
		NullCheck(L_36);
		float L_37 = (L_36->f4);
		t188 * L_38 = (t188 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t188_TI));
		m597(L_38, L_37, &m597_MI);
		__this->f9 = L_38;
		__this->f8 = 2;
		goto IL_01c5;
	}

IL_01ac:
	{
		t97 * L_39 = (__this->f10);
		NullCheck(L_39);
		t62 * L_40 = m370(L_39, &m370_MI);
		m614(NULL, L_40, &m614_MI);
		__this->f8 = (-1);
	}

IL_01c3:
	{
		return 0;
	}

IL_01c5:
	{
		return 1;
	}
	// Dead block : IL_01c7: ldloc.1
}
extern MethodInfo m263_MI;
 void m263 (t94 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m263_MI);
	{
		__this->f8 = (-1);
		return;
	}
}
extern MethodInfo m264_MI;
 void m264 (t94 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m264_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m566(L_0, &m566_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5
extern Il2CppType t95_0_0_3;
FieldInfo t94_f0_FieldInfo = 
{
	"<systems>__0", &t95_0_0_3, &t94_TI, offsetof(t94, f0), &EmptyCustomAttributesCache};
extern Il2CppType t95_0_0_3;
FieldInfo t94_f1_FieldInfo = 
{
	"<$s_6>__1", &t95_0_0_3, &t94_TI, offsetof(t94, f1), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t94_f2_FieldInfo = 
{
	"<$s_7>__2", &t134_0_0_3, &t94_TI, offsetof(t94, f2), &EmptyCustomAttributesCache};
extern Il2CppType t96_0_0_3;
FieldInfo t94_f3_FieldInfo = 
{
	"<system>__3", &t96_0_0_3, &t94_TI, offsetof(t94, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t94_f4_FieldInfo = 
{
	"<stopTime>__4", &t124_0_0_3, &t94_TI, offsetof(t94, f4), &EmptyCustomAttributesCache};
extern Il2CppType t95_0_0_3;
FieldInfo t94_f5_FieldInfo = 
{
	"<$s_8>__5", &t95_0_0_3, &t94_TI, offsetof(t94, f5), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t94_f6_FieldInfo = 
{
	"<$s_9>__6", &t134_0_0_3, &t94_TI, offsetof(t94, f6), &EmptyCustomAttributesCache};
extern Il2CppType t96_0_0_3;
FieldInfo t94_f7_FieldInfo = 
{
	"<system>__7", &t96_0_0_3, &t94_TI, offsetof(t94, f7), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t94_f8_FieldInfo = 
{
	"$PC", &t134_0_0_3, &t94_TI, offsetof(t94, f8), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_3;
FieldInfo t94_f9_FieldInfo = 
{
	"$current", &t25_0_0_3, &t94_TI, offsetof(t94, f9), &EmptyCustomAttributesCache};
extern Il2CppType t97_0_0_3;
FieldInfo t94_f10_FieldInfo = 
{
	"<>f__this", &t97_0_0_3, &t94_TI, offsetof(t94, f10), &EmptyCustomAttributesCache};
static FieldInfo* t94_FIs[] =
{
	&t94_f0_FieldInfo,
	&t94_f1_FieldInfo,
	&t94_f2_FieldInfo,
	&t94_f3_FieldInfo,
	&t94_f4_FieldInfo,
	&t94_f5_FieldInfo,
	&t94_f6_FieldInfo,
	&t94_f7_FieldInfo,
	&t94_f8_FieldInfo,
	&t94_f9_FieldInfo,
	&t94_f10_FieldInfo,
	NULL
};
extern MethodInfo m260_MI;
static PropertyInfo t94____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&t94_TI, "System.Collections.Generic.IEnumerator<object>.Current", &m260_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m261_MI;
static PropertyInfo t94____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t94_TI, "System.Collections.IEnumerator.Current", &m261_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t94_PIs[] =
{
	&t94____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&t94____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t94_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m259_MI = 
{
	".ctor", (methodPointerType)&m259, &t94_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 275, NULL, (methodPointerType)NULL};
extern TypeInfo t94_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t94__CustomAttributeCache_m260;
MethodInfo m260_MI = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current", (methodPointerType)&m260, &t94_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t94__CustomAttributeCache_m260, 2529, 0, 4, 0, false, false, 276, NULL, (methodPointerType)NULL};
extern TypeInfo t94_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t94__CustomAttributeCache_m261;
MethodInfo m261_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m261, &t94_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t94__CustomAttributeCache_m261, 2529, 0, 5, 0, false, false, 277, NULL, (methodPointerType)NULL};
extern TypeInfo t94_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m262_MI = 
{
	"MoveNext", (methodPointerType)&m262, &t94_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 278, NULL, (methodPointerType)NULL};
extern TypeInfo t94_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t94__CustomAttributeCache_m263;
MethodInfo m263_MI = 
{
	"Dispose", (methodPointerType)&m263, &t94_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t94__CustomAttributeCache_m263, 486, 0, 7, 0, false, false, 279, NULL, (methodPointerType)NULL};
extern TypeInfo t94_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t94__CustomAttributeCache_m264;
MethodInfo m264_MI = 
{
	"Reset", (methodPointerType)&m264, &t94_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t94__CustomAttributeCache_m264, 486, 0, 8, 0, false, false, 280, NULL, (methodPointerType)NULL};
static MethodInfo* t94_MIs[] =
{
	&m259_MI,
	&m260_MI,
	&m261_MI,
	&m262_MI,
	&m263_MI,
	&m264_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m260_MI;
extern MethodInfo m261_MI;
extern MethodInfo m262_MI;
extern MethodInfo m263_MI;
extern MethodInfo m264_MI;
static MethodInfo* t94_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m260_MI,
	&m261_MI,
	&m262_MI,
	&m263_MI,
	&m264_MI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t94_ITIs[] = 
{
	&t179_TI,
	&t78_TI,
	&t167_TI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static Il2CppInterfaceOffsetPair t94_IOs[] = 
{
	{ &t179_TI, 4},
	{ &t78_TI, 5},
	{ &t167_TI, 7},
};
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t94_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t94_CustomAttributesCacheGenerator_m260(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t94_CustomAttributesCacheGenerator_m261(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t94_CustomAttributesCacheGenerator_m263(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t94_CustomAttributesCacheGenerator_m264(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t94__CustomAttributeCache = {
1,
NULL,
&t94_CustomAttributesCacheGenerator
};
CustomAttributesCache t94__CustomAttributeCache_m260 = {
1,
NULL,
&t94_CustomAttributesCacheGenerator_m260
};
CustomAttributesCache t94__CustomAttributeCache_m261 = {
1,
NULL,
&t94_CustomAttributesCacheGenerator_m261
};
CustomAttributesCache t94__CustomAttributeCache_m263 = {
1,
NULL,
&t94_CustomAttributesCacheGenerator_m263
};
CustomAttributesCache t94__CustomAttributeCache_m264 = {
1,
NULL,
&t94_CustomAttributesCacheGenerator_m264
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t94_0_0_0;
extern Il2CppType t94_1_0_0;
extern TypeInfo t25_TI;
struct t94;
extern TypeInfo t94_TI;
extern TypeInfo t97_TI;
extern CustomAttributesCache t94__CustomAttributeCache;
extern CustomAttributesCache t94__CustomAttributeCache_m260;
extern CustomAttributesCache t94__CustomAttributeCache_m261;
extern CustomAttributesCache t94__CustomAttributeCache_m263;
extern CustomAttributesCache t94__CustomAttributeCache_m264;
TypeInfo t94_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "<Start>c__Iterator5", "", t94_MIs, t94_PIs, t94_FIs, NULL, &t25_TI, NULL, &t97_TI, &t94_TI, t94_ITIs, t94_VT, &t94__CustomAttributeCache, &t94_TI, &t94_0_0_0, &t94_1_0_0, t94_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t94), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 2, 11, 0, 0, 9, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t97_TI;
#include "t97MD.h"

extern TypeInfo t97_TI;
extern TypeInfo t94_TI;
extern MethodInfo m334_MI;
extern MethodInfo m259_MI;


extern MethodInfo m265_MI;
 void m265 (t97 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m265_MI);
	{
		__this->f2 = (8.0f);
		__this->f3 = (10.0f);
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m266_MI;
 t25 * m266 (t97 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m266_MI);
	t94 * V_0 = {0};
	{
		t94 * L_0 = (t94 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t94_TI));
		m259(L_0, &m259_MI);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->f10 = __this;
		return V_0;
	}
}
extern MethodInfo m267_MI;
 void m267 (t97 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m267_MI);
	{
		__this->f5 = 1;
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.ParticleSystemDestroyer
extern Il2CppType t124_0_0_6;
FieldInfo t97_f2_FieldInfo = 
{
	"minDuration", &t124_0_0_6, &t97_TI, offsetof(t97, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t97_f3_FieldInfo = 
{
	"maxDuration", &t124_0_0_6, &t97_TI, offsetof(t97, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t97_f4_FieldInfo = 
{
	"m_MaxLifetime", &t124_0_0_1, &t97_TI, offsetof(t97, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t97_f5_FieldInfo = 
{
	"m_EarlyStop", &t125_0_0_1, &t97_TI, offsetof(t97, f5), &EmptyCustomAttributesCache};
static FieldInfo* t97_FIs[] =
{
	&t97_f2_FieldInfo,
	&t97_f3_FieldInfo,
	&t97_f4_FieldInfo,
	&t97_f5_FieldInfo,
	NULL
};
extern TypeInfo t97_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m265_MI = 
{
	".ctor", (methodPointerType)&m265, &t97_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 272, NULL, (methodPointerType)NULL};
extern TypeInfo t97_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t97__CustomAttributeCache_m266;
MethodInfo m266_MI = 
{
	"Start", (methodPointerType)&m266, &t97_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &t97__CustomAttributeCache_m266, 129, 0, 255, 0, false, false, 273, NULL, (methodPointerType)NULL};
extern TypeInfo t97_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m267_MI = 
{
	"Stop", (methodPointerType)&m267, &t97_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 274, NULL, (methodPointerType)NULL};
static MethodInfo* t97_MIs[] =
{
	&m265_MI,
	&m266_MI,
	&m267_MI,
	NULL
};
extern TypeInfo t94_TI;
static TypeInfo* t97_TI__nestedTypes[2] =
{
	&t94_TI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t97_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t97_CustomAttributesCacheGenerator_m266(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t97__CustomAttributeCache_m266 = {
1,
NULL,
&t97_CustomAttributesCacheGenerator_m266
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t97_0_0_0;
extern Il2CppType t97_1_0_0;
extern TypeInfo t3_TI;
struct t97;
extern TypeInfo t97_TI;
extern CustomAttributesCache t97__CustomAttributeCache_m266;
TypeInfo t97_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "ParticleSystemDestroyer", "UnityStandardAssets.Utility", t97_MIs, NULL, t97_FIs, NULL, &t3_TI, t97_TI__nestedTypes, NULL, &t97_TI, NULL, t97_VT, &EmptyCustomAttributesCache, &t97_TI, &t97_0_0_0, &t97_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t97), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 4, 0, 1, 4, 0, 0};
#include "t98.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t98_TI;
#include "t98MD.h"



// Metadata Definition UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup
extern Il2CppType t134_0_0_1542;
FieldInfo t98_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t98_TI, offsetof(t98, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t98_0_0_32854;
FieldInfo t98_f2_FieldInfo = 
{
	"Standalone", &t98_0_0_32854, &t98_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t98_0_0_32854;
FieldInfo t98_f3_FieldInfo = 
{
	"Mobile", &t98_0_0_32854, &t98_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t98_FIs[] =
{
	&t98_f1_FieldInfo,
	&t98_f2_FieldInfo,
	&t98_f3_FieldInfo,
	NULL
};
static const int32_t t98_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t98_f2_DefaultValue = 
{
	&t98_f2_FieldInfo, { (char*)&t98_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t98_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t98_f3_DefaultValue = 
{
	&t98_f3_FieldInfo, { (char*)&t98_f3_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t98_FDVs[] = 
{
	&t98_f2_DefaultValue,
	&t98_f3_DefaultValue,
	NULL
};
static MethodInfo* t98_MIs[] =
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
static MethodInfo* t98_VT[] =
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
static Il2CppInterfaceOffsetPair t98_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t98_0_0_0;
extern Il2CppType t98_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern TypeInfo t99_TI;
TypeInfo t98_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "BuildTargetGroup", "", t98_MIs, NULL, t98_FIs, NULL, &t15_TI, NULL, &t99_TI, &t134_TI, NULL, t98_VT, &EmptyCustomAttributesCache, &t134_TI, &t98_0_0_0, &t98_1_0_0, t98_IOs, NULL, NULL, t98_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t98)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 259, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t99.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t99_TI;
#include "t99MD.h"

#include "t3.h"
extern TypeInfo t100_TI;
extern TypeInfo t62_TI;
extern TypeInfo t99_TI;
extern TypeInfo t101_TI;
extern TypeInfo t3_TI;
extern TypeInfo t2_TI;
extern TypeInfo t78_TI;
extern TypeInfo t25_TI;
extern TypeInfo t125_TI;
extern TypeInfo t167_TI;
extern TypeInfo t123_TI;
extern MethodInfo m334_MI;
extern MethodInfo m270_MI;
extern MethodInfo m271_MI;
extern MethodInfo m371_MI;
extern MethodInfo m505_MI;
extern MethodInfo m336_MI;
extern MethodInfo m503_MI;
extern MethodInfo m504_MI;
extern MethodInfo m370_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m542_MI;


extern MethodInfo m268_MI;
 void m268 (t99 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m268_MI);
	{
		__this->f3 = ((t100*)SZArrayNew(InitializedTypeInfo(&t100_TI), 0));
		__this->f4 = ((t101*)SZArrayNew(InitializedTypeInfo(&t101_TI), 0));
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m269_MI;
 void m269 (t99 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m269_MI);
	{
		m270(__this, &m270_MI);
		return;
	}
}
extern MethodInfo m270_MI;
 void m270 (t99 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m270_MI);
	{
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)L_0) != ((uint32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		m271(__this, 0, &m271_MI);
		goto IL_001f;
	}

IL_0018:
	{
		m271(__this, 1, &m271_MI);
	}

IL_001f:
	{
		return;
	}
}
extern MethodInfo m271_MI;
 void m271 (t99 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m271_MI);
	t62 * V_0 = {0};
	t100* V_1 = {0};
	int32_t V_2 = 0;
	t2 * V_3 = {0};
	t25 * V_4 = {0};
	t3 * V_5 = {0};
	t101* V_6 = {0};
	int32_t V_7 = 0;
	t25 * V_8 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t100* L_0 = (__this->f3);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((t122 *)L_0)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		t100* L_1 = (__this->f3);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0037;
	}

IL_001c:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		V_0 = (*(t62 **)(t62 **)SZArrayLdElema(V_1, V_2));
		bool L_2 = m371(NULL, V_0, (t60 *)NULL, &m371_MI);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		NullCheck(V_0);
		m505(V_0, p0, &m505_MI);
	}

IL_0033:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0037:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t122 *)V_1)->max_length))))))
		{
			goto IL_001c;
		}
	}

IL_0040:
	{
		bool L_3 = (__this->f5);
		if (!L_3)
		{
			goto IL_009d;
		}
	}
	{
		t2 * L_4 = m336(__this, &m336_MI);
		NullCheck(L_4);
		t25 * L_5 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m503_MI, L_4);
		V_4 = L_5;
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0076;
		}

IL_005d:
		{
			NullCheck(V_4);
			t25 * L_6 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m504_MI, V_4);
			V_3 = ((t2 *)Castclass(L_6, InitializedTypeInfo(&t2_TI)));
			NullCheck(V_3);
			t62 * L_7 = m370(V_3, &m370_MI);
			NullCheck(L_7);
			m505(L_7, p0, &m505_MI);
		}

IL_0076:
		{
			NullCheck(V_4);
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m506_MI, V_4);
			if (L_8)
			{
				goto IL_005d;
			}
		}

IL_0082:
		{
			// IL_0082: leave IL_009d
			leaveInstructions[0] = 0x9D; // 1
			THROW_SENTINEL(IL_009d);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0087;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0087;
	}

IL_0087:
	{ // begin finally (depth: 1)
		{
			V_8 = ((t25 *)IsInst(V_4, InitializedTypeInfo(&t167_TI)));
			if (V_8)
			{
				goto IL_0095;
			}
		}

IL_0094:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x9D:
					goto IL_009d;
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
		}

IL_0095:
		{
			NullCheck(V_8);
			InterfaceActionInvoker0::Invoke(&m507_MI, V_8);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x9D:
					goto IL_009d;
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
		}
	} // end finally (depth: 1)

IL_009d:
	{
		t101* L_9 = (__this->f4);
		NullCheck(L_9);
		if ((((int32_t)(((int32_t)(((t122 *)L_9)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00db;
		}
	}
	{
		t101* L_10 = (__this->f4);
		V_6 = L_10;
		V_7 = 0;
		goto IL_00d0;
	}

IL_00bb:
	{
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, V_7);
		V_5 = (*(t3 **)(t3 **)SZArrayLdElema(V_6, V_7));
		NullCheck(V_5);
		m542(V_5, p0, &m542_MI);
		V_7 = ((int32_t)(V_7+1));
	}

IL_00d0:
	{
		NullCheck(V_6);
		if ((((int32_t)V_7) < ((int32_t)(((int32_t)(((t122 *)V_6)->max_length))))))
		{
			goto IL_00bb;
		}
	}

IL_00db:
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.PlatformSpecificContent
extern Il2CppType t98_0_0_1;
extern CustomAttributesCache t99__CustomAttributeCache_m_BuildTargetGroup;
FieldInfo t99_f2_FieldInfo = 
{
	"m_BuildTargetGroup", &t98_0_0_1, &t99_TI, offsetof(t99, f2), &t99__CustomAttributeCache_m_BuildTargetGroup};
extern Il2CppType t100_0_0_1;
extern CustomAttributesCache t99__CustomAttributeCache_m_Content;
FieldInfo t99_f3_FieldInfo = 
{
	"m_Content", &t100_0_0_1, &t99_TI, offsetof(t99, f3), &t99__CustomAttributeCache_m_Content};
extern Il2CppType t101_0_0_1;
extern CustomAttributesCache t99__CustomAttributeCache_m_MonoBehaviours;
FieldInfo t99_f4_FieldInfo = 
{
	"m_MonoBehaviours", &t101_0_0_1, &t99_TI, offsetof(t99, f4), &t99__CustomAttributeCache_m_MonoBehaviours};
extern Il2CppType t125_0_0_1;
extern CustomAttributesCache t99__CustomAttributeCache_m_ChildrenOfThisObject;
FieldInfo t99_f5_FieldInfo = 
{
	"m_ChildrenOfThisObject", &t125_0_0_1, &t99_TI, offsetof(t99, f5), &t99__CustomAttributeCache_m_ChildrenOfThisObject};
static FieldInfo* t99_FIs[] =
{
	&t99_f2_FieldInfo,
	&t99_f3_FieldInfo,
	&t99_f4_FieldInfo,
	&t99_f5_FieldInfo,
	NULL
};
extern TypeInfo t99_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m268_MI = 
{
	".ctor", (methodPointerType)&m268, &t99_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 281, NULL, (methodPointerType)NULL};
extern TypeInfo t99_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m269_MI = 
{
	"OnEnable", (methodPointerType)&m269, &t99_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 282, NULL, (methodPointerType)NULL};
extern TypeInfo t99_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m270_MI = 
{
	"CheckEnableContent", (methodPointerType)&m270, &t99_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 283, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t99_m271_ParameterInfos[] = 
{
	{"enabled", 0, 134217857, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t99_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m271_MI = 
{
	"EnableContent", (methodPointerType)&m271, &t99_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t99_m271_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 284, NULL, (methodPointerType)NULL};
static MethodInfo* t99_MIs[] =
{
	&m268_MI,
	&m269_MI,
	&m270_MI,
	&m271_MI,
	NULL
};
extern TypeInfo t98_TI;
static TypeInfo* t99_TI__nestedTypes[2] =
{
	&t98_TI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t99_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t99_CustomAttributesCacheGenerator_m_BuildTargetGroup(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t99_CustomAttributesCacheGenerator_m_Content(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t99_CustomAttributesCacheGenerator_m_MonoBehaviours(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t99_CustomAttributesCacheGenerator_m_ChildrenOfThisObject(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t99__CustomAttributeCache_m_BuildTargetGroup = {
1,
NULL,
&t99_CustomAttributesCacheGenerator_m_BuildTargetGroup
};
CustomAttributesCache t99__CustomAttributeCache_m_Content = {
1,
NULL,
&t99_CustomAttributesCacheGenerator_m_Content
};
CustomAttributesCache t99__CustomAttributeCache_m_MonoBehaviours = {
1,
NULL,
&t99_CustomAttributesCacheGenerator_m_MonoBehaviours
};
CustomAttributesCache t99__CustomAttributeCache_m_ChildrenOfThisObject = {
1,
NULL,
&t99_CustomAttributesCacheGenerator_m_ChildrenOfThisObject
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t99_0_0_0;
extern Il2CppType t99_1_0_0;
extern TypeInfo t3_TI;
struct t99;
extern TypeInfo t99_TI;
extern CustomAttributesCache t99__CustomAttributeCache_m_BuildTargetGroup;
extern CustomAttributesCache t99__CustomAttributeCache_m_Content;
extern CustomAttributesCache t99__CustomAttributeCache_m_MonoBehaviours;
extern CustomAttributesCache t99__CustomAttributeCache_m_ChildrenOfThisObject;
TypeInfo t99_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "PlatformSpecificContent", "UnityStandardAssets.Utility", t99_MIs, NULL, t99_FIs, NULL, &t3_TI, t99_TI__nestedTypes, NULL, &t99_TI, NULL, t99_VT, &EmptyCustomAttributesCache, &t99_TI, &t99_0_0_0, &t99_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t99), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 4, 0, 1, 4, 0, 0};
#include "t102.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t102_TI;
#include "t102MD.h"

extern TypeInfo t102_TI;
extern MethodInfo m334_MI;
extern MethodInfo m609_MI;
extern MethodInfo m594_MI;
extern MethodInfo m505_MI;


extern MethodInfo m272_MI;
 void m272 (t102 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m272_MI);
	{
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m273_MI;
 void m273 (t102 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m273_MI);
	{
		__this->f4 = 0;
		t85 * L_0 = (__this->f2);
		t100* L_1 = (__this->f3);
		int32_t L_2 = (__this->f4);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		NullCheck((*(t62 **)(t62 **)SZArrayLdElema(L_1, L_2)));
		t27* L_3 = m609((*(t62 **)(t62 **)SZArrayLdElema(L_1, L_2)), &m609_MI);
		NullCheck(L_0);
		m594(L_0, L_3, &m594_MI);
		return;
	}
}
extern MethodInfo m274_MI;
 void m274 (t102 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m274_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f4);
		t100* L_1 = (__this->f3);
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(L_0+1))) < ((int32_t)(((int32_t)(((t122 *)L_1)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0023;
	}

IL_001b:
	{
		int32_t L_2 = (__this->f4);
		G_B3_0 = ((int32_t)(L_2+1));
	}

IL_0023:
	{
		V_0 = G_B3_0;
		V_1 = 0;
		goto IL_0040;
	}

IL_002b:
	{
		t100* L_3 = (__this->f3);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, V_1);
		NullCheck((*(t62 **)(t62 **)SZArrayLdElema(L_3, V_1)));
		m505((*(t62 **)(t62 **)SZArrayLdElema(L_3, V_1)), ((((int32_t)V_1) == ((int32_t)V_0))? 1 : 0), &m505_MI);
		V_1 = ((int32_t)(V_1+1));
	}

IL_0040:
	{
		t100* L_4 = (__this->f3);
		NullCheck(L_4);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t122 *)L_4)->max_length))))))
		{
			goto IL_002b;
		}
	}
	{
		__this->f4 = V_0;
		t85 * L_5 = (__this->f2);
		t100* L_6 = (__this->f3);
		int32_t L_7 = (__this->f4);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		NullCheck((*(t62 **)(t62 **)SZArrayLdElema(L_6, L_7)));
		t27* L_8 = m609((*(t62 **)(t62 **)SZArrayLdElema(L_6, L_7)), &m609_MI);
		NullCheck(L_5);
		m594(L_5, L_8, &m594_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.SimpleActivatorMenu
extern Il2CppType t85_0_0_6;
FieldInfo t102_f2_FieldInfo = 
{
	"camSwitchButton", &t85_0_0_6, &t102_TI, offsetof(t102, f2), &EmptyCustomAttributesCache};
extern Il2CppType t100_0_0_6;
FieldInfo t102_f3_FieldInfo = 
{
	"objects", &t100_0_0_6, &t102_TI, offsetof(t102, f3), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t102_f4_FieldInfo = 
{
	"m_CurrentActiveObject", &t134_0_0_1, &t102_TI, offsetof(t102, f4), &EmptyCustomAttributesCache};
static FieldInfo* t102_FIs[] =
{
	&t102_f2_FieldInfo,
	&t102_f3_FieldInfo,
	&t102_f4_FieldInfo,
	NULL
};
extern TypeInfo t102_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m272_MI = 
{
	".ctor", (methodPointerType)&m272, &t102_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 285, NULL, (methodPointerType)NULL};
extern TypeInfo t102_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m273_MI = 
{
	"OnEnable", (methodPointerType)&m273, &t102_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 286, NULL, (methodPointerType)NULL};
extern TypeInfo t102_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m274_MI = 
{
	"NextCamera", (methodPointerType)&m274, &t102_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 287, NULL, (methodPointerType)NULL};
static MethodInfo* t102_MIs[] =
{
	&m272_MI,
	&m273_MI,
	&m274_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t102_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t102_0_0_0;
extern Il2CppType t102_1_0_0;
extern TypeInfo t3_TI;
struct t102;
extern TypeInfo t102_TI;
TypeInfo t102_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "SimpleActivatorMenu", "UnityStandardAssets.Utility", t102_MIs, NULL, t102_FIs, NULL, &t3_TI, NULL, NULL, &t102_TI, NULL, t102_VT, &EmptyCustomAttributesCache, &t102_TI, &t102_0_0_0, &t102_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t102), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 3, 0, 0, 4, 0, 0};
#include "t103.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t103_TI;
#include "t103MD.h"

extern TypeInfo t4_TI;
extern TypeInfo t103_TI;
extern TypeInfo t39_TI;
extern TypeInfo t6_TI;
extern TypeInfo t126_TI;
extern TypeInfo t130_TI;
extern MethodInfo m448_MI;
extern MethodInfo m367_MI;
extern MethodInfo m334_MI;
extern MethodInfo m336_MI;
extern MethodInfo m437_MI;
extern MethodInfo m442_MI;
extern MethodInfo m100_MI;
extern MethodInfo m358_MI;
extern MethodInfo m518_MI;
extern MethodInfo m521_MI;
extern MethodInfo m357_MI;
extern MethodInfo m615_MI;
extern MethodInfo m349_MI;
extern MethodInfo m440_MI;
extern MethodInfo m447_MI;


extern MethodInfo m275_MI;
 void m275 (t103 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m275_MI);
	{
		t4  L_0 = {0};
		m448(&L_0, (70.0f), (70.0f), &m448_MI);
		t6  L_1 = m367(NULL, L_0, &m367_MI);
		__this->f2 = L_1;
		__this->f3 = (10.0f);
		__this->f4 = (0.2f);
		__this->f5 = 1;
		__this->f7 = 1;
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m276_MI;
 void m276 (t103 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m276_MI);
	{
		t2 * L_0 = m336(__this, &m336_MI);
		NullCheck(L_0);
		t21  L_1 = m437(L_0, &m437_MI);
		__this->f11 = L_1;
		return;
	}
}
extern MethodInfo m277_MI;
 void m277 (t103 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m277_MI);
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	t4  V_2 = {0};
	t4  V_3 = {0};
	{
		t2 * L_0 = m336(__this, &m336_MI);
		t21  L_1 = (__this->f11);
		NullCheck(L_0);
		m442(L_0, L_1, &m442_MI);
		bool L_2 = (__this->f7);
		if (!L_2)
		{
			goto IL_01f3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		float L_3 = m100(NULL, (t27*) &_stringLiteral10, &m100_MI);
		V_0 = L_3;
		float L_4 = m100(NULL, (t27*) &_stringLiteral11, &m100_MI);
		V_1 = L_4;
		t4 * L_5 = &(__this->f8);
		NullCheck(L_5);
		float L_6 = (L_5->f2);
		if ((((float)L_6) <= ((float)(180.0f))))
		{
			goto IL_0075;
		}
	}
	{
		t4 * L_7 = &(__this->f8);
		t4 * L_8 = L_7;
		NullCheck(L_8);
		float L_9 = (L_8->f2);
		NullCheck(L_8);
		L_8->f2 = ((float)(L_9-(360.0f)));
		t4 * L_10 = &(__this->f9);
		t4 * L_11 = L_10;
		NullCheck(L_11);
		float L_12 = (L_11->f2);
		NullCheck(L_11);
		L_11->f2 = ((float)(L_12-(360.0f)));
	}

IL_0075:
	{
		t4 * L_13 = &(__this->f8);
		NullCheck(L_13);
		float L_14 = (L_13->f1);
		if ((((float)L_14) <= ((float)(180.0f))))
		{
			goto IL_00b8;
		}
	}
	{
		t4 * L_15 = &(__this->f8);
		t4 * L_16 = L_15;
		NullCheck(L_16);
		float L_17 = (L_16->f1);
		NullCheck(L_16);
		L_16->f1 = ((float)(L_17-(360.0f)));
		t4 * L_18 = &(__this->f9);
		t4 * L_19 = L_18;
		NullCheck(L_19);
		float L_20 = (L_19->f1);
		NullCheck(L_19);
		L_19->f1 = ((float)(L_20-(360.0f)));
	}

IL_00b8:
	{
		t4 * L_21 = &(__this->f8);
		NullCheck(L_21);
		float L_22 = (L_21->f2);
		if ((((float)L_22) >= ((float)(-180.0f))))
		{
			goto IL_00fb;
		}
	}
	{
		t4 * L_23 = &(__this->f8);
		t4 * L_24 = L_23;
		NullCheck(L_24);
		float L_25 = (L_24->f2);
		NullCheck(L_24);
		L_24->f2 = ((float)(L_25+(360.0f)));
		t4 * L_26 = &(__this->f9);
		t4 * L_27 = L_26;
		NullCheck(L_27);
		float L_28 = (L_27->f2);
		NullCheck(L_27);
		L_27->f2 = ((float)(L_28+(360.0f)));
	}

IL_00fb:
	{
		t4 * L_29 = &(__this->f8);
		NullCheck(L_29);
		float L_30 = (L_29->f1);
		if ((((float)L_30) >= ((float)(-180.0f))))
		{
			goto IL_013e;
		}
	}
	{
		t4 * L_31 = &(__this->f8);
		t4 * L_32 = L_31;
		NullCheck(L_32);
		float L_33 = (L_32->f1);
		NullCheck(L_32);
		L_32->f1 = ((float)(L_33+(360.0f)));
		t4 * L_34 = &(__this->f9);
		t4 * L_35 = L_34;
		NullCheck(L_35);
		float L_36 = (L_35->f1);
		NullCheck(L_35);
		L_35->f1 = ((float)(L_36+(360.0f)));
	}

IL_013e:
	{
		t4 * L_37 = &(__this->f8);
		t4 * L_38 = L_37;
		NullCheck(L_38);
		float L_39 = (L_38->f2);
		float L_40 = (__this->f3);
		NullCheck(L_38);
		L_38->f2 = ((float)(L_39+((float)(V_0*L_40))));
		t4 * L_41 = &(__this->f8);
		t4 * L_42 = L_41;
		NullCheck(L_42);
		float L_43 = (L_42->f1);
		float L_44 = (__this->f3);
		NullCheck(L_42);
		L_42->f1 = ((float)(L_43+((float)(V_1*L_44))));
		t4 * L_45 = &(__this->f8);
		t4 * L_46 = &(__this->f8);
		NullCheck(L_46);
		float L_47 = (L_46->f2);
		t6 * L_48 = &(__this->f2);
		NullCheck(L_48);
		float L_49 = (L_48->f2);
		t6 * L_50 = &(__this->f2);
		NullCheck(L_50);
		float L_51 = (L_50->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_52 = m358(NULL, L_47, ((float)(((-L_49))*(0.5f))), ((float)(L_51*(0.5f))), &m358_MI);
		NullCheck(L_45);
		L_45->f2 = L_52;
		t4 * L_53 = &(__this->f8);
		t4 * L_54 = &(__this->f8);
		NullCheck(L_54);
		float L_55 = (L_54->f1);
		t6 * L_56 = &(__this->f2);
		NullCheck(L_56);
		float L_57 = (L_56->f1);
		t6 * L_58 = &(__this->f2);
		NullCheck(L_58);
		float L_59 = (L_58->f1);
		float L_60 = m358(NULL, L_55, ((float)(((-L_57))*(0.5f))), ((float)(L_59*(0.5f))), &m358_MI);
		NullCheck(L_53);
		L_53->f1 = L_60;
		goto IL_0285;
	}

IL_01f3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t130_TI));
		t4  L_61 = m518(NULL, &m518_MI);
		V_2 = L_61;
		NullCheck((&V_2));
		float L_62 = ((&V_2)->f1);
		V_0 = L_62;
		t4  L_63 = m518(NULL, &m518_MI);
		V_3 = L_63;
		NullCheck((&V_3));
		float L_64 = ((&V_3)->f2);
		V_1 = L_64;
		t4 * L_65 = &(__this->f8);
		t6 * L_66 = &(__this->f2);
		NullCheck(L_66);
		float L_67 = (L_66->f2);
		t6 * L_68 = &(__this->f2);
		NullCheck(L_68);
		float L_69 = (L_68->f2);
		int32_t L_70 = m521(NULL, &m521_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_71 = m357(NULL, ((float)(((-L_67))*(0.5f))), ((float)(L_69*(0.5f))), ((float)(V_0/(((float)L_70)))), &m357_MI);
		NullCheck(L_65);
		L_65->f2 = L_71;
		t4 * L_72 = &(__this->f8);
		t6 * L_73 = &(__this->f2);
		NullCheck(L_73);
		float L_74 = (L_73->f1);
		t6 * L_75 = &(__this->f2);
		NullCheck(L_75);
		float L_76 = (L_75->f1);
		int32_t L_77 = m615(NULL, &m615_MI);
		float L_78 = m357(NULL, ((float)(((-L_74))*(0.5f))), ((float)(L_76*(0.5f))), ((float)(V_1/(((float)L_77)))), &m357_MI);
		NullCheck(L_72);
		L_72->f1 = L_78;
	}

IL_0285:
	{
		t4  L_79 = (__this->f9);
		t4  L_80 = (__this->f8);
		t4 * L_81 = &(__this->f10);
		float L_82 = (__this->f4);
		t4  L_83 = m349(NULL, L_79, L_80, L_81, L_82, &m349_MI);
		__this->f9 = L_83;
		t2 * L_84 = m336(__this, &m336_MI);
		t21  L_85 = (__this->f11);
		t4 * L_86 = &(__this->f9);
		NullCheck(L_86);
		float L_87 = (L_86->f1);
		t4 * L_88 = &(__this->f9);
		NullCheck(L_88);
		float L_89 = (L_88->f2);
		t21  L_90 = m440(NULL, ((-L_87)), L_89, (0.0f), &m440_MI);
		t21  L_91 = m447(NULL, L_85, L_90, &m447_MI);
		NullCheck(L_84);
		m442(L_84, L_91, &m442_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.SimpleMouseRotator
extern Il2CppType t6_0_0_6;
FieldInfo t103_f2_FieldInfo = 
{
	"rotationRange", &t6_0_0_6, &t103_TI, offsetof(t103, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t103_f3_FieldInfo = 
{
	"rotationSpeed", &t124_0_0_6, &t103_TI, offsetof(t103, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t103_f4_FieldInfo = 
{
	"dampingTime", &t124_0_0_6, &t103_TI, offsetof(t103, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t103_f5_FieldInfo = 
{
	"autoZeroVerticalOnMobile", &t125_0_0_6, &t103_TI, offsetof(t103, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t103_f6_FieldInfo = 
{
	"autoZeroHorizontalOnMobile", &t125_0_0_6, &t103_TI, offsetof(t103, f6), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t103_f7_FieldInfo = 
{
	"relative", &t125_0_0_6, &t103_TI, offsetof(t103, f7), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t103_f8_FieldInfo = 
{
	"m_TargetAngles", &t4_0_0_1, &t103_TI, offsetof(t103, f8), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t103_f9_FieldInfo = 
{
	"m_FollowAngles", &t4_0_0_1, &t103_TI, offsetof(t103, f9), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t103_f10_FieldInfo = 
{
	"m_FollowVelocity", &t4_0_0_1, &t103_TI, offsetof(t103, f10), &EmptyCustomAttributesCache};
extern Il2CppType t21_0_0_1;
FieldInfo t103_f11_FieldInfo = 
{
	"m_OriginalRotation", &t21_0_0_1, &t103_TI, offsetof(t103, f11), &EmptyCustomAttributesCache};
static FieldInfo* t103_FIs[] =
{
	&t103_f2_FieldInfo,
	&t103_f3_FieldInfo,
	&t103_f4_FieldInfo,
	&t103_f5_FieldInfo,
	&t103_f6_FieldInfo,
	&t103_f7_FieldInfo,
	&t103_f8_FieldInfo,
	&t103_f9_FieldInfo,
	&t103_f10_FieldInfo,
	&t103_f11_FieldInfo,
	NULL
};
extern TypeInfo t103_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m275_MI = 
{
	".ctor", (methodPointerType)&m275, &t103_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 288, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m276_MI = 
{
	"Start", (methodPointerType)&m276, &t103_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 289, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m277_MI = 
{
	"Update", (methodPointerType)&m277, &t103_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 290, NULL, (methodPointerType)NULL};
static MethodInfo* t103_MIs[] =
{
	&m275_MI,
	&m276_MI,
	&m277_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t103_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t103_0_0_0;
extern Il2CppType t103_1_0_0;
extern TypeInfo t3_TI;
struct t103;
extern TypeInfo t103_TI;
TypeInfo t103_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "SimpleMouseRotator", "UnityStandardAssets.Utility", t103_MIs, NULL, t103_FIs, NULL, &t3_TI, NULL, NULL, &t103_TI, NULL, t103_VT, &EmptyCustomAttributesCache, &t103_TI, &t103_0_0_0, &t103_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t103), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 10, 0, 0, 4, 0, 0};
#include "t104.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t104_TI;
#include "t104MD.h"

extern TypeInfo t104_TI;
extern TypeInfo t4_TI;
extern TypeInfo t126_TI;
extern MethodInfo m334_MI;
extern MethodInfo m377_MI;
extern MethodInfo m616_MI;
extern MethodInfo m335_MI;
extern MethodInfo m336_MI;
extern MethodInfo m345_MI;
extern MethodInfo m617_MI;
extern MethodInfo m357_MI;
extern MethodInfo m440_MI;
extern MethodInfo m350_MI;
extern MethodInfo m348_MI;
extern MethodInfo m618_MI;
extern MethodInfo m343_MI;
extern MethodInfo m337_MI;
extern MethodInfo m359_MI;
extern MethodInfo m619_MI;


extern MethodInfo m278_MI;
 void m278 (t104 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m278_MI);
	{
		__this->f3 = (10.0f);
		__this->f4 = (5.0f);
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m279_MI;
 void m279 (t104 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m279_MI);
	{
		return;
	}
}
extern MethodInfo m280_MI;
 void m280 (t104 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m280_MI);
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	t21  V_4 = {0};
	t4  V_5 = {0};
	t4  V_6 = {0};
	t4  V_7 = {0};
	t4  V_8 = {0};
	t4  V_9 = {0};
	t4  V_10 = {0};
	{
		t2 * L_0 = (__this->f2);
		bool L_1 = m377(NULL, L_0, &m377_MI);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		t2 * L_2 = (__this->f2);
		NullCheck(L_2);
		t4  L_3 = m616(L_2, &m616_MI);
		V_5 = L_3;
		NullCheck((&V_5));
		float L_4 = ((&V_5)->f2);
		V_0 = L_4;
		t2 * L_5 = (__this->f2);
		NullCheck(L_5);
		t4  L_6 = m335(L_5, &m335_MI);
		V_6 = L_6;
		NullCheck((&V_6));
		float L_7 = ((&V_6)->f2);
		float L_8 = (__this->f4);
		V_1 = ((float)(L_7+L_8));
		t2 * L_9 = m336(__this, &m336_MI);
		NullCheck(L_9);
		t4  L_10 = m616(L_9, &m616_MI);
		V_7 = L_10;
		NullCheck((&V_7));
		float L_11 = ((&V_7)->f2);
		V_2 = L_11;
		t2 * L_12 = m336(__this, &m336_MI);
		NullCheck(L_12);
		t4  L_13 = m335(L_12, &m335_MI);
		V_8 = L_13;
		NullCheck((&V_8));
		float L_14 = ((&V_8)->f2);
		V_3 = L_14;
		float L_15 = (__this->f5);
		float L_16 = m345(NULL, &m345_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_17 = m617(NULL, V_2, V_0, ((float)(L_15*L_16)), &m617_MI);
		V_2 = L_17;
		float L_18 = (__this->f6);
		float L_19 = m345(NULL, &m345_MI);
		float L_20 = m357(NULL, V_3, V_1, ((float)(L_18*L_19)), &m357_MI);
		V_3 = L_20;
		t21  L_21 = m440(NULL, (0.0f), V_2, (0.0f), &m440_MI);
		V_4 = L_21;
		t2 * L_22 = m336(__this, &m336_MI);
		t2 * L_23 = (__this->f2);
		NullCheck(L_23);
		t4  L_24 = m335(L_23, &m335_MI);
		NullCheck(L_22);
		m350(L_22, L_24, &m350_MI);
		t2 * L_25 = m336(__this, &m336_MI);
		t2 * L_26 = L_25;
		NullCheck(L_26);
		t4  L_27 = m335(L_26, &m335_MI);
		t4  L_28 = m348(NULL, &m348_MI);
		t4  L_29 = m618(NULL, V_4, L_28, &m618_MI);
		float L_30 = (__this->f3);
		t4  L_31 = m343(NULL, L_29, L_30, &m343_MI);
		t4  L_32 = m337(NULL, L_27, L_31, &m337_MI);
		NullCheck(L_26);
		m350(L_26, L_32, &m350_MI);
		t2 * L_33 = m336(__this, &m336_MI);
		t2 * L_34 = m336(__this, &m336_MI);
		NullCheck(L_34);
		t4  L_35 = m335(L_34, &m335_MI);
		V_9 = L_35;
		NullCheck((&V_9));
		float L_36 = ((&V_9)->f1);
		t2 * L_37 = m336(__this, &m336_MI);
		NullCheck(L_37);
		t4  L_38 = m335(L_37, &m335_MI);
		V_10 = L_38;
		NullCheck((&V_10));
		float L_39 = ((&V_10)->f3);
		t4  L_40 = {0};
		m359(&L_40, L_36, V_3, L_39, &m359_MI);
		NullCheck(L_33);
		m350(L_33, L_40, &m350_MI);
		t2 * L_41 = m336(__this, &m336_MI);
		t2 * L_42 = (__this->f2);
		NullCheck(L_41);
		m619(L_41, L_42, &m619_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.SmoothFollow
extern Il2CppType t2_0_0_1;
extern CustomAttributesCache t104__CustomAttributeCache_target;
FieldInfo t104_f2_FieldInfo = 
{
	"target", &t2_0_0_1, &t104_TI, offsetof(t104, f2), &t104__CustomAttributeCache_target};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t104__CustomAttributeCache_distance;
FieldInfo t104_f3_FieldInfo = 
{
	"distance", &t124_0_0_1, &t104_TI, offsetof(t104, f3), &t104__CustomAttributeCache_distance};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t104__CustomAttributeCache_height;
FieldInfo t104_f4_FieldInfo = 
{
	"height", &t124_0_0_1, &t104_TI, offsetof(t104, f4), &t104__CustomAttributeCache_height};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t104__CustomAttributeCache_rotationDamping;
FieldInfo t104_f5_FieldInfo = 
{
	"rotationDamping", &t124_0_0_1, &t104_TI, offsetof(t104, f5), &t104__CustomAttributeCache_rotationDamping};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t104__CustomAttributeCache_heightDamping;
FieldInfo t104_f6_FieldInfo = 
{
	"heightDamping", &t124_0_0_1, &t104_TI, offsetof(t104, f6), &t104__CustomAttributeCache_heightDamping};
static FieldInfo* t104_FIs[] =
{
	&t104_f2_FieldInfo,
	&t104_f3_FieldInfo,
	&t104_f4_FieldInfo,
	&t104_f5_FieldInfo,
	&t104_f6_FieldInfo,
	NULL
};
extern TypeInfo t104_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m278_MI = 
{
	".ctor", (methodPointerType)&m278, &t104_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 291, NULL, (methodPointerType)NULL};
extern TypeInfo t104_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m279_MI = 
{
	"Start", (methodPointerType)&m279, &t104_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 292, NULL, (methodPointerType)NULL};
extern TypeInfo t104_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m280_MI = 
{
	"LateUpdate", (methodPointerType)&m280, &t104_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 293, NULL, (methodPointerType)NULL};
static MethodInfo* t104_MIs[] =
{
	&m278_MI,
	&m279_MI,
	&m280_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t104_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t104_CustomAttributesCacheGenerator_target(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t104_CustomAttributesCacheGenerator_distance(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t104_CustomAttributesCacheGenerator_height(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t104_CustomAttributesCacheGenerator_rotationDamping(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t104_CustomAttributesCacheGenerator_heightDamping(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t104__CustomAttributeCache_target = {
1,
NULL,
&t104_CustomAttributesCacheGenerator_target
};
CustomAttributesCache t104__CustomAttributeCache_distance = {
1,
NULL,
&t104_CustomAttributesCacheGenerator_distance
};
CustomAttributesCache t104__CustomAttributeCache_height = {
1,
NULL,
&t104_CustomAttributesCacheGenerator_height
};
CustomAttributesCache t104__CustomAttributeCache_rotationDamping = {
1,
NULL,
&t104_CustomAttributesCacheGenerator_rotationDamping
};
CustomAttributesCache t104__CustomAttributeCache_heightDamping = {
1,
NULL,
&t104_CustomAttributesCacheGenerator_heightDamping
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t104_0_0_0;
extern Il2CppType t104_1_0_0;
extern TypeInfo t3_TI;
struct t104;
extern TypeInfo t104_TI;
extern CustomAttributesCache t104__CustomAttributeCache_target;
extern CustomAttributesCache t104__CustomAttributeCache_distance;
extern CustomAttributesCache t104__CustomAttributeCache_height;
extern CustomAttributesCache t104__CustomAttributeCache_rotationDamping;
extern CustomAttributesCache t104__CustomAttributeCache_heightDamping;
TypeInfo t104_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "SmoothFollow", "UnityStandardAssets.Utility", t104_MIs, NULL, t104_FIs, NULL, &t3_TI, NULL, NULL, &t104_TI, NULL, t104_VT, &EmptyCustomAttributesCache, &t104_TI, &t104_0_0_0, &t104_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t104), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 5, 0, 0, 4, 0, 0};
#include "t105.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t105_TI;
#include "t105MD.h"



// Metadata Definition UnityStandardAssets.Utility.TimedObjectActivator/Action
extern Il2CppType t134_0_0_1542;
FieldInfo t105_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t105_TI, offsetof(t105, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t105_0_0_32854;
FieldInfo t105_f2_FieldInfo = 
{
	"Activate", &t105_0_0_32854, &t105_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t105_0_0_32854;
FieldInfo t105_f3_FieldInfo = 
{
	"Deactivate", &t105_0_0_32854, &t105_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t105_0_0_32854;
FieldInfo t105_f4_FieldInfo = 
{
	"Destroy", &t105_0_0_32854, &t105_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t105_0_0_32854;
FieldInfo t105_f5_FieldInfo = 
{
	"ReloadLevel", &t105_0_0_32854, &t105_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t105_0_0_32854;
FieldInfo t105_f6_FieldInfo = 
{
	"Call", &t105_0_0_32854, &t105_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t105_FIs[] =
{
	&t105_f1_FieldInfo,
	&t105_f2_FieldInfo,
	&t105_f3_FieldInfo,
	&t105_f4_FieldInfo,
	&t105_f5_FieldInfo,
	&t105_f6_FieldInfo,
	NULL
};
static const int32_t t105_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t105_f2_DefaultValue = 
{
	&t105_f2_FieldInfo, { (char*)&t105_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t105_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t105_f3_DefaultValue = 
{
	&t105_f3_FieldInfo, { (char*)&t105_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t105_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t105_f4_DefaultValue = 
{
	&t105_f4_FieldInfo, { (char*)&t105_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t105_f5_DefaultValueData = 3;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t105_f5_DefaultValue = 
{
	&t105_f5_FieldInfo, { (char*)&t105_f5_DefaultValueData, &t134_0_0_0 }};
static const int32_t t105_f6_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t105_f6_DefaultValue = 
{
	&t105_f6_FieldInfo, { (char*)&t105_f6_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t105_FDVs[] = 
{
	&t105_f2_DefaultValue,
	&t105_f3_DefaultValue,
	&t105_f4_DefaultValue,
	&t105_f5_DefaultValue,
	&t105_f6_DefaultValue,
	NULL
};
static MethodInfo* t105_MIs[] =
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
static MethodInfo* t105_VT[] =
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
static Il2CppInterfaceOffsetPair t105_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t105_0_0_0;
extern Il2CppType t105_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern TypeInfo t112_TI;
TypeInfo t105_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "Action", "", t105_MIs, NULL, t105_FIs, NULL, &t15_TI, NULL, &t112_TI, &t134_TI, NULL, t105_VT, &EmptyCustomAttributesCache, &t134_TI, &t105_0_0_0, &t105_1_0_0, t105_IOs, NULL, NULL, t105_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t105)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 258, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t106.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t106_TI;
#include "t106MD.h"

extern MethodInfo m452_MI;


extern MethodInfo m281_MI;
 void m281 (t106 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m281_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.TimedObjectActivator/Entry
extern Il2CppType t62_0_0_6;
FieldInfo t106_f0_FieldInfo = 
{
	"target", &t62_0_0_6, &t106_TI, offsetof(t106, f0), &EmptyCustomAttributesCache};
extern Il2CppType t105_0_0_6;
FieldInfo t106_f1_FieldInfo = 
{
	"action", &t105_0_0_6, &t106_TI, offsetof(t106, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t106_f2_FieldInfo = 
{
	"delay", &t124_0_0_6, &t106_TI, offsetof(t106, f2), &EmptyCustomAttributesCache};
static FieldInfo* t106_FIs[] =
{
	&t106_f0_FieldInfo,
	&t106_f1_FieldInfo,
	&t106_f2_FieldInfo,
	NULL
};
extern TypeInfo t106_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m281_MI = 
{
	".ctor", (methodPointerType)&m281, &t106_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 299, NULL, (methodPointerType)NULL};
static MethodInfo* t106_MIs[] =
{
	&m281_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t106_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t106_0_0_0;
extern Il2CppType t106_1_0_0;
extern TypeInfo t25_TI;
struct t106;
extern TypeInfo t106_TI;
extern TypeInfo t112_TI;
TypeInfo t106_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "Entry", "", t106_MIs, NULL, t106_FIs, NULL, &t25_TI, NULL, &t112_TI, &t106_TI, NULL, t106_VT, &EmptyCustomAttributesCache, &t106_TI, &t106_0_0_0, &t106_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t106), 0, -1, 0, 0, -1, 1056770, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 3, 0, 0, 4, 0, 0};
#include "t107.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t107_TI;
#include "t107MD.h"

extern MethodInfo m452_MI;


extern MethodInfo m282_MI;
 void m282 (t107 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m282_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.TimedObjectActivator/Entries
extern Il2CppType t108_0_0_6;
FieldInfo t107_f0_FieldInfo = 
{
	"entries", &t108_0_0_6, &t107_TI, offsetof(t107, f0), &EmptyCustomAttributesCache};
static FieldInfo* t107_FIs[] =
{
	&t107_f0_FieldInfo,
	NULL
};
extern TypeInfo t107_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m282_MI = 
{
	".ctor", (methodPointerType)&m282, &t107_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 300, NULL, (methodPointerType)NULL};
static MethodInfo* t107_MIs[] =
{
	&m282_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t107_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_1_0_0;
extern TypeInfo t25_TI;
struct t107;
extern TypeInfo t107_TI;
extern TypeInfo t112_TI;
TypeInfo t107_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "Entries", "", t107_MIs, NULL, t107_FIs, NULL, &t25_TI, NULL, &t112_TI, &t107_TI, NULL, t107_VT, &EmptyCustomAttributesCache, &t107_TI, &t107_0_0_0, &t107_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t107), 0, -1, 0, 0, -1, 1056770, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 0};
#include "t109.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t109_TI;
#include "t109MD.h"

extern TypeInfo t109_TI;
extern TypeInfo t106_TI;
extern TypeInfo t188_TI;
extern TypeInfo t177_TI;
extern MethodInfo m452_MI;
extern MethodInfo m597_MI;
extern MethodInfo m505_MI;
extern MethodInfo m566_MI;


extern MethodInfo m283_MI;
 void m283 (t109 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m283_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m284_MI;
 t25 * m284 (t109 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m284_MI);
	{
		t25 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m285_MI;
 t25 * m285 (t109 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m285_MI);
	{
		t25 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m286_MI;
 bool m286 (t109 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m286_MI);
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_005b;
	}

IL_0021:
	{
		t106 * L_1 = (__this->f0);
		NullCheck(L_1);
		float L_2 = (L_1->f2);
		t188 * L_3 = (t188 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t188_TI));
		m597(L_3, L_2, &m597_MI);
		__this->f2 = L_3;
		__this->f1 = 1;
		goto IL_005d;
	}

IL_0043:
	{
		t106 * L_4 = (__this->f0);
		NullCheck(L_4);
		t62 * L_5 = (L_4->f0);
		NullCheck(L_5);
		m505(L_5, 1, &m505_MI);
		__this->f1 = (-1);
	}

IL_005b:
	{
		return 0;
	}

IL_005d:
	{
		return 1;
	}
	// Dead block : IL_005f: ldloc.1
}
extern MethodInfo m287_MI;
 void m287 (t109 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m287_MI);
	{
		__this->f1 = (-1);
		return;
	}
}
extern MethodInfo m288_MI;
 void m288 (t109 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m288_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m566(L_0, &m566_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6
extern Il2CppType t106_0_0_3;
FieldInfo t109_f0_FieldInfo = 
{
	"entry", &t106_0_0_3, &t109_TI, offsetof(t109, f0), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t109_f1_FieldInfo = 
{
	"$PC", &t134_0_0_3, &t109_TI, offsetof(t109, f1), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_3;
FieldInfo t109_f2_FieldInfo = 
{
	"$current", &t25_0_0_3, &t109_TI, offsetof(t109, f2), &EmptyCustomAttributesCache};
extern Il2CppType t106_0_0_3;
FieldInfo t109_f3_FieldInfo = 
{
	"<$>entry", &t106_0_0_3, &t109_TI, offsetof(t109, f3), &EmptyCustomAttributesCache};
static FieldInfo* t109_FIs[] =
{
	&t109_f0_FieldInfo,
	&t109_f1_FieldInfo,
	&t109_f2_FieldInfo,
	&t109_f3_FieldInfo,
	NULL
};
extern MethodInfo m284_MI;
static PropertyInfo t109____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&t109_TI, "System.Collections.Generic.IEnumerator<object>.Current", &m284_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m285_MI;
static PropertyInfo t109____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t109_TI, "System.Collections.IEnumerator.Current", &m285_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t109_PIs[] =
{
	&t109____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&t109____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t109_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m283_MI = 
{
	".ctor", (methodPointerType)&m283, &t109_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 301, NULL, (methodPointerType)NULL};
extern TypeInfo t109_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t109__CustomAttributeCache_m284;
MethodInfo m284_MI = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current", (methodPointerType)&m284, &t109_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t109__CustomAttributeCache_m284, 2529, 0, 4, 0, false, false, 302, NULL, (methodPointerType)NULL};
extern TypeInfo t109_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t109__CustomAttributeCache_m285;
MethodInfo m285_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m285, &t109_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t109__CustomAttributeCache_m285, 2529, 0, 5, 0, false, false, 303, NULL, (methodPointerType)NULL};
extern TypeInfo t109_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m286_MI = 
{
	"MoveNext", (methodPointerType)&m286, &t109_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 304, NULL, (methodPointerType)NULL};
extern TypeInfo t109_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t109__CustomAttributeCache_m287;
MethodInfo m287_MI = 
{
	"Dispose", (methodPointerType)&m287, &t109_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t109__CustomAttributeCache_m287, 486, 0, 7, 0, false, false, 305, NULL, (methodPointerType)NULL};
extern TypeInfo t109_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t109__CustomAttributeCache_m288;
MethodInfo m288_MI = 
{
	"Reset", (methodPointerType)&m288, &t109_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t109__CustomAttributeCache_m288, 486, 0, 8, 0, false, false, 306, NULL, (methodPointerType)NULL};
static MethodInfo* t109_MIs[] =
{
	&m283_MI,
	&m284_MI,
	&m285_MI,
	&m286_MI,
	&m287_MI,
	&m288_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m284_MI;
extern MethodInfo m285_MI;
extern MethodInfo m286_MI;
extern MethodInfo m287_MI;
extern MethodInfo m288_MI;
static MethodInfo* t109_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m284_MI,
	&m285_MI,
	&m286_MI,
	&m287_MI,
	&m288_MI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t109_ITIs[] = 
{
	&t179_TI,
	&t78_TI,
	&t167_TI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static Il2CppInterfaceOffsetPair t109_IOs[] = 
{
	{ &t179_TI, 4},
	{ &t78_TI, 5},
	{ &t167_TI, 7},
};
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t109_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t109_CustomAttributesCacheGenerator_m284(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t109_CustomAttributesCacheGenerator_m285(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t109_CustomAttributesCacheGenerator_m287(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t109_CustomAttributesCacheGenerator_m288(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t109__CustomAttributeCache = {
1,
NULL,
&t109_CustomAttributesCacheGenerator
};
CustomAttributesCache t109__CustomAttributeCache_m284 = {
1,
NULL,
&t109_CustomAttributesCacheGenerator_m284
};
CustomAttributesCache t109__CustomAttributeCache_m285 = {
1,
NULL,
&t109_CustomAttributesCacheGenerator_m285
};
CustomAttributesCache t109__CustomAttributeCache_m287 = {
1,
NULL,
&t109_CustomAttributesCacheGenerator_m287
};
CustomAttributesCache t109__CustomAttributeCache_m288 = {
1,
NULL,
&t109_CustomAttributesCacheGenerator_m288
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t109_0_0_0;
extern Il2CppType t109_1_0_0;
extern TypeInfo t25_TI;
struct t109;
extern TypeInfo t109_TI;
extern TypeInfo t112_TI;
extern CustomAttributesCache t109__CustomAttributeCache;
extern CustomAttributesCache t109__CustomAttributeCache_m284;
extern CustomAttributesCache t109__CustomAttributeCache_m285;
extern CustomAttributesCache t109__CustomAttributeCache_m287;
extern CustomAttributesCache t109__CustomAttributeCache_m288;
TypeInfo t109_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "<Activate>c__Iterator6", "", t109_MIs, t109_PIs, t109_FIs, NULL, &t25_TI, NULL, &t112_TI, &t109_TI, t109_ITIs, t109_VT, &t109__CustomAttributeCache, &t109_TI, &t109_0_0_0, &t109_1_0_0, t109_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t109), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 9, 3, 3};
#include "t110.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t110_TI;
#include "t110MD.h"

extern TypeInfo t110_TI;
extern TypeInfo t106_TI;
extern TypeInfo t188_TI;
extern TypeInfo t177_TI;
extern MethodInfo m452_MI;
extern MethodInfo m597_MI;
extern MethodInfo m505_MI;
extern MethodInfo m566_MI;


extern MethodInfo m289_MI;
 void m289 (t110 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m289_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m290_MI;
 t25 * m290 (t110 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m290_MI);
	{
		t25 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m291_MI;
 t25 * m291 (t110 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m291_MI);
	{
		t25 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m292_MI;
 bool m292 (t110 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m292_MI);
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_005b;
	}

IL_0021:
	{
		t106 * L_1 = (__this->f0);
		NullCheck(L_1);
		float L_2 = (L_1->f2);
		t188 * L_3 = (t188 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t188_TI));
		m597(L_3, L_2, &m597_MI);
		__this->f2 = L_3;
		__this->f1 = 1;
		goto IL_005d;
	}

IL_0043:
	{
		t106 * L_4 = (__this->f0);
		NullCheck(L_4);
		t62 * L_5 = (L_4->f0);
		NullCheck(L_5);
		m505(L_5, 0, &m505_MI);
		__this->f1 = (-1);
	}

IL_005b:
	{
		return 0;
	}

IL_005d:
	{
		return 1;
	}
	// Dead block : IL_005f: ldloc.1
}
extern MethodInfo m293_MI;
 void m293 (t110 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m293_MI);
	{
		__this->f1 = (-1);
		return;
	}
}
extern MethodInfo m294_MI;
 void m294 (t110 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m294_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m566(L_0, &m566_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7
extern Il2CppType t106_0_0_3;
FieldInfo t110_f0_FieldInfo = 
{
	"entry", &t106_0_0_3, &t110_TI, offsetof(t110, f0), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t110_f1_FieldInfo = 
{
	"$PC", &t134_0_0_3, &t110_TI, offsetof(t110, f1), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_3;
FieldInfo t110_f2_FieldInfo = 
{
	"$current", &t25_0_0_3, &t110_TI, offsetof(t110, f2), &EmptyCustomAttributesCache};
extern Il2CppType t106_0_0_3;
FieldInfo t110_f3_FieldInfo = 
{
	"<$>entry", &t106_0_0_3, &t110_TI, offsetof(t110, f3), &EmptyCustomAttributesCache};
static FieldInfo* t110_FIs[] =
{
	&t110_f0_FieldInfo,
	&t110_f1_FieldInfo,
	&t110_f2_FieldInfo,
	&t110_f3_FieldInfo,
	NULL
};
extern MethodInfo m290_MI;
static PropertyInfo t110____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&t110_TI, "System.Collections.Generic.IEnumerator<object>.Current", &m290_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m291_MI;
static PropertyInfo t110____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t110_TI, "System.Collections.IEnumerator.Current", &m291_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t110_PIs[] =
{
	&t110____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&t110____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t110_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m289_MI = 
{
	".ctor", (methodPointerType)&m289, &t110_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 307, NULL, (methodPointerType)NULL};
extern TypeInfo t110_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t110__CustomAttributeCache_m290;
MethodInfo m290_MI = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current", (methodPointerType)&m290, &t110_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t110__CustomAttributeCache_m290, 2529, 0, 4, 0, false, false, 308, NULL, (methodPointerType)NULL};
extern TypeInfo t110_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t110__CustomAttributeCache_m291;
MethodInfo m291_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m291, &t110_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t110__CustomAttributeCache_m291, 2529, 0, 5, 0, false, false, 309, NULL, (methodPointerType)NULL};
extern TypeInfo t110_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m292_MI = 
{
	"MoveNext", (methodPointerType)&m292, &t110_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 310, NULL, (methodPointerType)NULL};
extern TypeInfo t110_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t110__CustomAttributeCache_m293;
MethodInfo m293_MI = 
{
	"Dispose", (methodPointerType)&m293, &t110_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t110__CustomAttributeCache_m293, 486, 0, 7, 0, false, false, 311, NULL, (methodPointerType)NULL};
extern TypeInfo t110_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t110__CustomAttributeCache_m294;
MethodInfo m294_MI = 
{
	"Reset", (methodPointerType)&m294, &t110_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t110__CustomAttributeCache_m294, 486, 0, 8, 0, false, false, 312, NULL, (methodPointerType)NULL};
static MethodInfo* t110_MIs[] =
{
	&m289_MI,
	&m290_MI,
	&m291_MI,
	&m292_MI,
	&m293_MI,
	&m294_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m290_MI;
extern MethodInfo m291_MI;
extern MethodInfo m292_MI;
extern MethodInfo m293_MI;
extern MethodInfo m294_MI;
static MethodInfo* t110_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m290_MI,
	&m291_MI,
	&m292_MI,
	&m293_MI,
	&m294_MI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t110_ITIs[] = 
{
	&t179_TI,
	&t78_TI,
	&t167_TI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static Il2CppInterfaceOffsetPair t110_IOs[] = 
{
	{ &t179_TI, 4},
	{ &t78_TI, 5},
	{ &t167_TI, 7},
};
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t110_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t110_CustomAttributesCacheGenerator_m290(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t110_CustomAttributesCacheGenerator_m291(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t110_CustomAttributesCacheGenerator_m293(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t110_CustomAttributesCacheGenerator_m294(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t110__CustomAttributeCache = {
1,
NULL,
&t110_CustomAttributesCacheGenerator
};
CustomAttributesCache t110__CustomAttributeCache_m290 = {
1,
NULL,
&t110_CustomAttributesCacheGenerator_m290
};
CustomAttributesCache t110__CustomAttributeCache_m291 = {
1,
NULL,
&t110_CustomAttributesCacheGenerator_m291
};
CustomAttributesCache t110__CustomAttributeCache_m293 = {
1,
NULL,
&t110_CustomAttributesCacheGenerator_m293
};
CustomAttributesCache t110__CustomAttributeCache_m294 = {
1,
NULL,
&t110_CustomAttributesCacheGenerator_m294
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_1_0_0;
extern TypeInfo t25_TI;
struct t110;
extern TypeInfo t110_TI;
extern TypeInfo t112_TI;
extern CustomAttributesCache t110__CustomAttributeCache;
extern CustomAttributesCache t110__CustomAttributeCache_m290;
extern CustomAttributesCache t110__CustomAttributeCache_m291;
extern CustomAttributesCache t110__CustomAttributeCache_m293;
extern CustomAttributesCache t110__CustomAttributeCache_m294;
TypeInfo t110_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "<Deactivate>c__Iterator7", "", t110_MIs, t110_PIs, t110_FIs, NULL, &t25_TI, NULL, &t112_TI, &t110_TI, t110_ITIs, t110_VT, &t110__CustomAttributeCache, &t110_TI, &t110_0_0_0, &t110_1_0_0, t110_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t110), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 9, 3, 3};
#include "t111.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t111_TI;
#include "t111MD.h"

extern TypeInfo t111_TI;
extern TypeInfo t106_TI;
extern TypeInfo t188_TI;
extern TypeInfo t177_TI;
extern MethodInfo m452_MI;
extern MethodInfo m597_MI;
extern MethodInfo m620_MI;
extern MethodInfo m621_MI;
extern MethodInfo m566_MI;


extern MethodInfo m295_MI;
 void m295 (t111 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m295_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m296_MI;
 t25 * m296 (t111 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m296_MI);
	{
		t25 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m297_MI;
 t25 * m297 (t111 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m297_MI);
	{
		t25 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m298_MI;
 bool m298 (t111 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m298_MI);
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0054;
	}

IL_0021:
	{
		t106 * L_1 = (__this->f0);
		NullCheck(L_1);
		float L_2 = (L_1->f2);
		t188 * L_3 = (t188 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t188_TI));
		m597(L_3, L_2, &m597_MI);
		__this->f2 = L_3;
		__this->f1 = 1;
		goto IL_0056;
	}

IL_0043:
	{
		int32_t L_4 = m620(NULL, &m620_MI);
		m621(NULL, L_4, &m621_MI);
		__this->f1 = (-1);
	}

IL_0054:
	{
		return 0;
	}

IL_0056:
	{
		return 1;
	}
	// Dead block : IL_0058: ldloc.1
}
extern MethodInfo m299_MI;
 void m299 (t111 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m299_MI);
	{
		__this->f1 = (-1);
		return;
	}
}
extern MethodInfo m300_MI;
 void m300 (t111 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m300_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m566(L_0, &m566_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8
extern Il2CppType t106_0_0_3;
FieldInfo t111_f0_FieldInfo = 
{
	"entry", &t106_0_0_3, &t111_TI, offsetof(t111, f0), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t111_f1_FieldInfo = 
{
	"$PC", &t134_0_0_3, &t111_TI, offsetof(t111, f1), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_3;
FieldInfo t111_f2_FieldInfo = 
{
	"$current", &t25_0_0_3, &t111_TI, offsetof(t111, f2), &EmptyCustomAttributesCache};
extern Il2CppType t106_0_0_3;
FieldInfo t111_f3_FieldInfo = 
{
	"<$>entry", &t106_0_0_3, &t111_TI, offsetof(t111, f3), &EmptyCustomAttributesCache};
static FieldInfo* t111_FIs[] =
{
	&t111_f0_FieldInfo,
	&t111_f1_FieldInfo,
	&t111_f2_FieldInfo,
	&t111_f3_FieldInfo,
	NULL
};
extern MethodInfo m296_MI;
static PropertyInfo t111____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&t111_TI, "System.Collections.Generic.IEnumerator<object>.Current", &m296_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m297_MI;
static PropertyInfo t111____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t111_TI, "System.Collections.IEnumerator.Current", &m297_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t111_PIs[] =
{
	&t111____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&t111____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t111_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m295_MI = 
{
	".ctor", (methodPointerType)&m295, &t111_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 313, NULL, (methodPointerType)NULL};
extern TypeInfo t111_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t111__CustomAttributeCache_m296;
MethodInfo m296_MI = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current", (methodPointerType)&m296, &t111_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t111__CustomAttributeCache_m296, 2529, 0, 4, 0, false, false, 314, NULL, (methodPointerType)NULL};
extern TypeInfo t111_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t111__CustomAttributeCache_m297;
MethodInfo m297_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m297, &t111_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t111__CustomAttributeCache_m297, 2529, 0, 5, 0, false, false, 315, NULL, (methodPointerType)NULL};
extern TypeInfo t111_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m298_MI = 
{
	"MoveNext", (methodPointerType)&m298, &t111_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 316, NULL, (methodPointerType)NULL};
extern TypeInfo t111_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t111__CustomAttributeCache_m299;
MethodInfo m299_MI = 
{
	"Dispose", (methodPointerType)&m299, &t111_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t111__CustomAttributeCache_m299, 486, 0, 7, 0, false, false, 317, NULL, (methodPointerType)NULL};
extern TypeInfo t111_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t111__CustomAttributeCache_m300;
MethodInfo m300_MI = 
{
	"Reset", (methodPointerType)&m300, &t111_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t111__CustomAttributeCache_m300, 486, 0, 8, 0, false, false, 318, NULL, (methodPointerType)NULL};
static MethodInfo* t111_MIs[] =
{
	&m295_MI,
	&m296_MI,
	&m297_MI,
	&m298_MI,
	&m299_MI,
	&m300_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m296_MI;
extern MethodInfo m297_MI;
extern MethodInfo m298_MI;
extern MethodInfo m299_MI;
extern MethodInfo m300_MI;
static MethodInfo* t111_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m296_MI,
	&m297_MI,
	&m298_MI,
	&m299_MI,
	&m300_MI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t111_ITIs[] = 
{
	&t179_TI,
	&t78_TI,
	&t167_TI,
};
extern TypeInfo t179_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static Il2CppInterfaceOffsetPair t111_IOs[] = 
{
	{ &t179_TI, 4},
	{ &t78_TI, 5},
	{ &t167_TI, 7},
};
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t111_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t111_CustomAttributesCacheGenerator_m296(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t111_CustomAttributesCacheGenerator_m297(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t111_CustomAttributesCacheGenerator_m299(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t111_CustomAttributesCacheGenerator_m300(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t111__CustomAttributeCache = {
1,
NULL,
&t111_CustomAttributesCacheGenerator
};
CustomAttributesCache t111__CustomAttributeCache_m296 = {
1,
NULL,
&t111_CustomAttributesCacheGenerator_m296
};
CustomAttributesCache t111__CustomAttributeCache_m297 = {
1,
NULL,
&t111_CustomAttributesCacheGenerator_m297
};
CustomAttributesCache t111__CustomAttributeCache_m299 = {
1,
NULL,
&t111_CustomAttributesCacheGenerator_m299
};
CustomAttributesCache t111__CustomAttributeCache_m300 = {
1,
NULL,
&t111_CustomAttributesCacheGenerator_m300
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t111_0_0_0;
extern Il2CppType t111_1_0_0;
extern TypeInfo t25_TI;
struct t111;
extern TypeInfo t111_TI;
extern TypeInfo t112_TI;
extern CustomAttributesCache t111__CustomAttributeCache;
extern CustomAttributesCache t111__CustomAttributeCache_m296;
extern CustomAttributesCache t111__CustomAttributeCache_m297;
extern CustomAttributesCache t111__CustomAttributeCache_m299;
extern CustomAttributesCache t111__CustomAttributeCache_m300;
TypeInfo t111_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "<ReloadLevel>c__Iterator8", "", t111_MIs, t111_PIs, t111_FIs, NULL, &t25_TI, NULL, &t112_TI, &t111_TI, t111_ITIs, t111_VT, &t111__CustomAttributeCache, &t111_TI, &t111_0_0_0, &t111_1_0_0, t111_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t111), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 9, 3, 3};
#include "t112.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t112_TI;
#include "t112MD.h"

extern TypeInfo t107_TI;
extern TypeInfo t112_TI;
extern TypeInfo t106_TI;
extern TypeInfo t109_TI;
extern TypeInfo t110_TI;
extern TypeInfo t111_TI;
extern MethodInfo m282_MI;
extern MethodInfo m334_MI;
extern MethodInfo m303_MI;
extern MethodInfo m604_MI;
extern MethodInfo m304_MI;
extern MethodInfo m622_MI;
extern MethodInfo m305_MI;
extern MethodInfo m283_MI;
extern MethodInfo m289_MI;
extern MethodInfo m295_MI;


extern MethodInfo m301_MI;
 void m301 (t112 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m301_MI);
	{
		t107 * L_0 = (t107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t107_TI));
		m282(L_0, &m282_MI);
		__this->f2 = L_0;
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m302_MI;
 void m302 (t112 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m302_MI);
	t106 * V_0 = {0};
	t108* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		t107 * L_0 = (__this->f2);
		NullCheck(L_0);
		t108* L_1 = (L_0->f0);
		V_1 = L_1;
		V_2 = 0;
		goto IL_008c;
	}

IL_0013:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		V_0 = (*(t106 **)(t106 **)SZArrayLdElema(V_1, V_2));
		NullCheck(V_0);
		int32_t L_2 = (V_0->f1);
		V_3 = L_2;
		if (V_3 == 0)
		{
			goto IL_0039;
		}
		if (V_3 == 1)
		{
			goto IL_004c;
		}
		if (V_3 == 2)
		{
			goto IL_005f;
		}
		if (V_3 == 3)
		{
			goto IL_0075;
		}
	}
	{
		goto IL_0088;
	}

IL_0039:
	{
		t25 * L_3 = m303(__this, V_0, &m303_MI);
		m604(__this, L_3, &m604_MI);
		goto IL_0088;
	}

IL_004c:
	{
		t25 * L_4 = m304(__this, V_0, &m304_MI);
		m604(__this, L_4, &m604_MI);
		goto IL_0088;
	}

IL_005f:
	{
		NullCheck(V_0);
		t62 * L_5 = (V_0->f0);
		NullCheck(V_0);
		float L_6 = (V_0->f2);
		m622(NULL, L_5, L_6, &m622_MI);
		goto IL_0088;
	}

IL_0075:
	{
		t25 * L_7 = m305(__this, V_0, &m305_MI);
		m604(__this, L_7, &m604_MI);
		goto IL_0088;
	}

IL_0088:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_008c:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t122 *)V_1)->max_length))))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
extern MethodInfo m303_MI;
 t25 * m303 (t112 * __this, t106 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m303_MI);
	t109 * V_0 = {0};
	{
		t109 * L_0 = (t109 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t109_TI));
		m283(L_0, &m283_MI);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->f0 = p0;
		NullCheck(V_0);
		V_0->f3 = p0;
		return V_0;
	}
}
extern MethodInfo m304_MI;
 t25 * m304 (t112 * __this, t106 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m304_MI);
	t110 * V_0 = {0};
	{
		t110 * L_0 = (t110 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t110_TI));
		m289(L_0, &m289_MI);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->f0 = p0;
		NullCheck(V_0);
		V_0->f3 = p0;
		return V_0;
	}
}
extern MethodInfo m305_MI;
 t25 * m305 (t112 * __this, t106 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m305_MI);
	t111 * V_0 = {0};
	{
		t111 * L_0 = (t111 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t111_TI));
		m295(L_0, &m295_MI);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->f0 = p0;
		NullCheck(V_0);
		V_0->f3 = p0;
		return V_0;
	}
}
// Metadata Definition UnityStandardAssets.Utility.TimedObjectActivator
extern Il2CppType t107_0_0_6;
FieldInfo t112_f2_FieldInfo = 
{
	"entries", &t107_0_0_6, &t112_TI, offsetof(t112, f2), &EmptyCustomAttributesCache};
static FieldInfo* t112_FIs[] =
{
	&t112_f2_FieldInfo,
	NULL
};
extern TypeInfo t112_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m301_MI = 
{
	".ctor", (methodPointerType)&m301, &t112_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 294, NULL, (methodPointerType)NULL};
extern TypeInfo t112_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m302_MI = 
{
	"Awake", (methodPointerType)&m302, &t112_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 295, NULL, (methodPointerType)NULL};
extern Il2CppType t106_0_0_0;
static ParameterInfo t112_m303_ParameterInfos[] = 
{
	{"entry", 0, 134217858, &EmptyCustomAttributesCache, &t106_0_0_0},
};
extern TypeInfo t112_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t112__CustomAttributeCache_m303;
MethodInfo m303_MI = 
{
	"Activate", (methodPointerType)&m303, &t112_TI, &t78_0_0_0, RuntimeInvoker_t25_t25, t112_m303_ParameterInfos, &t112__CustomAttributeCache_m303, 129, 0, 255, 1, false, false, 296, NULL, (methodPointerType)NULL};
extern Il2CppType t106_0_0_0;
static ParameterInfo t112_m304_ParameterInfos[] = 
{
	{"entry", 0, 134217859, &EmptyCustomAttributesCache, &t106_0_0_0},
};
extern TypeInfo t112_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t112__CustomAttributeCache_m304;
MethodInfo m304_MI = 
{
	"Deactivate", (methodPointerType)&m304, &t112_TI, &t78_0_0_0, RuntimeInvoker_t25_t25, t112_m304_ParameterInfos, &t112__CustomAttributeCache_m304, 129, 0, 255, 1, false, false, 297, NULL, (methodPointerType)NULL};
extern Il2CppType t106_0_0_0;
static ParameterInfo t112_m305_ParameterInfos[] = 
{
	{"entry", 0, 134217860, &EmptyCustomAttributesCache, &t106_0_0_0},
};
extern TypeInfo t112_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t112__CustomAttributeCache_m305;
MethodInfo m305_MI = 
{
	"ReloadLevel", (methodPointerType)&m305, &t112_TI, &t78_0_0_0, RuntimeInvoker_t25_t25, t112_m305_ParameterInfos, &t112__CustomAttributeCache_m305, 129, 0, 255, 1, false, false, 298, NULL, (methodPointerType)NULL};
static MethodInfo* t112_MIs[] =
{
	&m301_MI,
	&m302_MI,
	&m303_MI,
	&m304_MI,
	&m305_MI,
	NULL
};
extern TypeInfo t105_TI;
extern TypeInfo t106_TI;
extern TypeInfo t107_TI;
extern TypeInfo t109_TI;
extern TypeInfo t110_TI;
extern TypeInfo t111_TI;
static TypeInfo* t112_TI__nestedTypes[7] =
{
	&t105_TI,
	&t106_TI,
	&t107_TI,
	&t109_TI,
	&t110_TI,
	&t111_TI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t112_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t112_CustomAttributesCacheGenerator_m303(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t112_CustomAttributesCacheGenerator_m304(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t112_CustomAttributesCacheGenerator_m305(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t112__CustomAttributeCache_m303 = {
1,
NULL,
&t112_CustomAttributesCacheGenerator_m303
};
CustomAttributesCache t112__CustomAttributeCache_m304 = {
1,
NULL,
&t112_CustomAttributesCacheGenerator_m304
};
CustomAttributesCache t112__CustomAttributeCache_m305 = {
1,
NULL,
&t112_CustomAttributesCacheGenerator_m305
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t112_0_0_0;
extern Il2CppType t112_1_0_0;
extern TypeInfo t3_TI;
struct t112;
extern TypeInfo t112_TI;
extern CustomAttributesCache t112__CustomAttributeCache_m303;
extern CustomAttributesCache t112__CustomAttributeCache_m304;
extern CustomAttributesCache t112__CustomAttributeCache_m305;
TypeInfo t112_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "TimedObjectActivator", "UnityStandardAssets.Utility", t112_MIs, NULL, t112_FIs, NULL, &t3_TI, t112_TI__nestedTypes, NULL, &t112_TI, NULL, t112_VT, &EmptyCustomAttributesCache, &t112_TI, &t112_0_0_0, &t112_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t112), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 5, 0, 1, 0, 6, 4, 0, 0};
#include "t113.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t113_TI;
#include "t113MD.h"

extern TypeInfo t113_TI;
extern MethodInfo m334_MI;
extern MethodInfo m623_MI;
extern MethodInfo m336_MI;
extern MethodInfo m624_MI;
extern MethodInfo m370_MI;
extern MethodInfo m541_MI;


extern MethodInfo m306_MI;
 void m306 (t113 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m306_MI);
	{
		__this->f2 = (1.0f);
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m307_MI;
 void m307 (t113 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m307_MI);
	{
		float L_0 = (__this->f2);
		m623(__this, (t27*) &_stringLiteral28, L_0, &m623_MI);
		return;
	}
}
extern MethodInfo m308_MI;
 void m308 (t113 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m308_MI);
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t2 * L_1 = m336(__this, &m336_MI);
		NullCheck(L_1);
		m624(L_1, &m624_MI);
	}

IL_0016:
	{
		t62 * L_2 = m370(__this, &m370_MI);
		m541(NULL, L_2, &m541_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.TimedObjectDestructor
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t113__CustomAttributeCache_m_TimeOut;
FieldInfo t113_f2_FieldInfo = 
{
	"m_TimeOut", &t124_0_0_1, &t113_TI, offsetof(t113, f2), &t113__CustomAttributeCache_m_TimeOut};
extern Il2CppType t125_0_0_1;
extern CustomAttributesCache t113__CustomAttributeCache_m_DetachChildren;
FieldInfo t113_f3_FieldInfo = 
{
	"m_DetachChildren", &t125_0_0_1, &t113_TI, offsetof(t113, f3), &t113__CustomAttributeCache_m_DetachChildren};
static FieldInfo* t113_FIs[] =
{
	&t113_f2_FieldInfo,
	&t113_f3_FieldInfo,
	NULL
};
extern TypeInfo t113_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m306_MI = 
{
	".ctor", (methodPointerType)&m306, &t113_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 319, NULL, (methodPointerType)NULL};
extern TypeInfo t113_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m307_MI = 
{
	"Awake", (methodPointerType)&m307, &t113_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 320, NULL, (methodPointerType)NULL};
extern TypeInfo t113_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m308_MI = 
{
	"DestroyNow", (methodPointerType)&m308, &t113_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 321, NULL, (methodPointerType)NULL};
static MethodInfo* t113_MIs[] =
{
	&m306_MI,
	&m307_MI,
	&m308_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t113_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t113_CustomAttributesCacheGenerator_m_TimeOut(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t113_CustomAttributesCacheGenerator_m_DetachChildren(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t113__CustomAttributeCache_m_TimeOut = {
1,
NULL,
&t113_CustomAttributesCacheGenerator_m_TimeOut
};
CustomAttributesCache t113__CustomAttributeCache_m_DetachChildren = {
1,
NULL,
&t113_CustomAttributesCacheGenerator_m_DetachChildren
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t113_0_0_0;
extern Il2CppType t113_1_0_0;
extern TypeInfo t3_TI;
struct t113;
extern TypeInfo t113_TI;
extern CustomAttributesCache t113__CustomAttributeCache_m_TimeOut;
extern CustomAttributesCache t113__CustomAttributeCache_m_DetachChildren;
TypeInfo t113_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "TimedObjectDestructor", "UnityStandardAssets.Utility", t113_MIs, NULL, t113_FIs, NULL, &t3_TI, NULL, NULL, &t113_TI, NULL, t113_VT, &EmptyCustomAttributesCache, &t113_TI, &t113_0_0_0, &t113_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t113), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 2, 0, 0, 4, 0, 0};
#include "t114.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t114_TI;
#include "t114MD.h"

extern TypeInfo t91_TI;
extern TypeInfo t2_TI;
extern TypeInfo t114_TI;
extern MethodInfo m452_MI;


extern MethodInfo m309_MI;
 void m309 (t114 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m309_MI);
	{
		__this->f1 = ((t91*)SZArrayNew(InitializedTypeInfo(&t91_TI), 0));
		m452(__this, &m452_MI);
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.WaypointCircuit/WaypointList
extern Il2CppType t115_0_0_6;
FieldInfo t114_f0_FieldInfo = 
{
	"circuit", &t115_0_0_6, &t114_TI, offsetof(t114, f0), &EmptyCustomAttributesCache};
extern Il2CppType t91_0_0_6;
FieldInfo t114_f1_FieldInfo = 
{
	"items", &t91_0_0_6, &t114_TI, offsetof(t114, f1), &EmptyCustomAttributesCache};
static FieldInfo* t114_FIs[] =
{
	&t114_f0_FieldInfo,
	&t114_f1_FieldInfo,
	NULL
};
extern TypeInfo t114_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m309_MI = 
{
	".ctor", (methodPointerType)&m309, &t114_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 334, NULL, (methodPointerType)NULL};
static MethodInfo* t114_MIs[] =
{
	&m309_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t114_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_1_0_0;
extern TypeInfo t25_TI;
struct t114;
extern TypeInfo t114_TI;
extern TypeInfo t115_TI;
TypeInfo t114_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "WaypointList", "", t114_MIs, NULL, t114_FIs, NULL, &t25_TI, NULL, &t115_TI, &t114_TI, NULL, t114_VT, &EmptyCustomAttributesCache, &t114_TI, &t114_0_0_0, &t114_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t114), 0, -1, 0, 0, -1, 1056770, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t116.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t116_TI;
#include "t116MD.h"

extern TypeInfo t116_TI;


extern MethodInfo m310_MI;
 void m310 (t116 * __this, t4  p0, t4  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m310_MI);
	{
		__this->f0 = p0;
		__this->f1 = p1;
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
extern Il2CppType t4_0_0_6;
FieldInfo t116_f0_FieldInfo = 
{
	"position", &t4_0_0_6, &t116_TI, offsetof(t116, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_6;
FieldInfo t116_f1_FieldInfo = 
{
	"direction", &t4_0_0_6, &t116_TI, offsetof(t116, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t116_FIs[] =
{
	&t116_f0_FieldInfo,
	&t116_f1_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t116_m310_ParameterInfos[] = 
{
	{"position", 0, 134217870, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"direction", 1, 134217871, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t116_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m310_MI = 
{
	".ctor", (methodPointerType)&m310, &t116_TI, &t123_0_0_0, RuntimeInvoker_t123_t4_t4, t116_m310_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 335, NULL, (methodPointerType)NULL};
static MethodInfo* t116_MIs[] =
{
	&m310_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
static MethodInfo* t116_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t116_0_0_0;
extern Il2CppType t116_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t116_TI;
extern TypeInfo t115_TI;
TypeInfo t116_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "RoutePoint", "", t116_MIs, NULL, t116_FIs, NULL, &t117_TI, NULL, &t115_TI, &t116_TI, NULL, t116_VT, &EmptyCustomAttributesCache, &t116_TI, &t116_0_0_0, &t116_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t116)+ sizeof (Il2CppObject), 0, sizeof(t116 ), 0, 0, -1, 1048842, 0, true, false, false, false, false, false, false, false, false, false, false, true, true, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t115.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t115_TI;
#include "t115MD.h"

extern TypeInfo t115_TI;
extern TypeInfo t114_TI;
extern TypeInfo t116_TI;
extern TypeInfo t126_TI;
extern TypeInfo t118_TI;
extern TypeInfo t4_TI;
extern TypeInfo t119_TI;
extern TypeInfo t124_TI;
extern TypeInfo t148_TI;
#include "t191MD.h"
extern MethodInfo m309_MI;
extern MethodInfo m334_MI;
extern MethodInfo m314_MI;
extern MethodInfo m319_MI;
extern MethodInfo m317_MI;
extern MethodInfo m337_MI;
extern MethodInfo m421_MI;
extern MethodInfo m310_MI;
extern MethodInfo m312_MI;
extern MethodInfo m313_MI;
extern MethodInfo m628_MI;
extern MethodInfo m425_MI;
extern MethodInfo m318_MI;
extern MethodInfo m426_MI;
extern MethodInfo m341_MI;
extern MethodInfo m460_MI;
extern MethodInfo m347_MI;
extern MethodInfo m343_MI;
extern MethodInfo m371_MI;
extern MethodInfo m335_MI;
extern MethodInfo m420_MI;
extern MethodInfo m322_MI;
extern MethodInfo m629_MI;
extern MethodInfo m630_MI;
extern MethodInfo m631_MI;
extern MethodInfo m632_MI;


extern MethodInfo m311_MI;
 void m311 (t115 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m311_MI);
	{
		t114 * L_0 = (t114 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t114_TI));
		m309(L_0, &m309_MI);
		__this->f2 = L_0;
		__this->f3 = 1;
		__this->f7 = (100.0f);
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m312_MI;
 float m312 (t115 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m312_MI);
	{
		float L_0 = (__this->f17);
		return L_0;
	}
}
extern MethodInfo m313_MI;
 void m313 (t115 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m313_MI);
	{
		__this->f17 = p0;
		return;
	}
}
extern MethodInfo m314_MI;
 t91* m314 (t115 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m314_MI);
	{
		t114 * L_0 = (__this->f2);
		NullCheck(L_0);
		t91* L_1 = (L_0->f1);
		return L_1;
	}
}
extern MethodInfo m315_MI;
 void m315 (t115 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m315_MI);
	{
		t91* L_0 = m314(__this, &m314_MI);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((t122 *)L_0)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		m319(__this, &m319_MI);
	}

IL_0014:
	{
		t91* L_1 = m314(__this, &m314_MI);
		NullCheck(L_1);
		__this->f4 = (((int32_t)(((t122 *)L_1)->max_length)));
		return;
	}
}
extern MethodInfo m316_MI;
 t116  m316 (t115 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m316_MI);
	t4  V_0 = {0};
	t4  V_1 = {0};
	t4  V_2 = {0};
	{
		t4  L_0 = m317(__this, p0, &m317_MI);
		V_0 = L_0;
		t4  L_1 = m317(__this, ((float)(p0+(0.1f))), &m317_MI);
		V_1 = L_1;
		t4  L_2 = m337(NULL, V_1, V_0, &m337_MI);
		V_2 = L_2;
		t4  L_3 = m421((&V_2), &m421_MI);
		t116  L_4 = {0};
		m310(&L_4, V_0, L_3, &m310_MI);
		return L_4;
	}
}
extern MethodInfo m317_MI;
 t4  m317 (t115 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m317_MI);
	int32_t V_0 = 0;
	{
		V_0 = 0;
		float L_0 = m312(__this, &m312_MI);
		if ((((float)L_0) != ((float)(0.0f))))
		{
			goto IL_0029;
		}
	}
	{
		t119* L_1 = (__this->f6);
		t119* L_2 = (__this->f6);
		NullCheck(L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((((int32_t)(((t122 *)L_2)->max_length)))-1)));
		m313(__this, (*(float*)(float*)SZArrayLdElema(L_1, ((int32_t)((((int32_t)(((t122 *)L_2)->max_length)))-1)))), &m313_MI);
	}

IL_0029:
	{
		float L_3 = m312(__this, &m312_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_4 = m628(NULL, p0, L_3, &m628_MI);
		p0 = L_4;
		goto IL_0040;
	}

IL_003c:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0040:
	{
		t119* L_5 = (__this->f6);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_0);
		if ((((float)(*(float*)(float*)SZArrayLdElema(L_5, V_0))) < ((float)p0)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_6 = (__this->f4);
		int32_t L_7 = (__this->f4);
		__this->f9 = ((int32_t)(((int32_t)(((int32_t)(V_0-1))+L_6))%L_7));
		__this->f10 = V_0;
		t119* L_8 = (__this->f6);
		int32_t L_9 = (__this->f9);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		t119* L_10 = (__this->f6);
		int32_t L_11 = (__this->f10);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_12 = m425(NULL, (*(float*)(float*)SZArrayLdElema(L_8, L_9)), (*(float*)(float*)SZArrayLdElema(L_10, L_11)), p0, &m425_MI);
		__this->f12 = L_12;
		bool L_13 = (__this->f3);
		if (!L_13)
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_14 = (__this->f4);
		int32_t L_15 = (__this->f4);
		__this->f8 = ((int32_t)(((int32_t)(((int32_t)(V_0-2))+L_14))%L_15));
		int32_t L_16 = (__this->f4);
		__this->f11 = ((int32_t)(((int32_t)(V_0+1))%L_16));
		int32_t L_17 = (__this->f10);
		int32_t L_18 = (__this->f4);
		__this->f10 = ((int32_t)(L_17%L_18));
		t118* L_19 = (__this->f5);
		int32_t L_20 = (__this->f8);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		__this->f13 = (*(t4 *)((t4 *)(t4 *)SZArrayLdElema(L_19, L_20)));
		t118* L_21 = (__this->f5);
		int32_t L_22 = (__this->f9);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		__this->f14 = (*(t4 *)((t4 *)(t4 *)SZArrayLdElema(L_21, L_22)));
		t118* L_23 = (__this->f5);
		int32_t L_24 = (__this->f10);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		__this->f15 = (*(t4 *)((t4 *)(t4 *)SZArrayLdElema(L_23, L_24)));
		t118* L_25 = (__this->f5);
		int32_t L_26 = (__this->f11);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		__this->f16 = (*(t4 *)((t4 *)(t4 *)SZArrayLdElema(L_25, L_26)));
		t4  L_27 = (__this->f13);
		t4  L_28 = (__this->f14);
		t4  L_29 = (__this->f15);
		t4  L_30 = (__this->f16);
		float L_31 = (__this->f12);
		t4  L_32 = m318(__this, L_27, L_28, L_29, L_30, L_31, &m318_MI);
		return L_32;
	}

IL_016c:
	{
		int32_t L_33 = (__this->f4);
		int32_t L_34 = (__this->f4);
		__this->f9 = ((int32_t)(((int32_t)(((int32_t)(V_0-1))+L_33))%L_34));
		__this->f10 = V_0;
		t118* L_35 = (__this->f5);
		int32_t L_36 = (__this->f9);
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		t118* L_37 = (__this->f5);
		int32_t L_38 = (__this->f10);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		float L_39 = (__this->f12);
		t4  L_40 = m426(NULL, (*(t4 *)((t4 *)(t4 *)SZArrayLdElema(L_35, L_36))), (*(t4 *)((t4 *)(t4 *)SZArrayLdElema(L_37, L_38))), L_39, &m426_MI);
		return L_40;
	}
}
extern MethodInfo m318_MI;
 t4  m318 (t115 * __this, t4  p0, t4  p1, t4  p2, t4  p3, float p4, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m318_MI);
	{
		t4  L_0 = m341(NULL, (2.0f), p1, &m341_MI);
		t4  L_1 = m460(NULL, p0, &m460_MI);
		t4  L_2 = m347(NULL, L_1, p2, &m347_MI);
		t4  L_3 = m343(NULL, L_2, p4, &m343_MI);
		t4  L_4 = m347(NULL, L_0, L_3, &m347_MI);
		t4  L_5 = m341(NULL, (2.0f), p0, &m341_MI);
		t4  L_6 = m341(NULL, (5.0f), p1, &m341_MI);
		t4  L_7 = m337(NULL, L_5, L_6, &m337_MI);
		t4  L_8 = m341(NULL, (4.0f), p2, &m341_MI);
		t4  L_9 = m347(NULL, L_7, L_8, &m347_MI);
		t4  L_10 = m337(NULL, L_9, p3, &m337_MI);
		t4  L_11 = m343(NULL, L_10, p4, &m343_MI);
		t4  L_12 = m343(NULL, L_11, p4, &m343_MI);
		t4  L_13 = m347(NULL, L_4, L_12, &m347_MI);
		t4  L_14 = m460(NULL, p0, &m460_MI);
		t4  L_15 = m341(NULL, (3.0f), p1, &m341_MI);
		t4  L_16 = m347(NULL, L_14, L_15, &m347_MI);
		t4  L_17 = m341(NULL, (3.0f), p2, &m341_MI);
		t4  L_18 = m337(NULL, L_16, L_17, &m337_MI);
		t4  L_19 = m347(NULL, L_18, p3, &m347_MI);
		t4  L_20 = m343(NULL, L_19, p4, &m343_MI);
		t4  L_21 = m343(NULL, L_20, p4, &m343_MI);
		t4  L_22 = m343(NULL, L_21, p4, &m343_MI);
		t4  L_23 = m347(NULL, L_13, L_22, &m347_MI);
		t4  L_24 = m341(NULL, (0.5f), L_23, &m341_MI);
		return L_24;
	}
}
extern MethodInfo m319_MI;
 void m319 (t115 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m319_MI);
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	t2 * V_2 = {0};
	t2 * V_3 = {0};
	t4  V_4 = {0};
	t4  V_5 = {0};
	t4  V_6 = {0};
	{
		t91* L_0 = m314(__this, &m314_MI);
		NullCheck(L_0);
		__this->f5 = ((t118*)SZArrayNew(InitializedTypeInfo(&t118_TI), ((int32_t)((((int32_t)(((t122 *)L_0)->max_length)))+1))));
		t91* L_1 = m314(__this, &m314_MI);
		NullCheck(L_1);
		__this->f6 = ((t119*)SZArrayNew(InitializedTypeInfo(&t119_TI), ((int32_t)((((int32_t)(((t122 *)L_1)->max_length)))+1))));
		V_0 = (0.0f);
		V_1 = 0;
		goto IL_00ce;
	}

IL_0037:
	{
		t91* L_2 = m314(__this, &m314_MI);
		t91* L_3 = m314(__this, &m314_MI);
		NullCheck(L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)(V_1%(((int32_t)(((t122 *)L_3)->max_length))))));
		V_2 = (*(t2 **)(t2 **)SZArrayLdElema(L_2, ((int32_t)(V_1%(((int32_t)(((t122 *)L_3)->max_length)))))));
		t91* L_4 = m314(__this, &m314_MI);
		t91* L_5 = m314(__this, &m314_MI);
		NullCheck(L_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, ((int32_t)(((int32_t)(V_1+1))%(((int32_t)(((t122 *)L_5)->max_length))))));
		V_3 = (*(t2 **)(t2 **)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_1+1))%(((int32_t)(((t122 *)L_5)->max_length)))))));
		bool L_6 = m371(NULL, V_2, (t60 *)NULL, &m371_MI);
		if (!L_6)
		{
			goto IL_00ca;
		}
	}
	{
		bool L_7 = m371(NULL, V_3, (t60 *)NULL, &m371_MI);
		if (!L_7)
		{
			goto IL_00ca;
		}
	}
	{
		NullCheck(V_2);
		t4  L_8 = m335(V_2, &m335_MI);
		V_4 = L_8;
		NullCheck(V_3);
		t4  L_9 = m335(V_3, &m335_MI);
		V_5 = L_9;
		t118* L_10 = (__this->f5);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_1);
		t91* L_11 = m314(__this, &m314_MI);
		t91* L_12 = m314(__this, &m314_MI);
		NullCheck(L_12);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, ((int32_t)(V_1%(((int32_t)(((t122 *)L_12)->max_length))))));
		NullCheck((*(t2 **)(t2 **)SZArrayLdElema(L_11, ((int32_t)(V_1%(((int32_t)(((t122 *)L_12)->max_length))))))));
		t4  L_13 = m335((*(t2 **)(t2 **)SZArrayLdElema(L_11, ((int32_t)(V_1%(((int32_t)(((t122 *)L_12)->max_length))))))), &m335_MI);
		*((t4 *)(t4 *)SZArrayLdElema(L_10, V_1)) = L_13;
		t119* L_14 = (__this->f6);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, V_1);
		*((float*)(float*)SZArrayLdElema(L_14, V_1)) = (float)V_0;
		t4  L_15 = m337(NULL, V_4, V_5, &m337_MI);
		V_6 = L_15;
		float L_16 = m420((&V_6), &m420_MI);
		V_0 = ((float)(V_0+L_16));
	}

IL_00ca:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_00ce:
	{
		t118* L_17 = (__this->f5);
		NullCheck(L_17);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t122 *)L_17)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		return;
	}
}
extern MethodInfo m320_MI;
 void m320 (t115 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m320_MI);
	{
		m322(__this, 0, &m322_MI);
		return;
	}
}
extern MethodInfo m321_MI;
 void m321 (t115 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m321_MI);
	{
		m322(__this, 1, &m322_MI);
		return;
	}
}
extern MethodInfo m322_MI;
 void m322 (t115 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m322_MI);
	t4  V_0 = {0};
	float V_1 = 0.0f;
	t4  V_2 = {0};
	int32_t V_3 = 0;
	t4  V_4 = {0};
	t148  G_B4_0 = {0};
	{
		t114 * L_0 = (__this->f2);
		NullCheck(L_0);
		L_0->f0 = __this;
		t91* L_1 = m314(__this, &m314_MI);
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((t122 *)L_1)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0120;
		}
	}
	{
		t91* L_2 = m314(__this, &m314_MI);
		NullCheck(L_2);
		__this->f4 = (((int32_t)(((t122 *)L_2)->max_length)));
		m319(__this, &m319_MI);
		t119* L_3 = (__this->f6);
		t119* L_4 = (__this->f6);
		NullCheck(L_4);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((((int32_t)(((t122 *)L_4)->max_length)))-1)));
		m313(__this, (*(float*)(float*)SZArrayLdElema(L_3, ((int32_t)((((int32_t)(((t122 *)L_4)->max_length)))-1)))), &m313_MI);
		if (!p0)
		{
			goto IL_0055;
		}
	}
	{
		t148  L_5 = m629(NULL, &m629_MI);
		G_B4_0 = L_5;
		goto IL_006e;
	}

IL_0055:
	{
		t148  L_6 = {0};
		m630(&L_6, (1.0f), (1.0f), (0.0f), (0.5f), &m630_MI);
		G_B4_0 = L_6;
	}

IL_006e:
	{
		m631(NULL, G_B4_0, &m631_MI);
		t91* L_7 = m314(__this, &m314_MI);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		NullCheck((*(t2 **)(t2 **)SZArrayLdElema(L_7, 0)));
		t4  L_8 = m335((*(t2 **)(t2 **)SZArrayLdElema(L_7, 0)), &m335_MI);
		V_0 = L_8;
		bool L_9 = (__this->f3);
		if (!L_9)
		{
			goto IL_00e2;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_00be;
	}

IL_0097:
	{
		t4  L_10 = m317(__this, ((float)(V_1+(1.0f))), &m317_MI);
		V_2 = L_10;
		m632(NULL, V_0, V_2, &m632_MI);
		V_0 = V_2;
		float L_11 = m312(__this, &m312_MI);
		float L_12 = (__this->f7);
		V_1 = ((float)(V_1+((float)(L_11/L_12))));
	}

IL_00be:
	{
		float L_13 = m312(__this, &m312_MI);
		if ((((float)V_1) < ((float)L_13)))
		{
			goto IL_0097;
		}
	}
	{
		t91* L_14 = m314(__this, &m314_MI);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		NullCheck((*(t2 **)(t2 **)SZArrayLdElema(L_14, 0)));
		t4  L_15 = m335((*(t2 **)(t2 **)SZArrayLdElema(L_14, 0)), &m335_MI);
		m632(NULL, V_0, L_15, &m632_MI);
		goto IL_0120;
	}

IL_00e2:
	{
		V_3 = 0;
		goto IL_0112;
	}

IL_00e9:
	{
		t91* L_16 = m314(__this, &m314_MI);
		t91* L_17 = m314(__this, &m314_MI);
		NullCheck(L_17);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)(((int32_t)(V_3+1))%(((int32_t)(((t122 *)L_17)->max_length))))));
		NullCheck((*(t2 **)(t2 **)SZArrayLdElema(L_16, ((int32_t)(((int32_t)(V_3+1))%(((int32_t)(((t122 *)L_17)->max_length))))))));
		t4  L_18 = m335((*(t2 **)(t2 **)SZArrayLdElema(L_16, ((int32_t)(((int32_t)(V_3+1))%(((int32_t)(((t122 *)L_17)->max_length))))))), &m335_MI);
		V_4 = L_18;
		m632(NULL, V_0, V_4, &m632_MI);
		V_0 = V_4;
		V_3 = ((int32_t)(V_3+1));
	}

IL_0112:
	{
		t91* L_19 = m314(__this, &m314_MI);
		NullCheck(L_19);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t122 *)L_19)->max_length))))))
		{
			goto IL_00e9;
		}
	}

IL_0120:
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.WaypointCircuit
extern Il2CppType t114_0_0_6;
FieldInfo t115_f2_FieldInfo = 
{
	"waypointList", &t114_0_0_6, &t115_TI, offsetof(t115, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
extern CustomAttributesCache t115__CustomAttributeCache_smoothRoute;
FieldInfo t115_f3_FieldInfo = 
{
	"smoothRoute", &t125_0_0_1, &t115_TI, offsetof(t115, f3), &t115__CustomAttributeCache_smoothRoute};
extern Il2CppType t134_0_0_1;
FieldInfo t115_f4_FieldInfo = 
{
	"numPoints", &t134_0_0_1, &t115_TI, offsetof(t115, f4), &EmptyCustomAttributesCache};
extern Il2CppType t118_0_0_1;
FieldInfo t115_f5_FieldInfo = 
{
	"points", &t118_0_0_1, &t115_TI, offsetof(t115, f5), &EmptyCustomAttributesCache};
extern Il2CppType t119_0_0_1;
FieldInfo t115_f6_FieldInfo = 
{
	"distances", &t119_0_0_1, &t115_TI, offsetof(t115, f6), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t115_f7_FieldInfo = 
{
	"editorVisualisationSubsteps", &t124_0_0_6, &t115_TI, offsetof(t115, f7), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t115_f8_FieldInfo = 
{
	"p0n", &t134_0_0_1, &t115_TI, offsetof(t115, f8), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t115_f9_FieldInfo = 
{
	"p1n", &t134_0_0_1, &t115_TI, offsetof(t115, f9), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t115_f10_FieldInfo = 
{
	"p2n", &t134_0_0_1, &t115_TI, offsetof(t115, f10), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t115_f11_FieldInfo = 
{
	"p3n", &t134_0_0_1, &t115_TI, offsetof(t115, f11), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t115_f12_FieldInfo = 
{
	"i", &t124_0_0_1, &t115_TI, offsetof(t115, f12), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t115_f13_FieldInfo = 
{
	"P0", &t4_0_0_1, &t115_TI, offsetof(t115, f13), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t115_f14_FieldInfo = 
{
	"P1", &t4_0_0_1, &t115_TI, offsetof(t115, f14), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t115_f15_FieldInfo = 
{
	"P2", &t4_0_0_1, &t115_TI, offsetof(t115, f15), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t115_f16_FieldInfo = 
{
	"P3", &t4_0_0_1, &t115_TI, offsetof(t115, f16), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t115__CustomAttributeCache_U3CLengthU3Ek__BackingField;
FieldInfo t115_f17_FieldInfo = 
{
	"<Length>k__BackingField", &t124_0_0_1, &t115_TI, offsetof(t115, f17), &t115__CustomAttributeCache_U3CLengthU3Ek__BackingField};
static FieldInfo* t115_FIs[] =
{
	&t115_f2_FieldInfo,
	&t115_f3_FieldInfo,
	&t115_f4_FieldInfo,
	&t115_f5_FieldInfo,
	&t115_f6_FieldInfo,
	&t115_f7_FieldInfo,
	&t115_f8_FieldInfo,
	&t115_f9_FieldInfo,
	&t115_f10_FieldInfo,
	&t115_f11_FieldInfo,
	&t115_f12_FieldInfo,
	&t115_f13_FieldInfo,
	&t115_f14_FieldInfo,
	&t115_f15_FieldInfo,
	&t115_f16_FieldInfo,
	&t115_f17_FieldInfo,
	NULL
};
extern MethodInfo m312_MI;
extern MethodInfo m313_MI;
static PropertyInfo t115____Length_PropertyInfo = 
{
	&t115_TI, "Length", &m312_MI, &m313_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m314_MI;
static PropertyInfo t115____Waypoints_PropertyInfo = 
{
	&t115_TI, "Waypoints", &m314_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t115_PIs[] =
{
	&t115____Length_PropertyInfo,
	&t115____Waypoints_PropertyInfo,
	NULL
};
extern TypeInfo t115_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m311_MI = 
{
	".ctor", (methodPointerType)&m311, &t115_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 322, NULL, (methodPointerType)NULL};
extern TypeInfo t115_TI;
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t115__CustomAttributeCache_m312;
MethodInfo m312_MI = 
{
	"get_Length", (methodPointerType)&m312, &t115_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &t115__CustomAttributeCache_m312, 2182, 0, 255, 0, false, false, 323, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t115_m313_ParameterInfos[] = 
{
	{"value", 0, 134217861, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t115_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t115__CustomAttributeCache_m313;
MethodInfo m313_MI = 
{
	"set_Length", (methodPointerType)&m313, &t115_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t115_m313_ParameterInfos, &t115__CustomAttributeCache_m313, 2177, 0, 255, 1, false, false, 324, NULL, (methodPointerType)NULL};
extern TypeInfo t115_TI;
extern Il2CppType t91_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m314_MI = 
{
	"get_Waypoints", (methodPointerType)&m314, &t115_TI, &t91_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 325, NULL, (methodPointerType)NULL};
extern TypeInfo t115_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m315_MI = 
{
	"Awake", (methodPointerType)&m315, &t115_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 326, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t115_m316_ParameterInfos[] = 
{
	{"dist", 0, 134217862, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t115_TI;
extern Il2CppType t116_0_0_0;
extern void* RuntimeInvoker_t116_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m316_MI = 
{
	"GetRoutePoint", (methodPointerType)&m316, &t115_TI, &t116_0_0_0, RuntimeInvoker_t116_t124, t115_m316_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 327, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t115_m317_ParameterInfos[] = 
{
	{"dist", 0, 134217863, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t115_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m317_MI = 
{
	"GetRoutePosition", (methodPointerType)&m317, &t115_TI, &t4_0_0_0, RuntimeInvoker_t4_t124, t115_m317_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 328, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t115_m318_ParameterInfos[] = 
{
	{"p0", 0, 134217864, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"p1", 1, 134217865, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"p2", 2, 134217866, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"p3", 3, 134217867, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"i", 4, 134217868, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t115_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4_t4_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m318_MI = 
{
	"CatmullRom", (methodPointerType)&m318, &t115_TI, &t4_0_0_0, RuntimeInvoker_t4_t4_t4_t4_t4_t124, t115_m318_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 5, false, false, 329, NULL, (methodPointerType)NULL};
extern TypeInfo t115_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m319_MI = 
{
	"CachePositionsAndDistances", (methodPointerType)&m319, &t115_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 330, NULL, (methodPointerType)NULL};
extern TypeInfo t115_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m320_MI = 
{
	"OnDrawGizmos", (methodPointerType)&m320, &t115_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 331, NULL, (methodPointerType)NULL};
extern TypeInfo t115_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m321_MI = 
{
	"OnDrawGizmosSelected", (methodPointerType)&m321, &t115_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 332, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t115_m322_ParameterInfos[] = 
{
	{"selected", 0, 134217869, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t115_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m322_MI = 
{
	"DrawGizmos", (methodPointerType)&m322, &t115_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t115_m322_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 333, NULL, (methodPointerType)NULL};
static MethodInfo* t115_MIs[] =
{
	&m311_MI,
	&m312_MI,
	&m313_MI,
	&m314_MI,
	&m315_MI,
	&m316_MI,
	&m317_MI,
	&m318_MI,
	&m319_MI,
	&m320_MI,
	&m321_MI,
	&m322_MI,
	NULL
};
extern TypeInfo t114_TI;
extern TypeInfo t116_TI;
static TypeInfo* t115_TI__nestedTypes[3] =
{
	&t114_TI,
	&t116_TI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t115_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t115_CustomAttributesCacheGenerator_smoothRoute(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t115_CustomAttributesCacheGenerator_U3CLengthU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t115_CustomAttributesCacheGenerator_m312(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t115_CustomAttributesCacheGenerator_m313(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t115__CustomAttributeCache_smoothRoute = {
1,
NULL,
&t115_CustomAttributesCacheGenerator_smoothRoute
};
CustomAttributesCache t115__CustomAttributeCache_U3CLengthU3Ek__BackingField = {
1,
NULL,
&t115_CustomAttributesCacheGenerator_U3CLengthU3Ek__BackingField
};
CustomAttributesCache t115__CustomAttributeCache_m312 = {
1,
NULL,
&t115_CustomAttributesCacheGenerator_m312
};
CustomAttributesCache t115__CustomAttributeCache_m313 = {
1,
NULL,
&t115_CustomAttributesCacheGenerator_m313
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t115_0_0_0;
extern Il2CppType t115_1_0_0;
extern TypeInfo t3_TI;
struct t115;
extern TypeInfo t115_TI;
extern CustomAttributesCache t115__CustomAttributeCache_smoothRoute;
extern CustomAttributesCache t115__CustomAttributeCache_U3CLengthU3Ek__BackingField;
extern CustomAttributesCache t115__CustomAttributeCache_m312;
extern CustomAttributesCache t115__CustomAttributeCache_m313;
TypeInfo t115_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "WaypointCircuit", "UnityStandardAssets.Utility", t115_MIs, t115_PIs, t115_FIs, NULL, &t3_TI, t115_TI__nestedTypes, NULL, &t115_TI, NULL, t115_VT, &EmptyCustomAttributesCache, &t115_TI, &t115_0_0_0, &t115_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t115), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 12, 2, 16, 0, 2, 4, 0, 0};
#include "t120.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t120_TI;
#include "t120MD.h"



// Metadata Definition UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
extern Il2CppType t134_0_0_1542;
FieldInfo t120_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t120_TI, offsetof(t120, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t120_0_0_32854;
FieldInfo t120_f2_FieldInfo = 
{
	"SmoothAlongRoute", &t120_0_0_32854, &t120_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t120_0_0_32854;
FieldInfo t120_f3_FieldInfo = 
{
	"PointToPoint", &t120_0_0_32854, &t120_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t120_FIs[] =
{
	&t120_f1_FieldInfo,
	&t120_f2_FieldInfo,
	&t120_f3_FieldInfo,
	NULL
};
static const int32_t t120_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t120_f2_DefaultValue = 
{
	&t120_f2_FieldInfo, { (char*)&t120_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t120_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t120_f3_DefaultValue = 
{
	&t120_f3_FieldInfo, { (char*)&t120_f3_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t120_FDVs[] = 
{
	&t120_f2_DefaultValue,
	&t120_f3_DefaultValue,
	NULL
};
static MethodInfo* t120_MIs[] =
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
static MethodInfo* t120_VT[] =
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
static Il2CppInterfaceOffsetPair t120_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t120_0_0_0;
extern Il2CppType t120_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern TypeInfo t121_TI;
TypeInfo t120_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "ProgressStyle", "", t120_MIs, NULL, t120_FIs, NULL, &t15_TI, NULL, &t121_TI, &t134_TI, NULL, t120_VT, &EmptyCustomAttributesCache, &t134_TI, &t120_0_0_0, &t120_1_0_0, t120_IOs, NULL, NULL, t120_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t120)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 258, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t121.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t121_TI;
#include "t121MD.h"

extern TypeInfo t121_TI;
extern TypeInfo t27_TI;
extern TypeInfo t62_TI;
extern TypeInfo t126_TI;
extern TypeInfo t116_TI;
extern MethodInfo m334_MI;
extern MethodInfo m411_MI;
extern MethodInfo m609_MI;
extern MethodInfo m610_MI;
extern MethodInfo m573_MI;
extern MethodInfo m356_MI;
extern MethodInfo m331_MI;
extern MethodInfo m314_MI;
extern MethodInfo m335_MI;
extern MethodInfo m350_MI;
extern MethodInfo m430_MI;
extern MethodInfo m432_MI;
extern MethodInfo m345_MI;
extern MethodInfo m336_MI;
extern MethodInfo m337_MI;
extern MethodInfo m420_MI;
extern MethodInfo m357_MI;
extern MethodInfo m316_MI;
extern MethodInfo m633_MI;
extern MethodInfo m329_MI;
extern MethodInfo m328_MI;
extern MethodInfo m634_MI;
extern MethodInfo m418_MI;
extern MethodInfo m635_MI;
extern MethodInfo m631_MI;
extern MethodInfo m632_MI;
extern MethodInfo m317_MI;
extern MethodInfo m636_MI;
extern MethodInfo m629_MI;
extern MethodInfo m416_MI;
extern MethodInfo m347_MI;


extern MethodInfo m323_MI;
 void m323 (t121 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m323_MI);
	{
		__this->f3 = (5.0f);
		__this->f4 = (0.1f);
		__this->f5 = (10.0f);
		__this->f6 = (0.2f);
		__this->f8 = (4.0f);
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m324_MI;
 t116  m324 (t121 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m324_MI);
	{
		t116  L_0 = (__this->f14);
		return L_0;
	}
}
extern MethodInfo m325_MI;
 void m325 (t121 * __this, t116  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m325_MI);
	{
		__this->f14 = p0;
		return;
	}
}
extern MethodInfo m326_MI;
 t116  m326 (t121 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m326_MI);
	{
		t116  L_0 = (__this->f15);
		return L_0;
	}
}
extern MethodInfo m327_MI;
 void m327 (t121 * __this, t116  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m327_MI);
	{
		__this->f15 = p0;
		return;
	}
}
extern MethodInfo m328_MI;
 t116  m328 (t121 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m328_MI);
	{
		t116  L_0 = (__this->f16);
		return L_0;
	}
}
extern MethodInfo m329_MI;
 void m329 (t121 * __this, t116  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m329_MI);
	{
		__this->f16 = p0;
		return;
	}
}
extern MethodInfo m330_MI;
 void m330 (t121 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m330_MI);
	{
		t2 * L_0 = (__this->f9);
		bool L_1 = m411(NULL, L_0, (t60 *)NULL, &m411_MI);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		t27* L_2 = m609(__this, &m609_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_3 = m610(NULL, L_2, (t27*) &_stringLiteral29, &m610_MI);
		t62 * L_4 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m573(L_4, L_3, &m573_MI);
		NullCheck(L_4);
		t2 * L_5 = m356(L_4, &m356_MI);
		__this->f9 = L_5;
	}

IL_0031:
	{
		m331(__this, &m331_MI);
		return;
	}
}
extern MethodInfo m331_MI;
 void m331 (t121 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m331_MI);
	{
		__this->f10 = (0.0f);
		__this->f11 = 0;
		int32_t L_0 = (__this->f7);
		if ((((uint32_t)L_0) != ((uint32_t)1)))
		{
			goto IL_0062;
		}
	}
	{
		t2 * L_1 = (__this->f9);
		t115 * L_2 = (__this->f2);
		NullCheck(L_2);
		t91* L_3 = m314(L_2, &m314_MI);
		int32_t L_4 = (__this->f11);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		NullCheck((*(t2 **)(t2 **)SZArrayLdElema(L_3, L_4)));
		t4  L_5 = m335((*(t2 **)(t2 **)SZArrayLdElema(L_3, L_4)), &m335_MI);
		NullCheck(L_1);
		m350(L_1, L_5, &m350_MI);
		t2 * L_6 = (__this->f9);
		t115 * L_7 = (__this->f2);
		NullCheck(L_7);
		t91* L_8 = m314(L_7, &m314_MI);
		int32_t L_9 = (__this->f11);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		NullCheck((*(t2 **)(t2 **)SZArrayLdElema(L_8, L_9)));
		t21  L_10 = m430((*(t2 **)(t2 **)SZArrayLdElema(L_8, L_9)), &m430_MI);
		NullCheck(L_6);
		m432(L_6, L_10, &m432_MI);
	}

IL_0062:
	{
		return;
	}
}
extern MethodInfo m332_MI;
 void m332 (t121 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m332_MI);
	t4  V_0 = {0};
	t4  V_1 = {0};
	t4  V_2 = {0};
	t4  V_3 = {0};
	t116  V_4 = {0};
	t116  V_5 = {0};
	t116  V_6 = {0};
	t116  V_7 = {0};
	t116  V_8 = {0};
	t116  V_9 = {0};
	{
		int32_t L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_0153;
		}
	}
	{
		float L_1 = m345(NULL, &m345_MI);
		if ((((float)L_1) <= ((float)(0.0f))))
		{
			goto IL_0054;
		}
	}
	{
		float L_2 = (__this->f13);
		t4  L_3 = (__this->f12);
		t2 * L_4 = m336(__this, &m336_MI);
		NullCheck(L_4);
		t4  L_5 = m335(L_4, &m335_MI);
		t4  L_6 = m337(NULL, L_3, L_5, &m337_MI);
		V_3 = L_6;
		float L_7 = m420((&V_3), &m420_MI);
		float L_8 = m345(NULL, &m345_MI);
		float L_9 = m345(NULL, &m345_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_10 = m357(NULL, L_2, ((float)(L_7/L_8)), L_9, &m357_MI);
		__this->f13 = L_10;
	}

IL_0054:
	{
		t2 * L_11 = (__this->f9);
		t115 * L_12 = (__this->f2);
		float L_13 = (__this->f10);
		float L_14 = (__this->f3);
		float L_15 = (__this->f4);
		float L_16 = (__this->f13);
		NullCheck(L_12);
		t116  L_17 = m316(L_12, ((float)(((float)(L_13+L_14))+((float)(L_15*L_16)))), &m316_MI);
		V_4 = L_17;
		NullCheck((&V_4));
		t4  L_18 = ((&V_4)->f0);
		NullCheck(L_11);
		m350(L_11, L_18, &m350_MI);
		t2 * L_19 = (__this->f9);
		t115 * L_20 = (__this->f2);
		float L_21 = (__this->f10);
		float L_22 = (__this->f5);
		float L_23 = (__this->f6);
		float L_24 = (__this->f13);
		NullCheck(L_20);
		t116  L_25 = m316(L_20, ((float)(((float)(L_21+L_22))+((float)(L_23*L_24)))), &m316_MI);
		V_5 = L_25;
		NullCheck((&V_5));
		t4  L_26 = ((&V_5)->f1);
		t21  L_27 = m633(NULL, L_26, &m633_MI);
		NullCheck(L_19);
		m432(L_19, L_27, &m432_MI);
		t115 * L_28 = (__this->f2);
		float L_29 = (__this->f10);
		NullCheck(L_28);
		t116  L_30 = m316(L_28, L_29, &m316_MI);
		m329(__this, L_30, &m329_MI);
		t116  L_31 = m328(__this, &m328_MI);
		V_6 = L_31;
		NullCheck((&V_6));
		t4  L_32 = ((&V_6)->f0);
		t2 * L_33 = m336(__this, &m336_MI);
		NullCheck(L_33);
		t4  L_34 = m335(L_33, &m335_MI);
		t4  L_35 = m337(NULL, L_32, L_34, &m337_MI);
		V_0 = L_35;
		t116  L_36 = m328(__this, &m328_MI);
		V_7 = L_36;
		NullCheck((&V_7));
		t4  L_37 = ((&V_7)->f1);
		float L_38 = m634(NULL, V_0, L_37, &m634_MI);
		if ((((float)L_38) >= ((float)(0.0f))))
		{
			goto IL_013d;
		}
	}
	{
		float L_39 = (__this->f10);
		float L_40 = m420((&V_0), &m420_MI);
		__this->f10 = ((float)(L_39+((float)(L_40*(0.5f)))));
	}

IL_013d:
	{
		t2 * L_41 = m336(__this, &m336_MI);
		NullCheck(L_41);
		t4  L_42 = m335(L_41, &m335_MI);
		__this->f12 = L_42;
		goto IL_025c;
	}

IL_0153:
	{
		t2 * L_43 = (__this->f9);
		NullCheck(L_43);
		t4  L_44 = m335(L_43, &m335_MI);
		t2 * L_45 = m336(__this, &m336_MI);
		NullCheck(L_45);
		t4  L_46 = m335(L_45, &m335_MI);
		t4  L_47 = m337(NULL, L_44, L_46, &m337_MI);
		V_1 = L_47;
		float L_48 = m420((&V_1), &m420_MI);
		float L_49 = (__this->f8);
		if ((((float)L_48) >= ((float)L_49)))
		{
			goto IL_019d;
		}
	}
	{
		int32_t L_50 = (__this->f11);
		t115 * L_51 = (__this->f2);
		NullCheck(L_51);
		t91* L_52 = m314(L_51, &m314_MI);
		NullCheck(L_52);
		__this->f11 = ((int32_t)(((int32_t)(L_50+1))%(((int32_t)(((t122 *)L_52)->max_length)))));
	}

IL_019d:
	{
		t2 * L_53 = (__this->f9);
		t115 * L_54 = (__this->f2);
		NullCheck(L_54);
		t91* L_55 = m314(L_54, &m314_MI);
		int32_t L_56 = (__this->f11);
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		NullCheck((*(t2 **)(t2 **)SZArrayLdElema(L_55, L_56)));
		t4  L_57 = m335((*(t2 **)(t2 **)SZArrayLdElema(L_55, L_56)), &m335_MI);
		NullCheck(L_53);
		m350(L_53, L_57, &m350_MI);
		t2 * L_58 = (__this->f9);
		t115 * L_59 = (__this->f2);
		NullCheck(L_59);
		t91* L_60 = m314(L_59, &m314_MI);
		int32_t L_61 = (__this->f11);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		NullCheck((*(t2 **)(t2 **)SZArrayLdElema(L_60, L_61)));
		t21  L_62 = m430((*(t2 **)(t2 **)SZArrayLdElema(L_60, L_61)), &m430_MI);
		NullCheck(L_58);
		m432(L_58, L_62, &m432_MI);
		t115 * L_63 = (__this->f2);
		float L_64 = (__this->f10);
		NullCheck(L_63);
		t116  L_65 = m316(L_63, L_64, &m316_MI);
		m329(__this, L_65, &m329_MI);
		t116  L_66 = m328(__this, &m328_MI);
		V_8 = L_66;
		NullCheck((&V_8));
		t4  L_67 = ((&V_8)->f0);
		t2 * L_68 = m336(__this, &m336_MI);
		NullCheck(L_68);
		t4  L_69 = m335(L_68, &m335_MI);
		t4  L_70 = m337(NULL, L_67, L_69, &m337_MI);
		V_2 = L_70;
		t116  L_71 = m328(__this, &m328_MI);
		V_9 = L_71;
		NullCheck((&V_9));
		t4  L_72 = ((&V_9)->f1);
		float L_73 = m634(NULL, V_2, L_72, &m634_MI);
		if ((((float)L_73) >= ((float)(0.0f))))
		{
			goto IL_024b;
		}
	}
	{
		float L_74 = (__this->f10);
		float L_75 = m420((&V_2), &m420_MI);
		__this->f10 = ((float)(L_74+L_75));
	}

IL_024b:
	{
		t2 * L_76 = m336(__this, &m336_MI);
		NullCheck(L_76);
		t4  L_77 = m335(L_76, &m335_MI);
		__this->f12 = L_77;
	}

IL_025c:
	{
		return;
	}
}
extern MethodInfo m333_MI;
 void m333 (t121 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m333_MI);
	{
		bool L_0 = m418(NULL, &m418_MI);
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		t148  L_1 = m635(NULL, &m635_MI);
		m631(NULL, L_1, &m631_MI);
		t2 * L_2 = m336(__this, &m336_MI);
		NullCheck(L_2);
		t4  L_3 = m335(L_2, &m335_MI);
		t2 * L_4 = (__this->f9);
		NullCheck(L_4);
		t4  L_5 = m335(L_4, &m335_MI);
		m632(NULL, L_3, L_5, &m632_MI);
		t115 * L_6 = (__this->f2);
		float L_7 = (__this->f10);
		NullCheck(L_6);
		t4  L_8 = m317(L_6, L_7, &m317_MI);
		m636(NULL, L_8, (1.0f), &m636_MI);
		t148  L_9 = m629(NULL, &m629_MI);
		m631(NULL, L_9, &m631_MI);
		t2 * L_10 = (__this->f9);
		NullCheck(L_10);
		t4  L_11 = m335(L_10, &m335_MI);
		t2 * L_12 = (__this->f9);
		NullCheck(L_12);
		t4  L_13 = m335(L_12, &m335_MI);
		t2 * L_14 = (__this->f9);
		NullCheck(L_14);
		t4  L_15 = m416(L_14, &m416_MI);
		t4  L_16 = m347(NULL, L_13, L_15, &m347_MI);
		m632(NULL, L_11, L_16, &m632_MI);
	}

IL_007f:
	{
		return;
	}
}
// Metadata Definition UnityStandardAssets.Utility.WaypointProgressTracker
extern Il2CppType t115_0_0_1;
extern CustomAttributesCache t121__CustomAttributeCache_circuit;
FieldInfo t121_f2_FieldInfo = 
{
	"circuit", &t115_0_0_1, &t121_TI, offsetof(t121, f2), &t121__CustomAttributeCache_circuit};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t121__CustomAttributeCache_lookAheadForTargetOffset;
FieldInfo t121_f3_FieldInfo = 
{
	"lookAheadForTargetOffset", &t124_0_0_1, &t121_TI, offsetof(t121, f3), &t121__CustomAttributeCache_lookAheadForTargetOffset};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t121__CustomAttributeCache_lookAheadForTargetFactor;
FieldInfo t121_f4_FieldInfo = 
{
	"lookAheadForTargetFactor", &t124_0_0_1, &t121_TI, offsetof(t121, f4), &t121__CustomAttributeCache_lookAheadForTargetFactor};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t121__CustomAttributeCache_lookAheadForSpeedOffset;
FieldInfo t121_f5_FieldInfo = 
{
	"lookAheadForSpeedOffset", &t124_0_0_1, &t121_TI, offsetof(t121, f5), &t121__CustomAttributeCache_lookAheadForSpeedOffset};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t121__CustomAttributeCache_lookAheadForSpeedFactor;
FieldInfo t121_f6_FieldInfo = 
{
	"lookAheadForSpeedFactor", &t124_0_0_1, &t121_TI, offsetof(t121, f6), &t121__CustomAttributeCache_lookAheadForSpeedFactor};
extern Il2CppType t120_0_0_1;
extern CustomAttributesCache t121__CustomAttributeCache_progressStyle;
FieldInfo t121_f7_FieldInfo = 
{
	"progressStyle", &t120_0_0_1, &t121_TI, offsetof(t121, f7), &t121__CustomAttributeCache_progressStyle};
extern Il2CppType t124_0_0_1;
extern CustomAttributesCache t121__CustomAttributeCache_pointToPointThreshold;
FieldInfo t121_f8_FieldInfo = 
{
	"pointToPointThreshold", &t124_0_0_1, &t121_TI, offsetof(t121, f8), &t121__CustomAttributeCache_pointToPointThreshold};
extern Il2CppType t2_0_0_6;
FieldInfo t121_f9_FieldInfo = 
{
	"target", &t2_0_0_6, &t121_TI, offsetof(t121, f9), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t121_f10_FieldInfo = 
{
	"progressDistance", &t124_0_0_1, &t121_TI, offsetof(t121, f10), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t121_f11_FieldInfo = 
{
	"progressNum", &t134_0_0_1, &t121_TI, offsetof(t121, f11), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t121_f12_FieldInfo = 
{
	"lastPosition", &t4_0_0_1, &t121_TI, offsetof(t121, f12), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t121_f13_FieldInfo = 
{
	"speed", &t124_0_0_1, &t121_TI, offsetof(t121, f13), &EmptyCustomAttributesCache};
extern Il2CppType t116_0_0_1;
extern CustomAttributesCache t121__CustomAttributeCache_U3CtargetPointU3Ek__BackingField;
FieldInfo t121_f14_FieldInfo = 
{
	"<targetPoint>k__BackingField", &t116_0_0_1, &t121_TI, offsetof(t121, f14), &t121__CustomAttributeCache_U3CtargetPointU3Ek__BackingField};
extern Il2CppType t116_0_0_1;
extern CustomAttributesCache t121__CustomAttributeCache_U3CspeedPointU3Ek__BackingField;
FieldInfo t121_f15_FieldInfo = 
{
	"<speedPoint>k__BackingField", &t116_0_0_1, &t121_TI, offsetof(t121, f15), &t121__CustomAttributeCache_U3CspeedPointU3Ek__BackingField};
extern Il2CppType t116_0_0_1;
extern CustomAttributesCache t121__CustomAttributeCache_U3CprogressPointU3Ek__BackingField;
FieldInfo t121_f16_FieldInfo = 
{
	"<progressPoint>k__BackingField", &t116_0_0_1, &t121_TI, offsetof(t121, f16), &t121__CustomAttributeCache_U3CprogressPointU3Ek__BackingField};
static FieldInfo* t121_FIs[] =
{
	&t121_f2_FieldInfo,
	&t121_f3_FieldInfo,
	&t121_f4_FieldInfo,
	&t121_f5_FieldInfo,
	&t121_f6_FieldInfo,
	&t121_f7_FieldInfo,
	&t121_f8_FieldInfo,
	&t121_f9_FieldInfo,
	&t121_f10_FieldInfo,
	&t121_f11_FieldInfo,
	&t121_f12_FieldInfo,
	&t121_f13_FieldInfo,
	&t121_f14_FieldInfo,
	&t121_f15_FieldInfo,
	&t121_f16_FieldInfo,
	NULL
};
extern MethodInfo m324_MI;
extern MethodInfo m325_MI;
static PropertyInfo t121____targetPoint_PropertyInfo = 
{
	&t121_TI, "targetPoint", &m324_MI, &m325_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m326_MI;
extern MethodInfo m327_MI;
static PropertyInfo t121____speedPoint_PropertyInfo = 
{
	&t121_TI, "speedPoint", &m326_MI, &m327_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m328_MI;
extern MethodInfo m329_MI;
static PropertyInfo t121____progressPoint_PropertyInfo = 
{
	&t121_TI, "progressPoint", &m328_MI, &m329_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t121_PIs[] =
{
	&t121____targetPoint_PropertyInfo,
	&t121____speedPoint_PropertyInfo,
	&t121____progressPoint_PropertyInfo,
	NULL
};
extern TypeInfo t121_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m323_MI = 
{
	".ctor", (methodPointerType)&m323, &t121_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 336, NULL, (methodPointerType)NULL};
extern TypeInfo t121_TI;
extern Il2CppType t116_0_0_0;
extern void* RuntimeInvoker_t116 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t121__CustomAttributeCache_m324;
MethodInfo m324_MI = 
{
	"get_targetPoint", (methodPointerType)&m324, &t121_TI, &t116_0_0_0, RuntimeInvoker_t116, NULL, &t121__CustomAttributeCache_m324, 2182, 0, 255, 0, false, false, 337, NULL, (methodPointerType)NULL};
extern Il2CppType t116_0_0_0;
static ParameterInfo t121_m325_ParameterInfos[] = 
{
	{"value", 0, 134217872, &EmptyCustomAttributesCache, &t116_0_0_0},
};
extern TypeInfo t121_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t116 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t121__CustomAttributeCache_m325;
MethodInfo m325_MI = 
{
	"set_targetPoint", (methodPointerType)&m325, &t121_TI, &t123_0_0_0, RuntimeInvoker_t123_t116, t121_m325_ParameterInfos, &t121__CustomAttributeCache_m325, 2177, 0, 255, 1, false, false, 338, NULL, (methodPointerType)NULL};
extern TypeInfo t121_TI;
extern Il2CppType t116_0_0_0;
extern void* RuntimeInvoker_t116 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t121__CustomAttributeCache_m326;
MethodInfo m326_MI = 
{
	"get_speedPoint", (methodPointerType)&m326, &t121_TI, &t116_0_0_0, RuntimeInvoker_t116, NULL, &t121__CustomAttributeCache_m326, 2182, 0, 255, 0, false, false, 339, NULL, (methodPointerType)NULL};
extern Il2CppType t116_0_0_0;
static ParameterInfo t121_m327_ParameterInfos[] = 
{
	{"value", 0, 134217873, &EmptyCustomAttributesCache, &t116_0_0_0},
};
extern TypeInfo t121_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t116 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t121__CustomAttributeCache_m327;
MethodInfo m327_MI = 
{
	"set_speedPoint", (methodPointerType)&m327, &t121_TI, &t123_0_0_0, RuntimeInvoker_t123_t116, t121_m327_ParameterInfos, &t121__CustomAttributeCache_m327, 2177, 0, 255, 1, false, false, 340, NULL, (methodPointerType)NULL};
extern TypeInfo t121_TI;
extern Il2CppType t116_0_0_0;
extern void* RuntimeInvoker_t116 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t121__CustomAttributeCache_m328;
MethodInfo m328_MI = 
{
	"get_progressPoint", (methodPointerType)&m328, &t121_TI, &t116_0_0_0, RuntimeInvoker_t116, NULL, &t121__CustomAttributeCache_m328, 2182, 0, 255, 0, false, false, 341, NULL, (methodPointerType)NULL};
extern Il2CppType t116_0_0_0;
static ParameterInfo t121_m329_ParameterInfos[] = 
{
	{"value", 0, 134217874, &EmptyCustomAttributesCache, &t116_0_0_0},
};
extern TypeInfo t121_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t116 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t121__CustomAttributeCache_m329;
MethodInfo m329_MI = 
{
	"set_progressPoint", (methodPointerType)&m329, &t121_TI, &t123_0_0_0, RuntimeInvoker_t123_t116, t121_m329_ParameterInfos, &t121__CustomAttributeCache_m329, 2177, 0, 255, 1, false, false, 342, NULL, (methodPointerType)NULL};
extern TypeInfo t121_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m330_MI = 
{
	"Start", (methodPointerType)&m330, &t121_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 343, NULL, (methodPointerType)NULL};
extern TypeInfo t121_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m331_MI = 
{
	"Reset", (methodPointerType)&m331, &t121_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 344, NULL, (methodPointerType)NULL};
extern TypeInfo t121_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m332_MI = 
{
	"Update", (methodPointerType)&m332, &t121_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 345, NULL, (methodPointerType)NULL};
extern TypeInfo t121_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m333_MI = 
{
	"OnDrawGizmos", (methodPointerType)&m333, &t121_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 346, NULL, (methodPointerType)NULL};
static MethodInfo* t121_MIs[] =
{
	&m323_MI,
	&m324_MI,
	&m325_MI,
	&m326_MI,
	&m327_MI,
	&m328_MI,
	&m329_MI,
	&m330_MI,
	&m331_MI,
	&m332_MI,
	&m333_MI,
	NULL
};
extern TypeInfo t120_TI;
static TypeInfo* t121_TI__nestedTypes[2] =
{
	&t120_TI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t121_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t121_CustomAttributesCacheGenerator_circuit(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t121_CustomAttributesCacheGenerator_lookAheadForTargetOffset(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t121_CustomAttributesCacheGenerator_lookAheadForTargetFactor(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t121_CustomAttributesCacheGenerator_lookAheadForSpeedOffset(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t121_CustomAttributesCacheGenerator_lookAheadForSpeedFactor(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t121_CustomAttributesCacheGenerator_progressStyle(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t138_TI;
extern MethodInfo m383_MI;
void t121_CustomAttributesCacheGenerator_pointToPointThreshold(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t138 * tmp;
		tmp = (t138 *)il2cpp_codegen_object_new (&t138_TI);
		m383(tmp, &m383_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t121_CustomAttributesCacheGenerator_U3CtargetPointU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t121_CustomAttributesCacheGenerator_U3CspeedPointU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t121_CustomAttributesCacheGenerator_U3CprogressPointU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t121_CustomAttributesCacheGenerator_m324(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t121_CustomAttributesCacheGenerator_m325(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t121_CustomAttributesCacheGenerator_m326(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t121_CustomAttributesCacheGenerator_m327(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t121_CustomAttributesCacheGenerator_m328(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t121_CustomAttributesCacheGenerator_m329(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t121__CustomAttributeCache_circuit = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_circuit
};
CustomAttributesCache t121__CustomAttributeCache_lookAheadForTargetOffset = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_lookAheadForTargetOffset
};
CustomAttributesCache t121__CustomAttributeCache_lookAheadForTargetFactor = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_lookAheadForTargetFactor
};
CustomAttributesCache t121__CustomAttributeCache_lookAheadForSpeedOffset = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_lookAheadForSpeedOffset
};
CustomAttributesCache t121__CustomAttributeCache_lookAheadForSpeedFactor = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_lookAheadForSpeedFactor
};
CustomAttributesCache t121__CustomAttributeCache_progressStyle = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_progressStyle
};
CustomAttributesCache t121__CustomAttributeCache_pointToPointThreshold = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_pointToPointThreshold
};
CustomAttributesCache t121__CustomAttributeCache_U3CtargetPointU3Ek__BackingField = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_U3CtargetPointU3Ek__BackingField
};
CustomAttributesCache t121__CustomAttributeCache_U3CspeedPointU3Ek__BackingField = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_U3CspeedPointU3Ek__BackingField
};
CustomAttributesCache t121__CustomAttributeCache_U3CprogressPointU3Ek__BackingField = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_U3CprogressPointU3Ek__BackingField
};
CustomAttributesCache t121__CustomAttributeCache_m324 = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_m324
};
CustomAttributesCache t121__CustomAttributeCache_m325 = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_m325
};
CustomAttributesCache t121__CustomAttributeCache_m326 = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_m326
};
CustomAttributesCache t121__CustomAttributeCache_m327 = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_m327
};
CustomAttributesCache t121__CustomAttributeCache_m328 = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_m328
};
CustomAttributesCache t121__CustomAttributeCache_m329 = {
1,
NULL,
&t121_CustomAttributesCacheGenerator_m329
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern Il2CppType t121_0_0_0;
extern Il2CppType t121_1_0_0;
extern TypeInfo t3_TI;
struct t121;
extern TypeInfo t121_TI;
extern CustomAttributesCache t121__CustomAttributeCache_circuit;
extern CustomAttributesCache t121__CustomAttributeCache_lookAheadForTargetOffset;
extern CustomAttributesCache t121__CustomAttributeCache_lookAheadForTargetFactor;
extern CustomAttributesCache t121__CustomAttributeCache_lookAheadForSpeedOffset;
extern CustomAttributesCache t121__CustomAttributeCache_lookAheadForSpeedFactor;
extern CustomAttributesCache t121__CustomAttributeCache_progressStyle;
extern CustomAttributesCache t121__CustomAttributeCache_pointToPointThreshold;
extern CustomAttributesCache t121__CustomAttributeCache_U3CtargetPointU3Ek__BackingField;
extern CustomAttributesCache t121__CustomAttributeCache_U3CspeedPointU3Ek__BackingField;
extern CustomAttributesCache t121__CustomAttributeCache_U3CprogressPointU3Ek__BackingField;
extern CustomAttributesCache t121__CustomAttributeCache_m324;
extern CustomAttributesCache t121__CustomAttributeCache_m325;
extern CustomAttributesCache t121__CustomAttributeCache_m326;
extern CustomAttributesCache t121__CustomAttributeCache_m327;
extern CustomAttributesCache t121__CustomAttributeCache_m328;
extern CustomAttributesCache t121__CustomAttributeCache_m329;
TypeInfo t121_TI = 
{
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image, NULL, "WaypointProgressTracker", "UnityStandardAssets.Utility", t121_MIs, t121_PIs, t121_FIs, NULL, &t3_TI, t121_TI__nestedTypes, NULL, &t121_TI, NULL, t121_VT, &EmptyCustomAttributesCache, &t121_TI, &t121_0_0_0, &t121_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t121), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 11, 3, 15, 0, 1, 4, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
