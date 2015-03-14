#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t193.h"
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
extern TypeInfo t193_TI;
#include "t193MD.h"


#include "t122.h"

// Metadata Definition <Module>
static MethodInfo* t193_MIs[] =
{
	NULL
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t193_0_0_0;
extern Il2CppType t193_1_0_0;
struct t193;
extern TypeInfo t193_TI;
TypeInfo t193_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<Module>", "", t193_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t193_TI, NULL, NULL, &EmptyCustomAttributesCache, &t193_TI, &t193_0_0_0, &t193_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t193), 0, -1, 0, 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t194.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t194_TI;
#include "t194MD.h"

#include "t123.h"
#include "t124.h"
#include "t32.h"
#include "t2.h"
#include "t134.h"
#include "t4.h"
#include "UnityEngine_ArrayTypes.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo t194_TI;
extern TypeInfo t119_TI;
extern TypeInfo t124_TI;
extern TypeInfo t4_TI;
#include "t3MD.h"
#include "t32MD.h"
#include "t127MD.h"
#include "t2MD.h"
#include "t4MD.h"
#include "t128MD.h"
extern MethodInfo m334_MI;
extern MethodInfo m583_MI;
extern MethodInfo m336_MI;
extern MethodInfo m335_MI;
extern MethodInfo m359_MI;
extern MethodInfo m345_MI;
extern MethodInfo m426_MI;
extern MethodInfo m350_MI;


extern MethodInfo m639_MI;
 void m639 (t194 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m639_MI);
	{
		__this->f4 = (1.0f);
		m334(__this, &m334_MI);
		return;
	}
}
extern MethodInfo m640_MI;
 void m640 (t194 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m640_MI);
	{
		t32 * L_0 = m583(NULL, &m583_MI);
		NullCheck(L_0);
		t2 * L_1 = m336(L_0, &m336_MI);
		__this->f5 = L_1;
		return;
	}
}
extern MethodInfo m641_MI;
 void m641 (t194 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m641_MI);
	int32_t V_0 = 0;
	t4  V_1 = {0};
	{
		t2 * L_0 = (__this->f5);
		NullCheck(L_0);
		t4  L_1 = m335(L_0, &m335_MI);
		__this->f6 = L_1;
		t91* L_2 = (__this->f2);
		NullCheck(L_2);
		__this->f3 = ((t119*)SZArrayNew(InitializedTypeInfo(&t119_TI), (((int32_t)(((t122 *)L_2)->max_length)))));
		V_0 = 0;
		goto IL_0052;
	}

IL_002b:
	{
		t119* L_3 = (__this->f3);
		t91* L_4 = (__this->f2);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, V_0);
		NullCheck((*(t2 **)(t2 **)SZArrayLdElema(L_4, V_0)));
		t4  L_5 = m335((*(t2 **)(t2 **)SZArrayLdElema(L_4, V_0)), &m335_MI);
		V_1 = L_5;
		NullCheck((&V_1));
		float L_6 = ((&V_1)->f3);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, V_0);
		*((float*)(float*)SZArrayLdElema(L_3, V_0)) = (float)((float)(L_6*(-1.0f)));
		V_0 = ((int32_t)(V_0+1));
	}

IL_0052:
	{
		t91* L_7 = (__this->f2);
		NullCheck(L_7);
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((t122 *)L_7)->max_length))))))
		{
			goto IL_002b;
		}
	}
	{
		return;
	}
}
extern MethodInfo m642_MI;
 void m642 (t194 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m642_MI);
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	t4  V_3 = {0};
	t4  V_4 = {0};
	t4  V_5 = {0};
	t4  V_6 = {0};
	t4  V_7 = {0};
	{
		V_0 = 0;
		goto IL_00ae;
	}

IL_0007:
	{
		t4 * L_0 = &(__this->f6);
		NullCheck(L_0);
		float L_1 = (L_0->f1);
		t2 * L_2 = (__this->f5);
		NullCheck(L_2);
		t4  L_3 = m335(L_2, &m335_MI);
		V_4 = L_3;
		NullCheck((&V_4));
		float L_4 = ((&V_4)->f1);
		t119* L_5 = (__this->f3);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_0);
		V_1 = ((float)(((float)(L_1-L_4))*(*(float*)(float*)SZArrayLdElema(L_5, V_0))));
		t91* L_6 = (__this->f2);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, V_0);
		NullCheck((*(t2 **)(t2 **)SZArrayLdElema(L_6, V_0)));
		t4  L_7 = m335((*(t2 **)(t2 **)SZArrayLdElema(L_6, V_0)), &m335_MI);
		V_5 = L_7;
		NullCheck((&V_5));
		float L_8 = ((&V_5)->f1);
		V_2 = ((float)(L_8+V_1));
		t91* L_9 = (__this->f2);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, V_0);
		NullCheck((*(t2 **)(t2 **)SZArrayLdElema(L_9, V_0)));
		t4  L_10 = m335((*(t2 **)(t2 **)SZArrayLdElema(L_9, V_0)), &m335_MI);
		V_6 = L_10;
		NullCheck((&V_6));
		float L_11 = ((&V_6)->f2);
		t91* L_12 = (__this->f2);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, V_0);
		NullCheck((*(t2 **)(t2 **)SZArrayLdElema(L_12, V_0)));
		t4  L_13 = m335((*(t2 **)(t2 **)SZArrayLdElema(L_12, V_0)), &m335_MI);
		V_7 = L_13;
		NullCheck((&V_7));
		float L_14 = ((&V_7)->f3);
		m359((&V_3), V_2, L_11, L_14, &m359_MI);
		t91* L_15 = (__this->f2);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, V_0);
		t91* L_16 = (__this->f2);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, V_0);
		NullCheck((*(t2 **)(t2 **)SZArrayLdElema(L_16, V_0)));
		t4  L_17 = m335((*(t2 **)(t2 **)SZArrayLdElema(L_16, V_0)), &m335_MI);
		float L_18 = (__this->f4);
		float L_19 = m345(NULL, &m345_MI);
		t4  L_20 = m426(NULL, L_17, V_3, ((float)(L_18*L_19)), &m426_MI);
		NullCheck((*(t2 **)(t2 **)SZArrayLdElema(L_15, V_0)));
		m350((*(t2 **)(t2 **)SZArrayLdElema(L_15, V_0)), L_20, &m350_MI);
		V_0 = ((int32_t)(V_0+1));
	}

IL_00ae:
	{
		t91* L_21 = (__this->f2);
		NullCheck(L_21);
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((t122 *)L_21)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		t2 * L_22 = (__this->f5);
		NullCheck(L_22);
		t4  L_23 = m335(L_22, &m335_MI);
		__this->f6 = L_23;
		return;
	}
}
// Metadata Definition Parallaxing
extern Il2CppType t91_0_0_6;
FieldInfo t194_f2_FieldInfo = 
{
	"backgrounds", &t91_0_0_6, &t194_TI, offsetof(t194, f2), &EmptyCustomAttributesCache};
extern Il2CppType t119_0_0_1;
FieldInfo t194_f3_FieldInfo = 
{
	"parallaxScales", &t119_0_0_1, &t194_TI, offsetof(t194, f3), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_6;
FieldInfo t194_f4_FieldInfo = 
{
	"smoothing", &t124_0_0_6, &t194_TI, offsetof(t194, f4), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t194_f5_FieldInfo = 
{
	"cam", &t2_0_0_1, &t194_TI, offsetof(t194, f5), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t194_f6_FieldInfo = 
{
	"previousCamPos", &t4_0_0_1, &t194_TI, offsetof(t194, f6), &EmptyCustomAttributesCache};
static FieldInfo* t194_FIs[] =
{
	&t194_f2_FieldInfo,
	&t194_f3_FieldInfo,
	&t194_f4_FieldInfo,
	&t194_f5_FieldInfo,
	&t194_f6_FieldInfo,
	NULL
};
extern TypeInfo t194_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m639_MI = 
{
	".ctor", (methodPointerType)&m639, &t194_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1, NULL, (methodPointerType)NULL};
extern TypeInfo t194_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m640_MI = 
{
	"Awake", (methodPointerType)&m640, &t194_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2, NULL, (methodPointerType)NULL};
extern TypeInfo t194_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m641_MI = 
{
	"Start", (methodPointerType)&m641, &t194_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3, NULL, (methodPointerType)NULL};
extern TypeInfo t194_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m642_MI = 
{
	"Update", (methodPointerType)&m642, &t194_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4, NULL, (methodPointerType)NULL};
static MethodInfo* t194_MIs[] =
{
	&m639_MI,
	&m640_MI,
	&m641_MI,
	&m642_MI,
	NULL
};
extern MethodInfo m351_MI;
extern MethodInfo m352_MI;
extern MethodInfo m353_MI;
extern MethodInfo m354_MI;
static MethodInfo* t194_VT[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t194_0_0_0;
extern Il2CppType t194_1_0_0;
extern TypeInfo t3_TI;
struct t194;
extern TypeInfo t194_TI;
TypeInfo t194_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "Parallaxing", "", t194_MIs, NULL, t194_FIs, NULL, &t3_TI, NULL, NULL, &t194_TI, NULL, t194_VT, &EmptyCustomAttributesCache, &t194_TI, &t194_0_0_0, &t194_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t194), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 5, 0, 0, 4, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
