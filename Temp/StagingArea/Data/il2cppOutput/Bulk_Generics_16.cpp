#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2455.h"
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
extern TypeInfo t2455_TI;
#include "t2455MD.h"

#include "t25.h"
#include "t356.h"
#include "t134.h"
#include "t27.h"
#include "t1387.h"
#include "t123.h"
#include "t122.h"
#include "t125.h"
extern TypeInfo t2455_TI;
extern TypeInfo t356_TI;
extern TypeInfo t1387_TI;
#include "t1387MD.h"
#include "t122MD.h"
extern MethodInfo m13483_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20656_MI;
struct t122;
#include "t1351.h"
 int32_t m20656 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20656_MI;


extern MethodInfo m13479_MI;
 void m13479 (t2455 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13479_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13480_MI;
 t25 * m13480 (t2455 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13480_MI);
	{
		int32_t L_0 = m13483(__this, &m13483_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t356_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13481_MI;
 void m13481 (t2455 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13481_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13482_MI;
 bool m13482 (t2455 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13482_MI);
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t122 * L_1 = (__this->f0);
		NullCheck(L_1);
		int32_t L_2 = m4234(L_1, &m4234_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m13483_MI;
 int32_t m13483 (t2455 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13483_MI);
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1387 * L_1 = (t1387 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1387_TI));
		m7431(L_1, (t27*) &_stringLiteral394, &m7431_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1387 * L_3 = (t1387 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1387_TI));
		m7431(L_3, (t27*) &_stringLiteral395, &m7431_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t122 * L_4 = (__this->f0);
		t122 * L_5 = (__this->f0);
		NullCheck(L_5);
		int32_t L_6 = m4234(L_5, &m4234_MI);
		int32_t L_7 = (__this->f1);
		NullCheck(L_4);
		int32_t L_8 = m20656(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20656_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Selectable/SelectionState>
extern Il2CppType t122_0_0_1;
FieldInfo t2455_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2455_TI, offsetof(t2455, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2455_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2455_TI, offsetof(t2455, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2455_FIs[] =
{
	&t2455_f0_FieldInfo,
	&t2455_f1_FieldInfo,
	NULL
};
extern MethodInfo m13480_MI;
static PropertyInfo t2455____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2455_TI, "System.Collections.IEnumerator.Current", &m13480_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13483_MI;
static PropertyInfo t2455____Current_PropertyInfo = 
{
	&t2455_TI, "Current", &m13483_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2455_PIs[] =
{
	&t2455____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2455____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2455_m13479_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2455_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13479_MI = 
{
	".ctor", (methodPointerType)&m13479, &t2455_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2455_m13479_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2455_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13480_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13480, &t2455_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2455_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13481_MI = 
{
	"Dispose", (methodPointerType)&m13481, &t2455_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2455_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13482_MI = 
{
	"MoveNext", (methodPointerType)&m13482, &t2455_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2455_TI;
extern Il2CppType t356_0_0_0;
extern void* RuntimeInvoker_t356 (MethodInfo* method, void* obj, void** args);
MethodInfo m13483_MI = 
{
	"get_Current", (methodPointerType)&m13483, &t2455_TI, &t356_0_0_0, RuntimeInvoker_t356, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2455_MIs[] =
{
	&m13479_MI,
	&m13480_MI,
	&m13481_MI,
	&m13482_MI,
	&m13483_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13480_MI;
extern MethodInfo m13482_MI;
extern MethodInfo m13481_MI;
extern MethodInfo m13483_MI;
static MethodInfo* t2455_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13480_MI,
	&m13482_MI,
	&m13481_MI,
	&m13483_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3856_TI;
static TypeInfo* t2455_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3856_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3856_TI;
static Il2CppInterfaceOffsetPair t2455_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3856_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2455_0_0_0;
extern Il2CppType t2455_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2455_TI;
extern Il2CppGenericClass t2455_GC;
extern TypeInfo t122_TI;
TypeInfo t2455_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2455_MIs, t2455_PIs, t2455_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2455_TI, t2455_ITIs, t2455_VT, &EmptyCustomAttributesCache, &t2455_TI, &t2455_0_0_0, &t2455_1_0_0, t2455_IOs, &t2455_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2455)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4754_TI;

#include "UnityEngine.UI_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable/SelectionState>
extern MethodInfo m27785_MI;
static PropertyInfo t4754____Count_PropertyInfo = 
{
	&t4754_TI, "Count", &m27785_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27786_MI;
static PropertyInfo t4754____IsReadOnly_PropertyInfo = 
{
	&t4754_TI, "IsReadOnly", &m27786_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4754_PIs[] =
{
	&t4754____Count_PropertyInfo,
	&t4754____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4754_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27785_MI = 
{
	"get_Count", NULL, &t4754_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4754_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27786_MI = 
{
	"get_IsReadOnly", NULL, &t4754_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t356_0_0_0;
static ParameterInfo t4754_m27787_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t356_0_0_0},
};
extern TypeInfo t4754_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27787_MI = 
{
	"Add", NULL, &t4754_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4754_m27787_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4754_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27788_MI = 
{
	"Clear", NULL, &t4754_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t356_0_0_0;
static ParameterInfo t4754_m27789_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t356_0_0_0},
};
extern TypeInfo t4754_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27789_MI = 
{
	"Contains", NULL, &t4754_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4754_m27789_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3621_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4754_m27790_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3621_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4754_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27790_MI = 
{
	"CopyTo", NULL, &t4754_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4754_m27790_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t356_0_0_0;
static ParameterInfo t4754_m27791_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t356_0_0_0},
};
extern TypeInfo t4754_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27791_MI = 
{
	"Remove", NULL, &t4754_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4754_m27791_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4754_MIs[] =
{
	&m27785_MI,
	&m27786_MI,
	&m27787_MI,
	&m27788_MI,
	&m27789_MI,
	&m27790_MI,
	&m27791_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4756_TI;
static TypeInfo* t4754_ITIs[] = 
{
	&t703_TI,
	&t4756_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4754_0_0_0;
extern Il2CppType t4754_1_0_0;
struct t4754;
extern TypeInfo t4754_TI;
extern Il2CppGenericClass t4754_GC;
TypeInfo t4754_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4754_MIs, t4754_PIs, NULL, NULL, NULL, NULL, NULL, &t4754_TI, t4754_ITIs, NULL, &EmptyCustomAttributesCache, &t4754_TI, &t4754_0_0_0, &t4754_1_0_0, NULL, &t4754_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4756_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable/SelectionState>
extern TypeInfo t4756_TI;
extern Il2CppType t3856_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27792_MI = 
{
	"GetEnumerator", NULL, &t4756_TI, &t3856_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4756_MIs[] =
{
	&m27792_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4756_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4756_0_0_0;
extern Il2CppType t4756_1_0_0;
struct t4756;
extern TypeInfo t4756_TI;
extern Il2CppGenericClass t4756_GC;
TypeInfo t4756_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4756_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4756_TI, t4756_ITIs, NULL, &EmptyCustomAttributesCache, &t4756_TI, &t4756_0_0_0, &t4756_1_0_0, NULL, &t4756_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4755_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Selectable/SelectionState>
extern MethodInfo m27793_MI;
extern MethodInfo m27794_MI;
static PropertyInfo t4755____Item_PropertyInfo = 
{
	&t4755_TI, "Item", &m27793_MI, &m27794_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4755_PIs[] =
{
	&t4755____Item_PropertyInfo,
	NULL
};
extern Il2CppType t356_0_0_0;
static ParameterInfo t4755_m27795_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t356_0_0_0},
};
extern TypeInfo t4755_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27795_MI = 
{
	"IndexOf", NULL, &t4755_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t4755_m27795_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t356_0_0_0;
static ParameterInfo t4755_m27796_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t356_0_0_0},
};
extern TypeInfo t4755_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27796_MI = 
{
	"Insert", NULL, &t4755_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4755_m27796_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4755_m27797_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4755_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27797_MI = 
{
	"RemoveAt", NULL, &t4755_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4755_m27797_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4755_m27793_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4755_TI;
extern Il2CppType t356_0_0_0;
extern void* RuntimeInvoker_t356_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27793_MI = 
{
	"get_Item", NULL, &t4755_TI, &t356_0_0_0, RuntimeInvoker_t356_t134, t4755_m27793_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t356_0_0_0;
static ParameterInfo t4755_m27794_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t356_0_0_0},
};
extern TypeInfo t4755_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27794_MI = 
{
	"set_Item", NULL, &t4755_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4755_m27794_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4755_MIs[] =
{
	&m27795_MI,
	&m27796_MI,
	&m27797_MI,
	&m27793_MI,
	&m27794_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4754_TI;
extern TypeInfo t4756_TI;
static TypeInfo* t4755_ITIs[] = 
{
	&t703_TI,
	&t4754_TI,
	&t4756_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4755_0_0_0;
extern Il2CppType t4755_1_0_0;
struct t4755;
extern TypeInfo t4755_TI;
extern Il2CppGenericClass t4755_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4755_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4755_MIs, t4755_PIs, NULL, NULL, NULL, NULL, NULL, &t4755_TI, t4755_ITIs, NULL, &t1518__CustomAttributeCache, &t4755_TI, &t4755_0_0_0, &t4755_1_0_0, NULL, &t4755_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3857_TI;

#include "t380.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Slider>
extern MethodInfo m27798_MI;
static PropertyInfo t3857____Current_PropertyInfo = 
{
	&t3857_TI, "Current", &m27798_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3857_PIs[] =
{
	&t3857____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3857_TI;
extern Il2CppType t380_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27798_MI = 
{
	"get_Current", NULL, &t3857_TI, &t380_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3857_MIs[] =
{
	&m27798_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3857_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3857_0_0_0;
extern Il2CppType t3857_1_0_0;
struct t3857;
extern TypeInfo t3857_TI;
extern Il2CppGenericClass t3857_GC;
TypeInfo t3857_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3857_MIs, t3857_PIs, NULL, NULL, NULL, NULL, NULL, &t3857_TI, t3857_ITIs, NULL, &EmptyCustomAttributesCache, &t3857_TI, &t3857_0_0_0, &t3857_1_0_0, NULL, &t3857_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2456.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2456_TI;
#include "t2456MD.h"

extern TypeInfo t2456_TI;
extern TypeInfo t380_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13488_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20667_MI;
struct t122;
struct t122;
 t25 * m18022_gshared (t122 * __this, int32_t p0, MethodInfo* method);
#define m18022(__this, p0, method) (t25 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
#define m20667(__this, p0, method) (t380 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m20667_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Slider>
extern Il2CppType t122_0_0_1;
FieldInfo t2456_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2456_TI, offsetof(t2456, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2456_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2456_TI, offsetof(t2456, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2456_FIs[] =
{
	&t2456_f0_FieldInfo,
	&t2456_f1_FieldInfo,
	NULL
};
extern MethodInfo m13485_MI;
static PropertyInfo t2456____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2456_TI, "System.Collections.IEnumerator.Current", &m13485_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13488_MI;
static PropertyInfo t2456____Current_PropertyInfo = 
{
	&t2456_TI, "Current", &m13488_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2456_PIs[] =
{
	&t2456____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2456____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2456_m13484_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2456_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13484_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t2456_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2456_m13484_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2456_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13485_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t2456_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2456_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13486_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t2456_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2456_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13487_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t2456_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2456_TI;
extern Il2CppType t380_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13488_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t2456_TI, &t380_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2456_MIs[] =
{
	&m13484_MI,
	&m13485_MI,
	&m13486_MI,
	&m13487_MI,
	&m13488_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13485_MI;
extern MethodInfo m13487_MI;
extern MethodInfo m13486_MI;
extern MethodInfo m13488_MI;
static MethodInfo* t2456_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13485_MI,
	&m13487_MI,
	&m13486_MI,
	&m13488_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3857_TI;
static TypeInfo* t2456_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3857_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3857_TI;
static Il2CppInterfaceOffsetPair t2456_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3857_TI, 7},
};
extern MethodInfo m13488_MI;
extern TypeInfo t380_TI;
extern MethodInfo m20667_MI;
static void* t2456_RGCTXData[3] = 
{
	&m13488_MI,
	&t380_TI,
	&m20667_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2456_0_0_0;
extern Il2CppType t2456_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2456_TI;
extern Il2CppGenericClass t2456_GC;
extern TypeInfo t122_TI;
TypeInfo t2456_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2456_MIs, t2456_PIs, t2456_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2456_TI, t2456_ITIs, t2456_VT, &EmptyCustomAttributesCache, &t2456_TI, &t2456_0_0_0, &t2456_1_0_0, t2456_IOs, &t2456_GC, NULL, NULL, NULL, t2456_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2456)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4757_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Slider>
extern MethodInfo m27799_MI;
static PropertyInfo t4757____Count_PropertyInfo = 
{
	&t4757_TI, "Count", &m27799_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27800_MI;
static PropertyInfo t4757____IsReadOnly_PropertyInfo = 
{
	&t4757_TI, "IsReadOnly", &m27800_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4757_PIs[] =
{
	&t4757____Count_PropertyInfo,
	&t4757____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4757_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27799_MI = 
{
	"get_Count", NULL, &t4757_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4757_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27800_MI = 
{
	"get_IsReadOnly", NULL, &t4757_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t380_0_0_0;
static ParameterInfo t4757_m27801_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t380_0_0_0},
};
extern TypeInfo t4757_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27801_MI = 
{
	"Add", NULL, &t4757_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t4757_m27801_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4757_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27802_MI = 
{
	"Clear", NULL, &t4757_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t380_0_0_0;
static ParameterInfo t4757_m27803_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t380_0_0_0},
};
extern TypeInfo t4757_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27803_MI = 
{
	"Contains", NULL, &t4757_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4757_m27803_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3622_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4757_m27804_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3622_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4757_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27804_MI = 
{
	"CopyTo", NULL, &t4757_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4757_m27804_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t380_0_0_0;
static ParameterInfo t4757_m27805_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t380_0_0_0},
};
extern TypeInfo t4757_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27805_MI = 
{
	"Remove", NULL, &t4757_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4757_m27805_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4757_MIs[] =
{
	&m27799_MI,
	&m27800_MI,
	&m27801_MI,
	&m27802_MI,
	&m27803_MI,
	&m27804_MI,
	&m27805_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4759_TI;
static TypeInfo* t4757_ITIs[] = 
{
	&t703_TI,
	&t4759_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4757_0_0_0;
extern Il2CppType t4757_1_0_0;
struct t4757;
extern TypeInfo t4757_TI;
extern Il2CppGenericClass t4757_GC;
TypeInfo t4757_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4757_MIs, t4757_PIs, NULL, NULL, NULL, NULL, NULL, &t4757_TI, t4757_ITIs, NULL, &EmptyCustomAttributesCache, &t4757_TI, &t4757_0_0_0, &t4757_1_0_0, NULL, &t4757_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4759_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Slider>
extern TypeInfo t4759_TI;
extern Il2CppType t3857_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27806_MI = 
{
	"GetEnumerator", NULL, &t4759_TI, &t3857_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4759_MIs[] =
{
	&m27806_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4759_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4759_0_0_0;
extern Il2CppType t4759_1_0_0;
struct t4759;
extern TypeInfo t4759_TI;
extern Il2CppGenericClass t4759_GC;
TypeInfo t4759_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4759_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4759_TI, t4759_ITIs, NULL, &EmptyCustomAttributesCache, &t4759_TI, &t4759_0_0_0, &t4759_1_0_0, NULL, &t4759_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4758_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Slider>
extern MethodInfo m27807_MI;
extern MethodInfo m27808_MI;
static PropertyInfo t4758____Item_PropertyInfo = 
{
	&t4758_TI, "Item", &m27807_MI, &m27808_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4758_PIs[] =
{
	&t4758____Item_PropertyInfo,
	NULL
};
extern Il2CppType t380_0_0_0;
static ParameterInfo t4758_m27809_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t380_0_0_0},
};
extern TypeInfo t4758_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27809_MI = 
{
	"IndexOf", NULL, &t4758_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t4758_m27809_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t380_0_0_0;
static ParameterInfo t4758_m27810_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t380_0_0_0},
};
extern TypeInfo t4758_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27810_MI = 
{
	"Insert", NULL, &t4758_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4758_m27810_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4758_m27811_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4758_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27811_MI = 
{
	"RemoveAt", NULL, &t4758_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4758_m27811_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4758_m27807_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4758_TI;
extern Il2CppType t380_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27807_MI = 
{
	"get_Item", NULL, &t4758_TI, &t380_0_0_0, RuntimeInvoker_t25_t134, t4758_m27807_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t380_0_0_0;
static ParameterInfo t4758_m27808_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t380_0_0_0},
};
extern TypeInfo t4758_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27808_MI = 
{
	"set_Item", NULL, &t4758_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4758_m27808_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4758_MIs[] =
{
	&m27809_MI,
	&m27810_MI,
	&m27811_MI,
	&m27807_MI,
	&m27808_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4757_TI;
extern TypeInfo t4759_TI;
static TypeInfo* t4758_ITIs[] = 
{
	&t703_TI,
	&t4757_TI,
	&t4759_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4758_0_0_0;
extern Il2CppType t4758_1_0_0;
struct t4758;
extern TypeInfo t4758_TI;
extern Il2CppGenericClass t4758_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4758_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4758_MIs, t4758_PIs, NULL, NULL, NULL, NULL, NULL, &t4758_TI, t4758_ITIs, NULL, &t1518__CustomAttributeCache, &t4758_TI, &t4758_0_0_0, &t4758_1_0_0, NULL, &t4758_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2457.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2457_TI;
#include "t2457MD.h"

#include "t60.h"
#include "t657.h"
#include "mscorlib_ArrayTypes.h"
#include "t2458.h"
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t2457_TI;
extern TypeInfo t380_TI;
extern TypeInfo t2458_TI;
extern TypeInfo t123_TI;
#include "t2458MD.h"
extern MethodInfo m13491_MI;
extern MethodInfo m13493_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Slider>
extern Il2CppType t158_0_0_33;
FieldInfo t2457_f1_FieldInfo = 
{
	"m_Arg1", &t158_0_0_33, &t2457_TI, offsetof(t2457, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2457_FIs[] =
{
	&t2457_f1_FieldInfo,
	NULL
};
extern Il2CppType t60_0_0_0;
extern Il2CppType t657_0_0_0;
extern Il2CppType t380_0_0_0;
static ParameterInfo t2457_m13489_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t380_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13489_MI = 
{
	".ctor", (methodPointerType)&m8415_gshared, &t2457_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t2457_m13489_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2457_m13490_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13490_MI = 
{
	"Invoke", (methodPointerType)&m8417_gshared, &t2457_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2457_m13490_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2457_MIs[] =
{
	&m13489_MI,
	&m13490_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13490_MI;
extern MethodInfo m13494_MI;
static MethodInfo* t2457_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13490_MI,
	&m13494_MI,
};
extern Il2CppType t2459_0_0_0;
extern TypeInfo t2459_TI;
extern MethodInfo m20677_MI;
extern TypeInfo t380_TI;
extern MethodInfo m13496_MI;
extern MethodInfo m13491_MI;
extern TypeInfo t380_TI;
extern MethodInfo m13493_MI;
static void* t2457_RGCTXData[8] = 
{
	(void*)&t2459_0_0_0,
	&t2459_TI,
	&m20677_MI,
	&t380_TI,
	&m13496_MI,
	&m13491_MI,
	&t380_TI,
	&m13493_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2457_0_0_0;
extern Il2CppType t2457_1_0_0;
extern TypeInfo t2458_TI;
struct t2457;
extern TypeInfo t2457_TI;
extern Il2CppGenericClass t2457_GC;
TypeInfo t2457_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2457_MIs, NULL, t2457_FIs, NULL, &t2458_TI, NULL, NULL, &t2457_TI, NULL, t2457_VT, &EmptyCustomAttributesCache, &t2457_TI, &t2457_0_0_0, &t2457_1_0_0, NULL, &t2457_GC, NULL, NULL, NULL, t2457_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2457), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2458_TI;

#include "t2459.h"
#include "t131.h"
#include "t132.h"
#include "t466.h"
#include "t445.h"
extern TypeInfo t2458_TI;
extern TypeInfo t2459_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t380_TI;
extern TypeInfo t123_TI;
#include "t656MD.h"
#include "t131MD.h"
#include "t466MD.h"
#include "t445MD.h"
#include "t2459MD.h"
extern Il2CppType t2459_0_0_0;
extern MethodInfo m3313_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m2105_MI;
extern MethodInfo m3312_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m20677_MI;
extern MethodInfo m3314_MI;
extern MethodInfo m13496_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
struct t656;
#include "t656.h"
struct t656;
 void m18087_gshared (t25 * __this, t25 * p0, MethodInfo* method);
#define m18087(__this, p0, method) (void)m18087_gshared((t25 *)__this, (t25 *)p0, method)
#define m20677(__this, p0, method) (void)m18087_gshared((t25 *)__this, (t25 *)p0, method)
extern MethodInfo m20677_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Slider>
extern Il2CppType t2459_0_0_1;
FieldInfo t2458_f0_FieldInfo = 
{
	"Delegate", &t2459_0_0_1, &t2458_TI, offsetof(t2458, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2458_FIs[] =
{
	&t2458_f0_FieldInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2458_m13491_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2458_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13491_MI = 
{
	".ctor", (methodPointerType)&m8418_gshared, &t2458_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t2458_m13491_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2459_0_0_0;
static ParameterInfo t2458_m13492_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2459_0_0_0},
};
extern TypeInfo t2458_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13492_MI = 
{
	".ctor", (methodPointerType)&m8419_gshared, &t2458_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2458_m13492_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2458_m13493_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2458_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13493_MI = 
{
	"Invoke", (methodPointerType)&m8420_gshared, &t2458_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2458_m13493_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2458_m13494_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2458_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13494_MI = 
{
	"Find", (methodPointerType)&m8421_gshared, &t2458_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2458_m13494_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2458_MIs[] =
{
	&m13491_MI,
	&m13492_MI,
	&m13493_MI,
	&m13494_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13493_MI;
extern MethodInfo m13494_MI;
static MethodInfo* t2458_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13493_MI,
	&m13494_MI,
};
extern Il2CppType t2459_0_0_0;
extern TypeInfo t2459_TI;
extern MethodInfo m20677_MI;
extern TypeInfo t380_TI;
extern MethodInfo m13496_MI;
static void* t2458_RGCTXData[5] = 
{
	(void*)&t2459_0_0_0,
	&t2459_TI,
	&m20677_MI,
	&t380_TI,
	&m13496_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2458_0_0_0;
extern Il2CppType t2458_1_0_0;
extern TypeInfo t656_TI;
struct t2458;
extern TypeInfo t2458_TI;
extern Il2CppGenericClass t2458_GC;
TypeInfo t2458_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2458_MIs, NULL, t2458_FIs, NULL, &t656_TI, NULL, NULL, &t2458_TI, NULL, t2458_VT, &EmptyCustomAttributesCache, &t2458_TI, &t2458_0_0_0, &t2458_1_0_0, NULL, &t2458_GC, NULL, NULL, NULL, t2458_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2458), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2459_TI;

#include "t61.h"
#include "t219.h"


// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.Slider>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2459_m13495_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2459_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13495_MI = 
{
	".ctor", (methodPointerType)&m8422_gshared, &t2459_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2459_m13495_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t380_0_0_0;
static ParameterInfo t2459_m13496_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t380_0_0_0},
};
extern TypeInfo t2459_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13496_MI = 
{
	"Invoke", (methodPointerType)&m8423_gshared, &t2459_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2459_m13496_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t380_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2459_m13497_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t380_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2459_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13497_MI = 
{
	"BeginInvoke", (methodPointerType)&m8424_gshared, &t2459_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t2459_m13497_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2459_m13498_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2459_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13498_MI = 
{
	"EndInvoke", (methodPointerType)&m8425_gshared, &t2459_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2459_m13498_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2459_MIs[] =
{
	&m13495_MI,
	&m13496_MI,
	&m13497_MI,
	&m13498_MI,
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
extern MethodInfo m13496_MI;
extern MethodInfo m13497_MI;
extern MethodInfo m13498_MI;
static MethodInfo* t2459_VT[] =
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
	&m13496_MI,
	&m13497_MI,
	&m13498_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2459_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2459_0_0_0;
extern Il2CppType t2459_1_0_0;
extern TypeInfo t345_TI;
struct t2459;
extern TypeInfo t2459_TI;
extern Il2CppGenericClass t2459_GC;
TypeInfo t2459_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2459_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2459_TI, NULL, t2459_VT, &EmptyCustomAttributesCache, &t2459_TI, &t2459_0_0_0, &t2459_1_0_0, t2459_IOs, &t2459_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2459), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3858_TI;

#include "t377.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Slider/Direction>
extern MethodInfo m27812_MI;
static PropertyInfo t3858____Current_PropertyInfo = 
{
	&t3858_TI, "Current", &m27812_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3858_PIs[] =
{
	&t3858____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3858_TI;
extern Il2CppType t377_0_0_0;
extern void* RuntimeInvoker_t377 (MethodInfo* method, void* obj, void** args);
MethodInfo m27812_MI = 
{
	"get_Current", NULL, &t3858_TI, &t377_0_0_0, RuntimeInvoker_t377, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3858_MIs[] =
{
	&m27812_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3858_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3858_0_0_0;
extern Il2CppType t3858_1_0_0;
struct t3858;
extern TypeInfo t3858_TI;
extern Il2CppGenericClass t3858_GC;
TypeInfo t3858_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3858_MIs, t3858_PIs, NULL, NULL, NULL, NULL, NULL, &t3858_TI, t3858_ITIs, NULL, &EmptyCustomAttributesCache, &t3858_TI, &t3858_0_0_0, &t3858_1_0_0, NULL, &t3858_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2460.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2460_TI;
#include "t2460MD.h"

extern TypeInfo t2460_TI;
extern TypeInfo t377_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13503_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20679_MI;
struct t122;
 int32_t m20679 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20679_MI;


extern MethodInfo m13499_MI;
 void m13499 (t2460 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13499_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13500_MI;
 t25 * m13500 (t2460 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13500_MI);
	{
		int32_t L_0 = m13503(__this, &m13503_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t377_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13501_MI;
 void m13501 (t2460 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13501_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13502_MI;
 bool m13502 (t2460 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13502_MI);
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t122 * L_1 = (__this->f0);
		NullCheck(L_1);
		int32_t L_2 = m4234(L_1, &m4234_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m13503_MI;
 int32_t m13503 (t2460 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13503_MI);
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1387 * L_1 = (t1387 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1387_TI));
		m7431(L_1, (t27*) &_stringLiteral394, &m7431_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1387 * L_3 = (t1387 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1387_TI));
		m7431(L_3, (t27*) &_stringLiteral395, &m7431_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t122 * L_4 = (__this->f0);
		t122 * L_5 = (__this->f0);
		NullCheck(L_5);
		int32_t L_6 = m4234(L_5, &m4234_MI);
		int32_t L_7 = (__this->f1);
		NullCheck(L_4);
		int32_t L_8 = m20679(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20679_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Slider/Direction>
extern Il2CppType t122_0_0_1;
FieldInfo t2460_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2460_TI, offsetof(t2460, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2460_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2460_TI, offsetof(t2460, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2460_FIs[] =
{
	&t2460_f0_FieldInfo,
	&t2460_f1_FieldInfo,
	NULL
};
extern MethodInfo m13500_MI;
static PropertyInfo t2460____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2460_TI, "System.Collections.IEnumerator.Current", &m13500_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13503_MI;
static PropertyInfo t2460____Current_PropertyInfo = 
{
	&t2460_TI, "Current", &m13503_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2460_PIs[] =
{
	&t2460____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2460____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2460_m13499_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2460_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13499_MI = 
{
	".ctor", (methodPointerType)&m13499, &t2460_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2460_m13499_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2460_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13500_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13500, &t2460_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2460_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13501_MI = 
{
	"Dispose", (methodPointerType)&m13501, &t2460_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2460_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13502_MI = 
{
	"MoveNext", (methodPointerType)&m13502, &t2460_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2460_TI;
extern Il2CppType t377_0_0_0;
extern void* RuntimeInvoker_t377 (MethodInfo* method, void* obj, void** args);
MethodInfo m13503_MI = 
{
	"get_Current", (methodPointerType)&m13503, &t2460_TI, &t377_0_0_0, RuntimeInvoker_t377, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2460_MIs[] =
{
	&m13499_MI,
	&m13500_MI,
	&m13501_MI,
	&m13502_MI,
	&m13503_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13500_MI;
extern MethodInfo m13502_MI;
extern MethodInfo m13501_MI;
extern MethodInfo m13503_MI;
static MethodInfo* t2460_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13500_MI,
	&m13502_MI,
	&m13501_MI,
	&m13503_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3858_TI;
static TypeInfo* t2460_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3858_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3858_TI;
static Il2CppInterfaceOffsetPair t2460_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3858_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2460_0_0_0;
extern Il2CppType t2460_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2460_TI;
extern Il2CppGenericClass t2460_GC;
extern TypeInfo t122_TI;
TypeInfo t2460_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2460_MIs, t2460_PIs, t2460_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2460_TI, t2460_ITIs, t2460_VT, &EmptyCustomAttributesCache, &t2460_TI, &t2460_0_0_0, &t2460_1_0_0, t2460_IOs, &t2460_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2460)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4760_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Slider/Direction>
extern MethodInfo m27813_MI;
static PropertyInfo t4760____Count_PropertyInfo = 
{
	&t4760_TI, "Count", &m27813_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27814_MI;
static PropertyInfo t4760____IsReadOnly_PropertyInfo = 
{
	&t4760_TI, "IsReadOnly", &m27814_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4760_PIs[] =
{
	&t4760____Count_PropertyInfo,
	&t4760____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4760_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27813_MI = 
{
	"get_Count", NULL, &t4760_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4760_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27814_MI = 
{
	"get_IsReadOnly", NULL, &t4760_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t377_0_0_0;
static ParameterInfo t4760_m27815_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t377_0_0_0},
};
extern TypeInfo t4760_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27815_MI = 
{
	"Add", NULL, &t4760_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4760_m27815_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4760_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27816_MI = 
{
	"Clear", NULL, &t4760_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t377_0_0_0;
static ParameterInfo t4760_m27817_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t377_0_0_0},
};
extern TypeInfo t4760_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27817_MI = 
{
	"Contains", NULL, &t4760_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4760_m27817_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3623_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4760_m27818_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3623_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4760_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27818_MI = 
{
	"CopyTo", NULL, &t4760_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4760_m27818_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t377_0_0_0;
static ParameterInfo t4760_m27819_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t377_0_0_0},
};
extern TypeInfo t4760_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27819_MI = 
{
	"Remove", NULL, &t4760_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4760_m27819_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4760_MIs[] =
{
	&m27813_MI,
	&m27814_MI,
	&m27815_MI,
	&m27816_MI,
	&m27817_MI,
	&m27818_MI,
	&m27819_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4762_TI;
static TypeInfo* t4760_ITIs[] = 
{
	&t703_TI,
	&t4762_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4760_0_0_0;
extern Il2CppType t4760_1_0_0;
struct t4760;
extern TypeInfo t4760_TI;
extern Il2CppGenericClass t4760_GC;
TypeInfo t4760_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4760_MIs, t4760_PIs, NULL, NULL, NULL, NULL, NULL, &t4760_TI, t4760_ITIs, NULL, &EmptyCustomAttributesCache, &t4760_TI, &t4760_0_0_0, &t4760_1_0_0, NULL, &t4760_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4762_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Slider/Direction>
extern TypeInfo t4762_TI;
extern Il2CppType t3858_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27820_MI = 
{
	"GetEnumerator", NULL, &t4762_TI, &t3858_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4762_MIs[] =
{
	&m27820_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4762_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4762_0_0_0;
extern Il2CppType t4762_1_0_0;
struct t4762;
extern TypeInfo t4762_TI;
extern Il2CppGenericClass t4762_GC;
TypeInfo t4762_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4762_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4762_TI, t4762_ITIs, NULL, &EmptyCustomAttributesCache, &t4762_TI, &t4762_0_0_0, &t4762_1_0_0, NULL, &t4762_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4761_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Slider/Direction>
extern MethodInfo m27821_MI;
extern MethodInfo m27822_MI;
static PropertyInfo t4761____Item_PropertyInfo = 
{
	&t4761_TI, "Item", &m27821_MI, &m27822_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4761_PIs[] =
{
	&t4761____Item_PropertyInfo,
	NULL
};
extern Il2CppType t377_0_0_0;
static ParameterInfo t4761_m27823_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t377_0_0_0},
};
extern TypeInfo t4761_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27823_MI = 
{
	"IndexOf", NULL, &t4761_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t4761_m27823_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t377_0_0_0;
static ParameterInfo t4761_m27824_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t377_0_0_0},
};
extern TypeInfo t4761_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27824_MI = 
{
	"Insert", NULL, &t4761_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4761_m27824_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4761_m27825_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4761_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27825_MI = 
{
	"RemoveAt", NULL, &t4761_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4761_m27825_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4761_m27821_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4761_TI;
extern Il2CppType t377_0_0_0;
extern void* RuntimeInvoker_t377_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27821_MI = 
{
	"get_Item", NULL, &t4761_TI, &t377_0_0_0, RuntimeInvoker_t377_t134, t4761_m27821_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t377_0_0_0;
static ParameterInfo t4761_m27822_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t377_0_0_0},
};
extern TypeInfo t4761_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27822_MI = 
{
	"set_Item", NULL, &t4761_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4761_m27822_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4761_MIs[] =
{
	&m27823_MI,
	&m27824_MI,
	&m27825_MI,
	&m27821_MI,
	&m27822_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4760_TI;
extern TypeInfo t4762_TI;
static TypeInfo* t4761_ITIs[] = 
{
	&t703_TI,
	&t4760_TI,
	&t4762_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4761_0_0_0;
extern Il2CppType t4761_1_0_0;
struct t4761;
extern TypeInfo t4761_TI;
extern Il2CppGenericClass t4761_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4761_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4761_MIs, t4761_PIs, NULL, NULL, NULL, NULL, NULL, &t4761_TI, t4761_ITIs, NULL, &t1518__CustomAttributeCache, &t4761_TI, &t4761_0_0_0, &t4761_1_0_0, NULL, &t4761_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3859_TI;

#include "t379.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Slider/Axis>
extern MethodInfo m27826_MI;
static PropertyInfo t3859____Current_PropertyInfo = 
{
	&t3859_TI, "Current", &m27826_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3859_PIs[] =
{
	&t3859____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3859_TI;
extern Il2CppType t379_0_0_0;
extern void* RuntimeInvoker_t379 (MethodInfo* method, void* obj, void** args);
MethodInfo m27826_MI = 
{
	"get_Current", NULL, &t3859_TI, &t379_0_0_0, RuntimeInvoker_t379, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3859_MIs[] =
{
	&m27826_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3859_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3859_0_0_0;
extern Il2CppType t3859_1_0_0;
struct t3859;
extern TypeInfo t3859_TI;
extern Il2CppGenericClass t3859_GC;
TypeInfo t3859_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3859_MIs, t3859_PIs, NULL, NULL, NULL, NULL, NULL, &t3859_TI, t3859_ITIs, NULL, &EmptyCustomAttributesCache, &t3859_TI, &t3859_0_0_0, &t3859_1_0_0, NULL, &t3859_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2461.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2461_TI;
#include "t2461MD.h"

extern TypeInfo t2461_TI;
extern TypeInfo t379_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13508_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20690_MI;
struct t122;
 int32_t m20690 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20690_MI;


extern MethodInfo m13504_MI;
 void m13504 (t2461 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13504_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13505_MI;
 t25 * m13505 (t2461 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13505_MI);
	{
		int32_t L_0 = m13508(__this, &m13508_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t379_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13506_MI;
 void m13506 (t2461 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13506_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13507_MI;
 bool m13507 (t2461 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13507_MI);
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t122 * L_1 = (__this->f0);
		NullCheck(L_1);
		int32_t L_2 = m4234(L_1, &m4234_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m13508_MI;
 int32_t m13508 (t2461 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13508_MI);
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1387 * L_1 = (t1387 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1387_TI));
		m7431(L_1, (t27*) &_stringLiteral394, &m7431_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1387 * L_3 = (t1387 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1387_TI));
		m7431(L_3, (t27*) &_stringLiteral395, &m7431_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t122 * L_4 = (__this->f0);
		t122 * L_5 = (__this->f0);
		NullCheck(L_5);
		int32_t L_6 = m4234(L_5, &m4234_MI);
		int32_t L_7 = (__this->f1);
		NullCheck(L_4);
		int32_t L_8 = m20690(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20690_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Slider/Axis>
extern Il2CppType t122_0_0_1;
FieldInfo t2461_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2461_TI, offsetof(t2461, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2461_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2461_TI, offsetof(t2461, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2461_FIs[] =
{
	&t2461_f0_FieldInfo,
	&t2461_f1_FieldInfo,
	NULL
};
extern MethodInfo m13505_MI;
static PropertyInfo t2461____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2461_TI, "System.Collections.IEnumerator.Current", &m13505_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13508_MI;
static PropertyInfo t2461____Current_PropertyInfo = 
{
	&t2461_TI, "Current", &m13508_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2461_PIs[] =
{
	&t2461____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2461____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2461_m13504_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2461_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13504_MI = 
{
	".ctor", (methodPointerType)&m13504, &t2461_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2461_m13504_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2461_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13505_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13505, &t2461_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2461_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13506_MI = 
{
	"Dispose", (methodPointerType)&m13506, &t2461_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2461_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13507_MI = 
{
	"MoveNext", (methodPointerType)&m13507, &t2461_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2461_TI;
extern Il2CppType t379_0_0_0;
extern void* RuntimeInvoker_t379 (MethodInfo* method, void* obj, void** args);
MethodInfo m13508_MI = 
{
	"get_Current", (methodPointerType)&m13508, &t2461_TI, &t379_0_0_0, RuntimeInvoker_t379, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2461_MIs[] =
{
	&m13504_MI,
	&m13505_MI,
	&m13506_MI,
	&m13507_MI,
	&m13508_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13505_MI;
extern MethodInfo m13507_MI;
extern MethodInfo m13506_MI;
extern MethodInfo m13508_MI;
static MethodInfo* t2461_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13505_MI,
	&m13507_MI,
	&m13506_MI,
	&m13508_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3859_TI;
static TypeInfo* t2461_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3859_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3859_TI;
static Il2CppInterfaceOffsetPair t2461_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3859_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2461_0_0_0;
extern Il2CppType t2461_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2461_TI;
extern Il2CppGenericClass t2461_GC;
extern TypeInfo t122_TI;
TypeInfo t2461_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2461_MIs, t2461_PIs, t2461_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2461_TI, t2461_ITIs, t2461_VT, &EmptyCustomAttributesCache, &t2461_TI, &t2461_0_0_0, &t2461_1_0_0, t2461_IOs, &t2461_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2461)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4763_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Slider/Axis>
extern MethodInfo m27827_MI;
static PropertyInfo t4763____Count_PropertyInfo = 
{
	&t4763_TI, "Count", &m27827_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27828_MI;
static PropertyInfo t4763____IsReadOnly_PropertyInfo = 
{
	&t4763_TI, "IsReadOnly", &m27828_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4763_PIs[] =
{
	&t4763____Count_PropertyInfo,
	&t4763____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4763_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27827_MI = 
{
	"get_Count", NULL, &t4763_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4763_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27828_MI = 
{
	"get_IsReadOnly", NULL, &t4763_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t379_0_0_0;
static ParameterInfo t4763_m27829_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t379_0_0_0},
};
extern TypeInfo t4763_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27829_MI = 
{
	"Add", NULL, &t4763_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4763_m27829_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4763_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27830_MI = 
{
	"Clear", NULL, &t4763_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t379_0_0_0;
static ParameterInfo t4763_m27831_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t379_0_0_0},
};
extern TypeInfo t4763_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27831_MI = 
{
	"Contains", NULL, &t4763_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4763_m27831_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3624_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4763_m27832_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3624_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4763_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27832_MI = 
{
	"CopyTo", NULL, &t4763_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4763_m27832_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t379_0_0_0;
static ParameterInfo t4763_m27833_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t379_0_0_0},
};
extern TypeInfo t4763_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27833_MI = 
{
	"Remove", NULL, &t4763_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4763_m27833_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4763_MIs[] =
{
	&m27827_MI,
	&m27828_MI,
	&m27829_MI,
	&m27830_MI,
	&m27831_MI,
	&m27832_MI,
	&m27833_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4765_TI;
static TypeInfo* t4763_ITIs[] = 
{
	&t703_TI,
	&t4765_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4763_0_0_0;
extern Il2CppType t4763_1_0_0;
struct t4763;
extern TypeInfo t4763_TI;
extern Il2CppGenericClass t4763_GC;
TypeInfo t4763_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4763_MIs, t4763_PIs, NULL, NULL, NULL, NULL, NULL, &t4763_TI, t4763_ITIs, NULL, &EmptyCustomAttributesCache, &t4763_TI, &t4763_0_0_0, &t4763_1_0_0, NULL, &t4763_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4765_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Slider/Axis>
extern TypeInfo t4765_TI;
extern Il2CppType t3859_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27834_MI = 
{
	"GetEnumerator", NULL, &t4765_TI, &t3859_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4765_MIs[] =
{
	&m27834_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4765_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4765_0_0_0;
extern Il2CppType t4765_1_0_0;
struct t4765;
extern TypeInfo t4765_TI;
extern Il2CppGenericClass t4765_GC;
TypeInfo t4765_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4765_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4765_TI, t4765_ITIs, NULL, &EmptyCustomAttributesCache, &t4765_TI, &t4765_0_0_0, &t4765_1_0_0, NULL, &t4765_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4764_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Slider/Axis>
extern MethodInfo m27835_MI;
extern MethodInfo m27836_MI;
static PropertyInfo t4764____Item_PropertyInfo = 
{
	&t4764_TI, "Item", &m27835_MI, &m27836_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4764_PIs[] =
{
	&t4764____Item_PropertyInfo,
	NULL
};
extern Il2CppType t379_0_0_0;
static ParameterInfo t4764_m27837_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t379_0_0_0},
};
extern TypeInfo t4764_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27837_MI = 
{
	"IndexOf", NULL, &t4764_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t4764_m27837_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t379_0_0_0;
static ParameterInfo t4764_m27838_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t379_0_0_0},
};
extern TypeInfo t4764_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27838_MI = 
{
	"Insert", NULL, &t4764_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4764_m27838_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4764_m27839_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4764_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27839_MI = 
{
	"RemoveAt", NULL, &t4764_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4764_m27839_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4764_m27835_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4764_TI;
extern Il2CppType t379_0_0_0;
extern void* RuntimeInvoker_t379_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27835_MI = 
{
	"get_Item", NULL, &t4764_TI, &t379_0_0_0, RuntimeInvoker_t379_t134, t4764_m27835_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t379_0_0_0;
static ParameterInfo t4764_m27836_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t379_0_0_0},
};
extern TypeInfo t4764_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27836_MI = 
{
	"set_Item", NULL, &t4764_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4764_m27836_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4764_MIs[] =
{
	&m27837_MI,
	&m27838_MI,
	&m27839_MI,
	&m27835_MI,
	&m27836_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4763_TI;
extern TypeInfo t4765_TI;
static TypeInfo* t4764_ITIs[] = 
{
	&t703_TI,
	&t4763_TI,
	&t4765_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4764_0_0_0;
extern Il2CppType t4764_1_0_0;
struct t4764;
extern TypeInfo t4764_TI;
extern Il2CppGenericClass t4764_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4764_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4764_MIs, t4764_PIs, NULL, NULL, NULL, NULL, NULL, &t4764_TI, t4764_ITIs, NULL, &t1518__CustomAttributeCache, &t4764_TI, &t4764_0_0_0, &t4764_1_0_0, NULL, &t4764_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t383.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t383_TI;
#include "t383MD.h"

#include "t381.h"
#include "t2469.h"
#include "t2466.h"
#include "t2467.h"
#include "t165.h"
#include "t2475.h"
#include "t2468.h"
extern TypeInfo t383_TI;
extern TypeInfo t381_TI;
extern TypeInfo t134_TI;
extern TypeInfo t123_TI;
extern TypeInfo t445_TI;
extern TypeInfo t685_TI;
extern TypeInfo t1386_TI;
extern TypeInfo t1351_TI;
extern TypeInfo t2465_TI;
extern TypeInfo t2462_TI;
extern TypeInfo t2469_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2463_TI;
extern TypeInfo t2464_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2466_TI;
extern TypeInfo t165_TI;
extern TypeInfo t2467_TI;
extern TypeInfo t2475_TI;
#include "t1351MD.h"
#include "t25MD.h"
#include "t702MD.h"
#include "t2466MD.h"
#include "t165MD.h"
#include "t2467MD.h"
#include "t2469MD.h"
#include "t2475MD.h"
extern MethodInfo m2380_MI;
extern MethodInfo m13553_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m6998_MI;
extern MethodInfo m20712_MI;
extern MethodInfo m6999_MI;
extern MethodInfo m13541_MI;
extern MethodInfo m452_MI;
extern MethodInfo m13543_MI;
extern MethodInfo m13529_MI;
extern MethodInfo m27840_MI;
extern MethodInfo m13528_MI;
extern MethodInfo m13538_MI;
extern MethodInfo m4283_MI;
extern MethodInfo m2385_MI;
extern MethodInfo m13533_MI;
extern MethodInfo m13539_MI;
extern MethodInfo m13542_MI;
extern MethodInfo m13544_MI;
extern MethodInfo m13527_MI;
extern MethodInfo m13551_MI;
extern MethodInfo m7436_MI;
extern MethodInfo m13552_MI;
extern MethodInfo m27841_MI;
extern MethodInfo m27842_MI;
extern MethodInfo m27843_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m13565_MI;
extern MethodInfo m4279_MI;
extern MethodInfo m20714_MI;
extern MethodInfo m13536_MI;
extern MethodInfo m13537_MI;
extern MethodInfo m489_MI;
extern MethodInfo m13640_MI;
extern MethodInfo m13559_MI;
extern MethodInfo m13540_MI;
extern MethodInfo m2386_MI;
extern MethodInfo m4295_MI;
extern MethodInfo m13646_MI;
extern MethodInfo m20716_MI;
extern MethodInfo m20724_MI;
extern MethodInfo m4282_MI;
struct t122;
struct t122;
 void m18837_gshared (t25 * __this, t158** p0, int32_t p1, MethodInfo* method);
#define m18837(__this, p0, p1, method) (void)m18837_gshared((t25 *)__this, (t158**)p0, (int32_t)p1, method)
#define m20712(__this, p0, p1, method) (void)m18837_gshared((t25 *)__this, (t158**)p0, (int32_t)p1, method)
extern MethodInfo m20712_MI;
struct t122;
#include "t2473.h"
struct t122;
#include "t1603.h"
 int32_t m8232_gshared (t25 * __this, t158* p0, t25 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m8232(__this, p0, p1, p2, p3, method) (int32_t)m8232_gshared((t25 *)__this, (t158*)p0, (t25 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m20714(__this, p0, p1, p2, p3, method) (int32_t)m8232_gshared((t25 *)__this, (t158*)p0, (t25 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m20714_MI;
struct t122;
struct t122;
 void m18840_gshared (t25 * __this, t158* p0, int32_t p1, int32_t p2, t25* p3, MethodInfo* method);
#define m18840(__this, p0, p1, p2, p3, method) (void)m18840_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (int32_t)p2, (t25*)p3, method)
#define m20716(__this, p0, p1, p2, p3, method) (void)m18840_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (int32_t)p2, (t25*)p3, method)
extern MethodInfo m20716_MI;
struct t122;
#include "t168.h"
struct t122;
#include "t1889.h"
 void m18914_gshared (t25 * __this, t158* p0, int32_t p1, t1889 * p2, MethodInfo* method);
#define m18914(__this, p0, p1, p2, method) (void)m18914_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (t1889 *)p2, method)
#define m20724(__this, p0, p1, p2, method) (void)m18914_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (t1889 *)p2, method)
extern MethodInfo m20724_MI;


extern MethodInfo m13538_MI;
 t2469  m13538 (t383 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13538_MI);
	{
		t2469  L_0 = {0};
		m13559(&L_0, __this, &m13559_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern Il2CppType t134_0_0_32849;
FieldInfo t383_f0_FieldInfo = 
{
	"DefaultCapacity", &t134_0_0_32849, &t383_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2462_0_0_1;
FieldInfo t383_f1_FieldInfo = 
{
	"_items", &t2462_0_0_1, &t383_TI, offsetof(t383, f1), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t383_f2_FieldInfo = 
{
	"_size", &t134_0_0_1, &t383_TI, offsetof(t383, f2), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t383_f3_FieldInfo = 
{
	"_version", &t134_0_0_1, &t383_TI, offsetof(t383, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2462_0_0_49;
FieldInfo t383_f4_FieldInfo = 
{
	"EmptyArray", &t2462_0_0_49, &t383_TI, offsetof(t383_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t383_FIs[] =
{
	&t383_f0_FieldInfo,
	&t383_f1_FieldInfo,
	&t383_f2_FieldInfo,
	&t383_f3_FieldInfo,
	&t383_f4_FieldInfo,
	NULL
};
static const int32_t t383_f0_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t383_f0_DefaultValue = 
{
	&t383_f0_FieldInfo, { (char*)&t383_f0_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t383_FDVs[] = 
{
	&t383_f0_DefaultValue,
	NULL
};
extern MethodInfo m13520_MI;
static PropertyInfo t383____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t383_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13520_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13521_MI;
static PropertyInfo t383____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t383_TI, "System.Collections.ICollection.IsSynchronized", &m13521_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13522_MI;
static PropertyInfo t383____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t383_TI, "System.Collections.ICollection.SyncRoot", &m13522_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13523_MI;
static PropertyInfo t383____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t383_TI, "System.Collections.IList.IsFixedSize", &m13523_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13524_MI;
static PropertyInfo t383____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t383_TI, "System.Collections.IList.IsReadOnly", &m13524_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13525_MI;
extern MethodInfo m13526_MI;
static PropertyInfo t383____System_Collections_IList_Item_PropertyInfo = 
{
	&t383_TI, "System.Collections.IList.Item", &m13525_MI, &m13526_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13551_MI;
extern MethodInfo m13552_MI;
static PropertyInfo t383____Capacity_PropertyInfo = 
{
	&t383_TI, "Capacity", &m13551_MI, &m13552_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2381_MI;
static PropertyInfo t383____Count_PropertyInfo = 
{
	&t383_TI, "Count", &m2381_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2380_MI;
extern MethodInfo m13553_MI;
static PropertyInfo t383____Item_PropertyInfo = 
{
	&t383_TI, "Item", &m2380_MI, &m13553_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t383_PIs[] =
{
	&t383____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t383____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t383____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t383____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t383____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t383____System_Collections_IList_Item_PropertyInfo,
	&t383____Capacity_PropertyInfo,
	&t383____Count_PropertyInfo,
	&t383____Item_PropertyInfo,
	NULL
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2377_MI = 
{
	".ctor", (methodPointerType)&m9248_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2463_0_0_0;
static ParameterInfo t383_m13509_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2463_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13509_MI = 
{
	".ctor", (methodPointerType)&m9250_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t383_m13509_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t383_m13510_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13510_MI = 
{
	".ctor", (methodPointerType)&m9252_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t383_m13510_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13511_MI = 
{
	".cctor", (methodPointerType)&m9254_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t2464_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13512_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m9256_gshared, &t383_TI, &t2464_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t383_m13513_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13513_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9258_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t383_m13513_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13514_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9260_gshared, &t383_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t383_m13515_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13515_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9262_gshared, &t383_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t383_m13515_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t383_m13516_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13516_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9264_gshared, &t383_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t383_m13516_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t383_m13517_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13517_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9266_gshared, &t383_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t383_m13517_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t383_m13518_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13518_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9268_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t383_m13518_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t383_m13519_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13519_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9270_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t383_m13519_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13520_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9272_gshared, &t383_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13521_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9274_gshared, &t383_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13522_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9276_gshared, &t383_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13523_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9278_gshared, &t383_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13524_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9280_gshared, &t383_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t383_m13525_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13525_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9282_gshared, &t383_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t383_m13525_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t383_m13526_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13526_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9284_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t383_m13526_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t383_m2385_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2385_MI = 
{
	"Add", (methodPointerType)&m9285_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t383_m2385_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t383_m13527_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13527_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m9287_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t383_m13527_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2465_0_0_0;
static ParameterInfo t383_m13528_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2465_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13528_MI = 
{
	"AddCollection", (methodPointerType)&m9289_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t383_m13528_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2463_0_0_0;
static ParameterInfo t383_m13529_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2463_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13529_MI = 
{
	"AddEnumerable", (methodPointerType)&m9291_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t383_m13529_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2463_0_0_0;
static ParameterInfo t383_m13530_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2463_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13530_MI = 
{
	"AddRange", (methodPointerType)&m9293_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t383_m13530_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t2466_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13531_MI = 
{
	"AsReadOnly", (methodPointerType)&m9295_gshared, &t383_TI, &t2466_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13532_MI = 
{
	"Clear", (methodPointerType)&m9297_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t383_m13533_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13533_MI = 
{
	"Contains", (methodPointerType)&m9299_gshared, &t383_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t383_m13533_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2462_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t383_m13534_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2462_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13534_MI = 
{
	"CopyTo", (methodPointerType)&m9301_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t383_m13534_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2467_0_0_0;
static ParameterInfo t383_m13535_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2467_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t381_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13535_MI = 
{
	"Find", (methodPointerType)&m9303_gshared, &t383_TI, &t381_0_0_0, RuntimeInvoker_t25_t25, t383_m13535_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2467_0_0_0;
static ParameterInfo t383_m13536_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2467_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13536_MI = 
{
	"CheckMatch", (methodPointerType)&m9305_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t383_m13536_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t2467_0_0_0;
static ParameterInfo t383_m13537_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2467_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13537_MI = 
{
	"GetIndex", (methodPointerType)&m9307_gshared, &t383_TI, &t134_0_0_0, RuntimeInvoker_t134_t134_t134_t25, t383_m13537_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t2469_0_0_0;
extern void* RuntimeInvoker_t2469 (MethodInfo* method, void* obj, void** args);
MethodInfo m13538_MI = 
{
	"GetEnumerator", (methodPointerType)&m13538, &t383_TI, &t2469_0_0_0, RuntimeInvoker_t2469, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t383_m13539_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13539_MI = 
{
	"IndexOf", (methodPointerType)&m9310_gshared, &t383_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t383_m13539_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t383_m13540_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13540_MI = 
{
	"Shift", (methodPointerType)&m9312_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t383_m13540_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t383_m13541_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13541_MI = 
{
	"CheckIndex", (methodPointerType)&m9314_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t383_m13541_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t383_m13542_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13542_MI = 
{
	"Insert", (methodPointerType)&m9316_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t383_m13542_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2463_0_0_0;
static ParameterInfo t383_m13543_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2463_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13543_MI = 
{
	"CheckCollection", (methodPointerType)&m9318_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t383_m13543_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t383_m13544_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13544_MI = 
{
	"Remove", (methodPointerType)&m9320_gshared, &t383_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t383_m13544_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2467_0_0_0;
static ParameterInfo t383_m13545_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2467_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13545_MI = 
{
	"RemoveAll", (methodPointerType)&m9322_gshared, &t383_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t383_m13545_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t383_m2386_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m2386_MI = 
{
	"RemoveAt", (methodPointerType)&m9324_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t383_m2386_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13546_MI = 
{
	"Reverse", (methodPointerType)&m9326_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13547_MI = 
{
	"Sort", (methodPointerType)&m9328_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2468_0_0_0;
static ParameterInfo t383_m13548_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2468_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13548_MI = 
{
	"Sort", (methodPointerType)&m9330_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t383_m13548_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t2462_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13549_MI = 
{
	"ToArray", (methodPointerType)&m9332_gshared, &t383_TI, &t2462_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13550_MI = 
{
	"TrimExcess", (methodPointerType)&m9334_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13551_MI = 
{
	"get_Capacity", (methodPointerType)&m9336_gshared, &t383_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t383_m13552_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13552_MI = 
{
	"set_Capacity", (methodPointerType)&m9338_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t383_m13552_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t383_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m2381_MI = 
{
	"get_Count", (methodPointerType)&m9340_gshared, &t383_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t383_m2380_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t381_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m2380_MI = 
{
	"get_Item", (methodPointerType)&m9342_gshared, &t383_TI, &t381_0_0_0, RuntimeInvoker_t25_t134, t383_m2380_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t383_m13553_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t383_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13553_MI = 
{
	"set_Item", (methodPointerType)&m9344_gshared, &t383_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t383_m13553_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t383_MIs[] =
{
	&m2377_MI,
	&m13509_MI,
	&m13510_MI,
	&m13511_MI,
	&m13512_MI,
	&m13513_MI,
	&m13514_MI,
	&m13515_MI,
	&m13516_MI,
	&m13517_MI,
	&m13518_MI,
	&m13519_MI,
	&m13520_MI,
	&m13521_MI,
	&m13522_MI,
	&m13523_MI,
	&m13524_MI,
	&m13525_MI,
	&m13526_MI,
	&m2385_MI,
	&m13527_MI,
	&m13528_MI,
	&m13529_MI,
	&m13530_MI,
	&m13531_MI,
	&m13532_MI,
	&m13533_MI,
	&m13534_MI,
	&m13535_MI,
	&m13536_MI,
	&m13537_MI,
	&m13538_MI,
	&m13539_MI,
	&m13540_MI,
	&m13541_MI,
	&m13542_MI,
	&m13543_MI,
	&m13544_MI,
	&m13545_MI,
	&m2386_MI,
	&m13546_MI,
	&m13547_MI,
	&m13548_MI,
	&m13549_MI,
	&m13550_MI,
	&m13551_MI,
	&m13552_MI,
	&m2381_MI,
	&m2380_MI,
	&m13553_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13514_MI;
extern MethodInfo m2381_MI;
extern MethodInfo m13521_MI;
extern MethodInfo m13522_MI;
extern MethodInfo m13513_MI;
extern MethodInfo m13523_MI;
extern MethodInfo m13524_MI;
extern MethodInfo m13525_MI;
extern MethodInfo m13526_MI;
extern MethodInfo m13515_MI;
extern MethodInfo m13532_MI;
extern MethodInfo m13516_MI;
extern MethodInfo m13517_MI;
extern MethodInfo m13518_MI;
extern MethodInfo m13519_MI;
extern MethodInfo m2386_MI;
extern MethodInfo m2381_MI;
extern MethodInfo m13520_MI;
extern MethodInfo m2385_MI;
extern MethodInfo m13532_MI;
extern MethodInfo m13533_MI;
extern MethodInfo m13534_MI;
extern MethodInfo m13544_MI;
extern MethodInfo m13512_MI;
extern MethodInfo m13539_MI;
extern MethodInfo m13542_MI;
extern MethodInfo m2386_MI;
extern MethodInfo m2380_MI;
extern MethodInfo m13553_MI;
static MethodInfo* t383_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13514_MI,
	&m2381_MI,
	&m13521_MI,
	&m13522_MI,
	&m13513_MI,
	&m13523_MI,
	&m13524_MI,
	&m13525_MI,
	&m13526_MI,
	&m13515_MI,
	&m13532_MI,
	&m13516_MI,
	&m13517_MI,
	&m13518_MI,
	&m13519_MI,
	&m2386_MI,
	&m2381_MI,
	&m13520_MI,
	&m2385_MI,
	&m13532_MI,
	&m13533_MI,
	&m13534_MI,
	&m13544_MI,
	&m13512_MI,
	&m13539_MI,
	&m13542_MI,
	&m2386_MI,
	&m2380_MI,
	&m13553_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2465_TI;
extern TypeInfo t2463_TI;
extern TypeInfo t2471_TI;
static TypeInfo* t383_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t2465_TI,
	&t2463_TI,
	&t2471_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2465_TI;
extern TypeInfo t2463_TI;
extern TypeInfo t2471_TI;
static Il2CppInterfaceOffsetPair t383_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t2465_TI, 20},
	{ &t2463_TI, 27},
	{ &t2471_TI, 28},
};
extern TypeInfo t383_TI;
extern MethodInfo m13543_MI;
extern TypeInfo t2465_TI;
extern MethodInfo m13529_MI;
extern MethodInfo m27840_MI;
extern TypeInfo t2462_TI;
extern MethodInfo m13528_MI;
extern MethodInfo m13538_MI;
extern TypeInfo t2469_TI;
extern TypeInfo t381_TI;
extern MethodInfo m2385_MI;
extern MethodInfo m13533_MI;
extern MethodInfo m13539_MI;
extern MethodInfo m13541_MI;
extern MethodInfo m13542_MI;
extern MethodInfo m13544_MI;
extern MethodInfo m2380_MI;
extern MethodInfo m13553_MI;
extern MethodInfo m13527_MI;
extern MethodInfo m13551_MI;
extern MethodInfo m13552_MI;
extern MethodInfo m27841_MI;
extern MethodInfo m27842_MI;
extern MethodInfo m27843_MI;
extern TypeInfo t2466_TI;
extern MethodInfo m13565_MI;
extern MethodInfo m20714_MI;
extern MethodInfo m13536_MI;
extern MethodInfo m13537_MI;
extern MethodInfo m13640_MI;
extern MethodInfo m13559_MI;
extern MethodInfo m13540_MI;
extern MethodInfo m2386_MI;
extern MethodInfo m13646_MI;
extern MethodInfo m20716_MI;
extern MethodInfo m20724_MI;
extern MethodInfo m20712_MI;
static void* t383_RGCTXData[37] = 
{
	&t383_TI,
	&m13543_MI,
	&t2465_TI,
	&m13529_MI,
	&m27840_MI,
	&t2462_TI,
	&m13528_MI,
	&m13538_MI,
	&t2469_TI,
	&t381_TI,
	&m2385_MI,
	&m13533_MI,
	&m13539_MI,
	&m13541_MI,
	&m13542_MI,
	&m13544_MI,
	&m2380_MI,
	&m13553_MI,
	&m13527_MI,
	&m13551_MI,
	&m13552_MI,
	&m27841_MI,
	&m27842_MI,
	&m27843_MI,
	&t2466_TI,
	&m13565_MI,
	&m20714_MI,
	&m13536_MI,
	&m13537_MI,
	&m13640_MI,
	&m13559_MI,
	&m13540_MI,
	&m2386_MI,
	&m13646_MI,
	&m20716_MI,
	&m20724_MI,
	&m20712_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t383_0_0_0;
extern Il2CppType t383_1_0_0;
extern TypeInfo t25_TI;
struct t383;
extern TypeInfo t383_TI;
extern Il2CppGenericClass t383_GC;
extern CustomAttributesCache t957__CustomAttributeCache;
TypeInfo t383_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t383_MIs, t383_PIs, t383_FIs, NULL, &t25_TI, NULL, NULL, &t383_TI, t383_ITIs, t383_VT, &t957__CustomAttributeCache, &t383_TI, &t383_0_0_0, &t383_1_0_0, t383_IOs, &t383_GC, NULL, t383_FDVs, NULL, t383_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t383), 0, -1, sizeof(t383_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 50, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2465_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern MethodInfo m27840_MI;
static PropertyInfo t2465____Count_PropertyInfo = 
{
	&t2465_TI, "Count", &m27840_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27844_MI;
static PropertyInfo t2465____IsReadOnly_PropertyInfo = 
{
	&t2465_TI, "IsReadOnly", &m27844_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2465_PIs[] =
{
	&t2465____Count_PropertyInfo,
	&t2465____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t2465_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27840_MI = 
{
	"get_Count", NULL, &t2465_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2465_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27844_MI = 
{
	"get_IsReadOnly", NULL, &t2465_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t2465_m27845_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2465_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27845_MI = 
{
	"Add", NULL, &t2465_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2465_m27845_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2465_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27846_MI = 
{
	"Clear", NULL, &t2465_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t2465_m27847_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2465_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27847_MI = 
{
	"Contains", NULL, &t2465_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2465_m27847_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2462_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2465_m27841_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2462_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2465_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27841_MI = 
{
	"CopyTo", NULL, &t2465_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2465_m27841_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t2465_m27848_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2465_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27848_MI = 
{
	"Remove", NULL, &t2465_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2465_m27848_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2465_MIs[] =
{
	&m27840_MI,
	&m27844_MI,
	&m27845_MI,
	&m27846_MI,
	&m27847_MI,
	&m27841_MI,
	&m27848_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t2463_TI;
static TypeInfo* t2465_ITIs[] = 
{
	&t703_TI,
	&t2463_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2465_0_0_0;
extern Il2CppType t2465_1_0_0;
struct t2465;
extern TypeInfo t2465_TI;
extern Il2CppGenericClass t2465_GC;
TypeInfo t2465_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2465_MIs, t2465_PIs, NULL, NULL, NULL, NULL, NULL, &t2465_TI, t2465_ITIs, NULL, &EmptyCustomAttributesCache, &t2465_TI, &t2465_0_0_0, &t2465_1_0_0, NULL, &t2465_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2463_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern TypeInfo t2463_TI;
extern Il2CppType t2464_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27842_MI = 
{
	"GetEnumerator", NULL, &t2463_TI, &t2464_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2463_MIs[] =
{
	&m27842_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t2463_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2463_0_0_0;
extern Il2CppType t2463_1_0_0;
struct t2463;
extern TypeInfo t2463_TI;
extern Il2CppGenericClass t2463_GC;
TypeInfo t2463_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2463_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2463_TI, t2463_ITIs, NULL, &EmptyCustomAttributesCache, &t2463_TI, &t2463_0_0_0, &t2463_1_0_0, NULL, &t2463_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2464_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern MethodInfo m27843_MI;
static PropertyInfo t2464____Current_PropertyInfo = 
{
	&t2464_TI, "Current", &m27843_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2464_PIs[] =
{
	&t2464____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2464_TI;
extern Il2CppType t381_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27843_MI = 
{
	"get_Current", NULL, &t2464_TI, &t381_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2464_MIs[] =
{
	&m27843_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t2464_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2464_0_0_0;
extern Il2CppType t2464_1_0_0;
struct t2464;
extern TypeInfo t2464_TI;
extern Il2CppGenericClass t2464_GC;
TypeInfo t2464_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2464_MIs, t2464_PIs, NULL, NULL, NULL, NULL, NULL, &t2464_TI, t2464_ITIs, NULL, &EmptyCustomAttributesCache, &t2464_TI, &t2464_0_0_0, &t2464_1_0_0, NULL, &t2464_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2470.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2470_TI;
#include "t2470MD.h"

extern TypeInfo t2470_TI;
extern TypeInfo t381_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13558_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20701_MI;
struct t122;
#define m20701(__this, p0, method) (t381 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m20701_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern Il2CppType t122_0_0_1;
FieldInfo t2470_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2470_TI, offsetof(t2470, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2470_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2470_TI, offsetof(t2470, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2470_FIs[] =
{
	&t2470_f0_FieldInfo,
	&t2470_f1_FieldInfo,
	NULL
};
extern MethodInfo m13555_MI;
static PropertyInfo t2470____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2470_TI, "System.Collections.IEnumerator.Current", &m13555_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13558_MI;
static PropertyInfo t2470____Current_PropertyInfo = 
{
	&t2470_TI, "Current", &m13558_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2470_PIs[] =
{
	&t2470____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2470____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2470_m13554_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2470_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13554_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t2470_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2470_m13554_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2470_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13555_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t2470_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2470_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13556_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t2470_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2470_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13557_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t2470_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2470_TI;
extern Il2CppType t381_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13558_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t2470_TI, &t381_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2470_MIs[] =
{
	&m13554_MI,
	&m13555_MI,
	&m13556_MI,
	&m13557_MI,
	&m13558_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13555_MI;
extern MethodInfo m13557_MI;
extern MethodInfo m13556_MI;
extern MethodInfo m13558_MI;
static MethodInfo* t2470_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13555_MI,
	&m13557_MI,
	&m13556_MI,
	&m13558_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2464_TI;
static TypeInfo* t2470_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2464_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2464_TI;
static Il2CppInterfaceOffsetPair t2470_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2464_TI, 7},
};
extern MethodInfo m13558_MI;
extern TypeInfo t381_TI;
extern MethodInfo m20701_MI;
static void* t2470_RGCTXData[3] = 
{
	&m13558_MI,
	&t381_TI,
	&m20701_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2470_0_0_0;
extern Il2CppType t2470_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2470_TI;
extern Il2CppGenericClass t2470_GC;
extern TypeInfo t122_TI;
TypeInfo t2470_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2470_MIs, t2470_PIs, t2470_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2470_TI, t2470_ITIs, t2470_VT, &EmptyCustomAttributesCache, &t2470_TI, &t2470_0_0_0, &t2470_1_0_0, t2470_IOs, &t2470_GC, NULL, NULL, NULL, t2470_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2470)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2471_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern MethodInfo m27849_MI;
extern MethodInfo m27850_MI;
static PropertyInfo t2471____Item_PropertyInfo = 
{
	&t2471_TI, "Item", &m27849_MI, &m27850_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2471_PIs[] =
{
	&t2471____Item_PropertyInfo,
	NULL
};
extern Il2CppType t381_0_0_0;
static ParameterInfo t2471_m27851_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2471_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27851_MI = 
{
	"IndexOf", NULL, &t2471_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2471_m27851_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t2471_m27852_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2471_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27852_MI = 
{
	"Insert", NULL, &t2471_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2471_m27852_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2471_m27853_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2471_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27853_MI = 
{
	"RemoveAt", NULL, &t2471_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2471_m27853_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2471_m27849_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2471_TI;
extern Il2CppType t381_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27849_MI = 
{
	"get_Item", NULL, &t2471_TI, &t381_0_0_0, RuntimeInvoker_t25_t134, t2471_m27849_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t2471_m27850_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2471_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27850_MI = 
{
	"set_Item", NULL, &t2471_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2471_m27850_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2471_MIs[] =
{
	&m27851_MI,
	&m27852_MI,
	&m27853_MI,
	&m27849_MI,
	&m27850_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t2465_TI;
extern TypeInfo t2463_TI;
static TypeInfo* t2471_ITIs[] = 
{
	&t703_TI,
	&t2465_TI,
	&t2463_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2471_0_0_0;
extern Il2CppType t2471_1_0_0;
struct t2471;
extern TypeInfo t2471_TI;
extern Il2CppGenericClass t2471_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t2471_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t2471_MIs, t2471_PIs, NULL, NULL, NULL, NULL, NULL, &t2471_TI, t2471_ITIs, NULL, &t1518__CustomAttributeCache, &t2471_TI, &t2471_0_0_0, &t2471_1_0_0, NULL, &t2471_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2469_TI;

#include "t1404.h"
extern TypeInfo t2469_TI;
extern TypeInfo t1387_TI;
extern TypeInfo t381_TI;
extern TypeInfo t383_TI;
extern TypeInfo t131_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1404_TI;
#include "t1404MD.h"
extern MethodInfo m13562_MI;
extern MethodInfo m7430_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m3520_MI;
extern MethodInfo m7635_MI;
extern MethodInfo m7431_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.StencilMaterial/MatEntry>
extern Il2CppType t383_0_0_1;
FieldInfo t2469_f0_FieldInfo = 
{
	"l", &t383_0_0_1, &t2469_TI, offsetof(t2469, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2469_f1_FieldInfo = 
{
	"next", &t134_0_0_1, &t2469_TI, offsetof(t2469, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2469_f2_FieldInfo = 
{
	"ver", &t134_0_0_1, &t2469_TI, offsetof(t2469, f2) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t381_0_0_1;
FieldInfo t2469_f3_FieldInfo = 
{
	"current", &t381_0_0_1, &t2469_TI, offsetof(t2469, f3) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2469_FIs[] =
{
	&t2469_f0_FieldInfo,
	&t2469_f1_FieldInfo,
	&t2469_f2_FieldInfo,
	&t2469_f3_FieldInfo,
	NULL
};
extern MethodInfo m13560_MI;
static PropertyInfo t2469____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2469_TI, "System.Collections.IEnumerator.Current", &m13560_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13564_MI;
static PropertyInfo t2469____Current_PropertyInfo = 
{
	&t2469_TI, "Current", &m13564_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2469_PIs[] =
{
	&t2469____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2469____Current_PropertyInfo,
	NULL
};
extern Il2CppType t383_0_0_0;
static ParameterInfo t2469_m13559_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t383_0_0_0},
};
extern TypeInfo t2469_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13559_MI = 
{
	".ctor", (methodPointerType)&m9346_gshared, &t2469_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2469_m13559_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2469_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13560_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m9347_gshared, &t2469_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2469_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13561_MI = 
{
	"Dispose", (methodPointerType)&m9348_gshared, &t2469_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2469_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13562_MI = 
{
	"VerifyState", (methodPointerType)&m9349_gshared, &t2469_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2469_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13563_MI = 
{
	"MoveNext", (methodPointerType)&m9350_gshared, &t2469_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2469_TI;
extern Il2CppType t381_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13564_MI = 
{
	"get_Current", (methodPointerType)&m9351_gshared, &t2469_TI, &t381_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2469_MIs[] =
{
	&m13559_MI,
	&m13560_MI,
	&m13561_MI,
	&m13562_MI,
	&m13563_MI,
	&m13564_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13560_MI;
extern MethodInfo m13563_MI;
extern MethodInfo m13561_MI;
extern MethodInfo m13564_MI;
static MethodInfo* t2469_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13560_MI,
	&m13563_MI,
	&m13561_MI,
	&m13564_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2464_TI;
static TypeInfo* t2469_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2464_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2464_TI;
static Il2CppInterfaceOffsetPair t2469_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2464_TI, 7},
};
extern MethodInfo m13562_MI;
extern TypeInfo t381_TI;
extern TypeInfo t2469_TI;
static void* t2469_RGCTXData[3] = 
{
	&m13562_MI,
	&t381_TI,
	&t2469_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2469_0_0_0;
extern Il2CppType t2469_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2469_TI;
extern Il2CppGenericClass t2469_GC;
extern TypeInfo t957_TI;
TypeInfo t2469_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2469_MIs, t2469_PIs, t2469_FIs, NULL, &t117_TI, NULL, &t957_TI, &t2469_TI, t2469_ITIs, t2469_VT, &EmptyCustomAttributesCache, &t2469_TI, &t2469_0_0_0, &t2469_1_0_0, t2469_IOs, &t2469_GC, NULL, NULL, NULL, t2469_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2469)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2466_TI;

#include "t177.h"
extern TypeInfo t2466_TI;
extern TypeInfo t381_TI;
extern TypeInfo t134_TI;
extern TypeInfo t177_TI;
extern TypeInfo t2471_TI;
extern TypeInfo t2465_TI;
extern TypeInfo t165_TI;
extern TypeInfo t759_TI;
extern TypeInfo t123_TI;
extern TypeInfo t122_TI;
extern TypeInfo t703_TI;
extern TypeInfo t78_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2462_TI;
extern TypeInfo t2463_TI;
extern TypeInfo t2464_TI;
#include "t177MD.h"
#include "t2472MD.h"
extern MethodInfo m13594_MI;
extern MethodInfo m566_MI;
extern MethodInfo m27849_MI;
extern MethodInfo m27840_MI;
extern MethodInfo m452_MI;
extern MethodInfo m489_MI;
extern MethodInfo m7922_MI;
extern MethodInfo m7831_MI;
extern MethodInfo m13626_MI;
extern MethodInfo m27847_MI;
extern MethodInfo m27851_MI;
extern MethodInfo m27841_MI;
extern MethodInfo m27842_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern Il2CppType t2471_0_0_1;
FieldInfo t2466_f0_FieldInfo = 
{
	"list", &t2471_0_0_1, &t2466_TI, offsetof(t2466, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2466_FIs[] =
{
	&t2466_f0_FieldInfo,
	NULL
};
extern MethodInfo m13571_MI;
extern MethodInfo m13572_MI;
static PropertyInfo t2466____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2466_TI, "System.Collections.Generic.IList<T>.Item", &m13571_MI, &m13572_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13573_MI;
static PropertyInfo t2466____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2466_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13573_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13583_MI;
static PropertyInfo t2466____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2466_TI, "System.Collections.ICollection.IsSynchronized", &m13583_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13584_MI;
static PropertyInfo t2466____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2466_TI, "System.Collections.ICollection.SyncRoot", &m13584_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13585_MI;
static PropertyInfo t2466____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2466_TI, "System.Collections.IList.IsFixedSize", &m13585_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13586_MI;
static PropertyInfo t2466____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2466_TI, "System.Collections.IList.IsReadOnly", &m13586_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13587_MI;
extern MethodInfo m13588_MI;
static PropertyInfo t2466____System_Collections_IList_Item_PropertyInfo = 
{
	&t2466_TI, "System.Collections.IList.Item", &m13587_MI, &m13588_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13593_MI;
static PropertyInfo t2466____Count_PropertyInfo = 
{
	&t2466_TI, "Count", &m13593_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13594_MI;
static PropertyInfo t2466____Item_PropertyInfo = 
{
	&t2466_TI, "Item", &m13594_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2466_PIs[] =
{
	&t2466____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2466____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2466____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2466____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2466____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2466____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2466____System_Collections_IList_Item_PropertyInfo,
	&t2466____Count_PropertyInfo,
	&t2466____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2471_0_0_0;
static ParameterInfo t2466_m13565_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2471_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13565_MI = 
{
	".ctor", (methodPointerType)&m9352_gshared, &t2466_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2466_m13565_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t2466_m13566_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13566_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m9353_gshared, &t2466_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2466_m13566_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2466_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13567_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m9354_gshared, &t2466_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t2466_m13568_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13568_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m9355_gshared, &t2466_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2466_m13568_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t2466_m13569_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13569_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m9356_gshared, &t2466_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2466_m13569_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2466_m13570_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13570_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m9357_gshared, &t2466_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2466_m13570_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2466_m13571_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t381_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13571_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m9358_gshared, &t2466_TI, &t381_0_0_0, RuntimeInvoker_t25_t134, t2466_m13571_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t2466_m13572_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13572_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m9359_gshared, &t2466_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2466_m13572_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2466_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13573_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9360_gshared, &t2466_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2466_m13574_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13574_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9361_gshared, &t2466_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2466_m13574_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2466_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13575_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9362_gshared, &t2466_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2466_m13576_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13576_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9363_gshared, &t2466_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2466_m13576_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2466_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13577_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m9364_gshared, &t2466_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2466_m13578_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13578_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9365_gshared, &t2466_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2466_m13578_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2466_m13579_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13579_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9366_gshared, &t2466_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2466_m13579_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2466_m13580_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13580_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9367_gshared, &t2466_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2466_m13580_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2466_m13581_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13581_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9368_gshared, &t2466_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2466_m13581_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2466_m13582_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13582_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m9369_gshared, &t2466_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2466_m13582_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2466_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13583_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9370_gshared, &t2466_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2466_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13584_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9371_gshared, &t2466_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2466_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13585_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9372_gshared, &t2466_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2466_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13586_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9373_gshared, &t2466_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2466_m13587_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13587_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9374_gshared, &t2466_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t2466_m13587_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2466_m13588_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13588_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9375_gshared, &t2466_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2466_m13588_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t2466_m13589_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13589_MI = 
{
	"Contains", (methodPointerType)&m9376_gshared, &t2466_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2466_m13589_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2462_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2466_m13590_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2462_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13590_MI = 
{
	"CopyTo", (methodPointerType)&m9377_gshared, &t2466_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2466_m13590_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2466_TI;
extern Il2CppType t2464_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13591_MI = 
{
	"GetEnumerator", (methodPointerType)&m9378_gshared, &t2466_TI, &t2464_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t2466_m13592_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13592_MI = 
{
	"IndexOf", (methodPointerType)&m9379_gshared, &t2466_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2466_m13592_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2466_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13593_MI = 
{
	"get_Count", (methodPointerType)&m9380_gshared, &t2466_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2466_m13594_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2466_TI;
extern Il2CppType t381_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13594_MI = 
{
	"get_Item", (methodPointerType)&m9381_gshared, &t2466_TI, &t381_0_0_0, RuntimeInvoker_t25_t134, t2466_m13594_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2466_MIs[] =
{
	&m13565_MI,
	&m13566_MI,
	&m13567_MI,
	&m13568_MI,
	&m13569_MI,
	&m13570_MI,
	&m13571_MI,
	&m13572_MI,
	&m13573_MI,
	&m13574_MI,
	&m13575_MI,
	&m13576_MI,
	&m13577_MI,
	&m13578_MI,
	&m13579_MI,
	&m13580_MI,
	&m13581_MI,
	&m13582_MI,
	&m13583_MI,
	&m13584_MI,
	&m13585_MI,
	&m13586_MI,
	&m13587_MI,
	&m13588_MI,
	&m13589_MI,
	&m13590_MI,
	&m13591_MI,
	&m13592_MI,
	&m13593_MI,
	&m13594_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13575_MI;
extern MethodInfo m13593_MI;
extern MethodInfo m13583_MI;
extern MethodInfo m13584_MI;
extern MethodInfo m13574_MI;
extern MethodInfo m13585_MI;
extern MethodInfo m13586_MI;
extern MethodInfo m13587_MI;
extern MethodInfo m13588_MI;
extern MethodInfo m13576_MI;
extern MethodInfo m13577_MI;
extern MethodInfo m13578_MI;
extern MethodInfo m13579_MI;
extern MethodInfo m13580_MI;
extern MethodInfo m13581_MI;
extern MethodInfo m13582_MI;
extern MethodInfo m13593_MI;
extern MethodInfo m13573_MI;
extern MethodInfo m13566_MI;
extern MethodInfo m13567_MI;
extern MethodInfo m13589_MI;
extern MethodInfo m13590_MI;
extern MethodInfo m13569_MI;
extern MethodInfo m13592_MI;
extern MethodInfo m13568_MI;
extern MethodInfo m13570_MI;
extern MethodInfo m13571_MI;
extern MethodInfo m13572_MI;
extern MethodInfo m13591_MI;
extern MethodInfo m13594_MI;
static MethodInfo* t2466_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13575_MI,
	&m13593_MI,
	&m13583_MI,
	&m13584_MI,
	&m13574_MI,
	&m13585_MI,
	&m13586_MI,
	&m13587_MI,
	&m13588_MI,
	&m13576_MI,
	&m13577_MI,
	&m13578_MI,
	&m13579_MI,
	&m13580_MI,
	&m13581_MI,
	&m13582_MI,
	&m13593_MI,
	&m13573_MI,
	&m13566_MI,
	&m13567_MI,
	&m13589_MI,
	&m13590_MI,
	&m13569_MI,
	&m13592_MI,
	&m13568_MI,
	&m13570_MI,
	&m13571_MI,
	&m13572_MI,
	&m13591_MI,
	&m13594_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2465_TI;
extern TypeInfo t2471_TI;
extern TypeInfo t2463_TI;
static TypeInfo* t2466_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t2465_TI,
	&t2471_TI,
	&t2463_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2465_TI;
extern TypeInfo t2471_TI;
extern TypeInfo t2463_TI;
static Il2CppInterfaceOffsetPair t2466_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t2465_TI, 20},
	{ &t2471_TI, 27},
	{ &t2463_TI, 32},
};
extern MethodInfo m13594_MI;
extern MethodInfo m13626_MI;
extern TypeInfo t381_TI;
extern MethodInfo m27847_MI;
extern MethodInfo m27851_MI;
extern MethodInfo m27849_MI;
extern MethodInfo m27841_MI;
extern MethodInfo m27842_MI;
extern MethodInfo m27840_MI;
static void* t2466_RGCTXData[9] = 
{
	&m13594_MI,
	&m13626_MI,
	&t381_TI,
	&m27847_MI,
	&m27851_MI,
	&m27849_MI,
	&m27841_MI,
	&m27842_MI,
	&m27840_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2466_0_0_0;
extern Il2CppType t2466_1_0_0;
extern TypeInfo t25_TI;
struct t2466;
extern TypeInfo t2466_TI;
extern Il2CppGenericClass t2466_GC;
extern CustomAttributesCache t959__CustomAttributeCache;
TypeInfo t2466_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2466_MIs, t2466_PIs, t2466_FIs, NULL, &t25_TI, NULL, NULL, &t2466_TI, t2466_ITIs, t2466_VT, &t959__CustomAttributeCache, &t2466_TI, &t2466_0_0_0, &t2466_1_0_0, t2466_IOs, &t2466_GC, NULL, NULL, NULL, t2466_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2466), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2472.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2472_TI;

extern TypeInfo t2472_TI;
extern TypeInfo t2465_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2471_TI;
extern TypeInfo t381_TI;
extern TypeInfo t134_TI;
extern TypeInfo t123_TI;
extern TypeInfo t383_TI;
extern TypeInfo t759_TI;
extern TypeInfo t25_TI;
extern TypeInfo t122_TI;
extern TypeInfo t2463_TI;
extern TypeInfo t2464_TI;
extern TypeInfo t2462_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t177_TI;
extern TypeInfo t1132_TI;
extern Il2CppType t381_0_0_0;
extern MethodInfo m27844_MI;
extern MethodInfo m13629_MI;
extern MethodInfo m13630_MI;
extern MethodInfo m27849_MI;
extern MethodInfo m13627_MI;
extern MethodInfo m13625_MI;
extern MethodInfo m27840_MI;
extern MethodInfo m452_MI;
extern MethodInfo m2377_MI;
extern MethodInfo m7921_MI;
extern MethodInfo m7922_MI;
extern MethodInfo m27842_MI;
extern MethodInfo m13618_MI;
extern MethodInfo m13626_MI;
extern MethodInfo m27847_MI;
extern MethodInfo m27851_MI;
extern MethodInfo m13628_MI;
extern MethodInfo m13616_MI;
extern MethodInfo m13621_MI;
extern MethodInfo m13612_MI;
extern MethodInfo m27846_MI;
extern MethodInfo m27841_MI;
extern MethodInfo m27852_MI;
extern MethodInfo m27853_MI;
extern MethodInfo m27850_MI;
extern MethodInfo m484_MI;
extern MethodInfo m4337_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m566_MI;
extern MethodInfo m7920_MI;
extern MethodInfo m7923_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern Il2CppType t2471_0_0_1;
FieldInfo t2472_f0_FieldInfo = 
{
	"list", &t2471_0_0_1, &t2472_TI, offsetof(t2472, f0), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_1;
FieldInfo t2472_f1_FieldInfo = 
{
	"syncRoot", &t25_0_0_1, &t2472_TI, offsetof(t2472, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2472_FIs[] =
{
	&t2472_f0_FieldInfo,
	&t2472_f1_FieldInfo,
	NULL
};
extern MethodInfo m13596_MI;
static PropertyInfo t2472____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2472_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13596_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13604_MI;
static PropertyInfo t2472____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2472_TI, "System.Collections.ICollection.IsSynchronized", &m13604_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13605_MI;
static PropertyInfo t2472____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2472_TI, "System.Collections.ICollection.SyncRoot", &m13605_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13606_MI;
static PropertyInfo t2472____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2472_TI, "System.Collections.IList.IsFixedSize", &m13606_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13607_MI;
static PropertyInfo t2472____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2472_TI, "System.Collections.IList.IsReadOnly", &m13607_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13608_MI;
extern MethodInfo m13609_MI;
static PropertyInfo t2472____System_Collections_IList_Item_PropertyInfo = 
{
	&t2472_TI, "System.Collections.IList.Item", &m13608_MI, &m13609_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13622_MI;
static PropertyInfo t2472____Count_PropertyInfo = 
{
	&t2472_TI, "Count", &m13622_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13623_MI;
extern MethodInfo m13624_MI;
static PropertyInfo t2472____Item_PropertyInfo = 
{
	&t2472_TI, "Item", &m13623_MI, &m13624_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2472_PIs[] =
{
	&t2472____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2472____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2472____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2472____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2472____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2472____System_Collections_IList_Item_PropertyInfo,
	&t2472____Count_PropertyInfo,
	&t2472____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13595_MI = 
{
	".ctor", (methodPointerType)&m9382_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2472_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13596_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9383_gshared, &t2472_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2472_m13597_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13597_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9384_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2472_m13597_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2472_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13598_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9385_gshared, &t2472_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2472_m13599_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13599_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9386_gshared, &t2472_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2472_m13599_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2472_m13600_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13600_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9387_gshared, &t2472_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2472_m13600_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2472_m13601_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13601_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9388_gshared, &t2472_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2472_m13601_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2472_m13602_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13602_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9389_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2472_m13602_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2472_m13603_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13603_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9390_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2472_m13603_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2472_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13604_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9391_gshared, &t2472_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2472_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13605_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9392_gshared, &t2472_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2472_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13606_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9393_gshared, &t2472_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2472_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13607_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9394_gshared, &t2472_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2472_m13608_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13608_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9395_gshared, &t2472_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t2472_m13608_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2472_m13609_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13609_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9396_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2472_m13609_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t2472_m13610_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13610_MI = 
{
	"Add", (methodPointerType)&m9397_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2472_m13610_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13611_MI = 
{
	"Clear", (methodPointerType)&m9398_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13612_MI = 
{
	"ClearItems", (methodPointerType)&m9399_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t2472_m13613_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13613_MI = 
{
	"Contains", (methodPointerType)&m9400_gshared, &t2472_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2472_m13613_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2462_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2472_m13614_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2462_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13614_MI = 
{
	"CopyTo", (methodPointerType)&m9401_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2472_m13614_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2472_TI;
extern Il2CppType t2464_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13615_MI = 
{
	"GetEnumerator", (methodPointerType)&m9402_gshared, &t2472_TI, &t2464_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t2472_m13616_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13616_MI = 
{
	"IndexOf", (methodPointerType)&m9403_gshared, &t2472_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2472_m13616_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t2472_m13617_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13617_MI = 
{
	"Insert", (methodPointerType)&m9404_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2472_m13617_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t2472_m13618_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13618_MI = 
{
	"InsertItem", (methodPointerType)&m9405_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2472_m13618_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t2472_m13619_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13619_MI = 
{
	"Remove", (methodPointerType)&m9406_gshared, &t2472_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2472_m13619_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2472_m13620_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13620_MI = 
{
	"RemoveAt", (methodPointerType)&m9407_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2472_m13620_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2472_m13621_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13621_MI = 
{
	"RemoveItem", (methodPointerType)&m9408_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2472_m13621_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2472_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13622_MI = 
{
	"get_Count", (methodPointerType)&m9409_gshared, &t2472_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2472_m13623_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t381_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13623_MI = 
{
	"get_Item", (methodPointerType)&m9410_gshared, &t2472_TI, &t381_0_0_0, RuntimeInvoker_t25_t134, t2472_m13623_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t2472_m13624_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13624_MI = 
{
	"set_Item", (methodPointerType)&m9411_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2472_m13624_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t2472_m13625_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13625_MI = 
{
	"SetItem", (methodPointerType)&m9412_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2472_m13625_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2472_m13626_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13626_MI = 
{
	"IsValidItem", (methodPointerType)&m9413_gshared, &t2472_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2472_m13626_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2472_m13627_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t381_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13627_MI = 
{
	"ConvertItem", (methodPointerType)&m9414_gshared, &t2472_TI, &t381_0_0_0, RuntimeInvoker_t25_t25, t2472_m13627_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2471_0_0_0;
static ParameterInfo t2472_m13628_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2471_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13628_MI = 
{
	"CheckWritable", (methodPointerType)&m9415_gshared, &t2472_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2472_m13628_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2471_0_0_0;
static ParameterInfo t2472_m13629_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2471_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13629_MI = 
{
	"IsSynchronized", (methodPointerType)&m9416_gshared, &t2472_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2472_m13629_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2471_0_0_0;
static ParameterInfo t2472_m13630_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2471_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13630_MI = 
{
	"IsFixedSize", (methodPointerType)&m9417_gshared, &t2472_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2472_m13630_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2472_MIs[] =
{
	&m13595_MI,
	&m13596_MI,
	&m13597_MI,
	&m13598_MI,
	&m13599_MI,
	&m13600_MI,
	&m13601_MI,
	&m13602_MI,
	&m13603_MI,
	&m13604_MI,
	&m13605_MI,
	&m13606_MI,
	&m13607_MI,
	&m13608_MI,
	&m13609_MI,
	&m13610_MI,
	&m13611_MI,
	&m13612_MI,
	&m13613_MI,
	&m13614_MI,
	&m13615_MI,
	&m13616_MI,
	&m13617_MI,
	&m13618_MI,
	&m13619_MI,
	&m13620_MI,
	&m13621_MI,
	&m13622_MI,
	&m13623_MI,
	&m13624_MI,
	&m13625_MI,
	&m13626_MI,
	&m13627_MI,
	&m13628_MI,
	&m13629_MI,
	&m13630_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13598_MI;
extern MethodInfo m13622_MI;
extern MethodInfo m13604_MI;
extern MethodInfo m13605_MI;
extern MethodInfo m13597_MI;
extern MethodInfo m13606_MI;
extern MethodInfo m13607_MI;
extern MethodInfo m13608_MI;
extern MethodInfo m13609_MI;
extern MethodInfo m13599_MI;
extern MethodInfo m13611_MI;
extern MethodInfo m13600_MI;
extern MethodInfo m13601_MI;
extern MethodInfo m13602_MI;
extern MethodInfo m13603_MI;
extern MethodInfo m13620_MI;
extern MethodInfo m13622_MI;
extern MethodInfo m13596_MI;
extern MethodInfo m13610_MI;
extern MethodInfo m13611_MI;
extern MethodInfo m13613_MI;
extern MethodInfo m13614_MI;
extern MethodInfo m13619_MI;
extern MethodInfo m13616_MI;
extern MethodInfo m13617_MI;
extern MethodInfo m13620_MI;
extern MethodInfo m13623_MI;
extern MethodInfo m13624_MI;
extern MethodInfo m13615_MI;
extern MethodInfo m13612_MI;
extern MethodInfo m13618_MI;
extern MethodInfo m13621_MI;
extern MethodInfo m13625_MI;
static MethodInfo* t2472_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13598_MI,
	&m13622_MI,
	&m13604_MI,
	&m13605_MI,
	&m13597_MI,
	&m13606_MI,
	&m13607_MI,
	&m13608_MI,
	&m13609_MI,
	&m13599_MI,
	&m13611_MI,
	&m13600_MI,
	&m13601_MI,
	&m13602_MI,
	&m13603_MI,
	&m13620_MI,
	&m13622_MI,
	&m13596_MI,
	&m13610_MI,
	&m13611_MI,
	&m13613_MI,
	&m13614_MI,
	&m13619_MI,
	&m13616_MI,
	&m13617_MI,
	&m13620_MI,
	&m13623_MI,
	&m13624_MI,
	&m13615_MI,
	&m13612_MI,
	&m13618_MI,
	&m13621_MI,
	&m13625_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2465_TI;
extern TypeInfo t2471_TI;
extern TypeInfo t2463_TI;
static TypeInfo* t2472_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t2465_TI,
	&t2471_TI,
	&t2463_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2465_TI;
extern TypeInfo t2471_TI;
extern TypeInfo t2463_TI;
static Il2CppInterfaceOffsetPair t2472_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t2465_TI, 20},
	{ &t2471_TI, 27},
	{ &t2463_TI, 32},
};
extern TypeInfo t383_TI;
extern MethodInfo m2377_MI;
extern MethodInfo m27844_MI;
extern MethodInfo m27842_MI;
extern MethodInfo m27840_MI;
extern MethodInfo m13627_MI;
extern MethodInfo m13618_MI;
extern MethodInfo m13626_MI;
extern TypeInfo t381_TI;
extern MethodInfo m27847_MI;
extern MethodInfo m27851_MI;
extern MethodInfo m13628_MI;
extern MethodInfo m13616_MI;
extern MethodInfo m13621_MI;
extern MethodInfo m13629_MI;
extern MethodInfo m13630_MI;
extern MethodInfo m27849_MI;
extern MethodInfo m13625_MI;
extern MethodInfo m13612_MI;
extern MethodInfo m27846_MI;
extern MethodInfo m27841_MI;
extern MethodInfo m27852_MI;
extern MethodInfo m27853_MI;
extern MethodInfo m27850_MI;
extern Il2CppType t381_0_0_0;
static void* t2472_RGCTXData[25] = 
{
	&t383_TI,
	&m2377_MI,
	&m27844_MI,
	&m27842_MI,
	&m27840_MI,
	&m13627_MI,
	&m13618_MI,
	&m13626_MI,
	&t381_TI,
	&m27847_MI,
	&m27851_MI,
	&m13628_MI,
	&m13616_MI,
	&m13621_MI,
	&m13629_MI,
	&m13630_MI,
	&m27849_MI,
	&m13625_MI,
	&m13612_MI,
	&m27846_MI,
	&m27841_MI,
	&m27852_MI,
	&m27853_MI,
	&m27850_MI,
	(void*)&t381_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2472_0_0_0;
extern Il2CppType t2472_1_0_0;
extern TypeInfo t25_TI;
struct t2472;
extern TypeInfo t2472_TI;
extern Il2CppGenericClass t2472_GC;
extern CustomAttributesCache t958__CustomAttributeCache;
TypeInfo t2472_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2472_MIs, t2472_PIs, t2472_FIs, NULL, &t25_TI, NULL, NULL, &t2472_TI, t2472_ITIs, t2472_VT, &t958__CustomAttributeCache, &t2472_TI, &t2472_0_0_0, &t2472_1_0_0, t2472_IOs, &t2472_GC, NULL, NULL, NULL, t2472_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2472), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2473_TI;
#include "t2473MD.h"

#include "t953.h"
#include "t2474.h"
extern TypeInfo t2473_TI;
extern TypeInfo t5853_TI;
extern TypeInfo t131_TI;
extern TypeInfo t381_TI;
extern TypeInfo t125_TI;
extern TypeInfo t953_TI;
extern TypeInfo t637_TI;
extern TypeInfo t2474_TI;
extern TypeInfo t134_TI;
#include "t1340MD.h"
#include "t2474MD.h"
extern Il2CppType t5853_0_0_0;
extern Il2CppType t381_0_0_0;
extern Il2CppType t953_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m13636_MI;
extern MethodInfo m27854_MI;
extern MethodInfo m20713_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern Il2CppType t2473_0_0_49;
FieldInfo t2473_f0_FieldInfo = 
{
	"_default", &t2473_0_0_49, &t2473_TI, offsetof(t2473_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2473_FIs[] =
{
	&t2473_f0_FieldInfo,
	NULL
};
extern MethodInfo m13635_MI;
static PropertyInfo t2473____Default_PropertyInfo = 
{
	&t2473_TI, "Default", &m13635_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2473_PIs[] =
{
	&t2473____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2473_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13631_MI = 
{
	".ctor", (methodPointerType)&m8967_gshared, &t2473_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2473_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13632_MI = 
{
	".cctor", (methodPointerType)&m8968_gshared, &t2473_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2473_m13633_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2473_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13633_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8969_gshared, &t2473_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2473_m13633_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2473_m13634_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2473_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13634_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8970_gshared, &t2473_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2473_m13634_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t2473_m27854_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2473_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27854_MI = 
{
	"GetHashCode", NULL, &t2473_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2473_m27854_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t2473_m20713_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2473_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20713_MI = 
{
	"Equals", NULL, &t2473_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2473_m20713_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2473_TI;
extern Il2CppType t2473_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13635_MI = 
{
	"get_Default", (methodPointerType)&m8971_gshared, &t2473_TI, &t2473_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2473_MIs[] =
{
	&m13631_MI,
	&m13632_MI,
	&m13633_MI,
	&m13634_MI,
	&m27854_MI,
	&m20713_MI,
	&m13635_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m20713_MI;
extern MethodInfo m27854_MI;
extern MethodInfo m13634_MI;
extern MethodInfo m13633_MI;
static MethodInfo* t2473_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m20713_MI,
	&m27854_MI,
	&m13634_MI,
	&m13633_MI,
	NULL,
	NULL,
};
extern TypeInfo t5854_TI;
extern TypeInfo t977_TI;
static TypeInfo* t2473_ITIs[] = 
{
	&t5854_TI,
	&t977_TI,
};
extern TypeInfo t5854_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t2473_IOs[] = 
{
	{ &t5854_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppType t5853_0_0_0;
extern Il2CppType t381_0_0_0;
extern TypeInfo t2473_TI;
extern TypeInfo t2473_TI;
extern TypeInfo t2474_TI;
extern MethodInfo m13636_MI;
extern TypeInfo t381_TI;
extern MethodInfo m27854_MI;
extern MethodInfo m20713_MI;
static void* t2473_RGCTXData[9] = 
{
	(void*)&t5853_0_0_0,
	(void*)&t381_0_0_0,
	&t2473_TI,
	&t2473_TI,
	&t2474_TI,
	&m13636_MI,
	&t381_TI,
	&m27854_MI,
	&m20713_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2473_0_0_0;
extern Il2CppType t2473_1_0_0;
extern TypeInfo t25_TI;
struct t2473;
extern TypeInfo t2473_TI;
extern Il2CppGenericClass t2473_GC;
TypeInfo t2473_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2473_MIs, t2473_PIs, t2473_FIs, NULL, &t25_TI, NULL, NULL, &t2473_TI, t2473_ITIs, t2473_VT, &EmptyCustomAttributesCache, &t2473_TI, &t2473_0_0_0, &t2473_1_0_0, t2473_IOs, &t2473_GC, NULL, NULL, NULL, t2473_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2473), 0, -1, sizeof(t2473_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5854_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern Il2CppType t381_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t5854_m27855_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t5854_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27855_MI = 
{
	"Equals", NULL, &t5854_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t5854_m27855_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t5854_m27856_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t5854_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27856_MI = 
{
	"GetHashCode", NULL, &t5854_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5854_m27856_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5854_MIs[] =
{
	&m27855_MI,
	&m27856_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5854_0_0_0;
extern Il2CppType t5854_1_0_0;
struct t5854;
extern TypeInfo t5854_TI;
extern Il2CppGenericClass t5854_GC;
TypeInfo t5854_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5854_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5854_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5854_TI, &t5854_0_0_0, &t5854_1_0_0, NULL, &t5854_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5853_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern Il2CppType t381_0_0_0;
static ParameterInfo t5853_m27857_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t5853_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27857_MI = 
{
	"Equals", NULL, &t5853_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5853_m27857_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5853_MIs[] =
{
	&m27857_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5853_0_0_0;
extern Il2CppType t5853_1_0_0;
struct t5853;
extern TypeInfo t5853_TI;
extern Il2CppGenericClass t5853_GC;
TypeInfo t5853_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5853_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5853_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5853_TI, &t5853_0_0_0, &t5853_1_0_0, NULL, &t5853_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2474_TI;

extern TypeInfo t381_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t125_TI;
extern MethodInfo m13631_MI;
extern MethodInfo m456_MI;
extern MethodInfo m455_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.StencilMaterial/MatEntry>
extern TypeInfo t2474_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13636_MI = 
{
	".ctor", (methodPointerType)&m9002_gshared, &t2474_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t2474_m13637_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2474_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13637_MI = 
{
	"GetHashCode", (methodPointerType)&m9003_gshared, &t2474_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2474_m13637_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t2474_m13638_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2474_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13638_MI = 
{
	"Equals", (methodPointerType)&m9004_gshared, &t2474_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2474_m13638_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2474_MIs[] =
{
	&m13636_MI,
	&m13637_MI,
	&m13638_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13638_MI;
extern MethodInfo m13637_MI;
extern MethodInfo m13634_MI;
extern MethodInfo m13633_MI;
extern MethodInfo m13637_MI;
extern MethodInfo m13638_MI;
static MethodInfo* t2474_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13638_MI,
	&m13637_MI,
	&m13634_MI,
	&m13633_MI,
	&m13637_MI,
	&m13638_MI,
};
extern TypeInfo t5854_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t2474_IOs[] = 
{
	{ &t5854_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppType t5853_0_0_0;
extern Il2CppType t381_0_0_0;
extern TypeInfo t2473_TI;
extern TypeInfo t2473_TI;
extern TypeInfo t2474_TI;
extern MethodInfo m13636_MI;
extern TypeInfo t381_TI;
extern MethodInfo m27854_MI;
extern MethodInfo m20713_MI;
extern MethodInfo m13631_MI;
extern TypeInfo t381_TI;
static void* t2474_RGCTXData[11] = 
{
	(void*)&t5853_0_0_0,
	(void*)&t381_0_0_0,
	&t2473_TI,
	&t2473_TI,
	&t2474_TI,
	&m13636_MI,
	&t381_TI,
	&m27854_MI,
	&m20713_MI,
	&m13631_MI,
	&t381_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2474_0_0_0;
extern Il2CppType t2474_1_0_0;
extern TypeInfo t2473_TI;
struct t2474;
extern TypeInfo t2474_TI;
extern Il2CppGenericClass t2474_GC;
extern TypeInfo t952_TI;
TypeInfo t2474_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2474_MIs, NULL, NULL, NULL, &t2473_TI, NULL, &t952_TI, &t2474_TI, NULL, t2474_VT, &EmptyCustomAttributesCache, &t2474_TI, &t2474_0_0_0, &t2474_1_0_0, t2474_IOs, &t2474_GC, NULL, NULL, NULL, t2474_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2474), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2467_TI;



// Metadata Definition System.Predicate`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2467_m13639_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2467_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13639_MI = 
{
	".ctor", (methodPointerType)&m9418_gshared, &t2467_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2467_m13639_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t2467_m13640_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2467_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13640_MI = 
{
	"Invoke", (methodPointerType)&m9419_gshared, &t2467_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2467_m13640_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2467_m13641_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2467_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13641_MI = 
{
	"BeginInvoke", (methodPointerType)&m9420_gshared, &t2467_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t2467_m13641_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2467_m13642_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2467_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13642_MI = 
{
	"EndInvoke", (methodPointerType)&m9421_gshared, &t2467_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2467_m13642_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2467_MIs[] =
{
	&m13639_MI,
	&m13640_MI,
	&m13641_MI,
	&m13642_MI,
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
extern MethodInfo m13640_MI;
extern MethodInfo m13641_MI;
extern MethodInfo m13642_MI;
static MethodInfo* t2467_VT[] =
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
	&m13640_MI,
	&m13641_MI,
	&m13642_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2467_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2467_0_0_0;
extern Il2CppType t2467_1_0_0;
extern TypeInfo t345_TI;
struct t2467;
extern TypeInfo t2467_TI;
extern Il2CppGenericClass t2467_GC;
TypeInfo t2467_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2467_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2467_TI, NULL, t2467_VT, &EmptyCustomAttributesCache, &t2467_TI, &t2467_0_0_0, &t2467_1_0_0, t2467_IOs, &t2467_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2467), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2475_TI;

#include "t941.h"
#include "t2476.h"
extern TypeInfo t2475_TI;
extern TypeInfo t3861_TI;
extern TypeInfo t131_TI;
extern TypeInfo t381_TI;
extern TypeInfo t125_TI;
extern TypeInfo t941_TI;
extern TypeInfo t637_TI;
extern TypeInfo t2476_TI;
extern TypeInfo t134_TI;
extern TypeInfo t445_TI;
#include "t2476MD.h"
extern Il2CppType t3861_0_0_0;
extern Il2CppType t381_0_0_0;
extern Il2CppType t941_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m13647_MI;
extern MethodInfo m27858_MI;
extern MethodInfo m6988_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern Il2CppType t2475_0_0_49;
FieldInfo t2475_f0_FieldInfo = 
{
	"_default", &t2475_0_0_49, &t2475_TI, offsetof(t2475_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2475_FIs[] =
{
	&t2475_f0_FieldInfo,
	NULL
};
extern MethodInfo m13646_MI;
static PropertyInfo t2475____Default_PropertyInfo = 
{
	&t2475_TI, "Default", &m13646_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2475_PIs[] =
{
	&t2475____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13643_MI = 
{
	".ctor", (methodPointerType)&m9422_gshared, &t2475_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13644_MI = 
{
	".cctor", (methodPointerType)&m9423_gshared, &t2475_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2475_m13645_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2475_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13645_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m9424_gshared, &t2475_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2475_m13645_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t2475_m27858_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2475_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27858_MI = 
{
	"Compare", NULL, &t2475_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2475_m27858_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2475_TI;
extern Il2CppType t2475_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13646_MI = 
{
	"get_Default", (methodPointerType)&m9425_gshared, &t2475_TI, &t2475_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2475_MIs[] =
{
	&m13643_MI,
	&m13644_MI,
	&m13645_MI,
	&m27858_MI,
	&m13646_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m27858_MI;
extern MethodInfo m13645_MI;
static MethodInfo* t2475_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m27858_MI,
	&m13645_MI,
	NULL,
};
extern TypeInfo t3860_TI;
extern TypeInfo t147_TI;
static TypeInfo* t2475_ITIs[] = 
{
	&t3860_TI,
	&t147_TI,
};
extern TypeInfo t3860_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t2475_IOs[] = 
{
	{ &t3860_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppType t3861_0_0_0;
extern Il2CppType t381_0_0_0;
extern TypeInfo t2475_TI;
extern TypeInfo t2475_TI;
extern TypeInfo t2476_TI;
extern MethodInfo m13647_MI;
extern TypeInfo t381_TI;
extern MethodInfo m27858_MI;
static void* t2475_RGCTXData[8] = 
{
	(void*)&t3861_0_0_0,
	(void*)&t381_0_0_0,
	&t2475_TI,
	&t2475_TI,
	&t2476_TI,
	&m13647_MI,
	&t381_TI,
	&m27858_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2475_0_0_0;
extern Il2CppType t2475_1_0_0;
extern TypeInfo t25_TI;
struct t2475;
extern TypeInfo t2475_TI;
extern Il2CppGenericClass t2475_GC;
TypeInfo t2475_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2475_MIs, t2475_PIs, t2475_FIs, NULL, &t25_TI, NULL, NULL, &t2475_TI, t2475_ITIs, t2475_VT, &EmptyCustomAttributesCache, &t2475_TI, &t2475_0_0_0, &t2475_1_0_0, t2475_IOs, &t2475_GC, NULL, NULL, NULL, t2475_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2475), 0, -1, sizeof(t2475_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3860_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern Il2CppType t381_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t3860_m20721_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t3860_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20721_MI = 
{
	"Compare", NULL, &t3860_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t3860_m20721_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3860_MIs[] =
{
	&m20721_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3860_0_0_0;
extern Il2CppType t3860_1_0_0;
struct t3860;
extern TypeInfo t3860_TI;
extern Il2CppGenericClass t3860_GC;
TypeInfo t3860_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3860_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3860_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3860_TI, &t3860_0_0_0, &t3860_1_0_0, NULL, &t3860_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3861_TI;



// Metadata Definition System.IComparable`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern Il2CppType t381_0_0_0;
static ParameterInfo t3861_m20722_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t3861_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20722_MI = 
{
	"CompareTo", NULL, &t3861_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t3861_m20722_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3861_MIs[] =
{
	&m20722_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3861_0_0_0;
extern Il2CppType t3861_1_0_0;
struct t3861;
extern TypeInfo t3861_TI;
extern Il2CppGenericClass t3861_GC;
TypeInfo t3861_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3861_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3861_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3861_TI, &t3861_0_0_0, &t3861_1_0_0, NULL, &t3861_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2476_TI;

extern TypeInfo t381_TI;
extern TypeInfo t3861_TI;
extern TypeInfo t134_TI;
extern TypeInfo t143_TI;
extern TypeInfo t25_TI;
extern TypeInfo t445_TI;
extern MethodInfo m13643_MI;
extern MethodInfo m20722_MI;
extern MethodInfo m7828_MI;
extern MethodInfo m2409_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.StencilMaterial/MatEntry>
extern TypeInfo t2476_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13647_MI = 
{
	".ctor", (methodPointerType)&m9426_gshared, &t2476_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t2476_m13648_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2476_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13648_MI = 
{
	"Compare", (methodPointerType)&m9427_gshared, &t2476_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2476_m13648_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2476_MIs[] =
{
	&m13647_MI,
	&m13648_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13648_MI;
extern MethodInfo m13645_MI;
extern MethodInfo m13648_MI;
static MethodInfo* t2476_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13648_MI,
	&m13645_MI,
	&m13648_MI,
};
extern TypeInfo t3860_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t2476_IOs[] = 
{
	{ &t3860_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppType t3861_0_0_0;
extern Il2CppType t381_0_0_0;
extern TypeInfo t2475_TI;
extern TypeInfo t2475_TI;
extern TypeInfo t2476_TI;
extern MethodInfo m13647_MI;
extern TypeInfo t381_TI;
extern MethodInfo m27858_MI;
extern MethodInfo m13643_MI;
extern TypeInfo t381_TI;
extern TypeInfo t3861_TI;
extern MethodInfo m20722_MI;
static void* t2476_RGCTXData[12] = 
{
	(void*)&t3861_0_0_0,
	(void*)&t381_0_0_0,
	&t2475_TI,
	&t2475_TI,
	&t2476_TI,
	&m13647_MI,
	&t381_TI,
	&m27858_MI,
	&m13643_MI,
	&t381_TI,
	&t3861_TI,
	&m20722_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2476_0_0_0;
extern Il2CppType t2476_1_0_0;
extern TypeInfo t2475_TI;
struct t2476;
extern TypeInfo t2476_TI;
extern Il2CppGenericClass t2476_GC;
extern TypeInfo t940_TI;
TypeInfo t2476_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2476_MIs, NULL, NULL, NULL, &t2475_TI, NULL, &t940_TI, &t2476_TI, NULL, t2476_VT, &EmptyCustomAttributesCache, &t2476_TI, &t2476_0_0_0, &t2476_1_0_0, t2476_IOs, &t2476_GC, NULL, NULL, NULL, t2476_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2476), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2468_TI;
#include "t2468MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.UI.StencilMaterial/MatEntry>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2468_m13649_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2468_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13649_MI = 
{
	".ctor", (methodPointerType)&m9458_gshared, &t2468_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2468_m13649_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t2468_m13650_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t2468_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13650_MI = 
{
	"Invoke", (methodPointerType)&m9459_gshared, &t2468_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2468_m13650_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
extern Il2CppType t381_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2468_m13651_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2468_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13651_MI = 
{
	"BeginInvoke", (methodPointerType)&m9460_gshared, &t2468_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25_t25, t2468_m13651_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2468_m13652_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2468_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13652_MI = 
{
	"EndInvoke", (methodPointerType)&m9461_gshared, &t2468_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2468_m13652_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2468_MIs[] =
{
	&m13649_MI,
	&m13650_MI,
	&m13651_MI,
	&m13652_MI,
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
extern MethodInfo m13650_MI;
extern MethodInfo m13651_MI;
extern MethodInfo m13652_MI;
static MethodInfo* t2468_VT[] =
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
	&m13650_MI,
	&m13651_MI,
	&m13652_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2468_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2468_0_0_0;
extern Il2CppType t2468_1_0_0;
extern TypeInfo t345_TI;
struct t2468;
extern TypeInfo t2468_TI;
extern Il2CppGenericClass t2468_GC;
TypeInfo t2468_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2468_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2468_TI, NULL, t2468_VT, &EmptyCustomAttributesCache, &t2468_TI, &t2468_0_0_0, &t2468_1_0_0, t2468_IOs, &t2468_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2468), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2477.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2477_TI;
#include "t2477MD.h"

#include "t302.h"
#include "t2478.h"
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t2477_TI;
extern TypeInfo t302_TI;
extern TypeInfo t2478_TI;
extern TypeInfo t123_TI;
#include "t2478MD.h"
extern MethodInfo m13655_MI;
extern MethodInfo m13657_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Text>
extern Il2CppType t158_0_0_33;
FieldInfo t2477_f1_FieldInfo = 
{
	"m_Arg1", &t158_0_0_33, &t2477_TI, offsetof(t2477, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2477_FIs[] =
{
	&t2477_f1_FieldInfo,
	NULL
};
extern Il2CppType t60_0_0_0;
extern Il2CppType t657_0_0_0;
extern Il2CppType t302_0_0_0;
static ParameterInfo t2477_m13653_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t302_0_0_0},
};
extern TypeInfo t2477_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13653_MI = 
{
	".ctor", (methodPointerType)&m8415_gshared, &t2477_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t2477_m13653_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2477_m13654_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2477_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13654_MI = 
{
	"Invoke", (methodPointerType)&m8417_gshared, &t2477_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2477_m13654_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2477_MIs[] =
{
	&m13653_MI,
	&m13654_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13654_MI;
extern MethodInfo m13658_MI;
static MethodInfo* t2477_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13654_MI,
	&m13658_MI,
};
extern Il2CppType t2479_0_0_0;
extern TypeInfo t2479_TI;
extern MethodInfo m20726_MI;
extern TypeInfo t302_TI;
extern MethodInfo m13660_MI;
extern MethodInfo m13655_MI;
extern TypeInfo t302_TI;
extern MethodInfo m13657_MI;
static void* t2477_RGCTXData[8] = 
{
	(void*)&t2479_0_0_0,
	&t2479_TI,
	&m20726_MI,
	&t302_TI,
	&m13660_MI,
	&m13655_MI,
	&t302_TI,
	&m13657_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2477_0_0_0;
extern Il2CppType t2477_1_0_0;
extern TypeInfo t2478_TI;
struct t2477;
extern TypeInfo t2477_TI;
extern Il2CppGenericClass t2477_GC;
TypeInfo t2477_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2477_MIs, NULL, t2477_FIs, NULL, &t2478_TI, NULL, NULL, &t2477_TI, NULL, t2477_VT, &EmptyCustomAttributesCache, &t2477_TI, &t2477_0_0_0, &t2477_1_0_0, NULL, &t2477_GC, NULL, NULL, NULL, t2477_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2477), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2478_TI;

#include "t2479.h"
extern TypeInfo t2478_TI;
extern TypeInfo t2479_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t302_TI;
extern TypeInfo t123_TI;
#include "t2479MD.h"
extern Il2CppType t2479_0_0_0;
extern MethodInfo m3313_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m2105_MI;
extern MethodInfo m3312_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m20726_MI;
extern MethodInfo m3314_MI;
extern MethodInfo m13660_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
struct t656;
#define m20726(__this, p0, method) (void)m18087_gshared((t25 *)__this, (t25 *)p0, method)
extern MethodInfo m20726_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Text>
extern Il2CppType t2479_0_0_1;
FieldInfo t2478_f0_FieldInfo = 
{
	"Delegate", &t2479_0_0_1, &t2478_TI, offsetof(t2478, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2478_FIs[] =
{
	&t2478_f0_FieldInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2478_m13655_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2478_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13655_MI = 
{
	".ctor", (methodPointerType)&m8418_gshared, &t2478_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t2478_m13655_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2479_0_0_0;
static ParameterInfo t2478_m13656_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2479_0_0_0},
};
extern TypeInfo t2478_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13656_MI = 
{
	".ctor", (methodPointerType)&m8419_gshared, &t2478_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2478_m13656_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2478_m13657_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2478_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13657_MI = 
{
	"Invoke", (methodPointerType)&m8420_gshared, &t2478_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2478_m13657_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2478_m13658_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2478_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13658_MI = 
{
	"Find", (methodPointerType)&m8421_gshared, &t2478_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2478_m13658_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2478_MIs[] =
{
	&m13655_MI,
	&m13656_MI,
	&m13657_MI,
	&m13658_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13657_MI;
extern MethodInfo m13658_MI;
static MethodInfo* t2478_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13657_MI,
	&m13658_MI,
};
extern Il2CppType t2479_0_0_0;
extern TypeInfo t2479_TI;
extern MethodInfo m20726_MI;
extern TypeInfo t302_TI;
extern MethodInfo m13660_MI;
static void* t2478_RGCTXData[5] = 
{
	(void*)&t2479_0_0_0,
	&t2479_TI,
	&m20726_MI,
	&t302_TI,
	&m13660_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2478_0_0_0;
extern Il2CppType t2478_1_0_0;
extern TypeInfo t656_TI;
struct t2478;
extern TypeInfo t2478_TI;
extern Il2CppGenericClass t2478_GC;
TypeInfo t2478_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2478_MIs, NULL, t2478_FIs, NULL, &t656_TI, NULL, NULL, &t2478_TI, NULL, t2478_VT, &EmptyCustomAttributesCache, &t2478_TI, &t2478_0_0_0, &t2478_1_0_0, NULL, &t2478_GC, NULL, NULL, NULL, t2478_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2478), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2479_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.Text>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2479_m13659_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2479_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13659_MI = 
{
	".ctor", (methodPointerType)&m8422_gshared, &t2479_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2479_m13659_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t302_0_0_0;
static ParameterInfo t2479_m13660_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t302_0_0_0},
};
extern TypeInfo t2479_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13660_MI = 
{
	"Invoke", (methodPointerType)&m8423_gshared, &t2479_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2479_m13660_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t302_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2479_m13661_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t302_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2479_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13661_MI = 
{
	"BeginInvoke", (methodPointerType)&m8424_gshared, &t2479_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t2479_m13661_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2479_m13662_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2479_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13662_MI = 
{
	"EndInvoke", (methodPointerType)&m8425_gshared, &t2479_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2479_m13662_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2479_MIs[] =
{
	&m13659_MI,
	&m13660_MI,
	&m13661_MI,
	&m13662_MI,
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
extern MethodInfo m13660_MI;
extern MethodInfo m13661_MI;
extern MethodInfo m13662_MI;
static MethodInfo* t2479_VT[] =
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
	&m13660_MI,
	&m13661_MI,
	&m13662_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2479_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2479_0_0_0;
extern Il2CppType t2479_1_0_0;
extern TypeInfo t345_TI;
struct t2479;
extern TypeInfo t2479_TI;
extern Il2CppGenericClass t2479_GC;
TypeInfo t2479_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2479_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2479_TI, NULL, t2479_VT, &EmptyCustomAttributesCache, &t2479_TI, &t2479_0_0_0, &t2479_1_0_0, t2479_IOs, &t2479_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2479), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2492_TI;

#include "t388.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Toggle>
extern MethodInfo m27859_MI;
static PropertyInfo t2492____Current_PropertyInfo = 
{
	&t2492_TI, "Current", &m27859_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2492_PIs[] =
{
	&t2492____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2492_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27859_MI = 
{
	"get_Current", NULL, &t2492_TI, &t388_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2492_MIs[] =
{
	&m27859_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t2492_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2492_0_0_0;
extern Il2CppType t2492_1_0_0;
struct t2492;
extern TypeInfo t2492_TI;
extern Il2CppGenericClass t2492_GC;
TypeInfo t2492_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2492_MIs, t2492_PIs, NULL, NULL, NULL, NULL, NULL, &t2492_TI, t2492_ITIs, NULL, &EmptyCustomAttributesCache, &t2492_TI, &t2492_0_0_0, &t2492_1_0_0, NULL, &t2492_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2480.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2480_TI;
#include "t2480MD.h"

extern TypeInfo t2480_TI;
extern TypeInfo t388_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13667_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20728_MI;
struct t122;
#define m20728(__this, p0, method) (t388 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m20728_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle>
extern Il2CppType t122_0_0_1;
FieldInfo t2480_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2480_TI, offsetof(t2480, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2480_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2480_TI, offsetof(t2480, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2480_FIs[] =
{
	&t2480_f0_FieldInfo,
	&t2480_f1_FieldInfo,
	NULL
};
extern MethodInfo m13664_MI;
static PropertyInfo t2480____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2480_TI, "System.Collections.IEnumerator.Current", &m13664_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13667_MI;
static PropertyInfo t2480____Current_PropertyInfo = 
{
	&t2480_TI, "Current", &m13667_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2480_PIs[] =
{
	&t2480____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2480____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2480_m13663_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2480_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13663_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t2480_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2480_m13663_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2480_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13664_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t2480_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2480_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13665_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t2480_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2480_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13666_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t2480_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2480_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13667_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t2480_TI, &t388_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2480_MIs[] =
{
	&m13663_MI,
	&m13664_MI,
	&m13665_MI,
	&m13666_MI,
	&m13667_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13664_MI;
extern MethodInfo m13666_MI;
extern MethodInfo m13665_MI;
extern MethodInfo m13667_MI;
static MethodInfo* t2480_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13664_MI,
	&m13666_MI,
	&m13665_MI,
	&m13667_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2492_TI;
static TypeInfo* t2480_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2492_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2492_TI;
static Il2CppInterfaceOffsetPair t2480_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2492_TI, 7},
};
extern MethodInfo m13667_MI;
extern TypeInfo t388_TI;
extern MethodInfo m20728_MI;
static void* t2480_RGCTXData[3] = 
{
	&m13667_MI,
	&t388_TI,
	&m20728_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2480_0_0_0;
extern Il2CppType t2480_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2480_TI;
extern Il2CppGenericClass t2480_GC;
extern TypeInfo t122_TI;
TypeInfo t2480_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2480_MIs, t2480_PIs, t2480_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2480_TI, t2480_ITIs, t2480_VT, &EmptyCustomAttributesCache, &t2480_TI, &t2480_0_0_0, &t2480_1_0_0, t2480_IOs, &t2480_GC, NULL, NULL, NULL, t2480_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2480)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2493_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>
extern MethodInfo m27860_MI;
static PropertyInfo t2493____Count_PropertyInfo = 
{
	&t2493_TI, "Count", &m27860_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27861_MI;
static PropertyInfo t2493____IsReadOnly_PropertyInfo = 
{
	&t2493_TI, "IsReadOnly", &m27861_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2493_PIs[] =
{
	&t2493____Count_PropertyInfo,
	&t2493____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t2493_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27860_MI = 
{
	"get_Count", NULL, &t2493_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2493_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27861_MI = 
{
	"get_IsReadOnly", NULL, &t2493_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2493_m27862_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2493_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27862_MI = 
{
	"Add", NULL, &t2493_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2493_m27862_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2493_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27863_MI = 
{
	"Clear", NULL, &t2493_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2493_m27864_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2493_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27864_MI = 
{
	"Contains", NULL, &t2493_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2493_m27864_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2491_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2493_m27865_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2491_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2493_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27865_MI = 
{
	"CopyTo", NULL, &t2493_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2493_m27865_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2493_m27866_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2493_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27866_MI = 
{
	"Remove", NULL, &t2493_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2493_m27866_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2493_MIs[] =
{
	&m27860_MI,
	&m27861_MI,
	&m27862_MI,
	&m27863_MI,
	&m27864_MI,
	&m27865_MI,
	&m27866_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t393_TI;
static TypeInfo* t2493_ITIs[] = 
{
	&t703_TI,
	&t393_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2493_0_0_0;
extern Il2CppType t2493_1_0_0;
struct t2493;
extern TypeInfo t2493_TI;
extern Il2CppGenericClass t2493_GC;
TypeInfo t2493_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2493_MIs, t2493_PIs, NULL, NULL, NULL, NULL, NULL, &t2493_TI, t2493_ITIs, NULL, &EmptyCustomAttributesCache, &t2493_TI, &t2493_0_0_0, &t2493_1_0_0, NULL, &t2493_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t393_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
extern TypeInfo t393_TI;
extern Il2CppType t2492_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27867_MI = 
{
	"GetEnumerator", NULL, &t393_TI, &t2492_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t393_MIs[] =
{
	&m27867_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t393_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t393_0_0_0;
extern Il2CppType t393_1_0_0;
struct t393;
extern TypeInfo t393_TI;
extern Il2CppGenericClass t393_GC;
TypeInfo t393_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t393_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t393_TI, t393_ITIs, NULL, &EmptyCustomAttributesCache, &t393_TI, &t393_0_0_0, &t393_1_0_0, NULL, &t393_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2497_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Toggle>
extern MethodInfo m27868_MI;
extern MethodInfo m27869_MI;
static PropertyInfo t2497____Item_PropertyInfo = 
{
	&t2497_TI, "Item", &m27868_MI, &m27869_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2497_PIs[] =
{
	&t2497____Item_PropertyInfo,
	NULL
};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2497_m27870_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2497_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27870_MI = 
{
	"IndexOf", NULL, &t2497_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2497_m27870_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2497_m27871_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2497_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27871_MI = 
{
	"Insert", NULL, &t2497_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2497_m27871_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2497_m27872_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2497_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27872_MI = 
{
	"RemoveAt", NULL, &t2497_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2497_m27872_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2497_m27868_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2497_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27868_MI = 
{
	"get_Item", NULL, &t2497_TI, &t388_0_0_0, RuntimeInvoker_t25_t134, t2497_m27868_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2497_m27869_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2497_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27869_MI = 
{
	"set_Item", NULL, &t2497_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2497_m27869_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2497_MIs[] =
{
	&m27870_MI,
	&m27871_MI,
	&m27872_MI,
	&m27868_MI,
	&m27869_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t2493_TI;
extern TypeInfo t393_TI;
static TypeInfo* t2497_ITIs[] = 
{
	&t703_TI,
	&t2493_TI,
	&t393_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2497_0_0_0;
extern Il2CppType t2497_1_0_0;
struct t2497;
extern TypeInfo t2497_TI;
extern Il2CppGenericClass t2497_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t2497_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t2497_MIs, t2497_PIs, NULL, NULL, NULL, NULL, NULL, &t2497_TI, t2497_ITIs, NULL, &t1518__CustomAttributeCache, &t2497_TI, &t2497_0_0_0, &t2497_1_0_0, NULL, &t2497_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2481.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2481_TI;
#include "t2481MD.h"

#include "t2482.h"
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t2481_TI;
extern TypeInfo t388_TI;
extern TypeInfo t2482_TI;
extern TypeInfo t123_TI;
#include "t2482MD.h"
extern MethodInfo m13670_MI;
extern MethodInfo m13672_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Toggle>
extern Il2CppType t158_0_0_33;
FieldInfo t2481_f1_FieldInfo = 
{
	"m_Arg1", &t158_0_0_33, &t2481_TI, offsetof(t2481, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2481_FIs[] =
{
	&t2481_f1_FieldInfo,
	NULL
};
extern Il2CppType t60_0_0_0;
extern Il2CppType t657_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2481_m13668_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2481_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13668_MI = 
{
	".ctor", (methodPointerType)&m8415_gshared, &t2481_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t2481_m13668_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2481_m13669_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2481_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13669_MI = 
{
	"Invoke", (methodPointerType)&m8417_gshared, &t2481_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2481_m13669_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2481_MIs[] =
{
	&m13668_MI,
	&m13669_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13669_MI;
extern MethodInfo m13673_MI;
static MethodInfo* t2481_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13669_MI,
	&m13673_MI,
};
extern Il2CppType t2483_0_0_0;
extern TypeInfo t2483_TI;
extern MethodInfo m20738_MI;
extern TypeInfo t388_TI;
extern MethodInfo m13675_MI;
extern MethodInfo m13670_MI;
extern TypeInfo t388_TI;
extern MethodInfo m13672_MI;
static void* t2481_RGCTXData[8] = 
{
	(void*)&t2483_0_0_0,
	&t2483_TI,
	&m20738_MI,
	&t388_TI,
	&m13675_MI,
	&m13670_MI,
	&t388_TI,
	&m13672_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2481_0_0_0;
extern Il2CppType t2481_1_0_0;
extern TypeInfo t2482_TI;
struct t2481;
extern TypeInfo t2481_TI;
extern Il2CppGenericClass t2481_GC;
TypeInfo t2481_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2481_MIs, NULL, t2481_FIs, NULL, &t2482_TI, NULL, NULL, &t2481_TI, NULL, t2481_VT, &EmptyCustomAttributesCache, &t2481_TI, &t2481_0_0_0, &t2481_1_0_0, NULL, &t2481_GC, NULL, NULL, NULL, t2481_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2481), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2482_TI;

#include "t2483.h"
extern TypeInfo t2482_TI;
extern TypeInfo t2483_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t388_TI;
extern TypeInfo t123_TI;
#include "t2483MD.h"
extern Il2CppType t2483_0_0_0;
extern MethodInfo m3313_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m2105_MI;
extern MethodInfo m3312_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m20738_MI;
extern MethodInfo m3314_MI;
extern MethodInfo m13675_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
struct t656;
#define m20738(__this, p0, method) (void)m18087_gshared((t25 *)__this, (t25 *)p0, method)
extern MethodInfo m20738_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Toggle>
extern Il2CppType t2483_0_0_1;
FieldInfo t2482_f0_FieldInfo = 
{
	"Delegate", &t2483_0_0_1, &t2482_TI, offsetof(t2482, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2482_FIs[] =
{
	&t2482_f0_FieldInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2482_m13670_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2482_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13670_MI = 
{
	".ctor", (methodPointerType)&m8418_gshared, &t2482_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t2482_m13670_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2483_0_0_0;
static ParameterInfo t2482_m13671_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2483_0_0_0},
};
extern TypeInfo t2482_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13671_MI = 
{
	".ctor", (methodPointerType)&m8419_gshared, &t2482_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2482_m13671_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2482_m13672_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2482_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13672_MI = 
{
	"Invoke", (methodPointerType)&m8420_gshared, &t2482_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2482_m13672_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2482_m13673_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2482_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13673_MI = 
{
	"Find", (methodPointerType)&m8421_gshared, &t2482_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2482_m13673_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2482_MIs[] =
{
	&m13670_MI,
	&m13671_MI,
	&m13672_MI,
	&m13673_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13672_MI;
extern MethodInfo m13673_MI;
static MethodInfo* t2482_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13672_MI,
	&m13673_MI,
};
extern Il2CppType t2483_0_0_0;
extern TypeInfo t2483_TI;
extern MethodInfo m20738_MI;
extern TypeInfo t388_TI;
extern MethodInfo m13675_MI;
static void* t2482_RGCTXData[5] = 
{
	(void*)&t2483_0_0_0,
	&t2483_TI,
	&m20738_MI,
	&t388_TI,
	&m13675_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2482_0_0_0;
extern Il2CppType t2482_1_0_0;
extern TypeInfo t656_TI;
struct t2482;
extern TypeInfo t2482_TI;
extern Il2CppGenericClass t2482_GC;
TypeInfo t2482_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2482_MIs, NULL, t2482_FIs, NULL, &t656_TI, NULL, NULL, &t2482_TI, NULL, t2482_VT, &EmptyCustomAttributesCache, &t2482_TI, &t2482_0_0_0, &t2482_1_0_0, NULL, &t2482_GC, NULL, NULL, NULL, t2482_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2482), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2483_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.Toggle>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2483_m13674_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2483_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13674_MI = 
{
	".ctor", (methodPointerType)&m8422_gshared, &t2483_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2483_m13674_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2483_m13675_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2483_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13675_MI = 
{
	"Invoke", (methodPointerType)&m8423_gshared, &t2483_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2483_m13675_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2483_m13676_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2483_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13676_MI = 
{
	"BeginInvoke", (methodPointerType)&m8424_gshared, &t2483_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t2483_m13676_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2483_m13677_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2483_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13677_MI = 
{
	"EndInvoke", (methodPointerType)&m8425_gshared, &t2483_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2483_m13677_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2483_MIs[] =
{
	&m13674_MI,
	&m13675_MI,
	&m13676_MI,
	&m13677_MI,
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
extern MethodInfo m13675_MI;
extern MethodInfo m13676_MI;
extern MethodInfo m13677_MI;
static MethodInfo* t2483_VT[] =
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
	&m13675_MI,
	&m13676_MI,
	&m13677_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2483_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2483_0_0_0;
extern Il2CppType t2483_1_0_0;
extern TypeInfo t345_TI;
struct t2483;
extern TypeInfo t2483_TI;
extern Il2CppGenericClass t2483_GC;
TypeInfo t2483_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2483_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2483_TI, NULL, t2483_VT, &EmptyCustomAttributesCache, &t2483_TI, &t2483_0_0_0, &t2483_1_0_0, t2483_IOs, &t2483_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2483), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t387.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t387_TI;
#include "t387MD.h"

#include "t2484.h"
#include "t2485.h"
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t387_TI;
extern TypeInfo t637_TI;
extern TypeInfo t131_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2485_TI;
#include "t666MD.h"
#include "t2485MD.h"
extern Il2CppType t125_0_0_0;
extern MethodInfo m3334_MI;
extern MethodInfo m13680_MI;
extern MethodInfo m3339_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
extern MethodInfo m3340_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3342_MI;
extern MethodInfo m13685_MI;
extern MethodInfo m13686_MI;
extern MethodInfo m3341_MI;


extern MethodInfo m2402_MI;
 void m2402 (t387 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2402_MI);
	{
		__this->f4 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), 1));
		m3334(__this, &m3334_MI);
		return;
	}
}
extern MethodInfo m13678_MI;
 void m13678 (t387 * __this, t2484 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13678_MI);
	{
		t656 * L_0 = m13680(NULL, p0, &m13680_MI);
		m3339(__this, L_0, &m3339_MI);
		return;
	}
}
extern MethodInfo m13679_MI;
 void m13679 (t387 * __this, t2484 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13679_MI);
	{
		NullCheck(p0);
		t25 * L_0 = m3475(p0, &m3475_MI);
		NullCheck(p0);
		t657 * L_1 = m3473(p0, &m3473_MI);
		m3340(__this, L_0, L_1, &m3340_MI);
		return;
	}
}
extern MethodInfo m2403_MI;
 t657 * m2403 (t387 * __this, t27* p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2403_MI);
	{
		t637* L_0 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t125_0_0_0), &m484_MI);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((t131 **)(t131 **)SZArrayLdElema(L_0, 0)) = (t131 *)L_1;
		t657 * L_2 = m3342(NULL, p1, p0, L_0, &m3342_MI);
		return L_2;
	}
}
extern MethodInfo m2404_MI;
 t656 * m2404 (t387 * __this, t25 * p0, t657 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2404_MI);
	{
		t2485 * L_0 = (t2485 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2485_TI));
		m13685(L_0, p0, p1, &m13685_MI);
		return L_0;
	}
}
extern MethodInfo m13680_MI;
 t656 * m13680 (t25 * __this, t2484 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13680_MI);
	{
		t2485 * L_0 = (t2485 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2485_TI));
		m13686(L_0, p0, &m13686_MI);
		return L_0;
	}
}
extern MethodInfo m2405_MI;
 void m2405 (t387 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2405_MI);
	{
		t158* L_0 = (__this->f4);
		bool L_1 = p0;
		t25 * L_2 = Box(InitializedTypeInfo(&t125_TI), &L_1);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_2);
		*((t25 **)(t25 **)SZArrayLdElema(L_0, 0)) = (t25 *)L_2;
		t158* L_3 = (__this->f4);
		m3341(__this, L_3, &m3341_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Events.UnityEvent`1<System.Boolean>
extern Il2CppType t158_0_0_33;
FieldInfo t387_f4_FieldInfo = 
{
	"m_InvokeArray", &t158_0_0_33, &t387_TI, offsetof(t387, f4), &EmptyCustomAttributesCache};
static FieldInfo* t387_FIs[] =
{
	&t387_f4_FieldInfo,
	NULL
};
extern TypeInfo t387_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2402_MI = 
{
	".ctor", (methodPointerType)&m2402, &t387_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2484_0_0_0;
static ParameterInfo t387_m13678_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &t2484_0_0_0},
};
extern TypeInfo t387_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13678_MI = 
{
	"AddListener", (methodPointerType)&m13678, &t387_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t387_m13678_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2484_0_0_0;
static ParameterInfo t387_m13679_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &t2484_0_0_0},
};
extern TypeInfo t387_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13679_MI = 
{
	"RemoveListener", (methodPointerType)&m13679, &t387_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t387_m13679_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t387_m2403_ParameterInfos[] = 
{
	{"name", 0, 134217728, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"targetObj", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t387_TI;
extern Il2CppType t657_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2403_MI = 
{
	"FindMethod_Impl", (methodPointerType)&m2403, &t387_TI, &t657_0_0_0, RuntimeInvoker_t25_t25_t25, t387_m2403_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t387_m2404_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t387_TI;
extern Il2CppType t656_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2404_MI = 
{
	"GetDelegate", (methodPointerType)&m2404, &t387_TI, &t656_0_0_0, RuntimeInvoker_t25_t25_t25, t387_m2404_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2484_0_0_0;
static ParameterInfo t387_m13680_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t2484_0_0_0},
};
extern TypeInfo t387_TI;
extern Il2CppType t656_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13680_MI = 
{
	"GetDelegate", (methodPointerType)&m13680, &t387_TI, &t656_0_0_0, RuntimeInvoker_t25_t25, t387_m13680_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t387_m2405_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t387_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m2405_MI = 
{
	"Invoke", (methodPointerType)&m2405, &t387_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t387_m2405_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t387_MIs[] =
{
	&m2402_MI,
	&m13678_MI,
	&m13679_MI,
	&m2403_MI,
	&m2404_MI,
	&m13680_MI,
	&m2405_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m1875_MI;
extern MethodInfo m1876_MI;
extern MethodInfo m1877_MI;
extern MethodInfo m2403_MI;
extern MethodInfo m2404_MI;
static MethodInfo* t387_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m1875_MI,
	&m1876_MI,
	&m1877_MI,
	&m2403_MI,
	&m2404_MI,
};
extern TypeInfo t441_TI;
static Il2CppInterfaceOffsetPair t387_IOs[] = 
{
	{ &t441_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t387_0_0_0;
extern Il2CppType t387_1_0_0;
extern TypeInfo t666_TI;
struct t387;
extern TypeInfo t387_TI;
extern Il2CppGenericClass t387_GC;
TypeInfo t387_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`1", "UnityEngine.Events", t387_MIs, NULL, t387_FIs, NULL, &t666_TI, NULL, NULL, &t387_TI, NULL, t387_VT, &EmptyCustomAttributesCache, &t387_TI, &t387_0_0_0, &t387_1_0_0, t387_IOs, &t387_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t387), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 0, 1, 0, 0, 8, 0, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2484_TI;
#include "t2484MD.h"



extern MethodInfo m13681_MI;
 void m13681 (t2484 * __this, t25 * p0, t61 p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13681_MI);
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m13682_MI;
 void m13682 (t2484 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13682_MI);
	typedef  void (*FunctionPointerType) (t25 * __this, bool p0, MethodInfo* method);
	if (__this->f9)
		m13682((t2484 *)__this->f9,  p0, method);
	((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m13683_MI;
 t25 * m13683 (t2484 * __this, bool p0, t219 * p1, t25 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13683_MI);
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	return (t25 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m13684_MI;
 void m13684 (t2484 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13684_MI);
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition UnityEngine.Events.UnityAction`1<System.Boolean>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2484_m13681_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2484_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13681_MI = 
{
	".ctor", (methodPointerType)&m13681, &t2484_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2484_m13681_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t2484_m13682_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t2484_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m13682_MI = 
{
	"Invoke", (methodPointerType)&m13682, &t2484_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t2484_m13682_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2484_m13683_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2484_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t137_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13683_MI = 
{
	"BeginInvoke", (methodPointerType)&m13683, &t2484_TI, &t218_0_0_0, RuntimeInvoker_t25_t137_t25_t25, t2484_m13683_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2484_m13684_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2484_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13684_MI = 
{
	"EndInvoke", (methodPointerType)&m13684, &t2484_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2484_m13684_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2484_MIs[] =
{
	&m13681_MI,
	&m13682_MI,
	&m13683_MI,
	&m13684_MI,
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
extern MethodInfo m13682_MI;
extern MethodInfo m13683_MI;
extern MethodInfo m13684_MI;
static MethodInfo* t2484_VT[] =
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
	&m13682_MI,
	&m13683_MI,
	&m13684_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2484_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2484_0_0_0;
extern Il2CppType t2484_1_0_0;
extern TypeInfo t345_TI;
struct t2484;
extern TypeInfo t2484_TI;
extern Il2CppGenericClass t2484_GC;
TypeInfo t2484_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2484_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2484_TI, NULL, t2484_VT, &EmptyCustomAttributesCache, &t2484_TI, &t2484_0_0_0, &t2484_1_0_0, t2484_IOs, &t2484_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2484), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2485_TI;

extern TypeInfo t2485_TI;
extern TypeInfo t2484_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t125_TI;
extern TypeInfo t123_TI;
extern Il2CppType t2484_0_0_0;
extern MethodInfo m3313_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m2105_MI;
extern MethodInfo m3312_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m20739_MI;
extern MethodInfo m3314_MI;
extern MethodInfo m13682_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
struct t656;
 void m20739 (t25 * __this, t25 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20739_MI;


extern MethodInfo m13685_MI;
 void m13685 (t2485 * __this, t25 * p0, t657 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13685_MI);
	{
		m3313(__this, p0, p1, &m3313_MI);
		t2484 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t2484_0_0_0), &m484_MI);
		t466 * L_2 = m3479(NULL, L_1, p0, p1, &m3479_MI);
		t466 * L_3 = m2105(NULL, L_0, ((t2484 *)IsInst(L_2, InitializedTypeInfo(&t2484_TI))), &m2105_MI);
		__this->f0 = ((t2484 *)Castclass(L_3, InitializedTypeInfo(&t2484_TI)));
		return;
	}
}
extern MethodInfo m13686_MI;
 void m13686 (t2485 * __this, t2484 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13686_MI);
	{
		m3312(__this, &m3312_MI);
		t2484 * L_0 = (__this->f0);
		t466 * L_1 = m2105(NULL, L_0, p0, &m2105_MI);
		__this->f0 = ((t2484 *)Castclass(L_1, InitializedTypeInfo(&t2484_TI)));
		return;
	}
}
extern MethodInfo m13687_MI;
 void m13687 (t2485 * __this, t158* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13687_MI);
	{
		NullCheck(p0);
		if ((((int32_t)(((int32_t)(((t122 *)p0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		t445 * L_0 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m2409(L_0, (t27*) &_stringLiteral215, &m2409_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 0);
		m20739(NULL, (*(t25 **)(t25 **)SZArrayLdElema(p0, 0)), &m20739_MI);
		t2484 * L_1 = (__this->f0);
		bool L_2 = m3314(NULL, L_1, &m3314_MI);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		t2484 * L_3 = (__this->f0);
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 0);
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(&m13682_MI, L_3, ((*(bool*)((bool*)UnBox ((*(t25 **)(t25 **)SZArrayLdElema(p0, 0)), InitializedTypeInfo(&t125_TI))))));
	}

IL_003f:
	{
		return;
	}
}
extern MethodInfo m13688_MI;
 bool m13688 (t2485 * __this, t25 * p0, t657 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13688_MI);
	int32_t G_B3_0 = 0;
	{
		t2484 * L_0 = (__this->f0);
		NullCheck(L_0);
		t25 * L_1 = m3475(L_0, &m3475_MI);
		if ((((t25 *)L_1) != ((t25 *)p0)))
		{
			goto IL_0021;
		}
	}
	{
		t2484 * L_2 = (__this->f0);
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
// Metadata Definition UnityEngine.Events.InvokableCall`1<System.Boolean>
extern Il2CppType t2484_0_0_1;
FieldInfo t2485_f0_FieldInfo = 
{
	"Delegate", &t2484_0_0_1, &t2485_TI, offsetof(t2485, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2485_FIs[] =
{
	&t2485_f0_FieldInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2485_m13685_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2485_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13685_MI = 
{
	".ctor", (methodPointerType)&m13685, &t2485_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t2485_m13685_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2484_0_0_0;
static ParameterInfo t2485_m13686_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2484_0_0_0},
};
extern TypeInfo t2485_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13686_MI = 
{
	".ctor", (methodPointerType)&m13686, &t2485_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2485_m13686_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2485_m13687_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2485_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13687_MI = 
{
	"Invoke", (methodPointerType)&m13687, &t2485_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2485_m13687_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2485_m13688_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2485_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13688_MI = 
{
	"Find", (methodPointerType)&m13688, &t2485_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2485_m13688_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2485_MIs[] =
{
	&m13685_MI,
	&m13686_MI,
	&m13687_MI,
	&m13688_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13687_MI;
extern MethodInfo m13688_MI;
static MethodInfo* t2485_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13687_MI,
	&m13688_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2485_0_0_0;
extern Il2CppType t2485_1_0_0;
extern TypeInfo t656_TI;
struct t2485;
extern TypeInfo t2485_TI;
extern Il2CppGenericClass t2485_GC;
TypeInfo t2485_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2485_MIs, NULL, t2485_FIs, NULL, &t656_TI, NULL, NULL, &t2485_TI, NULL, t2485_VT, &EmptyCustomAttributesCache, &t2485_TI, &t2485_0_0_0, &t2485_1_0_0, NULL, &t2485_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2485), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3862_TI;

#include "t385.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Toggle/ToggleTransition>
extern MethodInfo m27873_MI;
static PropertyInfo t3862____Current_PropertyInfo = 
{
	&t3862_TI, "Current", &m27873_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3862_PIs[] =
{
	&t3862____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3862_TI;
extern Il2CppType t385_0_0_0;
extern void* RuntimeInvoker_t385 (MethodInfo* method, void* obj, void** args);
MethodInfo m27873_MI = 
{
	"get_Current", NULL, &t3862_TI, &t385_0_0_0, RuntimeInvoker_t385, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3862_MIs[] =
{
	&m27873_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3862_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3862_0_0_0;
extern Il2CppType t3862_1_0_0;
struct t3862;
extern TypeInfo t3862_TI;
extern Il2CppGenericClass t3862_GC;
TypeInfo t3862_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3862_MIs, t3862_PIs, NULL, NULL, NULL, NULL, NULL, &t3862_TI, t3862_ITIs, NULL, &EmptyCustomAttributesCache, &t3862_TI, &t3862_0_0_0, &t3862_1_0_0, NULL, &t3862_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2486.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2486_TI;
#include "t2486MD.h"

extern TypeInfo t2486_TI;
extern TypeInfo t385_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13693_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20741_MI;
struct t122;
 int32_t m20741 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20741_MI;


extern MethodInfo m13689_MI;
 void m13689 (t2486 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13689_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13690_MI;
 t25 * m13690 (t2486 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13690_MI);
	{
		int32_t L_0 = m13693(__this, &m13693_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t385_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13691_MI;
 void m13691 (t2486 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13691_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13692_MI;
 bool m13692 (t2486 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13692_MI);
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t122 * L_1 = (__this->f0);
		NullCheck(L_1);
		int32_t L_2 = m4234(L_1, &m4234_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m13693_MI;
 int32_t m13693 (t2486 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13693_MI);
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1387 * L_1 = (t1387 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1387_TI));
		m7431(L_1, (t27*) &_stringLiteral394, &m7431_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1387 * L_3 = (t1387 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1387_TI));
		m7431(L_3, (t27*) &_stringLiteral395, &m7431_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t122 * L_4 = (__this->f0);
		t122 * L_5 = (__this->f0);
		NullCheck(L_5);
		int32_t L_6 = m4234(L_5, &m4234_MI);
		int32_t L_7 = (__this->f1);
		NullCheck(L_4);
		int32_t L_8 = m20741(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20741_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle/ToggleTransition>
extern Il2CppType t122_0_0_1;
FieldInfo t2486_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2486_TI, offsetof(t2486, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2486_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2486_TI, offsetof(t2486, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2486_FIs[] =
{
	&t2486_f0_FieldInfo,
	&t2486_f1_FieldInfo,
	NULL
};
extern MethodInfo m13690_MI;
static PropertyInfo t2486____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2486_TI, "System.Collections.IEnumerator.Current", &m13690_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13693_MI;
static PropertyInfo t2486____Current_PropertyInfo = 
{
	&t2486_TI, "Current", &m13693_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2486_PIs[] =
{
	&t2486____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2486____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2486_m13689_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2486_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13689_MI = 
{
	".ctor", (methodPointerType)&m13689, &t2486_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2486_m13689_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2486_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13690_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13690, &t2486_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2486_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13691_MI = 
{
	"Dispose", (methodPointerType)&m13691, &t2486_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2486_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13692_MI = 
{
	"MoveNext", (methodPointerType)&m13692, &t2486_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2486_TI;
extern Il2CppType t385_0_0_0;
extern void* RuntimeInvoker_t385 (MethodInfo* method, void* obj, void** args);
MethodInfo m13693_MI = 
{
	"get_Current", (methodPointerType)&m13693, &t2486_TI, &t385_0_0_0, RuntimeInvoker_t385, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2486_MIs[] =
{
	&m13689_MI,
	&m13690_MI,
	&m13691_MI,
	&m13692_MI,
	&m13693_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13690_MI;
extern MethodInfo m13692_MI;
extern MethodInfo m13691_MI;
extern MethodInfo m13693_MI;
static MethodInfo* t2486_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13690_MI,
	&m13692_MI,
	&m13691_MI,
	&m13693_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3862_TI;
static TypeInfo* t2486_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3862_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3862_TI;
static Il2CppInterfaceOffsetPair t2486_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3862_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2486_0_0_0;
extern Il2CppType t2486_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2486_TI;
extern Il2CppGenericClass t2486_GC;
extern TypeInfo t122_TI;
TypeInfo t2486_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2486_MIs, t2486_PIs, t2486_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2486_TI, t2486_ITIs, t2486_VT, &EmptyCustomAttributesCache, &t2486_TI, &t2486_0_0_0, &t2486_1_0_0, t2486_IOs, &t2486_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2486)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4766_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle/ToggleTransition>
extern MethodInfo m27874_MI;
static PropertyInfo t4766____Count_PropertyInfo = 
{
	&t4766_TI, "Count", &m27874_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27875_MI;
static PropertyInfo t4766____IsReadOnly_PropertyInfo = 
{
	&t4766_TI, "IsReadOnly", &m27875_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4766_PIs[] =
{
	&t4766____Count_PropertyInfo,
	&t4766____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4766_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27874_MI = 
{
	"get_Count", NULL, &t4766_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4766_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27875_MI = 
{
	"get_IsReadOnly", NULL, &t4766_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t385_0_0_0;
static ParameterInfo t4766_m27876_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t385_0_0_0},
};
extern TypeInfo t4766_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27876_MI = 
{
	"Add", NULL, &t4766_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4766_m27876_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4766_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27877_MI = 
{
	"Clear", NULL, &t4766_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t385_0_0_0;
static ParameterInfo t4766_m27878_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t385_0_0_0},
};
extern TypeInfo t4766_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27878_MI = 
{
	"Contains", NULL, &t4766_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4766_m27878_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3625_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4766_m27879_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3625_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4766_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27879_MI = 
{
	"CopyTo", NULL, &t4766_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4766_m27879_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t385_0_0_0;
static ParameterInfo t4766_m27880_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t385_0_0_0},
};
extern TypeInfo t4766_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27880_MI = 
{
	"Remove", NULL, &t4766_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4766_m27880_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4766_MIs[] =
{
	&m27874_MI,
	&m27875_MI,
	&m27876_MI,
	&m27877_MI,
	&m27878_MI,
	&m27879_MI,
	&m27880_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4768_TI;
static TypeInfo* t4766_ITIs[] = 
{
	&t703_TI,
	&t4768_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4766_0_0_0;
extern Il2CppType t4766_1_0_0;
struct t4766;
extern TypeInfo t4766_TI;
extern Il2CppGenericClass t4766_GC;
TypeInfo t4766_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4766_MIs, t4766_PIs, NULL, NULL, NULL, NULL, NULL, &t4766_TI, t4766_ITIs, NULL, &EmptyCustomAttributesCache, &t4766_TI, &t4766_0_0_0, &t4766_1_0_0, NULL, &t4766_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4768_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle/ToggleTransition>
extern TypeInfo t4768_TI;
extern Il2CppType t3862_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27881_MI = 
{
	"GetEnumerator", NULL, &t4768_TI, &t3862_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4768_MIs[] =
{
	&m27881_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4768_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4768_0_0_0;
extern Il2CppType t4768_1_0_0;
struct t4768;
extern TypeInfo t4768_TI;
extern Il2CppGenericClass t4768_GC;
TypeInfo t4768_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4768_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4768_TI, t4768_ITIs, NULL, &EmptyCustomAttributesCache, &t4768_TI, &t4768_0_0_0, &t4768_1_0_0, NULL, &t4768_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4767_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Toggle/ToggleTransition>
extern MethodInfo m27882_MI;
extern MethodInfo m27883_MI;
static PropertyInfo t4767____Item_PropertyInfo = 
{
	&t4767_TI, "Item", &m27882_MI, &m27883_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4767_PIs[] =
{
	&t4767____Item_PropertyInfo,
	NULL
};
extern Il2CppType t385_0_0_0;
static ParameterInfo t4767_m27884_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t385_0_0_0},
};
extern TypeInfo t4767_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27884_MI = 
{
	"IndexOf", NULL, &t4767_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t4767_m27884_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t385_0_0_0;
static ParameterInfo t4767_m27885_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t385_0_0_0},
};
extern TypeInfo t4767_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27885_MI = 
{
	"Insert", NULL, &t4767_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4767_m27885_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4767_m27886_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4767_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27886_MI = 
{
	"RemoveAt", NULL, &t4767_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4767_m27886_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4767_m27882_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4767_TI;
extern Il2CppType t385_0_0_0;
extern void* RuntimeInvoker_t385_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27882_MI = 
{
	"get_Item", NULL, &t4767_TI, &t385_0_0_0, RuntimeInvoker_t385_t134, t4767_m27882_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t385_0_0_0;
static ParameterInfo t4767_m27883_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t385_0_0_0},
};
extern TypeInfo t4767_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27883_MI = 
{
	"set_Item", NULL, &t4767_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4767_m27883_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4767_MIs[] =
{
	&m27884_MI,
	&m27885_MI,
	&m27886_MI,
	&m27882_MI,
	&m27883_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4766_TI;
extern TypeInfo t4768_TI;
static TypeInfo* t4767_ITIs[] = 
{
	&t703_TI,
	&t4766_TI,
	&t4768_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4767_0_0_0;
extern Il2CppType t4767_1_0_0;
struct t4767;
extern TypeInfo t4767_TI;
extern Il2CppGenericClass t4767_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4767_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4767_MIs, t4767_PIs, NULL, NULL, NULL, NULL, NULL, &t4767_TI, t4767_ITIs, NULL, &t1518__CustomAttributeCache, &t4767_TI, &t4767_0_0_0, &t4767_1_0_0, NULL, &t4767_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3863_TI;

#include "t389.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ToggleGroup>
extern MethodInfo m27887_MI;
static PropertyInfo t3863____Current_PropertyInfo = 
{
	&t3863_TI, "Current", &m27887_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3863_PIs[] =
{
	&t3863____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3863_TI;
extern Il2CppType t389_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27887_MI = 
{
	"get_Current", NULL, &t3863_TI, &t389_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3863_MIs[] =
{
	&m27887_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3863_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3863_0_0_0;
extern Il2CppType t3863_1_0_0;
struct t3863;
extern TypeInfo t3863_TI;
extern Il2CppGenericClass t3863_GC;
TypeInfo t3863_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3863_MIs, t3863_PIs, NULL, NULL, NULL, NULL, NULL, &t3863_TI, t3863_ITIs, NULL, &EmptyCustomAttributesCache, &t3863_TI, &t3863_0_0_0, &t3863_1_0_0, NULL, &t3863_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2487.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2487_TI;
#include "t2487MD.h"

extern TypeInfo t2487_TI;
extern TypeInfo t389_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13698_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20752_MI;
struct t122;
#define m20752(__this, p0, method) (t389 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m20752_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.ToggleGroup>
extern Il2CppType t122_0_0_1;
FieldInfo t2487_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2487_TI, offsetof(t2487, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2487_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2487_TI, offsetof(t2487, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2487_FIs[] =
{
	&t2487_f0_FieldInfo,
	&t2487_f1_FieldInfo,
	NULL
};
extern MethodInfo m13695_MI;
static PropertyInfo t2487____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2487_TI, "System.Collections.IEnumerator.Current", &m13695_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13698_MI;
static PropertyInfo t2487____Current_PropertyInfo = 
{
	&t2487_TI, "Current", &m13698_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2487_PIs[] =
{
	&t2487____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2487____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2487_m13694_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2487_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13694_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t2487_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2487_m13694_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2487_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13695_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t2487_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2487_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13696_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t2487_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2487_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13697_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t2487_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2487_TI;
extern Il2CppType t389_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13698_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t2487_TI, &t389_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2487_MIs[] =
{
	&m13694_MI,
	&m13695_MI,
	&m13696_MI,
	&m13697_MI,
	&m13698_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13695_MI;
extern MethodInfo m13697_MI;
extern MethodInfo m13696_MI;
extern MethodInfo m13698_MI;
static MethodInfo* t2487_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13695_MI,
	&m13697_MI,
	&m13696_MI,
	&m13698_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3863_TI;
static TypeInfo* t2487_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3863_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3863_TI;
static Il2CppInterfaceOffsetPair t2487_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3863_TI, 7},
};
extern MethodInfo m13698_MI;
extern TypeInfo t389_TI;
extern MethodInfo m20752_MI;
static void* t2487_RGCTXData[3] = 
{
	&m13698_MI,
	&t389_TI,
	&m20752_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2487_0_0_0;
extern Il2CppType t2487_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2487_TI;
extern Il2CppGenericClass t2487_GC;
extern TypeInfo t122_TI;
TypeInfo t2487_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2487_MIs, t2487_PIs, t2487_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2487_TI, t2487_ITIs, t2487_VT, &EmptyCustomAttributesCache, &t2487_TI, &t2487_0_0_0, &t2487_1_0_0, t2487_IOs, &t2487_GC, NULL, NULL, NULL, t2487_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2487)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4769_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.ToggleGroup>
extern MethodInfo m27888_MI;
static PropertyInfo t4769____Count_PropertyInfo = 
{
	&t4769_TI, "Count", &m27888_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27889_MI;
static PropertyInfo t4769____IsReadOnly_PropertyInfo = 
{
	&t4769_TI, "IsReadOnly", &m27889_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4769_PIs[] =
{
	&t4769____Count_PropertyInfo,
	&t4769____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4769_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27888_MI = 
{
	"get_Count", NULL, &t4769_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4769_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27889_MI = 
{
	"get_IsReadOnly", NULL, &t4769_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t389_0_0_0;
static ParameterInfo t4769_m27890_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t4769_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27890_MI = 
{
	"Add", NULL, &t4769_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t4769_m27890_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4769_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27891_MI = 
{
	"Clear", NULL, &t4769_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t389_0_0_0;
static ParameterInfo t4769_m27892_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t4769_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27892_MI = 
{
	"Contains", NULL, &t4769_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4769_m27892_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3626_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4769_m27893_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3626_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4769_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27893_MI = 
{
	"CopyTo", NULL, &t4769_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4769_m27893_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t389_0_0_0;
static ParameterInfo t4769_m27894_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t4769_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27894_MI = 
{
	"Remove", NULL, &t4769_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4769_m27894_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4769_MIs[] =
{
	&m27888_MI,
	&m27889_MI,
	&m27890_MI,
	&m27891_MI,
	&m27892_MI,
	&m27893_MI,
	&m27894_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4771_TI;
static TypeInfo* t4769_ITIs[] = 
{
	&t703_TI,
	&t4771_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4769_0_0_0;
extern Il2CppType t4769_1_0_0;
struct t4769;
extern TypeInfo t4769_TI;
extern Il2CppGenericClass t4769_GC;
TypeInfo t4769_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4769_MIs, t4769_PIs, NULL, NULL, NULL, NULL, NULL, &t4769_TI, t4769_ITIs, NULL, &EmptyCustomAttributesCache, &t4769_TI, &t4769_0_0_0, &t4769_1_0_0, NULL, &t4769_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4771_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ToggleGroup>
extern TypeInfo t4771_TI;
extern Il2CppType t3863_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27895_MI = 
{
	"GetEnumerator", NULL, &t4771_TI, &t3863_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4771_MIs[] =
{
	&m27895_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4771_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4771_0_0_0;
extern Il2CppType t4771_1_0_0;
struct t4771;
extern TypeInfo t4771_TI;
extern Il2CppGenericClass t4771_GC;
TypeInfo t4771_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4771_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4771_TI, t4771_ITIs, NULL, &EmptyCustomAttributesCache, &t4771_TI, &t4771_0_0_0, &t4771_1_0_0, NULL, &t4771_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4770_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.ToggleGroup>
extern MethodInfo m27896_MI;
extern MethodInfo m27897_MI;
static PropertyInfo t4770____Item_PropertyInfo = 
{
	&t4770_TI, "Item", &m27896_MI, &m27897_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4770_PIs[] =
{
	&t4770____Item_PropertyInfo,
	NULL
};
extern Il2CppType t389_0_0_0;
static ParameterInfo t4770_m27898_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t4770_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27898_MI = 
{
	"IndexOf", NULL, &t4770_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t4770_m27898_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t389_0_0_0;
static ParameterInfo t4770_m27899_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t4770_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27899_MI = 
{
	"Insert", NULL, &t4770_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4770_m27899_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4770_m27900_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4770_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27900_MI = 
{
	"RemoveAt", NULL, &t4770_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4770_m27900_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4770_m27896_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4770_TI;
extern Il2CppType t389_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27896_MI = 
{
	"get_Item", NULL, &t4770_TI, &t389_0_0_0, RuntimeInvoker_t25_t134, t4770_m27896_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t389_0_0_0;
static ParameterInfo t4770_m27897_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t4770_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27897_MI = 
{
	"set_Item", NULL, &t4770_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4770_m27897_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4770_MIs[] =
{
	&m27898_MI,
	&m27899_MI,
	&m27900_MI,
	&m27896_MI,
	&m27897_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4769_TI;
extern TypeInfo t4771_TI;
static TypeInfo* t4770_ITIs[] = 
{
	&t703_TI,
	&t4769_TI,
	&t4771_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4770_0_0_0;
extern Il2CppType t4770_1_0_0;
struct t4770;
extern TypeInfo t4770_TI;
extern Il2CppGenericClass t4770_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4770_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4770_MIs, t4770_PIs, NULL, NULL, NULL, NULL, NULL, &t4770_TI, t4770_ITIs, NULL, &t1518__CustomAttributeCache, &t4770_TI, &t4770_0_0_0, &t4770_1_0_0, NULL, &t4770_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2488.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2488_TI;
#include "t2488MD.h"

#include "t2489.h"
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t2488_TI;
extern TypeInfo t389_TI;
extern TypeInfo t2489_TI;
extern TypeInfo t123_TI;
#include "t2489MD.h"
extern MethodInfo m13701_MI;
extern MethodInfo m13703_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.ToggleGroup>
extern Il2CppType t158_0_0_33;
FieldInfo t2488_f1_FieldInfo = 
{
	"m_Arg1", &t158_0_0_33, &t2488_TI, offsetof(t2488, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2488_FIs[] =
{
	&t2488_f1_FieldInfo,
	NULL
};
extern Il2CppType t60_0_0_0;
extern Il2CppType t657_0_0_0;
extern Il2CppType t389_0_0_0;
static ParameterInfo t2488_m13699_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t2488_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13699_MI = 
{
	".ctor", (methodPointerType)&m8415_gshared, &t2488_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t2488_m13699_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2488_m13700_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2488_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13700_MI = 
{
	"Invoke", (methodPointerType)&m8417_gshared, &t2488_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2488_m13700_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2488_MIs[] =
{
	&m13699_MI,
	&m13700_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13700_MI;
extern MethodInfo m13704_MI;
static MethodInfo* t2488_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13700_MI,
	&m13704_MI,
};
extern Il2CppType t2490_0_0_0;
extern TypeInfo t2490_TI;
extern MethodInfo m20762_MI;
extern TypeInfo t389_TI;
extern MethodInfo m13706_MI;
extern MethodInfo m13701_MI;
extern TypeInfo t389_TI;
extern MethodInfo m13703_MI;
static void* t2488_RGCTXData[8] = 
{
	(void*)&t2490_0_0_0,
	&t2490_TI,
	&m20762_MI,
	&t389_TI,
	&m13706_MI,
	&m13701_MI,
	&t389_TI,
	&m13703_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2488_0_0_0;
extern Il2CppType t2488_1_0_0;
extern TypeInfo t2489_TI;
struct t2488;
extern TypeInfo t2488_TI;
extern Il2CppGenericClass t2488_GC;
TypeInfo t2488_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2488_MIs, NULL, t2488_FIs, NULL, &t2489_TI, NULL, NULL, &t2488_TI, NULL, t2488_VT, &EmptyCustomAttributesCache, &t2488_TI, &t2488_0_0_0, &t2488_1_0_0, NULL, &t2488_GC, NULL, NULL, NULL, t2488_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2488), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2489_TI;

#include "t2490.h"
extern TypeInfo t2489_TI;
extern TypeInfo t2490_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t389_TI;
extern TypeInfo t123_TI;
#include "t2490MD.h"
extern Il2CppType t2490_0_0_0;
extern MethodInfo m3313_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m2105_MI;
extern MethodInfo m3312_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m20762_MI;
extern MethodInfo m3314_MI;
extern MethodInfo m13706_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
struct t656;
#define m20762(__this, p0, method) (void)m18087_gshared((t25 *)__this, (t25 *)p0, method)
extern MethodInfo m20762_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.ToggleGroup>
extern Il2CppType t2490_0_0_1;
FieldInfo t2489_f0_FieldInfo = 
{
	"Delegate", &t2490_0_0_1, &t2489_TI, offsetof(t2489, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2489_FIs[] =
{
	&t2489_f0_FieldInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2489_m13701_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2489_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13701_MI = 
{
	".ctor", (methodPointerType)&m8418_gshared, &t2489_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t2489_m13701_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2490_0_0_0;
static ParameterInfo t2489_m13702_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2490_0_0_0},
};
extern TypeInfo t2489_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13702_MI = 
{
	".ctor", (methodPointerType)&m8419_gshared, &t2489_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2489_m13702_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2489_m13703_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2489_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13703_MI = 
{
	"Invoke", (methodPointerType)&m8420_gshared, &t2489_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2489_m13703_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2489_m13704_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2489_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13704_MI = 
{
	"Find", (methodPointerType)&m8421_gshared, &t2489_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2489_m13704_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2489_MIs[] =
{
	&m13701_MI,
	&m13702_MI,
	&m13703_MI,
	&m13704_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13703_MI;
extern MethodInfo m13704_MI;
static MethodInfo* t2489_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13703_MI,
	&m13704_MI,
};
extern Il2CppType t2490_0_0_0;
extern TypeInfo t2490_TI;
extern MethodInfo m20762_MI;
extern TypeInfo t389_TI;
extern MethodInfo m13706_MI;
static void* t2489_RGCTXData[5] = 
{
	(void*)&t2490_0_0_0,
	&t2490_TI,
	&m20762_MI,
	&t389_TI,
	&m13706_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2489_0_0_0;
extern Il2CppType t2489_1_0_0;
extern TypeInfo t656_TI;
struct t2489;
extern TypeInfo t2489_TI;
extern Il2CppGenericClass t2489_GC;
TypeInfo t2489_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2489_MIs, NULL, t2489_FIs, NULL, &t656_TI, NULL, NULL, &t2489_TI, NULL, t2489_VT, &EmptyCustomAttributesCache, &t2489_TI, &t2489_0_0_0, &t2489_1_0_0, NULL, &t2489_GC, NULL, NULL, NULL, t2489_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2489), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2490_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.ToggleGroup>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2490_m13705_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2490_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13705_MI = 
{
	".ctor", (methodPointerType)&m8422_gshared, &t2490_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2490_m13705_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t389_0_0_0;
static ParameterInfo t2490_m13706_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t2490_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13706_MI = 
{
	"Invoke", (methodPointerType)&m8423_gshared, &t2490_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2490_m13706_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t389_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2490_m13707_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2490_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13707_MI = 
{
	"BeginInvoke", (methodPointerType)&m8424_gshared, &t2490_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t2490_m13707_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2490_m13708_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2490_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13708_MI = 
{
	"EndInvoke", (methodPointerType)&m8425_gshared, &t2490_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2490_m13708_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2490_MIs[] =
{
	&m13705_MI,
	&m13706_MI,
	&m13707_MI,
	&m13708_MI,
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
extern MethodInfo m13706_MI;
extern MethodInfo m13707_MI;
extern MethodInfo m13708_MI;
static MethodInfo* t2490_VT[] =
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
	&m13706_MI,
	&m13707_MI,
	&m13708_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2490_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2490_0_0_0;
extern Il2CppType t2490_1_0_0;
extern TypeInfo t345_TI;
struct t2490;
extern TypeInfo t2490_TI;
extern Il2CppGenericClass t2490_GC;
TypeInfo t2490_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2490_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2490_TI, NULL, t2490_VT, &EmptyCustomAttributesCache, &t2490_TI, &t2490_0_0_0, &t2490_1_0_0, t2490_IOs, &t2490_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2490), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t390.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t390_TI;
#include "t390MD.h"

#include "t2496.h"
#include "t2494.h"
#include "t391.h"
#include "t2501.h"
#include "t2495.h"
extern TypeInfo t390_TI;
extern TypeInfo t388_TI;
extern TypeInfo t134_TI;
extern TypeInfo t123_TI;
extern TypeInfo t445_TI;
extern TypeInfo t685_TI;
extern TypeInfo t1386_TI;
extern TypeInfo t1351_TI;
extern TypeInfo t2493_TI;
extern TypeInfo t2491_TI;
extern TypeInfo t2496_TI;
extern TypeInfo t125_TI;
extern TypeInfo t393_TI;
extern TypeInfo t2492_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2494_TI;
extern TypeInfo t165_TI;
extern TypeInfo t391_TI;
extern TypeInfo t2501_TI;
#include "t2494MD.h"
#include "t391MD.h"
#include "t2496MD.h"
#include "t2501MD.h"
extern MethodInfo m2410_MI;
extern MethodInfo m13751_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m6998_MI;
extern MethodInfo m20764_MI;
extern MethodInfo m6999_MI;
extern MethodInfo m13739_MI;
extern MethodInfo m452_MI;
extern MethodInfo m13741_MI;
extern MethodInfo m13729_MI;
extern MethodInfo m27860_MI;
extern MethodInfo m13728_MI;
extern MethodInfo m13736_MI;
extern MethodInfo m4283_MI;
extern MethodInfo m2413_MI;
extern MethodInfo m2407_MI;
extern MethodInfo m13737_MI;
extern MethodInfo m13740_MI;
extern MethodInfo m2412_MI;
extern MethodInfo m13727_MI;
extern MethodInfo m13749_MI;
extern MethodInfo m7436_MI;
extern MethodInfo m13750_MI;
extern MethodInfo m27865_MI;
extern MethodInfo m27867_MI;
extern MethodInfo m27859_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m13758_MI;
extern MethodInfo m4279_MI;
extern MethodInfo m20766_MI;
extern MethodInfo m13734_MI;
extern MethodInfo m13735_MI;
extern MethodInfo m489_MI;
extern MethodInfo m13832_MI;
extern MethodInfo m13752_MI;
extern MethodInfo m13738_MI;
extern MethodInfo m13743_MI;
extern MethodInfo m4295_MI;
extern MethodInfo m13838_MI;
extern MethodInfo m20768_MI;
extern MethodInfo m20776_MI;
extern MethodInfo m4282_MI;
struct t122;
#define m20764(__this, p0, p1, method) (void)m18837_gshared((t25 *)__this, (t158**)p0, (int32_t)p1, method)
extern MethodInfo m20764_MI;
struct t122;
#include "t2499.h"
#define m20766(__this, p0, p1, p2, p3, method) (int32_t)m8232_gshared((t25 *)__this, (t158*)p0, (t25 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m20766_MI;
struct t122;
#define m20768(__this, p0, p1, p2, p3, method) (void)m18840_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (int32_t)p2, (t25*)p3, method)
extern MethodInfo m20768_MI;
struct t122;
#define m20776(__this, p0, p1, p2, method) (void)m18914_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (t1889 *)p2, method)
extern MethodInfo m20776_MI;


extern MethodInfo m13736_MI;
 t2496  m13736 (t390 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13736_MI);
	{
		t2496  L_0 = {0};
		m13752(&L_0, __this, &m13752_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
extern Il2CppType t134_0_0_32849;
FieldInfo t390_f0_FieldInfo = 
{
	"DefaultCapacity", &t134_0_0_32849, &t390_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2491_0_0_1;
FieldInfo t390_f1_FieldInfo = 
{
	"_items", &t2491_0_0_1, &t390_TI, offsetof(t390, f1), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t390_f2_FieldInfo = 
{
	"_size", &t134_0_0_1, &t390_TI, offsetof(t390, f2), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t390_f3_FieldInfo = 
{
	"_version", &t134_0_0_1, &t390_TI, offsetof(t390, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2491_0_0_49;
FieldInfo t390_f4_FieldInfo = 
{
	"EmptyArray", &t2491_0_0_49, &t390_TI, offsetof(t390_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t390_FIs[] =
{
	&t390_f0_FieldInfo,
	&t390_f1_FieldInfo,
	&t390_f2_FieldInfo,
	&t390_f3_FieldInfo,
	&t390_f4_FieldInfo,
	NULL
};
static const int32_t t390_f0_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t390_f0_DefaultValue = 
{
	&t390_f0_FieldInfo, { (char*)&t390_f0_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t390_FDVs[] = 
{
	&t390_f0_DefaultValue,
	NULL
};
extern MethodInfo m13720_MI;
static PropertyInfo t390____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t390_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13720_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13721_MI;
static PropertyInfo t390____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t390_TI, "System.Collections.ICollection.IsSynchronized", &m13721_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13722_MI;
static PropertyInfo t390____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t390_TI, "System.Collections.ICollection.SyncRoot", &m13722_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13723_MI;
static PropertyInfo t390____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t390_TI, "System.Collections.IList.IsFixedSize", &m13723_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13724_MI;
static PropertyInfo t390____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t390_TI, "System.Collections.IList.IsReadOnly", &m13724_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13725_MI;
extern MethodInfo m13726_MI;
static PropertyInfo t390____System_Collections_IList_Item_PropertyInfo = 
{
	&t390_TI, "System.Collections.IList.Item", &m13725_MI, &m13726_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13749_MI;
extern MethodInfo m13750_MI;
static PropertyInfo t390____Capacity_PropertyInfo = 
{
	&t390_TI, "Capacity", &m13749_MI, &m13750_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2411_MI;
static PropertyInfo t390____Count_PropertyInfo = 
{
	&t390_TI, "Count", &m2411_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2410_MI;
extern MethodInfo m13751_MI;
static PropertyInfo t390____Item_PropertyInfo = 
{
	&t390_TI, "Item", &m2410_MI, &m13751_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t390_PIs[] =
{
	&t390____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t390____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t390____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t390____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t390____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t390____System_Collections_IList_Item_PropertyInfo,
	&t390____Capacity_PropertyInfo,
	&t390____Count_PropertyInfo,
	&t390____Item_PropertyInfo,
	NULL
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2406_MI = 
{
	".ctor", (methodPointerType)&m9248_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t393_0_0_0;
static ParameterInfo t390_m13709_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t393_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13709_MI = 
{
	".ctor", (methodPointerType)&m9250_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t390_m13709_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t390_m13710_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13710_MI = 
{
	".ctor", (methodPointerType)&m9252_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t390_m13710_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13711_MI = 
{
	".cctor", (methodPointerType)&m9254_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t2492_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13712_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m9256_gshared, &t390_TI, &t2492_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t390_m13713_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13713_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9258_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t390_m13713_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13714_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9260_gshared, &t390_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t390_m13715_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13715_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9262_gshared, &t390_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t390_m13715_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t390_m13716_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13716_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9264_gshared, &t390_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t390_m13716_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t390_m13717_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13717_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9266_gshared, &t390_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t390_m13717_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t390_m13718_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13718_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9268_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t390_m13718_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t390_m13719_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13719_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9270_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t390_m13719_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13720_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9272_gshared, &t390_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13721_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9274_gshared, &t390_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13722_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9276_gshared, &t390_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13723_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9278_gshared, &t390_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13724_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9280_gshared, &t390_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t390_m13725_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13725_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9282_gshared, &t390_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t390_m13725_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t390_m13726_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13726_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9284_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t390_m13726_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t390_m2413_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2413_MI = 
{
	"Add", (methodPointerType)&m9285_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t390_m2413_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t390_m13727_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13727_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m9287_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t390_m13727_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2493_0_0_0;
static ParameterInfo t390_m13728_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2493_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13728_MI = 
{
	"AddCollection", (methodPointerType)&m9289_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t390_m13728_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t393_0_0_0;
static ParameterInfo t390_m13729_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t393_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13729_MI = 
{
	"AddEnumerable", (methodPointerType)&m9291_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t390_m13729_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t393_0_0_0;
static ParameterInfo t390_m13730_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t393_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13730_MI = 
{
	"AddRange", (methodPointerType)&m9293_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t390_m13730_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t2494_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13731_MI = 
{
	"AsReadOnly", (methodPointerType)&m9295_gshared, &t390_TI, &t2494_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13732_MI = 
{
	"Clear", (methodPointerType)&m9297_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t390_m2407_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2407_MI = 
{
	"Contains", (methodPointerType)&m9299_gshared, &t390_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t390_m2407_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2491_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t390_m13733_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2491_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13733_MI = 
{
	"CopyTo", (methodPointerType)&m9301_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t390_m13733_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t391_0_0_0;
static ParameterInfo t390_m2415_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t391_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2415_MI = 
{
	"Find", (methodPointerType)&m9303_gshared, &t390_TI, &t388_0_0_0, RuntimeInvoker_t25_t25, t390_m2415_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t391_0_0_0;
static ParameterInfo t390_m13734_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t391_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13734_MI = 
{
	"CheckMatch", (methodPointerType)&m9305_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t390_m13734_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t391_0_0_0;
static ParameterInfo t390_m13735_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t391_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13735_MI = 
{
	"GetIndex", (methodPointerType)&m9307_gshared, &t390_TI, &t134_0_0_0, RuntimeInvoker_t134_t134_t134_t25, t390_m13735_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t2496_0_0_0;
extern void* RuntimeInvoker_t2496 (MethodInfo* method, void* obj, void** args);
MethodInfo m13736_MI = 
{
	"GetEnumerator", (methodPointerType)&m13736, &t390_TI, &t2496_0_0_0, RuntimeInvoker_t2496, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t390_m13737_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13737_MI = 
{
	"IndexOf", (methodPointerType)&m9310_gshared, &t390_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t390_m13737_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t390_m13738_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13738_MI = 
{
	"Shift", (methodPointerType)&m9312_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t390_m13738_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t390_m13739_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13739_MI = 
{
	"CheckIndex", (methodPointerType)&m9314_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t390_m13739_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t390_m13740_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13740_MI = 
{
	"Insert", (methodPointerType)&m9316_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t390_m13740_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t393_0_0_0;
static ParameterInfo t390_m13741_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t393_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13741_MI = 
{
	"CheckCollection", (methodPointerType)&m9318_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t390_m13741_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t390_m2412_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2412_MI = 
{
	"Remove", (methodPointerType)&m9320_gshared, &t390_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t390_m2412_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t391_0_0_0;
static ParameterInfo t390_m13742_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t391_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13742_MI = 
{
	"RemoveAll", (methodPointerType)&m9322_gshared, &t390_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t390_m13742_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t390_m13743_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13743_MI = 
{
	"RemoveAt", (methodPointerType)&m9324_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t390_m13743_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13744_MI = 
{
	"Reverse", (methodPointerType)&m9326_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13745_MI = 
{
	"Sort", (methodPointerType)&m9328_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2495_0_0_0;
static ParameterInfo t390_m13746_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2495_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13746_MI = 
{
	"Sort", (methodPointerType)&m9330_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t390_m13746_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t2491_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13747_MI = 
{
	"ToArray", (methodPointerType)&m9332_gshared, &t390_TI, &t2491_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13748_MI = 
{
	"TrimExcess", (methodPointerType)&m9334_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13749_MI = 
{
	"get_Capacity", (methodPointerType)&m9336_gshared, &t390_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t390_m13750_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13750_MI = 
{
	"set_Capacity", (methodPointerType)&m9338_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t390_m13750_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t390_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m2411_MI = 
{
	"get_Count", (methodPointerType)&m9340_gshared, &t390_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t390_m2410_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m2410_MI = 
{
	"get_Item", (methodPointerType)&m9342_gshared, &t390_TI, &t388_0_0_0, RuntimeInvoker_t25_t134, t390_m2410_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t390_m13751_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t390_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13751_MI = 
{
	"set_Item", (methodPointerType)&m9344_gshared, &t390_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t390_m13751_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t390_MIs[] =
{
	&m2406_MI,
	&m13709_MI,
	&m13710_MI,
	&m13711_MI,
	&m13712_MI,
	&m13713_MI,
	&m13714_MI,
	&m13715_MI,
	&m13716_MI,
	&m13717_MI,
	&m13718_MI,
	&m13719_MI,
	&m13720_MI,
	&m13721_MI,
	&m13722_MI,
	&m13723_MI,
	&m13724_MI,
	&m13725_MI,
	&m13726_MI,
	&m2413_MI,
	&m13727_MI,
	&m13728_MI,
	&m13729_MI,
	&m13730_MI,
	&m13731_MI,
	&m13732_MI,
	&m2407_MI,
	&m13733_MI,
	&m2415_MI,
	&m13734_MI,
	&m13735_MI,
	&m13736_MI,
	&m13737_MI,
	&m13738_MI,
	&m13739_MI,
	&m13740_MI,
	&m13741_MI,
	&m2412_MI,
	&m13742_MI,
	&m13743_MI,
	&m13744_MI,
	&m13745_MI,
	&m13746_MI,
	&m13747_MI,
	&m13748_MI,
	&m13749_MI,
	&m13750_MI,
	&m2411_MI,
	&m2410_MI,
	&m13751_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13714_MI;
extern MethodInfo m2411_MI;
extern MethodInfo m13721_MI;
extern MethodInfo m13722_MI;
extern MethodInfo m13713_MI;
extern MethodInfo m13723_MI;
extern MethodInfo m13724_MI;
extern MethodInfo m13725_MI;
extern MethodInfo m13726_MI;
extern MethodInfo m13715_MI;
extern MethodInfo m13732_MI;
extern MethodInfo m13716_MI;
extern MethodInfo m13717_MI;
extern MethodInfo m13718_MI;
extern MethodInfo m13719_MI;
extern MethodInfo m13743_MI;
extern MethodInfo m2411_MI;
extern MethodInfo m13720_MI;
extern MethodInfo m2413_MI;
extern MethodInfo m13732_MI;
extern MethodInfo m2407_MI;
extern MethodInfo m13733_MI;
extern MethodInfo m2412_MI;
extern MethodInfo m13712_MI;
extern MethodInfo m13737_MI;
extern MethodInfo m13740_MI;
extern MethodInfo m13743_MI;
extern MethodInfo m2410_MI;
extern MethodInfo m13751_MI;
static MethodInfo* t390_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13714_MI,
	&m2411_MI,
	&m13721_MI,
	&m13722_MI,
	&m13713_MI,
	&m13723_MI,
	&m13724_MI,
	&m13725_MI,
	&m13726_MI,
	&m13715_MI,
	&m13732_MI,
	&m13716_MI,
	&m13717_MI,
	&m13718_MI,
	&m13719_MI,
	&m13743_MI,
	&m2411_MI,
	&m13720_MI,
	&m2413_MI,
	&m13732_MI,
	&m2407_MI,
	&m13733_MI,
	&m2412_MI,
	&m13712_MI,
	&m13737_MI,
	&m13740_MI,
	&m13743_MI,
	&m2410_MI,
	&m13751_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2493_TI;
extern TypeInfo t393_TI;
extern TypeInfo t2497_TI;
static TypeInfo* t390_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t2493_TI,
	&t393_TI,
	&t2497_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2493_TI;
extern TypeInfo t393_TI;
extern TypeInfo t2497_TI;
static Il2CppInterfaceOffsetPair t390_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t2493_TI, 20},
	{ &t393_TI, 27},
	{ &t2497_TI, 28},
};
extern TypeInfo t390_TI;
extern MethodInfo m13741_MI;
extern TypeInfo t2493_TI;
extern MethodInfo m13729_MI;
extern MethodInfo m27860_MI;
extern TypeInfo t2491_TI;
extern MethodInfo m13728_MI;
extern MethodInfo m13736_MI;
extern TypeInfo t2496_TI;
extern TypeInfo t388_TI;
extern MethodInfo m2413_MI;
extern MethodInfo m2407_MI;
extern MethodInfo m13737_MI;
extern MethodInfo m13739_MI;
extern MethodInfo m13740_MI;
extern MethodInfo m2412_MI;
extern MethodInfo m2410_MI;
extern MethodInfo m13751_MI;
extern MethodInfo m13727_MI;
extern MethodInfo m13749_MI;
extern MethodInfo m13750_MI;
extern MethodInfo m27865_MI;
extern MethodInfo m27867_MI;
extern MethodInfo m27859_MI;
extern TypeInfo t2494_TI;
extern MethodInfo m13758_MI;
extern MethodInfo m20766_MI;
extern MethodInfo m13734_MI;
extern MethodInfo m13735_MI;
extern MethodInfo m13832_MI;
extern MethodInfo m13752_MI;
extern MethodInfo m13738_MI;
extern MethodInfo m13743_MI;
extern MethodInfo m13838_MI;
extern MethodInfo m20768_MI;
extern MethodInfo m20776_MI;
extern MethodInfo m20764_MI;
static void* t390_RGCTXData[37] = 
{
	&t390_TI,
	&m13741_MI,
	&t2493_TI,
	&m13729_MI,
	&m27860_MI,
	&t2491_TI,
	&m13728_MI,
	&m13736_MI,
	&t2496_TI,
	&t388_TI,
	&m2413_MI,
	&m2407_MI,
	&m13737_MI,
	&m13739_MI,
	&m13740_MI,
	&m2412_MI,
	&m2410_MI,
	&m13751_MI,
	&m13727_MI,
	&m13749_MI,
	&m13750_MI,
	&m27865_MI,
	&m27867_MI,
	&m27859_MI,
	&t2494_TI,
	&m13758_MI,
	&m20766_MI,
	&m13734_MI,
	&m13735_MI,
	&m13832_MI,
	&m13752_MI,
	&m13738_MI,
	&m13743_MI,
	&m13838_MI,
	&m20768_MI,
	&m20776_MI,
	&m20764_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t390_0_0_0;
extern Il2CppType t390_1_0_0;
extern TypeInfo t25_TI;
struct t390;
extern TypeInfo t390_TI;
extern Il2CppGenericClass t390_GC;
extern CustomAttributesCache t957__CustomAttributeCache;
TypeInfo t390_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t390_MIs, t390_PIs, t390_FIs, NULL, &t25_TI, NULL, NULL, &t390_TI, t390_ITIs, t390_VT, &t957__CustomAttributeCache, &t390_TI, &t390_0_0_0, &t390_1_0_0, t390_IOs, &t390_GC, NULL, t390_FDVs, NULL, t390_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t390), 0, -1, sizeof(t390_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 50, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2496_TI;

extern TypeInfo t2496_TI;
extern TypeInfo t1387_TI;
extern TypeInfo t388_TI;
extern TypeInfo t390_TI;
extern TypeInfo t131_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1404_TI;
extern MethodInfo m13755_MI;
extern MethodInfo m7430_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m3520_MI;
extern MethodInfo m7635_MI;
extern MethodInfo m7431_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>
extern Il2CppType t390_0_0_1;
FieldInfo t2496_f0_FieldInfo = 
{
	"l", &t390_0_0_1, &t2496_TI, offsetof(t2496, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2496_f1_FieldInfo = 
{
	"next", &t134_0_0_1, &t2496_TI, offsetof(t2496, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2496_f2_FieldInfo = 
{
	"ver", &t134_0_0_1, &t2496_TI, offsetof(t2496, f2) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t388_0_0_1;
FieldInfo t2496_f3_FieldInfo = 
{
	"current", &t388_0_0_1, &t2496_TI, offsetof(t2496, f3) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2496_FIs[] =
{
	&t2496_f0_FieldInfo,
	&t2496_f1_FieldInfo,
	&t2496_f2_FieldInfo,
	&t2496_f3_FieldInfo,
	NULL
};
extern MethodInfo m13753_MI;
static PropertyInfo t2496____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2496_TI, "System.Collections.IEnumerator.Current", &m13753_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13757_MI;
static PropertyInfo t2496____Current_PropertyInfo = 
{
	&t2496_TI, "Current", &m13757_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2496_PIs[] =
{
	&t2496____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2496____Current_PropertyInfo,
	NULL
};
extern Il2CppType t390_0_0_0;
static ParameterInfo t2496_m13752_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t390_0_0_0},
};
extern TypeInfo t2496_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13752_MI = 
{
	".ctor", (methodPointerType)&m9346_gshared, &t2496_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2496_m13752_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2496_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13753_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m9347_gshared, &t2496_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2496_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13754_MI = 
{
	"Dispose", (methodPointerType)&m9348_gshared, &t2496_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2496_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13755_MI = 
{
	"VerifyState", (methodPointerType)&m9349_gshared, &t2496_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2496_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13756_MI = 
{
	"MoveNext", (methodPointerType)&m9350_gshared, &t2496_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2496_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13757_MI = 
{
	"get_Current", (methodPointerType)&m9351_gshared, &t2496_TI, &t388_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2496_MIs[] =
{
	&m13752_MI,
	&m13753_MI,
	&m13754_MI,
	&m13755_MI,
	&m13756_MI,
	&m13757_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13753_MI;
extern MethodInfo m13756_MI;
extern MethodInfo m13754_MI;
extern MethodInfo m13757_MI;
static MethodInfo* t2496_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13753_MI,
	&m13756_MI,
	&m13754_MI,
	&m13757_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2492_TI;
static TypeInfo* t2496_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2492_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2492_TI;
static Il2CppInterfaceOffsetPair t2496_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2492_TI, 7},
};
extern MethodInfo m13755_MI;
extern TypeInfo t388_TI;
extern TypeInfo t2496_TI;
static void* t2496_RGCTXData[3] = 
{
	&m13755_MI,
	&t388_TI,
	&t2496_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2496_0_0_0;
extern Il2CppType t2496_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2496_TI;
extern Il2CppGenericClass t2496_GC;
extern TypeInfo t957_TI;
TypeInfo t2496_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2496_MIs, t2496_PIs, t2496_FIs, NULL, &t117_TI, NULL, &t957_TI, &t2496_TI, t2496_ITIs, t2496_VT, &EmptyCustomAttributesCache, &t2496_TI, &t2496_0_0_0, &t2496_1_0_0, t2496_IOs, &t2496_GC, NULL, NULL, NULL, t2496_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2496)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2494_TI;

extern TypeInfo t2494_TI;
extern TypeInfo t388_TI;
extern TypeInfo t134_TI;
extern TypeInfo t177_TI;
extern TypeInfo t2497_TI;
extern TypeInfo t2493_TI;
extern TypeInfo t165_TI;
extern TypeInfo t759_TI;
extern TypeInfo t123_TI;
extern TypeInfo t122_TI;
extern TypeInfo t703_TI;
extern TypeInfo t78_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2491_TI;
extern TypeInfo t393_TI;
extern TypeInfo t2492_TI;
#include "t2498MD.h"
extern MethodInfo m13787_MI;
extern MethodInfo m566_MI;
extern MethodInfo m27868_MI;
extern MethodInfo m27860_MI;
extern MethodInfo m452_MI;
extern MethodInfo m489_MI;
extern MethodInfo m7922_MI;
extern MethodInfo m7831_MI;
extern MethodInfo m13819_MI;
extern MethodInfo m27864_MI;
extern MethodInfo m27870_MI;
extern MethodInfo m27865_MI;
extern MethodInfo m27867_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>
extern Il2CppType t2497_0_0_1;
FieldInfo t2494_f0_FieldInfo = 
{
	"list", &t2497_0_0_1, &t2494_TI, offsetof(t2494, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2494_FIs[] =
{
	&t2494_f0_FieldInfo,
	NULL
};
extern MethodInfo m13764_MI;
extern MethodInfo m13765_MI;
static PropertyInfo t2494____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2494_TI, "System.Collections.Generic.IList<T>.Item", &m13764_MI, &m13765_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13766_MI;
static PropertyInfo t2494____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2494_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13766_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13776_MI;
static PropertyInfo t2494____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2494_TI, "System.Collections.ICollection.IsSynchronized", &m13776_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13777_MI;
static PropertyInfo t2494____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2494_TI, "System.Collections.ICollection.SyncRoot", &m13777_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13778_MI;
static PropertyInfo t2494____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2494_TI, "System.Collections.IList.IsFixedSize", &m13778_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13779_MI;
static PropertyInfo t2494____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2494_TI, "System.Collections.IList.IsReadOnly", &m13779_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13780_MI;
extern MethodInfo m13781_MI;
static PropertyInfo t2494____System_Collections_IList_Item_PropertyInfo = 
{
	&t2494_TI, "System.Collections.IList.Item", &m13780_MI, &m13781_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13786_MI;
static PropertyInfo t2494____Count_PropertyInfo = 
{
	&t2494_TI, "Count", &m13786_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13787_MI;
static PropertyInfo t2494____Item_PropertyInfo = 
{
	&t2494_TI, "Item", &m13787_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2494_PIs[] =
{
	&t2494____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2494____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2494____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2494____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2494____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2494____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2494____System_Collections_IList_Item_PropertyInfo,
	&t2494____Count_PropertyInfo,
	&t2494____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2497_0_0_0;
static ParameterInfo t2494_m13758_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2497_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13758_MI = 
{
	".ctor", (methodPointerType)&m9352_gshared, &t2494_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2494_m13758_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2494_m13759_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13759_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m9353_gshared, &t2494_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2494_m13759_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2494_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13760_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m9354_gshared, &t2494_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2494_m13761_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13761_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m9355_gshared, &t2494_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2494_m13761_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2494_m13762_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13762_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m9356_gshared, &t2494_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2494_m13762_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2494_m13763_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13763_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m9357_gshared, &t2494_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2494_m13763_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2494_m13764_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13764_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m9358_gshared, &t2494_TI, &t388_0_0_0, RuntimeInvoker_t25_t134, t2494_m13764_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2494_m13765_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13765_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m9359_gshared, &t2494_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2494_m13765_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2494_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13766_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9360_gshared, &t2494_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2494_m13767_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13767_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9361_gshared, &t2494_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2494_m13767_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2494_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13768_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9362_gshared, &t2494_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2494_m13769_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13769_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9363_gshared, &t2494_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2494_m13769_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2494_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13770_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m9364_gshared, &t2494_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2494_m13771_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13771_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9365_gshared, &t2494_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2494_m13771_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2494_m13772_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13772_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9366_gshared, &t2494_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2494_m13772_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2494_m13773_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13773_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9367_gshared, &t2494_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2494_m13773_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2494_m13774_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13774_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9368_gshared, &t2494_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2494_m13774_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2494_m13775_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13775_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m9369_gshared, &t2494_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2494_m13775_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2494_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13776_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9370_gshared, &t2494_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2494_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13777_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9371_gshared, &t2494_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2494_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13778_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9372_gshared, &t2494_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2494_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13779_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9373_gshared, &t2494_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2494_m13780_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13780_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9374_gshared, &t2494_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t2494_m13780_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2494_m13781_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13781_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9375_gshared, &t2494_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2494_m13781_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2494_m13782_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13782_MI = 
{
	"Contains", (methodPointerType)&m9376_gshared, &t2494_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2494_m13782_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2491_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2494_m13783_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2491_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13783_MI = 
{
	"CopyTo", (methodPointerType)&m9377_gshared, &t2494_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2494_m13783_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2494_TI;
extern Il2CppType t2492_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13784_MI = 
{
	"GetEnumerator", (methodPointerType)&m9378_gshared, &t2494_TI, &t2492_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2494_m13785_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13785_MI = 
{
	"IndexOf", (methodPointerType)&m9379_gshared, &t2494_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2494_m13785_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2494_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13786_MI = 
{
	"get_Count", (methodPointerType)&m9380_gshared, &t2494_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2494_m13787_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13787_MI = 
{
	"get_Item", (methodPointerType)&m9381_gshared, &t2494_TI, &t388_0_0_0, RuntimeInvoker_t25_t134, t2494_m13787_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2494_MIs[] =
{
	&m13758_MI,
	&m13759_MI,
	&m13760_MI,
	&m13761_MI,
	&m13762_MI,
	&m13763_MI,
	&m13764_MI,
	&m13765_MI,
	&m13766_MI,
	&m13767_MI,
	&m13768_MI,
	&m13769_MI,
	&m13770_MI,
	&m13771_MI,
	&m13772_MI,
	&m13773_MI,
	&m13774_MI,
	&m13775_MI,
	&m13776_MI,
	&m13777_MI,
	&m13778_MI,
	&m13779_MI,
	&m13780_MI,
	&m13781_MI,
	&m13782_MI,
	&m13783_MI,
	&m13784_MI,
	&m13785_MI,
	&m13786_MI,
	&m13787_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13768_MI;
extern MethodInfo m13786_MI;
extern MethodInfo m13776_MI;
extern MethodInfo m13777_MI;
extern MethodInfo m13767_MI;
extern MethodInfo m13778_MI;
extern MethodInfo m13779_MI;
extern MethodInfo m13780_MI;
extern MethodInfo m13781_MI;
extern MethodInfo m13769_MI;
extern MethodInfo m13770_MI;
extern MethodInfo m13771_MI;
extern MethodInfo m13772_MI;
extern MethodInfo m13773_MI;
extern MethodInfo m13774_MI;
extern MethodInfo m13775_MI;
extern MethodInfo m13786_MI;
extern MethodInfo m13766_MI;
extern MethodInfo m13759_MI;
extern MethodInfo m13760_MI;
extern MethodInfo m13782_MI;
extern MethodInfo m13783_MI;
extern MethodInfo m13762_MI;
extern MethodInfo m13785_MI;
extern MethodInfo m13761_MI;
extern MethodInfo m13763_MI;
extern MethodInfo m13764_MI;
extern MethodInfo m13765_MI;
extern MethodInfo m13784_MI;
extern MethodInfo m13787_MI;
static MethodInfo* t2494_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13768_MI,
	&m13786_MI,
	&m13776_MI,
	&m13777_MI,
	&m13767_MI,
	&m13778_MI,
	&m13779_MI,
	&m13780_MI,
	&m13781_MI,
	&m13769_MI,
	&m13770_MI,
	&m13771_MI,
	&m13772_MI,
	&m13773_MI,
	&m13774_MI,
	&m13775_MI,
	&m13786_MI,
	&m13766_MI,
	&m13759_MI,
	&m13760_MI,
	&m13782_MI,
	&m13783_MI,
	&m13762_MI,
	&m13785_MI,
	&m13761_MI,
	&m13763_MI,
	&m13764_MI,
	&m13765_MI,
	&m13784_MI,
	&m13787_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2493_TI;
extern TypeInfo t2497_TI;
extern TypeInfo t393_TI;
static TypeInfo* t2494_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t2493_TI,
	&t2497_TI,
	&t393_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2493_TI;
extern TypeInfo t2497_TI;
extern TypeInfo t393_TI;
static Il2CppInterfaceOffsetPair t2494_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t2493_TI, 20},
	{ &t2497_TI, 27},
	{ &t393_TI, 32},
};
extern MethodInfo m13787_MI;
extern MethodInfo m13819_MI;
extern TypeInfo t388_TI;
extern MethodInfo m27864_MI;
extern MethodInfo m27870_MI;
extern MethodInfo m27868_MI;
extern MethodInfo m27865_MI;
extern MethodInfo m27867_MI;
extern MethodInfo m27860_MI;
static void* t2494_RGCTXData[9] = 
{
	&m13787_MI,
	&m13819_MI,
	&t388_TI,
	&m27864_MI,
	&m27870_MI,
	&m27868_MI,
	&m27865_MI,
	&m27867_MI,
	&m27860_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2494_0_0_0;
extern Il2CppType t2494_1_0_0;
extern TypeInfo t25_TI;
struct t2494;
extern TypeInfo t2494_TI;
extern Il2CppGenericClass t2494_GC;
extern CustomAttributesCache t959__CustomAttributeCache;
TypeInfo t2494_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2494_MIs, t2494_PIs, t2494_FIs, NULL, &t25_TI, NULL, NULL, &t2494_TI, t2494_ITIs, t2494_VT, &t959__CustomAttributeCache, &t2494_TI, &t2494_0_0_0, &t2494_1_0_0, t2494_IOs, &t2494_GC, NULL, NULL, NULL, t2494_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2494), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2498.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2498_TI;

extern TypeInfo t2498_TI;
extern TypeInfo t2493_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2497_TI;
extern TypeInfo t388_TI;
extern TypeInfo t134_TI;
extern TypeInfo t123_TI;
extern TypeInfo t390_TI;
extern TypeInfo t759_TI;
extern TypeInfo t25_TI;
extern TypeInfo t122_TI;
extern TypeInfo t393_TI;
extern TypeInfo t2492_TI;
extern TypeInfo t2491_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t177_TI;
extern TypeInfo t1132_TI;
extern Il2CppType t388_0_0_0;
extern MethodInfo m27861_MI;
extern MethodInfo m13822_MI;
extern MethodInfo m13823_MI;
extern MethodInfo m27868_MI;
extern MethodInfo m13820_MI;
extern MethodInfo m13818_MI;
extern MethodInfo m27860_MI;
extern MethodInfo m452_MI;
extern MethodInfo m2406_MI;
extern MethodInfo m7921_MI;
extern MethodInfo m7922_MI;
extern MethodInfo m27867_MI;
extern MethodInfo m13811_MI;
extern MethodInfo m13819_MI;
extern MethodInfo m27864_MI;
extern MethodInfo m27870_MI;
extern MethodInfo m13821_MI;
extern MethodInfo m13809_MI;
extern MethodInfo m13814_MI;
extern MethodInfo m13805_MI;
extern MethodInfo m27863_MI;
extern MethodInfo m27865_MI;
extern MethodInfo m27871_MI;
extern MethodInfo m27872_MI;
extern MethodInfo m27869_MI;
extern MethodInfo m484_MI;
extern MethodInfo m4337_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m566_MI;
extern MethodInfo m7920_MI;
extern MethodInfo m7923_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>
extern Il2CppType t2497_0_0_1;
FieldInfo t2498_f0_FieldInfo = 
{
	"list", &t2497_0_0_1, &t2498_TI, offsetof(t2498, f0), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_1;
FieldInfo t2498_f1_FieldInfo = 
{
	"syncRoot", &t25_0_0_1, &t2498_TI, offsetof(t2498, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2498_FIs[] =
{
	&t2498_f0_FieldInfo,
	&t2498_f1_FieldInfo,
	NULL
};
extern MethodInfo m13789_MI;
static PropertyInfo t2498____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2498_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13789_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13797_MI;
static PropertyInfo t2498____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2498_TI, "System.Collections.ICollection.IsSynchronized", &m13797_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13798_MI;
static PropertyInfo t2498____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2498_TI, "System.Collections.ICollection.SyncRoot", &m13798_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13799_MI;
static PropertyInfo t2498____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2498_TI, "System.Collections.IList.IsFixedSize", &m13799_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13800_MI;
static PropertyInfo t2498____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2498_TI, "System.Collections.IList.IsReadOnly", &m13800_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13801_MI;
extern MethodInfo m13802_MI;
static PropertyInfo t2498____System_Collections_IList_Item_PropertyInfo = 
{
	&t2498_TI, "System.Collections.IList.Item", &m13801_MI, &m13802_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13815_MI;
static PropertyInfo t2498____Count_PropertyInfo = 
{
	&t2498_TI, "Count", &m13815_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13816_MI;
extern MethodInfo m13817_MI;
static PropertyInfo t2498____Item_PropertyInfo = 
{
	&t2498_TI, "Item", &m13816_MI, &m13817_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2498_PIs[] =
{
	&t2498____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2498____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2498____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2498____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2498____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2498____System_Collections_IList_Item_PropertyInfo,
	&t2498____Count_PropertyInfo,
	&t2498____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13788_MI = 
{
	".ctor", (methodPointerType)&m9382_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2498_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13789_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9383_gshared, &t2498_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2498_m13790_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13790_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9384_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2498_m13790_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2498_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13791_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9385_gshared, &t2498_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2498_m13792_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13792_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9386_gshared, &t2498_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2498_m13792_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2498_m13793_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13793_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9387_gshared, &t2498_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2498_m13793_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2498_m13794_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13794_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9388_gshared, &t2498_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2498_m13794_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2498_m13795_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13795_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9389_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2498_m13795_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2498_m13796_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13796_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9390_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2498_m13796_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2498_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13797_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9391_gshared, &t2498_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2498_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13798_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9392_gshared, &t2498_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2498_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13799_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9393_gshared, &t2498_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2498_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13800_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9394_gshared, &t2498_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2498_m13801_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13801_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9395_gshared, &t2498_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t2498_m13801_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2498_m13802_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13802_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9396_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2498_m13802_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2498_m13803_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13803_MI = 
{
	"Add", (methodPointerType)&m9397_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2498_m13803_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13804_MI = 
{
	"Clear", (methodPointerType)&m9398_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13805_MI = 
{
	"ClearItems", (methodPointerType)&m9399_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2498_m13806_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13806_MI = 
{
	"Contains", (methodPointerType)&m9400_gshared, &t2498_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2498_m13806_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2491_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2498_m13807_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2491_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13807_MI = 
{
	"CopyTo", (methodPointerType)&m9401_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2498_m13807_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2498_TI;
extern Il2CppType t2492_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13808_MI = 
{
	"GetEnumerator", (methodPointerType)&m9402_gshared, &t2498_TI, &t2492_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2498_m13809_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13809_MI = 
{
	"IndexOf", (methodPointerType)&m9403_gshared, &t2498_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2498_m13809_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2498_m13810_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13810_MI = 
{
	"Insert", (methodPointerType)&m9404_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2498_m13810_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2498_m13811_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13811_MI = 
{
	"InsertItem", (methodPointerType)&m9405_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2498_m13811_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2498_m13812_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13812_MI = 
{
	"Remove", (methodPointerType)&m9406_gshared, &t2498_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2498_m13812_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2498_m13813_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13813_MI = 
{
	"RemoveAt", (methodPointerType)&m9407_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2498_m13813_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2498_m13814_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13814_MI = 
{
	"RemoveItem", (methodPointerType)&m9408_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2498_m13814_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2498_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13815_MI = 
{
	"get_Count", (methodPointerType)&m9409_gshared, &t2498_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2498_m13816_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13816_MI = 
{
	"get_Item", (methodPointerType)&m9410_gshared, &t2498_TI, &t388_0_0_0, RuntimeInvoker_t25_t134, t2498_m13816_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2498_m13817_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13817_MI = 
{
	"set_Item", (methodPointerType)&m9411_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2498_m13817_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2498_m13818_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13818_MI = 
{
	"SetItem", (methodPointerType)&m9412_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2498_m13818_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2498_m13819_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13819_MI = 
{
	"IsValidItem", (methodPointerType)&m9413_gshared, &t2498_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2498_m13819_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2498_m13820_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13820_MI = 
{
	"ConvertItem", (methodPointerType)&m9414_gshared, &t2498_TI, &t388_0_0_0, RuntimeInvoker_t25_t25, t2498_m13820_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2497_0_0_0;
static ParameterInfo t2498_m13821_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2497_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13821_MI = 
{
	"CheckWritable", (methodPointerType)&m9415_gshared, &t2498_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2498_m13821_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2497_0_0_0;
static ParameterInfo t2498_m13822_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2497_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13822_MI = 
{
	"IsSynchronized", (methodPointerType)&m9416_gshared, &t2498_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2498_m13822_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2497_0_0_0;
static ParameterInfo t2498_m13823_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2497_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13823_MI = 
{
	"IsFixedSize", (methodPointerType)&m9417_gshared, &t2498_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2498_m13823_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2498_MIs[] =
{
	&m13788_MI,
	&m13789_MI,
	&m13790_MI,
	&m13791_MI,
	&m13792_MI,
	&m13793_MI,
	&m13794_MI,
	&m13795_MI,
	&m13796_MI,
	&m13797_MI,
	&m13798_MI,
	&m13799_MI,
	&m13800_MI,
	&m13801_MI,
	&m13802_MI,
	&m13803_MI,
	&m13804_MI,
	&m13805_MI,
	&m13806_MI,
	&m13807_MI,
	&m13808_MI,
	&m13809_MI,
	&m13810_MI,
	&m13811_MI,
	&m13812_MI,
	&m13813_MI,
	&m13814_MI,
	&m13815_MI,
	&m13816_MI,
	&m13817_MI,
	&m13818_MI,
	&m13819_MI,
	&m13820_MI,
	&m13821_MI,
	&m13822_MI,
	&m13823_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13791_MI;
extern MethodInfo m13815_MI;
extern MethodInfo m13797_MI;
extern MethodInfo m13798_MI;
extern MethodInfo m13790_MI;
extern MethodInfo m13799_MI;
extern MethodInfo m13800_MI;
extern MethodInfo m13801_MI;
extern MethodInfo m13802_MI;
extern MethodInfo m13792_MI;
extern MethodInfo m13804_MI;
extern MethodInfo m13793_MI;
extern MethodInfo m13794_MI;
extern MethodInfo m13795_MI;
extern MethodInfo m13796_MI;
extern MethodInfo m13813_MI;
extern MethodInfo m13815_MI;
extern MethodInfo m13789_MI;
extern MethodInfo m13803_MI;
extern MethodInfo m13804_MI;
extern MethodInfo m13806_MI;
extern MethodInfo m13807_MI;
extern MethodInfo m13812_MI;
extern MethodInfo m13809_MI;
extern MethodInfo m13810_MI;
extern MethodInfo m13813_MI;
extern MethodInfo m13816_MI;
extern MethodInfo m13817_MI;
extern MethodInfo m13808_MI;
extern MethodInfo m13805_MI;
extern MethodInfo m13811_MI;
extern MethodInfo m13814_MI;
extern MethodInfo m13818_MI;
static MethodInfo* t2498_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13791_MI,
	&m13815_MI,
	&m13797_MI,
	&m13798_MI,
	&m13790_MI,
	&m13799_MI,
	&m13800_MI,
	&m13801_MI,
	&m13802_MI,
	&m13792_MI,
	&m13804_MI,
	&m13793_MI,
	&m13794_MI,
	&m13795_MI,
	&m13796_MI,
	&m13813_MI,
	&m13815_MI,
	&m13789_MI,
	&m13803_MI,
	&m13804_MI,
	&m13806_MI,
	&m13807_MI,
	&m13812_MI,
	&m13809_MI,
	&m13810_MI,
	&m13813_MI,
	&m13816_MI,
	&m13817_MI,
	&m13808_MI,
	&m13805_MI,
	&m13811_MI,
	&m13814_MI,
	&m13818_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2493_TI;
extern TypeInfo t2497_TI;
extern TypeInfo t393_TI;
static TypeInfo* t2498_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t2493_TI,
	&t2497_TI,
	&t393_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2493_TI;
extern TypeInfo t2497_TI;
extern TypeInfo t393_TI;
static Il2CppInterfaceOffsetPair t2498_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t2493_TI, 20},
	{ &t2497_TI, 27},
	{ &t393_TI, 32},
};
extern TypeInfo t390_TI;
extern MethodInfo m2406_MI;
extern MethodInfo m27861_MI;
extern MethodInfo m27867_MI;
extern MethodInfo m27860_MI;
extern MethodInfo m13820_MI;
extern MethodInfo m13811_MI;
extern MethodInfo m13819_MI;
extern TypeInfo t388_TI;
extern MethodInfo m27864_MI;
extern MethodInfo m27870_MI;
extern MethodInfo m13821_MI;
extern MethodInfo m13809_MI;
extern MethodInfo m13814_MI;
extern MethodInfo m13822_MI;
extern MethodInfo m13823_MI;
extern MethodInfo m27868_MI;
extern MethodInfo m13818_MI;
extern MethodInfo m13805_MI;
extern MethodInfo m27863_MI;
extern MethodInfo m27865_MI;
extern MethodInfo m27871_MI;
extern MethodInfo m27872_MI;
extern MethodInfo m27869_MI;
extern Il2CppType t388_0_0_0;
static void* t2498_RGCTXData[25] = 
{
	&t390_TI,
	&m2406_MI,
	&m27861_MI,
	&m27867_MI,
	&m27860_MI,
	&m13820_MI,
	&m13811_MI,
	&m13819_MI,
	&t388_TI,
	&m27864_MI,
	&m27870_MI,
	&m13821_MI,
	&m13809_MI,
	&m13814_MI,
	&m13822_MI,
	&m13823_MI,
	&m27868_MI,
	&m13818_MI,
	&m13805_MI,
	&m27863_MI,
	&m27865_MI,
	&m27871_MI,
	&m27872_MI,
	&m27869_MI,
	(void*)&t388_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2498_0_0_0;
extern Il2CppType t2498_1_0_0;
extern TypeInfo t25_TI;
struct t2498;
extern TypeInfo t2498_TI;
extern Il2CppGenericClass t2498_GC;
extern CustomAttributesCache t958__CustomAttributeCache;
TypeInfo t2498_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2498_MIs, t2498_PIs, t2498_FIs, NULL, &t25_TI, NULL, NULL, &t2498_TI, t2498_ITIs, t2498_VT, &t958__CustomAttributeCache, &t2498_TI, &t2498_0_0_0, &t2498_1_0_0, t2498_IOs, &t2498_GC, NULL, NULL, NULL, t2498_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2498), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2499_TI;
#include "t2499MD.h"

#include "t2500.h"
extern TypeInfo t2499_TI;
extern TypeInfo t5855_TI;
extern TypeInfo t131_TI;
extern TypeInfo t388_TI;
extern TypeInfo t125_TI;
extern TypeInfo t953_TI;
extern TypeInfo t637_TI;
extern TypeInfo t2500_TI;
extern TypeInfo t134_TI;
#include "t2500MD.h"
extern Il2CppType t5855_0_0_0;
extern Il2CppType t388_0_0_0;
extern Il2CppType t953_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m13829_MI;
extern MethodInfo m27901_MI;
extern MethodInfo m20765_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>
extern Il2CppType t2499_0_0_49;
FieldInfo t2499_f0_FieldInfo = 
{
	"_default", &t2499_0_0_49, &t2499_TI, offsetof(t2499_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2499_FIs[] =
{
	&t2499_f0_FieldInfo,
	NULL
};
extern MethodInfo m13828_MI;
static PropertyInfo t2499____Default_PropertyInfo = 
{
	&t2499_TI, "Default", &m13828_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2499_PIs[] =
{
	&t2499____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2499_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13824_MI = 
{
	".ctor", (methodPointerType)&m8967_gshared, &t2499_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2499_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13825_MI = 
{
	".cctor", (methodPointerType)&m8968_gshared, &t2499_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2499_m13826_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2499_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13826_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8969_gshared, &t2499_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2499_m13826_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2499_m13827_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2499_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13827_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8970_gshared, &t2499_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2499_m13827_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2499_m27901_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2499_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27901_MI = 
{
	"GetHashCode", NULL, &t2499_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2499_m27901_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2499_m20765_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2499_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20765_MI = 
{
	"Equals", NULL, &t2499_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2499_m20765_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2499_TI;
extern Il2CppType t2499_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13828_MI = 
{
	"get_Default", (methodPointerType)&m8971_gshared, &t2499_TI, &t2499_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2499_MIs[] =
{
	&m13824_MI,
	&m13825_MI,
	&m13826_MI,
	&m13827_MI,
	&m27901_MI,
	&m20765_MI,
	&m13828_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m20765_MI;
extern MethodInfo m27901_MI;
extern MethodInfo m13827_MI;
extern MethodInfo m13826_MI;
static MethodInfo* t2499_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m20765_MI,
	&m27901_MI,
	&m13827_MI,
	&m13826_MI,
	NULL,
	NULL,
};
extern TypeInfo t5856_TI;
extern TypeInfo t977_TI;
static TypeInfo* t2499_ITIs[] = 
{
	&t5856_TI,
	&t977_TI,
};
extern TypeInfo t5856_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t2499_IOs[] = 
{
	{ &t5856_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppType t5855_0_0_0;
extern Il2CppType t388_0_0_0;
extern TypeInfo t2499_TI;
extern TypeInfo t2499_TI;
extern TypeInfo t2500_TI;
extern MethodInfo m13829_MI;
extern TypeInfo t388_TI;
extern MethodInfo m27901_MI;
extern MethodInfo m20765_MI;
static void* t2499_RGCTXData[9] = 
{
	(void*)&t5855_0_0_0,
	(void*)&t388_0_0_0,
	&t2499_TI,
	&t2499_TI,
	&t2500_TI,
	&m13829_MI,
	&t388_TI,
	&m27901_MI,
	&m20765_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2499_0_0_0;
extern Il2CppType t2499_1_0_0;
extern TypeInfo t25_TI;
struct t2499;
extern TypeInfo t2499_TI;
extern Il2CppGenericClass t2499_GC;
TypeInfo t2499_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2499_MIs, t2499_PIs, t2499_FIs, NULL, &t25_TI, NULL, NULL, &t2499_TI, t2499_ITIs, t2499_VT, &EmptyCustomAttributesCache, &t2499_TI, &t2499_0_0_0, &t2499_1_0_0, t2499_IOs, &t2499_GC, NULL, NULL, NULL, t2499_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2499), 0, -1, sizeof(t2499_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5856_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Toggle>
extern Il2CppType t388_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t5856_m27902_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t5856_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27902_MI = 
{
	"Equals", NULL, &t5856_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t5856_m27902_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t5856_m27903_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t5856_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27903_MI = 
{
	"GetHashCode", NULL, &t5856_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5856_m27903_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5856_MIs[] =
{
	&m27902_MI,
	&m27903_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5856_0_0_0;
extern Il2CppType t5856_1_0_0;
struct t5856;
extern TypeInfo t5856_TI;
extern Il2CppGenericClass t5856_GC;
TypeInfo t5856_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5856_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5856_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5856_TI, &t5856_0_0_0, &t5856_1_0_0, NULL, &t5856_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5855_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.UI.Toggle>
extern Il2CppType t388_0_0_0;
static ParameterInfo t5855_m27904_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t5855_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27904_MI = 
{
	"Equals", NULL, &t5855_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5855_m27904_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5855_MIs[] =
{
	&m27904_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5855_0_0_0;
extern Il2CppType t5855_1_0_0;
struct t5855;
extern TypeInfo t5855_TI;
extern Il2CppGenericClass t5855_GC;
TypeInfo t5855_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5855_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5855_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5855_TI, &t5855_0_0_0, &t5855_1_0_0, NULL, &t5855_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2500_TI;

extern TypeInfo t388_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t125_TI;
extern MethodInfo m13824_MI;
extern MethodInfo m456_MI;
extern MethodInfo m455_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Toggle>
extern TypeInfo t2500_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13829_MI = 
{
	".ctor", (methodPointerType)&m9002_gshared, &t2500_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2500_m13830_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2500_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13830_MI = 
{
	"GetHashCode", (methodPointerType)&m9003_gshared, &t2500_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2500_m13830_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2500_m13831_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2500_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13831_MI = 
{
	"Equals", (methodPointerType)&m9004_gshared, &t2500_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2500_m13831_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2500_MIs[] =
{
	&m13829_MI,
	&m13830_MI,
	&m13831_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13831_MI;
extern MethodInfo m13830_MI;
extern MethodInfo m13827_MI;
extern MethodInfo m13826_MI;
extern MethodInfo m13830_MI;
extern MethodInfo m13831_MI;
static MethodInfo* t2500_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13831_MI,
	&m13830_MI,
	&m13827_MI,
	&m13826_MI,
	&m13830_MI,
	&m13831_MI,
};
extern TypeInfo t5856_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t2500_IOs[] = 
{
	{ &t5856_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppType t5855_0_0_0;
extern Il2CppType t388_0_0_0;
extern TypeInfo t2499_TI;
extern TypeInfo t2499_TI;
extern TypeInfo t2500_TI;
extern MethodInfo m13829_MI;
extern TypeInfo t388_TI;
extern MethodInfo m27901_MI;
extern MethodInfo m20765_MI;
extern MethodInfo m13824_MI;
extern TypeInfo t388_TI;
static void* t2500_RGCTXData[11] = 
{
	(void*)&t5855_0_0_0,
	(void*)&t388_0_0_0,
	&t2499_TI,
	&t2499_TI,
	&t2500_TI,
	&m13829_MI,
	&t388_TI,
	&m27901_MI,
	&m20765_MI,
	&m13824_MI,
	&t388_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2500_0_0_0;
extern Il2CppType t2500_1_0_0;
extern TypeInfo t2499_TI;
struct t2500;
extern TypeInfo t2500_TI;
extern Il2CppGenericClass t2500_GC;
extern TypeInfo t952_TI;
TypeInfo t2500_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2500_MIs, NULL, NULL, NULL, &t2499_TI, NULL, &t952_TI, &t2500_TI, NULL, t2500_VT, &EmptyCustomAttributesCache, &t2500_TI, &t2500_0_0_0, &t2500_1_0_0, t2500_IOs, &t2500_GC, NULL, NULL, NULL, t2500_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2500), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t391_TI;



// Metadata Definition System.Predicate`1<UnityEngine.UI.Toggle>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t391_m2414_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t391_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m2414_MI = 
{
	".ctor", (methodPointerType)&m9418_gshared, &t391_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t391_m2414_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t391_m13832_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t391_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13832_MI = 
{
	"Invoke", (methodPointerType)&m9419_gshared, &t391_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t391_m13832_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t391_m13833_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t391_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13833_MI = 
{
	"BeginInvoke", (methodPointerType)&m9420_gshared, &t391_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t391_m13833_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t391_m13834_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t391_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13834_MI = 
{
	"EndInvoke", (methodPointerType)&m9421_gshared, &t391_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t391_m13834_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t391_MIs[] =
{
	&m2414_MI,
	&m13832_MI,
	&m13833_MI,
	&m13834_MI,
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
extern MethodInfo m13832_MI;
extern MethodInfo m13833_MI;
extern MethodInfo m13834_MI;
static MethodInfo* t391_VT[] =
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
	&m13832_MI,
	&m13833_MI,
	&m13834_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t391_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t391_0_0_0;
extern Il2CppType t391_1_0_0;
extern TypeInfo t345_TI;
struct t391;
extern TypeInfo t391_TI;
extern Il2CppGenericClass t391_GC;
TypeInfo t391_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t391_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t391_TI, NULL, t391_VT, &EmptyCustomAttributesCache, &t391_TI, &t391_0_0_0, &t391_1_0_0, t391_IOs, &t391_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t391), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2501_TI;

#include "t2502.h"
extern TypeInfo t2501_TI;
extern TypeInfo t3865_TI;
extern TypeInfo t131_TI;
extern TypeInfo t388_TI;
extern TypeInfo t125_TI;
extern TypeInfo t941_TI;
extern TypeInfo t637_TI;
extern TypeInfo t2502_TI;
extern TypeInfo t134_TI;
extern TypeInfo t445_TI;
#include "t2502MD.h"
extern Il2CppType t3865_0_0_0;
extern Il2CppType t388_0_0_0;
extern Il2CppType t941_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m13839_MI;
extern MethodInfo m27905_MI;
extern MethodInfo m6988_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.UI.Toggle>
extern Il2CppType t2501_0_0_49;
FieldInfo t2501_f0_FieldInfo = 
{
	"_default", &t2501_0_0_49, &t2501_TI, offsetof(t2501_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2501_FIs[] =
{
	&t2501_f0_FieldInfo,
	NULL
};
extern MethodInfo m13838_MI;
static PropertyInfo t2501____Default_PropertyInfo = 
{
	&t2501_TI, "Default", &m13838_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2501_PIs[] =
{
	&t2501____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2501_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13835_MI = 
{
	".ctor", (methodPointerType)&m9422_gshared, &t2501_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2501_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13836_MI = 
{
	".cctor", (methodPointerType)&m9423_gshared, &t2501_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2501_m13837_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2501_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13837_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m9424_gshared, &t2501_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2501_m13837_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2501_m27905_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2501_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27905_MI = 
{
	"Compare", NULL, &t2501_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2501_m27905_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2501_TI;
extern Il2CppType t2501_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13838_MI = 
{
	"get_Default", (methodPointerType)&m9425_gshared, &t2501_TI, &t2501_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2501_MIs[] =
{
	&m13835_MI,
	&m13836_MI,
	&m13837_MI,
	&m27905_MI,
	&m13838_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m27905_MI;
extern MethodInfo m13837_MI;
static MethodInfo* t2501_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m27905_MI,
	&m13837_MI,
	NULL,
};
extern TypeInfo t3864_TI;
extern TypeInfo t147_TI;
static TypeInfo* t2501_ITIs[] = 
{
	&t3864_TI,
	&t147_TI,
};
extern TypeInfo t3864_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t2501_IOs[] = 
{
	{ &t3864_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppType t3865_0_0_0;
extern Il2CppType t388_0_0_0;
extern TypeInfo t2501_TI;
extern TypeInfo t2501_TI;
extern TypeInfo t2502_TI;
extern MethodInfo m13839_MI;
extern TypeInfo t388_TI;
extern MethodInfo m27905_MI;
static void* t2501_RGCTXData[8] = 
{
	(void*)&t3865_0_0_0,
	(void*)&t388_0_0_0,
	&t2501_TI,
	&t2501_TI,
	&t2502_TI,
	&m13839_MI,
	&t388_TI,
	&m27905_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2501_0_0_0;
extern Il2CppType t2501_1_0_0;
extern TypeInfo t25_TI;
struct t2501;
extern TypeInfo t2501_TI;
extern Il2CppGenericClass t2501_GC;
TypeInfo t2501_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2501_MIs, t2501_PIs, t2501_FIs, NULL, &t25_TI, NULL, NULL, &t2501_TI, t2501_ITIs, t2501_VT, &EmptyCustomAttributesCache, &t2501_TI, &t2501_0_0_0, &t2501_1_0_0, t2501_IOs, &t2501_GC, NULL, NULL, NULL, t2501_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2501), 0, -1, sizeof(t2501_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3864_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UI.Toggle>
extern Il2CppType t388_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t3864_m20773_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t3864_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20773_MI = 
{
	"Compare", NULL, &t3864_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t3864_m20773_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3864_MIs[] =
{
	&m20773_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3864_0_0_0;
extern Il2CppType t3864_1_0_0;
struct t3864;
extern TypeInfo t3864_TI;
extern Il2CppGenericClass t3864_GC;
TypeInfo t3864_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3864_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3864_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3864_TI, &t3864_0_0_0, &t3864_1_0_0, NULL, &t3864_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3865_TI;



// Metadata Definition System.IComparable`1<UnityEngine.UI.Toggle>
extern Il2CppType t388_0_0_0;
static ParameterInfo t3865_m20774_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t3865_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20774_MI = 
{
	"CompareTo", NULL, &t3865_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t3865_m20774_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3865_MIs[] =
{
	&m20774_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3865_0_0_0;
extern Il2CppType t3865_1_0_0;
struct t3865;
extern TypeInfo t3865_TI;
extern Il2CppGenericClass t3865_GC;
TypeInfo t3865_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3865_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3865_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3865_TI, &t3865_0_0_0, &t3865_1_0_0, NULL, &t3865_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2502_TI;

extern TypeInfo t388_TI;
extern TypeInfo t3865_TI;
extern TypeInfo t134_TI;
extern TypeInfo t143_TI;
extern TypeInfo t25_TI;
extern TypeInfo t445_TI;
extern MethodInfo m13835_MI;
extern MethodInfo m20774_MI;
extern MethodInfo m7828_MI;
extern MethodInfo m2409_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Toggle>
extern TypeInfo t2502_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13839_MI = 
{
	".ctor", (methodPointerType)&m9426_gshared, &t2502_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2502_m13840_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2502_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13840_MI = 
{
	"Compare", (methodPointerType)&m9427_gshared, &t2502_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2502_m13840_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2502_MIs[] =
{
	&m13839_MI,
	&m13840_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13840_MI;
extern MethodInfo m13837_MI;
extern MethodInfo m13840_MI;
static MethodInfo* t2502_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13840_MI,
	&m13837_MI,
	&m13840_MI,
};
extern TypeInfo t3864_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t2502_IOs[] = 
{
	{ &t3864_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppType t3865_0_0_0;
extern Il2CppType t388_0_0_0;
extern TypeInfo t2501_TI;
extern TypeInfo t2501_TI;
extern TypeInfo t2502_TI;
extern MethodInfo m13839_MI;
extern TypeInfo t388_TI;
extern MethodInfo m27905_MI;
extern MethodInfo m13835_MI;
extern TypeInfo t388_TI;
extern TypeInfo t3865_TI;
extern MethodInfo m20774_MI;
static void* t2502_RGCTXData[12] = 
{
	(void*)&t3865_0_0_0,
	(void*)&t388_0_0_0,
	&t2501_TI,
	&t2501_TI,
	&t2502_TI,
	&m13839_MI,
	&t388_TI,
	&m27905_MI,
	&m13835_MI,
	&t388_TI,
	&t3865_TI,
	&m20774_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2502_0_0_0;
extern Il2CppType t2502_1_0_0;
extern TypeInfo t2501_TI;
struct t2502;
extern TypeInfo t2502_TI;
extern Il2CppGenericClass t2502_GC;
extern TypeInfo t940_TI;
TypeInfo t2502_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2502_MIs, NULL, NULL, NULL, &t2501_TI, NULL, &t940_TI, &t2502_TI, NULL, t2502_VT, &EmptyCustomAttributesCache, &t2502_TI, &t2502_0_0_0, &t2502_1_0_0, t2502_IOs, &t2502_GC, NULL, NULL, NULL, t2502_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2502), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2495_TI;
#include "t2495MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.UI.Toggle>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2495_m13841_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2495_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13841_MI = 
{
	".ctor", (methodPointerType)&m9458_gshared, &t2495_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2495_m13841_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2495_m13842_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2495_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13842_MI = 
{
	"Invoke", (methodPointerType)&m9459_gshared, &t2495_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2495_m13842_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
extern Il2CppType t388_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2495_m13843_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2495_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13843_MI = 
{
	"BeginInvoke", (methodPointerType)&m9460_gshared, &t2495_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25_t25, t2495_m13843_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2495_m13844_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2495_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13844_MI = 
{
	"EndInvoke", (methodPointerType)&m9461_gshared, &t2495_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2495_m13844_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2495_MIs[] =
{
	&m13841_MI,
	&m13842_MI,
	&m13843_MI,
	&m13844_MI,
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
extern MethodInfo m13842_MI;
extern MethodInfo m13843_MI;
extern MethodInfo m13844_MI;
static MethodInfo* t2495_VT[] =
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
	&m13842_MI,
	&m13843_MI,
	&m13844_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2495_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2495_0_0_0;
extern Il2CppType t2495_1_0_0;
extern TypeInfo t345_TI;
struct t2495;
extern TypeInfo t2495_TI;
extern Il2CppGenericClass t2495_GC;
TypeInfo t2495_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2495_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2495_TI, NULL, t2495_VT, &EmptyCustomAttributesCache, &t2495_TI, &t2495_0_0_0, &t2495_1_0_0, t2495_IOs, &t2495_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2495), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t392.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t392_TI;
#include "t392MD.h"



extern MethodInfo m2416_MI;
 void m2416 (t392 * __this, t25 * p0, t61 p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2416_MI);
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m13845_MI;
 bool m13845 (t392 * __this, t388 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13845_MI);
	typedef  bool (*FunctionPointerType) (t25 * __this, t388 * p0, MethodInfo* method);
	if (__this->f9)
		m13845((t392 *)__this->f9,  p0, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m13846_MI;
 t25 * m13846 (t392 * __this, t388 * p0, t219 * p1, t25 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13846_MI);
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t25 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m13847_MI;
 bool m13847 (t392 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13847_MI);
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t392_m2416_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t392_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m2416_MI = 
{
	".ctor", (methodPointerType)&m2416, &t392_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t392_m2416_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t392_m13845_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t392_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13845_MI = 
{
	"Invoke", (methodPointerType)&m13845, &t392_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t392_m13845_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t392_m13846_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t392_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13846_MI = 
{
	"BeginInvoke", (methodPointerType)&m13846, &t392_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t392_m13846_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t392_m13847_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t392_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13847_MI = 
{
	"EndInvoke", (methodPointerType)&m13847, &t392_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t392_m13847_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t392_MIs[] =
{
	&m2416_MI,
	&m13845_MI,
	&m13846_MI,
	&m13847_MI,
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
extern MethodInfo m13845_MI;
extern MethodInfo m13846_MI;
extern MethodInfo m13847_MI;
static MethodInfo* t392_VT[] =
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
	&m13845_MI,
	&m13846_MI,
	&m13847_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t392_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t392_0_0_0;
extern Il2CppType t392_1_0_0;
extern TypeInfo t345_TI;
struct t392;
extern TypeInfo t392_TI;
extern Il2CppGenericClass t392_GC;
TypeInfo t392_TI = 
{
	&g_System_Core_dll_Image, NULL, "Func`2", "System", t392_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t392_TI, NULL, t392_VT, &EmptyCustomAttributesCache, &t392_TI, &t392_0_0_0, &t392_1_0_0, t392_IOs, &t392_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t392), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t513.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t513_TI;
#include "t513MD.h"



extern MethodInfo m13848_MI;
 void m13848 (t513 * __this, t25 * p0, t61 p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13848_MI);
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m13849_MI;
 bool m13849 (t513 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13849_MI);
	typedef  bool (*FunctionPointerType) (t25 * __this, t25 * p0, MethodInfo* method);
	if (__this->f9)
		m13849((t513 *)__this->f9,  p0, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m13850_MI;
 t25 * m13850 (t513 * __this, t25 * p0, t219 * p1, t25 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13850_MI);
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t25 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m13851_MI;
 bool m13851 (t513 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13851_MI);
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Func`2<System.Object,System.Boolean>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t513_m13848_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t513_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13848_MI = 
{
	".ctor", (methodPointerType)&m13848, &t513_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t513_m13848_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t513_m13849_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t513_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13849_MI = 
{
	"Invoke", (methodPointerType)&m13849, &t513_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t513_m13849_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t513_m13850_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t513_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13850_MI = 
{
	"BeginInvoke", (methodPointerType)&m13850, &t513_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t513_m13850_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t513_m13851_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t513_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13851_MI = 
{
	"EndInvoke", (methodPointerType)&m13851, &t513_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t513_m13851_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t513_MIs[] =
{
	&m13848_MI,
	&m13849_MI,
	&m13850_MI,
	&m13851_MI,
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
extern MethodInfo m13849_MI;
extern MethodInfo m13850_MI;
extern MethodInfo m13851_MI;
static MethodInfo* t513_VT[] =
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
	&m13849_MI,
	&m13850_MI,
	&m13851_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t513_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t513_0_0_0;
extern Il2CppType t513_1_0_0;
extern TypeInfo t345_TI;
struct t513;
extern TypeInfo t513_TI;
extern Il2CppGenericClass t513_GC;
TypeInfo t513_TI = 
{
	&g_System_Core_dll_Image, NULL, "Func`2", "System", t513_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t513_TI, NULL, t513_VT, &EmptyCustomAttributesCache, &t513_TI, &t513_0_0_0, &t513_1_0_0, t513_IOs, &t513_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t513), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2503.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2503_TI;
#include "t2503MD.h"

#include "t176.h"
extern TypeInfo t2503_TI;
extern TypeInfo t25_TI;
extern TypeInfo t179_TI;
extern TypeInfo t1890_TI;
extern TypeInfo t513_TI;
extern TypeInfo t125_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t123_TI;
#include "t1328MD.h"
extern MethodInfo m452_MI;
extern MethodInfo m13856_MI;
extern MethodInfo m6920_MI;
extern MethodInfo m13852_MI;
extern MethodInfo m24863_MI;
extern MethodInfo m24855_MI;
extern MethodInfo m13849_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;


extern MethodInfo m13852_MI;
 void m13852_gshared (t2503 * __this, MethodInfo* method)
{
	StackTraceSentry _stackTraceSentry(&m13852_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m13853_MI;
 t25 * m13853_gshared (t2503 * __this, MethodInfo* method)
{
	StackTraceSentry _stackTraceSentry(&m13853_MI);
	{
		t25 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m13854_MI;
 t25 * m13854_gshared (t2503 * __this, MethodInfo* method)
{
	StackTraceSentry _stackTraceSentry(&m13854_MI);
	{
		t25 * L_0 = (__this->f5);
		t25 * L_1 = L_0;
		return ((t25 *)L_1);
	}
}
extern MethodInfo m13855_MI;
 t25 * m13855_gshared (t2503 * __this, MethodInfo* method)
{
	StackTraceSentry _stackTraceSentry(&m13855_MI);
	{
		t25* L_0 = (t25*)VirtFuncInvoker0< t25* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1), __this);
		return L_0;
	}
}
extern MethodInfo m13856_MI;
 t25* m13856_gshared (t2503 * __this, MethodInfo* method)
{
	StackTraceSentry _stackTraceSentry(&m13856_MI);
	t2503 * V_0 = {0};
	{
		int32_t* L_0 = &(__this->f4);
		int32_t L_1 = m6920(NULL, L_0, 0, ((int32_t)-2), &m6920_MI);
		if ((((uint32_t)L_1) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		t2503 * L_2 = (t2503 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2));
		(( void (*) (t2503 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->method)(L_2, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		V_0 = L_2;
		t25* L_3 = (__this->f6);
		NullCheck(V_0);
		V_0->f0 = L_3;
		t513 * L_4 = (__this->f7);
		NullCheck(V_0);
		V_0->f3 = L_4;
		return V_0;
	}
}
extern MethodInfo m13857_MI;
 bool m13857_gshared (t2503 * __this, MethodInfo* method)
{
	StackTraceSentry _stackTraceSentry(&m13857_MI);
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->f4);
		V_0 = L_0;
		__this->f4 = (-1);
		V_1 = 0;
		if (V_0 == 0)
		{
			goto IL_0023;
		}
		if (V_0 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00be;
	}

IL_0023:
	{
		t25* L_1 = (__this->f0);
		NullCheck(L_1);
		t25* L_2 = (t25*)InterfaceFuncInvoker0< t25* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4), L_1);
		__this->f1 = L_2;
		V_0 = ((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			if (((uint32_t)(V_0-1)) == 0)
			{
				goto IL_0089;
			}
		}

IL_0043:
		{
			goto IL_0089;
		}

IL_0048:
		{
			t25* L_3 = (__this->f1);
			NullCheck(L_3);
			t25 * L_4 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5), L_3);
			__this->f2 = L_4;
			t513 * L_5 = (__this->f3);
			t25 * L_6 = (__this->f2);
			NullCheck(L_5);
			bool L_7 = (bool)VirtFuncInvoker1< bool, t25 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6), L_5, L_6);
			if (!L_7)
			{
				goto IL_0089;
			}
		}

IL_006f:
		{
			t25 * L_8 = (__this->f2);
			__this->f5 = L_8;
			__this->f4 = 1;
			V_1 = 1;
			// IL_0084: leave IL_00c0
			leaveInstructions[0] = 0xC0; // 1
			THROW_SENTINEL(IL_00c0);
			// finally target depth: 1
		}

IL_0089:
		{
			t25* L_9 = (__this->f1);
			NullCheck(L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m506_MI, L_9);
			if (L_10)
			{
				goto IL_0048;
			}
		}

IL_0099:
		{
			// IL_0099: leave IL_00b7
			leaveInstructions[0] = 0xB7; // 1
			THROW_SENTINEL(IL_00b7);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_009e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_009e;
	}

IL_009e:
	{ // begin finally (depth: 1)
		{
			if (!V_1)
			{
				goto IL_00a2;
			}
		}

IL_00a1:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC0:
					goto IL_00c0;
				case 0xB7:
					goto IL_00b7;
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

IL_00a2:
		{
			t25* L_11 = (__this->f1);
			if (L_11)
			{
				goto IL_00ab;
			}
		}

IL_00aa:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC0:
					goto IL_00c0;
				case 0xB7:
					goto IL_00b7;
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

IL_00ab:
		{
			t25* L_12 = (__this->f1);
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(&m507_MI, L_12);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC0:
					goto IL_00c0;
				case 0xB7:
					goto IL_00b7;
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

IL_00b7:
	{
		__this->f4 = (-1);
	}

IL_00be:
	{
		return 0;
	}

IL_00c0:
	{
		return 1;
	}
	// Dead block : IL_00c2: ldloc.2
}
extern MethodInfo m13858_MI;
 void m13858_gshared (t2503 * __this, MethodInfo* method)
{
	StackTraceSentry _stackTraceSentry(&m13858_MI);
	uint32_t V_0 = 0;
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->f4);
		V_0 = L_0;
		__this->f4 = (-1);
		if (V_0 == 0)
		{
			goto IL_003b;
		}
		if (V_0 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		// IL_0021: leave IL_003b
		leaveInstructions[0] = 0x3B; // 1
		THROW_SENTINEL(IL_003b);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0026;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0026;
	}

IL_0026:
	{ // begin finally (depth: 1)
		{
			t25* L_1 = (__this->f1);
			if (L_1)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x3B:
					goto IL_003b;
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

IL_002f:
		{
			t25* L_2 = (__this->f1);
			NullCheck(L_2);
			InterfaceActionInvoker0::Invoke(&m507_MI, L_2);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x3B:
					goto IL_003b;
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

IL_003b:
	{
		return;
	}
}
// Metadata Definition System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
extern Il2CppType t1890_0_0_3;
FieldInfo t2503_f0_FieldInfo = 
{
	"source", &t1890_0_0_3, &t2503_TI, offsetof(t2503, f0), &EmptyCustomAttributesCache};
extern Il2CppType t179_0_0_3;
FieldInfo t2503_f1_FieldInfo = 
{
	"<$s_92>__0", &t179_0_0_3, &t2503_TI, offsetof(t2503, f1), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_3;
FieldInfo t2503_f2_FieldInfo = 
{
	"<element>__1", &t25_0_0_3, &t2503_TI, offsetof(t2503, f2), &EmptyCustomAttributesCache};
extern Il2CppType t513_0_0_3;
FieldInfo t2503_f3_FieldInfo = 
{
	"predicate", &t513_0_0_3, &t2503_TI, offsetof(t2503, f3), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t2503_f4_FieldInfo = 
{
	"$PC", &t134_0_0_3, &t2503_TI, offsetof(t2503, f4), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_3;
FieldInfo t2503_f5_FieldInfo = 
{
	"$current", &t25_0_0_3, &t2503_TI, offsetof(t2503, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1890_0_0_3;
FieldInfo t2503_f6_FieldInfo = 
{
	"<$>source", &t1890_0_0_3, &t2503_TI, offsetof(t2503, f6), &EmptyCustomAttributesCache};
extern Il2CppType t513_0_0_3;
FieldInfo t2503_f7_FieldInfo = 
{
	"<$>predicate", &t513_0_0_3, &t2503_TI, offsetof(t2503, f7), &EmptyCustomAttributesCache};
static FieldInfo* t2503_FIs[] =
{
	&t2503_f0_FieldInfo,
	&t2503_f1_FieldInfo,
	&t2503_f2_FieldInfo,
	&t2503_f3_FieldInfo,
	&t2503_f4_FieldInfo,
	&t2503_f5_FieldInfo,
	&t2503_f6_FieldInfo,
	&t2503_f7_FieldInfo,
	NULL
};
extern MethodInfo m13853_MI;
static PropertyInfo t2503____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo = 
{
	&t2503_TI, "System.Collections.Generic.IEnumerator<TSource>.Current", &m13853_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13854_MI;
static PropertyInfo t2503____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2503_TI, "System.Collections.IEnumerator.Current", &m13854_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2503_PIs[] =
{
	&t2503____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo,
	&t2503____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t2503_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13852_MI = 
{
	".ctor", (methodPointerType)&m13852_gshared, &t2503_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t774__CustomAttributeCache_m3567;
MethodInfo m13853_MI = 
{
	"System.Collections.Generic.IEnumerator<TSource>.get_Current", (methodPointerType)&m13853_gshared, &t2503_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t774__CustomAttributeCache_m3567, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2503_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t774__CustomAttributeCache_m3568;
MethodInfo m13854_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13854_gshared, &t2503_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t774__CustomAttributeCache_m3568, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2503_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t774__CustomAttributeCache_m3569;
MethodInfo m13855_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m13855_gshared, &t2503_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &t774__CustomAttributeCache_m3569, 481, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2503_TI;
extern Il2CppType t179_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t774__CustomAttributeCache_m3570;
MethodInfo m13856_MI = 
{
	"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", (methodPointerType)&m13856_gshared, &t2503_TI, &t179_0_0_0, RuntimeInvoker_t25, NULL, &t774__CustomAttributeCache_m3570, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2503_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13857_MI = 
{
	"MoveNext", (methodPointerType)&m13857_gshared, &t2503_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2503_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t774__CustomAttributeCache_m3572;
MethodInfo m13858_MI = 
{
	"Dispose", (methodPointerType)&m13858_gshared, &t2503_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t774__CustomAttributeCache_m3572, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2503_MIs[] =
{
	&m13852_MI,
	&m13853_MI,
	&m13854_MI,
	&m13855_MI,
	&m13856_MI,
	&m13857_MI,
	&m13858_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13854_MI;
extern MethodInfo m13857_MI;
extern MethodInfo m13858_MI;
extern MethodInfo m13855_MI;
extern MethodInfo m13856_MI;
extern MethodInfo m13853_MI;
static MethodInfo* t2503_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13854_MI,
	&m13857_MI,
	&m13858_MI,
	&m13855_MI,
	&m13856_MI,
	&m13853_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t703_TI;
extern TypeInfo t1890_TI;
extern TypeInfo t179_TI;
static TypeInfo* t2503_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t703_TI,
	&t1890_TI,
	&t179_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t703_TI;
extern TypeInfo t1890_TI;
extern TypeInfo t179_TI;
static Il2CppInterfaceOffsetPair t2503_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t703_TI, 7},
	{ &t1890_TI, 8},
	{ &t179_TI, 9},
};
extern TypeInfo t25_TI;
extern MethodInfo m13856_MI;
extern TypeInfo t2503_TI;
extern MethodInfo m13852_MI;
extern MethodInfo m24863_MI;
extern MethodInfo m24855_MI;
extern MethodInfo m13849_MI;
static void* t2503_RGCTXData[7] = 
{
	&t25_TI,
	&m13856_MI,
	&t2503_TI,
	&m13852_MI,
	&m24863_MI,
	&m24855_MI,
	&m13849_MI,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t2503_0_0_0;
extern Il2CppType t2503_1_0_0;
extern TypeInfo t25_TI;
struct t2503;
extern TypeInfo t2503_TI;
extern Il2CppGenericClass t2503_GC;
extern TypeInfo t512_TI;
extern CustomAttributesCache t774__CustomAttributeCache;
extern CustomAttributesCache t774__CustomAttributeCache_m3567;
extern CustomAttributesCache t774__CustomAttributeCache_m3568;
extern CustomAttributesCache t774__CustomAttributeCache_m3569;
extern CustomAttributesCache t774__CustomAttributeCache_m3570;
extern CustomAttributesCache t774__CustomAttributeCache_m3572;
TypeInfo t2503_TI = 
{
	&g_System_Core_dll_Image, NULL, "<CreateWhereIterator>c__Iterator1D`1", "", t2503_MIs, t2503_PIs, t2503_FIs, NULL, &t25_TI, NULL, &t512_TI, &t2503_TI, t2503_ITIs, t2503_VT, &t774__CustomAttributeCache, &t2503_TI, &t2503_0_0_0, &t2503_1_0_0, t2503_IOs, &t2503_GC, NULL, NULL, NULL, t2503_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2503), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 8, 0, 0, 10, 5, 5};
#include "t2504.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2504_TI;
#include "t2504MD.h"

extern TypeInfo t2504_TI;
extern TypeInfo t388_TI;
extern TypeInfo t2492_TI;
extern TypeInfo t393_TI;
extern TypeInfo t392_TI;
extern TypeInfo t125_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t123_TI;
extern MethodInfo m452_MI;
extern MethodInfo m13863_MI;
extern MethodInfo m6920_MI;
extern MethodInfo m13859_MI;
extern MethodInfo m27867_MI;
extern MethodInfo m27859_MI;
extern MethodInfo m13845_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;


// Metadata Definition System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>
extern Il2CppType t393_0_0_3;
FieldInfo t2504_f0_FieldInfo = 
{
	"source", &t393_0_0_3, &t2504_TI, offsetof(t2504, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2492_0_0_3;
FieldInfo t2504_f1_FieldInfo = 
{
	"<$s_92>__0", &t2492_0_0_3, &t2504_TI, offsetof(t2504, f1), &EmptyCustomAttributesCache};
extern Il2CppType t388_0_0_3;
FieldInfo t2504_f2_FieldInfo = 
{
	"<element>__1", &t388_0_0_3, &t2504_TI, offsetof(t2504, f2), &EmptyCustomAttributesCache};
extern Il2CppType t392_0_0_3;
FieldInfo t2504_f3_FieldInfo = 
{
	"predicate", &t392_0_0_3, &t2504_TI, offsetof(t2504, f3), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t2504_f4_FieldInfo = 
{
	"$PC", &t134_0_0_3, &t2504_TI, offsetof(t2504, f4), &EmptyCustomAttributesCache};
extern Il2CppType t388_0_0_3;
FieldInfo t2504_f5_FieldInfo = 
{
	"$current", &t388_0_0_3, &t2504_TI, offsetof(t2504, f5), &EmptyCustomAttributesCache};
extern Il2CppType t393_0_0_3;
FieldInfo t2504_f6_FieldInfo = 
{
	"<$>source", &t393_0_0_3, &t2504_TI, offsetof(t2504, f6), &EmptyCustomAttributesCache};
extern Il2CppType t392_0_0_3;
FieldInfo t2504_f7_FieldInfo = 
{
	"<$>predicate", &t392_0_0_3, &t2504_TI, offsetof(t2504, f7), &EmptyCustomAttributesCache};
static FieldInfo* t2504_FIs[] =
{
	&t2504_f0_FieldInfo,
	&t2504_f1_FieldInfo,
	&t2504_f2_FieldInfo,
	&t2504_f3_FieldInfo,
	&t2504_f4_FieldInfo,
	&t2504_f5_FieldInfo,
	&t2504_f6_FieldInfo,
	&t2504_f7_FieldInfo,
	NULL
};
extern MethodInfo m13860_MI;
static PropertyInfo t2504____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo = 
{
	&t2504_TI, "System.Collections.Generic.IEnumerator<TSource>.Current", &m13860_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13861_MI;
static PropertyInfo t2504____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2504_TI, "System.Collections.IEnumerator.Current", &m13861_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2504_PIs[] =
{
	&t2504____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo,
	&t2504____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t2504_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13859_MI = 
{
	".ctor", (methodPointerType)&m13852_gshared, &t2504_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2504_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t774__CustomAttributeCache_m3567;
MethodInfo m13860_MI = 
{
	"System.Collections.Generic.IEnumerator<TSource>.get_Current", (methodPointerType)&m13853_gshared, &t2504_TI, &t388_0_0_0, RuntimeInvoker_t25, NULL, &t774__CustomAttributeCache_m3567, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2504_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t774__CustomAttributeCache_m3568;
MethodInfo m13861_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13854_gshared, &t2504_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t774__CustomAttributeCache_m3568, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2504_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t774__CustomAttributeCache_m3569;
MethodInfo m13862_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m13855_gshared, &t2504_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &t774__CustomAttributeCache_m3569, 481, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2504_TI;
extern Il2CppType t2492_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t774__CustomAttributeCache_m3570;
MethodInfo m13863_MI = 
{
	"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", (methodPointerType)&m13856_gshared, &t2504_TI, &t2492_0_0_0, RuntimeInvoker_t25, NULL, &t774__CustomAttributeCache_m3570, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2504_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13864_MI = 
{
	"MoveNext", (methodPointerType)&m13857_gshared, &t2504_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2504_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t774__CustomAttributeCache_m3572;
MethodInfo m13865_MI = 
{
	"Dispose", (methodPointerType)&m13858_gshared, &t2504_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t774__CustomAttributeCache_m3572, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2504_MIs[] =
{
	&m13859_MI,
	&m13860_MI,
	&m13861_MI,
	&m13862_MI,
	&m13863_MI,
	&m13864_MI,
	&m13865_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13861_MI;
extern MethodInfo m13864_MI;
extern MethodInfo m13865_MI;
extern MethodInfo m13862_MI;
extern MethodInfo m13863_MI;
extern MethodInfo m13860_MI;
static MethodInfo* t2504_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13861_MI,
	&m13864_MI,
	&m13865_MI,
	&m13862_MI,
	&m13863_MI,
	&m13860_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t703_TI;
extern TypeInfo t393_TI;
extern TypeInfo t2492_TI;
static TypeInfo* t2504_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t703_TI,
	&t393_TI,
	&t2492_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t703_TI;
extern TypeInfo t393_TI;
extern TypeInfo t2492_TI;
static Il2CppInterfaceOffsetPair t2504_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t703_TI, 7},
	{ &t393_TI, 8},
	{ &t2492_TI, 9},
};
extern TypeInfo t388_TI;
extern MethodInfo m13863_MI;
extern TypeInfo t2504_TI;
extern MethodInfo m13859_MI;
extern MethodInfo m27867_MI;
extern MethodInfo m27859_MI;
extern MethodInfo m13845_MI;
static void* t2504_RGCTXData[7] = 
{
	&t388_TI,
	&m13863_MI,
	&t2504_TI,
	&m13859_MI,
	&m27867_MI,
	&m27859_MI,
	&m13845_MI,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t2504_0_0_0;
extern Il2CppType t2504_1_0_0;
extern TypeInfo t25_TI;
struct t2504;
extern TypeInfo t2504_TI;
extern Il2CppGenericClass t2504_GC;
extern TypeInfo t512_TI;
extern CustomAttributesCache t774__CustomAttributeCache;
extern CustomAttributesCache t774__CustomAttributeCache_m3567;
extern CustomAttributesCache t774__CustomAttributeCache_m3568;
extern CustomAttributesCache t774__CustomAttributeCache_m3569;
extern CustomAttributesCache t774__CustomAttributeCache_m3570;
extern CustomAttributesCache t774__CustomAttributeCache_m3572;
TypeInfo t2504_TI = 
{
	&g_System_Core_dll_Image, NULL, "<CreateWhereIterator>c__Iterator1D`1", "", t2504_MIs, t2504_PIs, t2504_FIs, NULL, &t25_TI, NULL, &t512_TI, &t2504_TI, t2504_ITIs, t2504_VT, &t774__CustomAttributeCache, &t2504_TI, &t2504_0_0_0, &t2504_1_0_0, t2504_IOs, &t2504_GC, NULL, NULL, NULL, t2504_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2504), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 8, 0, 0, 10, 5, 5};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3866_TI;

#include "t395.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.AspectRatioFitter>
extern MethodInfo m27906_MI;
static PropertyInfo t3866____Current_PropertyInfo = 
{
	&t3866_TI, "Current", &m27906_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3866_PIs[] =
{
	&t3866____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3866_TI;
extern Il2CppType t395_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27906_MI = 
{
	"get_Current", NULL, &t3866_TI, &t395_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3866_MIs[] =
{
	&m27906_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3866_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3866_0_0_0;
extern Il2CppType t3866_1_0_0;
struct t3866;
extern TypeInfo t3866_TI;
extern Il2CppGenericClass t3866_GC;
TypeInfo t3866_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3866_MIs, t3866_PIs, NULL, NULL, NULL, NULL, NULL, &t3866_TI, t3866_ITIs, NULL, &EmptyCustomAttributesCache, &t3866_TI, &t3866_0_0_0, &t3866_1_0_0, NULL, &t3866_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2505.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2505_TI;
#include "t2505MD.h"

extern TypeInfo t2505_TI;
extern TypeInfo t395_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13870_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20781_MI;
struct t122;
#define m20781(__this, p0, method) (t395 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m20781_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.AspectRatioFitter>
extern Il2CppType t122_0_0_1;
FieldInfo t2505_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2505_TI, offsetof(t2505, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2505_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2505_TI, offsetof(t2505, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2505_FIs[] =
{
	&t2505_f0_FieldInfo,
	&t2505_f1_FieldInfo,
	NULL
};
extern MethodInfo m13867_MI;
static PropertyInfo t2505____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2505_TI, "System.Collections.IEnumerator.Current", &m13867_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13870_MI;
static PropertyInfo t2505____Current_PropertyInfo = 
{
	&t2505_TI, "Current", &m13870_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2505_PIs[] =
{
	&t2505____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2505____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2505_m13866_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2505_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13866_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t2505_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2505_m13866_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2505_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13867_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t2505_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2505_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13868_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t2505_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2505_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13869_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t2505_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2505_TI;
extern Il2CppType t395_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13870_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t2505_TI, &t395_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2505_MIs[] =
{
	&m13866_MI,
	&m13867_MI,
	&m13868_MI,
	&m13869_MI,
	&m13870_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13867_MI;
extern MethodInfo m13869_MI;
extern MethodInfo m13868_MI;
extern MethodInfo m13870_MI;
static MethodInfo* t2505_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13867_MI,
	&m13869_MI,
	&m13868_MI,
	&m13870_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3866_TI;
static TypeInfo* t2505_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3866_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3866_TI;
static Il2CppInterfaceOffsetPair t2505_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3866_TI, 7},
};
extern MethodInfo m13870_MI;
extern TypeInfo t395_TI;
extern MethodInfo m20781_MI;
static void* t2505_RGCTXData[3] = 
{
	&m13870_MI,
	&t395_TI,
	&m20781_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2505_0_0_0;
extern Il2CppType t2505_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2505_TI;
extern Il2CppGenericClass t2505_GC;
extern TypeInfo t122_TI;
TypeInfo t2505_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2505_MIs, t2505_PIs, t2505_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2505_TI, t2505_ITIs, t2505_VT, &EmptyCustomAttributesCache, &t2505_TI, &t2505_0_0_0, &t2505_1_0_0, t2505_IOs, &t2505_GC, NULL, NULL, NULL, t2505_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2505)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4772_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.AspectRatioFitter>
extern MethodInfo m27907_MI;
static PropertyInfo t4772____Count_PropertyInfo = 
{
	&t4772_TI, "Count", &m27907_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27908_MI;
static PropertyInfo t4772____IsReadOnly_PropertyInfo = 
{
	&t4772_TI, "IsReadOnly", &m27908_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4772_PIs[] =
{
	&t4772____Count_PropertyInfo,
	&t4772____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4772_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27907_MI = 
{
	"get_Count", NULL, &t4772_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4772_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27908_MI = 
{
	"get_IsReadOnly", NULL, &t4772_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t395_0_0_0;
static ParameterInfo t4772_m27909_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t395_0_0_0},
};
extern TypeInfo t4772_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27909_MI = 
{
	"Add", NULL, &t4772_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t4772_m27909_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4772_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27910_MI = 
{
	"Clear", NULL, &t4772_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t395_0_0_0;
static ParameterInfo t4772_m27911_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t395_0_0_0},
};
extern TypeInfo t4772_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27911_MI = 
{
	"Contains", NULL, &t4772_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4772_m27911_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3627_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4772_m27912_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3627_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4772_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27912_MI = 
{
	"CopyTo", NULL, &t4772_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4772_m27912_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t395_0_0_0;
static ParameterInfo t4772_m27913_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t395_0_0_0},
};
extern TypeInfo t4772_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27913_MI = 
{
	"Remove", NULL, &t4772_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4772_m27913_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4772_MIs[] =
{
	&m27907_MI,
	&m27908_MI,
	&m27909_MI,
	&m27910_MI,
	&m27911_MI,
	&m27912_MI,
	&m27913_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4774_TI;
static TypeInfo* t4772_ITIs[] = 
{
	&t703_TI,
	&t4774_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4772_0_0_0;
extern Il2CppType t4772_1_0_0;
struct t4772;
extern TypeInfo t4772_TI;
extern Il2CppGenericClass t4772_GC;
TypeInfo t4772_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4772_MIs, t4772_PIs, NULL, NULL, NULL, NULL, NULL, &t4772_TI, t4772_ITIs, NULL, &EmptyCustomAttributesCache, &t4772_TI, &t4772_0_0_0, &t4772_1_0_0, NULL, &t4772_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4774_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.AspectRatioFitter>
extern TypeInfo t4774_TI;
extern Il2CppType t3866_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27914_MI = 
{
	"GetEnumerator", NULL, &t4774_TI, &t3866_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4774_MIs[] =
{
	&m27914_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4774_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4774_0_0_0;
extern Il2CppType t4774_1_0_0;
struct t4774;
extern TypeInfo t4774_TI;
extern Il2CppGenericClass t4774_GC;
TypeInfo t4774_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4774_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4774_TI, t4774_ITIs, NULL, &EmptyCustomAttributesCache, &t4774_TI, &t4774_0_0_0, &t4774_1_0_0, NULL, &t4774_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4773_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.AspectRatioFitter>
extern MethodInfo m27915_MI;
extern MethodInfo m27916_MI;
static PropertyInfo t4773____Item_PropertyInfo = 
{
	&t4773_TI, "Item", &m27915_MI, &m27916_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4773_PIs[] =
{
	&t4773____Item_PropertyInfo,
	NULL
};
extern Il2CppType t395_0_0_0;
static ParameterInfo t4773_m27917_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t395_0_0_0},
};
extern TypeInfo t4773_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27917_MI = 
{
	"IndexOf", NULL, &t4773_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t4773_m27917_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t395_0_0_0;
static ParameterInfo t4773_m27918_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t395_0_0_0},
};
extern TypeInfo t4773_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27918_MI = 
{
	"Insert", NULL, &t4773_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4773_m27918_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4773_m27919_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4773_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27919_MI = 
{
	"RemoveAt", NULL, &t4773_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4773_m27919_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4773_m27915_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4773_TI;
extern Il2CppType t395_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27915_MI = 
{
	"get_Item", NULL, &t4773_TI, &t395_0_0_0, RuntimeInvoker_t25_t134, t4773_m27915_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t395_0_0_0;
static ParameterInfo t4773_m27916_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t395_0_0_0},
};
extern TypeInfo t4773_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27916_MI = 
{
	"set_Item", NULL, &t4773_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4773_m27916_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4773_MIs[] =
{
	&m27917_MI,
	&m27918_MI,
	&m27919_MI,
	&m27915_MI,
	&m27916_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4772_TI;
extern TypeInfo t4774_TI;
static TypeInfo* t4773_ITIs[] = 
{
	&t703_TI,
	&t4772_TI,
	&t4774_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4773_0_0_0;
extern Il2CppType t4773_1_0_0;
struct t4773;
extern TypeInfo t4773_TI;
extern Il2CppGenericClass t4773_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4773_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4773_MIs, t4773_PIs, NULL, NULL, NULL, NULL, NULL, &t4773_TI, t4773_ITIs, NULL, &t1518__CustomAttributeCache, &t4773_TI, &t4773_0_0_0, &t4773_1_0_0, NULL, &t4773_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4775_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutController>
extern MethodInfo m27920_MI;
static PropertyInfo t4775____Count_PropertyInfo = 
{
	&t4775_TI, "Count", &m27920_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27921_MI;
static PropertyInfo t4775____IsReadOnly_PropertyInfo = 
{
	&t4775_TI, "IsReadOnly", &m27921_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4775_PIs[] =
{
	&t4775____Count_PropertyInfo,
	&t4775____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4775_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27920_MI = 
{
	"get_Count", NULL, &t4775_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4775_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27921_MI = 
{
	"get_IsReadOnly", NULL, &t4775_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t515_0_0_0;
static ParameterInfo t4775_m27922_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t515_0_0_0},
};
extern TypeInfo t4775_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27922_MI = 
{
	"Add", NULL, &t4775_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t4775_m27922_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4775_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27923_MI = 
{
	"Clear", NULL, &t4775_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t515_0_0_0;
static ParameterInfo t4775_m27924_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t515_0_0_0},
};
extern TypeInfo t4775_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27924_MI = 
{
	"Contains", NULL, &t4775_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4775_m27924_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3628_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4775_m27925_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3628_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4775_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27925_MI = 
{
	"CopyTo", NULL, &t4775_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4775_m27925_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t515_0_0_0;
static ParameterInfo t4775_m27926_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t515_0_0_0},
};
extern TypeInfo t4775_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27926_MI = 
{
	"Remove", NULL, &t4775_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4775_m27926_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4775_MIs[] =
{
	&m27920_MI,
	&m27921_MI,
	&m27922_MI,
	&m27923_MI,
	&m27924_MI,
	&m27925_MI,
	&m27926_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4777_TI;
static TypeInfo* t4775_ITIs[] = 
{
	&t703_TI,
	&t4777_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4775_0_0_0;
extern Il2CppType t4775_1_0_0;
struct t4775;
extern TypeInfo t4775_TI;
extern Il2CppGenericClass t4775_GC;
TypeInfo t4775_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4775_MIs, t4775_PIs, NULL, NULL, NULL, NULL, NULL, &t4775_TI, t4775_ITIs, NULL, &EmptyCustomAttributesCache, &t4775_TI, &t4775_0_0_0, &t4775_1_0_0, NULL, &t4775_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4777_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ILayoutController>
extern TypeInfo t4777_TI;
extern Il2CppType t3867_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27927_MI = 
{
	"GetEnumerator", NULL, &t4777_TI, &t3867_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4777_MIs[] =
{
	&m27927_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4777_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4777_0_0_0;
extern Il2CppType t4777_1_0_0;
struct t4777;
extern TypeInfo t4777_TI;
extern Il2CppGenericClass t4777_GC;
TypeInfo t4777_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4777_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4777_TI, t4777_ITIs, NULL, &EmptyCustomAttributesCache, &t4777_TI, &t4777_0_0_0, &t4777_1_0_0, NULL, &t4777_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3867_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ILayoutController>
extern MethodInfo m27928_MI;
static PropertyInfo t3867____Current_PropertyInfo = 
{
	&t3867_TI, "Current", &m27928_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3867_PIs[] =
{
	&t3867____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3867_TI;
extern Il2CppType t515_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27928_MI = 
{
	"get_Current", NULL, &t3867_TI, &t515_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3867_MIs[] =
{
	&m27928_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3867_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3867_0_0_0;
extern Il2CppType t3867_1_0_0;
struct t3867;
extern TypeInfo t3867_TI;
extern Il2CppGenericClass t3867_GC;
TypeInfo t3867_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3867_MIs, t3867_PIs, NULL, NULL, NULL, NULL, NULL, &t3867_TI, t3867_ITIs, NULL, &EmptyCustomAttributesCache, &t3867_TI, &t3867_0_0_0, &t3867_1_0_0, NULL, &t3867_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2506.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2506_TI;
#include "t2506MD.h"

extern TypeInfo t2506_TI;
extern TypeInfo t515_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13875_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20792_MI;
struct t122;
#define m20792(__this, p0, method) (t25 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m20792_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutController>
extern Il2CppType t122_0_0_1;
FieldInfo t2506_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2506_TI, offsetof(t2506, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2506_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2506_TI, offsetof(t2506, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2506_FIs[] =
{
	&t2506_f0_FieldInfo,
	&t2506_f1_FieldInfo,
	NULL
};
extern MethodInfo m13872_MI;
static PropertyInfo t2506____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2506_TI, "System.Collections.IEnumerator.Current", &m13872_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13875_MI;
static PropertyInfo t2506____Current_PropertyInfo = 
{
	&t2506_TI, "Current", &m13875_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2506_PIs[] =
{
	&t2506____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2506____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2506_m13871_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2506_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13871_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t2506_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2506_m13871_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2506_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13872_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t2506_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2506_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13873_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t2506_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2506_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13874_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t2506_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2506_TI;
extern Il2CppType t515_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13875_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t2506_TI, &t515_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2506_MIs[] =
{
	&m13871_MI,
	&m13872_MI,
	&m13873_MI,
	&m13874_MI,
	&m13875_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13872_MI;
extern MethodInfo m13874_MI;
extern MethodInfo m13873_MI;
extern MethodInfo m13875_MI;
static MethodInfo* t2506_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13872_MI,
	&m13874_MI,
	&m13873_MI,
	&m13875_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3867_TI;
static TypeInfo* t2506_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3867_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3867_TI;
static Il2CppInterfaceOffsetPair t2506_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3867_TI, 7},
};
extern MethodInfo m13875_MI;
extern TypeInfo t515_TI;
extern MethodInfo m20792_MI;
static void* t2506_RGCTXData[3] = 
{
	&m13875_MI,
	&t515_TI,
	&m20792_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2506_0_0_0;
extern Il2CppType t2506_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2506_TI;
extern Il2CppGenericClass t2506_GC;
extern TypeInfo t122_TI;
TypeInfo t2506_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2506_MIs, t2506_PIs, t2506_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2506_TI, t2506_ITIs, t2506_VT, &EmptyCustomAttributesCache, &t2506_TI, &t2506_0_0_0, &t2506_1_0_0, t2506_IOs, &t2506_GC, NULL, NULL, NULL, t2506_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2506)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4776_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutController>
extern MethodInfo m27929_MI;
extern MethodInfo m27930_MI;
static PropertyInfo t4776____Item_PropertyInfo = 
{
	&t4776_TI, "Item", &m27929_MI, &m27930_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4776_PIs[] =
{
	&t4776____Item_PropertyInfo,
	NULL
};
extern Il2CppType t515_0_0_0;
static ParameterInfo t4776_m27931_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t515_0_0_0},
};
extern TypeInfo t4776_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27931_MI = 
{
	"IndexOf", NULL, &t4776_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t4776_m27931_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t515_0_0_0;
static ParameterInfo t4776_m27932_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t515_0_0_0},
};
extern TypeInfo t4776_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27932_MI = 
{
	"Insert", NULL, &t4776_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4776_m27932_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4776_m27933_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4776_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27933_MI = 
{
	"RemoveAt", NULL, &t4776_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4776_m27933_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4776_m27929_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4776_TI;
extern Il2CppType t515_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27929_MI = 
{
	"get_Item", NULL, &t4776_TI, &t515_0_0_0, RuntimeInvoker_t25_t134, t4776_m27929_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t515_0_0_0;
static ParameterInfo t4776_m27930_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t515_0_0_0},
};
extern TypeInfo t4776_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27930_MI = 
{
	"set_Item", NULL, &t4776_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4776_m27930_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4776_MIs[] =
{
	&m27931_MI,
	&m27932_MI,
	&m27933_MI,
	&m27929_MI,
	&m27930_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4775_TI;
extern TypeInfo t4777_TI;
static TypeInfo* t4776_ITIs[] = 
{
	&t703_TI,
	&t4775_TI,
	&t4777_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4776_0_0_0;
extern Il2CppType t4776_1_0_0;
struct t4776;
extern TypeInfo t4776_TI;
extern Il2CppGenericClass t4776_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4776_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4776_MIs, t4776_PIs, NULL, NULL, NULL, NULL, NULL, &t4776_TI, t4776_ITIs, NULL, &t1518__CustomAttributeCache, &t4776_TI, &t4776_0_0_0, &t4776_1_0_0, NULL, &t4776_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4778_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutSelfController>
extern MethodInfo m27934_MI;
static PropertyInfo t4778____Count_PropertyInfo = 
{
	&t4778_TI, "Count", &m27934_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27935_MI;
static PropertyInfo t4778____IsReadOnly_PropertyInfo = 
{
	&t4778_TI, "IsReadOnly", &m27935_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4778_PIs[] =
{
	&t4778____Count_PropertyInfo,
	&t4778____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4778_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27934_MI = 
{
	"get_Count", NULL, &t4778_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4778_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27935_MI = 
{
	"get_IsReadOnly", NULL, &t4778_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t516_0_0_0;
static ParameterInfo t4778_m27936_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t516_0_0_0},
};
extern TypeInfo t4778_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27936_MI = 
{
	"Add", NULL, &t4778_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t4778_m27936_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4778_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27937_MI = 
{
	"Clear", NULL, &t4778_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t516_0_0_0;
static ParameterInfo t4778_m27938_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t516_0_0_0},
};
extern TypeInfo t4778_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27938_MI = 
{
	"Contains", NULL, &t4778_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4778_m27938_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3629_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4778_m27939_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3629_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4778_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27939_MI = 
{
	"CopyTo", NULL, &t4778_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4778_m27939_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t516_0_0_0;
static ParameterInfo t4778_m27940_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t516_0_0_0},
};
extern TypeInfo t4778_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27940_MI = 
{
	"Remove", NULL, &t4778_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4778_m27940_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4778_MIs[] =
{
	&m27934_MI,
	&m27935_MI,
	&m27936_MI,
	&m27937_MI,
	&m27938_MI,
	&m27939_MI,
	&m27940_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4780_TI;
static TypeInfo* t4778_ITIs[] = 
{
	&t703_TI,
	&t4780_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4778_0_0_0;
extern Il2CppType t4778_1_0_0;
struct t4778;
extern TypeInfo t4778_TI;
extern Il2CppGenericClass t4778_GC;
TypeInfo t4778_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4778_MIs, t4778_PIs, NULL, NULL, NULL, NULL, NULL, &t4778_TI, t4778_ITIs, NULL, &EmptyCustomAttributesCache, &t4778_TI, &t4778_0_0_0, &t4778_1_0_0, NULL, &t4778_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4780_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ILayoutSelfController>
extern TypeInfo t4780_TI;
extern Il2CppType t3868_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27941_MI = 
{
	"GetEnumerator", NULL, &t4780_TI, &t3868_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4780_MIs[] =
{
	&m27941_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4780_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4780_0_0_0;
extern Il2CppType t4780_1_0_0;
struct t4780;
extern TypeInfo t4780_TI;
extern Il2CppGenericClass t4780_GC;
TypeInfo t4780_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4780_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4780_TI, t4780_ITIs, NULL, &EmptyCustomAttributesCache, &t4780_TI, &t4780_0_0_0, &t4780_1_0_0, NULL, &t4780_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3868_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ILayoutSelfController>
extern MethodInfo m27942_MI;
static PropertyInfo t3868____Current_PropertyInfo = 
{
	&t3868_TI, "Current", &m27942_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3868_PIs[] =
{
	&t3868____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3868_TI;
extern Il2CppType t516_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27942_MI = 
{
	"get_Current", NULL, &t3868_TI, &t516_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3868_MIs[] =
{
	&m27942_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3868_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3868_0_0_0;
extern Il2CppType t3868_1_0_0;
struct t3868;
extern TypeInfo t3868_TI;
extern Il2CppGenericClass t3868_GC;
TypeInfo t3868_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3868_MIs, t3868_PIs, NULL, NULL, NULL, NULL, NULL, &t3868_TI, t3868_ITIs, NULL, &EmptyCustomAttributesCache, &t3868_TI, &t3868_0_0_0, &t3868_1_0_0, NULL, &t3868_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2507.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2507_TI;
#include "t2507MD.h"

extern TypeInfo t2507_TI;
extern TypeInfo t516_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13880_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20803_MI;
struct t122;
#define m20803(__this, p0, method) (t25 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m20803_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutSelfController>
extern Il2CppType t122_0_0_1;
FieldInfo t2507_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2507_TI, offsetof(t2507, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2507_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2507_TI, offsetof(t2507, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2507_FIs[] =
{
	&t2507_f0_FieldInfo,
	&t2507_f1_FieldInfo,
	NULL
};
extern MethodInfo m13877_MI;
static PropertyInfo t2507____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2507_TI, "System.Collections.IEnumerator.Current", &m13877_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13880_MI;
static PropertyInfo t2507____Current_PropertyInfo = 
{
	&t2507_TI, "Current", &m13880_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2507_PIs[] =
{
	&t2507____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2507____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2507_m13876_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2507_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13876_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t2507_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2507_m13876_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2507_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13877_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t2507_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2507_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13878_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t2507_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2507_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13879_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t2507_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2507_TI;
extern Il2CppType t516_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13880_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t2507_TI, &t516_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2507_MIs[] =
{
	&m13876_MI,
	&m13877_MI,
	&m13878_MI,
	&m13879_MI,
	&m13880_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13877_MI;
extern MethodInfo m13879_MI;
extern MethodInfo m13878_MI;
extern MethodInfo m13880_MI;
static MethodInfo* t2507_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13877_MI,
	&m13879_MI,
	&m13878_MI,
	&m13880_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3868_TI;
static TypeInfo* t2507_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3868_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3868_TI;
static Il2CppInterfaceOffsetPair t2507_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3868_TI, 7},
};
extern MethodInfo m13880_MI;
extern TypeInfo t516_TI;
extern MethodInfo m20803_MI;
static void* t2507_RGCTXData[3] = 
{
	&m13880_MI,
	&t516_TI,
	&m20803_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2507_0_0_0;
extern Il2CppType t2507_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2507_TI;
extern Il2CppGenericClass t2507_GC;
extern TypeInfo t122_TI;
TypeInfo t2507_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2507_MIs, t2507_PIs, t2507_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2507_TI, t2507_ITIs, t2507_VT, &EmptyCustomAttributesCache, &t2507_TI, &t2507_0_0_0, &t2507_1_0_0, t2507_IOs, &t2507_GC, NULL, NULL, NULL, t2507_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2507)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
