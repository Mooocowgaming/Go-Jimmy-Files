#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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
extern TypeInfo t3843_TI;

#include "t342.h"

#include "t122.h"

// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.InputField/EditState>
extern MethodInfo m27634_MI;
static PropertyInfo t3843____Current_PropertyInfo = 
{
	&t3843_TI, "Current", &m27634_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3843_PIs[] =
{
	&t3843____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3843_TI;
extern Il2CppType t342_0_0_0;
extern void* RuntimeInvoker_t342 (MethodInfo* method, void* obj, void** args);
MethodInfo m27634_MI = 
{
	"get_Current", NULL, &t3843_TI, &t342_0_0_0, RuntimeInvoker_t342, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3843_MIs[] =
{
	&m27634_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3843_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3843_0_0_0;
extern Il2CppType t3843_1_0_0;
struct t3843;
extern TypeInfo t3843_TI;
extern Il2CppGenericClass t3843_GC;
TypeInfo t3843_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3843_MIs, t3843_PIs, NULL, NULL, NULL, NULL, NULL, &t3843_TI, t3843_ITIs, NULL, &EmptyCustomAttributesCache, &t3843_TI, &t3843_0_0_0, &t3843_1_0_0, NULL, &t3843_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2399.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2399_TI;
#include "t2399MD.h"

#include "t25.h"
#include "t134.h"
#include "t27.h"
#include "t1387.h"
#include "t123.h"
#include "t125.h"
extern TypeInfo t2399_TI;
extern TypeInfo t342_TI;
extern TypeInfo t1387_TI;
#include "t1387MD.h"
#include "t122MD.h"
extern MethodInfo m13084_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20509_MI;
struct t122;
#include "t1351.h"
 int32_t m20509 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20509_MI;


extern MethodInfo m13080_MI;
 void m13080 (t2399 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13080_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13081_MI;
 t25 * m13081 (t2399 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13081_MI);
	{
		int32_t L_0 = m13084(__this, &m13084_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t342_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13082_MI;
 void m13082 (t2399 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13082_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13083_MI;
 bool m13083 (t2399 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13083_MI);
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
extern MethodInfo m13084_MI;
 int32_t m13084 (t2399 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13084_MI);
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
		int32_t L_8 = m20509(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20509_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/EditState>
extern Il2CppType t122_0_0_1;
FieldInfo t2399_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2399_TI, offsetof(t2399, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2399_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2399_TI, offsetof(t2399, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2399_FIs[] =
{
	&t2399_f0_FieldInfo,
	&t2399_f1_FieldInfo,
	NULL
};
extern MethodInfo m13081_MI;
static PropertyInfo t2399____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2399_TI, "System.Collections.IEnumerator.Current", &m13081_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13084_MI;
static PropertyInfo t2399____Current_PropertyInfo = 
{
	&t2399_TI, "Current", &m13084_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2399_PIs[] =
{
	&t2399____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2399____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2399_m13080_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2399_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13080_MI = 
{
	".ctor", (methodPointerType)&m13080, &t2399_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2399_m13080_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2399_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13081_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13081, &t2399_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2399_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13082_MI = 
{
	"Dispose", (methodPointerType)&m13082, &t2399_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2399_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13083_MI = 
{
	"MoveNext", (methodPointerType)&m13083, &t2399_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2399_TI;
extern Il2CppType t342_0_0_0;
extern void* RuntimeInvoker_t342 (MethodInfo* method, void* obj, void** args);
MethodInfo m13084_MI = 
{
	"get_Current", (methodPointerType)&m13084, &t2399_TI, &t342_0_0_0, RuntimeInvoker_t342, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2399_MIs[] =
{
	&m13080_MI,
	&m13081_MI,
	&m13082_MI,
	&m13083_MI,
	&m13084_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13081_MI;
extern MethodInfo m13083_MI;
extern MethodInfo m13082_MI;
extern MethodInfo m13084_MI;
static MethodInfo* t2399_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13081_MI,
	&m13083_MI,
	&m13082_MI,
	&m13084_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3843_TI;
static TypeInfo* t2399_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3843_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3843_TI;
static Il2CppInterfaceOffsetPair t2399_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3843_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2399_0_0_0;
extern Il2CppType t2399_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2399_TI;
extern Il2CppGenericClass t2399_GC;
extern TypeInfo t122_TI;
TypeInfo t2399_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2399_MIs, t2399_PIs, t2399_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2399_TI, t2399_ITIs, t2399_VT, &EmptyCustomAttributesCache, &t2399_TI, &t2399_0_0_0, &t2399_1_0_0, t2399_IOs, &t2399_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2399)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4727_TI;

#include "UnityEngine.UI_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.InputField/EditState>
extern MethodInfo m27635_MI;
static PropertyInfo t4727____Count_PropertyInfo = 
{
	&t4727_TI, "Count", &m27635_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27636_MI;
static PropertyInfo t4727____IsReadOnly_PropertyInfo = 
{
	&t4727_TI, "IsReadOnly", &m27636_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4727_PIs[] =
{
	&t4727____Count_PropertyInfo,
	&t4727____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4727_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27635_MI = 
{
	"get_Count", NULL, &t4727_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4727_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27636_MI = 
{
	"get_IsReadOnly", NULL, &t4727_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t342_0_0_0;
static ParameterInfo t4727_m27637_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t4727_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27637_MI = 
{
	"Add", NULL, &t4727_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4727_m27637_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4727_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27638_MI = 
{
	"Clear", NULL, &t4727_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t342_0_0_0;
static ParameterInfo t4727_m27639_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t4727_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27639_MI = 
{
	"Contains", NULL, &t4727_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4727_m27639_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3612_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4727_m27640_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3612_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4727_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27640_MI = 
{
	"CopyTo", NULL, &t4727_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4727_m27640_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t342_0_0_0;
static ParameterInfo t4727_m27641_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t4727_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27641_MI = 
{
	"Remove", NULL, &t4727_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4727_m27641_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4727_MIs[] =
{
	&m27635_MI,
	&m27636_MI,
	&m27637_MI,
	&m27638_MI,
	&m27639_MI,
	&m27640_MI,
	&m27641_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4729_TI;
static TypeInfo* t4727_ITIs[] = 
{
	&t703_TI,
	&t4729_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4727_0_0_0;
extern Il2CppType t4727_1_0_0;
struct t4727;
extern TypeInfo t4727_TI;
extern Il2CppGenericClass t4727_GC;
TypeInfo t4727_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4727_MIs, t4727_PIs, NULL, NULL, NULL, NULL, NULL, &t4727_TI, t4727_ITIs, NULL, &EmptyCustomAttributesCache, &t4727_TI, &t4727_0_0_0, &t4727_1_0_0, NULL, &t4727_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4729_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.InputField/EditState>
extern TypeInfo t4729_TI;
extern Il2CppType t3843_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27642_MI = 
{
	"GetEnumerator", NULL, &t4729_TI, &t3843_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4729_MIs[] =
{
	&m27642_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4729_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4729_0_0_0;
extern Il2CppType t4729_1_0_0;
struct t4729;
extern TypeInfo t4729_TI;
extern Il2CppGenericClass t4729_GC;
TypeInfo t4729_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4729_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4729_TI, t4729_ITIs, NULL, &EmptyCustomAttributesCache, &t4729_TI, &t4729_0_0_0, &t4729_1_0_0, NULL, &t4729_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4728_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.InputField/EditState>
extern MethodInfo m27643_MI;
extern MethodInfo m27644_MI;
static PropertyInfo t4728____Item_PropertyInfo = 
{
	&t4728_TI, "Item", &m27643_MI, &m27644_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4728_PIs[] =
{
	&t4728____Item_PropertyInfo,
	NULL
};
extern Il2CppType t342_0_0_0;
static ParameterInfo t4728_m27645_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t4728_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27645_MI = 
{
	"IndexOf", NULL, &t4728_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t4728_m27645_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t342_0_0_0;
static ParameterInfo t4728_m27646_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t4728_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27646_MI = 
{
	"Insert", NULL, &t4728_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4728_m27646_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4728_m27647_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4728_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27647_MI = 
{
	"RemoveAt", NULL, &t4728_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4728_m27647_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4728_m27643_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4728_TI;
extern Il2CppType t342_0_0_0;
extern void* RuntimeInvoker_t342_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27643_MI = 
{
	"get_Item", NULL, &t4728_TI, &t342_0_0_0, RuntimeInvoker_t342_t134, t4728_m27643_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t342_0_0_0;
static ParameterInfo t4728_m27644_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t4728_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27644_MI = 
{
	"set_Item", NULL, &t4728_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4728_m27644_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4728_MIs[] =
{
	&m27645_MI,
	&m27646_MI,
	&m27647_MI,
	&m27643_MI,
	&m27644_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4727_TI;
extern TypeInfo t4729_TI;
static TypeInfo* t4728_ITIs[] = 
{
	&t703_TI,
	&t4727_TI,
	&t4729_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4728_0_0_0;
extern Il2CppType t4728_1_0_0;
struct t4728;
extern TypeInfo t4728_TI;
extern Il2CppGenericClass t4728_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4728_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4728_MIs, t4728_PIs, NULL, NULL, NULL, NULL, NULL, &t4728_TI, t4728_ITIs, NULL, &t1518__CustomAttributeCache, &t4728_TI, &t4728_0_0_0, &t4728_1_0_0, NULL, &t4728_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2400.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2400_TI;
#include "t2400MD.h"

#include "t60.h"
#include "t657.h"
#include "t332.h"
#include "mscorlib_ArrayTypes.h"
#include "t2401.h"
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t2400_TI;
extern TypeInfo t332_TI;
extern TypeInfo t2401_TI;
extern TypeInfo t123_TI;
#include "t2401MD.h"
extern MethodInfo m13087_MI;
extern MethodInfo m13089_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.MaskableGraphic>
extern Il2CppType t158_0_0_33;
FieldInfo t2400_f1_FieldInfo = 
{
	"m_Arg1", &t158_0_0_33, &t2400_TI, offsetof(t2400, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2400_FIs[] =
{
	&t2400_f1_FieldInfo,
	NULL
};
extern Il2CppType t60_0_0_0;
extern Il2CppType t657_0_0_0;
extern Il2CppType t332_0_0_0;
static ParameterInfo t2400_m13085_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t332_0_0_0},
};
extern TypeInfo t2400_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13085_MI = 
{
	".ctor", (methodPointerType)&m8415_gshared, &t2400_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t2400_m13085_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2400_m13086_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2400_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13086_MI = 
{
	"Invoke", (methodPointerType)&m8417_gshared, &t2400_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2400_m13086_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2400_MIs[] =
{
	&m13085_MI,
	&m13086_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13086_MI;
extern MethodInfo m13090_MI;
static MethodInfo* t2400_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13086_MI,
	&m13090_MI,
};
extern Il2CppType t2402_0_0_0;
extern TypeInfo t2402_TI;
extern MethodInfo m20519_MI;
extern TypeInfo t332_TI;
extern MethodInfo m13092_MI;
extern MethodInfo m13087_MI;
extern TypeInfo t332_TI;
extern MethodInfo m13089_MI;
static void* t2400_RGCTXData[8] = 
{
	(void*)&t2402_0_0_0,
	&t2402_TI,
	&m20519_MI,
	&t332_TI,
	&m13092_MI,
	&m13087_MI,
	&t332_TI,
	&m13089_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2400_0_0_0;
extern Il2CppType t2400_1_0_0;
extern TypeInfo t2401_TI;
struct t2400;
extern TypeInfo t2400_TI;
extern Il2CppGenericClass t2400_GC;
TypeInfo t2400_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2400_MIs, NULL, t2400_FIs, NULL, &t2401_TI, NULL, NULL, &t2400_TI, NULL, t2400_VT, &EmptyCustomAttributesCache, &t2400_TI, &t2400_0_0_0, &t2400_1_0_0, NULL, &t2400_GC, NULL, NULL, NULL, t2400_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2400), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2401_TI;

#include "t2402.h"
#include "t131.h"
#include "t132.h"
#include "t466.h"
#include "t445.h"
extern TypeInfo t2401_TI;
extern TypeInfo t2402_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t332_TI;
extern TypeInfo t123_TI;
#include "t656MD.h"
#include "t131MD.h"
#include "t466MD.h"
#include "t445MD.h"
#include "t2402MD.h"
extern Il2CppType t2402_0_0_0;
extern MethodInfo m3313_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m2105_MI;
extern MethodInfo m3312_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m20519_MI;
extern MethodInfo m3314_MI;
extern MethodInfo m13092_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
struct t656;
#include "t656.h"
struct t656;
 void m18087_gshared (t25 * __this, t25 * p0, MethodInfo* method);
#define m18087(__this, p0, method) (void)m18087_gshared((t25 *)__this, (t25 *)p0, method)
#define m20519(__this, p0, method) (void)m18087_gshared((t25 *)__this, (t25 *)p0, method)
extern MethodInfo m20519_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.MaskableGraphic>
extern Il2CppType t2402_0_0_1;
FieldInfo t2401_f0_FieldInfo = 
{
	"Delegate", &t2402_0_0_1, &t2401_TI, offsetof(t2401, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2401_FIs[] =
{
	&t2401_f0_FieldInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2401_m13087_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2401_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13087_MI = 
{
	".ctor", (methodPointerType)&m8418_gshared, &t2401_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t2401_m13087_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2402_0_0_0;
static ParameterInfo t2401_m13088_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2402_0_0_0},
};
extern TypeInfo t2401_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13088_MI = 
{
	".ctor", (methodPointerType)&m8419_gshared, &t2401_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2401_m13088_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2401_m13089_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2401_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13089_MI = 
{
	"Invoke", (methodPointerType)&m8420_gshared, &t2401_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2401_m13089_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2401_m13090_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2401_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13090_MI = 
{
	"Find", (methodPointerType)&m8421_gshared, &t2401_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2401_m13090_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2401_MIs[] =
{
	&m13087_MI,
	&m13088_MI,
	&m13089_MI,
	&m13090_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13089_MI;
extern MethodInfo m13090_MI;
static MethodInfo* t2401_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13089_MI,
	&m13090_MI,
};
extern Il2CppType t2402_0_0_0;
extern TypeInfo t2402_TI;
extern MethodInfo m20519_MI;
extern TypeInfo t332_TI;
extern MethodInfo m13092_MI;
static void* t2401_RGCTXData[5] = 
{
	(void*)&t2402_0_0_0,
	&t2402_TI,
	&m20519_MI,
	&t332_TI,
	&m13092_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2401_0_0_0;
extern Il2CppType t2401_1_0_0;
extern TypeInfo t656_TI;
struct t2401;
extern TypeInfo t2401_TI;
extern Il2CppGenericClass t2401_GC;
TypeInfo t2401_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2401_MIs, NULL, t2401_FIs, NULL, &t656_TI, NULL, NULL, &t2401_TI, NULL, t2401_VT, &EmptyCustomAttributesCache, &t2401_TI, &t2401_0_0_0, &t2401_1_0_0, NULL, &t2401_GC, NULL, NULL, NULL, t2401_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2401), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2402_TI;

#include "t61.h"
#include "t219.h"


// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.MaskableGraphic>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2402_m13091_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2402_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13091_MI = 
{
	".ctor", (methodPointerType)&m8422_gshared, &t2402_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2402_m13091_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t332_0_0_0;
static ParameterInfo t2402_m13092_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t332_0_0_0},
};
extern TypeInfo t2402_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13092_MI = 
{
	"Invoke", (methodPointerType)&m8423_gshared, &t2402_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2402_m13092_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t332_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2402_m13093_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t332_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2402_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13093_MI = 
{
	"BeginInvoke", (methodPointerType)&m8424_gshared, &t2402_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t2402_m13093_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2402_m13094_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2402_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13094_MI = 
{
	"EndInvoke", (methodPointerType)&m8425_gshared, &t2402_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2402_m13094_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2402_MIs[] =
{
	&m13091_MI,
	&m13092_MI,
	&m13093_MI,
	&m13094_MI,
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
extern MethodInfo m13092_MI;
extern MethodInfo m13093_MI;
extern MethodInfo m13094_MI;
static MethodInfo* t2402_VT[] =
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
	&m13092_MI,
	&m13093_MI,
	&m13094_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2402_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2402_0_0_0;
extern Il2CppType t2402_1_0_0;
extern TypeInfo t345_TI;
struct t2402;
extern TypeInfo t2402_TI;
extern Il2CppGenericClass t2402_GC;
TypeInfo t2402_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2402_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2402_TI, NULL, t2402_VT, &EmptyCustomAttributesCache, &t2402_TI, &t2402_0_0_0, &t2402_1_0_0, t2402_IOs, &t2402_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2402), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3844_TI;

#include "t358.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Navigation/Mode>
extern MethodInfo m27648_MI;
static PropertyInfo t3844____Current_PropertyInfo = 
{
	&t3844_TI, "Current", &m27648_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3844_PIs[] =
{
	&t3844____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3844_TI;
extern Il2CppType t358_0_0_0;
extern void* RuntimeInvoker_t358 (MethodInfo* method, void* obj, void** args);
MethodInfo m27648_MI = 
{
	"get_Current", NULL, &t3844_TI, &t358_0_0_0, RuntimeInvoker_t358, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3844_MIs[] =
{
	&m27648_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3844_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3844_0_0_0;
extern Il2CppType t3844_1_0_0;
struct t3844;
extern TypeInfo t3844_TI;
extern Il2CppGenericClass t3844_GC;
TypeInfo t3844_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3844_MIs, t3844_PIs, NULL, NULL, NULL, NULL, NULL, &t3844_TI, t3844_ITIs, NULL, &EmptyCustomAttributesCache, &t3844_TI, &t3844_0_0_0, &t3844_1_0_0, NULL, &t3844_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2403.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2403_TI;
#include "t2403MD.h"

extern TypeInfo t2403_TI;
extern TypeInfo t358_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13099_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20521_MI;
struct t122;
 int32_t m20521 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20521_MI;


extern MethodInfo m13095_MI;
 void m13095 (t2403 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13095_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13096_MI;
 t25 * m13096 (t2403 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13096_MI);
	{
		int32_t L_0 = m13099(__this, &m13099_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t358_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13097_MI;
 void m13097 (t2403 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13097_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13098_MI;
 bool m13098 (t2403 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13098_MI);
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
extern MethodInfo m13099_MI;
 int32_t m13099 (t2403 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13099_MI);
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
		int32_t L_8 = m20521(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20521_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>
extern Il2CppType t122_0_0_1;
FieldInfo t2403_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2403_TI, offsetof(t2403, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2403_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2403_TI, offsetof(t2403, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2403_FIs[] =
{
	&t2403_f0_FieldInfo,
	&t2403_f1_FieldInfo,
	NULL
};
extern MethodInfo m13096_MI;
static PropertyInfo t2403____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2403_TI, "System.Collections.IEnumerator.Current", &m13096_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13099_MI;
static PropertyInfo t2403____Current_PropertyInfo = 
{
	&t2403_TI, "Current", &m13099_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2403_PIs[] =
{
	&t2403____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2403____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2403_m13095_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2403_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13095_MI = 
{
	".ctor", (methodPointerType)&m13095, &t2403_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2403_m13095_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2403_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13096_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13096, &t2403_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2403_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13097_MI = 
{
	"Dispose", (methodPointerType)&m13097, &t2403_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2403_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13098_MI = 
{
	"MoveNext", (methodPointerType)&m13098, &t2403_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2403_TI;
extern Il2CppType t358_0_0_0;
extern void* RuntimeInvoker_t358 (MethodInfo* method, void* obj, void** args);
MethodInfo m13099_MI = 
{
	"get_Current", (methodPointerType)&m13099, &t2403_TI, &t358_0_0_0, RuntimeInvoker_t358, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2403_MIs[] =
{
	&m13095_MI,
	&m13096_MI,
	&m13097_MI,
	&m13098_MI,
	&m13099_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13096_MI;
extern MethodInfo m13098_MI;
extern MethodInfo m13097_MI;
extern MethodInfo m13099_MI;
static MethodInfo* t2403_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13096_MI,
	&m13098_MI,
	&m13097_MI,
	&m13099_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3844_TI;
static TypeInfo* t2403_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3844_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3844_TI;
static Il2CppInterfaceOffsetPair t2403_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3844_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2403_0_0_0;
extern Il2CppType t2403_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2403_TI;
extern Il2CppGenericClass t2403_GC;
extern TypeInfo t122_TI;
TypeInfo t2403_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2403_MIs, t2403_PIs, t2403_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2403_TI, t2403_ITIs, t2403_VT, &EmptyCustomAttributesCache, &t2403_TI, &t2403_0_0_0, &t2403_1_0_0, t2403_IOs, &t2403_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2403)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4730_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>
extern MethodInfo m27649_MI;
static PropertyInfo t4730____Count_PropertyInfo = 
{
	&t4730_TI, "Count", &m27649_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27650_MI;
static PropertyInfo t4730____IsReadOnly_PropertyInfo = 
{
	&t4730_TI, "IsReadOnly", &m27650_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4730_PIs[] =
{
	&t4730____Count_PropertyInfo,
	&t4730____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4730_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27649_MI = 
{
	"get_Count", NULL, &t4730_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4730_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27650_MI = 
{
	"get_IsReadOnly", NULL, &t4730_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t358_0_0_0;
static ParameterInfo t4730_m27651_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t358_0_0_0},
};
extern TypeInfo t4730_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27651_MI = 
{
	"Add", NULL, &t4730_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4730_m27651_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4730_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27652_MI = 
{
	"Clear", NULL, &t4730_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t358_0_0_0;
static ParameterInfo t4730_m27653_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t358_0_0_0},
};
extern TypeInfo t4730_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27653_MI = 
{
	"Contains", NULL, &t4730_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4730_m27653_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3613_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4730_m27654_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3613_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4730_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27654_MI = 
{
	"CopyTo", NULL, &t4730_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4730_m27654_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t358_0_0_0;
static ParameterInfo t4730_m27655_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t358_0_0_0},
};
extern TypeInfo t4730_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27655_MI = 
{
	"Remove", NULL, &t4730_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4730_m27655_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4730_MIs[] =
{
	&m27649_MI,
	&m27650_MI,
	&m27651_MI,
	&m27652_MI,
	&m27653_MI,
	&m27654_MI,
	&m27655_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4732_TI;
static TypeInfo* t4730_ITIs[] = 
{
	&t703_TI,
	&t4732_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4730_0_0_0;
extern Il2CppType t4730_1_0_0;
struct t4730;
extern TypeInfo t4730_TI;
extern Il2CppGenericClass t4730_GC;
TypeInfo t4730_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4730_MIs, t4730_PIs, NULL, NULL, NULL, NULL, NULL, &t4730_TI, t4730_ITIs, NULL, &EmptyCustomAttributesCache, &t4730_TI, &t4730_0_0_0, &t4730_1_0_0, NULL, &t4730_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4732_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Navigation/Mode>
extern TypeInfo t4732_TI;
extern Il2CppType t3844_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27656_MI = 
{
	"GetEnumerator", NULL, &t4732_TI, &t3844_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4732_MIs[] =
{
	&m27656_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4732_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4732_0_0_0;
extern Il2CppType t4732_1_0_0;
struct t4732;
extern TypeInfo t4732_TI;
extern Il2CppGenericClass t4732_GC;
TypeInfo t4732_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4732_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4732_TI, t4732_ITIs, NULL, &EmptyCustomAttributesCache, &t4732_TI, &t4732_0_0_0, &t4732_1_0_0, NULL, &t4732_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4731_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>
extern MethodInfo m27657_MI;
extern MethodInfo m27658_MI;
static PropertyInfo t4731____Item_PropertyInfo = 
{
	&t4731_TI, "Item", &m27657_MI, &m27658_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4731_PIs[] =
{
	&t4731____Item_PropertyInfo,
	NULL
};
extern Il2CppType t358_0_0_0;
static ParameterInfo t4731_m27659_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t358_0_0_0},
};
extern TypeInfo t4731_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27659_MI = 
{
	"IndexOf", NULL, &t4731_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t4731_m27659_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t358_0_0_0;
static ParameterInfo t4731_m27660_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t358_0_0_0},
};
extern TypeInfo t4731_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27660_MI = 
{
	"Insert", NULL, &t4731_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4731_m27660_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4731_m27661_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4731_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27661_MI = 
{
	"RemoveAt", NULL, &t4731_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4731_m27661_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4731_m27657_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4731_TI;
extern Il2CppType t358_0_0_0;
extern void* RuntimeInvoker_t358_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27657_MI = 
{
	"get_Item", NULL, &t4731_TI, &t358_0_0_0, RuntimeInvoker_t358_t134, t4731_m27657_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t358_0_0_0;
static ParameterInfo t4731_m27658_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t358_0_0_0},
};
extern TypeInfo t4731_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27658_MI = 
{
	"set_Item", NULL, &t4731_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4731_m27658_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4731_MIs[] =
{
	&m27659_MI,
	&m27660_MI,
	&m27661_MI,
	&m27657_MI,
	&m27658_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4730_TI;
extern TypeInfo t4732_TI;
static TypeInfo* t4731_ITIs[] = 
{
	&t703_TI,
	&t4730_TI,
	&t4732_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4731_0_0_0;
extern Il2CppType t4731_1_0_0;
struct t4731;
extern TypeInfo t4731_TI;
extern Il2CppGenericClass t4731_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4731_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4731_MIs, t4731_PIs, NULL, NULL, NULL, NULL, NULL, &t4731_TI, t4731_ITIs, NULL, &t1518__CustomAttributeCache, &t4731_TI, &t4731_0_0_0, &t4731_1_0_0, NULL, &t4731_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3845_TI;

#include "t360.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.RawImage>
extern MethodInfo m27662_MI;
static PropertyInfo t3845____Current_PropertyInfo = 
{
	&t3845_TI, "Current", &m27662_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3845_PIs[] =
{
	&t3845____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3845_TI;
extern Il2CppType t360_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27662_MI = 
{
	"get_Current", NULL, &t3845_TI, &t360_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3845_MIs[] =
{
	&m27662_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3845_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3845_0_0_0;
extern Il2CppType t3845_1_0_0;
struct t3845;
extern TypeInfo t3845_TI;
extern Il2CppGenericClass t3845_GC;
TypeInfo t3845_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3845_MIs, t3845_PIs, NULL, NULL, NULL, NULL, NULL, &t3845_TI, t3845_ITIs, NULL, &EmptyCustomAttributesCache, &t3845_TI, &t3845_0_0_0, &t3845_1_0_0, NULL, &t3845_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2404.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2404_TI;
#include "t2404MD.h"

extern TypeInfo t2404_TI;
extern TypeInfo t360_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13104_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20532_MI;
struct t122;
struct t122;
 t25 * m18022_gshared (t122 * __this, int32_t p0, MethodInfo* method);
#define m18022(__this, p0, method) (t25 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
#define m20532(__this, p0, method) (t360 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m20532_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>
extern Il2CppType t122_0_0_1;
FieldInfo t2404_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2404_TI, offsetof(t2404, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2404_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2404_TI, offsetof(t2404, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2404_FIs[] =
{
	&t2404_f0_FieldInfo,
	&t2404_f1_FieldInfo,
	NULL
};
extern MethodInfo m13101_MI;
static PropertyInfo t2404____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2404_TI, "System.Collections.IEnumerator.Current", &m13101_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13104_MI;
static PropertyInfo t2404____Current_PropertyInfo = 
{
	&t2404_TI, "Current", &m13104_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2404_PIs[] =
{
	&t2404____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2404____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2404_m13100_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2404_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13100_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t2404_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2404_m13100_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2404_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13101_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t2404_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2404_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13102_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t2404_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2404_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13103_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t2404_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2404_TI;
extern Il2CppType t360_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13104_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t2404_TI, &t360_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2404_MIs[] =
{
	&m13100_MI,
	&m13101_MI,
	&m13102_MI,
	&m13103_MI,
	&m13104_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13101_MI;
extern MethodInfo m13103_MI;
extern MethodInfo m13102_MI;
extern MethodInfo m13104_MI;
static MethodInfo* t2404_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13101_MI,
	&m13103_MI,
	&m13102_MI,
	&m13104_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3845_TI;
static TypeInfo* t2404_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3845_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3845_TI;
static Il2CppInterfaceOffsetPair t2404_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3845_TI, 7},
};
extern MethodInfo m13104_MI;
extern TypeInfo t360_TI;
extern MethodInfo m20532_MI;
static void* t2404_RGCTXData[3] = 
{
	&m13104_MI,
	&t360_TI,
	&m20532_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2404_0_0_0;
extern Il2CppType t2404_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2404_TI;
extern Il2CppGenericClass t2404_GC;
extern TypeInfo t122_TI;
TypeInfo t2404_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2404_MIs, t2404_PIs, t2404_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2404_TI, t2404_ITIs, t2404_VT, &EmptyCustomAttributesCache, &t2404_TI, &t2404_0_0_0, &t2404_1_0_0, t2404_IOs, &t2404_GC, NULL, NULL, NULL, t2404_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2404)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4733_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>
extern MethodInfo m27663_MI;
static PropertyInfo t4733____Count_PropertyInfo = 
{
	&t4733_TI, "Count", &m27663_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27664_MI;
static PropertyInfo t4733____IsReadOnly_PropertyInfo = 
{
	&t4733_TI, "IsReadOnly", &m27664_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4733_PIs[] =
{
	&t4733____Count_PropertyInfo,
	&t4733____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4733_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27663_MI = 
{
	"get_Count", NULL, &t4733_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4733_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27664_MI = 
{
	"get_IsReadOnly", NULL, &t4733_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t360_0_0_0;
static ParameterInfo t4733_m27665_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t360_0_0_0},
};
extern TypeInfo t4733_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27665_MI = 
{
	"Add", NULL, &t4733_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t4733_m27665_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4733_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27666_MI = 
{
	"Clear", NULL, &t4733_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t360_0_0_0;
static ParameterInfo t4733_m27667_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t360_0_0_0},
};
extern TypeInfo t4733_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27667_MI = 
{
	"Contains", NULL, &t4733_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4733_m27667_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3614_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4733_m27668_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3614_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4733_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27668_MI = 
{
	"CopyTo", NULL, &t4733_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4733_m27668_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t360_0_0_0;
static ParameterInfo t4733_m27669_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t360_0_0_0},
};
extern TypeInfo t4733_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27669_MI = 
{
	"Remove", NULL, &t4733_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4733_m27669_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4733_MIs[] =
{
	&m27663_MI,
	&m27664_MI,
	&m27665_MI,
	&m27666_MI,
	&m27667_MI,
	&m27668_MI,
	&m27669_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4735_TI;
static TypeInfo* t4733_ITIs[] = 
{
	&t703_TI,
	&t4735_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4733_0_0_0;
extern Il2CppType t4733_1_0_0;
struct t4733;
extern TypeInfo t4733_TI;
extern Il2CppGenericClass t4733_GC;
TypeInfo t4733_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4733_MIs, t4733_PIs, NULL, NULL, NULL, NULL, NULL, &t4733_TI, t4733_ITIs, NULL, &EmptyCustomAttributesCache, &t4733_TI, &t4733_0_0_0, &t4733_1_0_0, NULL, &t4733_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4735_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.RawImage>
extern TypeInfo t4735_TI;
extern Il2CppType t3845_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27670_MI = 
{
	"GetEnumerator", NULL, &t4735_TI, &t3845_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4735_MIs[] =
{
	&m27670_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4735_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4735_0_0_0;
extern Il2CppType t4735_1_0_0;
struct t4735;
extern TypeInfo t4735_TI;
extern Il2CppGenericClass t4735_GC;
TypeInfo t4735_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4735_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4735_TI, t4735_ITIs, NULL, &EmptyCustomAttributesCache, &t4735_TI, &t4735_0_0_0, &t4735_1_0_0, NULL, &t4735_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4734_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>
extern MethodInfo m27671_MI;
extern MethodInfo m27672_MI;
static PropertyInfo t4734____Item_PropertyInfo = 
{
	&t4734_TI, "Item", &m27671_MI, &m27672_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4734_PIs[] =
{
	&t4734____Item_PropertyInfo,
	NULL
};
extern Il2CppType t360_0_0_0;
static ParameterInfo t4734_m27673_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t360_0_0_0},
};
extern TypeInfo t4734_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27673_MI = 
{
	"IndexOf", NULL, &t4734_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t4734_m27673_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t360_0_0_0;
static ParameterInfo t4734_m27674_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t360_0_0_0},
};
extern TypeInfo t4734_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27674_MI = 
{
	"Insert", NULL, &t4734_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4734_m27674_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4734_m27675_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4734_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27675_MI = 
{
	"RemoveAt", NULL, &t4734_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4734_m27675_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4734_m27671_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4734_TI;
extern Il2CppType t360_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27671_MI = 
{
	"get_Item", NULL, &t4734_TI, &t360_0_0_0, RuntimeInvoker_t25_t134, t4734_m27671_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t360_0_0_0;
static ParameterInfo t4734_m27672_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t360_0_0_0},
};
extern TypeInfo t4734_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27672_MI = 
{
	"set_Item", NULL, &t4734_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4734_m27672_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4734_MIs[] =
{
	&m27673_MI,
	&m27674_MI,
	&m27675_MI,
	&m27671_MI,
	&m27672_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4733_TI;
extern TypeInfo t4735_TI;
static TypeInfo* t4734_ITIs[] = 
{
	&t703_TI,
	&t4733_TI,
	&t4735_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4734_0_0_0;
extern Il2CppType t4734_1_0_0;
struct t4734;
extern TypeInfo t4734_TI;
extern Il2CppGenericClass t4734_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4734_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4734_MIs, t4734_PIs, NULL, NULL, NULL, NULL, NULL, &t4734_TI, t4734_ITIs, NULL, &t1518__CustomAttributeCache, &t4734_TI, &t4734_0_0_0, &t4734_1_0_0, NULL, &t4734_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2405.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2405_TI;
#include "t2405MD.h"

#include "t2406.h"
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t2405_TI;
extern TypeInfo t360_TI;
extern TypeInfo t2406_TI;
extern TypeInfo t123_TI;
#include "t2406MD.h"
extern MethodInfo m13107_MI;
extern MethodInfo m13109_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.RawImage>
extern Il2CppType t158_0_0_33;
FieldInfo t2405_f1_FieldInfo = 
{
	"m_Arg1", &t158_0_0_33, &t2405_TI, offsetof(t2405, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2405_FIs[] =
{
	&t2405_f1_FieldInfo,
	NULL
};
extern Il2CppType t60_0_0_0;
extern Il2CppType t657_0_0_0;
extern Il2CppType t360_0_0_0;
static ParameterInfo t2405_m13105_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t360_0_0_0},
};
extern TypeInfo t2405_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13105_MI = 
{
	".ctor", (methodPointerType)&m8415_gshared, &t2405_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t2405_m13105_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2405_m13106_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2405_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13106_MI = 
{
	"Invoke", (methodPointerType)&m8417_gshared, &t2405_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2405_m13106_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2405_MIs[] =
{
	&m13105_MI,
	&m13106_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13106_MI;
extern MethodInfo m13110_MI;
static MethodInfo* t2405_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13106_MI,
	&m13110_MI,
};
extern Il2CppType t2407_0_0_0;
extern TypeInfo t2407_TI;
extern MethodInfo m20542_MI;
extern TypeInfo t360_TI;
extern MethodInfo m13112_MI;
extern MethodInfo m13107_MI;
extern TypeInfo t360_TI;
extern MethodInfo m13109_MI;
static void* t2405_RGCTXData[8] = 
{
	(void*)&t2407_0_0_0,
	&t2407_TI,
	&m20542_MI,
	&t360_TI,
	&m13112_MI,
	&m13107_MI,
	&t360_TI,
	&m13109_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2405_0_0_0;
extern Il2CppType t2405_1_0_0;
extern TypeInfo t2406_TI;
struct t2405;
extern TypeInfo t2405_TI;
extern Il2CppGenericClass t2405_GC;
TypeInfo t2405_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2405_MIs, NULL, t2405_FIs, NULL, &t2406_TI, NULL, NULL, &t2405_TI, NULL, t2405_VT, &EmptyCustomAttributesCache, &t2405_TI, &t2405_0_0_0, &t2405_1_0_0, NULL, &t2405_GC, NULL, NULL, NULL, t2405_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2405), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2406_TI;

#include "t2407.h"
extern TypeInfo t2406_TI;
extern TypeInfo t2407_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t360_TI;
extern TypeInfo t123_TI;
#include "t2407MD.h"
extern Il2CppType t2407_0_0_0;
extern MethodInfo m3313_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m2105_MI;
extern MethodInfo m3312_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m20542_MI;
extern MethodInfo m3314_MI;
extern MethodInfo m13112_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
struct t656;
#define m20542(__this, p0, method) (void)m18087_gshared((t25 *)__this, (t25 *)p0, method)
extern MethodInfo m20542_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>
extern Il2CppType t2407_0_0_1;
FieldInfo t2406_f0_FieldInfo = 
{
	"Delegate", &t2407_0_0_1, &t2406_TI, offsetof(t2406, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2406_FIs[] =
{
	&t2406_f0_FieldInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2406_m13107_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2406_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13107_MI = 
{
	".ctor", (methodPointerType)&m8418_gshared, &t2406_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t2406_m13107_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2407_0_0_0;
static ParameterInfo t2406_m13108_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2407_0_0_0},
};
extern TypeInfo t2406_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13108_MI = 
{
	".ctor", (methodPointerType)&m8419_gshared, &t2406_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2406_m13108_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2406_m13109_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2406_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13109_MI = 
{
	"Invoke", (methodPointerType)&m8420_gshared, &t2406_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2406_m13109_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2406_m13110_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2406_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13110_MI = 
{
	"Find", (methodPointerType)&m8421_gshared, &t2406_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2406_m13110_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2406_MIs[] =
{
	&m13107_MI,
	&m13108_MI,
	&m13109_MI,
	&m13110_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13109_MI;
extern MethodInfo m13110_MI;
static MethodInfo* t2406_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13109_MI,
	&m13110_MI,
};
extern Il2CppType t2407_0_0_0;
extern TypeInfo t2407_TI;
extern MethodInfo m20542_MI;
extern TypeInfo t360_TI;
extern MethodInfo m13112_MI;
static void* t2406_RGCTXData[5] = 
{
	(void*)&t2407_0_0_0,
	&t2407_TI,
	&m20542_MI,
	&t360_TI,
	&m13112_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2406_0_0_0;
extern Il2CppType t2406_1_0_0;
extern TypeInfo t656_TI;
struct t2406;
extern TypeInfo t2406_TI;
extern Il2CppGenericClass t2406_GC;
TypeInfo t2406_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2406_MIs, NULL, t2406_FIs, NULL, &t656_TI, NULL, NULL, &t2406_TI, NULL, t2406_VT, &EmptyCustomAttributesCache, &t2406_TI, &t2406_0_0_0, &t2406_1_0_0, NULL, &t2406_GC, NULL, NULL, NULL, t2406_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2406), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2407_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.RawImage>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2407_m13111_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2407_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13111_MI = 
{
	".ctor", (methodPointerType)&m8422_gshared, &t2407_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2407_m13111_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t360_0_0_0;
static ParameterInfo t2407_m13112_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t360_0_0_0},
};
extern TypeInfo t2407_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13112_MI = 
{
	"Invoke", (methodPointerType)&m8423_gshared, &t2407_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2407_m13112_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t360_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2407_m13113_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t360_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2407_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13113_MI = 
{
	"BeginInvoke", (methodPointerType)&m8424_gshared, &t2407_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t2407_m13113_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2407_m13114_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2407_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13114_MI = 
{
	"EndInvoke", (methodPointerType)&m8425_gshared, &t2407_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2407_m13114_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2407_MIs[] =
{
	&m13111_MI,
	&m13112_MI,
	&m13113_MI,
	&m13114_MI,
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
extern MethodInfo m13112_MI;
extern MethodInfo m13113_MI;
extern MethodInfo m13114_MI;
static MethodInfo* t2407_VT[] =
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
	&m13112_MI,
	&m13113_MI,
	&m13114_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2407_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2407_0_0_0;
extern Il2CppType t2407_1_0_0;
extern TypeInfo t345_TI;
struct t2407;
extern TypeInfo t2407_TI;
extern Il2CppGenericClass t2407_GC;
TypeInfo t2407_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2407_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2407_TI, NULL, t2407_VT, &EmptyCustomAttributesCache, &t2407_TI, &t2407_0_0_0, &t2407_1_0_0, t2407_IOs, &t2407_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2407), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3846_TI;

#include "t366.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Scrollbar>
extern MethodInfo m27676_MI;
static PropertyInfo t3846____Current_PropertyInfo = 
{
	&t3846_TI, "Current", &m27676_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3846_PIs[] =
{
	&t3846____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3846_TI;
extern Il2CppType t366_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27676_MI = 
{
	"get_Current", NULL, &t3846_TI, &t366_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3846_MIs[] =
{
	&m27676_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3846_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3846_0_0_0;
extern Il2CppType t3846_1_0_0;
struct t3846;
extern TypeInfo t3846_TI;
extern Il2CppGenericClass t3846_GC;
TypeInfo t3846_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3846_MIs, t3846_PIs, NULL, NULL, NULL, NULL, NULL, &t3846_TI, t3846_ITIs, NULL, &EmptyCustomAttributesCache, &t3846_TI, &t3846_0_0_0, &t3846_1_0_0, NULL, &t3846_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2408.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2408_TI;
#include "t2408MD.h"

extern TypeInfo t2408_TI;
extern TypeInfo t366_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13119_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20544_MI;
struct t122;
#define m20544(__this, p0, method) (t366 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m20544_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Scrollbar>
extern Il2CppType t122_0_0_1;
FieldInfo t2408_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2408_TI, offsetof(t2408, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2408_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2408_TI, offsetof(t2408, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2408_FIs[] =
{
	&t2408_f0_FieldInfo,
	&t2408_f1_FieldInfo,
	NULL
};
extern MethodInfo m13116_MI;
static PropertyInfo t2408____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2408_TI, "System.Collections.IEnumerator.Current", &m13116_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13119_MI;
static PropertyInfo t2408____Current_PropertyInfo = 
{
	&t2408_TI, "Current", &m13119_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2408_PIs[] =
{
	&t2408____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2408____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2408_m13115_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2408_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13115_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t2408_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2408_m13115_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2408_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13116_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t2408_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2408_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13117_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t2408_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2408_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13118_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t2408_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2408_TI;
extern Il2CppType t366_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13119_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t2408_TI, &t366_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2408_MIs[] =
{
	&m13115_MI,
	&m13116_MI,
	&m13117_MI,
	&m13118_MI,
	&m13119_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13116_MI;
extern MethodInfo m13118_MI;
extern MethodInfo m13117_MI;
extern MethodInfo m13119_MI;
static MethodInfo* t2408_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13116_MI,
	&m13118_MI,
	&m13117_MI,
	&m13119_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3846_TI;
static TypeInfo* t2408_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3846_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3846_TI;
static Il2CppInterfaceOffsetPair t2408_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3846_TI, 7},
};
extern MethodInfo m13119_MI;
extern TypeInfo t366_TI;
extern MethodInfo m20544_MI;
static void* t2408_RGCTXData[3] = 
{
	&m13119_MI,
	&t366_TI,
	&m20544_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2408_0_0_0;
extern Il2CppType t2408_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2408_TI;
extern Il2CppGenericClass t2408_GC;
extern TypeInfo t122_TI;
TypeInfo t2408_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2408_MIs, t2408_PIs, t2408_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2408_TI, t2408_ITIs, t2408_VT, &EmptyCustomAttributesCache, &t2408_TI, &t2408_0_0_0, &t2408_1_0_0, t2408_IOs, &t2408_GC, NULL, NULL, NULL, t2408_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2408)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4736_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Scrollbar>
extern MethodInfo m27677_MI;
static PropertyInfo t4736____Count_PropertyInfo = 
{
	&t4736_TI, "Count", &m27677_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27678_MI;
static PropertyInfo t4736____IsReadOnly_PropertyInfo = 
{
	&t4736_TI, "IsReadOnly", &m27678_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4736_PIs[] =
{
	&t4736____Count_PropertyInfo,
	&t4736____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4736_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27677_MI = 
{
	"get_Count", NULL, &t4736_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4736_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27678_MI = 
{
	"get_IsReadOnly", NULL, &t4736_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t366_0_0_0;
static ParameterInfo t4736_m27679_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t4736_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27679_MI = 
{
	"Add", NULL, &t4736_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t4736_m27679_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4736_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27680_MI = 
{
	"Clear", NULL, &t4736_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t366_0_0_0;
static ParameterInfo t4736_m27681_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t4736_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27681_MI = 
{
	"Contains", NULL, &t4736_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4736_m27681_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3615_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4736_m27682_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3615_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4736_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27682_MI = 
{
	"CopyTo", NULL, &t4736_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4736_m27682_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t366_0_0_0;
static ParameterInfo t4736_m27683_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t4736_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27683_MI = 
{
	"Remove", NULL, &t4736_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4736_m27683_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4736_MIs[] =
{
	&m27677_MI,
	&m27678_MI,
	&m27679_MI,
	&m27680_MI,
	&m27681_MI,
	&m27682_MI,
	&m27683_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4738_TI;
static TypeInfo* t4736_ITIs[] = 
{
	&t703_TI,
	&t4738_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4736_0_0_0;
extern Il2CppType t4736_1_0_0;
struct t4736;
extern TypeInfo t4736_TI;
extern Il2CppGenericClass t4736_GC;
TypeInfo t4736_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4736_MIs, t4736_PIs, NULL, NULL, NULL, NULL, NULL, &t4736_TI, t4736_ITIs, NULL, &EmptyCustomAttributesCache, &t4736_TI, &t4736_0_0_0, &t4736_1_0_0, NULL, &t4736_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4738_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Scrollbar>
extern TypeInfo t4738_TI;
extern Il2CppType t3846_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27684_MI = 
{
	"GetEnumerator", NULL, &t4738_TI, &t3846_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4738_MIs[] =
{
	&m27684_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4738_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4738_0_0_0;
extern Il2CppType t4738_1_0_0;
struct t4738;
extern TypeInfo t4738_TI;
extern Il2CppGenericClass t4738_GC;
TypeInfo t4738_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4738_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4738_TI, t4738_ITIs, NULL, &EmptyCustomAttributesCache, &t4738_TI, &t4738_0_0_0, &t4738_1_0_0, NULL, &t4738_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4737_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Scrollbar>
extern MethodInfo m27685_MI;
extern MethodInfo m27686_MI;
static PropertyInfo t4737____Item_PropertyInfo = 
{
	&t4737_TI, "Item", &m27685_MI, &m27686_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4737_PIs[] =
{
	&t4737____Item_PropertyInfo,
	NULL
};
extern Il2CppType t366_0_0_0;
static ParameterInfo t4737_m27687_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t4737_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27687_MI = 
{
	"IndexOf", NULL, &t4737_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t4737_m27687_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t366_0_0_0;
static ParameterInfo t4737_m27688_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t4737_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27688_MI = 
{
	"Insert", NULL, &t4737_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4737_m27688_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4737_m27689_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4737_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27689_MI = 
{
	"RemoveAt", NULL, &t4737_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4737_m27689_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4737_m27685_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4737_TI;
extern Il2CppType t366_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27685_MI = 
{
	"get_Item", NULL, &t4737_TI, &t366_0_0_0, RuntimeInvoker_t25_t134, t4737_m27685_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t366_0_0_0;
static ParameterInfo t4737_m27686_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t4737_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27686_MI = 
{
	"set_Item", NULL, &t4737_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4737_m27686_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4737_MIs[] =
{
	&m27687_MI,
	&m27688_MI,
	&m27689_MI,
	&m27685_MI,
	&m27686_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4736_TI;
extern TypeInfo t4738_TI;
static TypeInfo* t4737_ITIs[] = 
{
	&t703_TI,
	&t4736_TI,
	&t4738_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4737_0_0_0;
extern Il2CppType t4737_1_0_0;
struct t4737;
extern TypeInfo t4737_TI;
extern Il2CppGenericClass t4737_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4737_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4737_MIs, t4737_PIs, NULL, NULL, NULL, NULL, NULL, &t4737_TI, t4737_ITIs, NULL, &t1518__CustomAttributeCache, &t4737_TI, &t4737_0_0_0, &t4737_1_0_0, NULL, &t4737_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2409.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2409_TI;
#include "t2409MD.h"

#include "t2410.h"
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t2409_TI;
extern TypeInfo t366_TI;
extern TypeInfo t2410_TI;
extern TypeInfo t123_TI;
#include "t2410MD.h"
extern MethodInfo m13122_MI;
extern MethodInfo m13124_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Scrollbar>
extern Il2CppType t158_0_0_33;
FieldInfo t2409_f1_FieldInfo = 
{
	"m_Arg1", &t158_0_0_33, &t2409_TI, offsetof(t2409, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2409_FIs[] =
{
	&t2409_f1_FieldInfo,
	NULL
};
extern Il2CppType t60_0_0_0;
extern Il2CppType t657_0_0_0;
extern Il2CppType t366_0_0_0;
static ParameterInfo t2409_m13120_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t2409_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13120_MI = 
{
	".ctor", (methodPointerType)&m8415_gshared, &t2409_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t2409_m13120_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2409_m13121_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2409_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13121_MI = 
{
	"Invoke", (methodPointerType)&m8417_gshared, &t2409_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2409_m13121_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2409_MIs[] =
{
	&m13120_MI,
	&m13121_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13121_MI;
extern MethodInfo m13125_MI;
static MethodInfo* t2409_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13121_MI,
	&m13125_MI,
};
extern Il2CppType t2411_0_0_0;
extern TypeInfo t2411_TI;
extern MethodInfo m20554_MI;
extern TypeInfo t366_TI;
extern MethodInfo m13127_MI;
extern MethodInfo m13122_MI;
extern TypeInfo t366_TI;
extern MethodInfo m13124_MI;
static void* t2409_RGCTXData[8] = 
{
	(void*)&t2411_0_0_0,
	&t2411_TI,
	&m20554_MI,
	&t366_TI,
	&m13127_MI,
	&m13122_MI,
	&t366_TI,
	&m13124_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2409_0_0_0;
extern Il2CppType t2409_1_0_0;
extern TypeInfo t2410_TI;
struct t2409;
extern TypeInfo t2409_TI;
extern Il2CppGenericClass t2409_GC;
TypeInfo t2409_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2409_MIs, NULL, t2409_FIs, NULL, &t2410_TI, NULL, NULL, &t2409_TI, NULL, t2409_VT, &EmptyCustomAttributesCache, &t2409_TI, &t2409_0_0_0, &t2409_1_0_0, NULL, &t2409_GC, NULL, NULL, NULL, t2409_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2409), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2410_TI;

#include "t2411.h"
extern TypeInfo t2410_TI;
extern TypeInfo t2411_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t366_TI;
extern TypeInfo t123_TI;
#include "t2411MD.h"
extern Il2CppType t2411_0_0_0;
extern MethodInfo m3313_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m2105_MI;
extern MethodInfo m3312_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m20554_MI;
extern MethodInfo m3314_MI;
extern MethodInfo m13127_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
struct t656;
#define m20554(__this, p0, method) (void)m18087_gshared((t25 *)__this, (t25 *)p0, method)
extern MethodInfo m20554_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Scrollbar>
extern Il2CppType t2411_0_0_1;
FieldInfo t2410_f0_FieldInfo = 
{
	"Delegate", &t2411_0_0_1, &t2410_TI, offsetof(t2410, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2410_FIs[] =
{
	&t2410_f0_FieldInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2410_m13122_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2410_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13122_MI = 
{
	".ctor", (methodPointerType)&m8418_gshared, &t2410_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t2410_m13122_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2411_0_0_0;
static ParameterInfo t2410_m13123_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2411_0_0_0},
};
extern TypeInfo t2410_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13123_MI = 
{
	".ctor", (methodPointerType)&m8419_gshared, &t2410_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2410_m13123_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2410_m13124_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2410_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13124_MI = 
{
	"Invoke", (methodPointerType)&m8420_gshared, &t2410_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2410_m13124_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2410_m13125_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2410_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13125_MI = 
{
	"Find", (methodPointerType)&m8421_gshared, &t2410_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2410_m13125_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2410_MIs[] =
{
	&m13122_MI,
	&m13123_MI,
	&m13124_MI,
	&m13125_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13124_MI;
extern MethodInfo m13125_MI;
static MethodInfo* t2410_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13124_MI,
	&m13125_MI,
};
extern Il2CppType t2411_0_0_0;
extern TypeInfo t2411_TI;
extern MethodInfo m20554_MI;
extern TypeInfo t366_TI;
extern MethodInfo m13127_MI;
static void* t2410_RGCTXData[5] = 
{
	(void*)&t2411_0_0_0,
	&t2411_TI,
	&m20554_MI,
	&t366_TI,
	&m13127_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2410_0_0_0;
extern Il2CppType t2410_1_0_0;
extern TypeInfo t656_TI;
struct t2410;
extern TypeInfo t2410_TI;
extern Il2CppGenericClass t2410_GC;
TypeInfo t2410_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2410_MIs, NULL, t2410_FIs, NULL, &t656_TI, NULL, NULL, &t2410_TI, NULL, t2410_VT, &EmptyCustomAttributesCache, &t2410_TI, &t2410_0_0_0, &t2410_1_0_0, NULL, &t2410_GC, NULL, NULL, NULL, t2410_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2410), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2411_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.Scrollbar>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2411_m13126_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2411_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13126_MI = 
{
	".ctor", (methodPointerType)&m8422_gshared, &t2411_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2411_m13126_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t366_0_0_0;
static ParameterInfo t2411_m13127_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t2411_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13127_MI = 
{
	"Invoke", (methodPointerType)&m8423_gshared, &t2411_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2411_m13127_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t366_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2411_m13128_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2411_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13128_MI = 
{
	"BeginInvoke", (methodPointerType)&m8424_gshared, &t2411_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t2411_m13128_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2411_m13129_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2411_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13129_MI = 
{
	"EndInvoke", (methodPointerType)&m8425_gshared, &t2411_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2411_m13129_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2411_MIs[] =
{
	&m13126_MI,
	&m13127_MI,
	&m13128_MI,
	&m13129_MI,
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
extern MethodInfo m13127_MI;
extern MethodInfo m13128_MI;
extern MethodInfo m13129_MI;
static MethodInfo* t2411_VT[] =
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
	&m13127_MI,
	&m13128_MI,
	&m13129_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2411_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2411_0_0_0;
extern Il2CppType t2411_1_0_0;
extern TypeInfo t345_TI;
struct t2411;
extern TypeInfo t2411_TI;
extern Il2CppGenericClass t2411_GC;
TypeInfo t2411_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2411_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2411_TI, NULL, t2411_VT, &EmptyCustomAttributesCache, &t2411_TI, &t2411_0_0_0, &t2411_1_0_0, t2411_IOs, &t2411_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2411), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t363.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t363_TI;
#include "t363MD.h"

#include "t503.h"
#include "t124.h"
#include "t2412.h"
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t363_TI;
extern TypeInfo t637_TI;
extern TypeInfo t131_TI;
extern TypeInfo t124_TI;
extern TypeInfo t2412_TI;
#include "t666MD.h"
#include "t2412MD.h"
extern Il2CppType t124_0_0_0;
extern MethodInfo m3334_MI;
extern MethodInfo m13130_MI;
extern MethodInfo m3339_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
extern MethodInfo m3340_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3342_MI;
extern MethodInfo m13134_MI;
extern MethodInfo m13135_MI;
extern MethodInfo m3341_MI;


extern MethodInfo m2308_MI;
 void m2308 (t363 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2308_MI);
	{
		__this->f4 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), 1));
		m3334(__this, &m3334_MI);
		return;
	}
}
extern MethodInfo m2327_MI;
 void m2327 (t363 * __this, t503 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2327_MI);
	{
		t656 * L_0 = m13130(NULL, p0, &m13130_MI);
		m3339(__this, L_0, &m3339_MI);
		return;
	}
}
extern MethodInfo m2326_MI;
 void m2326 (t363 * __this, t503 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2326_MI);
	{
		NullCheck(p0);
		t25 * L_0 = m3475(p0, &m3475_MI);
		NullCheck(p0);
		t657 * L_1 = m3473(p0, &m3473_MI);
		m3340(__this, L_0, L_1, &m3340_MI);
		return;
	}
}
extern MethodInfo m2309_MI;
 t657 * m2309 (t363 * __this, t27* p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2309_MI);
	{
		t637* L_0 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t124_0_0_0), &m484_MI);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((t131 **)(t131 **)SZArrayLdElema(L_0, 0)) = (t131 *)L_1;
		t657 * L_2 = m3342(NULL, p1, p0, L_0, &m3342_MI);
		return L_2;
	}
}
extern MethodInfo m2310_MI;
 t656 * m2310 (t363 * __this, t25 * p0, t657 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2310_MI);
	{
		t2412 * L_0 = (t2412 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2412_TI));
		m13134(L_0, p0, p1, &m13134_MI);
		return L_0;
	}
}
extern MethodInfo m13130_MI;
 t656 * m13130 (t25 * __this, t503 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13130_MI);
	{
		t2412 * L_0 = (t2412 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2412_TI));
		m13135(L_0, p0, &m13135_MI);
		return L_0;
	}
}
extern MethodInfo m2316_MI;
 void m2316 (t363 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2316_MI);
	{
		t158* L_0 = (__this->f4);
		float L_1 = p0;
		t25 * L_2 = Box(InitializedTypeInfo(&t124_TI), &L_1);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_2);
		*((t25 **)(t25 **)SZArrayLdElema(L_0, 0)) = (t25 *)L_2;
		t158* L_3 = (__this->f4);
		m3341(__this, L_3, &m3341_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Events.UnityEvent`1<System.Single>
extern Il2CppType t158_0_0_33;
FieldInfo t363_f4_FieldInfo = 
{
	"m_InvokeArray", &t158_0_0_33, &t363_TI, offsetof(t363, f4), &EmptyCustomAttributesCache};
static FieldInfo* t363_FIs[] =
{
	&t363_f4_FieldInfo,
	NULL
};
extern TypeInfo t363_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2308_MI = 
{
	".ctor", (methodPointerType)&m2308, &t363_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t503_0_0_0;
static ParameterInfo t363_m2327_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &t503_0_0_0},
};
extern TypeInfo t363_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2327_MI = 
{
	"AddListener", (methodPointerType)&m2327, &t363_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t363_m2327_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t503_0_0_0;
static ParameterInfo t363_m2326_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &t503_0_0_0},
};
extern TypeInfo t363_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2326_MI = 
{
	"RemoveListener", (methodPointerType)&m2326, &t363_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t363_m2326_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t363_m2309_ParameterInfos[] = 
{
	{"name", 0, 134217728, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"targetObj", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t363_TI;
extern Il2CppType t657_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2309_MI = 
{
	"FindMethod_Impl", (methodPointerType)&m2309, &t363_TI, &t657_0_0_0, RuntimeInvoker_t25_t25_t25, t363_m2309_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t363_m2310_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t363_TI;
extern Il2CppType t656_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2310_MI = 
{
	"GetDelegate", (methodPointerType)&m2310, &t363_TI, &t656_0_0_0, RuntimeInvoker_t25_t25_t25, t363_m2310_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t503_0_0_0;
static ParameterInfo t363_m13130_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t503_0_0_0},
};
extern TypeInfo t363_TI;
extern Il2CppType t656_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13130_MI = 
{
	"GetDelegate", (methodPointerType)&m13130, &t363_TI, &t656_0_0_0, RuntimeInvoker_t25_t25, t363_m13130_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t363_m2316_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t363_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m2316_MI = 
{
	"Invoke", (methodPointerType)&m2316, &t363_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t363_m2316_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t363_MIs[] =
{
	&m2308_MI,
	&m2327_MI,
	&m2326_MI,
	&m2309_MI,
	&m2310_MI,
	&m13130_MI,
	&m2316_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m1875_MI;
extern MethodInfo m1876_MI;
extern MethodInfo m1877_MI;
extern MethodInfo m2309_MI;
extern MethodInfo m2310_MI;
static MethodInfo* t363_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m1875_MI,
	&m1876_MI,
	&m1877_MI,
	&m2309_MI,
	&m2310_MI,
};
extern TypeInfo t441_TI;
static Il2CppInterfaceOffsetPair t363_IOs[] = 
{
	{ &t441_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t363_0_0_0;
extern Il2CppType t363_1_0_0;
extern TypeInfo t666_TI;
struct t363;
extern TypeInfo t363_TI;
extern Il2CppGenericClass t363_GC;
TypeInfo t363_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`1", "UnityEngine.Events", t363_MIs, NULL, t363_FIs, NULL, &t666_TI, NULL, NULL, &t363_TI, NULL, t363_VT, &EmptyCustomAttributesCache, &t363_TI, &t363_0_0_0, &t363_1_0_0, t363_IOs, &t363_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t363), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 0, 1, 0, 0, 8, 0, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t503_TI;
#include "t503MD.h"



extern MethodInfo m2325_MI;
 void m2325 (t503 * __this, t25 * p0, t61 p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2325_MI);
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m13131_MI;
 void m13131 (t503 * __this, float p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13131_MI);
	typedef  void (*FunctionPointerType) (t25 * __this, float p0, MethodInfo* method);
	if (__this->f9)
		m13131((t503 *)__this->f9,  p0, method);
	((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m13132_MI;
 t25 * m13132 (t503 * __this, float p0, t219 * p1, t25 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13132_MI);
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t124_TI), &p0);
	return (t25 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m13133_MI;
 void m13133 (t503 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13133_MI);
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition UnityEngine.Events.UnityAction`1<System.Single>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t503_m2325_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m2325_MI = 
{
	".ctor", (methodPointerType)&m2325, &t503_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t503_m2325_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t503_m13131_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m13131_MI = 
{
	"Invoke", (methodPointerType)&m13131, &t503_TI, &t123_0_0_0, RuntimeInvoker_t123_t124, t503_m13131_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t503_m13132_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t124_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13132_MI = 
{
	"BeginInvoke", (methodPointerType)&m13132, &t503_TI, &t218_0_0_0, RuntimeInvoker_t25_t124_t25_t25, t503_m13132_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t503_m13133_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t503_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13133_MI = 
{
	"EndInvoke", (methodPointerType)&m13133, &t503_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t503_m13133_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t503_MIs[] =
{
	&m2325_MI,
	&m13131_MI,
	&m13132_MI,
	&m13133_MI,
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
extern MethodInfo m13131_MI;
extern MethodInfo m13132_MI;
extern MethodInfo m13133_MI;
static MethodInfo* t503_VT[] =
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
	&m13131_MI,
	&m13132_MI,
	&m13133_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t503_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t503_0_0_0;
extern Il2CppType t503_1_0_0;
extern TypeInfo t345_TI;
struct t503;
extern TypeInfo t503_TI;
extern Il2CppGenericClass t503_GC;
TypeInfo t503_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t503_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t503_TI, NULL, t503_VT, &EmptyCustomAttributesCache, &t503_TI, &t503_0_0_0, &t503_1_0_0, t503_IOs, &t503_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t503), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2412_TI;

extern TypeInfo t2412_TI;
extern TypeInfo t503_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t124_TI;
extern TypeInfo t123_TI;
extern Il2CppType t503_0_0_0;
extern MethodInfo m3313_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m2105_MI;
extern MethodInfo m3312_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m20555_MI;
extern MethodInfo m3314_MI;
extern MethodInfo m13131_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
struct t656;
 void m20555 (t25 * __this, t25 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20555_MI;


extern MethodInfo m13134_MI;
 void m13134 (t2412 * __this, t25 * p0, t657 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13134_MI);
	{
		m3313(__this, p0, p1, &m3313_MI);
		t503 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t503_0_0_0), &m484_MI);
		t466 * L_2 = m3479(NULL, L_1, p0, p1, &m3479_MI);
		t466 * L_3 = m2105(NULL, L_0, ((t503 *)IsInst(L_2, InitializedTypeInfo(&t503_TI))), &m2105_MI);
		__this->f0 = ((t503 *)Castclass(L_3, InitializedTypeInfo(&t503_TI)));
		return;
	}
}
extern MethodInfo m13135_MI;
 void m13135 (t2412 * __this, t503 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13135_MI);
	{
		m3312(__this, &m3312_MI);
		t503 * L_0 = (__this->f0);
		t466 * L_1 = m2105(NULL, L_0, p0, &m2105_MI);
		__this->f0 = ((t503 *)Castclass(L_1, InitializedTypeInfo(&t503_TI)));
		return;
	}
}
extern MethodInfo m13136_MI;
 void m13136 (t2412 * __this, t158* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13136_MI);
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
		m20555(NULL, (*(t25 **)(t25 **)SZArrayLdElema(p0, 0)), &m20555_MI);
		t503 * L_1 = (__this->f0);
		bool L_2 = m3314(NULL, L_1, &m3314_MI);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		t503 * L_3 = (__this->f0);
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 0);
		NullCheck(L_3);
		VirtActionInvoker1< float >::Invoke(&m13131_MI, L_3, ((*(float*)((float*)UnBox ((*(t25 **)(t25 **)SZArrayLdElema(p0, 0)), InitializedTypeInfo(&t124_TI))))));
	}

IL_003f:
	{
		return;
	}
}
extern MethodInfo m13137_MI;
 bool m13137 (t2412 * __this, t25 * p0, t657 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13137_MI);
	int32_t G_B3_0 = 0;
	{
		t503 * L_0 = (__this->f0);
		NullCheck(L_0);
		t25 * L_1 = m3475(L_0, &m3475_MI);
		if ((((t25 *)L_1) != ((t25 *)p0)))
		{
			goto IL_0021;
		}
	}
	{
		t503 * L_2 = (__this->f0);
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
// Metadata Definition UnityEngine.Events.InvokableCall`1<System.Single>
extern Il2CppType t503_0_0_1;
FieldInfo t2412_f0_FieldInfo = 
{
	"Delegate", &t503_0_0_1, &t2412_TI, offsetof(t2412, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2412_FIs[] =
{
	&t2412_f0_FieldInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2412_m13134_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2412_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13134_MI = 
{
	".ctor", (methodPointerType)&m13134, &t2412_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t2412_m13134_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t503_0_0_0;
static ParameterInfo t2412_m13135_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t503_0_0_0},
};
extern TypeInfo t2412_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13135_MI = 
{
	".ctor", (methodPointerType)&m13135, &t2412_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2412_m13135_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2412_m13136_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2412_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13136_MI = 
{
	"Invoke", (methodPointerType)&m13136, &t2412_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2412_m13136_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2412_m13137_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2412_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13137_MI = 
{
	"Find", (methodPointerType)&m13137, &t2412_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2412_m13137_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2412_MIs[] =
{
	&m13134_MI,
	&m13135_MI,
	&m13136_MI,
	&m13137_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13136_MI;
extern MethodInfo m13137_MI;
static MethodInfo* t2412_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13136_MI,
	&m13137_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2412_0_0_0;
extern Il2CppType t2412_1_0_0;
extern TypeInfo t656_TI;
struct t2412;
extern TypeInfo t2412_TI;
extern Il2CppGenericClass t2412_GC;
TypeInfo t2412_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2412_MIs, NULL, t2412_FIs, NULL, &t656_TI, NULL, NULL, &t2412_TI, NULL, t2412_VT, &EmptyCustomAttributesCache, &t2412_TI, &t2412_0_0_0, &t2412_1_0_0, NULL, &t2412_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2412), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3847_TI;

#include "t361.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Scrollbar/Direction>
extern MethodInfo m27690_MI;
static PropertyInfo t3847____Current_PropertyInfo = 
{
	&t3847_TI, "Current", &m27690_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3847_PIs[] =
{
	&t3847____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3847_TI;
extern Il2CppType t361_0_0_0;
extern void* RuntimeInvoker_t361 (MethodInfo* method, void* obj, void** args);
MethodInfo m27690_MI = 
{
	"get_Current", NULL, &t3847_TI, &t361_0_0_0, RuntimeInvoker_t361, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3847_MIs[] =
{
	&m27690_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3847_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3847_0_0_0;
extern Il2CppType t3847_1_0_0;
struct t3847;
extern TypeInfo t3847_TI;
extern Il2CppGenericClass t3847_GC;
TypeInfo t3847_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3847_MIs, t3847_PIs, NULL, NULL, NULL, NULL, NULL, &t3847_TI, t3847_ITIs, NULL, &EmptyCustomAttributesCache, &t3847_TI, &t3847_0_0_0, &t3847_1_0_0, NULL, &t3847_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2413.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2413_TI;
#include "t2413MD.h"

extern TypeInfo t2413_TI;
extern TypeInfo t361_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13142_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20557_MI;
struct t122;
 int32_t m20557 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20557_MI;


extern MethodInfo m13138_MI;
 void m13138 (t2413 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13138_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13139_MI;
 t25 * m13139 (t2413 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13139_MI);
	{
		int32_t L_0 = m13142(__this, &m13142_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t361_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13140_MI;
 void m13140 (t2413 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13140_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13141_MI;
 bool m13141 (t2413 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13141_MI);
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
extern MethodInfo m13142_MI;
 int32_t m13142 (t2413 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13142_MI);
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
		int32_t L_8 = m20557(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20557_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Scrollbar/Direction>
extern Il2CppType t122_0_0_1;
FieldInfo t2413_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2413_TI, offsetof(t2413, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2413_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2413_TI, offsetof(t2413, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2413_FIs[] =
{
	&t2413_f0_FieldInfo,
	&t2413_f1_FieldInfo,
	NULL
};
extern MethodInfo m13139_MI;
static PropertyInfo t2413____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2413_TI, "System.Collections.IEnumerator.Current", &m13139_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13142_MI;
static PropertyInfo t2413____Current_PropertyInfo = 
{
	&t2413_TI, "Current", &m13142_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2413_PIs[] =
{
	&t2413____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2413____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2413_m13138_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2413_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13138_MI = 
{
	".ctor", (methodPointerType)&m13138, &t2413_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2413_m13138_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2413_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13139_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13139, &t2413_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2413_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13140_MI = 
{
	"Dispose", (methodPointerType)&m13140, &t2413_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2413_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13141_MI = 
{
	"MoveNext", (methodPointerType)&m13141, &t2413_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2413_TI;
extern Il2CppType t361_0_0_0;
extern void* RuntimeInvoker_t361 (MethodInfo* method, void* obj, void** args);
MethodInfo m13142_MI = 
{
	"get_Current", (methodPointerType)&m13142, &t2413_TI, &t361_0_0_0, RuntimeInvoker_t361, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2413_MIs[] =
{
	&m13138_MI,
	&m13139_MI,
	&m13140_MI,
	&m13141_MI,
	&m13142_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13139_MI;
extern MethodInfo m13141_MI;
extern MethodInfo m13140_MI;
extern MethodInfo m13142_MI;
static MethodInfo* t2413_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13139_MI,
	&m13141_MI,
	&m13140_MI,
	&m13142_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3847_TI;
static TypeInfo* t2413_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3847_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3847_TI;
static Il2CppInterfaceOffsetPair t2413_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3847_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2413_0_0_0;
extern Il2CppType t2413_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2413_TI;
extern Il2CppGenericClass t2413_GC;
extern TypeInfo t122_TI;
TypeInfo t2413_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2413_MIs, t2413_PIs, t2413_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2413_TI, t2413_ITIs, t2413_VT, &EmptyCustomAttributesCache, &t2413_TI, &t2413_0_0_0, &t2413_1_0_0, t2413_IOs, &t2413_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2413)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4739_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Scrollbar/Direction>
extern MethodInfo m27691_MI;
static PropertyInfo t4739____Count_PropertyInfo = 
{
	&t4739_TI, "Count", &m27691_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27692_MI;
static PropertyInfo t4739____IsReadOnly_PropertyInfo = 
{
	&t4739_TI, "IsReadOnly", &m27692_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4739_PIs[] =
{
	&t4739____Count_PropertyInfo,
	&t4739____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4739_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27691_MI = 
{
	"get_Count", NULL, &t4739_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4739_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27692_MI = 
{
	"get_IsReadOnly", NULL, &t4739_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t361_0_0_0;
static ParameterInfo t4739_m27693_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t361_0_0_0},
};
extern TypeInfo t4739_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27693_MI = 
{
	"Add", NULL, &t4739_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4739_m27693_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4739_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27694_MI = 
{
	"Clear", NULL, &t4739_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t361_0_0_0;
static ParameterInfo t4739_m27695_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t361_0_0_0},
};
extern TypeInfo t4739_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27695_MI = 
{
	"Contains", NULL, &t4739_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4739_m27695_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3616_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4739_m27696_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3616_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4739_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27696_MI = 
{
	"CopyTo", NULL, &t4739_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4739_m27696_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t361_0_0_0;
static ParameterInfo t4739_m27697_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t361_0_0_0},
};
extern TypeInfo t4739_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27697_MI = 
{
	"Remove", NULL, &t4739_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4739_m27697_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4739_MIs[] =
{
	&m27691_MI,
	&m27692_MI,
	&m27693_MI,
	&m27694_MI,
	&m27695_MI,
	&m27696_MI,
	&m27697_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4741_TI;
static TypeInfo* t4739_ITIs[] = 
{
	&t703_TI,
	&t4741_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4739_0_0_0;
extern Il2CppType t4739_1_0_0;
struct t4739;
extern TypeInfo t4739_TI;
extern Il2CppGenericClass t4739_GC;
TypeInfo t4739_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4739_MIs, t4739_PIs, NULL, NULL, NULL, NULL, NULL, &t4739_TI, t4739_ITIs, NULL, &EmptyCustomAttributesCache, &t4739_TI, &t4739_0_0_0, &t4739_1_0_0, NULL, &t4739_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4741_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Scrollbar/Direction>
extern TypeInfo t4741_TI;
extern Il2CppType t3847_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27698_MI = 
{
	"GetEnumerator", NULL, &t4741_TI, &t3847_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4741_MIs[] =
{
	&m27698_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4741_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4741_0_0_0;
extern Il2CppType t4741_1_0_0;
struct t4741;
extern TypeInfo t4741_TI;
extern Il2CppGenericClass t4741_GC;
TypeInfo t4741_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4741_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4741_TI, t4741_ITIs, NULL, &EmptyCustomAttributesCache, &t4741_TI, &t4741_0_0_0, &t4741_1_0_0, NULL, &t4741_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4740_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Scrollbar/Direction>
extern MethodInfo m27699_MI;
extern MethodInfo m27700_MI;
static PropertyInfo t4740____Item_PropertyInfo = 
{
	&t4740_TI, "Item", &m27699_MI, &m27700_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4740_PIs[] =
{
	&t4740____Item_PropertyInfo,
	NULL
};
extern Il2CppType t361_0_0_0;
static ParameterInfo t4740_m27701_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t361_0_0_0},
};
extern TypeInfo t4740_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27701_MI = 
{
	"IndexOf", NULL, &t4740_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t4740_m27701_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t361_0_0_0;
static ParameterInfo t4740_m27702_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t361_0_0_0},
};
extern TypeInfo t4740_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27702_MI = 
{
	"Insert", NULL, &t4740_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4740_m27702_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4740_m27703_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4740_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27703_MI = 
{
	"RemoveAt", NULL, &t4740_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4740_m27703_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4740_m27699_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4740_TI;
extern Il2CppType t361_0_0_0;
extern void* RuntimeInvoker_t361_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27699_MI = 
{
	"get_Item", NULL, &t4740_TI, &t361_0_0_0, RuntimeInvoker_t361_t134, t4740_m27699_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t361_0_0_0;
static ParameterInfo t4740_m27700_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t361_0_0_0},
};
extern TypeInfo t4740_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27700_MI = 
{
	"set_Item", NULL, &t4740_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4740_m27700_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4740_MIs[] =
{
	&m27701_MI,
	&m27702_MI,
	&m27703_MI,
	&m27699_MI,
	&m27700_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4739_TI;
extern TypeInfo t4741_TI;
static TypeInfo* t4740_ITIs[] = 
{
	&t703_TI,
	&t4739_TI,
	&t4741_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4740_0_0_0;
extern Il2CppType t4740_1_0_0;
struct t4740;
extern TypeInfo t4740_TI;
extern Il2CppGenericClass t4740_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4740_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4740_MIs, t4740_PIs, NULL, NULL, NULL, NULL, NULL, &t4740_TI, t4740_ITIs, NULL, &t1518__CustomAttributeCache, &t4740_TI, &t4740_0_0_0, &t4740_1_0_0, NULL, &t4740_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3848_TI;

#include "t364.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Scrollbar/Axis>
extern MethodInfo m27704_MI;
static PropertyInfo t3848____Current_PropertyInfo = 
{
	&t3848_TI, "Current", &m27704_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3848_PIs[] =
{
	&t3848____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3848_TI;
extern Il2CppType t364_0_0_0;
extern void* RuntimeInvoker_t364 (MethodInfo* method, void* obj, void** args);
MethodInfo m27704_MI = 
{
	"get_Current", NULL, &t3848_TI, &t364_0_0_0, RuntimeInvoker_t364, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3848_MIs[] =
{
	&m27704_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3848_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3848_0_0_0;
extern Il2CppType t3848_1_0_0;
struct t3848;
extern TypeInfo t3848_TI;
extern Il2CppGenericClass t3848_GC;
TypeInfo t3848_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3848_MIs, t3848_PIs, NULL, NULL, NULL, NULL, NULL, &t3848_TI, t3848_ITIs, NULL, &EmptyCustomAttributesCache, &t3848_TI, &t3848_0_0_0, &t3848_1_0_0, NULL, &t3848_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2414.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2414_TI;
#include "t2414MD.h"

extern TypeInfo t2414_TI;
extern TypeInfo t364_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13147_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20568_MI;
struct t122;
 int32_t m20568 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20568_MI;


extern MethodInfo m13143_MI;
 void m13143 (t2414 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13143_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13144_MI;
 t25 * m13144 (t2414 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13144_MI);
	{
		int32_t L_0 = m13147(__this, &m13147_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t364_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13145_MI;
 void m13145 (t2414 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13145_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13146_MI;
 bool m13146 (t2414 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13146_MI);
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
extern MethodInfo m13147_MI;
 int32_t m13147 (t2414 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13147_MI);
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
		int32_t L_8 = m20568(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20568_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Scrollbar/Axis>
extern Il2CppType t122_0_0_1;
FieldInfo t2414_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2414_TI, offsetof(t2414, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2414_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2414_TI, offsetof(t2414, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2414_FIs[] =
{
	&t2414_f0_FieldInfo,
	&t2414_f1_FieldInfo,
	NULL
};
extern MethodInfo m13144_MI;
static PropertyInfo t2414____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2414_TI, "System.Collections.IEnumerator.Current", &m13144_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13147_MI;
static PropertyInfo t2414____Current_PropertyInfo = 
{
	&t2414_TI, "Current", &m13147_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2414_PIs[] =
{
	&t2414____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2414____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2414_m13143_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2414_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13143_MI = 
{
	".ctor", (methodPointerType)&m13143, &t2414_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2414_m13143_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2414_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13144_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13144, &t2414_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2414_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13145_MI = 
{
	"Dispose", (methodPointerType)&m13145, &t2414_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2414_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13146_MI = 
{
	"MoveNext", (methodPointerType)&m13146, &t2414_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2414_TI;
extern Il2CppType t364_0_0_0;
extern void* RuntimeInvoker_t364 (MethodInfo* method, void* obj, void** args);
MethodInfo m13147_MI = 
{
	"get_Current", (methodPointerType)&m13147, &t2414_TI, &t364_0_0_0, RuntimeInvoker_t364, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2414_MIs[] =
{
	&m13143_MI,
	&m13144_MI,
	&m13145_MI,
	&m13146_MI,
	&m13147_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13144_MI;
extern MethodInfo m13146_MI;
extern MethodInfo m13145_MI;
extern MethodInfo m13147_MI;
static MethodInfo* t2414_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13144_MI,
	&m13146_MI,
	&m13145_MI,
	&m13147_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3848_TI;
static TypeInfo* t2414_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3848_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3848_TI;
static Il2CppInterfaceOffsetPair t2414_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3848_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2414_0_0_0;
extern Il2CppType t2414_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2414_TI;
extern Il2CppGenericClass t2414_GC;
extern TypeInfo t122_TI;
TypeInfo t2414_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2414_MIs, t2414_PIs, t2414_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2414_TI, t2414_ITIs, t2414_VT, &EmptyCustomAttributesCache, &t2414_TI, &t2414_0_0_0, &t2414_1_0_0, t2414_IOs, &t2414_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2414)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4742_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Scrollbar/Axis>
extern MethodInfo m27705_MI;
static PropertyInfo t4742____Count_PropertyInfo = 
{
	&t4742_TI, "Count", &m27705_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27706_MI;
static PropertyInfo t4742____IsReadOnly_PropertyInfo = 
{
	&t4742_TI, "IsReadOnly", &m27706_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4742_PIs[] =
{
	&t4742____Count_PropertyInfo,
	&t4742____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4742_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27705_MI = 
{
	"get_Count", NULL, &t4742_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4742_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27706_MI = 
{
	"get_IsReadOnly", NULL, &t4742_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t364_0_0_0;
static ParameterInfo t4742_m27707_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t364_0_0_0},
};
extern TypeInfo t4742_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27707_MI = 
{
	"Add", NULL, &t4742_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4742_m27707_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4742_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27708_MI = 
{
	"Clear", NULL, &t4742_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t364_0_0_0;
static ParameterInfo t4742_m27709_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t364_0_0_0},
};
extern TypeInfo t4742_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27709_MI = 
{
	"Contains", NULL, &t4742_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4742_m27709_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3617_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4742_m27710_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3617_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4742_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27710_MI = 
{
	"CopyTo", NULL, &t4742_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4742_m27710_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t364_0_0_0;
static ParameterInfo t4742_m27711_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t364_0_0_0},
};
extern TypeInfo t4742_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27711_MI = 
{
	"Remove", NULL, &t4742_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4742_m27711_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4742_MIs[] =
{
	&m27705_MI,
	&m27706_MI,
	&m27707_MI,
	&m27708_MI,
	&m27709_MI,
	&m27710_MI,
	&m27711_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4744_TI;
static TypeInfo* t4742_ITIs[] = 
{
	&t703_TI,
	&t4744_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4742_0_0_0;
extern Il2CppType t4742_1_0_0;
struct t4742;
extern TypeInfo t4742_TI;
extern Il2CppGenericClass t4742_GC;
TypeInfo t4742_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4742_MIs, t4742_PIs, NULL, NULL, NULL, NULL, NULL, &t4742_TI, t4742_ITIs, NULL, &EmptyCustomAttributesCache, &t4742_TI, &t4742_0_0_0, &t4742_1_0_0, NULL, &t4742_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4744_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Scrollbar/Axis>
extern TypeInfo t4744_TI;
extern Il2CppType t3848_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27712_MI = 
{
	"GetEnumerator", NULL, &t4744_TI, &t3848_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4744_MIs[] =
{
	&m27712_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4744_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4744_0_0_0;
extern Il2CppType t4744_1_0_0;
struct t4744;
extern TypeInfo t4744_TI;
extern Il2CppGenericClass t4744_GC;
TypeInfo t4744_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4744_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4744_TI, t4744_ITIs, NULL, &EmptyCustomAttributesCache, &t4744_TI, &t4744_0_0_0, &t4744_1_0_0, NULL, &t4744_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4743_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Scrollbar/Axis>
extern MethodInfo m27713_MI;
extern MethodInfo m27714_MI;
static PropertyInfo t4743____Item_PropertyInfo = 
{
	&t4743_TI, "Item", &m27713_MI, &m27714_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4743_PIs[] =
{
	&t4743____Item_PropertyInfo,
	NULL
};
extern Il2CppType t364_0_0_0;
static ParameterInfo t4743_m27715_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t364_0_0_0},
};
extern TypeInfo t4743_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27715_MI = 
{
	"IndexOf", NULL, &t4743_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t4743_m27715_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t364_0_0_0;
static ParameterInfo t4743_m27716_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t364_0_0_0},
};
extern TypeInfo t4743_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27716_MI = 
{
	"Insert", NULL, &t4743_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4743_m27716_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4743_m27717_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4743_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27717_MI = 
{
	"RemoveAt", NULL, &t4743_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4743_m27717_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4743_m27713_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4743_TI;
extern Il2CppType t364_0_0_0;
extern void* RuntimeInvoker_t364_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27713_MI = 
{
	"get_Item", NULL, &t4743_TI, &t364_0_0_0, RuntimeInvoker_t364_t134, t4743_m27713_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t364_0_0_0;
static ParameterInfo t4743_m27714_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t364_0_0_0},
};
extern TypeInfo t4743_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27714_MI = 
{
	"set_Item", NULL, &t4743_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4743_m27714_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4743_MIs[] =
{
	&m27715_MI,
	&m27716_MI,
	&m27717_MI,
	&m27713_MI,
	&m27714_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4742_TI;
extern TypeInfo t4744_TI;
static TypeInfo* t4743_ITIs[] = 
{
	&t703_TI,
	&t4742_TI,
	&t4744_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4743_0_0_0;
extern Il2CppType t4743_1_0_0;
struct t4743;
extern TypeInfo t4743_TI;
extern Il2CppGenericClass t4743_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4743_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4743_MIs, t4743_PIs, NULL, NULL, NULL, NULL, NULL, &t4743_TI, t4743_ITIs, NULL, &t1518__CustomAttributeCache, &t4743_TI, &t4743_0_0_0, &t4743_1_0_0, NULL, &t4743_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3849_TI;

#include "t371.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ScrollRect>
extern MethodInfo m27718_MI;
static PropertyInfo t3849____Current_PropertyInfo = 
{
	&t3849_TI, "Current", &m27718_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3849_PIs[] =
{
	&t3849____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3849_TI;
extern Il2CppType t371_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27718_MI = 
{
	"get_Current", NULL, &t3849_TI, &t371_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3849_MIs[] =
{
	&m27718_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3849_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3849_0_0_0;
extern Il2CppType t3849_1_0_0;
struct t3849;
extern TypeInfo t3849_TI;
extern Il2CppGenericClass t3849_GC;
TypeInfo t3849_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3849_MIs, t3849_PIs, NULL, NULL, NULL, NULL, NULL, &t3849_TI, t3849_ITIs, NULL, &EmptyCustomAttributesCache, &t3849_TI, &t3849_0_0_0, &t3849_1_0_0, NULL, &t3849_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2415.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2415_TI;
#include "t2415MD.h"

extern TypeInfo t2415_TI;
extern TypeInfo t371_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13152_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20579_MI;
struct t122;
#define m20579(__this, p0, method) (t371 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m20579_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.ScrollRect>
extern Il2CppType t122_0_0_1;
FieldInfo t2415_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2415_TI, offsetof(t2415, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2415_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2415_TI, offsetof(t2415, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2415_FIs[] =
{
	&t2415_f0_FieldInfo,
	&t2415_f1_FieldInfo,
	NULL
};
extern MethodInfo m13149_MI;
static PropertyInfo t2415____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2415_TI, "System.Collections.IEnumerator.Current", &m13149_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13152_MI;
static PropertyInfo t2415____Current_PropertyInfo = 
{
	&t2415_TI, "Current", &m13152_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2415_PIs[] =
{
	&t2415____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2415____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2415_m13148_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2415_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13148_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t2415_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2415_m13148_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2415_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13149_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t2415_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2415_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13150_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t2415_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2415_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13151_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t2415_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2415_TI;
extern Il2CppType t371_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13152_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t2415_TI, &t371_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2415_MIs[] =
{
	&m13148_MI,
	&m13149_MI,
	&m13150_MI,
	&m13151_MI,
	&m13152_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13149_MI;
extern MethodInfo m13151_MI;
extern MethodInfo m13150_MI;
extern MethodInfo m13152_MI;
static MethodInfo* t2415_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13149_MI,
	&m13151_MI,
	&m13150_MI,
	&m13152_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3849_TI;
static TypeInfo* t2415_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3849_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3849_TI;
static Il2CppInterfaceOffsetPair t2415_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3849_TI, 7},
};
extern MethodInfo m13152_MI;
extern TypeInfo t371_TI;
extern MethodInfo m20579_MI;
static void* t2415_RGCTXData[3] = 
{
	&m13152_MI,
	&t371_TI,
	&m20579_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2415_0_0_0;
extern Il2CppType t2415_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2415_TI;
extern Il2CppGenericClass t2415_GC;
extern TypeInfo t122_TI;
TypeInfo t2415_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2415_MIs, t2415_PIs, t2415_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2415_TI, t2415_ITIs, t2415_VT, &EmptyCustomAttributesCache, &t2415_TI, &t2415_0_0_0, &t2415_1_0_0, t2415_IOs, &t2415_GC, NULL, NULL, NULL, t2415_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2415)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4745_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.ScrollRect>
extern MethodInfo m27719_MI;
static PropertyInfo t4745____Count_PropertyInfo = 
{
	&t4745_TI, "Count", &m27719_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27720_MI;
static PropertyInfo t4745____IsReadOnly_PropertyInfo = 
{
	&t4745_TI, "IsReadOnly", &m27720_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4745_PIs[] =
{
	&t4745____Count_PropertyInfo,
	&t4745____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4745_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27719_MI = 
{
	"get_Count", NULL, &t4745_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4745_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27720_MI = 
{
	"get_IsReadOnly", NULL, &t4745_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t4745_m27721_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t4745_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27721_MI = 
{
	"Add", NULL, &t4745_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t4745_m27721_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4745_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27722_MI = 
{
	"Clear", NULL, &t4745_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t4745_m27723_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t4745_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27723_MI = 
{
	"Contains", NULL, &t4745_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4745_m27723_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3618_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4745_m27724_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3618_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4745_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27724_MI = 
{
	"CopyTo", NULL, &t4745_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4745_m27724_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t4745_m27725_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t4745_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27725_MI = 
{
	"Remove", NULL, &t4745_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4745_m27725_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4745_MIs[] =
{
	&m27719_MI,
	&m27720_MI,
	&m27721_MI,
	&m27722_MI,
	&m27723_MI,
	&m27724_MI,
	&m27725_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4747_TI;
static TypeInfo* t4745_ITIs[] = 
{
	&t703_TI,
	&t4747_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4745_0_0_0;
extern Il2CppType t4745_1_0_0;
struct t4745;
extern TypeInfo t4745_TI;
extern Il2CppGenericClass t4745_GC;
TypeInfo t4745_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4745_MIs, t4745_PIs, NULL, NULL, NULL, NULL, NULL, &t4745_TI, t4745_ITIs, NULL, &EmptyCustomAttributesCache, &t4745_TI, &t4745_0_0_0, &t4745_1_0_0, NULL, &t4745_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4747_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ScrollRect>
extern TypeInfo t4747_TI;
extern Il2CppType t3849_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27726_MI = 
{
	"GetEnumerator", NULL, &t4747_TI, &t3849_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4747_MIs[] =
{
	&m27726_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4747_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4747_0_0_0;
extern Il2CppType t4747_1_0_0;
struct t4747;
extern TypeInfo t4747_TI;
extern Il2CppGenericClass t4747_GC;
TypeInfo t4747_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4747_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4747_TI, t4747_ITIs, NULL, &EmptyCustomAttributesCache, &t4747_TI, &t4747_0_0_0, &t4747_1_0_0, NULL, &t4747_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4746_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.ScrollRect>
extern MethodInfo m27727_MI;
extern MethodInfo m27728_MI;
static PropertyInfo t4746____Item_PropertyInfo = 
{
	&t4746_TI, "Item", &m27727_MI, &m27728_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4746_PIs[] =
{
	&t4746____Item_PropertyInfo,
	NULL
};
extern Il2CppType t371_0_0_0;
static ParameterInfo t4746_m27729_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t4746_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27729_MI = 
{
	"IndexOf", NULL, &t4746_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t4746_m27729_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t4746_m27730_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t4746_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27730_MI = 
{
	"Insert", NULL, &t4746_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4746_m27730_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4746_m27731_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4746_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27731_MI = 
{
	"RemoveAt", NULL, &t4746_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4746_m27731_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4746_m27727_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4746_TI;
extern Il2CppType t371_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27727_MI = 
{
	"get_Item", NULL, &t4746_TI, &t371_0_0_0, RuntimeInvoker_t25_t134, t4746_m27727_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t4746_m27728_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t4746_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27728_MI = 
{
	"set_Item", NULL, &t4746_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4746_m27728_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4746_MIs[] =
{
	&m27729_MI,
	&m27730_MI,
	&m27731_MI,
	&m27727_MI,
	&m27728_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4745_TI;
extern TypeInfo t4747_TI;
static TypeInfo* t4746_ITIs[] = 
{
	&t703_TI,
	&t4745_TI,
	&t4747_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4746_0_0_0;
extern Il2CppType t4746_1_0_0;
struct t4746;
extern TypeInfo t4746_TI;
extern Il2CppGenericClass t4746_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4746_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4746_MIs, t4746_PIs, NULL, NULL, NULL, NULL, NULL, &t4746_TI, t4746_ITIs, NULL, &t1518__CustomAttributeCache, &t4746_TI, &t4746_0_0_0, &t4746_1_0_0, NULL, &t4746_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2416.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2416_TI;
#include "t2416MD.h"

#include "t2417.h"
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t2416_TI;
extern TypeInfo t371_TI;
extern TypeInfo t2417_TI;
extern TypeInfo t123_TI;
#include "t2417MD.h"
extern MethodInfo m13155_MI;
extern MethodInfo m13157_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.ScrollRect>
extern Il2CppType t158_0_0_33;
FieldInfo t2416_f1_FieldInfo = 
{
	"m_Arg1", &t158_0_0_33, &t2416_TI, offsetof(t2416, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2416_FIs[] =
{
	&t2416_f1_FieldInfo,
	NULL
};
extern Il2CppType t60_0_0_0;
extern Il2CppType t657_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t2416_m13153_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2416_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13153_MI = 
{
	".ctor", (methodPointerType)&m8415_gshared, &t2416_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t2416_m13153_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2416_m13154_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2416_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13154_MI = 
{
	"Invoke", (methodPointerType)&m8417_gshared, &t2416_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2416_m13154_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2416_MIs[] =
{
	&m13153_MI,
	&m13154_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13154_MI;
extern MethodInfo m13158_MI;
static MethodInfo* t2416_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13154_MI,
	&m13158_MI,
};
extern Il2CppType t2418_0_0_0;
extern TypeInfo t2418_TI;
extern MethodInfo m20589_MI;
extern TypeInfo t371_TI;
extern MethodInfo m13160_MI;
extern MethodInfo m13155_MI;
extern TypeInfo t371_TI;
extern MethodInfo m13157_MI;
static void* t2416_RGCTXData[8] = 
{
	(void*)&t2418_0_0_0,
	&t2418_TI,
	&m20589_MI,
	&t371_TI,
	&m13160_MI,
	&m13155_MI,
	&t371_TI,
	&m13157_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2416_0_0_0;
extern Il2CppType t2416_1_0_0;
extern TypeInfo t2417_TI;
struct t2416;
extern TypeInfo t2416_TI;
extern Il2CppGenericClass t2416_GC;
TypeInfo t2416_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2416_MIs, NULL, t2416_FIs, NULL, &t2417_TI, NULL, NULL, &t2416_TI, NULL, t2416_VT, &EmptyCustomAttributesCache, &t2416_TI, &t2416_0_0_0, &t2416_1_0_0, NULL, &t2416_GC, NULL, NULL, NULL, t2416_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2416), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2417_TI;

#include "t2418.h"
extern TypeInfo t2417_TI;
extern TypeInfo t2418_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t371_TI;
extern TypeInfo t123_TI;
#include "t2418MD.h"
extern Il2CppType t2418_0_0_0;
extern MethodInfo m3313_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m2105_MI;
extern MethodInfo m3312_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m20589_MI;
extern MethodInfo m3314_MI;
extern MethodInfo m13160_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
struct t656;
#define m20589(__this, p0, method) (void)m18087_gshared((t25 *)__this, (t25 *)p0, method)
extern MethodInfo m20589_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.ScrollRect>
extern Il2CppType t2418_0_0_1;
FieldInfo t2417_f0_FieldInfo = 
{
	"Delegate", &t2418_0_0_1, &t2417_TI, offsetof(t2417, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2417_FIs[] =
{
	&t2417_f0_FieldInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2417_m13155_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2417_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13155_MI = 
{
	".ctor", (methodPointerType)&m8418_gshared, &t2417_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t2417_m13155_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2418_0_0_0;
static ParameterInfo t2417_m13156_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2418_0_0_0},
};
extern TypeInfo t2417_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13156_MI = 
{
	".ctor", (methodPointerType)&m8419_gshared, &t2417_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2417_m13156_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2417_m13157_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2417_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13157_MI = 
{
	"Invoke", (methodPointerType)&m8420_gshared, &t2417_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2417_m13157_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2417_m13158_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2417_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13158_MI = 
{
	"Find", (methodPointerType)&m8421_gshared, &t2417_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2417_m13158_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2417_MIs[] =
{
	&m13155_MI,
	&m13156_MI,
	&m13157_MI,
	&m13158_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13157_MI;
extern MethodInfo m13158_MI;
static MethodInfo* t2417_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13157_MI,
	&m13158_MI,
};
extern Il2CppType t2418_0_0_0;
extern TypeInfo t2418_TI;
extern MethodInfo m20589_MI;
extern TypeInfo t371_TI;
extern MethodInfo m13160_MI;
static void* t2417_RGCTXData[5] = 
{
	(void*)&t2418_0_0_0,
	&t2418_TI,
	&m20589_MI,
	&t371_TI,
	&m13160_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2417_0_0_0;
extern Il2CppType t2417_1_0_0;
extern TypeInfo t656_TI;
struct t2417;
extern TypeInfo t2417_TI;
extern Il2CppGenericClass t2417_GC;
TypeInfo t2417_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2417_MIs, NULL, t2417_FIs, NULL, &t656_TI, NULL, NULL, &t2417_TI, NULL, t2417_VT, &EmptyCustomAttributesCache, &t2417_TI, &t2417_0_0_0, &t2417_1_0_0, NULL, &t2417_GC, NULL, NULL, NULL, t2417_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2417), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2418_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.ScrollRect>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2418_m13159_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2418_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13159_MI = 
{
	".ctor", (methodPointerType)&m8422_gshared, &t2418_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2418_m13159_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t2418_m13160_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2418_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13160_MI = 
{
	"Invoke", (methodPointerType)&m8423_gshared, &t2418_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2418_m13160_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2418_m13161_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2418_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13161_MI = 
{
	"BeginInvoke", (methodPointerType)&m8424_gshared, &t2418_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t2418_m13161_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2418_m13162_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2418_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13162_MI = 
{
	"EndInvoke", (methodPointerType)&m8425_gshared, &t2418_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2418_m13162_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2418_MIs[] =
{
	&m13159_MI,
	&m13160_MI,
	&m13161_MI,
	&m13162_MI,
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
extern MethodInfo m13160_MI;
extern MethodInfo m13161_MI;
extern MethodInfo m13162_MI;
static MethodInfo* t2418_VT[] =
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
	&m13160_MI,
	&m13161_MI,
	&m13162_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2418_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2418_0_0_0;
extern Il2CppType t2418_1_0_0;
extern TypeInfo t345_TI;
struct t2418;
extern TypeInfo t2418_TI;
extern Il2CppGenericClass t2418_GC;
TypeInfo t2418_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2418_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2418_TI, NULL, t2418_VT, &EmptyCustomAttributesCache, &t2418_TI, &t2418_0_0_0, &t2418_1_0_0, t2418_IOs, &t2418_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2418), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t370.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t370_TI;
#include "t370MD.h"

#include "t2419.h"
#include "t6.h"
#include "t2420.h"
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t370_TI;
extern TypeInfo t637_TI;
extern TypeInfo t131_TI;
extern TypeInfo t6_TI;
extern TypeInfo t2420_TI;
#include "t2420MD.h"
extern Il2CppType t6_0_0_0;
extern MethodInfo m3334_MI;
extern MethodInfo m13165_MI;
extern MethodInfo m3339_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
extern MethodInfo m3340_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3342_MI;
extern MethodInfo m13170_MI;
extern MethodInfo m13171_MI;
extern MethodInfo m3341_MI;


extern MethodInfo m2322_MI;
 void m2322 (t370 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2322_MI);
	{
		__this->f4 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), 1));
		m3334(__this, &m3334_MI);
		return;
	}
}
extern MethodInfo m13163_MI;
 void m13163 (t370 * __this, t2419 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13163_MI);
	{
		t656 * L_0 = m13165(NULL, p0, &m13165_MI);
		m3339(__this, L_0, &m3339_MI);
		return;
	}
}
extern MethodInfo m13164_MI;
 void m13164 (t370 * __this, t2419 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13164_MI);
	{
		NullCheck(p0);
		t25 * L_0 = m3475(p0, &m3475_MI);
		NullCheck(p0);
		t657 * L_1 = m3473(p0, &m3473_MI);
		m3340(__this, L_0, L_1, &m3340_MI);
		return;
	}
}
extern MethodInfo m2323_MI;
 t657 * m2323 (t370 * __this, t27* p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2323_MI);
	{
		t637* L_0 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t6_0_0_0), &m484_MI);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((t131 **)(t131 **)SZArrayLdElema(L_0, 0)) = (t131 *)L_1;
		t657 * L_2 = m3342(NULL, p1, p0, L_0, &m3342_MI);
		return L_2;
	}
}
extern MethodInfo m2324_MI;
 t656 * m2324 (t370 * __this, t25 * p0, t657 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2324_MI);
	{
		t2420 * L_0 = (t2420 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2420_TI));
		m13170(L_0, p0, p1, &m13170_MI);
		return L_0;
	}
}
extern MethodInfo m13165_MI;
 t656 * m13165 (t25 * __this, t2419 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13165_MI);
	{
		t2420 * L_0 = (t2420 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2420_TI));
		m13171(L_0, p0, &m13171_MI);
		return L_0;
	}
}
extern MethodInfo m2334_MI;
 void m2334 (t370 * __this, t6  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2334_MI);
	{
		t158* L_0 = (__this->f4);
		t6  L_1 = p0;
		t25 * L_2 = Box(InitializedTypeInfo(&t6_TI), &L_1);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_2);
		*((t25 **)(t25 **)SZArrayLdElema(L_0, 0)) = (t25 *)L_2;
		t158* L_3 = (__this->f4);
		m3341(__this, L_3, &m3341_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
extern Il2CppType t158_0_0_33;
FieldInfo t370_f4_FieldInfo = 
{
	"m_InvokeArray", &t158_0_0_33, &t370_TI, offsetof(t370, f4), &EmptyCustomAttributesCache};
static FieldInfo* t370_FIs[] =
{
	&t370_f4_FieldInfo,
	NULL
};
extern TypeInfo t370_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2322_MI = 
{
	".ctor", (methodPointerType)&m2322, &t370_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2419_0_0_0;
static ParameterInfo t370_m13163_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &t2419_0_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13163_MI = 
{
	"AddListener", (methodPointerType)&m13163, &t370_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t370_m13163_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2419_0_0_0;
static ParameterInfo t370_m13164_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &t2419_0_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13164_MI = 
{
	"RemoveListener", (methodPointerType)&m13164, &t370_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t370_m13164_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t370_m2323_ParameterInfos[] = 
{
	{"name", 0, 134217728, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"targetObj", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t657_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2323_MI = 
{
	"FindMethod_Impl", (methodPointerType)&m2323, &t370_TI, &t657_0_0_0, RuntimeInvoker_t25_t25_t25, t370_m2323_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t370_m2324_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t656_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2324_MI = 
{
	"GetDelegate", (methodPointerType)&m2324, &t370_TI, &t656_0_0_0, RuntimeInvoker_t25_t25_t25, t370_m2324_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2419_0_0_0;
static ParameterInfo t370_m13165_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t2419_0_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t656_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13165_MI = 
{
	"GetDelegate", (methodPointerType)&m13165, &t370_TI, &t656_0_0_0, RuntimeInvoker_t25_t25, t370_m13165_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t370_m2334_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t6 (MethodInfo* method, void* obj, void** args);
MethodInfo m2334_MI = 
{
	"Invoke", (methodPointerType)&m2334, &t370_TI, &t123_0_0_0, RuntimeInvoker_t123_t6, t370_m2334_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t370_MIs[] =
{
	&m2322_MI,
	&m13163_MI,
	&m13164_MI,
	&m2323_MI,
	&m2324_MI,
	&m13165_MI,
	&m2334_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m1875_MI;
extern MethodInfo m1876_MI;
extern MethodInfo m1877_MI;
extern MethodInfo m2323_MI;
extern MethodInfo m2324_MI;
static MethodInfo* t370_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m1875_MI,
	&m1876_MI,
	&m1877_MI,
	&m2323_MI,
	&m2324_MI,
};
extern TypeInfo t441_TI;
static Il2CppInterfaceOffsetPair t370_IOs[] = 
{
	{ &t441_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t370_0_0_0;
extern Il2CppType t370_1_0_0;
extern TypeInfo t666_TI;
struct t370;
extern TypeInfo t370_TI;
extern Il2CppGenericClass t370_GC;
TypeInfo t370_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`1", "UnityEngine.Events", t370_MIs, NULL, t370_FIs, NULL, &t666_TI, NULL, NULL, &t370_TI, NULL, t370_VT, &EmptyCustomAttributesCache, &t370_TI, &t370_0_0_0, &t370_1_0_0, t370_IOs, &t370_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t370), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 0, 1, 0, 0, 8, 0, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2419_TI;
#include "t2419MD.h"



extern MethodInfo m13166_MI;
 void m13166 (t2419 * __this, t25 * p0, t61 p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13166_MI);
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m13167_MI;
 void m13167 (t2419 * __this, t6  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13167_MI);
	typedef  void (*FunctionPointerType) (t25 * __this, t6  p0, MethodInfo* method);
	if (__this->f9)
		m13167((t2419 *)__this->f9,  p0, method);
	((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m13168_MI;
 t25 * m13168 (t2419 * __this, t6  p0, t219 * p1, t25 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13168_MI);
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t6_TI), &p0);
	return (t25 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m13169_MI;
 void m13169 (t2419 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13169_MI);
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2419_m13166_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2419_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13166_MI = 
{
	".ctor", (methodPointerType)&m13166, &t2419_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2419_m13166_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t2419_m13167_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern TypeInfo t2419_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t6 (MethodInfo* method, void* obj, void** args);
MethodInfo m13167_MI = 
{
	"Invoke", (methodPointerType)&m13167, &t2419_TI, &t123_0_0_0, RuntimeInvoker_t123_t6, t2419_m13167_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t6_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2419_m13168_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t6_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2419_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t6_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13168_MI = 
{
	"BeginInvoke", (methodPointerType)&m13168, &t2419_TI, &t218_0_0_0, RuntimeInvoker_t25_t6_t25_t25, t2419_m13168_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2419_m13169_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2419_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13169_MI = 
{
	"EndInvoke", (methodPointerType)&m13169, &t2419_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2419_m13169_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2419_MIs[] =
{
	&m13166_MI,
	&m13167_MI,
	&m13168_MI,
	&m13169_MI,
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
extern MethodInfo m13167_MI;
extern MethodInfo m13168_MI;
extern MethodInfo m13169_MI;
static MethodInfo* t2419_VT[] =
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
	&m13167_MI,
	&m13168_MI,
	&m13169_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2419_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2419_0_0_0;
extern Il2CppType t2419_1_0_0;
extern TypeInfo t345_TI;
struct t2419;
extern TypeInfo t2419_TI;
extern Il2CppGenericClass t2419_GC;
TypeInfo t2419_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2419_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2419_TI, NULL, t2419_VT, &EmptyCustomAttributesCache, &t2419_TI, &t2419_0_0_0, &t2419_1_0_0, t2419_IOs, &t2419_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2419), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2420_TI;

extern TypeInfo t2420_TI;
extern TypeInfo t2419_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t6_TI;
extern TypeInfo t123_TI;
extern Il2CppType t2419_0_0_0;
extern MethodInfo m3313_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m2105_MI;
extern MethodInfo m3312_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m20590_MI;
extern MethodInfo m3314_MI;
extern MethodInfo m13167_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
struct t656;
 void m20590 (t25 * __this, t25 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20590_MI;


extern MethodInfo m13170_MI;
 void m13170 (t2420 * __this, t25 * p0, t657 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13170_MI);
	{
		m3313(__this, p0, p1, &m3313_MI);
		t2419 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t2419_0_0_0), &m484_MI);
		t466 * L_2 = m3479(NULL, L_1, p0, p1, &m3479_MI);
		t466 * L_3 = m2105(NULL, L_0, ((t2419 *)IsInst(L_2, InitializedTypeInfo(&t2419_TI))), &m2105_MI);
		__this->f0 = ((t2419 *)Castclass(L_3, InitializedTypeInfo(&t2419_TI)));
		return;
	}
}
extern MethodInfo m13171_MI;
 void m13171 (t2420 * __this, t2419 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13171_MI);
	{
		m3312(__this, &m3312_MI);
		t2419 * L_0 = (__this->f0);
		t466 * L_1 = m2105(NULL, L_0, p0, &m2105_MI);
		__this->f0 = ((t2419 *)Castclass(L_1, InitializedTypeInfo(&t2419_TI)));
		return;
	}
}
extern MethodInfo m13172_MI;
 void m13172 (t2420 * __this, t158* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13172_MI);
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
		m20590(NULL, (*(t25 **)(t25 **)SZArrayLdElema(p0, 0)), &m20590_MI);
		t2419 * L_1 = (__this->f0);
		bool L_2 = m3314(NULL, L_1, &m3314_MI);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		t2419 * L_3 = (__this->f0);
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 0);
		NullCheck(L_3);
		VirtActionInvoker1< t6  >::Invoke(&m13167_MI, L_3, ((*(t6 *)((t6 *)UnBox ((*(t25 **)(t25 **)SZArrayLdElema(p0, 0)), InitializedTypeInfo(&t6_TI))))));
	}

IL_003f:
	{
		return;
	}
}
extern MethodInfo m13173_MI;
 bool m13173 (t2420 * __this, t25 * p0, t657 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13173_MI);
	int32_t G_B3_0 = 0;
	{
		t2419 * L_0 = (__this->f0);
		NullCheck(L_0);
		t25 * L_1 = m3475(L_0, &m3475_MI);
		if ((((t25 *)L_1) != ((t25 *)p0)))
		{
			goto IL_0021;
		}
	}
	{
		t2419 * L_2 = (__this->f0);
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
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
extern Il2CppType t2419_0_0_1;
FieldInfo t2420_f0_FieldInfo = 
{
	"Delegate", &t2419_0_0_1, &t2420_TI, offsetof(t2420, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2420_FIs[] =
{
	&t2420_f0_FieldInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2420_m13170_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2420_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13170_MI = 
{
	".ctor", (methodPointerType)&m13170, &t2420_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t2420_m13170_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2419_0_0_0;
static ParameterInfo t2420_m13171_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2419_0_0_0},
};
extern TypeInfo t2420_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13171_MI = 
{
	".ctor", (methodPointerType)&m13171, &t2420_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2420_m13171_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2420_m13172_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2420_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13172_MI = 
{
	"Invoke", (methodPointerType)&m13172, &t2420_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2420_m13172_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2420_m13173_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2420_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13173_MI = 
{
	"Find", (methodPointerType)&m13173, &t2420_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2420_m13173_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2420_MIs[] =
{
	&m13170_MI,
	&m13171_MI,
	&m13172_MI,
	&m13173_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13172_MI;
extern MethodInfo m13173_MI;
static MethodInfo* t2420_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13172_MI,
	&m13173_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2420_0_0_0;
extern Il2CppType t2420_1_0_0;
extern TypeInfo t656_TI;
struct t2420;
extern TypeInfo t2420_TI;
extern Il2CppGenericClass t2420_GC;
TypeInfo t2420_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2420_MIs, NULL, t2420_FIs, NULL, &t656_TI, NULL, NULL, &t2420_TI, NULL, t2420_VT, &EmptyCustomAttributesCache, &t2420_TI, &t2420_0_0_0, &t2420_1_0_0, NULL, &t2420_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2420), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3850_TI;

#include "t368.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ScrollRect/MovementType>
extern MethodInfo m27732_MI;
static PropertyInfo t3850____Current_PropertyInfo = 
{
	&t3850_TI, "Current", &m27732_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3850_PIs[] =
{
	&t3850____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3850_TI;
extern Il2CppType t368_0_0_0;
extern void* RuntimeInvoker_t368 (MethodInfo* method, void* obj, void** args);
MethodInfo m27732_MI = 
{
	"get_Current", NULL, &t3850_TI, &t368_0_0_0, RuntimeInvoker_t368, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3850_MIs[] =
{
	&m27732_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3850_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3850_0_0_0;
extern Il2CppType t3850_1_0_0;
struct t3850;
extern TypeInfo t3850_TI;
extern Il2CppGenericClass t3850_GC;
TypeInfo t3850_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3850_MIs, t3850_PIs, NULL, NULL, NULL, NULL, NULL, &t3850_TI, t3850_ITIs, NULL, &EmptyCustomAttributesCache, &t3850_TI, &t3850_0_0_0, &t3850_1_0_0, NULL, &t3850_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2421.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2421_TI;
#include "t2421MD.h"

extern TypeInfo t2421_TI;
extern TypeInfo t368_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13178_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20592_MI;
struct t122;
 int32_t m20592 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20592_MI;


extern MethodInfo m13174_MI;
 void m13174 (t2421 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13174_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13175_MI;
 t25 * m13175 (t2421 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13175_MI);
	{
		int32_t L_0 = m13178(__this, &m13178_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t368_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13176_MI;
 void m13176 (t2421 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13176_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13177_MI;
 bool m13177 (t2421 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13177_MI);
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
extern MethodInfo m13178_MI;
 int32_t m13178 (t2421 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13178_MI);
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
		int32_t L_8 = m20592(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20592_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.ScrollRect/MovementType>
extern Il2CppType t122_0_0_1;
FieldInfo t2421_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2421_TI, offsetof(t2421, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2421_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2421_TI, offsetof(t2421, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2421_FIs[] =
{
	&t2421_f0_FieldInfo,
	&t2421_f1_FieldInfo,
	NULL
};
extern MethodInfo m13175_MI;
static PropertyInfo t2421____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2421_TI, "System.Collections.IEnumerator.Current", &m13175_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13178_MI;
static PropertyInfo t2421____Current_PropertyInfo = 
{
	&t2421_TI, "Current", &m13178_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2421_PIs[] =
{
	&t2421____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2421____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2421_m13174_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2421_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13174_MI = 
{
	".ctor", (methodPointerType)&m13174, &t2421_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2421_m13174_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2421_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13175_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13175, &t2421_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2421_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13176_MI = 
{
	"Dispose", (methodPointerType)&m13176, &t2421_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2421_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13177_MI = 
{
	"MoveNext", (methodPointerType)&m13177, &t2421_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2421_TI;
extern Il2CppType t368_0_0_0;
extern void* RuntimeInvoker_t368 (MethodInfo* method, void* obj, void** args);
MethodInfo m13178_MI = 
{
	"get_Current", (methodPointerType)&m13178, &t2421_TI, &t368_0_0_0, RuntimeInvoker_t368, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2421_MIs[] =
{
	&m13174_MI,
	&m13175_MI,
	&m13176_MI,
	&m13177_MI,
	&m13178_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13175_MI;
extern MethodInfo m13177_MI;
extern MethodInfo m13176_MI;
extern MethodInfo m13178_MI;
static MethodInfo* t2421_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13175_MI,
	&m13177_MI,
	&m13176_MI,
	&m13178_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3850_TI;
static TypeInfo* t2421_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3850_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3850_TI;
static Il2CppInterfaceOffsetPair t2421_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3850_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2421_0_0_0;
extern Il2CppType t2421_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2421_TI;
extern Il2CppGenericClass t2421_GC;
extern TypeInfo t122_TI;
TypeInfo t2421_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2421_MIs, t2421_PIs, t2421_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2421_TI, t2421_ITIs, t2421_VT, &EmptyCustomAttributesCache, &t2421_TI, &t2421_0_0_0, &t2421_1_0_0, t2421_IOs, &t2421_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2421)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4748_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.ScrollRect/MovementType>
extern MethodInfo m27733_MI;
static PropertyInfo t4748____Count_PropertyInfo = 
{
	&t4748_TI, "Count", &m27733_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27734_MI;
static PropertyInfo t4748____IsReadOnly_PropertyInfo = 
{
	&t4748_TI, "IsReadOnly", &m27734_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4748_PIs[] =
{
	&t4748____Count_PropertyInfo,
	&t4748____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4748_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27733_MI = 
{
	"get_Count", NULL, &t4748_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4748_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27734_MI = 
{
	"get_IsReadOnly", NULL, &t4748_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t368_0_0_0;
static ParameterInfo t4748_m27735_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t368_0_0_0},
};
extern TypeInfo t4748_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27735_MI = 
{
	"Add", NULL, &t4748_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4748_m27735_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4748_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27736_MI = 
{
	"Clear", NULL, &t4748_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t368_0_0_0;
static ParameterInfo t4748_m27737_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t368_0_0_0},
};
extern TypeInfo t4748_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27737_MI = 
{
	"Contains", NULL, &t4748_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4748_m27737_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3619_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4748_m27738_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3619_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4748_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27738_MI = 
{
	"CopyTo", NULL, &t4748_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4748_m27738_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t368_0_0_0;
static ParameterInfo t4748_m27739_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t368_0_0_0},
};
extern TypeInfo t4748_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27739_MI = 
{
	"Remove", NULL, &t4748_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4748_m27739_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4748_MIs[] =
{
	&m27733_MI,
	&m27734_MI,
	&m27735_MI,
	&m27736_MI,
	&m27737_MI,
	&m27738_MI,
	&m27739_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4750_TI;
static TypeInfo* t4748_ITIs[] = 
{
	&t703_TI,
	&t4750_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4748_0_0_0;
extern Il2CppType t4748_1_0_0;
struct t4748;
extern TypeInfo t4748_TI;
extern Il2CppGenericClass t4748_GC;
TypeInfo t4748_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4748_MIs, t4748_PIs, NULL, NULL, NULL, NULL, NULL, &t4748_TI, t4748_ITIs, NULL, &EmptyCustomAttributesCache, &t4748_TI, &t4748_0_0_0, &t4748_1_0_0, NULL, &t4748_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4750_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ScrollRect/MovementType>
extern TypeInfo t4750_TI;
extern Il2CppType t3850_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27740_MI = 
{
	"GetEnumerator", NULL, &t4750_TI, &t3850_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4750_MIs[] =
{
	&m27740_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4750_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4750_0_0_0;
extern Il2CppType t4750_1_0_0;
struct t4750;
extern TypeInfo t4750_TI;
extern Il2CppGenericClass t4750_GC;
TypeInfo t4750_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4750_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4750_TI, t4750_ITIs, NULL, &EmptyCustomAttributesCache, &t4750_TI, &t4750_0_0_0, &t4750_1_0_0, NULL, &t4750_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4749_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.ScrollRect/MovementType>
extern MethodInfo m27741_MI;
extern MethodInfo m27742_MI;
static PropertyInfo t4749____Item_PropertyInfo = 
{
	&t4749_TI, "Item", &m27741_MI, &m27742_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4749_PIs[] =
{
	&t4749____Item_PropertyInfo,
	NULL
};
extern Il2CppType t368_0_0_0;
static ParameterInfo t4749_m27743_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t368_0_0_0},
};
extern TypeInfo t4749_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27743_MI = 
{
	"IndexOf", NULL, &t4749_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t4749_m27743_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t368_0_0_0;
static ParameterInfo t4749_m27744_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t368_0_0_0},
};
extern TypeInfo t4749_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27744_MI = 
{
	"Insert", NULL, &t4749_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4749_m27744_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4749_m27745_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4749_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27745_MI = 
{
	"RemoveAt", NULL, &t4749_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4749_m27745_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4749_m27741_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4749_TI;
extern Il2CppType t368_0_0_0;
extern void* RuntimeInvoker_t368_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27741_MI = 
{
	"get_Item", NULL, &t4749_TI, &t368_0_0_0, RuntimeInvoker_t368_t134, t4749_m27741_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t368_0_0_0;
static ParameterInfo t4749_m27742_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t368_0_0_0},
};
extern TypeInfo t4749_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27742_MI = 
{
	"set_Item", NULL, &t4749_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4749_m27742_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4749_MIs[] =
{
	&m27743_MI,
	&m27744_MI,
	&m27745_MI,
	&m27741_MI,
	&m27742_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4748_TI;
extern TypeInfo t4750_TI;
static TypeInfo* t4749_ITIs[] = 
{
	&t703_TI,
	&t4748_TI,
	&t4750_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4749_0_0_0;
extern Il2CppType t4749_1_0_0;
struct t4749;
extern TypeInfo t4749_TI;
extern Il2CppGenericClass t4749_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4749_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4749_MIs, t4749_PIs, NULL, NULL, NULL, NULL, NULL, &t4749_TI, t4749_ITIs, NULL, &t1518__CustomAttributeCache, &t4749_TI, &t4749_0_0_0, &t4749_1_0_0, NULL, &t4749_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2422.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2422_TI;
#include "t2422MD.h"

#include "t286.h"
#include "t2423.h"
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t2422_TI;
extern TypeInfo t286_TI;
extern TypeInfo t2423_TI;
extern TypeInfo t123_TI;
#include "t2423MD.h"
extern MethodInfo m13181_MI;
extern MethodInfo m13183_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Selectable>
extern Il2CppType t158_0_0_33;
FieldInfo t2422_f1_FieldInfo = 
{
	"m_Arg1", &t158_0_0_33, &t2422_TI, offsetof(t2422, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2422_FIs[] =
{
	&t2422_f1_FieldInfo,
	NULL
};
extern Il2CppType t60_0_0_0;
extern Il2CppType t657_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t2422_m13179_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2422_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13179_MI = 
{
	".ctor", (methodPointerType)&m8415_gshared, &t2422_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t2422_m13179_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2422_m13180_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2422_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13180_MI = 
{
	"Invoke", (methodPointerType)&m8417_gshared, &t2422_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2422_m13180_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2422_MIs[] =
{
	&m13179_MI,
	&m13180_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13180_MI;
extern MethodInfo m13184_MI;
static MethodInfo* t2422_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13180_MI,
	&m13184_MI,
};
extern Il2CppType t2424_0_0_0;
extern TypeInfo t2424_TI;
extern MethodInfo m20602_MI;
extern TypeInfo t286_TI;
extern MethodInfo m13186_MI;
extern MethodInfo m13181_MI;
extern TypeInfo t286_TI;
extern MethodInfo m13183_MI;
static void* t2422_RGCTXData[8] = 
{
	(void*)&t2424_0_0_0,
	&t2424_TI,
	&m20602_MI,
	&t286_TI,
	&m13186_MI,
	&m13181_MI,
	&t286_TI,
	&m13183_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2422_0_0_0;
extern Il2CppType t2422_1_0_0;
extern TypeInfo t2423_TI;
struct t2422;
extern TypeInfo t2422_TI;
extern Il2CppGenericClass t2422_GC;
TypeInfo t2422_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2422_MIs, NULL, t2422_FIs, NULL, &t2423_TI, NULL, NULL, &t2422_TI, NULL, t2422_VT, &EmptyCustomAttributesCache, &t2422_TI, &t2422_0_0_0, &t2422_1_0_0, NULL, &t2422_GC, NULL, NULL, NULL, t2422_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2422), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2423_TI;

#include "t2424.h"
extern TypeInfo t2423_TI;
extern TypeInfo t2424_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t286_TI;
extern TypeInfo t123_TI;
#include "t2424MD.h"
extern Il2CppType t2424_0_0_0;
extern MethodInfo m3313_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m2105_MI;
extern MethodInfo m3312_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m20602_MI;
extern MethodInfo m3314_MI;
extern MethodInfo m13186_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
struct t656;
#define m20602(__this, p0, method) (void)m18087_gshared((t25 *)__this, (t25 *)p0, method)
extern MethodInfo m20602_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Selectable>
extern Il2CppType t2424_0_0_1;
FieldInfo t2423_f0_FieldInfo = 
{
	"Delegate", &t2424_0_0_1, &t2423_TI, offsetof(t2423, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2423_FIs[] =
{
	&t2423_f0_FieldInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2423_m13181_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2423_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13181_MI = 
{
	".ctor", (methodPointerType)&m8418_gshared, &t2423_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t2423_m13181_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2424_0_0_0;
static ParameterInfo t2423_m13182_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2424_0_0_0},
};
extern TypeInfo t2423_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13182_MI = 
{
	".ctor", (methodPointerType)&m8419_gshared, &t2423_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2423_m13182_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2423_m13183_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2423_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13183_MI = 
{
	"Invoke", (methodPointerType)&m8420_gshared, &t2423_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2423_m13183_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2423_m13184_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2423_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13184_MI = 
{
	"Find", (methodPointerType)&m8421_gshared, &t2423_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2423_m13184_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2423_MIs[] =
{
	&m13181_MI,
	&m13182_MI,
	&m13183_MI,
	&m13184_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13183_MI;
extern MethodInfo m13184_MI;
static MethodInfo* t2423_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13183_MI,
	&m13184_MI,
};
extern Il2CppType t2424_0_0_0;
extern TypeInfo t2424_TI;
extern MethodInfo m20602_MI;
extern TypeInfo t286_TI;
extern MethodInfo m13186_MI;
static void* t2423_RGCTXData[5] = 
{
	(void*)&t2424_0_0_0,
	&t2424_TI,
	&m20602_MI,
	&t286_TI,
	&m13186_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2423_0_0_0;
extern Il2CppType t2423_1_0_0;
extern TypeInfo t656_TI;
struct t2423;
extern TypeInfo t2423_TI;
extern Il2CppGenericClass t2423_GC;
TypeInfo t2423_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2423_MIs, NULL, t2423_FIs, NULL, &t656_TI, NULL, NULL, &t2423_TI, NULL, t2423_VT, &EmptyCustomAttributesCache, &t2423_TI, &t2423_0_0_0, &t2423_1_0_0, NULL, &t2423_GC, NULL, NULL, NULL, t2423_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2423), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2424_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.Selectable>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2424_m13185_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2424_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13185_MI = 
{
	".ctor", (methodPointerType)&m8422_gshared, &t2424_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2424_m13185_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t2424_m13186_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2424_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13186_MI = 
{
	"Invoke", (methodPointerType)&m8423_gshared, &t2424_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2424_m13186_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2424_m13187_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2424_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13187_MI = 
{
	"BeginInvoke", (methodPointerType)&m8424_gshared, &t2424_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t2424_m13187_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2424_m13188_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2424_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13188_MI = 
{
	"EndInvoke", (methodPointerType)&m8425_gshared, &t2424_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2424_m13188_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2424_MIs[] =
{
	&m13185_MI,
	&m13186_MI,
	&m13187_MI,
	&m13188_MI,
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
extern MethodInfo m13186_MI;
extern MethodInfo m13187_MI;
extern MethodInfo m13188_MI;
static MethodInfo* t2424_VT[] =
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
	&m13186_MI,
	&m13187_MI,
	&m13188_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2424_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2424_0_0_0;
extern Il2CppType t2424_1_0_0;
extern TypeInfo t345_TI;
struct t2424;
extern TypeInfo t2424_TI;
extern Il2CppGenericClass t2424_GC;
TypeInfo t2424_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2424_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2424_TI, NULL, t2424_VT, &EmptyCustomAttributesCache, &t2424_TI, &t2424_0_0_0, &t2424_1_0_0, t2424_IOs, &t2424_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2424), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t373.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t373_TI;
#include "t373MD.h"

#include "t2432.h"
#include "t2429.h"
#include "t2430.h"
#include "t165.h"
#include "t2437.h"
#include "t2431.h"
extern TypeInfo t373_TI;
extern TypeInfo t286_TI;
extern TypeInfo t134_TI;
extern TypeInfo t123_TI;
extern TypeInfo t445_TI;
extern TypeInfo t685_TI;
extern TypeInfo t1386_TI;
extern TypeInfo t1351_TI;
extern TypeInfo t2428_TI;
extern TypeInfo t2425_TI;
extern TypeInfo t2432_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2426_TI;
extern TypeInfo t2427_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2429_TI;
extern TypeInfo t165_TI;
extern TypeInfo t2430_TI;
extern TypeInfo t2437_TI;
#include "t1351MD.h"
#include "t25MD.h"
#include "t702MD.h"
#include "t2429MD.h"
#include "t165MD.h"
#include "t2430MD.h"
#include "t2432MD.h"
#include "t2437MD.h"
extern MethodInfo m2366_MI;
extern MethodInfo m13233_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m6998_MI;
extern MethodInfo m20604_MI;
extern MethodInfo m6999_MI;
extern MethodInfo m13221_MI;
extern MethodInfo m452_MI;
extern MethodInfo m13223_MI;
extern MethodInfo m13209_MI;
extern MethodInfo m27040_MI;
extern MethodInfo m13208_MI;
extern MethodInfo m13218_MI;
extern MethodInfo m4283_MI;
extern MethodInfo m2361_MI;
extern MethodInfo m13213_MI;
extern MethodInfo m13219_MI;
extern MethodInfo m13222_MI;
extern MethodInfo m2362_MI;
extern MethodInfo m13207_MI;
extern MethodInfo m13231_MI;
extern MethodInfo m7436_MI;
extern MethodInfo m13232_MI;
extern MethodInfo m27045_MI;
extern MethodInfo m27047_MI;
extern MethodInfo m27048_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m13240_MI;
extern MethodInfo m4279_MI;
extern MethodInfo m20606_MI;
extern MethodInfo m13216_MI;
extern MethodInfo m13217_MI;
extern MethodInfo m489_MI;
extern MethodInfo m13315_MI;
extern MethodInfo m13234_MI;
extern MethodInfo m13220_MI;
extern MethodInfo m13225_MI;
extern MethodInfo m4295_MI;
extern MethodInfo m13321_MI;
extern MethodInfo m20608_MI;
extern MethodInfo m20616_MI;
extern MethodInfo m4282_MI;
struct t122;
struct t122;
 void m18837_gshared (t25 * __this, t158** p0, int32_t p1, MethodInfo* method);
#define m18837(__this, p0, p1, method) (void)m18837_gshared((t25 *)__this, (t158**)p0, (int32_t)p1, method)
#define m20604(__this, p0, p1, method) (void)m18837_gshared((t25 *)__this, (t158**)p0, (int32_t)p1, method)
extern MethodInfo m20604_MI;
struct t122;
#include "t2435.h"
struct t122;
#include "t1603.h"
 int32_t m8232_gshared (t25 * __this, t158* p0, t25 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m8232(__this, p0, p1, p2, p3, method) (int32_t)m8232_gshared((t25 *)__this, (t158*)p0, (t25 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m20606(__this, p0, p1, p2, p3, method) (int32_t)m8232_gshared((t25 *)__this, (t158*)p0, (t25 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m20606_MI;
struct t122;
struct t122;
 void m18840_gshared (t25 * __this, t158* p0, int32_t p1, int32_t p2, t25* p3, MethodInfo* method);
#define m18840(__this, p0, p1, p2, p3, method) (void)m18840_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (int32_t)p2, (t25*)p3, method)
#define m20608(__this, p0, p1, p2, p3, method) (void)m18840_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (int32_t)p2, (t25*)p3, method)
extern MethodInfo m20608_MI;
struct t122;
#include "t168.h"
struct t122;
#include "t1889.h"
 void m18914_gshared (t25 * __this, t158* p0, int32_t p1, t1889 * p2, MethodInfo* method);
#define m18914(__this, p0, p1, p2, method) (void)m18914_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (t1889 *)p2, method)
#define m20616(__this, p0, p1, p2, method) (void)m18914_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (t1889 *)p2, method)
extern MethodInfo m20616_MI;


extern MethodInfo m13218_MI;
 t2432  m13218 (t373 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13218_MI);
	{
		t2432  L_0 = {0};
		m13234(&L_0, __this, &m13234_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
extern Il2CppType t134_0_0_32849;
FieldInfo t373_f0_FieldInfo = 
{
	"DefaultCapacity", &t134_0_0_32849, &t373_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2425_0_0_1;
FieldInfo t373_f1_FieldInfo = 
{
	"_items", &t2425_0_0_1, &t373_TI, offsetof(t373, f1), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t373_f2_FieldInfo = 
{
	"_size", &t134_0_0_1, &t373_TI, offsetof(t373, f2), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t373_f3_FieldInfo = 
{
	"_version", &t134_0_0_1, &t373_TI, offsetof(t373, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2425_0_0_49;
FieldInfo t373_f4_FieldInfo = 
{
	"EmptyArray", &t2425_0_0_49, &t373_TI, offsetof(t373_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t373_FIs[] =
{
	&t373_f0_FieldInfo,
	&t373_f1_FieldInfo,
	&t373_f2_FieldInfo,
	&t373_f3_FieldInfo,
	&t373_f4_FieldInfo,
	NULL
};
static const int32_t t373_f0_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t373_f0_DefaultValue = 
{
	&t373_f0_FieldInfo, { (char*)&t373_f0_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t373_FDVs[] = 
{
	&t373_f0_DefaultValue,
	NULL
};
extern MethodInfo m13200_MI;
static PropertyInfo t373____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t373_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13200_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13201_MI;
static PropertyInfo t373____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t373_TI, "System.Collections.ICollection.IsSynchronized", &m13201_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13202_MI;
static PropertyInfo t373____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t373_TI, "System.Collections.ICollection.SyncRoot", &m13202_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13203_MI;
static PropertyInfo t373____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t373_TI, "System.Collections.IList.IsFixedSize", &m13203_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13204_MI;
static PropertyInfo t373____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t373_TI, "System.Collections.IList.IsReadOnly", &m13204_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13205_MI;
extern MethodInfo m13206_MI;
static PropertyInfo t373____System_Collections_IList_Item_PropertyInfo = 
{
	&t373_TI, "System.Collections.IList.Item", &m13205_MI, &m13206_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13231_MI;
extern MethodInfo m13232_MI;
static PropertyInfo t373____Capacity_PropertyInfo = 
{
	&t373_TI, "Capacity", &m13231_MI, &m13232_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2367_MI;
static PropertyInfo t373____Count_PropertyInfo = 
{
	&t373_TI, "Count", &m2367_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2366_MI;
extern MethodInfo m13233_MI;
static PropertyInfo t373____Item_PropertyInfo = 
{
	&t373_TI, "Item", &m2366_MI, &m13233_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t373_PIs[] =
{
	&t373____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t373____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t373____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t373____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t373____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t373____System_Collections_IList_Item_PropertyInfo,
	&t373____Capacity_PropertyInfo,
	&t373____Count_PropertyInfo,
	&t373____Item_PropertyInfo,
	NULL
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2355_MI = 
{
	".ctor", (methodPointerType)&m9248_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2426_0_0_0;
static ParameterInfo t373_m13189_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2426_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13189_MI = 
{
	".ctor", (methodPointerType)&m9250_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t373_m13189_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t373_m13190_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13190_MI = 
{
	".ctor", (methodPointerType)&m9252_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t373_m13190_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13191_MI = 
{
	".cctor", (methodPointerType)&m9254_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t2427_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13192_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m9256_gshared, &t373_TI, &t2427_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t373_m13193_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13193_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9258_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t373_m13193_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13194_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9260_gshared, &t373_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t373_m13195_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13195_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9262_gshared, &t373_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t373_m13195_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t373_m13196_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13196_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9264_gshared, &t373_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t373_m13196_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t373_m13197_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13197_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9266_gshared, &t373_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t373_m13197_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t373_m13198_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13198_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9268_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t373_m13198_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t373_m13199_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13199_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9270_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t373_m13199_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13200_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9272_gshared, &t373_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13201_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9274_gshared, &t373_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13202_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9276_gshared, &t373_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13203_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9278_gshared, &t373_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13204_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9280_gshared, &t373_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t373_m13205_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13205_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9282_gshared, &t373_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t373_m13205_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t373_m13206_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13206_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9284_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t373_m13206_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t373_m2361_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2361_MI = 
{
	"Add", (methodPointerType)&m9285_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t373_m2361_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t373_m13207_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13207_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m9287_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t373_m13207_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2428_0_0_0;
static ParameterInfo t373_m13208_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2428_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13208_MI = 
{
	"AddCollection", (methodPointerType)&m9289_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t373_m13208_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2426_0_0_0;
static ParameterInfo t373_m13209_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2426_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13209_MI = 
{
	"AddEnumerable", (methodPointerType)&m9291_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t373_m13209_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2426_0_0_0;
static ParameterInfo t373_m13210_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2426_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13210_MI = 
{
	"AddRange", (methodPointerType)&m9293_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t373_m13210_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t2429_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13211_MI = 
{
	"AsReadOnly", (methodPointerType)&m9295_gshared, &t373_TI, &t2429_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13212_MI = 
{
	"Clear", (methodPointerType)&m9297_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t373_m13213_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13213_MI = 
{
	"Contains", (methodPointerType)&m9299_gshared, &t373_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t373_m13213_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2425_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t373_m13214_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2425_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13214_MI = 
{
	"CopyTo", (methodPointerType)&m9301_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t373_m13214_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2430_0_0_0;
static ParameterInfo t373_m13215_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2430_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t286_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13215_MI = 
{
	"Find", (methodPointerType)&m9303_gshared, &t373_TI, &t286_0_0_0, RuntimeInvoker_t25_t25, t373_m13215_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2430_0_0_0;
static ParameterInfo t373_m13216_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2430_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13216_MI = 
{
	"CheckMatch", (methodPointerType)&m9305_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t373_m13216_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t2430_0_0_0;
static ParameterInfo t373_m13217_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2430_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13217_MI = 
{
	"GetIndex", (methodPointerType)&m9307_gshared, &t373_TI, &t134_0_0_0, RuntimeInvoker_t134_t134_t134_t25, t373_m13217_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t2432_0_0_0;
extern void* RuntimeInvoker_t2432 (MethodInfo* method, void* obj, void** args);
MethodInfo m13218_MI = 
{
	"GetEnumerator", (methodPointerType)&m13218, &t373_TI, &t2432_0_0_0, RuntimeInvoker_t2432, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t373_m13219_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13219_MI = 
{
	"IndexOf", (methodPointerType)&m9310_gshared, &t373_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t373_m13219_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t373_m13220_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13220_MI = 
{
	"Shift", (methodPointerType)&m9312_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t373_m13220_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t373_m13221_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13221_MI = 
{
	"CheckIndex", (methodPointerType)&m9314_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t373_m13221_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t373_m13222_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13222_MI = 
{
	"Insert", (methodPointerType)&m9316_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t373_m13222_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2426_0_0_0;
static ParameterInfo t373_m13223_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2426_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13223_MI = 
{
	"CheckCollection", (methodPointerType)&m9318_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t373_m13223_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t373_m2362_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2362_MI = 
{
	"Remove", (methodPointerType)&m9320_gshared, &t373_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t373_m2362_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2430_0_0_0;
static ParameterInfo t373_m13224_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2430_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13224_MI = 
{
	"RemoveAll", (methodPointerType)&m9322_gshared, &t373_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t373_m13224_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t373_m13225_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13225_MI = 
{
	"RemoveAt", (methodPointerType)&m9324_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t373_m13225_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13226_MI = 
{
	"Reverse", (methodPointerType)&m9326_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13227_MI = 
{
	"Sort", (methodPointerType)&m9328_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2431_0_0_0;
static ParameterInfo t373_m13228_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2431_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13228_MI = 
{
	"Sort", (methodPointerType)&m9330_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t373_m13228_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t2425_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13229_MI = 
{
	"ToArray", (methodPointerType)&m9332_gshared, &t373_TI, &t2425_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13230_MI = 
{
	"TrimExcess", (methodPointerType)&m9334_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13231_MI = 
{
	"get_Capacity", (methodPointerType)&m9336_gshared, &t373_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t373_m13232_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13232_MI = 
{
	"set_Capacity", (methodPointerType)&m9338_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t373_m13232_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t373_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m2367_MI = 
{
	"get_Count", (methodPointerType)&m9340_gshared, &t373_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t373_m2366_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t286_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m2366_MI = 
{
	"get_Item", (methodPointerType)&m9342_gshared, &t373_TI, &t286_0_0_0, RuntimeInvoker_t25_t134, t373_m2366_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t373_m13233_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t373_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13233_MI = 
{
	"set_Item", (methodPointerType)&m9344_gshared, &t373_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t373_m13233_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t373_MIs[] =
{
	&m2355_MI,
	&m13189_MI,
	&m13190_MI,
	&m13191_MI,
	&m13192_MI,
	&m13193_MI,
	&m13194_MI,
	&m13195_MI,
	&m13196_MI,
	&m13197_MI,
	&m13198_MI,
	&m13199_MI,
	&m13200_MI,
	&m13201_MI,
	&m13202_MI,
	&m13203_MI,
	&m13204_MI,
	&m13205_MI,
	&m13206_MI,
	&m2361_MI,
	&m13207_MI,
	&m13208_MI,
	&m13209_MI,
	&m13210_MI,
	&m13211_MI,
	&m13212_MI,
	&m13213_MI,
	&m13214_MI,
	&m13215_MI,
	&m13216_MI,
	&m13217_MI,
	&m13218_MI,
	&m13219_MI,
	&m13220_MI,
	&m13221_MI,
	&m13222_MI,
	&m13223_MI,
	&m2362_MI,
	&m13224_MI,
	&m13225_MI,
	&m13226_MI,
	&m13227_MI,
	&m13228_MI,
	&m13229_MI,
	&m13230_MI,
	&m13231_MI,
	&m13232_MI,
	&m2367_MI,
	&m2366_MI,
	&m13233_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13194_MI;
extern MethodInfo m2367_MI;
extern MethodInfo m13201_MI;
extern MethodInfo m13202_MI;
extern MethodInfo m13193_MI;
extern MethodInfo m13203_MI;
extern MethodInfo m13204_MI;
extern MethodInfo m13205_MI;
extern MethodInfo m13206_MI;
extern MethodInfo m13195_MI;
extern MethodInfo m13212_MI;
extern MethodInfo m13196_MI;
extern MethodInfo m13197_MI;
extern MethodInfo m13198_MI;
extern MethodInfo m13199_MI;
extern MethodInfo m13225_MI;
extern MethodInfo m2367_MI;
extern MethodInfo m13200_MI;
extern MethodInfo m2361_MI;
extern MethodInfo m13212_MI;
extern MethodInfo m13213_MI;
extern MethodInfo m13214_MI;
extern MethodInfo m2362_MI;
extern MethodInfo m13192_MI;
extern MethodInfo m13219_MI;
extern MethodInfo m13222_MI;
extern MethodInfo m13225_MI;
extern MethodInfo m2366_MI;
extern MethodInfo m13233_MI;
static MethodInfo* t373_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13194_MI,
	&m2367_MI,
	&m13201_MI,
	&m13202_MI,
	&m13193_MI,
	&m13203_MI,
	&m13204_MI,
	&m13205_MI,
	&m13206_MI,
	&m13195_MI,
	&m13212_MI,
	&m13196_MI,
	&m13197_MI,
	&m13198_MI,
	&m13199_MI,
	&m13225_MI,
	&m2367_MI,
	&m13200_MI,
	&m2361_MI,
	&m13212_MI,
	&m13213_MI,
	&m13214_MI,
	&m2362_MI,
	&m13192_MI,
	&m13219_MI,
	&m13222_MI,
	&m13225_MI,
	&m2366_MI,
	&m13233_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2428_TI;
extern TypeInfo t2426_TI;
extern TypeInfo t2433_TI;
static TypeInfo* t373_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t2428_TI,
	&t2426_TI,
	&t2433_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2428_TI;
extern TypeInfo t2426_TI;
extern TypeInfo t2433_TI;
static Il2CppInterfaceOffsetPair t373_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t2428_TI, 20},
	{ &t2426_TI, 27},
	{ &t2433_TI, 28},
};
extern TypeInfo t373_TI;
extern MethodInfo m13223_MI;
extern TypeInfo t2428_TI;
extern MethodInfo m13209_MI;
extern MethodInfo m27040_MI;
extern TypeInfo t2425_TI;
extern MethodInfo m13208_MI;
extern MethodInfo m13218_MI;
extern TypeInfo t2432_TI;
extern TypeInfo t286_TI;
extern MethodInfo m2361_MI;
extern MethodInfo m13213_MI;
extern MethodInfo m13219_MI;
extern MethodInfo m13221_MI;
extern MethodInfo m13222_MI;
extern MethodInfo m2362_MI;
extern MethodInfo m2366_MI;
extern MethodInfo m13233_MI;
extern MethodInfo m13207_MI;
extern MethodInfo m13231_MI;
extern MethodInfo m13232_MI;
extern MethodInfo m27045_MI;
extern MethodInfo m27047_MI;
extern MethodInfo m27048_MI;
extern TypeInfo t2429_TI;
extern MethodInfo m13240_MI;
extern MethodInfo m20606_MI;
extern MethodInfo m13216_MI;
extern MethodInfo m13217_MI;
extern MethodInfo m13315_MI;
extern MethodInfo m13234_MI;
extern MethodInfo m13220_MI;
extern MethodInfo m13225_MI;
extern MethodInfo m13321_MI;
extern MethodInfo m20608_MI;
extern MethodInfo m20616_MI;
extern MethodInfo m20604_MI;
static void* t373_RGCTXData[37] = 
{
	&t373_TI,
	&m13223_MI,
	&t2428_TI,
	&m13209_MI,
	&m27040_MI,
	&t2425_TI,
	&m13208_MI,
	&m13218_MI,
	&t2432_TI,
	&t286_TI,
	&m2361_MI,
	&m13213_MI,
	&m13219_MI,
	&m13221_MI,
	&m13222_MI,
	&m2362_MI,
	&m2366_MI,
	&m13233_MI,
	&m13207_MI,
	&m13231_MI,
	&m13232_MI,
	&m27045_MI,
	&m27047_MI,
	&m27048_MI,
	&t2429_TI,
	&m13240_MI,
	&m20606_MI,
	&m13216_MI,
	&m13217_MI,
	&m13315_MI,
	&m13234_MI,
	&m13220_MI,
	&m13225_MI,
	&m13321_MI,
	&m20608_MI,
	&m20616_MI,
	&m20604_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t373_0_0_0;
extern Il2CppType t373_1_0_0;
extern TypeInfo t25_TI;
struct t373;
extern TypeInfo t373_TI;
extern Il2CppGenericClass t373_GC;
extern CustomAttributesCache t957__CustomAttributeCache;
TypeInfo t373_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t373_MIs, t373_PIs, t373_FIs, NULL, &t25_TI, NULL, NULL, &t373_TI, t373_ITIs, t373_VT, &t957__CustomAttributeCache, &t373_TI, &t373_0_0_0, &t373_1_0_0, t373_IOs, &t373_GC, NULL, t373_FDVs, NULL, t373_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t373), 0, -1, sizeof(t373_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 50, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2432_TI;

#include "t1404.h"
extern TypeInfo t2432_TI;
extern TypeInfo t1387_TI;
extern TypeInfo t286_TI;
extern TypeInfo t373_TI;
extern TypeInfo t131_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1404_TI;
#include "t1404MD.h"
extern MethodInfo m13237_MI;
extern MethodInfo m7430_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m3520_MI;
extern MethodInfo m7635_MI;
extern MethodInfo m7431_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Selectable>
extern Il2CppType t373_0_0_1;
FieldInfo t2432_f0_FieldInfo = 
{
	"l", &t373_0_0_1, &t2432_TI, offsetof(t2432, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2432_f1_FieldInfo = 
{
	"next", &t134_0_0_1, &t2432_TI, offsetof(t2432, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2432_f2_FieldInfo = 
{
	"ver", &t134_0_0_1, &t2432_TI, offsetof(t2432, f2) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t286_0_0_1;
FieldInfo t2432_f3_FieldInfo = 
{
	"current", &t286_0_0_1, &t2432_TI, offsetof(t2432, f3) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2432_FIs[] =
{
	&t2432_f0_FieldInfo,
	&t2432_f1_FieldInfo,
	&t2432_f2_FieldInfo,
	&t2432_f3_FieldInfo,
	NULL
};
extern MethodInfo m13235_MI;
static PropertyInfo t2432____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2432_TI, "System.Collections.IEnumerator.Current", &m13235_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13239_MI;
static PropertyInfo t2432____Current_PropertyInfo = 
{
	&t2432_TI, "Current", &m13239_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2432_PIs[] =
{
	&t2432____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2432____Current_PropertyInfo,
	NULL
};
extern Il2CppType t373_0_0_0;
static ParameterInfo t2432_m13234_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t373_0_0_0},
};
extern TypeInfo t2432_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13234_MI = 
{
	".ctor", (methodPointerType)&m9346_gshared, &t2432_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2432_m13234_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2432_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13235_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m9347_gshared, &t2432_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2432_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13236_MI = 
{
	"Dispose", (methodPointerType)&m9348_gshared, &t2432_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2432_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13237_MI = 
{
	"VerifyState", (methodPointerType)&m9349_gshared, &t2432_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2432_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13238_MI = 
{
	"MoveNext", (methodPointerType)&m9350_gshared, &t2432_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2432_TI;
extern Il2CppType t286_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13239_MI = 
{
	"get_Current", (methodPointerType)&m9351_gshared, &t2432_TI, &t286_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2432_MIs[] =
{
	&m13234_MI,
	&m13235_MI,
	&m13236_MI,
	&m13237_MI,
	&m13238_MI,
	&m13239_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13235_MI;
extern MethodInfo m13238_MI;
extern MethodInfo m13236_MI;
extern MethodInfo m13239_MI;
static MethodInfo* t2432_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13235_MI,
	&m13238_MI,
	&m13236_MI,
	&m13239_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2427_TI;
static TypeInfo* t2432_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2427_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2427_TI;
static Il2CppInterfaceOffsetPair t2432_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2427_TI, 7},
};
extern MethodInfo m13237_MI;
extern TypeInfo t286_TI;
extern TypeInfo t2432_TI;
static void* t2432_RGCTXData[3] = 
{
	&m13237_MI,
	&t286_TI,
	&t2432_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2432_0_0_0;
extern Il2CppType t2432_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2432_TI;
extern Il2CppGenericClass t2432_GC;
extern TypeInfo t957_TI;
TypeInfo t2432_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2432_MIs, t2432_PIs, t2432_FIs, NULL, &t117_TI, NULL, &t957_TI, &t2432_TI, t2432_ITIs, t2432_VT, &EmptyCustomAttributesCache, &t2432_TI, &t2432_0_0_0, &t2432_1_0_0, t2432_IOs, &t2432_GC, NULL, NULL, NULL, t2432_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2432)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2429_TI;

#include "t177.h"
extern TypeInfo t2429_TI;
extern TypeInfo t286_TI;
extern TypeInfo t134_TI;
extern TypeInfo t177_TI;
extern TypeInfo t2433_TI;
extern TypeInfo t2428_TI;
extern TypeInfo t165_TI;
extern TypeInfo t759_TI;
extern TypeInfo t123_TI;
extern TypeInfo t122_TI;
extern TypeInfo t703_TI;
extern TypeInfo t78_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2425_TI;
extern TypeInfo t2426_TI;
extern TypeInfo t2427_TI;
#include "t177MD.h"
#include "t2434MD.h"
extern MethodInfo m13269_MI;
extern MethodInfo m566_MI;
extern MethodInfo m27049_MI;
extern MethodInfo m27040_MI;
extern MethodInfo m452_MI;
extern MethodInfo m489_MI;
extern MethodInfo m7922_MI;
extern MethodInfo m7831_MI;
extern MethodInfo m13301_MI;
extern MethodInfo m27044_MI;
extern MethodInfo m27051_MI;
extern MethodInfo m27045_MI;
extern MethodInfo m27047_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Selectable>
extern Il2CppType t2433_0_0_1;
FieldInfo t2429_f0_FieldInfo = 
{
	"list", &t2433_0_0_1, &t2429_TI, offsetof(t2429, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2429_FIs[] =
{
	&t2429_f0_FieldInfo,
	NULL
};
extern MethodInfo m13246_MI;
extern MethodInfo m13247_MI;
static PropertyInfo t2429____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2429_TI, "System.Collections.Generic.IList<T>.Item", &m13246_MI, &m13247_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13248_MI;
static PropertyInfo t2429____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2429_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13248_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13258_MI;
static PropertyInfo t2429____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2429_TI, "System.Collections.ICollection.IsSynchronized", &m13258_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13259_MI;
static PropertyInfo t2429____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2429_TI, "System.Collections.ICollection.SyncRoot", &m13259_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13260_MI;
static PropertyInfo t2429____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2429_TI, "System.Collections.IList.IsFixedSize", &m13260_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13261_MI;
static PropertyInfo t2429____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2429_TI, "System.Collections.IList.IsReadOnly", &m13261_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13262_MI;
extern MethodInfo m13263_MI;
static PropertyInfo t2429____System_Collections_IList_Item_PropertyInfo = 
{
	&t2429_TI, "System.Collections.IList.Item", &m13262_MI, &m13263_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13268_MI;
static PropertyInfo t2429____Count_PropertyInfo = 
{
	&t2429_TI, "Count", &m13268_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13269_MI;
static PropertyInfo t2429____Item_PropertyInfo = 
{
	&t2429_TI, "Item", &m13269_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2429_PIs[] =
{
	&t2429____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2429____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2429____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2429____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2429____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2429____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2429____System_Collections_IList_Item_PropertyInfo,
	&t2429____Count_PropertyInfo,
	&t2429____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2433_0_0_0;
static ParameterInfo t2429_m13240_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2433_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13240_MI = 
{
	".ctor", (methodPointerType)&m9352_gshared, &t2429_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2429_m13240_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t2429_m13241_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13241_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m9353_gshared, &t2429_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2429_m13241_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13242_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m9354_gshared, &t2429_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t2429_m13243_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13243_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m9355_gshared, &t2429_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2429_m13243_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t2429_m13244_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13244_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m9356_gshared, &t2429_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2429_m13244_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2429_m13245_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13245_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m9357_gshared, &t2429_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2429_m13245_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2429_m13246_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t286_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13246_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m9358_gshared, &t2429_TI, &t286_0_0_0, RuntimeInvoker_t25_t134, t2429_m13246_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t2429_m13247_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13247_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m9359_gshared, &t2429_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2429_m13247_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13248_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9360_gshared, &t2429_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2429_m13249_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13249_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9361_gshared, &t2429_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2429_m13249_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13250_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9362_gshared, &t2429_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2429_m13251_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13251_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9363_gshared, &t2429_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2429_m13251_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13252_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m9364_gshared, &t2429_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2429_m13253_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13253_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9365_gshared, &t2429_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2429_m13253_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2429_m13254_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13254_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9366_gshared, &t2429_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2429_m13254_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2429_m13255_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13255_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9367_gshared, &t2429_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2429_m13255_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2429_m13256_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13256_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9368_gshared, &t2429_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2429_m13256_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2429_m13257_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13257_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m9369_gshared, &t2429_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2429_m13257_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13258_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9370_gshared, &t2429_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13259_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9371_gshared, &t2429_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13260_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9372_gshared, &t2429_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13261_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9373_gshared, &t2429_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2429_m13262_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13262_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9374_gshared, &t2429_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t2429_m13262_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2429_m13263_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13263_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9375_gshared, &t2429_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2429_m13263_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t2429_m13264_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13264_MI = 
{
	"Contains", (methodPointerType)&m9376_gshared, &t2429_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2429_m13264_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2425_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2429_m13265_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2425_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13265_MI = 
{
	"CopyTo", (methodPointerType)&m9377_gshared, &t2429_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2429_m13265_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t2427_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13266_MI = 
{
	"GetEnumerator", (methodPointerType)&m9378_gshared, &t2429_TI, &t2427_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t2429_m13267_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13267_MI = 
{
	"IndexOf", (methodPointerType)&m9379_gshared, &t2429_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2429_m13267_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13268_MI = 
{
	"get_Count", (methodPointerType)&m9380_gshared, &t2429_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2429_m13269_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t286_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13269_MI = 
{
	"get_Item", (methodPointerType)&m9381_gshared, &t2429_TI, &t286_0_0_0, RuntimeInvoker_t25_t134, t2429_m13269_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2429_MIs[] =
{
	&m13240_MI,
	&m13241_MI,
	&m13242_MI,
	&m13243_MI,
	&m13244_MI,
	&m13245_MI,
	&m13246_MI,
	&m13247_MI,
	&m13248_MI,
	&m13249_MI,
	&m13250_MI,
	&m13251_MI,
	&m13252_MI,
	&m13253_MI,
	&m13254_MI,
	&m13255_MI,
	&m13256_MI,
	&m13257_MI,
	&m13258_MI,
	&m13259_MI,
	&m13260_MI,
	&m13261_MI,
	&m13262_MI,
	&m13263_MI,
	&m13264_MI,
	&m13265_MI,
	&m13266_MI,
	&m13267_MI,
	&m13268_MI,
	&m13269_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13250_MI;
extern MethodInfo m13268_MI;
extern MethodInfo m13258_MI;
extern MethodInfo m13259_MI;
extern MethodInfo m13249_MI;
extern MethodInfo m13260_MI;
extern MethodInfo m13261_MI;
extern MethodInfo m13262_MI;
extern MethodInfo m13263_MI;
extern MethodInfo m13251_MI;
extern MethodInfo m13252_MI;
extern MethodInfo m13253_MI;
extern MethodInfo m13254_MI;
extern MethodInfo m13255_MI;
extern MethodInfo m13256_MI;
extern MethodInfo m13257_MI;
extern MethodInfo m13268_MI;
extern MethodInfo m13248_MI;
extern MethodInfo m13241_MI;
extern MethodInfo m13242_MI;
extern MethodInfo m13264_MI;
extern MethodInfo m13265_MI;
extern MethodInfo m13244_MI;
extern MethodInfo m13267_MI;
extern MethodInfo m13243_MI;
extern MethodInfo m13245_MI;
extern MethodInfo m13246_MI;
extern MethodInfo m13247_MI;
extern MethodInfo m13266_MI;
extern MethodInfo m13269_MI;
static MethodInfo* t2429_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13250_MI,
	&m13268_MI,
	&m13258_MI,
	&m13259_MI,
	&m13249_MI,
	&m13260_MI,
	&m13261_MI,
	&m13262_MI,
	&m13263_MI,
	&m13251_MI,
	&m13252_MI,
	&m13253_MI,
	&m13254_MI,
	&m13255_MI,
	&m13256_MI,
	&m13257_MI,
	&m13268_MI,
	&m13248_MI,
	&m13241_MI,
	&m13242_MI,
	&m13264_MI,
	&m13265_MI,
	&m13244_MI,
	&m13267_MI,
	&m13243_MI,
	&m13245_MI,
	&m13246_MI,
	&m13247_MI,
	&m13266_MI,
	&m13269_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2428_TI;
extern TypeInfo t2433_TI;
extern TypeInfo t2426_TI;
static TypeInfo* t2429_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t2428_TI,
	&t2433_TI,
	&t2426_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2428_TI;
extern TypeInfo t2433_TI;
extern TypeInfo t2426_TI;
static Il2CppInterfaceOffsetPair t2429_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t2428_TI, 20},
	{ &t2433_TI, 27},
	{ &t2426_TI, 32},
};
extern MethodInfo m13269_MI;
extern MethodInfo m13301_MI;
extern TypeInfo t286_TI;
extern MethodInfo m27044_MI;
extern MethodInfo m27051_MI;
extern MethodInfo m27049_MI;
extern MethodInfo m27045_MI;
extern MethodInfo m27047_MI;
extern MethodInfo m27040_MI;
static void* t2429_RGCTXData[9] = 
{
	&m13269_MI,
	&m13301_MI,
	&t286_TI,
	&m27044_MI,
	&m27051_MI,
	&m27049_MI,
	&m27045_MI,
	&m27047_MI,
	&m27040_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2429_0_0_0;
extern Il2CppType t2429_1_0_0;
extern TypeInfo t25_TI;
struct t2429;
extern TypeInfo t2429_TI;
extern Il2CppGenericClass t2429_GC;
extern CustomAttributesCache t959__CustomAttributeCache;
TypeInfo t2429_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2429_MIs, t2429_PIs, t2429_FIs, NULL, &t25_TI, NULL, NULL, &t2429_TI, t2429_ITIs, t2429_VT, &t959__CustomAttributeCache, &t2429_TI, &t2429_0_0_0, &t2429_1_0_0, t2429_IOs, &t2429_GC, NULL, NULL, NULL, t2429_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2429), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2434.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2434_TI;

extern TypeInfo t2434_TI;
extern TypeInfo t2428_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2433_TI;
extern TypeInfo t286_TI;
extern TypeInfo t134_TI;
extern TypeInfo t123_TI;
extern TypeInfo t373_TI;
extern TypeInfo t759_TI;
extern TypeInfo t25_TI;
extern TypeInfo t122_TI;
extern TypeInfo t2426_TI;
extern TypeInfo t2427_TI;
extern TypeInfo t2425_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t177_TI;
extern TypeInfo t1132_TI;
extern Il2CppType t286_0_0_0;
extern MethodInfo m27041_MI;
extern MethodInfo m13304_MI;
extern MethodInfo m13305_MI;
extern MethodInfo m27049_MI;
extern MethodInfo m13302_MI;
extern MethodInfo m13300_MI;
extern MethodInfo m27040_MI;
extern MethodInfo m452_MI;
extern MethodInfo m2355_MI;
extern MethodInfo m7921_MI;
extern MethodInfo m7922_MI;
extern MethodInfo m27047_MI;
extern MethodInfo m13293_MI;
extern MethodInfo m13301_MI;
extern MethodInfo m27044_MI;
extern MethodInfo m27051_MI;
extern MethodInfo m13303_MI;
extern MethodInfo m13291_MI;
extern MethodInfo m13296_MI;
extern MethodInfo m13287_MI;
extern MethodInfo m27043_MI;
extern MethodInfo m27045_MI;
extern MethodInfo m27052_MI;
extern MethodInfo m27053_MI;
extern MethodInfo m27050_MI;
extern MethodInfo m484_MI;
extern MethodInfo m4337_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m566_MI;
extern MethodInfo m7920_MI;
extern MethodInfo m7923_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>
extern Il2CppType t2433_0_0_1;
FieldInfo t2434_f0_FieldInfo = 
{
	"list", &t2433_0_0_1, &t2434_TI, offsetof(t2434, f0), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_1;
FieldInfo t2434_f1_FieldInfo = 
{
	"syncRoot", &t25_0_0_1, &t2434_TI, offsetof(t2434, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2434_FIs[] =
{
	&t2434_f0_FieldInfo,
	&t2434_f1_FieldInfo,
	NULL
};
extern MethodInfo m13271_MI;
static PropertyInfo t2434____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2434_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13271_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13279_MI;
static PropertyInfo t2434____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2434_TI, "System.Collections.ICollection.IsSynchronized", &m13279_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13280_MI;
static PropertyInfo t2434____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2434_TI, "System.Collections.ICollection.SyncRoot", &m13280_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13281_MI;
static PropertyInfo t2434____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2434_TI, "System.Collections.IList.IsFixedSize", &m13281_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13282_MI;
static PropertyInfo t2434____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2434_TI, "System.Collections.IList.IsReadOnly", &m13282_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13283_MI;
extern MethodInfo m13284_MI;
static PropertyInfo t2434____System_Collections_IList_Item_PropertyInfo = 
{
	&t2434_TI, "System.Collections.IList.Item", &m13283_MI, &m13284_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13297_MI;
static PropertyInfo t2434____Count_PropertyInfo = 
{
	&t2434_TI, "Count", &m13297_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13298_MI;
extern MethodInfo m13299_MI;
static PropertyInfo t2434____Item_PropertyInfo = 
{
	&t2434_TI, "Item", &m13298_MI, &m13299_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2434_PIs[] =
{
	&t2434____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2434____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2434____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2434____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2434____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2434____System_Collections_IList_Item_PropertyInfo,
	&t2434____Count_PropertyInfo,
	&t2434____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13270_MI = 
{
	".ctor", (methodPointerType)&m9382_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2434_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13271_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9383_gshared, &t2434_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2434_m13272_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13272_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9384_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2434_m13272_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2434_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13273_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9385_gshared, &t2434_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2434_m13274_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13274_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9386_gshared, &t2434_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2434_m13274_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2434_m13275_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13275_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9387_gshared, &t2434_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2434_m13275_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2434_m13276_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13276_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9388_gshared, &t2434_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2434_m13276_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2434_m13277_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13277_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9389_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2434_m13277_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2434_m13278_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13278_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9390_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2434_m13278_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2434_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13279_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9391_gshared, &t2434_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2434_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13280_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9392_gshared, &t2434_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2434_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13281_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9393_gshared, &t2434_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2434_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13282_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9394_gshared, &t2434_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2434_m13283_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13283_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9395_gshared, &t2434_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t2434_m13283_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2434_m13284_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13284_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9396_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2434_m13284_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t2434_m13285_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13285_MI = 
{
	"Add", (methodPointerType)&m9397_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2434_m13285_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13286_MI = 
{
	"Clear", (methodPointerType)&m9398_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13287_MI = 
{
	"ClearItems", (methodPointerType)&m9399_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t2434_m13288_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13288_MI = 
{
	"Contains", (methodPointerType)&m9400_gshared, &t2434_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2434_m13288_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2425_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2434_m13289_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2425_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13289_MI = 
{
	"CopyTo", (methodPointerType)&m9401_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2434_m13289_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2434_TI;
extern Il2CppType t2427_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13290_MI = 
{
	"GetEnumerator", (methodPointerType)&m9402_gshared, &t2434_TI, &t2427_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t2434_m13291_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13291_MI = 
{
	"IndexOf", (methodPointerType)&m9403_gshared, &t2434_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2434_m13291_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t2434_m13292_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13292_MI = 
{
	"Insert", (methodPointerType)&m9404_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2434_m13292_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t2434_m13293_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13293_MI = 
{
	"InsertItem", (methodPointerType)&m9405_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2434_m13293_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t2434_m13294_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13294_MI = 
{
	"Remove", (methodPointerType)&m9406_gshared, &t2434_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2434_m13294_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2434_m13295_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13295_MI = 
{
	"RemoveAt", (methodPointerType)&m9407_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2434_m13295_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2434_m13296_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13296_MI = 
{
	"RemoveItem", (methodPointerType)&m9408_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2434_m13296_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2434_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13297_MI = 
{
	"get_Count", (methodPointerType)&m9409_gshared, &t2434_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2434_m13298_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t286_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13298_MI = 
{
	"get_Item", (methodPointerType)&m9410_gshared, &t2434_TI, &t286_0_0_0, RuntimeInvoker_t25_t134, t2434_m13298_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t2434_m13299_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13299_MI = 
{
	"set_Item", (methodPointerType)&m9411_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2434_m13299_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t2434_m13300_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13300_MI = 
{
	"SetItem", (methodPointerType)&m9412_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2434_m13300_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2434_m13301_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13301_MI = 
{
	"IsValidItem", (methodPointerType)&m9413_gshared, &t2434_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2434_m13301_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2434_m13302_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t286_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13302_MI = 
{
	"ConvertItem", (methodPointerType)&m9414_gshared, &t2434_TI, &t286_0_0_0, RuntimeInvoker_t25_t25, t2434_m13302_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2433_0_0_0;
static ParameterInfo t2434_m13303_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2433_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13303_MI = 
{
	"CheckWritable", (methodPointerType)&m9415_gshared, &t2434_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2434_m13303_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2433_0_0_0;
static ParameterInfo t2434_m13304_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2433_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13304_MI = 
{
	"IsSynchronized", (methodPointerType)&m9416_gshared, &t2434_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2434_m13304_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2433_0_0_0;
static ParameterInfo t2434_m13305_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2433_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13305_MI = 
{
	"IsFixedSize", (methodPointerType)&m9417_gshared, &t2434_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2434_m13305_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2434_MIs[] =
{
	&m13270_MI,
	&m13271_MI,
	&m13272_MI,
	&m13273_MI,
	&m13274_MI,
	&m13275_MI,
	&m13276_MI,
	&m13277_MI,
	&m13278_MI,
	&m13279_MI,
	&m13280_MI,
	&m13281_MI,
	&m13282_MI,
	&m13283_MI,
	&m13284_MI,
	&m13285_MI,
	&m13286_MI,
	&m13287_MI,
	&m13288_MI,
	&m13289_MI,
	&m13290_MI,
	&m13291_MI,
	&m13292_MI,
	&m13293_MI,
	&m13294_MI,
	&m13295_MI,
	&m13296_MI,
	&m13297_MI,
	&m13298_MI,
	&m13299_MI,
	&m13300_MI,
	&m13301_MI,
	&m13302_MI,
	&m13303_MI,
	&m13304_MI,
	&m13305_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13273_MI;
extern MethodInfo m13297_MI;
extern MethodInfo m13279_MI;
extern MethodInfo m13280_MI;
extern MethodInfo m13272_MI;
extern MethodInfo m13281_MI;
extern MethodInfo m13282_MI;
extern MethodInfo m13283_MI;
extern MethodInfo m13284_MI;
extern MethodInfo m13274_MI;
extern MethodInfo m13286_MI;
extern MethodInfo m13275_MI;
extern MethodInfo m13276_MI;
extern MethodInfo m13277_MI;
extern MethodInfo m13278_MI;
extern MethodInfo m13295_MI;
extern MethodInfo m13297_MI;
extern MethodInfo m13271_MI;
extern MethodInfo m13285_MI;
extern MethodInfo m13286_MI;
extern MethodInfo m13288_MI;
extern MethodInfo m13289_MI;
extern MethodInfo m13294_MI;
extern MethodInfo m13291_MI;
extern MethodInfo m13292_MI;
extern MethodInfo m13295_MI;
extern MethodInfo m13298_MI;
extern MethodInfo m13299_MI;
extern MethodInfo m13290_MI;
extern MethodInfo m13287_MI;
extern MethodInfo m13293_MI;
extern MethodInfo m13296_MI;
extern MethodInfo m13300_MI;
static MethodInfo* t2434_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13273_MI,
	&m13297_MI,
	&m13279_MI,
	&m13280_MI,
	&m13272_MI,
	&m13281_MI,
	&m13282_MI,
	&m13283_MI,
	&m13284_MI,
	&m13274_MI,
	&m13286_MI,
	&m13275_MI,
	&m13276_MI,
	&m13277_MI,
	&m13278_MI,
	&m13295_MI,
	&m13297_MI,
	&m13271_MI,
	&m13285_MI,
	&m13286_MI,
	&m13288_MI,
	&m13289_MI,
	&m13294_MI,
	&m13291_MI,
	&m13292_MI,
	&m13295_MI,
	&m13298_MI,
	&m13299_MI,
	&m13290_MI,
	&m13287_MI,
	&m13293_MI,
	&m13296_MI,
	&m13300_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2428_TI;
extern TypeInfo t2433_TI;
extern TypeInfo t2426_TI;
static TypeInfo* t2434_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t2428_TI,
	&t2433_TI,
	&t2426_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2428_TI;
extern TypeInfo t2433_TI;
extern TypeInfo t2426_TI;
static Il2CppInterfaceOffsetPair t2434_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t2428_TI, 20},
	{ &t2433_TI, 27},
	{ &t2426_TI, 32},
};
extern TypeInfo t373_TI;
extern MethodInfo m2355_MI;
extern MethodInfo m27041_MI;
extern MethodInfo m27047_MI;
extern MethodInfo m27040_MI;
extern MethodInfo m13302_MI;
extern MethodInfo m13293_MI;
extern MethodInfo m13301_MI;
extern TypeInfo t286_TI;
extern MethodInfo m27044_MI;
extern MethodInfo m27051_MI;
extern MethodInfo m13303_MI;
extern MethodInfo m13291_MI;
extern MethodInfo m13296_MI;
extern MethodInfo m13304_MI;
extern MethodInfo m13305_MI;
extern MethodInfo m27049_MI;
extern MethodInfo m13300_MI;
extern MethodInfo m13287_MI;
extern MethodInfo m27043_MI;
extern MethodInfo m27045_MI;
extern MethodInfo m27052_MI;
extern MethodInfo m27053_MI;
extern MethodInfo m27050_MI;
extern Il2CppType t286_0_0_0;
static void* t2434_RGCTXData[25] = 
{
	&t373_TI,
	&m2355_MI,
	&m27041_MI,
	&m27047_MI,
	&m27040_MI,
	&m13302_MI,
	&m13293_MI,
	&m13301_MI,
	&t286_TI,
	&m27044_MI,
	&m27051_MI,
	&m13303_MI,
	&m13291_MI,
	&m13296_MI,
	&m13304_MI,
	&m13305_MI,
	&m27049_MI,
	&m13300_MI,
	&m13287_MI,
	&m27043_MI,
	&m27045_MI,
	&m27052_MI,
	&m27053_MI,
	&m27050_MI,
	(void*)&t286_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2434_0_0_0;
extern Il2CppType t2434_1_0_0;
extern TypeInfo t25_TI;
struct t2434;
extern TypeInfo t2434_TI;
extern Il2CppGenericClass t2434_GC;
extern CustomAttributesCache t958__CustomAttributeCache;
TypeInfo t2434_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2434_MIs, t2434_PIs, t2434_FIs, NULL, &t25_TI, NULL, NULL, &t2434_TI, t2434_ITIs, t2434_VT, &t958__CustomAttributeCache, &t2434_TI, &t2434_0_0_0, &t2434_1_0_0, t2434_IOs, &t2434_GC, NULL, NULL, NULL, t2434_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2434), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2435_TI;
#include "t2435MD.h"

#include "t953.h"
#include "t2436.h"
extern TypeInfo t2435_TI;
extern TypeInfo t5849_TI;
extern TypeInfo t131_TI;
extern TypeInfo t286_TI;
extern TypeInfo t125_TI;
extern TypeInfo t953_TI;
extern TypeInfo t637_TI;
extern TypeInfo t2436_TI;
extern TypeInfo t134_TI;
#include "t1340MD.h"
#include "t2436MD.h"
extern Il2CppType t5849_0_0_0;
extern Il2CppType t286_0_0_0;
extern Il2CppType t953_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m13311_MI;
extern MethodInfo m27746_MI;
extern MethodInfo m20605_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Selectable>
extern Il2CppType t2435_0_0_49;
FieldInfo t2435_f0_FieldInfo = 
{
	"_default", &t2435_0_0_49, &t2435_TI, offsetof(t2435_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2435_FIs[] =
{
	&t2435_f0_FieldInfo,
	NULL
};
extern MethodInfo m13310_MI;
static PropertyInfo t2435____Default_PropertyInfo = 
{
	&t2435_TI, "Default", &m13310_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2435_PIs[] =
{
	&t2435____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2435_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13306_MI = 
{
	".ctor", (methodPointerType)&m8967_gshared, &t2435_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2435_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13307_MI = 
{
	".cctor", (methodPointerType)&m8968_gshared, &t2435_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2435_m13308_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2435_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13308_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8969_gshared, &t2435_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2435_m13308_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2435_m13309_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2435_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13309_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8970_gshared, &t2435_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2435_m13309_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t2435_m27746_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2435_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27746_MI = 
{
	"GetHashCode", NULL, &t2435_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2435_m27746_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t2435_m20605_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2435_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20605_MI = 
{
	"Equals", NULL, &t2435_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2435_m20605_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2435_TI;
extern Il2CppType t2435_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13310_MI = 
{
	"get_Default", (methodPointerType)&m8971_gshared, &t2435_TI, &t2435_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2435_MIs[] =
{
	&m13306_MI,
	&m13307_MI,
	&m13308_MI,
	&m13309_MI,
	&m27746_MI,
	&m20605_MI,
	&m13310_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m20605_MI;
extern MethodInfo m27746_MI;
extern MethodInfo m13309_MI;
extern MethodInfo m13308_MI;
static MethodInfo* t2435_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m20605_MI,
	&m27746_MI,
	&m13309_MI,
	&m13308_MI,
	NULL,
	NULL,
};
extern TypeInfo t5850_TI;
extern TypeInfo t977_TI;
static TypeInfo* t2435_ITIs[] = 
{
	&t5850_TI,
	&t977_TI,
};
extern TypeInfo t5850_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t2435_IOs[] = 
{
	{ &t5850_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppType t5849_0_0_0;
extern Il2CppType t286_0_0_0;
extern TypeInfo t2435_TI;
extern TypeInfo t2435_TI;
extern TypeInfo t2436_TI;
extern MethodInfo m13311_MI;
extern TypeInfo t286_TI;
extern MethodInfo m27746_MI;
extern MethodInfo m20605_MI;
static void* t2435_RGCTXData[9] = 
{
	(void*)&t5849_0_0_0,
	(void*)&t286_0_0_0,
	&t2435_TI,
	&t2435_TI,
	&t2436_TI,
	&m13311_MI,
	&t286_TI,
	&m27746_MI,
	&m20605_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2435_0_0_0;
extern Il2CppType t2435_1_0_0;
extern TypeInfo t25_TI;
struct t2435;
extern TypeInfo t2435_TI;
extern Il2CppGenericClass t2435_GC;
TypeInfo t2435_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2435_MIs, t2435_PIs, t2435_FIs, NULL, &t25_TI, NULL, NULL, &t2435_TI, t2435_ITIs, t2435_VT, &EmptyCustomAttributesCache, &t2435_TI, &t2435_0_0_0, &t2435_1_0_0, t2435_IOs, &t2435_GC, NULL, NULL, NULL, t2435_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2435), 0, -1, sizeof(t2435_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5850_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Selectable>
extern Il2CppType t286_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t5850_m27747_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t5850_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27747_MI = 
{
	"Equals", NULL, &t5850_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t5850_m27747_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t5850_m27748_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t5850_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27748_MI = 
{
	"GetHashCode", NULL, &t5850_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5850_m27748_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5850_MIs[] =
{
	&m27747_MI,
	&m27748_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5850_0_0_0;
extern Il2CppType t5850_1_0_0;
struct t5850;
extern TypeInfo t5850_TI;
extern Il2CppGenericClass t5850_GC;
TypeInfo t5850_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5850_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5850_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5850_TI, &t5850_0_0_0, &t5850_1_0_0, NULL, &t5850_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5849_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.UI.Selectable>
extern Il2CppType t286_0_0_0;
static ParameterInfo t5849_m27749_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t5849_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27749_MI = 
{
	"Equals", NULL, &t5849_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5849_m27749_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5849_MIs[] =
{
	&m27749_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5849_0_0_0;
extern Il2CppType t5849_1_0_0;
struct t5849;
extern TypeInfo t5849_TI;
extern Il2CppGenericClass t5849_GC;
TypeInfo t5849_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5849_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5849_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5849_TI, &t5849_0_0_0, &t5849_1_0_0, NULL, &t5849_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2436_TI;

extern TypeInfo t286_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t125_TI;
extern MethodInfo m13306_MI;
extern MethodInfo m456_MI;
extern MethodInfo m455_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Selectable>
extern TypeInfo t2436_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13311_MI = 
{
	".ctor", (methodPointerType)&m9002_gshared, &t2436_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t2436_m13312_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2436_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13312_MI = 
{
	"GetHashCode", (methodPointerType)&m9003_gshared, &t2436_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2436_m13312_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t2436_m13313_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2436_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13313_MI = 
{
	"Equals", (methodPointerType)&m9004_gshared, &t2436_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2436_m13313_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2436_MIs[] =
{
	&m13311_MI,
	&m13312_MI,
	&m13313_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13313_MI;
extern MethodInfo m13312_MI;
extern MethodInfo m13309_MI;
extern MethodInfo m13308_MI;
extern MethodInfo m13312_MI;
extern MethodInfo m13313_MI;
static MethodInfo* t2436_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13313_MI,
	&m13312_MI,
	&m13309_MI,
	&m13308_MI,
	&m13312_MI,
	&m13313_MI,
};
extern TypeInfo t5850_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t2436_IOs[] = 
{
	{ &t5850_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppType t5849_0_0_0;
extern Il2CppType t286_0_0_0;
extern TypeInfo t2435_TI;
extern TypeInfo t2435_TI;
extern TypeInfo t2436_TI;
extern MethodInfo m13311_MI;
extern TypeInfo t286_TI;
extern MethodInfo m27746_MI;
extern MethodInfo m20605_MI;
extern MethodInfo m13306_MI;
extern TypeInfo t286_TI;
static void* t2436_RGCTXData[11] = 
{
	(void*)&t5849_0_0_0,
	(void*)&t286_0_0_0,
	&t2435_TI,
	&t2435_TI,
	&t2436_TI,
	&m13311_MI,
	&t286_TI,
	&m27746_MI,
	&m20605_MI,
	&m13306_MI,
	&t286_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2436_0_0_0;
extern Il2CppType t2436_1_0_0;
extern TypeInfo t2435_TI;
struct t2436;
extern TypeInfo t2436_TI;
extern Il2CppGenericClass t2436_GC;
extern TypeInfo t952_TI;
TypeInfo t2436_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2436_MIs, NULL, NULL, NULL, &t2435_TI, NULL, &t952_TI, &t2436_TI, NULL, t2436_VT, &EmptyCustomAttributesCache, &t2436_TI, &t2436_0_0_0, &t2436_1_0_0, t2436_IOs, &t2436_GC, NULL, NULL, NULL, t2436_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2436), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2430_TI;



// Metadata Definition System.Predicate`1<UnityEngine.UI.Selectable>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2430_m13314_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2430_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13314_MI = 
{
	".ctor", (methodPointerType)&m9418_gshared, &t2430_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2430_m13314_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t2430_m13315_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2430_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13315_MI = 
{
	"Invoke", (methodPointerType)&m9419_gshared, &t2430_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2430_m13315_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2430_m13316_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2430_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13316_MI = 
{
	"BeginInvoke", (methodPointerType)&m9420_gshared, &t2430_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t2430_m13316_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2430_m13317_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2430_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13317_MI = 
{
	"EndInvoke", (methodPointerType)&m9421_gshared, &t2430_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2430_m13317_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2430_MIs[] =
{
	&m13314_MI,
	&m13315_MI,
	&m13316_MI,
	&m13317_MI,
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
extern MethodInfo m13315_MI;
extern MethodInfo m13316_MI;
extern MethodInfo m13317_MI;
static MethodInfo* t2430_VT[] =
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
	&m13315_MI,
	&m13316_MI,
	&m13317_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2430_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2430_0_0_0;
extern Il2CppType t2430_1_0_0;
extern TypeInfo t345_TI;
struct t2430;
extern TypeInfo t2430_TI;
extern Il2CppGenericClass t2430_GC;
TypeInfo t2430_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2430_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2430_TI, NULL, t2430_VT, &EmptyCustomAttributesCache, &t2430_TI, &t2430_0_0_0, &t2430_1_0_0, t2430_IOs, &t2430_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2430), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2437_TI;

#include "t941.h"
#include "t2438.h"
extern TypeInfo t2437_TI;
extern TypeInfo t3852_TI;
extern TypeInfo t131_TI;
extern TypeInfo t286_TI;
extern TypeInfo t125_TI;
extern TypeInfo t941_TI;
extern TypeInfo t637_TI;
extern TypeInfo t2438_TI;
extern TypeInfo t134_TI;
extern TypeInfo t445_TI;
#include "t2438MD.h"
extern Il2CppType t3852_0_0_0;
extern Il2CppType t286_0_0_0;
extern Il2CppType t941_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m13322_MI;
extern MethodInfo m27750_MI;
extern MethodInfo m6988_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.UI.Selectable>
extern Il2CppType t2437_0_0_49;
FieldInfo t2437_f0_FieldInfo = 
{
	"_default", &t2437_0_0_49, &t2437_TI, offsetof(t2437_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2437_FIs[] =
{
	&t2437_f0_FieldInfo,
	NULL
};
extern MethodInfo m13321_MI;
static PropertyInfo t2437____Default_PropertyInfo = 
{
	&t2437_TI, "Default", &m13321_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2437_PIs[] =
{
	&t2437____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2437_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13318_MI = 
{
	".ctor", (methodPointerType)&m9422_gshared, &t2437_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2437_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13319_MI = 
{
	".cctor", (methodPointerType)&m9423_gshared, &t2437_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2437_m13320_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2437_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13320_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m9424_gshared, &t2437_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2437_m13320_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t2437_m27750_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2437_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27750_MI = 
{
	"Compare", NULL, &t2437_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2437_m27750_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2437_TI;
extern Il2CppType t2437_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13321_MI = 
{
	"get_Default", (methodPointerType)&m9425_gshared, &t2437_TI, &t2437_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2437_MIs[] =
{
	&m13318_MI,
	&m13319_MI,
	&m13320_MI,
	&m27750_MI,
	&m13321_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m27750_MI;
extern MethodInfo m13320_MI;
static MethodInfo* t2437_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m27750_MI,
	&m13320_MI,
	NULL,
};
extern TypeInfo t3851_TI;
extern TypeInfo t147_TI;
static TypeInfo* t2437_ITIs[] = 
{
	&t3851_TI,
	&t147_TI,
};
extern TypeInfo t3851_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t2437_IOs[] = 
{
	{ &t3851_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppType t3852_0_0_0;
extern Il2CppType t286_0_0_0;
extern TypeInfo t2437_TI;
extern TypeInfo t2437_TI;
extern TypeInfo t2438_TI;
extern MethodInfo m13322_MI;
extern TypeInfo t286_TI;
extern MethodInfo m27750_MI;
static void* t2437_RGCTXData[8] = 
{
	(void*)&t3852_0_0_0,
	(void*)&t286_0_0_0,
	&t2437_TI,
	&t2437_TI,
	&t2438_TI,
	&m13322_MI,
	&t286_TI,
	&m27750_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2437_0_0_0;
extern Il2CppType t2437_1_0_0;
extern TypeInfo t25_TI;
struct t2437;
extern TypeInfo t2437_TI;
extern Il2CppGenericClass t2437_GC;
TypeInfo t2437_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2437_MIs, t2437_PIs, t2437_FIs, NULL, &t25_TI, NULL, NULL, &t2437_TI, t2437_ITIs, t2437_VT, &EmptyCustomAttributesCache, &t2437_TI, &t2437_0_0_0, &t2437_1_0_0, t2437_IOs, &t2437_GC, NULL, NULL, NULL, t2437_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2437), 0, -1, sizeof(t2437_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3851_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UI.Selectable>
extern Il2CppType t286_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t3851_m20613_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t3851_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20613_MI = 
{
	"Compare", NULL, &t3851_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t3851_m20613_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3851_MIs[] =
{
	&m20613_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3851_0_0_0;
extern Il2CppType t3851_1_0_0;
struct t3851;
extern TypeInfo t3851_TI;
extern Il2CppGenericClass t3851_GC;
TypeInfo t3851_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3851_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3851_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3851_TI, &t3851_0_0_0, &t3851_1_0_0, NULL, &t3851_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3852_TI;



// Metadata Definition System.IComparable`1<UnityEngine.UI.Selectable>
extern Il2CppType t286_0_0_0;
static ParameterInfo t3852_m20614_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t3852_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20614_MI = 
{
	"CompareTo", NULL, &t3852_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t3852_m20614_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3852_MIs[] =
{
	&m20614_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3852_0_0_0;
extern Il2CppType t3852_1_0_0;
struct t3852;
extern TypeInfo t3852_TI;
extern Il2CppGenericClass t3852_GC;
TypeInfo t3852_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3852_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3852_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3852_TI, &t3852_0_0_0, &t3852_1_0_0, NULL, &t3852_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2438_TI;

extern TypeInfo t286_TI;
extern TypeInfo t3852_TI;
extern TypeInfo t134_TI;
extern TypeInfo t143_TI;
extern TypeInfo t25_TI;
extern TypeInfo t445_TI;
extern MethodInfo m13318_MI;
extern MethodInfo m20614_MI;
extern MethodInfo m7828_MI;
extern MethodInfo m2409_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Selectable>
extern TypeInfo t2438_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13322_MI = 
{
	".ctor", (methodPointerType)&m9426_gshared, &t2438_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t2438_m13323_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2438_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13323_MI = 
{
	"Compare", (methodPointerType)&m9427_gshared, &t2438_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2438_m13323_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2438_MIs[] =
{
	&m13322_MI,
	&m13323_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13323_MI;
extern MethodInfo m13320_MI;
extern MethodInfo m13323_MI;
static MethodInfo* t2438_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13323_MI,
	&m13320_MI,
	&m13323_MI,
};
extern TypeInfo t3851_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t2438_IOs[] = 
{
	{ &t3851_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppType t3852_0_0_0;
extern Il2CppType t286_0_0_0;
extern TypeInfo t2437_TI;
extern TypeInfo t2437_TI;
extern TypeInfo t2438_TI;
extern MethodInfo m13322_MI;
extern TypeInfo t286_TI;
extern MethodInfo m27750_MI;
extern MethodInfo m13318_MI;
extern TypeInfo t286_TI;
extern TypeInfo t3852_TI;
extern MethodInfo m20614_MI;
static void* t2438_RGCTXData[12] = 
{
	(void*)&t3852_0_0_0,
	(void*)&t286_0_0_0,
	&t2437_TI,
	&t2437_TI,
	&t2438_TI,
	&m13322_MI,
	&t286_TI,
	&m27750_MI,
	&m13318_MI,
	&t286_TI,
	&t3852_TI,
	&m20614_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2438_0_0_0;
extern Il2CppType t2438_1_0_0;
extern TypeInfo t2437_TI;
struct t2438;
extern TypeInfo t2438_TI;
extern Il2CppGenericClass t2438_GC;
extern TypeInfo t940_TI;
TypeInfo t2438_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2438_MIs, NULL, NULL, NULL, &t2437_TI, NULL, &t940_TI, &t2438_TI, NULL, t2438_VT, &EmptyCustomAttributesCache, &t2438_TI, &t2438_0_0_0, &t2438_1_0_0, t2438_IOs, &t2438_GC, NULL, NULL, NULL, t2438_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2438), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2431_TI;
#include "t2431MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.UI.Selectable>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2431_m13324_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2431_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13324_MI = 
{
	".ctor", (methodPointerType)&m9458_gshared, &t2431_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2431_m13324_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t2431_m13325_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2431_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13325_MI = 
{
	"Invoke", (methodPointerType)&m9459_gshared, &t2431_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2431_m13325_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
extern Il2CppType t286_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2431_m13326_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2431_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13326_MI = 
{
	"BeginInvoke", (methodPointerType)&m9460_gshared, &t2431_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25_t25, t2431_m13326_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2431_m13327_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2431_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13327_MI = 
{
	"EndInvoke", (methodPointerType)&m9461_gshared, &t2431_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2431_m13327_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2431_MIs[] =
{
	&m13324_MI,
	&m13325_MI,
	&m13326_MI,
	&m13327_MI,
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
extern MethodInfo m13325_MI;
extern MethodInfo m13326_MI;
extern MethodInfo m13327_MI;
static MethodInfo* t2431_VT[] =
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
	&m13325_MI,
	&m13326_MI,
	&m13327_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2431_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2431_0_0_0;
extern Il2CppType t2431_1_0_0;
extern TypeInfo t345_TI;
struct t2431;
extern TypeInfo t2431_TI;
extern Il2CppGenericClass t2431_GC;
TypeInfo t2431_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2431_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2431_TI, NULL, t2431_VT, &EmptyCustomAttributesCache, &t2431_TI, &t2431_0_0_0, &t2431_1_0_0, t2431_IOs, &t2431_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2431), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t374.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t374_TI;
#include "t374MD.h"

#include "t465.h"
#include "UnityEngine_ArrayTypes.h"
#include "t2446.h"
#include "t2443.h"
#include "t2444.h"
#include "t2452.h"
#include "t2445.h"
extern TypeInfo t374_TI;
extern TypeInfo t465_TI;
extern TypeInfo t134_TI;
extern TypeInfo t123_TI;
extern TypeInfo t445_TI;
extern TypeInfo t685_TI;
extern TypeInfo t1386_TI;
extern TypeInfo t1351_TI;
extern TypeInfo t2442_TI;
extern TypeInfo t2439_TI;
extern TypeInfo t2446_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2440_TI;
extern TypeInfo t2441_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2443_TI;
extern TypeInfo t165_TI;
extern TypeInfo t2444_TI;
extern TypeInfo t2452_TI;
#include "t2443MD.h"
#include "t2444MD.h"
#include "t2446MD.h"
#include "t2452MD.h"
extern MethodInfo m2358_MI;
extern MethodInfo m13374_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m6998_MI;
extern MethodInfo m20630_MI;
extern MethodInfo m6999_MI;
extern MethodInfo m13361_MI;
extern MethodInfo m452_MI;
extern MethodInfo m13363_MI;
extern MethodInfo m13349_MI;
extern MethodInfo m27751_MI;
extern MethodInfo m13348_MI;
extern MethodInfo m13358_MI;
extern MethodInfo m4283_MI;
extern MethodInfo m13346_MI;
extern MethodInfo m13353_MI;
extern MethodInfo m13359_MI;
extern MethodInfo m13362_MI;
extern MethodInfo m13364_MI;
extern MethodInfo m13347_MI;
extern MethodInfo m13372_MI;
extern MethodInfo m7436_MI;
extern MethodInfo m13373_MI;
extern MethodInfo m27752_MI;
extern MethodInfo m27753_MI;
extern MethodInfo m27754_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m13386_MI;
extern MethodInfo m4279_MI;
extern MethodInfo m20632_MI;
extern MethodInfo m13356_MI;
extern MethodInfo m13357_MI;
extern MethodInfo m489_MI;
extern MethodInfo m13461_MI;
extern MethodInfo m13380_MI;
extern MethodInfo m13360_MI;
extern MethodInfo m13366_MI;
extern MethodInfo m4295_MI;
extern MethodInfo m13467_MI;
extern MethodInfo m20634_MI;
extern MethodInfo m20642_MI;
extern MethodInfo m4282_MI;
struct t122;
#define m20630(__this, p0, p1, method) (void)m18837_gshared((t25 *)__this, (t158**)p0, (int32_t)p1, method)
extern MethodInfo m20630_MI;
struct t122;
#include "t2450.h"
#define m20632(__this, p0, p1, p2, p3, method) (int32_t)m8232_gshared((t25 *)__this, (t158*)p0, (t25 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m20632_MI;
struct t122;
#define m20634(__this, p0, p1, p2, p3, method) (void)m18840_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (int32_t)p2, (t25*)p3, method)
extern MethodInfo m20634_MI;
struct t122;
#define m20642(__this, p0, p1, p2, method) (void)m18914_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (t1889 *)p2, method)
extern MethodInfo m20642_MI;


extern MethodInfo m13358_MI;
 t2446  m13358 (t374 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13358_MI);
	{
		t2446  L_0 = {0};
		m13380(&L_0, __this, &m13380_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
extern Il2CppType t134_0_0_32849;
FieldInfo t374_f0_FieldInfo = 
{
	"DefaultCapacity", &t134_0_0_32849, &t374_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2439_0_0_1;
FieldInfo t374_f1_FieldInfo = 
{
	"_items", &t2439_0_0_1, &t374_TI, offsetof(t374, f1), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t374_f2_FieldInfo = 
{
	"_size", &t134_0_0_1, &t374_TI, offsetof(t374, f2), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t374_f3_FieldInfo = 
{
	"_version", &t134_0_0_1, &t374_TI, offsetof(t374, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2439_0_0_49;
FieldInfo t374_f4_FieldInfo = 
{
	"EmptyArray", &t2439_0_0_49, &t374_TI, offsetof(t374_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t374_FIs[] =
{
	&t374_f0_FieldInfo,
	&t374_f1_FieldInfo,
	&t374_f2_FieldInfo,
	&t374_f3_FieldInfo,
	&t374_f4_FieldInfo,
	NULL
};
static const int32_t t374_f0_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t374_f0_DefaultValue = 
{
	&t374_f0_FieldInfo, { (char*)&t374_f0_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t374_FDVs[] = 
{
	&t374_f0_DefaultValue,
	NULL
};
extern MethodInfo m13339_MI;
static PropertyInfo t374____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t374_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13339_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13340_MI;
static PropertyInfo t374____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t374_TI, "System.Collections.ICollection.IsSynchronized", &m13340_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13341_MI;
static PropertyInfo t374____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t374_TI, "System.Collections.ICollection.SyncRoot", &m13341_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13342_MI;
static PropertyInfo t374____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t374_TI, "System.Collections.IList.IsFixedSize", &m13342_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13343_MI;
static PropertyInfo t374____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t374_TI, "System.Collections.IList.IsReadOnly", &m13343_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13344_MI;
extern MethodInfo m13345_MI;
static PropertyInfo t374____System_Collections_IList_Item_PropertyInfo = 
{
	&t374_TI, "System.Collections.IList.Item", &m13344_MI, &m13345_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13372_MI;
extern MethodInfo m13373_MI;
static PropertyInfo t374____Capacity_PropertyInfo = 
{
	&t374_TI, "Capacity", &m13372_MI, &m13373_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2360_MI;
static PropertyInfo t374____Count_PropertyInfo = 
{
	&t374_TI, "Count", &m2360_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2358_MI;
extern MethodInfo m13374_MI;
static PropertyInfo t374____Item_PropertyInfo = 
{
	&t374_TI, "Item", &m2358_MI, &m13374_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t374_PIs[] =
{
	&t374____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t374____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t374____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t374____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t374____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t374____System_Collections_IList_Item_PropertyInfo,
	&t374____Capacity_PropertyInfo,
	&t374____Count_PropertyInfo,
	&t374____Item_PropertyInfo,
	NULL
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2354_MI = 
{
	".ctor", (methodPointerType)&m9248_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2440_0_0_0;
static ParameterInfo t374_m13328_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2440_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13328_MI = 
{
	".ctor", (methodPointerType)&m9250_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t374_m13328_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t374_m13329_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13329_MI = 
{
	".ctor", (methodPointerType)&m9252_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t374_m13329_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13330_MI = 
{
	".cctor", (methodPointerType)&m9254_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t2441_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13331_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m9256_gshared, &t374_TI, &t2441_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t374_m13332_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13332_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9258_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t374_m13332_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13333_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9260_gshared, &t374_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t374_m13334_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13334_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9262_gshared, &t374_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t374_m13334_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t374_m13335_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13335_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9264_gshared, &t374_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t374_m13335_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t374_m13336_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13336_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9266_gshared, &t374_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t374_m13336_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t374_m13337_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13337_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9268_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t374_m13337_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t374_m13338_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13338_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9270_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t374_m13338_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13339_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9272_gshared, &t374_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13340_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9274_gshared, &t374_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13341_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9276_gshared, &t374_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13342_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9278_gshared, &t374_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13343_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9280_gshared, &t374_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t374_m13344_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13344_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9282_gshared, &t374_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t374_m13344_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t374_m13345_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13345_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9284_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t374_m13345_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t374_m13346_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13346_MI = 
{
	"Add", (methodPointerType)&m9285_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t374_m13346_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t374_m13347_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13347_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m9287_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t374_m13347_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2442_0_0_0;
static ParameterInfo t374_m13348_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2442_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13348_MI = 
{
	"AddCollection", (methodPointerType)&m9289_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t374_m13348_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2440_0_0_0;
static ParameterInfo t374_m13349_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2440_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13349_MI = 
{
	"AddEnumerable", (methodPointerType)&m9291_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t374_m13349_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2440_0_0_0;
static ParameterInfo t374_m13350_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2440_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13350_MI = 
{
	"AddRange", (methodPointerType)&m9293_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t374_m13350_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t2443_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13351_MI = 
{
	"AsReadOnly", (methodPointerType)&m9295_gshared, &t374_TI, &t2443_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13352_MI = 
{
	"Clear", (methodPointerType)&m9297_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t374_m13353_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13353_MI = 
{
	"Contains", (methodPointerType)&m9299_gshared, &t374_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t374_m13353_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2439_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t374_m13354_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2439_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13354_MI = 
{
	"CopyTo", (methodPointerType)&m9301_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t374_m13354_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2444_0_0_0;
static ParameterInfo t374_m13355_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2444_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t465_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13355_MI = 
{
	"Find", (methodPointerType)&m9303_gshared, &t374_TI, &t465_0_0_0, RuntimeInvoker_t25_t25, t374_m13355_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2444_0_0_0;
static ParameterInfo t374_m13356_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2444_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13356_MI = 
{
	"CheckMatch", (methodPointerType)&m9305_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t374_m13356_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t2444_0_0_0;
static ParameterInfo t374_m13357_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2444_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13357_MI = 
{
	"GetIndex", (methodPointerType)&m9307_gshared, &t374_TI, &t134_0_0_0, RuntimeInvoker_t134_t134_t134_t25, t374_m13357_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t2446_0_0_0;
extern void* RuntimeInvoker_t2446 (MethodInfo* method, void* obj, void** args);
MethodInfo m13358_MI = 
{
	"GetEnumerator", (methodPointerType)&m13358, &t374_TI, &t2446_0_0_0, RuntimeInvoker_t2446, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t374_m13359_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13359_MI = 
{
	"IndexOf", (methodPointerType)&m9310_gshared, &t374_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t374_m13359_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t374_m13360_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13360_MI = 
{
	"Shift", (methodPointerType)&m9312_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t374_m13360_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t374_m13361_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13361_MI = 
{
	"CheckIndex", (methodPointerType)&m9314_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t374_m13361_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t374_m13362_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13362_MI = 
{
	"Insert", (methodPointerType)&m9316_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t374_m13362_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2440_0_0_0;
static ParameterInfo t374_m13363_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2440_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13363_MI = 
{
	"CheckCollection", (methodPointerType)&m9318_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t374_m13363_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t374_m13364_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13364_MI = 
{
	"Remove", (methodPointerType)&m9320_gshared, &t374_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t374_m13364_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2444_0_0_0;
static ParameterInfo t374_m13365_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2444_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13365_MI = 
{
	"RemoveAll", (methodPointerType)&m9322_gshared, &t374_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t374_m13365_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t374_m13366_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13366_MI = 
{
	"RemoveAt", (methodPointerType)&m9324_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t374_m13366_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13367_MI = 
{
	"Reverse", (methodPointerType)&m9326_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13368_MI = 
{
	"Sort", (methodPointerType)&m9328_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2445_0_0_0;
static ParameterInfo t374_m13369_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2445_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13369_MI = 
{
	"Sort", (methodPointerType)&m9330_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t374_m13369_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t2439_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13370_MI = 
{
	"ToArray", (methodPointerType)&m9332_gshared, &t374_TI, &t2439_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13371_MI = 
{
	"TrimExcess", (methodPointerType)&m9334_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13372_MI = 
{
	"get_Capacity", (methodPointerType)&m9336_gshared, &t374_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t374_m13373_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13373_MI = 
{
	"set_Capacity", (methodPointerType)&m9338_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t374_m13373_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m2360_MI = 
{
	"get_Count", (methodPointerType)&m9340_gshared, &t374_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t374_m2358_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t465_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m2358_MI = 
{
	"get_Item", (methodPointerType)&m9342_gshared, &t374_TI, &t465_0_0_0, RuntimeInvoker_t25_t134, t374_m2358_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t374_m13374_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13374_MI = 
{
	"set_Item", (methodPointerType)&m9344_gshared, &t374_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t374_m13374_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t374_MIs[] =
{
	&m2354_MI,
	&m13328_MI,
	&m13329_MI,
	&m13330_MI,
	&m13331_MI,
	&m13332_MI,
	&m13333_MI,
	&m13334_MI,
	&m13335_MI,
	&m13336_MI,
	&m13337_MI,
	&m13338_MI,
	&m13339_MI,
	&m13340_MI,
	&m13341_MI,
	&m13342_MI,
	&m13343_MI,
	&m13344_MI,
	&m13345_MI,
	&m13346_MI,
	&m13347_MI,
	&m13348_MI,
	&m13349_MI,
	&m13350_MI,
	&m13351_MI,
	&m13352_MI,
	&m13353_MI,
	&m13354_MI,
	&m13355_MI,
	&m13356_MI,
	&m13357_MI,
	&m13358_MI,
	&m13359_MI,
	&m13360_MI,
	&m13361_MI,
	&m13362_MI,
	&m13363_MI,
	&m13364_MI,
	&m13365_MI,
	&m13366_MI,
	&m13367_MI,
	&m13368_MI,
	&m13369_MI,
	&m13370_MI,
	&m13371_MI,
	&m13372_MI,
	&m13373_MI,
	&m2360_MI,
	&m2358_MI,
	&m13374_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13333_MI;
extern MethodInfo m2360_MI;
extern MethodInfo m13340_MI;
extern MethodInfo m13341_MI;
extern MethodInfo m13332_MI;
extern MethodInfo m13342_MI;
extern MethodInfo m13343_MI;
extern MethodInfo m13344_MI;
extern MethodInfo m13345_MI;
extern MethodInfo m13334_MI;
extern MethodInfo m13352_MI;
extern MethodInfo m13335_MI;
extern MethodInfo m13336_MI;
extern MethodInfo m13337_MI;
extern MethodInfo m13338_MI;
extern MethodInfo m13366_MI;
extern MethodInfo m2360_MI;
extern MethodInfo m13339_MI;
extern MethodInfo m13346_MI;
extern MethodInfo m13352_MI;
extern MethodInfo m13353_MI;
extern MethodInfo m13354_MI;
extern MethodInfo m13364_MI;
extern MethodInfo m13331_MI;
extern MethodInfo m13359_MI;
extern MethodInfo m13362_MI;
extern MethodInfo m13366_MI;
extern MethodInfo m2358_MI;
extern MethodInfo m13374_MI;
static MethodInfo* t374_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13333_MI,
	&m2360_MI,
	&m13340_MI,
	&m13341_MI,
	&m13332_MI,
	&m13342_MI,
	&m13343_MI,
	&m13344_MI,
	&m13345_MI,
	&m13334_MI,
	&m13352_MI,
	&m13335_MI,
	&m13336_MI,
	&m13337_MI,
	&m13338_MI,
	&m13366_MI,
	&m2360_MI,
	&m13339_MI,
	&m13346_MI,
	&m13352_MI,
	&m13353_MI,
	&m13354_MI,
	&m13364_MI,
	&m13331_MI,
	&m13359_MI,
	&m13362_MI,
	&m13366_MI,
	&m2358_MI,
	&m13374_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2442_TI;
extern TypeInfo t2440_TI;
extern TypeInfo t2448_TI;
static TypeInfo* t374_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t2442_TI,
	&t2440_TI,
	&t2448_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2442_TI;
extern TypeInfo t2440_TI;
extern TypeInfo t2448_TI;
static Il2CppInterfaceOffsetPair t374_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t2442_TI, 20},
	{ &t2440_TI, 27},
	{ &t2448_TI, 28},
};
extern TypeInfo t374_TI;
extern MethodInfo m13363_MI;
extern TypeInfo t2442_TI;
extern MethodInfo m13349_MI;
extern MethodInfo m27751_MI;
extern TypeInfo t2439_TI;
extern MethodInfo m13348_MI;
extern MethodInfo m13358_MI;
extern TypeInfo t2446_TI;
extern TypeInfo t465_TI;
extern MethodInfo m13346_MI;
extern MethodInfo m13353_MI;
extern MethodInfo m13359_MI;
extern MethodInfo m13361_MI;
extern MethodInfo m13362_MI;
extern MethodInfo m13364_MI;
extern MethodInfo m2358_MI;
extern MethodInfo m13374_MI;
extern MethodInfo m13347_MI;
extern MethodInfo m13372_MI;
extern MethodInfo m13373_MI;
extern MethodInfo m27752_MI;
extern MethodInfo m27753_MI;
extern MethodInfo m27754_MI;
extern TypeInfo t2443_TI;
extern MethodInfo m13386_MI;
extern MethodInfo m20632_MI;
extern MethodInfo m13356_MI;
extern MethodInfo m13357_MI;
extern MethodInfo m13461_MI;
extern MethodInfo m13380_MI;
extern MethodInfo m13360_MI;
extern MethodInfo m13366_MI;
extern MethodInfo m13467_MI;
extern MethodInfo m20634_MI;
extern MethodInfo m20642_MI;
extern MethodInfo m20630_MI;
static void* t374_RGCTXData[37] = 
{
	&t374_TI,
	&m13363_MI,
	&t2442_TI,
	&m13349_MI,
	&m27751_MI,
	&t2439_TI,
	&m13348_MI,
	&m13358_MI,
	&t2446_TI,
	&t465_TI,
	&m13346_MI,
	&m13353_MI,
	&m13359_MI,
	&m13361_MI,
	&m13362_MI,
	&m13364_MI,
	&m2358_MI,
	&m13374_MI,
	&m13347_MI,
	&m13372_MI,
	&m13373_MI,
	&m27752_MI,
	&m27753_MI,
	&m27754_MI,
	&t2443_TI,
	&m13386_MI,
	&m20632_MI,
	&m13356_MI,
	&m13357_MI,
	&m13461_MI,
	&m13380_MI,
	&m13360_MI,
	&m13366_MI,
	&m13467_MI,
	&m20634_MI,
	&m20642_MI,
	&m20630_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t374_0_0_0;
extern Il2CppType t374_1_0_0;
extern TypeInfo t25_TI;
struct t374;
extern TypeInfo t374_TI;
extern Il2CppGenericClass t374_GC;
extern CustomAttributesCache t957__CustomAttributeCache;
TypeInfo t374_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t374_MIs, t374_PIs, t374_FIs, NULL, &t25_TI, NULL, NULL, &t374_TI, t374_ITIs, t374_VT, &t957__CustomAttributeCache, &t374_TI, &t374_0_0_0, &t374_1_0_0, t374_IOs, &t374_GC, NULL, t374_FDVs, NULL, t374_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t374), 0, -1, sizeof(t374_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 50, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2442_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.CanvasGroup>
extern MethodInfo m27751_MI;
static PropertyInfo t2442____Count_PropertyInfo = 
{
	&t2442_TI, "Count", &m27751_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27755_MI;
static PropertyInfo t2442____IsReadOnly_PropertyInfo = 
{
	&t2442_TI, "IsReadOnly", &m27755_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2442_PIs[] =
{
	&t2442____Count_PropertyInfo,
	&t2442____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t2442_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27751_MI = 
{
	"get_Count", NULL, &t2442_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2442_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27755_MI = 
{
	"get_IsReadOnly", NULL, &t2442_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t2442_m27756_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2442_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27756_MI = 
{
	"Add", NULL, &t2442_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2442_m27756_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2442_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27757_MI = 
{
	"Clear", NULL, &t2442_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t2442_m27758_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2442_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27758_MI = 
{
	"Contains", NULL, &t2442_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2442_m27758_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2439_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2442_m27752_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2439_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2442_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27752_MI = 
{
	"CopyTo", NULL, &t2442_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2442_m27752_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t2442_m27759_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2442_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27759_MI = 
{
	"Remove", NULL, &t2442_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2442_m27759_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2442_MIs[] =
{
	&m27751_MI,
	&m27755_MI,
	&m27756_MI,
	&m27757_MI,
	&m27758_MI,
	&m27752_MI,
	&m27759_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t2440_TI;
static TypeInfo* t2442_ITIs[] = 
{
	&t703_TI,
	&t2440_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2442_0_0_0;
extern Il2CppType t2442_1_0_0;
struct t2442;
extern TypeInfo t2442_TI;
extern Il2CppGenericClass t2442_GC;
TypeInfo t2442_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2442_MIs, t2442_PIs, NULL, NULL, NULL, NULL, NULL, &t2442_TI, t2442_ITIs, NULL, &EmptyCustomAttributesCache, &t2442_TI, &t2442_0_0_0, &t2442_1_0_0, NULL, &t2442_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2440_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.CanvasGroup>
extern TypeInfo t2440_TI;
extern Il2CppType t2441_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27753_MI = 
{
	"GetEnumerator", NULL, &t2440_TI, &t2441_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2440_MIs[] =
{
	&m27753_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t2440_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2440_0_0_0;
extern Il2CppType t2440_1_0_0;
struct t2440;
extern TypeInfo t2440_TI;
extern Il2CppGenericClass t2440_GC;
TypeInfo t2440_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2440_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2440_TI, t2440_ITIs, NULL, &EmptyCustomAttributesCache, &t2440_TI, &t2440_0_0_0, &t2440_1_0_0, NULL, &t2440_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2441_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.CanvasGroup>
extern MethodInfo m27754_MI;
static PropertyInfo t2441____Current_PropertyInfo = 
{
	&t2441_TI, "Current", &m27754_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2441_PIs[] =
{
	&t2441____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2441_TI;
extern Il2CppType t465_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27754_MI = 
{
	"get_Current", NULL, &t2441_TI, &t465_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2441_MIs[] =
{
	&m27754_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t2441_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2441_0_0_0;
extern Il2CppType t2441_1_0_0;
struct t2441;
extern TypeInfo t2441_TI;
extern Il2CppGenericClass t2441_GC;
TypeInfo t2441_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2441_MIs, t2441_PIs, NULL, NULL, NULL, NULL, NULL, &t2441_TI, t2441_ITIs, NULL, &EmptyCustomAttributesCache, &t2441_TI, &t2441_0_0_0, &t2441_1_0_0, NULL, &t2441_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2447.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2447_TI;
#include "t2447MD.h"

extern TypeInfo t2447_TI;
extern TypeInfo t465_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13379_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20619_MI;
struct t122;
#define m20619(__this, p0, method) (t465 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m20619_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.CanvasGroup>
extern Il2CppType t122_0_0_1;
FieldInfo t2447_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2447_TI, offsetof(t2447, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2447_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2447_TI, offsetof(t2447, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2447_FIs[] =
{
	&t2447_f0_FieldInfo,
	&t2447_f1_FieldInfo,
	NULL
};
extern MethodInfo m13376_MI;
static PropertyInfo t2447____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2447_TI, "System.Collections.IEnumerator.Current", &m13376_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13379_MI;
static PropertyInfo t2447____Current_PropertyInfo = 
{
	&t2447_TI, "Current", &m13379_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2447_PIs[] =
{
	&t2447____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2447____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2447_m13375_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13375_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t2447_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2447_m13375_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2447_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13376_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t2447_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2447_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13377_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t2447_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2447_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13378_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t2447_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2447_TI;
extern Il2CppType t465_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13379_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t2447_TI, &t465_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2447_MIs[] =
{
	&m13375_MI,
	&m13376_MI,
	&m13377_MI,
	&m13378_MI,
	&m13379_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13376_MI;
extern MethodInfo m13378_MI;
extern MethodInfo m13377_MI;
extern MethodInfo m13379_MI;
static MethodInfo* t2447_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13376_MI,
	&m13378_MI,
	&m13377_MI,
	&m13379_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2441_TI;
static TypeInfo* t2447_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2441_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2441_TI;
static Il2CppInterfaceOffsetPair t2447_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2441_TI, 7},
};
extern MethodInfo m13379_MI;
extern TypeInfo t465_TI;
extern MethodInfo m20619_MI;
static void* t2447_RGCTXData[3] = 
{
	&m13379_MI,
	&t465_TI,
	&m20619_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2447_0_0_0;
extern Il2CppType t2447_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2447_TI;
extern Il2CppGenericClass t2447_GC;
extern TypeInfo t122_TI;
TypeInfo t2447_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2447_MIs, t2447_PIs, t2447_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2447_TI, t2447_ITIs, t2447_VT, &EmptyCustomAttributesCache, &t2447_TI, &t2447_0_0_0, &t2447_1_0_0, t2447_IOs, &t2447_GC, NULL, NULL, NULL, t2447_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2447)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2448_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.CanvasGroup>
extern MethodInfo m27760_MI;
extern MethodInfo m27761_MI;
static PropertyInfo t2448____Item_PropertyInfo = 
{
	&t2448_TI, "Item", &m27760_MI, &m27761_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2448_PIs[] =
{
	&t2448____Item_PropertyInfo,
	NULL
};
extern Il2CppType t465_0_0_0;
static ParameterInfo t2448_m27762_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2448_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27762_MI = 
{
	"IndexOf", NULL, &t2448_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2448_m27762_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t2448_m27763_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2448_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27763_MI = 
{
	"Insert", NULL, &t2448_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2448_m27763_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2448_m27764_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2448_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27764_MI = 
{
	"RemoveAt", NULL, &t2448_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2448_m27764_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2448_m27760_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2448_TI;
extern Il2CppType t465_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27760_MI = 
{
	"get_Item", NULL, &t2448_TI, &t465_0_0_0, RuntimeInvoker_t25_t134, t2448_m27760_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t2448_m27761_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2448_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27761_MI = 
{
	"set_Item", NULL, &t2448_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2448_m27761_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2448_MIs[] =
{
	&m27762_MI,
	&m27763_MI,
	&m27764_MI,
	&m27760_MI,
	&m27761_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t2442_TI;
extern TypeInfo t2440_TI;
static TypeInfo* t2448_ITIs[] = 
{
	&t703_TI,
	&t2442_TI,
	&t2440_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2448_0_0_0;
extern Il2CppType t2448_1_0_0;
struct t2448;
extern TypeInfo t2448_TI;
extern Il2CppGenericClass t2448_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t2448_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t2448_MIs, t2448_PIs, NULL, NULL, NULL, NULL, NULL, &t2448_TI, t2448_ITIs, NULL, &t1518__CustomAttributeCache, &t2448_TI, &t2448_0_0_0, &t2448_1_0_0, NULL, &t2448_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2446_TI;

extern TypeInfo t2446_TI;
extern TypeInfo t1387_TI;
extern TypeInfo t465_TI;
extern TypeInfo t374_TI;
extern TypeInfo t131_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1404_TI;
extern MethodInfo m13383_MI;
extern MethodInfo m7430_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m3520_MI;
extern MethodInfo m7635_MI;
extern MethodInfo m7431_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.CanvasGroup>
extern Il2CppType t374_0_0_1;
FieldInfo t2446_f0_FieldInfo = 
{
	"l", &t374_0_0_1, &t2446_TI, offsetof(t2446, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2446_f1_FieldInfo = 
{
	"next", &t134_0_0_1, &t2446_TI, offsetof(t2446, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2446_f2_FieldInfo = 
{
	"ver", &t134_0_0_1, &t2446_TI, offsetof(t2446, f2) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t465_0_0_1;
FieldInfo t2446_f3_FieldInfo = 
{
	"current", &t465_0_0_1, &t2446_TI, offsetof(t2446, f3) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2446_FIs[] =
{
	&t2446_f0_FieldInfo,
	&t2446_f1_FieldInfo,
	&t2446_f2_FieldInfo,
	&t2446_f3_FieldInfo,
	NULL
};
extern MethodInfo m13381_MI;
static PropertyInfo t2446____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2446_TI, "System.Collections.IEnumerator.Current", &m13381_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13385_MI;
static PropertyInfo t2446____Current_PropertyInfo = 
{
	&t2446_TI, "Current", &m13385_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2446_PIs[] =
{
	&t2446____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2446____Current_PropertyInfo,
	NULL
};
extern Il2CppType t374_0_0_0;
static ParameterInfo t2446_m13380_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t374_0_0_0},
};
extern TypeInfo t2446_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13380_MI = 
{
	".ctor", (methodPointerType)&m9346_gshared, &t2446_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2446_m13380_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2446_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13381_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m9347_gshared, &t2446_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2446_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13382_MI = 
{
	"Dispose", (methodPointerType)&m9348_gshared, &t2446_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2446_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13383_MI = 
{
	"VerifyState", (methodPointerType)&m9349_gshared, &t2446_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2446_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13384_MI = 
{
	"MoveNext", (methodPointerType)&m9350_gshared, &t2446_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2446_TI;
extern Il2CppType t465_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13385_MI = 
{
	"get_Current", (methodPointerType)&m9351_gshared, &t2446_TI, &t465_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2446_MIs[] =
{
	&m13380_MI,
	&m13381_MI,
	&m13382_MI,
	&m13383_MI,
	&m13384_MI,
	&m13385_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13381_MI;
extern MethodInfo m13384_MI;
extern MethodInfo m13382_MI;
extern MethodInfo m13385_MI;
static MethodInfo* t2446_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13381_MI,
	&m13384_MI,
	&m13382_MI,
	&m13385_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2441_TI;
static TypeInfo* t2446_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2441_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2441_TI;
static Il2CppInterfaceOffsetPair t2446_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2441_TI, 7},
};
extern MethodInfo m13383_MI;
extern TypeInfo t465_TI;
extern TypeInfo t2446_TI;
static void* t2446_RGCTXData[3] = 
{
	&m13383_MI,
	&t465_TI,
	&t2446_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2446_0_0_0;
extern Il2CppType t2446_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2446_TI;
extern Il2CppGenericClass t2446_GC;
extern TypeInfo t957_TI;
TypeInfo t2446_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2446_MIs, t2446_PIs, t2446_FIs, NULL, &t117_TI, NULL, &t957_TI, &t2446_TI, t2446_ITIs, t2446_VT, &EmptyCustomAttributesCache, &t2446_TI, &t2446_0_0_0, &t2446_1_0_0, t2446_IOs, &t2446_GC, NULL, NULL, NULL, t2446_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2446)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2443_TI;

extern TypeInfo t2443_TI;
extern TypeInfo t465_TI;
extern TypeInfo t134_TI;
extern TypeInfo t177_TI;
extern TypeInfo t2448_TI;
extern TypeInfo t2442_TI;
extern TypeInfo t165_TI;
extern TypeInfo t759_TI;
extern TypeInfo t123_TI;
extern TypeInfo t122_TI;
extern TypeInfo t703_TI;
extern TypeInfo t78_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2439_TI;
extern TypeInfo t2440_TI;
extern TypeInfo t2441_TI;
#include "t2449MD.h"
extern MethodInfo m13415_MI;
extern MethodInfo m566_MI;
extern MethodInfo m27760_MI;
extern MethodInfo m27751_MI;
extern MethodInfo m452_MI;
extern MethodInfo m489_MI;
extern MethodInfo m7922_MI;
extern MethodInfo m7831_MI;
extern MethodInfo m13447_MI;
extern MethodInfo m27758_MI;
extern MethodInfo m27762_MI;
extern MethodInfo m27752_MI;
extern MethodInfo m27753_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.CanvasGroup>
extern Il2CppType t2448_0_0_1;
FieldInfo t2443_f0_FieldInfo = 
{
	"list", &t2448_0_0_1, &t2443_TI, offsetof(t2443, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2443_FIs[] =
{
	&t2443_f0_FieldInfo,
	NULL
};
extern MethodInfo m13392_MI;
extern MethodInfo m13393_MI;
static PropertyInfo t2443____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2443_TI, "System.Collections.Generic.IList<T>.Item", &m13392_MI, &m13393_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13394_MI;
static PropertyInfo t2443____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2443_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13394_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13404_MI;
static PropertyInfo t2443____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2443_TI, "System.Collections.ICollection.IsSynchronized", &m13404_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13405_MI;
static PropertyInfo t2443____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2443_TI, "System.Collections.ICollection.SyncRoot", &m13405_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13406_MI;
static PropertyInfo t2443____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2443_TI, "System.Collections.IList.IsFixedSize", &m13406_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13407_MI;
static PropertyInfo t2443____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2443_TI, "System.Collections.IList.IsReadOnly", &m13407_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13408_MI;
extern MethodInfo m13409_MI;
static PropertyInfo t2443____System_Collections_IList_Item_PropertyInfo = 
{
	&t2443_TI, "System.Collections.IList.Item", &m13408_MI, &m13409_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13414_MI;
static PropertyInfo t2443____Count_PropertyInfo = 
{
	&t2443_TI, "Count", &m13414_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13415_MI;
static PropertyInfo t2443____Item_PropertyInfo = 
{
	&t2443_TI, "Item", &m13415_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2443_PIs[] =
{
	&t2443____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2443____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2443____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2443____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2443____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2443____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2443____System_Collections_IList_Item_PropertyInfo,
	&t2443____Count_PropertyInfo,
	&t2443____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2448_0_0_0;
static ParameterInfo t2443_m13386_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2448_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13386_MI = 
{
	".ctor", (methodPointerType)&m9352_gshared, &t2443_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2443_m13386_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t2443_m13387_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13387_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m9353_gshared, &t2443_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2443_m13387_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2443_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13388_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m9354_gshared, &t2443_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t2443_m13389_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13389_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m9355_gshared, &t2443_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2443_m13389_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t2443_m13390_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13390_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m9356_gshared, &t2443_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2443_m13390_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2443_m13391_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13391_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m9357_gshared, &t2443_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2443_m13391_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2443_m13392_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t465_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13392_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m9358_gshared, &t2443_TI, &t465_0_0_0, RuntimeInvoker_t25_t134, t2443_m13392_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t2443_m13393_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13393_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m9359_gshared, &t2443_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2443_m13393_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2443_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13394_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9360_gshared, &t2443_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2443_m13395_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13395_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9361_gshared, &t2443_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2443_m13395_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2443_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13396_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9362_gshared, &t2443_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2443_m13397_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13397_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9363_gshared, &t2443_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2443_m13397_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2443_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13398_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m9364_gshared, &t2443_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2443_m13399_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13399_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9365_gshared, &t2443_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2443_m13399_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2443_m13400_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13400_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9366_gshared, &t2443_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2443_m13400_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2443_m13401_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13401_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9367_gshared, &t2443_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2443_m13401_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2443_m13402_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13402_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9368_gshared, &t2443_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2443_m13402_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2443_m13403_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13403_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m9369_gshared, &t2443_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2443_m13403_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2443_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13404_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9370_gshared, &t2443_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2443_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13405_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9371_gshared, &t2443_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2443_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13406_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9372_gshared, &t2443_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2443_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13407_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9373_gshared, &t2443_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2443_m13408_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13408_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9374_gshared, &t2443_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t2443_m13408_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2443_m13409_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13409_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9375_gshared, &t2443_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2443_m13409_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t2443_m13410_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13410_MI = 
{
	"Contains", (methodPointerType)&m9376_gshared, &t2443_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2443_m13410_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2439_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2443_m13411_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2439_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13411_MI = 
{
	"CopyTo", (methodPointerType)&m9377_gshared, &t2443_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2443_m13411_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2443_TI;
extern Il2CppType t2441_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13412_MI = 
{
	"GetEnumerator", (methodPointerType)&m9378_gshared, &t2443_TI, &t2441_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t2443_m13413_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13413_MI = 
{
	"IndexOf", (methodPointerType)&m9379_gshared, &t2443_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2443_m13413_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2443_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13414_MI = 
{
	"get_Count", (methodPointerType)&m9380_gshared, &t2443_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2443_m13415_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2443_TI;
extern Il2CppType t465_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13415_MI = 
{
	"get_Item", (methodPointerType)&m9381_gshared, &t2443_TI, &t465_0_0_0, RuntimeInvoker_t25_t134, t2443_m13415_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2443_MIs[] =
{
	&m13386_MI,
	&m13387_MI,
	&m13388_MI,
	&m13389_MI,
	&m13390_MI,
	&m13391_MI,
	&m13392_MI,
	&m13393_MI,
	&m13394_MI,
	&m13395_MI,
	&m13396_MI,
	&m13397_MI,
	&m13398_MI,
	&m13399_MI,
	&m13400_MI,
	&m13401_MI,
	&m13402_MI,
	&m13403_MI,
	&m13404_MI,
	&m13405_MI,
	&m13406_MI,
	&m13407_MI,
	&m13408_MI,
	&m13409_MI,
	&m13410_MI,
	&m13411_MI,
	&m13412_MI,
	&m13413_MI,
	&m13414_MI,
	&m13415_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13396_MI;
extern MethodInfo m13414_MI;
extern MethodInfo m13404_MI;
extern MethodInfo m13405_MI;
extern MethodInfo m13395_MI;
extern MethodInfo m13406_MI;
extern MethodInfo m13407_MI;
extern MethodInfo m13408_MI;
extern MethodInfo m13409_MI;
extern MethodInfo m13397_MI;
extern MethodInfo m13398_MI;
extern MethodInfo m13399_MI;
extern MethodInfo m13400_MI;
extern MethodInfo m13401_MI;
extern MethodInfo m13402_MI;
extern MethodInfo m13403_MI;
extern MethodInfo m13414_MI;
extern MethodInfo m13394_MI;
extern MethodInfo m13387_MI;
extern MethodInfo m13388_MI;
extern MethodInfo m13410_MI;
extern MethodInfo m13411_MI;
extern MethodInfo m13390_MI;
extern MethodInfo m13413_MI;
extern MethodInfo m13389_MI;
extern MethodInfo m13391_MI;
extern MethodInfo m13392_MI;
extern MethodInfo m13393_MI;
extern MethodInfo m13412_MI;
extern MethodInfo m13415_MI;
static MethodInfo* t2443_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13396_MI,
	&m13414_MI,
	&m13404_MI,
	&m13405_MI,
	&m13395_MI,
	&m13406_MI,
	&m13407_MI,
	&m13408_MI,
	&m13409_MI,
	&m13397_MI,
	&m13398_MI,
	&m13399_MI,
	&m13400_MI,
	&m13401_MI,
	&m13402_MI,
	&m13403_MI,
	&m13414_MI,
	&m13394_MI,
	&m13387_MI,
	&m13388_MI,
	&m13410_MI,
	&m13411_MI,
	&m13390_MI,
	&m13413_MI,
	&m13389_MI,
	&m13391_MI,
	&m13392_MI,
	&m13393_MI,
	&m13412_MI,
	&m13415_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2442_TI;
extern TypeInfo t2448_TI;
extern TypeInfo t2440_TI;
static TypeInfo* t2443_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t2442_TI,
	&t2448_TI,
	&t2440_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2442_TI;
extern TypeInfo t2448_TI;
extern TypeInfo t2440_TI;
static Il2CppInterfaceOffsetPair t2443_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t2442_TI, 20},
	{ &t2448_TI, 27},
	{ &t2440_TI, 32},
};
extern MethodInfo m13415_MI;
extern MethodInfo m13447_MI;
extern TypeInfo t465_TI;
extern MethodInfo m27758_MI;
extern MethodInfo m27762_MI;
extern MethodInfo m27760_MI;
extern MethodInfo m27752_MI;
extern MethodInfo m27753_MI;
extern MethodInfo m27751_MI;
static void* t2443_RGCTXData[9] = 
{
	&m13415_MI,
	&m13447_MI,
	&t465_TI,
	&m27758_MI,
	&m27762_MI,
	&m27760_MI,
	&m27752_MI,
	&m27753_MI,
	&m27751_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2443_0_0_0;
extern Il2CppType t2443_1_0_0;
extern TypeInfo t25_TI;
struct t2443;
extern TypeInfo t2443_TI;
extern Il2CppGenericClass t2443_GC;
extern CustomAttributesCache t959__CustomAttributeCache;
TypeInfo t2443_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2443_MIs, t2443_PIs, t2443_FIs, NULL, &t25_TI, NULL, NULL, &t2443_TI, t2443_ITIs, t2443_VT, &t959__CustomAttributeCache, &t2443_TI, &t2443_0_0_0, &t2443_1_0_0, t2443_IOs, &t2443_GC, NULL, NULL, NULL, t2443_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2443), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2449.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2449_TI;

extern TypeInfo t2449_TI;
extern TypeInfo t2442_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2448_TI;
extern TypeInfo t465_TI;
extern TypeInfo t134_TI;
extern TypeInfo t123_TI;
extern TypeInfo t374_TI;
extern TypeInfo t759_TI;
extern TypeInfo t25_TI;
extern TypeInfo t122_TI;
extern TypeInfo t2440_TI;
extern TypeInfo t2441_TI;
extern TypeInfo t2439_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t177_TI;
extern TypeInfo t1132_TI;
extern Il2CppType t465_0_0_0;
extern MethodInfo m27755_MI;
extern MethodInfo m13450_MI;
extern MethodInfo m13451_MI;
extern MethodInfo m27760_MI;
extern MethodInfo m13448_MI;
extern MethodInfo m13446_MI;
extern MethodInfo m27751_MI;
extern MethodInfo m452_MI;
extern MethodInfo m2354_MI;
extern MethodInfo m7921_MI;
extern MethodInfo m7922_MI;
extern MethodInfo m27753_MI;
extern MethodInfo m13439_MI;
extern MethodInfo m13447_MI;
extern MethodInfo m27758_MI;
extern MethodInfo m27762_MI;
extern MethodInfo m13449_MI;
extern MethodInfo m13437_MI;
extern MethodInfo m13442_MI;
extern MethodInfo m13433_MI;
extern MethodInfo m27757_MI;
extern MethodInfo m27752_MI;
extern MethodInfo m27763_MI;
extern MethodInfo m27764_MI;
extern MethodInfo m27761_MI;
extern MethodInfo m484_MI;
extern MethodInfo m4337_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m566_MI;
extern MethodInfo m7920_MI;
extern MethodInfo m7923_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.CanvasGroup>
extern Il2CppType t2448_0_0_1;
FieldInfo t2449_f0_FieldInfo = 
{
	"list", &t2448_0_0_1, &t2449_TI, offsetof(t2449, f0), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_1;
FieldInfo t2449_f1_FieldInfo = 
{
	"syncRoot", &t25_0_0_1, &t2449_TI, offsetof(t2449, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2449_FIs[] =
{
	&t2449_f0_FieldInfo,
	&t2449_f1_FieldInfo,
	NULL
};
extern MethodInfo m13417_MI;
static PropertyInfo t2449____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2449_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13417_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13425_MI;
static PropertyInfo t2449____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2449_TI, "System.Collections.ICollection.IsSynchronized", &m13425_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13426_MI;
static PropertyInfo t2449____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2449_TI, "System.Collections.ICollection.SyncRoot", &m13426_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13427_MI;
static PropertyInfo t2449____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2449_TI, "System.Collections.IList.IsFixedSize", &m13427_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13428_MI;
static PropertyInfo t2449____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2449_TI, "System.Collections.IList.IsReadOnly", &m13428_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13429_MI;
extern MethodInfo m13430_MI;
static PropertyInfo t2449____System_Collections_IList_Item_PropertyInfo = 
{
	&t2449_TI, "System.Collections.IList.Item", &m13429_MI, &m13430_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13443_MI;
static PropertyInfo t2449____Count_PropertyInfo = 
{
	&t2449_TI, "Count", &m13443_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13444_MI;
extern MethodInfo m13445_MI;
static PropertyInfo t2449____Item_PropertyInfo = 
{
	&t2449_TI, "Item", &m13444_MI, &m13445_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2449_PIs[] =
{
	&t2449____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2449____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2449____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2449____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2449____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2449____System_Collections_IList_Item_PropertyInfo,
	&t2449____Count_PropertyInfo,
	&t2449____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13416_MI = 
{
	".ctor", (methodPointerType)&m9382_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2449_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13417_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9383_gshared, &t2449_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2449_m13418_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13418_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9384_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2449_m13418_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2449_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13419_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9385_gshared, &t2449_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2449_m13420_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13420_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9386_gshared, &t2449_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2449_m13420_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2449_m13421_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13421_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9387_gshared, &t2449_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2449_m13421_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2449_m13422_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13422_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9388_gshared, &t2449_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2449_m13422_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2449_m13423_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13423_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9389_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2449_m13423_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2449_m13424_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13424_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9390_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2449_m13424_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2449_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13425_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9391_gshared, &t2449_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2449_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13426_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9392_gshared, &t2449_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2449_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13427_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9393_gshared, &t2449_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2449_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13428_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9394_gshared, &t2449_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2449_m13429_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13429_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9395_gshared, &t2449_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t2449_m13429_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2449_m13430_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13430_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9396_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2449_m13430_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t2449_m13431_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13431_MI = 
{
	"Add", (methodPointerType)&m9397_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2449_m13431_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13432_MI = 
{
	"Clear", (methodPointerType)&m9398_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13433_MI = 
{
	"ClearItems", (methodPointerType)&m9399_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t2449_m13434_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13434_MI = 
{
	"Contains", (methodPointerType)&m9400_gshared, &t2449_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2449_m13434_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2439_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2449_m13435_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2439_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13435_MI = 
{
	"CopyTo", (methodPointerType)&m9401_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2449_m13435_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2449_TI;
extern Il2CppType t2441_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13436_MI = 
{
	"GetEnumerator", (methodPointerType)&m9402_gshared, &t2449_TI, &t2441_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t2449_m13437_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13437_MI = 
{
	"IndexOf", (methodPointerType)&m9403_gshared, &t2449_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2449_m13437_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t2449_m13438_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13438_MI = 
{
	"Insert", (methodPointerType)&m9404_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2449_m13438_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t2449_m13439_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13439_MI = 
{
	"InsertItem", (methodPointerType)&m9405_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2449_m13439_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t2449_m13440_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13440_MI = 
{
	"Remove", (methodPointerType)&m9406_gshared, &t2449_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2449_m13440_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2449_m13441_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13441_MI = 
{
	"RemoveAt", (methodPointerType)&m9407_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2449_m13441_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2449_m13442_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13442_MI = 
{
	"RemoveItem", (methodPointerType)&m9408_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2449_m13442_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2449_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13443_MI = 
{
	"get_Count", (methodPointerType)&m9409_gshared, &t2449_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2449_m13444_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t465_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m13444_MI = 
{
	"get_Item", (methodPointerType)&m9410_gshared, &t2449_TI, &t465_0_0_0, RuntimeInvoker_t25_t134, t2449_m13444_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t2449_m13445_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13445_MI = 
{
	"set_Item", (methodPointerType)&m9411_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2449_m13445_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t2449_m13446_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13446_MI = 
{
	"SetItem", (methodPointerType)&m9412_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2449_m13446_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2449_m13447_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13447_MI = 
{
	"IsValidItem", (methodPointerType)&m9413_gshared, &t2449_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2449_m13447_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2449_m13448_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t465_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13448_MI = 
{
	"ConvertItem", (methodPointerType)&m9414_gshared, &t2449_TI, &t465_0_0_0, RuntimeInvoker_t25_t25, t2449_m13448_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2448_0_0_0;
static ParameterInfo t2449_m13449_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2448_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13449_MI = 
{
	"CheckWritable", (methodPointerType)&m9415_gshared, &t2449_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2449_m13449_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2448_0_0_0;
static ParameterInfo t2449_m13450_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2448_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13450_MI = 
{
	"IsSynchronized", (methodPointerType)&m9416_gshared, &t2449_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2449_m13450_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2448_0_0_0;
static ParameterInfo t2449_m13451_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2448_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13451_MI = 
{
	"IsFixedSize", (methodPointerType)&m9417_gshared, &t2449_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2449_m13451_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2449_MIs[] =
{
	&m13416_MI,
	&m13417_MI,
	&m13418_MI,
	&m13419_MI,
	&m13420_MI,
	&m13421_MI,
	&m13422_MI,
	&m13423_MI,
	&m13424_MI,
	&m13425_MI,
	&m13426_MI,
	&m13427_MI,
	&m13428_MI,
	&m13429_MI,
	&m13430_MI,
	&m13431_MI,
	&m13432_MI,
	&m13433_MI,
	&m13434_MI,
	&m13435_MI,
	&m13436_MI,
	&m13437_MI,
	&m13438_MI,
	&m13439_MI,
	&m13440_MI,
	&m13441_MI,
	&m13442_MI,
	&m13443_MI,
	&m13444_MI,
	&m13445_MI,
	&m13446_MI,
	&m13447_MI,
	&m13448_MI,
	&m13449_MI,
	&m13450_MI,
	&m13451_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13419_MI;
extern MethodInfo m13443_MI;
extern MethodInfo m13425_MI;
extern MethodInfo m13426_MI;
extern MethodInfo m13418_MI;
extern MethodInfo m13427_MI;
extern MethodInfo m13428_MI;
extern MethodInfo m13429_MI;
extern MethodInfo m13430_MI;
extern MethodInfo m13420_MI;
extern MethodInfo m13432_MI;
extern MethodInfo m13421_MI;
extern MethodInfo m13422_MI;
extern MethodInfo m13423_MI;
extern MethodInfo m13424_MI;
extern MethodInfo m13441_MI;
extern MethodInfo m13443_MI;
extern MethodInfo m13417_MI;
extern MethodInfo m13431_MI;
extern MethodInfo m13432_MI;
extern MethodInfo m13434_MI;
extern MethodInfo m13435_MI;
extern MethodInfo m13440_MI;
extern MethodInfo m13437_MI;
extern MethodInfo m13438_MI;
extern MethodInfo m13441_MI;
extern MethodInfo m13444_MI;
extern MethodInfo m13445_MI;
extern MethodInfo m13436_MI;
extern MethodInfo m13433_MI;
extern MethodInfo m13439_MI;
extern MethodInfo m13442_MI;
extern MethodInfo m13446_MI;
static MethodInfo* t2449_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13419_MI,
	&m13443_MI,
	&m13425_MI,
	&m13426_MI,
	&m13418_MI,
	&m13427_MI,
	&m13428_MI,
	&m13429_MI,
	&m13430_MI,
	&m13420_MI,
	&m13432_MI,
	&m13421_MI,
	&m13422_MI,
	&m13423_MI,
	&m13424_MI,
	&m13441_MI,
	&m13443_MI,
	&m13417_MI,
	&m13431_MI,
	&m13432_MI,
	&m13434_MI,
	&m13435_MI,
	&m13440_MI,
	&m13437_MI,
	&m13438_MI,
	&m13441_MI,
	&m13444_MI,
	&m13445_MI,
	&m13436_MI,
	&m13433_MI,
	&m13439_MI,
	&m13442_MI,
	&m13446_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2442_TI;
extern TypeInfo t2448_TI;
extern TypeInfo t2440_TI;
static TypeInfo* t2449_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t2442_TI,
	&t2448_TI,
	&t2440_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2442_TI;
extern TypeInfo t2448_TI;
extern TypeInfo t2440_TI;
static Il2CppInterfaceOffsetPair t2449_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t2442_TI, 20},
	{ &t2448_TI, 27},
	{ &t2440_TI, 32},
};
extern TypeInfo t374_TI;
extern MethodInfo m2354_MI;
extern MethodInfo m27755_MI;
extern MethodInfo m27753_MI;
extern MethodInfo m27751_MI;
extern MethodInfo m13448_MI;
extern MethodInfo m13439_MI;
extern MethodInfo m13447_MI;
extern TypeInfo t465_TI;
extern MethodInfo m27758_MI;
extern MethodInfo m27762_MI;
extern MethodInfo m13449_MI;
extern MethodInfo m13437_MI;
extern MethodInfo m13442_MI;
extern MethodInfo m13450_MI;
extern MethodInfo m13451_MI;
extern MethodInfo m27760_MI;
extern MethodInfo m13446_MI;
extern MethodInfo m13433_MI;
extern MethodInfo m27757_MI;
extern MethodInfo m27752_MI;
extern MethodInfo m27763_MI;
extern MethodInfo m27764_MI;
extern MethodInfo m27761_MI;
extern Il2CppType t465_0_0_0;
static void* t2449_RGCTXData[25] = 
{
	&t374_TI,
	&m2354_MI,
	&m27755_MI,
	&m27753_MI,
	&m27751_MI,
	&m13448_MI,
	&m13439_MI,
	&m13447_MI,
	&t465_TI,
	&m27758_MI,
	&m27762_MI,
	&m13449_MI,
	&m13437_MI,
	&m13442_MI,
	&m13450_MI,
	&m13451_MI,
	&m27760_MI,
	&m13446_MI,
	&m13433_MI,
	&m27757_MI,
	&m27752_MI,
	&m27763_MI,
	&m27764_MI,
	&m27761_MI,
	(void*)&t465_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2449_0_0_0;
extern Il2CppType t2449_1_0_0;
extern TypeInfo t25_TI;
struct t2449;
extern TypeInfo t2449_TI;
extern Il2CppGenericClass t2449_GC;
extern CustomAttributesCache t958__CustomAttributeCache;
TypeInfo t2449_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2449_MIs, t2449_PIs, t2449_FIs, NULL, &t25_TI, NULL, NULL, &t2449_TI, t2449_ITIs, t2449_VT, &t958__CustomAttributeCache, &t2449_TI, &t2449_0_0_0, &t2449_1_0_0, t2449_IOs, &t2449_GC, NULL, NULL, NULL, t2449_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2449), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2450_TI;
#include "t2450MD.h"

#include "t2451.h"
extern TypeInfo t2450_TI;
extern TypeInfo t5851_TI;
extern TypeInfo t131_TI;
extern TypeInfo t465_TI;
extern TypeInfo t125_TI;
extern TypeInfo t953_TI;
extern TypeInfo t637_TI;
extern TypeInfo t2451_TI;
extern TypeInfo t134_TI;
#include "t2451MD.h"
extern Il2CppType t5851_0_0_0;
extern Il2CppType t465_0_0_0;
extern Il2CppType t953_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m13457_MI;
extern MethodInfo m27765_MI;
extern MethodInfo m20631_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.CanvasGroup>
extern Il2CppType t2450_0_0_49;
FieldInfo t2450_f0_FieldInfo = 
{
	"_default", &t2450_0_0_49, &t2450_TI, offsetof(t2450_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2450_FIs[] =
{
	&t2450_f0_FieldInfo,
	NULL
};
extern MethodInfo m13456_MI;
static PropertyInfo t2450____Default_PropertyInfo = 
{
	&t2450_TI, "Default", &m13456_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2450_PIs[] =
{
	&t2450____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2450_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13452_MI = 
{
	".ctor", (methodPointerType)&m8967_gshared, &t2450_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2450_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13453_MI = 
{
	".cctor", (methodPointerType)&m8968_gshared, &t2450_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2450_m13454_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2450_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13454_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8969_gshared, &t2450_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2450_m13454_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2450_m13455_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2450_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13455_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8970_gshared, &t2450_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2450_m13455_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t2450_m27765_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2450_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27765_MI = 
{
	"GetHashCode", NULL, &t2450_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2450_m27765_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t2450_m20631_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2450_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20631_MI = 
{
	"Equals", NULL, &t2450_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2450_m20631_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2450_TI;
extern Il2CppType t2450_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13456_MI = 
{
	"get_Default", (methodPointerType)&m8971_gshared, &t2450_TI, &t2450_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2450_MIs[] =
{
	&m13452_MI,
	&m13453_MI,
	&m13454_MI,
	&m13455_MI,
	&m27765_MI,
	&m20631_MI,
	&m13456_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m20631_MI;
extern MethodInfo m27765_MI;
extern MethodInfo m13455_MI;
extern MethodInfo m13454_MI;
static MethodInfo* t2450_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m20631_MI,
	&m27765_MI,
	&m13455_MI,
	&m13454_MI,
	NULL,
	NULL,
};
extern TypeInfo t5852_TI;
extern TypeInfo t977_TI;
static TypeInfo* t2450_ITIs[] = 
{
	&t5852_TI,
	&t977_TI,
};
extern TypeInfo t5852_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t2450_IOs[] = 
{
	{ &t5852_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppType t5851_0_0_0;
extern Il2CppType t465_0_0_0;
extern TypeInfo t2450_TI;
extern TypeInfo t2450_TI;
extern TypeInfo t2451_TI;
extern MethodInfo m13457_MI;
extern TypeInfo t465_TI;
extern MethodInfo m27765_MI;
extern MethodInfo m20631_MI;
static void* t2450_RGCTXData[9] = 
{
	(void*)&t5851_0_0_0,
	(void*)&t465_0_0_0,
	&t2450_TI,
	&t2450_TI,
	&t2451_TI,
	&m13457_MI,
	&t465_TI,
	&m27765_MI,
	&m20631_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2450_0_0_0;
extern Il2CppType t2450_1_0_0;
extern TypeInfo t25_TI;
struct t2450;
extern TypeInfo t2450_TI;
extern Il2CppGenericClass t2450_GC;
TypeInfo t2450_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2450_MIs, t2450_PIs, t2450_FIs, NULL, &t25_TI, NULL, NULL, &t2450_TI, t2450_ITIs, t2450_VT, &EmptyCustomAttributesCache, &t2450_TI, &t2450_0_0_0, &t2450_1_0_0, t2450_IOs, &t2450_GC, NULL, NULL, NULL, t2450_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2450), 0, -1, sizeof(t2450_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5852_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.CanvasGroup>
extern Il2CppType t465_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t5852_m27766_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t5852_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27766_MI = 
{
	"Equals", NULL, &t5852_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t5852_m27766_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t5852_m27767_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t5852_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27767_MI = 
{
	"GetHashCode", NULL, &t5852_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5852_m27767_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5852_MIs[] =
{
	&m27766_MI,
	&m27767_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5852_0_0_0;
extern Il2CppType t5852_1_0_0;
struct t5852;
extern TypeInfo t5852_TI;
extern Il2CppGenericClass t5852_GC;
TypeInfo t5852_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5852_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5852_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5852_TI, &t5852_0_0_0, &t5852_1_0_0, NULL, &t5852_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5851_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.CanvasGroup>
extern Il2CppType t465_0_0_0;
static ParameterInfo t5851_m27768_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t5851_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27768_MI = 
{
	"Equals", NULL, &t5851_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5851_m27768_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5851_MIs[] =
{
	&m27768_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5851_0_0_0;
extern Il2CppType t5851_1_0_0;
struct t5851;
extern TypeInfo t5851_TI;
extern Il2CppGenericClass t5851_GC;
TypeInfo t5851_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5851_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5851_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5851_TI, &t5851_0_0_0, &t5851_1_0_0, NULL, &t5851_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2451_TI;

extern TypeInfo t465_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t125_TI;
extern MethodInfo m13452_MI;
extern MethodInfo m456_MI;
extern MethodInfo m455_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.CanvasGroup>
extern TypeInfo t2451_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13457_MI = 
{
	".ctor", (methodPointerType)&m9002_gshared, &t2451_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t2451_m13458_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2451_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13458_MI = 
{
	"GetHashCode", (methodPointerType)&m9003_gshared, &t2451_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2451_m13458_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t2451_m13459_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2451_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13459_MI = 
{
	"Equals", (methodPointerType)&m9004_gshared, &t2451_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2451_m13459_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2451_MIs[] =
{
	&m13457_MI,
	&m13458_MI,
	&m13459_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13459_MI;
extern MethodInfo m13458_MI;
extern MethodInfo m13455_MI;
extern MethodInfo m13454_MI;
extern MethodInfo m13458_MI;
extern MethodInfo m13459_MI;
static MethodInfo* t2451_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13459_MI,
	&m13458_MI,
	&m13455_MI,
	&m13454_MI,
	&m13458_MI,
	&m13459_MI,
};
extern TypeInfo t5852_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t2451_IOs[] = 
{
	{ &t5852_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppType t5851_0_0_0;
extern Il2CppType t465_0_0_0;
extern TypeInfo t2450_TI;
extern TypeInfo t2450_TI;
extern TypeInfo t2451_TI;
extern MethodInfo m13457_MI;
extern TypeInfo t465_TI;
extern MethodInfo m27765_MI;
extern MethodInfo m20631_MI;
extern MethodInfo m13452_MI;
extern TypeInfo t465_TI;
static void* t2451_RGCTXData[11] = 
{
	(void*)&t5851_0_0_0,
	(void*)&t465_0_0_0,
	&t2450_TI,
	&t2450_TI,
	&t2451_TI,
	&m13457_MI,
	&t465_TI,
	&m27765_MI,
	&m20631_MI,
	&m13452_MI,
	&t465_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2451_0_0_0;
extern Il2CppType t2451_1_0_0;
extern TypeInfo t2450_TI;
struct t2451;
extern TypeInfo t2451_TI;
extern Il2CppGenericClass t2451_GC;
extern TypeInfo t952_TI;
TypeInfo t2451_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2451_MIs, NULL, NULL, NULL, &t2450_TI, NULL, &t952_TI, &t2451_TI, NULL, t2451_VT, &EmptyCustomAttributesCache, &t2451_TI, &t2451_0_0_0, &t2451_1_0_0, t2451_IOs, &t2451_GC, NULL, NULL, NULL, t2451_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2451), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2444_TI;



// Metadata Definition System.Predicate`1<UnityEngine.CanvasGroup>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2444_m13460_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2444_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13460_MI = 
{
	".ctor", (methodPointerType)&m9418_gshared, &t2444_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2444_m13460_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
static ParameterInfo t2444_m13461_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2444_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13461_MI = 
{
	"Invoke", (methodPointerType)&m9419_gshared, &t2444_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2444_m13461_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2444_m13462_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2444_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13462_MI = 
{
	"BeginInvoke", (methodPointerType)&m9420_gshared, &t2444_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t2444_m13462_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2444_m13463_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2444_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13463_MI = 
{
	"EndInvoke", (methodPointerType)&m9421_gshared, &t2444_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2444_m13463_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2444_MIs[] =
{
	&m13460_MI,
	&m13461_MI,
	&m13462_MI,
	&m13463_MI,
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
extern MethodInfo m13461_MI;
extern MethodInfo m13462_MI;
extern MethodInfo m13463_MI;
static MethodInfo* t2444_VT[] =
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
	&m13461_MI,
	&m13462_MI,
	&m13463_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2444_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2444_0_0_0;
extern Il2CppType t2444_1_0_0;
extern TypeInfo t345_TI;
struct t2444;
extern TypeInfo t2444_TI;
extern Il2CppGenericClass t2444_GC;
TypeInfo t2444_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2444_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2444_TI, NULL, t2444_VT, &EmptyCustomAttributesCache, &t2444_TI, &t2444_0_0_0, &t2444_1_0_0, t2444_IOs, &t2444_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2444), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2452_TI;

#include "t2453.h"
extern TypeInfo t2452_TI;
extern TypeInfo t3854_TI;
extern TypeInfo t131_TI;
extern TypeInfo t465_TI;
extern TypeInfo t125_TI;
extern TypeInfo t941_TI;
extern TypeInfo t637_TI;
extern TypeInfo t2453_TI;
extern TypeInfo t134_TI;
extern TypeInfo t445_TI;
#include "t2453MD.h"
extern Il2CppType t3854_0_0_0;
extern Il2CppType t465_0_0_0;
extern Il2CppType t941_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m13468_MI;
extern MethodInfo m27769_MI;
extern MethodInfo m6988_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.CanvasGroup>
extern Il2CppType t2452_0_0_49;
FieldInfo t2452_f0_FieldInfo = 
{
	"_default", &t2452_0_0_49, &t2452_TI, offsetof(t2452_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2452_FIs[] =
{
	&t2452_f0_FieldInfo,
	NULL
};
extern MethodInfo m13467_MI;
static PropertyInfo t2452____Default_PropertyInfo = 
{
	&t2452_TI, "Default", &m13467_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2452_PIs[] =
{
	&t2452____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2452_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13464_MI = 
{
	".ctor", (methodPointerType)&m9422_gshared, &t2452_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2452_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13465_MI = 
{
	".cctor", (methodPointerType)&m9423_gshared, &t2452_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2452_m13466_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13466_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m9424_gshared, &t2452_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2452_m13466_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t2452_m27769_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27769_MI = 
{
	"Compare", NULL, &t2452_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2452_m27769_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2452_TI;
extern Il2CppType t2452_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13467_MI = 
{
	"get_Default", (methodPointerType)&m9425_gshared, &t2452_TI, &t2452_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2452_MIs[] =
{
	&m13464_MI,
	&m13465_MI,
	&m13466_MI,
	&m27769_MI,
	&m13467_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m27769_MI;
extern MethodInfo m13466_MI;
static MethodInfo* t2452_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m27769_MI,
	&m13466_MI,
	NULL,
};
extern TypeInfo t3853_TI;
extern TypeInfo t147_TI;
static TypeInfo* t2452_ITIs[] = 
{
	&t3853_TI,
	&t147_TI,
};
extern TypeInfo t3853_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t2452_IOs[] = 
{
	{ &t3853_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppType t3854_0_0_0;
extern Il2CppType t465_0_0_0;
extern TypeInfo t2452_TI;
extern TypeInfo t2452_TI;
extern TypeInfo t2453_TI;
extern MethodInfo m13468_MI;
extern TypeInfo t465_TI;
extern MethodInfo m27769_MI;
static void* t2452_RGCTXData[8] = 
{
	(void*)&t3854_0_0_0,
	(void*)&t465_0_0_0,
	&t2452_TI,
	&t2452_TI,
	&t2453_TI,
	&m13468_MI,
	&t465_TI,
	&m27769_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2452_0_0_0;
extern Il2CppType t2452_1_0_0;
extern TypeInfo t25_TI;
struct t2452;
extern TypeInfo t2452_TI;
extern Il2CppGenericClass t2452_GC;
TypeInfo t2452_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2452_MIs, t2452_PIs, t2452_FIs, NULL, &t25_TI, NULL, NULL, &t2452_TI, t2452_ITIs, t2452_VT, &EmptyCustomAttributesCache, &t2452_TI, &t2452_0_0_0, &t2452_1_0_0, t2452_IOs, &t2452_GC, NULL, NULL, NULL, t2452_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2452), 0, -1, sizeof(t2452_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3853_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.CanvasGroup>
extern Il2CppType t465_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t3853_m20639_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t3853_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20639_MI = 
{
	"Compare", NULL, &t3853_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t3853_m20639_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3853_MIs[] =
{
	&m20639_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3853_0_0_0;
extern Il2CppType t3853_1_0_0;
struct t3853;
extern TypeInfo t3853_TI;
extern Il2CppGenericClass t3853_GC;
TypeInfo t3853_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3853_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3853_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3853_TI, &t3853_0_0_0, &t3853_1_0_0, NULL, &t3853_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3854_TI;



// Metadata Definition System.IComparable`1<UnityEngine.CanvasGroup>
extern Il2CppType t465_0_0_0;
static ParameterInfo t3854_m20640_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t3854_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20640_MI = 
{
	"CompareTo", NULL, &t3854_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t3854_m20640_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3854_MIs[] =
{
	&m20640_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3854_0_0_0;
extern Il2CppType t3854_1_0_0;
struct t3854;
extern TypeInfo t3854_TI;
extern Il2CppGenericClass t3854_GC;
TypeInfo t3854_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3854_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3854_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3854_TI, &t3854_0_0_0, &t3854_1_0_0, NULL, &t3854_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2453_TI;

extern TypeInfo t465_TI;
extern TypeInfo t3854_TI;
extern TypeInfo t134_TI;
extern TypeInfo t143_TI;
extern TypeInfo t25_TI;
extern TypeInfo t445_TI;
extern MethodInfo m13464_MI;
extern MethodInfo m20640_MI;
extern MethodInfo m7828_MI;
extern MethodInfo m2409_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.CanvasGroup>
extern TypeInfo t2453_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13468_MI = 
{
	".ctor", (methodPointerType)&m9426_gshared, &t2453_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t2453_m13469_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2453_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13469_MI = 
{
	"Compare", (methodPointerType)&m9427_gshared, &t2453_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2453_m13469_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2453_MIs[] =
{
	&m13468_MI,
	&m13469_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m13469_MI;
extern MethodInfo m13466_MI;
extern MethodInfo m13469_MI;
static MethodInfo* t2453_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m13469_MI,
	&m13466_MI,
	&m13469_MI,
};
extern TypeInfo t3853_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t2453_IOs[] = 
{
	{ &t3853_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppType t3854_0_0_0;
extern Il2CppType t465_0_0_0;
extern TypeInfo t2452_TI;
extern TypeInfo t2452_TI;
extern TypeInfo t2453_TI;
extern MethodInfo m13468_MI;
extern TypeInfo t465_TI;
extern MethodInfo m27769_MI;
extern MethodInfo m13464_MI;
extern TypeInfo t465_TI;
extern TypeInfo t3854_TI;
extern MethodInfo m20640_MI;
static void* t2453_RGCTXData[12] = 
{
	(void*)&t3854_0_0_0,
	(void*)&t465_0_0_0,
	&t2452_TI,
	&t2452_TI,
	&t2453_TI,
	&m13468_MI,
	&t465_TI,
	&m27769_MI,
	&m13464_MI,
	&t465_TI,
	&t3854_TI,
	&m20640_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2453_0_0_0;
extern Il2CppType t2453_1_0_0;
extern TypeInfo t2452_TI;
struct t2453;
extern TypeInfo t2453_TI;
extern Il2CppGenericClass t2453_GC;
extern TypeInfo t940_TI;
TypeInfo t2453_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2453_MIs, NULL, NULL, NULL, &t2452_TI, NULL, &t940_TI, &t2453_TI, NULL, t2453_VT, &EmptyCustomAttributesCache, &t2453_TI, &t2453_0_0_0, &t2453_1_0_0, t2453_IOs, &t2453_GC, NULL, NULL, NULL, t2453_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2453), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2445_TI;
#include "t2445MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.CanvasGroup>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2445_m13470_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2445_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m13470_MI = 
{
	".ctor", (methodPointerType)&m9458_gshared, &t2445_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2445_m13470_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
extern Il2CppType t465_0_0_0;
static ParameterInfo t2445_m13471_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
};
extern TypeInfo t2445_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13471_MI = 
{
	"Invoke", (methodPointerType)&m9459_gshared, &t2445_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2445_m13471_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t465_0_0_0;
extern Il2CppType t465_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2445_m13472_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t465_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2445_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13472_MI = 
{
	"BeginInvoke", (methodPointerType)&m9460_gshared, &t2445_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25_t25, t2445_m13472_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2445_m13473_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2445_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13473_MI = 
{
	"EndInvoke", (methodPointerType)&m9461_gshared, &t2445_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2445_m13473_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2445_MIs[] =
{
	&m13470_MI,
	&m13471_MI,
	&m13472_MI,
	&m13473_MI,
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
extern MethodInfo m13471_MI;
extern MethodInfo m13472_MI;
extern MethodInfo m13473_MI;
static MethodInfo* t2445_VT[] =
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
	&m13471_MI,
	&m13472_MI,
	&m13473_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2445_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2445_0_0_0;
extern Il2CppType t2445_1_0_0;
extern TypeInfo t345_TI;
struct t2445;
extern TypeInfo t2445_TI;
extern Il2CppGenericClass t2445_GC;
TypeInfo t2445_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2445_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2445_TI, NULL, t2445_VT, &EmptyCustomAttributesCache, &t2445_TI, &t2445_0_0_0, &t2445_1_0_0, t2445_IOs, &t2445_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2445), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3855_TI;

#include "t372.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable/Transition>
extern MethodInfo m27770_MI;
static PropertyInfo t3855____Current_PropertyInfo = 
{
	&t3855_TI, "Current", &m27770_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3855_PIs[] =
{
	&t3855____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3855_TI;
extern Il2CppType t372_0_0_0;
extern void* RuntimeInvoker_t372 (MethodInfo* method, void* obj, void** args);
MethodInfo m27770_MI = 
{
	"get_Current", NULL, &t3855_TI, &t372_0_0_0, RuntimeInvoker_t372, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3855_MIs[] =
{
	&m27770_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3855_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3855_0_0_0;
extern Il2CppType t3855_1_0_0;
struct t3855;
extern TypeInfo t3855_TI;
extern Il2CppGenericClass t3855_GC;
TypeInfo t3855_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3855_MIs, t3855_PIs, NULL, NULL, NULL, NULL, NULL, &t3855_TI, t3855_ITIs, NULL, &EmptyCustomAttributesCache, &t3855_TI, &t3855_0_0_0, &t3855_1_0_0, NULL, &t3855_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2454.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2454_TI;
#include "t2454MD.h"

extern TypeInfo t2454_TI;
extern TypeInfo t372_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m13478_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20645_MI;
struct t122;
 int32_t m20645 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20645_MI;


extern MethodInfo m13474_MI;
 void m13474 (t2454 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13474_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13475_MI;
 t25 * m13475 (t2454 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13475_MI);
	{
		int32_t L_0 = m13478(__this, &m13478_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t372_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13476_MI;
 void m13476 (t2454 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13476_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13477_MI;
 bool m13477 (t2454 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13477_MI);
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
extern MethodInfo m13478_MI;
 int32_t m13478 (t2454 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m13478_MI);
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
		int32_t L_8 = m20645(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20645_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Selectable/Transition>
extern Il2CppType t122_0_0_1;
FieldInfo t2454_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2454_TI, offsetof(t2454, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2454_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2454_TI, offsetof(t2454, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2454_FIs[] =
{
	&t2454_f0_FieldInfo,
	&t2454_f1_FieldInfo,
	NULL
};
extern MethodInfo m13475_MI;
static PropertyInfo t2454____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2454_TI, "System.Collections.IEnumerator.Current", &m13475_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13478_MI;
static PropertyInfo t2454____Current_PropertyInfo = 
{
	&t2454_TI, "Current", &m13478_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2454_PIs[] =
{
	&t2454____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2454____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2454_m13474_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2454_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13474_MI = 
{
	".ctor", (methodPointerType)&m13474, &t2454_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2454_m13474_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2454_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m13475_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13475, &t2454_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2454_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m13476_MI = 
{
	"Dispose", (methodPointerType)&m13476, &t2454_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2454_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m13477_MI = 
{
	"MoveNext", (methodPointerType)&m13477, &t2454_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2454_TI;
extern Il2CppType t372_0_0_0;
extern void* RuntimeInvoker_t372 (MethodInfo* method, void* obj, void** args);
MethodInfo m13478_MI = 
{
	"get_Current", (methodPointerType)&m13478, &t2454_TI, &t372_0_0_0, RuntimeInvoker_t372, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2454_MIs[] =
{
	&m13474_MI,
	&m13475_MI,
	&m13476_MI,
	&m13477_MI,
	&m13478_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m13475_MI;
extern MethodInfo m13477_MI;
extern MethodInfo m13476_MI;
extern MethodInfo m13478_MI;
static MethodInfo* t2454_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m13475_MI,
	&m13477_MI,
	&m13476_MI,
	&m13478_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3855_TI;
static TypeInfo* t2454_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3855_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3855_TI;
static Il2CppInterfaceOffsetPair t2454_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3855_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2454_0_0_0;
extern Il2CppType t2454_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2454_TI;
extern Il2CppGenericClass t2454_GC;
extern TypeInfo t122_TI;
TypeInfo t2454_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2454_MIs, t2454_PIs, t2454_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2454_TI, t2454_ITIs, t2454_VT, &EmptyCustomAttributesCache, &t2454_TI, &t2454_0_0_0, &t2454_1_0_0, t2454_IOs, &t2454_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2454)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4751_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable/Transition>
extern MethodInfo m27771_MI;
static PropertyInfo t4751____Count_PropertyInfo = 
{
	&t4751_TI, "Count", &m27771_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27772_MI;
static PropertyInfo t4751____IsReadOnly_PropertyInfo = 
{
	&t4751_TI, "IsReadOnly", &m27772_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4751_PIs[] =
{
	&t4751____Count_PropertyInfo,
	&t4751____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4751_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27771_MI = 
{
	"get_Count", NULL, &t4751_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4751_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27772_MI = 
{
	"get_IsReadOnly", NULL, &t4751_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t372_0_0_0;
static ParameterInfo t4751_m27773_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t372_0_0_0},
};
extern TypeInfo t4751_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27773_MI = 
{
	"Add", NULL, &t4751_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4751_m27773_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4751_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27774_MI = 
{
	"Clear", NULL, &t4751_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t372_0_0_0;
static ParameterInfo t4751_m27775_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t372_0_0_0},
};
extern TypeInfo t4751_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27775_MI = 
{
	"Contains", NULL, &t4751_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4751_m27775_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3620_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4751_m27776_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3620_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4751_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27776_MI = 
{
	"CopyTo", NULL, &t4751_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4751_m27776_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t372_0_0_0;
static ParameterInfo t4751_m27777_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t372_0_0_0},
};
extern TypeInfo t4751_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27777_MI = 
{
	"Remove", NULL, &t4751_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4751_m27777_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4751_MIs[] =
{
	&m27771_MI,
	&m27772_MI,
	&m27773_MI,
	&m27774_MI,
	&m27775_MI,
	&m27776_MI,
	&m27777_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4753_TI;
static TypeInfo* t4751_ITIs[] = 
{
	&t703_TI,
	&t4753_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4751_0_0_0;
extern Il2CppType t4751_1_0_0;
struct t4751;
extern TypeInfo t4751_TI;
extern Il2CppGenericClass t4751_GC;
TypeInfo t4751_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4751_MIs, t4751_PIs, NULL, NULL, NULL, NULL, NULL, &t4751_TI, t4751_ITIs, NULL, &EmptyCustomAttributesCache, &t4751_TI, &t4751_0_0_0, &t4751_1_0_0, NULL, &t4751_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4753_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable/Transition>
extern TypeInfo t4753_TI;
extern Il2CppType t3855_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27778_MI = 
{
	"GetEnumerator", NULL, &t4753_TI, &t3855_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4753_MIs[] =
{
	&m27778_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4753_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4753_0_0_0;
extern Il2CppType t4753_1_0_0;
struct t4753;
extern TypeInfo t4753_TI;
extern Il2CppGenericClass t4753_GC;
TypeInfo t4753_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4753_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4753_TI, t4753_ITIs, NULL, &EmptyCustomAttributesCache, &t4753_TI, &t4753_0_0_0, &t4753_1_0_0, NULL, &t4753_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4752_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Selectable/Transition>
extern MethodInfo m27779_MI;
extern MethodInfo m27780_MI;
static PropertyInfo t4752____Item_PropertyInfo = 
{
	&t4752_TI, "Item", &m27779_MI, &m27780_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4752_PIs[] =
{
	&t4752____Item_PropertyInfo,
	NULL
};
extern Il2CppType t372_0_0_0;
static ParameterInfo t4752_m27781_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t372_0_0_0},
};
extern TypeInfo t4752_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27781_MI = 
{
	"IndexOf", NULL, &t4752_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t4752_m27781_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t372_0_0_0;
static ParameterInfo t4752_m27782_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t372_0_0_0},
};
extern TypeInfo t4752_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27782_MI = 
{
	"Insert", NULL, &t4752_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4752_m27782_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4752_m27783_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4752_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27783_MI = 
{
	"RemoveAt", NULL, &t4752_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4752_m27783_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4752_m27779_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4752_TI;
extern Il2CppType t372_0_0_0;
extern void* RuntimeInvoker_t372_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27779_MI = 
{
	"get_Item", NULL, &t4752_TI, &t372_0_0_0, RuntimeInvoker_t372_t134, t4752_m27779_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t372_0_0_0;
static ParameterInfo t4752_m27780_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t372_0_0_0},
};
extern TypeInfo t4752_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27780_MI = 
{
	"set_Item", NULL, &t4752_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4752_m27780_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4752_MIs[] =
{
	&m27781_MI,
	&m27782_MI,
	&m27783_MI,
	&m27779_MI,
	&m27780_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4751_TI;
extern TypeInfo t4753_TI;
static TypeInfo* t4752_ITIs[] = 
{
	&t703_TI,
	&t4751_TI,
	&t4753_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4752_0_0_0;
extern Il2CppType t4752_1_0_0;
struct t4752;
extern TypeInfo t4752_TI;
extern Il2CppGenericClass t4752_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4752_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4752_MIs, t4752_PIs, NULL, NULL, NULL, NULL, NULL, &t4752_TI, t4752_ITIs, NULL, &t1518__CustomAttributeCache, &t4752_TI, &t4752_0_0_0, &t4752_1_0_0, NULL, &t4752_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3856_TI;

#include "t356.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable/SelectionState>
extern MethodInfo m27784_MI;
static PropertyInfo t3856____Current_PropertyInfo = 
{
	&t3856_TI, "Current", &m27784_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3856_PIs[] =
{
	&t3856____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3856_TI;
extern Il2CppType t356_0_0_0;
extern void* RuntimeInvoker_t356 (MethodInfo* method, void* obj, void** args);
MethodInfo m27784_MI = 
{
	"get_Current", NULL, &t3856_TI, &t356_0_0_0, RuntimeInvoker_t356, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3856_MIs[] =
{
	&m27784_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3856_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3856_0_0_0;
extern Il2CppType t3856_1_0_0;
struct t3856;
extern TypeInfo t3856_TI;
extern Il2CppGenericClass t3856_GC;
TypeInfo t3856_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3856_MIs, t3856_PIs, NULL, NULL, NULL, NULL, NULL, &t3856_TI, t3856_ITIs, NULL, &EmptyCustomAttributesCache, &t3856_TI, &t3856_0_0_0, &t3856_1_0_0, NULL, &t3856_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
