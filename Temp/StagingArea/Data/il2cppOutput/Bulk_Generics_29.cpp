#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t3020.h"
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
extern TypeInfo t3020_TI;
#include "t3020MD.h"

#include "t25.h"
#include "t721.h"
#include "t134.h"
#include "t27.h"
#include "t1387.h"
#include "t123.h"
#include "t122.h"
#include "t125.h"
extern TypeInfo t3020_TI;
extern TypeInfo t721_TI;
extern TypeInfo t1387_TI;
#include "t1387MD.h"
#include "t122MD.h"
extern MethodInfo m16895_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22827_MI;
struct t122;
#include "t1351.h"
 uint16_t m22827 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22827_MI;


extern MethodInfo m16891_MI;
 void m16891 (t3020 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m16891_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16892_MI;
 t25 * m16892 (t3020 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m16892_MI);
	{
		uint16_t L_0 = m16895(__this, &m16895_MI);
		uint16_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t721_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16893_MI;
 void m16893 (t3020 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m16893_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16894_MI;
 bool m16894 (t3020 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m16894_MI);
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
extern MethodInfo m16895_MI;
 uint16_t m16895 (t3020 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m16895_MI);
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
		uint16_t L_8 = m22827(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22827_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UInt16>
extern Il2CppType t122_0_0_1;
FieldInfo t3020_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3020_TI, offsetof(t3020, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3020_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3020_TI, offsetof(t3020, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3020_FIs[] =
{
	&t3020_f0_FieldInfo,
	&t3020_f1_FieldInfo,
	NULL
};
extern MethodInfo m16892_MI;
static PropertyInfo t3020____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3020_TI, "System.Collections.IEnumerator.Current", &m16892_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16895_MI;
static PropertyInfo t3020____Current_PropertyInfo = 
{
	&t3020_TI, "Current", &m16895_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3020_PIs[] =
{
	&t3020____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3020____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3020_m16891_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3020_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16891_MI = 
{
	".ctor", (methodPointerType)&m16891, &t3020_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3020_m16891_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3020_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16892_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16892, &t3020_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3020_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16893_MI = 
{
	"Dispose", (methodPointerType)&m16893, &t3020_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3020_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16894_MI = 
{
	"MoveNext", (methodPointerType)&m16894, &t3020_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3020_TI;
extern Il2CppType t721_0_0_0;
extern void* RuntimeInvoker_t721 (MethodInfo* method, void* obj, void** args);
MethodInfo m16895_MI = 
{
	"get_Current", (methodPointerType)&m16895, &t3020_TI, &t721_0_0_0, RuntimeInvoker_t721, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3020_MIs[] =
{
	&m16891_MI,
	&m16892_MI,
	&m16893_MI,
	&m16894_MI,
	&m16895_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16892_MI;
extern MethodInfo m16894_MI;
extern MethodInfo m16893_MI;
extern MethodInfo m16895_MI;
static MethodInfo* t3020_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16892_MI,
	&m16894_MI,
	&m16893_MI,
	&m16895_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4034_TI;
static TypeInfo* t3020_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4034_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4034_TI;
static Il2CppInterfaceOffsetPair t3020_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4034_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3020_0_0_0;
extern Il2CppType t3020_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3020_TI;
extern Il2CppGenericClass t3020_GC;
extern TypeInfo t122_TI;
TypeInfo t3020_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3020_MIs, t3020_PIs, t3020_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3020_TI, t3020_ITIs, t3020_VT, &EmptyCustomAttributesCache, &t3020_TI, &t3020_0_0_0, &t3020_1_0_0, t3020_IOs, &t3020_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3020)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5255_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.UInt16>
extern MethodInfo m30318_MI;
static PropertyInfo t5255____Count_PropertyInfo = 
{
	&t5255_TI, "Count", &m30318_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30319_MI;
static PropertyInfo t5255____IsReadOnly_PropertyInfo = 
{
	&t5255_TI, "IsReadOnly", &m30319_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5255_PIs[] =
{
	&t5255____Count_PropertyInfo,
	&t5255____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5255_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30318_MI = 
{
	"get_Count", NULL, &t5255_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5255_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30319_MI = 
{
	"get_IsReadOnly", NULL, &t5255_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t721_0_0_0;
static ParameterInfo t5255_m30320_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t721_0_0_0},
};
extern TypeInfo t5255_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t483 (MethodInfo* method, void* obj, void** args);
MethodInfo m30320_MI = 
{
	"Add", NULL, &t5255_TI, &t123_0_0_0, RuntimeInvoker_t123_t483, t5255_m30320_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5255_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30321_MI = 
{
	"Clear", NULL, &t5255_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t721_0_0_0;
static ParameterInfo t5255_m30322_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t721_0_0_0},
};
extern TypeInfo t5255_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t483 (MethodInfo* method, void* obj, void** args);
MethodInfo m30322_MI = 
{
	"Contains", NULL, &t5255_TI, &t125_0_0_0, RuntimeInvoker_t125_t483, t5255_m30322_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1261_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5255_m30323_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1261_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5255_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30323_MI = 
{
	"CopyTo", NULL, &t5255_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5255_m30323_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t721_0_0_0;
static ParameterInfo t5255_m30324_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t721_0_0_0},
};
extern TypeInfo t5255_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t483 (MethodInfo* method, void* obj, void** args);
MethodInfo m30324_MI = 
{
	"Remove", NULL, &t5255_TI, &t125_0_0_0, RuntimeInvoker_t125_t483, t5255_m30324_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5255_MIs[] =
{
	&m30318_MI,
	&m30319_MI,
	&m30320_MI,
	&m30321_MI,
	&m30322_MI,
	&m30323_MI,
	&m30324_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5257_TI;
static TypeInfo* t5255_ITIs[] = 
{
	&t703_TI,
	&t5257_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5255_0_0_0;
extern Il2CppType t5255_1_0_0;
struct t5255;
extern TypeInfo t5255_TI;
extern Il2CppGenericClass t5255_GC;
TypeInfo t5255_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5255_MIs, t5255_PIs, NULL, NULL, NULL, NULL, NULL, &t5255_TI, t5255_ITIs, NULL, &EmptyCustomAttributesCache, &t5255_TI, &t5255_0_0_0, &t5255_1_0_0, NULL, &t5255_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5257_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UInt16>
extern TypeInfo t5257_TI;
extern Il2CppType t4034_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30325_MI = 
{
	"GetEnumerator", NULL, &t5257_TI, &t4034_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5257_MIs[] =
{
	&m30325_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5257_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5257_0_0_0;
extern Il2CppType t5257_1_0_0;
struct t5257;
extern TypeInfo t5257_TI;
extern Il2CppGenericClass t5257_GC;
TypeInfo t5257_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5257_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5257_TI, t5257_ITIs, NULL, &EmptyCustomAttributesCache, &t5257_TI, &t5257_0_0_0, &t5257_1_0_0, NULL, &t5257_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5256_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.UInt16>
extern MethodInfo m30326_MI;
extern MethodInfo m30327_MI;
static PropertyInfo t5256____Item_PropertyInfo = 
{
	&t5256_TI, "Item", &m30326_MI, &m30327_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5256_PIs[] =
{
	&t5256____Item_PropertyInfo,
	NULL
};
extern Il2CppType t721_0_0_0;
static ParameterInfo t5256_m30328_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t721_0_0_0},
};
extern TypeInfo t5256_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t483 (MethodInfo* method, void* obj, void** args);
MethodInfo m30328_MI = 
{
	"IndexOf", NULL, &t5256_TI, &t134_0_0_0, RuntimeInvoker_t134_t483, t5256_m30328_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t721_0_0_0;
static ParameterInfo t5256_m30329_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t721_0_0_0},
};
extern TypeInfo t5256_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t483 (MethodInfo* method, void* obj, void** args);
MethodInfo m30329_MI = 
{
	"Insert", NULL, &t5256_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t483, t5256_m30329_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5256_m30330_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5256_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30330_MI = 
{
	"RemoveAt", NULL, &t5256_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5256_m30330_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5256_m30326_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5256_TI;
extern Il2CppType t721_0_0_0;
extern void* RuntimeInvoker_t721_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30326_MI = 
{
	"get_Item", NULL, &t5256_TI, &t721_0_0_0, RuntimeInvoker_t721_t134, t5256_m30326_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t721_0_0_0;
static ParameterInfo t5256_m30327_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t721_0_0_0},
};
extern TypeInfo t5256_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t483 (MethodInfo* method, void* obj, void** args);
MethodInfo m30327_MI = 
{
	"set_Item", NULL, &t5256_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t483, t5256_m30327_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5256_MIs[] =
{
	&m30328_MI,
	&m30329_MI,
	&m30330_MI,
	&m30326_MI,
	&m30327_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5255_TI;
extern TypeInfo t5257_TI;
static TypeInfo* t5256_ITIs[] = 
{
	&t703_TI,
	&t5255_TI,
	&t5257_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5256_0_0_0;
extern Il2CppType t5256_1_0_0;
struct t5256;
extern TypeInfo t5256_TI;
extern Il2CppGenericClass t5256_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5256_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5256_MIs, t5256_PIs, NULL, NULL, NULL, NULL, NULL, &t5256_TI, t5256_ITIs, NULL, &t1518__CustomAttributeCache, &t5256_TI, &t5256_0_0_0, &t5256_1_0_0, NULL, &t5256_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5258_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>
extern MethodInfo m30331_MI;
static PropertyInfo t5258____Count_PropertyInfo = 
{
	&t5258_TI, "Count", &m30331_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30332_MI;
static PropertyInfo t5258____IsReadOnly_PropertyInfo = 
{
	&t5258_TI, "IsReadOnly", &m30332_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5258_PIs[] =
{
	&t5258____Count_PropertyInfo,
	&t5258____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5258_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30331_MI = 
{
	"get_Count", NULL, &t5258_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5258_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30332_MI = 
{
	"get_IsReadOnly", NULL, &t5258_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1467_0_0_0;
static ParameterInfo t5258_m30333_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1467_0_0_0},
};
extern TypeInfo t5258_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30333_MI = 
{
	"Add", NULL, &t5258_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5258_m30333_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5258_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30334_MI = 
{
	"Clear", NULL, &t5258_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1467_0_0_0;
static ParameterInfo t5258_m30335_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1467_0_0_0},
};
extern TypeInfo t5258_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30335_MI = 
{
	"Contains", NULL, &t5258_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5258_m30335_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3326_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5258_m30336_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3326_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5258_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30336_MI = 
{
	"CopyTo", NULL, &t5258_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5258_m30336_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1467_0_0_0;
static ParameterInfo t5258_m30337_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1467_0_0_0},
};
extern TypeInfo t5258_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30337_MI = 
{
	"Remove", NULL, &t5258_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5258_m30337_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5258_MIs[] =
{
	&m30331_MI,
	&m30332_MI,
	&m30333_MI,
	&m30334_MI,
	&m30335_MI,
	&m30336_MI,
	&m30337_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5260_TI;
static TypeInfo* t5258_ITIs[] = 
{
	&t703_TI,
	&t5260_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5258_0_0_0;
extern Il2CppType t5258_1_0_0;
struct t5258;
extern TypeInfo t5258_TI;
extern Il2CppGenericClass t5258_GC;
TypeInfo t5258_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5258_MIs, t5258_PIs, NULL, NULL, NULL, NULL, NULL, &t5258_TI, t5258_ITIs, NULL, &EmptyCustomAttributesCache, &t5258_TI, &t5258_0_0_0, &t5258_1_0_0, NULL, &t5258_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5260_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.UInt16>>
extern TypeInfo t5260_TI;
extern Il2CppType t4035_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30338_MI = 
{
	"GetEnumerator", NULL, &t5260_TI, &t4035_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5260_MIs[] =
{
	&m30338_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5260_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5260_0_0_0;
extern Il2CppType t5260_1_0_0;
struct t5260;
extern TypeInfo t5260_TI;
extern Il2CppGenericClass t5260_GC;
TypeInfo t5260_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5260_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5260_TI, t5260_ITIs, NULL, &EmptyCustomAttributesCache, &t5260_TI, &t5260_0_0_0, &t5260_1_0_0, NULL, &t5260_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4035_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.UInt16>>
extern MethodInfo m30339_MI;
static PropertyInfo t4035____Current_PropertyInfo = 
{
	&t4035_TI, "Current", &m30339_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4035_PIs[] =
{
	&t4035____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4035_TI;
extern Il2CppType t1467_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30339_MI = 
{
	"get_Current", NULL, &t4035_TI, &t1467_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4035_MIs[] =
{
	&m30339_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4035_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4035_0_0_0;
extern Il2CppType t4035_1_0_0;
struct t4035;
extern TypeInfo t4035_TI;
extern Il2CppGenericClass t4035_GC;
TypeInfo t4035_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4035_MIs, t4035_PIs, NULL, NULL, NULL, NULL, NULL, &t4035_TI, t4035_ITIs, NULL, &EmptyCustomAttributesCache, &t4035_TI, &t4035_0_0_0, &t4035_1_0_0, NULL, &t4035_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1467_TI;



// Metadata Definition System.IComparable`1<System.UInt16>
extern Il2CppType t721_0_0_0;
static ParameterInfo t1467_m30340_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t721_0_0_0},
};
extern TypeInfo t1467_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t483 (MethodInfo* method, void* obj, void** args);
MethodInfo m30340_MI = 
{
	"CompareTo", NULL, &t1467_TI, &t134_0_0_0, RuntimeInvoker_t134_t483, t1467_m30340_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1467_MIs[] =
{
	&m30340_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1467_0_0_0;
extern Il2CppType t1467_1_0_0;
struct t1467;
extern TypeInfo t1467_TI;
extern Il2CppGenericClass t1467_GC;
TypeInfo t1467_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1467_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1467_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1467_TI, &t1467_0_0_0, &t1467_1_0_0, NULL, &t1467_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t3021.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3021_TI;
#include "t3021MD.h"

extern TypeInfo t3021_TI;
extern TypeInfo t1467_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16900_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22838_MI;
struct t122;
struct t122;
 t25 * m18022_gshared (t122 * __this, int32_t p0, MethodInfo* method);
#define m18022(__this, p0, method) (t25 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
#define m22838(__this, p0, method) (t25*)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m22838_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>
extern Il2CppType t122_0_0_1;
FieldInfo t3021_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3021_TI, offsetof(t3021, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3021_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3021_TI, offsetof(t3021, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3021_FIs[] =
{
	&t3021_f0_FieldInfo,
	&t3021_f1_FieldInfo,
	NULL
};
extern MethodInfo m16897_MI;
static PropertyInfo t3021____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3021_TI, "System.Collections.IEnumerator.Current", &m16897_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16900_MI;
static PropertyInfo t3021____Current_PropertyInfo = 
{
	&t3021_TI, "Current", &m16900_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3021_PIs[] =
{
	&t3021____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3021____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3021_m16896_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3021_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16896_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3021_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3021_m16896_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3021_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16897_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3021_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3021_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16898_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3021_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3021_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16899_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3021_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3021_TI;
extern Il2CppType t1467_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16900_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3021_TI, &t1467_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3021_MIs[] =
{
	&m16896_MI,
	&m16897_MI,
	&m16898_MI,
	&m16899_MI,
	&m16900_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16897_MI;
extern MethodInfo m16899_MI;
extern MethodInfo m16898_MI;
extern MethodInfo m16900_MI;
static MethodInfo* t3021_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16897_MI,
	&m16899_MI,
	&m16898_MI,
	&m16900_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4035_TI;
static TypeInfo* t3021_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4035_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4035_TI;
static Il2CppInterfaceOffsetPair t3021_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4035_TI, 7},
};
extern MethodInfo m16900_MI;
extern TypeInfo t1467_TI;
extern MethodInfo m22838_MI;
static void* t3021_RGCTXData[3] = 
{
	&m16900_MI,
	&t1467_TI,
	&m22838_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3021_0_0_0;
extern Il2CppType t3021_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3021_TI;
extern Il2CppGenericClass t3021_GC;
extern TypeInfo t122_TI;
TypeInfo t3021_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3021_MIs, t3021_PIs, t3021_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3021_TI, t3021_ITIs, t3021_VT, &EmptyCustomAttributesCache, &t3021_TI, &t3021_0_0_0, &t3021_1_0_0, t3021_IOs, &t3021_GC, NULL, NULL, NULL, t3021_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3021)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5259_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.UInt16>>
extern MethodInfo m30341_MI;
extern MethodInfo m30342_MI;
static PropertyInfo t5259____Item_PropertyInfo = 
{
	&t5259_TI, "Item", &m30341_MI, &m30342_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5259_PIs[] =
{
	&t5259____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1467_0_0_0;
static ParameterInfo t5259_m30343_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1467_0_0_0},
};
extern TypeInfo t5259_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30343_MI = 
{
	"IndexOf", NULL, &t5259_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5259_m30343_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1467_0_0_0;
static ParameterInfo t5259_m30344_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1467_0_0_0},
};
extern TypeInfo t5259_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30344_MI = 
{
	"Insert", NULL, &t5259_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5259_m30344_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5259_m30345_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5259_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30345_MI = 
{
	"RemoveAt", NULL, &t5259_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5259_m30345_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5259_m30341_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5259_TI;
extern Il2CppType t1467_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30341_MI = 
{
	"get_Item", NULL, &t5259_TI, &t1467_0_0_0, RuntimeInvoker_t25_t134, t5259_m30341_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1467_0_0_0;
static ParameterInfo t5259_m30342_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1467_0_0_0},
};
extern TypeInfo t5259_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30342_MI = 
{
	"set_Item", NULL, &t5259_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5259_m30342_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5259_MIs[] =
{
	&m30343_MI,
	&m30344_MI,
	&m30345_MI,
	&m30341_MI,
	&m30342_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5258_TI;
extern TypeInfo t5260_TI;
static TypeInfo* t5259_ITIs[] = 
{
	&t703_TI,
	&t5258_TI,
	&t5260_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5259_0_0_0;
extern Il2CppType t5259_1_0_0;
struct t5259;
extern TypeInfo t5259_TI;
extern Il2CppGenericClass t5259_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5259_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5259_MIs, t5259_PIs, NULL, NULL, NULL, NULL, NULL, &t5259_TI, t5259_ITIs, NULL, &t1518__CustomAttributeCache, &t5259_TI, &t5259_0_0_0, &t5259_1_0_0, NULL, &t5259_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5261_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>
extern MethodInfo m30346_MI;
static PropertyInfo t5261____Count_PropertyInfo = 
{
	&t5261_TI, "Count", &m30346_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30347_MI;
static PropertyInfo t5261____IsReadOnly_PropertyInfo = 
{
	&t5261_TI, "IsReadOnly", &m30347_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5261_PIs[] =
{
	&t5261____Count_PropertyInfo,
	&t5261____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5261_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30346_MI = 
{
	"get_Count", NULL, &t5261_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5261_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30347_MI = 
{
	"get_IsReadOnly", NULL, &t5261_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1468_0_0_0;
static ParameterInfo t5261_m30348_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1468_0_0_0},
};
extern TypeInfo t5261_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30348_MI = 
{
	"Add", NULL, &t5261_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5261_m30348_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5261_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30349_MI = 
{
	"Clear", NULL, &t5261_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1468_0_0_0;
static ParameterInfo t5261_m30350_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1468_0_0_0},
};
extern TypeInfo t5261_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30350_MI = 
{
	"Contains", NULL, &t5261_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5261_m30350_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3327_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5261_m30351_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3327_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5261_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30351_MI = 
{
	"CopyTo", NULL, &t5261_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5261_m30351_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1468_0_0_0;
static ParameterInfo t5261_m30352_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1468_0_0_0},
};
extern TypeInfo t5261_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30352_MI = 
{
	"Remove", NULL, &t5261_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5261_m30352_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5261_MIs[] =
{
	&m30346_MI,
	&m30347_MI,
	&m30348_MI,
	&m30349_MI,
	&m30350_MI,
	&m30351_MI,
	&m30352_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5263_TI;
static TypeInfo* t5261_ITIs[] = 
{
	&t703_TI,
	&t5263_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5261_0_0_0;
extern Il2CppType t5261_1_0_0;
struct t5261;
extern TypeInfo t5261_TI;
extern Il2CppGenericClass t5261_GC;
TypeInfo t5261_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5261_MIs, t5261_PIs, NULL, NULL, NULL, NULL, NULL, &t5261_TI, t5261_ITIs, NULL, &EmptyCustomAttributesCache, &t5261_TI, &t5261_0_0_0, &t5261_1_0_0, NULL, &t5261_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5263_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.UInt16>>
extern TypeInfo t5263_TI;
extern Il2CppType t4036_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30353_MI = 
{
	"GetEnumerator", NULL, &t5263_TI, &t4036_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5263_MIs[] =
{
	&m30353_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5263_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5263_0_0_0;
extern Il2CppType t5263_1_0_0;
struct t5263;
extern TypeInfo t5263_TI;
extern Il2CppGenericClass t5263_GC;
TypeInfo t5263_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5263_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5263_TI, t5263_ITIs, NULL, &EmptyCustomAttributesCache, &t5263_TI, &t5263_0_0_0, &t5263_1_0_0, NULL, &t5263_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4036_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.UInt16>>
extern MethodInfo m30354_MI;
static PropertyInfo t4036____Current_PropertyInfo = 
{
	&t4036_TI, "Current", &m30354_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4036_PIs[] =
{
	&t4036____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4036_TI;
extern Il2CppType t1468_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30354_MI = 
{
	"get_Current", NULL, &t4036_TI, &t1468_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4036_MIs[] =
{
	&m30354_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4036_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4036_0_0_0;
extern Il2CppType t4036_1_0_0;
struct t4036;
extern TypeInfo t4036_TI;
extern Il2CppGenericClass t4036_GC;
TypeInfo t4036_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4036_MIs, t4036_PIs, NULL, NULL, NULL, NULL, NULL, &t4036_TI, t4036_ITIs, NULL, &EmptyCustomAttributesCache, &t4036_TI, &t4036_0_0_0, &t4036_1_0_0, NULL, &t4036_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1468_TI;



// Metadata Definition System.IEquatable`1<System.UInt16>
extern Il2CppType t721_0_0_0;
static ParameterInfo t1468_m30355_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t721_0_0_0},
};
extern TypeInfo t1468_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t483 (MethodInfo* method, void* obj, void** args);
MethodInfo m30355_MI = 
{
	"Equals", NULL, &t1468_TI, &t125_0_0_0, RuntimeInvoker_t125_t483, t1468_m30355_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1468_MIs[] =
{
	&m30355_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1468_0_0_0;
extern Il2CppType t1468_1_0_0;
struct t1468;
extern TypeInfo t1468_TI;
extern Il2CppGenericClass t1468_GC;
TypeInfo t1468_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1468_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1468_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1468_TI, &t1468_0_0_0, &t1468_1_0_0, NULL, &t1468_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t3022.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3022_TI;
#include "t3022MD.h"

extern TypeInfo t3022_TI;
extern TypeInfo t1468_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16905_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22849_MI;
struct t122;
#define m22849(__this, p0, method) (t25*)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m22849_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>
extern Il2CppType t122_0_0_1;
FieldInfo t3022_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3022_TI, offsetof(t3022, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3022_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3022_TI, offsetof(t3022, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3022_FIs[] =
{
	&t3022_f0_FieldInfo,
	&t3022_f1_FieldInfo,
	NULL
};
extern MethodInfo m16902_MI;
static PropertyInfo t3022____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3022_TI, "System.Collections.IEnumerator.Current", &m16902_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16905_MI;
static PropertyInfo t3022____Current_PropertyInfo = 
{
	&t3022_TI, "Current", &m16905_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3022_PIs[] =
{
	&t3022____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3022____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3022_m16901_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3022_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16901_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3022_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3022_m16901_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3022_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16902_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3022_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3022_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16903_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3022_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3022_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16904_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3022_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3022_TI;
extern Il2CppType t1468_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16905_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3022_TI, &t1468_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3022_MIs[] =
{
	&m16901_MI,
	&m16902_MI,
	&m16903_MI,
	&m16904_MI,
	&m16905_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16902_MI;
extern MethodInfo m16904_MI;
extern MethodInfo m16903_MI;
extern MethodInfo m16905_MI;
static MethodInfo* t3022_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16902_MI,
	&m16904_MI,
	&m16903_MI,
	&m16905_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4036_TI;
static TypeInfo* t3022_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4036_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4036_TI;
static Il2CppInterfaceOffsetPair t3022_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4036_TI, 7},
};
extern MethodInfo m16905_MI;
extern TypeInfo t1468_TI;
extern MethodInfo m22849_MI;
static void* t3022_RGCTXData[3] = 
{
	&m16905_MI,
	&t1468_TI,
	&m22849_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3022_0_0_0;
extern Il2CppType t3022_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3022_TI;
extern Il2CppGenericClass t3022_GC;
extern TypeInfo t122_TI;
TypeInfo t3022_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3022_MIs, t3022_PIs, t3022_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3022_TI, t3022_ITIs, t3022_VT, &EmptyCustomAttributesCache, &t3022_TI, &t3022_0_0_0, &t3022_1_0_0, t3022_IOs, &t3022_GC, NULL, NULL, NULL, t3022_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3022)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5262_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt16>>
extern MethodInfo m30356_MI;
extern MethodInfo m30357_MI;
static PropertyInfo t5262____Item_PropertyInfo = 
{
	&t5262_TI, "Item", &m30356_MI, &m30357_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5262_PIs[] =
{
	&t5262____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1468_0_0_0;
static ParameterInfo t5262_m30358_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1468_0_0_0},
};
extern TypeInfo t5262_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30358_MI = 
{
	"IndexOf", NULL, &t5262_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5262_m30358_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1468_0_0_0;
static ParameterInfo t5262_m30359_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1468_0_0_0},
};
extern TypeInfo t5262_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30359_MI = 
{
	"Insert", NULL, &t5262_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5262_m30359_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5262_m30360_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5262_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30360_MI = 
{
	"RemoveAt", NULL, &t5262_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5262_m30360_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5262_m30356_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5262_TI;
extern Il2CppType t1468_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30356_MI = 
{
	"get_Item", NULL, &t5262_TI, &t1468_0_0_0, RuntimeInvoker_t25_t134, t5262_m30356_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1468_0_0_0;
static ParameterInfo t5262_m30357_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1468_0_0_0},
};
extern TypeInfo t5262_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30357_MI = 
{
	"set_Item", NULL, &t5262_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5262_m30357_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5262_MIs[] =
{
	&m30358_MI,
	&m30359_MI,
	&m30360_MI,
	&m30356_MI,
	&m30357_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5261_TI;
extern TypeInfo t5263_TI;
static TypeInfo* t5262_ITIs[] = 
{
	&t703_TI,
	&t5261_TI,
	&t5263_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5262_0_0_0;
extern Il2CppType t5262_1_0_0;
struct t5262;
extern TypeInfo t5262_TI;
extern Il2CppGenericClass t5262_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5262_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5262_MIs, t5262_PIs, NULL, NULL, NULL, NULL, NULL, &t5262_TI, t5262_ITIs, NULL, &t1518__CustomAttributeCache, &t5262_TI, &t5262_0_0_0, &t5262_1_0_0, NULL, &t5262_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1494_TI;

#include "t812.h"


// Metadata Definition System.IComparable`1<System.Decimal>
extern Il2CppType t812_0_0_0;
static ParameterInfo t1494_m30361_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t812_0_0_0},
};
extern TypeInfo t1494_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t812 (MethodInfo* method, void* obj, void** args);
MethodInfo m30361_MI = 
{
	"CompareTo", NULL, &t1494_TI, &t134_0_0_0, RuntimeInvoker_t134_t812, t1494_m30361_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1494_MIs[] =
{
	&m30361_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1494_0_0_0;
extern Il2CppType t1494_1_0_0;
struct t1494;
extern TypeInfo t1494_TI;
extern Il2CppGenericClass t1494_GC;
TypeInfo t1494_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1494_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1494_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1494_TI, &t1494_0_0_0, &t1494_1_0_0, NULL, &t1494_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1495_TI;



// Metadata Definition System.IEquatable`1<System.Decimal>
extern Il2CppType t812_0_0_0;
static ParameterInfo t1495_m30362_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t812_0_0_0},
};
extern TypeInfo t1495_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t812 (MethodInfo* method, void* obj, void** args);
MethodInfo m30362_MI = 
{
	"Equals", NULL, &t1495_TI, &t125_0_0_0, RuntimeInvoker_t125_t812, t1495_m30362_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1495_MIs[] =
{
	&m30362_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1495_0_0_0;
extern Il2CppType t1495_1_0_0;
struct t1495;
extern TypeInfo t1495_TI;
extern Il2CppGenericClass t1495_GC;
TypeInfo t1495_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1495_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1495_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1495_TI, &t1495_0_0_0, &t1495_1_0_0, NULL, &t1495_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4037_TI;

#include "t825.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UIntPtr>
extern MethodInfo m30363_MI;
static PropertyInfo t4037____Current_PropertyInfo = 
{
	&t4037_TI, "Current", &m30363_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4037_PIs[] =
{
	&t4037____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4037_TI;
extern Il2CppType t825_0_0_0;
extern void* RuntimeInvoker_t825 (MethodInfo* method, void* obj, void** args);
MethodInfo m30363_MI = 
{
	"get_Current", NULL, &t4037_TI, &t825_0_0_0, RuntimeInvoker_t825, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4037_MIs[] =
{
	&m30363_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4037_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4037_0_0_0;
extern Il2CppType t4037_1_0_0;
struct t4037;
extern TypeInfo t4037_TI;
extern Il2CppGenericClass t4037_GC;
TypeInfo t4037_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4037_MIs, t4037_PIs, NULL, NULL, NULL, NULL, NULL, &t4037_TI, t4037_ITIs, NULL, &EmptyCustomAttributesCache, &t4037_TI, &t4037_0_0_0, &t4037_1_0_0, NULL, &t4037_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3023.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3023_TI;
#include "t3023MD.h"

extern TypeInfo t3023_TI;
extern TypeInfo t825_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16910_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22860_MI;
struct t122;
 t825  m22860 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22860_MI;


extern MethodInfo m16906_MI;
 void m16906 (t3023 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m16906_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16907_MI;
 t25 * m16907 (t3023 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m16907_MI);
	{
		t825  L_0 = m16910(__this, &m16910_MI);
		t825  L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t825_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16908_MI;
 void m16908 (t3023 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m16908_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16909_MI;
 bool m16909 (t3023 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m16909_MI);
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
extern MethodInfo m16910_MI;
 t825  m16910 (t3023 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m16910_MI);
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
		t825  L_8 = m22860(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22860_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UIntPtr>
extern Il2CppType t122_0_0_1;
FieldInfo t3023_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3023_TI, offsetof(t3023, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3023_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3023_TI, offsetof(t3023, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3023_FIs[] =
{
	&t3023_f0_FieldInfo,
	&t3023_f1_FieldInfo,
	NULL
};
extern MethodInfo m16907_MI;
static PropertyInfo t3023____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3023_TI, "System.Collections.IEnumerator.Current", &m16907_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16910_MI;
static PropertyInfo t3023____Current_PropertyInfo = 
{
	&t3023_TI, "Current", &m16910_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3023_PIs[] =
{
	&t3023____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3023____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3023_m16906_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3023_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16906_MI = 
{
	".ctor", (methodPointerType)&m16906, &t3023_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3023_m16906_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3023_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16907_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16907, &t3023_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3023_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16908_MI = 
{
	"Dispose", (methodPointerType)&m16908, &t3023_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3023_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16909_MI = 
{
	"MoveNext", (methodPointerType)&m16909, &t3023_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3023_TI;
extern Il2CppType t825_0_0_0;
extern void* RuntimeInvoker_t825 (MethodInfo* method, void* obj, void** args);
MethodInfo m16910_MI = 
{
	"get_Current", (methodPointerType)&m16910, &t3023_TI, &t825_0_0_0, RuntimeInvoker_t825, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3023_MIs[] =
{
	&m16906_MI,
	&m16907_MI,
	&m16908_MI,
	&m16909_MI,
	&m16910_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16907_MI;
extern MethodInfo m16909_MI;
extern MethodInfo m16908_MI;
extern MethodInfo m16910_MI;
static MethodInfo* t3023_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16907_MI,
	&m16909_MI,
	&m16908_MI,
	&m16910_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4037_TI;
static TypeInfo* t3023_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4037_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4037_TI;
static Il2CppInterfaceOffsetPair t3023_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4037_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3023_0_0_0;
extern Il2CppType t3023_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3023_TI;
extern Il2CppGenericClass t3023_GC;
extern TypeInfo t122_TI;
TypeInfo t3023_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3023_MIs, t3023_PIs, t3023_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3023_TI, t3023_ITIs, t3023_VT, &EmptyCustomAttributesCache, &t3023_TI, &t3023_0_0_0, &t3023_1_0_0, t3023_IOs, &t3023_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3023)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5264_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.UIntPtr>
extern MethodInfo m30364_MI;
static PropertyInfo t5264____Count_PropertyInfo = 
{
	&t5264_TI, "Count", &m30364_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30365_MI;
static PropertyInfo t5264____IsReadOnly_PropertyInfo = 
{
	&t5264_TI, "IsReadOnly", &m30365_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5264_PIs[] =
{
	&t5264____Count_PropertyInfo,
	&t5264____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5264_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30364_MI = 
{
	"get_Count", NULL, &t5264_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5264_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30365_MI = 
{
	"get_IsReadOnly", NULL, &t5264_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t825_0_0_0;
static ParameterInfo t5264_m30366_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t825_0_0_0},
};
extern TypeInfo t5264_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m30366_MI = 
{
	"Add", NULL, &t5264_TI, &t123_0_0_0, RuntimeInvoker_t123_t61, t5264_m30366_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5264_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30367_MI = 
{
	"Clear", NULL, &t5264_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t825_0_0_0;
static ParameterInfo t5264_m30368_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t825_0_0_0},
};
extern TypeInfo t5264_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m30368_MI = 
{
	"Contains", NULL, &t5264_TI, &t125_0_0_0, RuntimeInvoker_t125_t61, t5264_m30368_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3329_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5264_m30369_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3329_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5264_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30369_MI = 
{
	"CopyTo", NULL, &t5264_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5264_m30369_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t825_0_0_0;
static ParameterInfo t5264_m30370_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t825_0_0_0},
};
extern TypeInfo t5264_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m30370_MI = 
{
	"Remove", NULL, &t5264_TI, &t125_0_0_0, RuntimeInvoker_t125_t61, t5264_m30370_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5264_MIs[] =
{
	&m30364_MI,
	&m30365_MI,
	&m30366_MI,
	&m30367_MI,
	&m30368_MI,
	&m30369_MI,
	&m30370_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5266_TI;
static TypeInfo* t5264_ITIs[] = 
{
	&t703_TI,
	&t5266_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5264_0_0_0;
extern Il2CppType t5264_1_0_0;
struct t5264;
extern TypeInfo t5264_TI;
extern Il2CppGenericClass t5264_GC;
TypeInfo t5264_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5264_MIs, t5264_PIs, NULL, NULL, NULL, NULL, NULL, &t5264_TI, t5264_ITIs, NULL, &EmptyCustomAttributesCache, &t5264_TI, &t5264_0_0_0, &t5264_1_0_0, NULL, &t5264_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5266_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UIntPtr>
extern TypeInfo t5266_TI;
extern Il2CppType t4037_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30371_MI = 
{
	"GetEnumerator", NULL, &t5266_TI, &t4037_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5266_MIs[] =
{
	&m30371_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5266_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5266_0_0_0;
extern Il2CppType t5266_1_0_0;
struct t5266;
extern TypeInfo t5266_TI;
extern Il2CppGenericClass t5266_GC;
TypeInfo t5266_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5266_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5266_TI, t5266_ITIs, NULL, &EmptyCustomAttributesCache, &t5266_TI, &t5266_0_0_0, &t5266_1_0_0, NULL, &t5266_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5265_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.UIntPtr>
extern MethodInfo m30372_MI;
extern MethodInfo m30373_MI;
static PropertyInfo t5265____Item_PropertyInfo = 
{
	&t5265_TI, "Item", &m30372_MI, &m30373_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5265_PIs[] =
{
	&t5265____Item_PropertyInfo,
	NULL
};
extern Il2CppType t825_0_0_0;
static ParameterInfo t5265_m30374_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t825_0_0_0},
};
extern TypeInfo t5265_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m30374_MI = 
{
	"IndexOf", NULL, &t5265_TI, &t134_0_0_0, RuntimeInvoker_t134_t61, t5265_m30374_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t825_0_0_0;
static ParameterInfo t5265_m30375_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t825_0_0_0},
};
extern TypeInfo t5265_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m30375_MI = 
{
	"Insert", NULL, &t5265_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t61, t5265_m30375_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5265_m30376_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5265_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30376_MI = 
{
	"RemoveAt", NULL, &t5265_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5265_m30376_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5265_m30372_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5265_TI;
extern Il2CppType t825_0_0_0;
extern void* RuntimeInvoker_t825_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30372_MI = 
{
	"get_Item", NULL, &t5265_TI, &t825_0_0_0, RuntimeInvoker_t825_t134, t5265_m30372_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t825_0_0_0;
static ParameterInfo t5265_m30373_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t825_0_0_0},
};
extern TypeInfo t5265_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m30373_MI = 
{
	"set_Item", NULL, &t5265_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t61, t5265_m30373_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5265_MIs[] =
{
	&m30374_MI,
	&m30375_MI,
	&m30376_MI,
	&m30372_MI,
	&m30373_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5264_TI;
extern TypeInfo t5266_TI;
static TypeInfo* t5265_ITIs[] = 
{
	&t703_TI,
	&t5264_TI,
	&t5266_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5265_0_0_0;
extern Il2CppType t5265_1_0_0;
struct t5265;
extern TypeInfo t5265_TI;
extern Il2CppGenericClass t5265_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5265_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5265_MIs, t5265_PIs, NULL, NULL, NULL, NULL, NULL, &t5265_TI, t5265_ITIs, NULL, &t1518__CustomAttributeCache, &t5265_TI, &t5265_0_0_0, &t5265_1_0_0, NULL, &t5265_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4038_TI;

#include "t466.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Delegate>
extern MethodInfo m30377_MI;
static PropertyInfo t4038____Current_PropertyInfo = 
{
	&t4038_TI, "Current", &m30377_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4038_PIs[] =
{
	&t4038____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4038_TI;
extern Il2CppType t466_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30377_MI = 
{
	"get_Current", NULL, &t4038_TI, &t466_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4038_MIs[] =
{
	&m30377_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4038_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4038_0_0_0;
extern Il2CppType t4038_1_0_0;
struct t4038;
extern TypeInfo t4038_TI;
extern Il2CppGenericClass t4038_GC;
TypeInfo t4038_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4038_MIs, t4038_PIs, NULL, NULL, NULL, NULL, NULL, &t4038_TI, t4038_ITIs, NULL, &EmptyCustomAttributesCache, &t4038_TI, &t4038_0_0_0, &t4038_1_0_0, NULL, &t4038_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3024.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3024_TI;
#include "t3024MD.h"

extern TypeInfo t3024_TI;
extern TypeInfo t466_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16915_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22871_MI;
struct t122;
#define m22871(__this, p0, method) (t466 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m22871_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Delegate>
extern Il2CppType t122_0_0_1;
FieldInfo t3024_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3024_TI, offsetof(t3024, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3024_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3024_TI, offsetof(t3024, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3024_FIs[] =
{
	&t3024_f0_FieldInfo,
	&t3024_f1_FieldInfo,
	NULL
};
extern MethodInfo m16912_MI;
static PropertyInfo t3024____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3024_TI, "System.Collections.IEnumerator.Current", &m16912_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16915_MI;
static PropertyInfo t3024____Current_PropertyInfo = 
{
	&t3024_TI, "Current", &m16915_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3024_PIs[] =
{
	&t3024____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3024____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3024_m16911_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3024_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16911_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3024_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3024_m16911_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3024_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16912_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3024_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3024_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16913_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3024_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3024_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16914_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3024_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3024_TI;
extern Il2CppType t466_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16915_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3024_TI, &t466_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3024_MIs[] =
{
	&m16911_MI,
	&m16912_MI,
	&m16913_MI,
	&m16914_MI,
	&m16915_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16912_MI;
extern MethodInfo m16914_MI;
extern MethodInfo m16913_MI;
extern MethodInfo m16915_MI;
static MethodInfo* t3024_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16912_MI,
	&m16914_MI,
	&m16913_MI,
	&m16915_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4038_TI;
static TypeInfo* t3024_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4038_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4038_TI;
static Il2CppInterfaceOffsetPair t3024_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4038_TI, 7},
};
extern MethodInfo m16915_MI;
extern TypeInfo t466_TI;
extern MethodInfo m22871_MI;
static void* t3024_RGCTXData[3] = 
{
	&m16915_MI,
	&t466_TI,
	&m22871_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3024_0_0_0;
extern Il2CppType t3024_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3024_TI;
extern Il2CppGenericClass t3024_GC;
extern TypeInfo t122_TI;
TypeInfo t3024_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3024_MIs, t3024_PIs, t3024_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3024_TI, t3024_ITIs, t3024_VT, &EmptyCustomAttributesCache, &t3024_TI, &t3024_0_0_0, &t3024_1_0_0, t3024_IOs, &t3024_GC, NULL, NULL, NULL, t3024_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3024)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5267_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Delegate>
extern MethodInfo m30378_MI;
static PropertyInfo t5267____Count_PropertyInfo = 
{
	&t5267_TI, "Count", &m30378_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30379_MI;
static PropertyInfo t5267____IsReadOnly_PropertyInfo = 
{
	&t5267_TI, "IsReadOnly", &m30379_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5267_PIs[] =
{
	&t5267____Count_PropertyInfo,
	&t5267____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5267_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30378_MI = 
{
	"get_Count", NULL, &t5267_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5267_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30379_MI = 
{
	"get_IsReadOnly", NULL, &t5267_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t466_0_0_0;
static ParameterInfo t5267_m30380_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t466_0_0_0},
};
extern TypeInfo t5267_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30380_MI = 
{
	"Add", NULL, &t5267_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5267_m30380_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5267_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30381_MI = 
{
	"Clear", NULL, &t5267_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t466_0_0_0;
static ParameterInfo t5267_m30382_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t466_0_0_0},
};
extern TypeInfo t5267_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30382_MI = 
{
	"Contains", NULL, &t5267_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5267_m30382_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t826_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5267_m30383_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t826_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5267_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30383_MI = 
{
	"CopyTo", NULL, &t5267_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5267_m30383_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t466_0_0_0;
static ParameterInfo t5267_m30384_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t466_0_0_0},
};
extern TypeInfo t5267_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30384_MI = 
{
	"Remove", NULL, &t5267_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5267_m30384_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5267_MIs[] =
{
	&m30378_MI,
	&m30379_MI,
	&m30380_MI,
	&m30381_MI,
	&m30382_MI,
	&m30383_MI,
	&m30384_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5269_TI;
static TypeInfo* t5267_ITIs[] = 
{
	&t703_TI,
	&t5269_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5267_0_0_0;
extern Il2CppType t5267_1_0_0;
struct t5267;
extern TypeInfo t5267_TI;
extern Il2CppGenericClass t5267_GC;
TypeInfo t5267_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5267_MIs, t5267_PIs, NULL, NULL, NULL, NULL, NULL, &t5267_TI, t5267_ITIs, NULL, &EmptyCustomAttributesCache, &t5267_TI, &t5267_0_0_0, &t5267_1_0_0, NULL, &t5267_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5269_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Delegate>
extern TypeInfo t5269_TI;
extern Il2CppType t4038_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30385_MI = 
{
	"GetEnumerator", NULL, &t5269_TI, &t4038_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5269_MIs[] =
{
	&m30385_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5269_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5269_0_0_0;
extern Il2CppType t5269_1_0_0;
struct t5269;
extern TypeInfo t5269_TI;
extern Il2CppGenericClass t5269_GC;
TypeInfo t5269_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5269_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5269_TI, t5269_ITIs, NULL, &EmptyCustomAttributesCache, &t5269_TI, &t5269_0_0_0, &t5269_1_0_0, NULL, &t5269_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5268_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Delegate>
extern MethodInfo m30386_MI;
extern MethodInfo m30387_MI;
static PropertyInfo t5268____Item_PropertyInfo = 
{
	&t5268_TI, "Item", &m30386_MI, &m30387_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5268_PIs[] =
{
	&t5268____Item_PropertyInfo,
	NULL
};
extern Il2CppType t466_0_0_0;
static ParameterInfo t5268_m30388_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t466_0_0_0},
};
extern TypeInfo t5268_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30388_MI = 
{
	"IndexOf", NULL, &t5268_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5268_m30388_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t466_0_0_0;
static ParameterInfo t5268_m30389_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t466_0_0_0},
};
extern TypeInfo t5268_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30389_MI = 
{
	"Insert", NULL, &t5268_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5268_m30389_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5268_m30390_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5268_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30390_MI = 
{
	"RemoveAt", NULL, &t5268_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5268_m30390_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5268_m30386_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5268_TI;
extern Il2CppType t466_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30386_MI = 
{
	"get_Item", NULL, &t5268_TI, &t466_0_0_0, RuntimeInvoker_t25_t134, t5268_m30386_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t466_0_0_0;
static ParameterInfo t5268_m30387_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t466_0_0_0},
};
extern TypeInfo t5268_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30387_MI = 
{
	"set_Item", NULL, &t5268_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5268_m30387_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5268_MIs[] =
{
	&m30388_MI,
	&m30389_MI,
	&m30390_MI,
	&m30386_MI,
	&m30387_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5267_TI;
extern TypeInfo t5269_TI;
static TypeInfo* t5268_ITIs[] = 
{
	&t703_TI,
	&t5267_TI,
	&t5269_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5268_0_0_0;
extern Il2CppType t5268_1_0_0;
struct t5268;
extern TypeInfo t5268_TI;
extern Il2CppGenericClass t5268_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5268_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5268_MIs, t5268_PIs, NULL, NULL, NULL, NULL, NULL, &t5268_TI, t5268_ITIs, NULL, &t1518__CustomAttributeCache, &t5268_TI, &t5268_0_0_0, &t5268_1_0_0, NULL, &t5268_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4039_TI;

#include "t435.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.FlagsAttribute>
extern MethodInfo m30391_MI;
static PropertyInfo t4039____Current_PropertyInfo = 
{
	&t4039_TI, "Current", &m30391_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4039_PIs[] =
{
	&t4039____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4039_TI;
extern Il2CppType t435_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30391_MI = 
{
	"get_Current", NULL, &t4039_TI, &t435_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4039_MIs[] =
{
	&m30391_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4039_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4039_0_0_0;
extern Il2CppType t4039_1_0_0;
struct t4039;
extern TypeInfo t4039_TI;
extern Il2CppGenericClass t4039_GC;
TypeInfo t4039_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4039_MIs, t4039_PIs, NULL, NULL, NULL, NULL, NULL, &t4039_TI, t4039_ITIs, NULL, &EmptyCustomAttributesCache, &t4039_TI, &t4039_0_0_0, &t4039_1_0_0, NULL, &t4039_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3025.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3025_TI;
#include "t3025MD.h"

extern TypeInfo t3025_TI;
extern TypeInfo t435_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16920_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22882_MI;
struct t122;
#define m22882(__this, p0, method) (t435 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m22882_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.FlagsAttribute>
extern Il2CppType t122_0_0_1;
FieldInfo t3025_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3025_TI, offsetof(t3025, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3025_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3025_TI, offsetof(t3025, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3025_FIs[] =
{
	&t3025_f0_FieldInfo,
	&t3025_f1_FieldInfo,
	NULL
};
extern MethodInfo m16917_MI;
static PropertyInfo t3025____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3025_TI, "System.Collections.IEnumerator.Current", &m16917_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16920_MI;
static PropertyInfo t3025____Current_PropertyInfo = 
{
	&t3025_TI, "Current", &m16920_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3025_PIs[] =
{
	&t3025____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3025____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3025_m16916_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3025_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16916_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3025_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3025_m16916_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3025_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16917_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3025_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3025_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16918_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3025_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3025_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16919_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3025_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3025_TI;
extern Il2CppType t435_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16920_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3025_TI, &t435_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3025_MIs[] =
{
	&m16916_MI,
	&m16917_MI,
	&m16918_MI,
	&m16919_MI,
	&m16920_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16917_MI;
extern MethodInfo m16919_MI;
extern MethodInfo m16918_MI;
extern MethodInfo m16920_MI;
static MethodInfo* t3025_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16917_MI,
	&m16919_MI,
	&m16918_MI,
	&m16920_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4039_TI;
static TypeInfo* t3025_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4039_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4039_TI;
static Il2CppInterfaceOffsetPair t3025_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4039_TI, 7},
};
extern MethodInfo m16920_MI;
extern TypeInfo t435_TI;
extern MethodInfo m22882_MI;
static void* t3025_RGCTXData[3] = 
{
	&m16920_MI,
	&t435_TI,
	&m22882_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3025_0_0_0;
extern Il2CppType t3025_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3025_TI;
extern Il2CppGenericClass t3025_GC;
extern TypeInfo t122_TI;
TypeInfo t3025_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3025_MIs, t3025_PIs, t3025_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3025_TI, t3025_ITIs, t3025_VT, &EmptyCustomAttributesCache, &t3025_TI, &t3025_0_0_0, &t3025_1_0_0, t3025_IOs, &t3025_GC, NULL, NULL, NULL, t3025_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3025)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5270_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.FlagsAttribute>
extern MethodInfo m30392_MI;
static PropertyInfo t5270____Count_PropertyInfo = 
{
	&t5270_TI, "Count", &m30392_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30393_MI;
static PropertyInfo t5270____IsReadOnly_PropertyInfo = 
{
	&t5270_TI, "IsReadOnly", &m30393_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5270_PIs[] =
{
	&t5270____Count_PropertyInfo,
	&t5270____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5270_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30392_MI = 
{
	"get_Count", NULL, &t5270_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5270_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30393_MI = 
{
	"get_IsReadOnly", NULL, &t5270_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t435_0_0_0;
static ParameterInfo t5270_m30394_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t435_0_0_0},
};
extern TypeInfo t5270_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30394_MI = 
{
	"Add", NULL, &t5270_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5270_m30394_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5270_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30395_MI = 
{
	"Clear", NULL, &t5270_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t435_0_0_0;
static ParameterInfo t5270_m30396_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t435_0_0_0},
};
extern TypeInfo t5270_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30396_MI = 
{
	"Contains", NULL, &t5270_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5270_m30396_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3330_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5270_m30397_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3330_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5270_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30397_MI = 
{
	"CopyTo", NULL, &t5270_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5270_m30397_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t435_0_0_0;
static ParameterInfo t5270_m30398_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t435_0_0_0},
};
extern TypeInfo t5270_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30398_MI = 
{
	"Remove", NULL, &t5270_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5270_m30398_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5270_MIs[] =
{
	&m30392_MI,
	&m30393_MI,
	&m30394_MI,
	&m30395_MI,
	&m30396_MI,
	&m30397_MI,
	&m30398_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5272_TI;
static TypeInfo* t5270_ITIs[] = 
{
	&t703_TI,
	&t5272_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5270_0_0_0;
extern Il2CppType t5270_1_0_0;
struct t5270;
extern TypeInfo t5270_TI;
extern Il2CppGenericClass t5270_GC;
TypeInfo t5270_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5270_MIs, t5270_PIs, NULL, NULL, NULL, NULL, NULL, &t5270_TI, t5270_ITIs, NULL, &EmptyCustomAttributesCache, &t5270_TI, &t5270_0_0_0, &t5270_1_0_0, NULL, &t5270_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5272_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.FlagsAttribute>
extern TypeInfo t5272_TI;
extern Il2CppType t4039_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30399_MI = 
{
	"GetEnumerator", NULL, &t5272_TI, &t4039_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5272_MIs[] =
{
	&m30399_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5272_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5272_0_0_0;
extern Il2CppType t5272_1_0_0;
struct t5272;
extern TypeInfo t5272_TI;
extern Il2CppGenericClass t5272_GC;
TypeInfo t5272_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5272_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5272_TI, t5272_ITIs, NULL, &EmptyCustomAttributesCache, &t5272_TI, &t5272_0_0_0, &t5272_1_0_0, NULL, &t5272_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5271_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.FlagsAttribute>
extern MethodInfo m30400_MI;
extern MethodInfo m30401_MI;
static PropertyInfo t5271____Item_PropertyInfo = 
{
	&t5271_TI, "Item", &m30400_MI, &m30401_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5271_PIs[] =
{
	&t5271____Item_PropertyInfo,
	NULL
};
extern Il2CppType t435_0_0_0;
static ParameterInfo t5271_m30402_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t435_0_0_0},
};
extern TypeInfo t5271_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30402_MI = 
{
	"IndexOf", NULL, &t5271_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5271_m30402_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t435_0_0_0;
static ParameterInfo t5271_m30403_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t435_0_0_0},
};
extern TypeInfo t5271_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30403_MI = 
{
	"Insert", NULL, &t5271_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5271_m30403_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5271_m30404_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5271_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30404_MI = 
{
	"RemoveAt", NULL, &t5271_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5271_m30404_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5271_m30400_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5271_TI;
extern Il2CppType t435_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30400_MI = 
{
	"get_Item", NULL, &t5271_TI, &t435_0_0_0, RuntimeInvoker_t25_t134, t5271_m30400_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t435_0_0_0;
static ParameterInfo t5271_m30401_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t435_0_0_0},
};
extern TypeInfo t5271_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30401_MI = 
{
	"set_Item", NULL, &t5271_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5271_m30401_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5271_MIs[] =
{
	&m30402_MI,
	&m30403_MI,
	&m30404_MI,
	&m30400_MI,
	&m30401_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5270_TI;
extern TypeInfo t5272_TI;
static TypeInfo* t5271_ITIs[] = 
{
	&t703_TI,
	&t5270_TI,
	&t5272_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5271_0_0_0;
extern Il2CppType t5271_1_0_0;
struct t5271;
extern TypeInfo t5271_TI;
extern Il2CppGenericClass t5271_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5271_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5271_MIs, t5271_PIs, NULL, NULL, NULL, NULL, NULL, &t5271_TI, t5271_ITIs, NULL, &t1518__CustomAttributeCache, &t5271_TI, &t5271_0_0_0, &t5271_1_0_0, NULL, &t5271_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4040_TI;

#include "t657.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>
extern MethodInfo m30405_MI;
static PropertyInfo t4040____Current_PropertyInfo = 
{
	&t4040_TI, "Current", &m30405_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4040_PIs[] =
{
	&t4040____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4040_TI;
extern Il2CppType t657_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30405_MI = 
{
	"get_Current", NULL, &t4040_TI, &t657_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4040_MIs[] =
{
	&m30405_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4040_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4040_0_0_0;
extern Il2CppType t4040_1_0_0;
struct t4040;
extern TypeInfo t4040_TI;
extern Il2CppGenericClass t4040_GC;
TypeInfo t4040_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4040_MIs, t4040_PIs, NULL, NULL, NULL, NULL, NULL, &t4040_TI, t4040_ITIs, NULL, &EmptyCustomAttributesCache, &t4040_TI, &t4040_0_0_0, &t4040_1_0_0, NULL, &t4040_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3026.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3026_TI;
#include "t3026MD.h"

extern TypeInfo t3026_TI;
extern TypeInfo t657_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16925_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22893_MI;
struct t122;
#define m22893(__this, p0, method) (t657 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m22893_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>
extern Il2CppType t122_0_0_1;
FieldInfo t3026_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3026_TI, offsetof(t3026, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3026_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3026_TI, offsetof(t3026, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3026_FIs[] =
{
	&t3026_f0_FieldInfo,
	&t3026_f1_FieldInfo,
	NULL
};
extern MethodInfo m16922_MI;
static PropertyInfo t3026____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3026_TI, "System.Collections.IEnumerator.Current", &m16922_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16925_MI;
static PropertyInfo t3026____Current_PropertyInfo = 
{
	&t3026_TI, "Current", &m16925_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3026_PIs[] =
{
	&t3026____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3026____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3026_m16921_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3026_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16921_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3026_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3026_m16921_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3026_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16922_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3026_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3026_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16923_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3026_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3026_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16924_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3026_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3026_TI;
extern Il2CppType t657_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16925_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3026_TI, &t657_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3026_MIs[] =
{
	&m16921_MI,
	&m16922_MI,
	&m16923_MI,
	&m16924_MI,
	&m16925_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16922_MI;
extern MethodInfo m16924_MI;
extern MethodInfo m16923_MI;
extern MethodInfo m16925_MI;
static MethodInfo* t3026_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16922_MI,
	&m16924_MI,
	&m16923_MI,
	&m16925_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4040_TI;
static TypeInfo* t3026_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4040_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4040_TI;
static Il2CppInterfaceOffsetPair t3026_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4040_TI, 7},
};
extern MethodInfo m16925_MI;
extern TypeInfo t657_TI;
extern MethodInfo m22893_MI;
static void* t3026_RGCTXData[3] = 
{
	&m16925_MI,
	&t657_TI,
	&m22893_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3026_0_0_0;
extern Il2CppType t3026_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3026_TI;
extern Il2CppGenericClass t3026_GC;
extern TypeInfo t122_TI;
TypeInfo t3026_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3026_MIs, t3026_PIs, t3026_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3026_TI, t3026_ITIs, t3026_VT, &EmptyCustomAttributesCache, &t3026_TI, &t3026_0_0_0, &t3026_1_0_0, t3026_IOs, &t3026_GC, NULL, NULL, NULL, t3026_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3026)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5273_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>
extern MethodInfo m30406_MI;
static PropertyInfo t5273____Count_PropertyInfo = 
{
	&t5273_TI, "Count", &m30406_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30407_MI;
static PropertyInfo t5273____IsReadOnly_PropertyInfo = 
{
	&t5273_TI, "IsReadOnly", &m30407_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5273_PIs[] =
{
	&t5273____Count_PropertyInfo,
	&t5273____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5273_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30406_MI = 
{
	"get_Count", NULL, &t5273_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5273_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30407_MI = 
{
	"get_IsReadOnly", NULL, &t5273_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t657_0_0_0;
static ParameterInfo t5273_m30408_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t5273_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30408_MI = 
{
	"Add", NULL, &t5273_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5273_m30408_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5273_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30409_MI = 
{
	"Clear", NULL, &t5273_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t657_0_0_0;
static ParameterInfo t5273_m30410_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t5273_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30410_MI = 
{
	"Contains", NULL, &t5273_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5273_m30410_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t840_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5273_m30411_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t840_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5273_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30411_MI = 
{
	"CopyTo", NULL, &t5273_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5273_m30411_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t657_0_0_0;
static ParameterInfo t5273_m30412_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t5273_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30412_MI = 
{
	"Remove", NULL, &t5273_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5273_m30412_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5273_MIs[] =
{
	&m30406_MI,
	&m30407_MI,
	&m30408_MI,
	&m30409_MI,
	&m30410_MI,
	&m30411_MI,
	&m30412_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5275_TI;
static TypeInfo* t5273_ITIs[] = 
{
	&t703_TI,
	&t5275_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5273_0_0_0;
extern Il2CppType t5273_1_0_0;
struct t5273;
extern TypeInfo t5273_TI;
extern Il2CppGenericClass t5273_GC;
TypeInfo t5273_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5273_MIs, t5273_PIs, NULL, NULL, NULL, NULL, NULL, &t5273_TI, t5273_ITIs, NULL, &EmptyCustomAttributesCache, &t5273_TI, &t5273_0_0_0, &t5273_1_0_0, NULL, &t5273_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5275_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
extern TypeInfo t5275_TI;
extern Il2CppType t4040_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30413_MI = 
{
	"GetEnumerator", NULL, &t5275_TI, &t4040_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5275_MIs[] =
{
	&m30413_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5275_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5275_0_0_0;
extern Il2CppType t5275_1_0_0;
struct t5275;
extern TypeInfo t5275_TI;
extern Il2CppGenericClass t5275_GC;
TypeInfo t5275_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5275_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5275_TI, t5275_ITIs, NULL, &EmptyCustomAttributesCache, &t5275_TI, &t5275_0_0_0, &t5275_1_0_0, NULL, &t5275_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5274_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodInfo>
extern MethodInfo m30414_MI;
extern MethodInfo m30415_MI;
static PropertyInfo t5274____Item_PropertyInfo = 
{
	&t5274_TI, "Item", &m30414_MI, &m30415_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5274_PIs[] =
{
	&t5274____Item_PropertyInfo,
	NULL
};
extern Il2CppType t657_0_0_0;
static ParameterInfo t5274_m30416_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t5274_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30416_MI = 
{
	"IndexOf", NULL, &t5274_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5274_m30416_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t5274_m30417_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t5274_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30417_MI = 
{
	"Insert", NULL, &t5274_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5274_m30417_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5274_m30418_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5274_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30418_MI = 
{
	"RemoveAt", NULL, &t5274_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5274_m30418_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5274_m30414_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5274_TI;
extern Il2CppType t657_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30414_MI = 
{
	"get_Item", NULL, &t5274_TI, &t657_0_0_0, RuntimeInvoker_t25_t134, t5274_m30414_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t5274_m30415_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t5274_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30415_MI = 
{
	"set_Item", NULL, &t5274_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5274_m30415_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5274_MIs[] =
{
	&m30416_MI,
	&m30417_MI,
	&m30418_MI,
	&m30414_MI,
	&m30415_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5273_TI;
extern TypeInfo t5275_TI;
static TypeInfo* t5274_ITIs[] = 
{
	&t703_TI,
	&t5273_TI,
	&t5275_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5274_0_0_0;
extern Il2CppType t5274_1_0_0;
struct t5274;
extern TypeInfo t5274_TI;
extern Il2CppGenericClass t5274_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5274_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5274_MIs, t5274_PIs, NULL, NULL, NULL, NULL, NULL, &t5274_TI, t5274_ITIs, NULL, &t1518__CustomAttributeCache, &t5274_TI, &t5274_0_0_0, &t5274_1_0_0, NULL, &t5274_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5276_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>
extern MethodInfo m30419_MI;
static PropertyInfo t5276____Count_PropertyInfo = 
{
	&t5276_TI, "Count", &m30419_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30420_MI;
static PropertyInfo t5276____IsReadOnly_PropertyInfo = 
{
	&t5276_TI, "IsReadOnly", &m30420_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5276_PIs[] =
{
	&t5276____Count_PropertyInfo,
	&t5276____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5276_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30419_MI = 
{
	"get_Count", NULL, &t5276_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5276_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30420_MI = 
{
	"get_IsReadOnly", NULL, &t5276_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1618_0_0_0;
static ParameterInfo t5276_m30421_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1618_0_0_0},
};
extern TypeInfo t5276_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30421_MI = 
{
	"Add", NULL, &t5276_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5276_m30421_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5276_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30422_MI = 
{
	"Clear", NULL, &t5276_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1618_0_0_0;
static ParameterInfo t5276_m30423_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1618_0_0_0},
};
extern TypeInfo t5276_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30423_MI = 
{
	"Contains", NULL, &t5276_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5276_m30423_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3331_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5276_m30424_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3331_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5276_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30424_MI = 
{
	"CopyTo", NULL, &t5276_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5276_m30424_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1618_0_0_0;
static ParameterInfo t5276_m30425_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1618_0_0_0},
};
extern TypeInfo t5276_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30425_MI = 
{
	"Remove", NULL, &t5276_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5276_m30425_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5276_MIs[] =
{
	&m30419_MI,
	&m30420_MI,
	&m30421_MI,
	&m30422_MI,
	&m30423_MI,
	&m30424_MI,
	&m30425_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5278_TI;
static TypeInfo* t5276_ITIs[] = 
{
	&t703_TI,
	&t5278_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5276_0_0_0;
extern Il2CppType t5276_1_0_0;
struct t5276;
extern TypeInfo t5276_TI;
extern Il2CppGenericClass t5276_GC;
TypeInfo t5276_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5276_MIs, t5276_PIs, NULL, NULL, NULL, NULL, NULL, &t5276_TI, t5276_ITIs, NULL, &EmptyCustomAttributesCache, &t5276_TI, &t5276_0_0_0, &t5276_1_0_0, NULL, &t5276_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5278_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodInfo>
extern TypeInfo t5278_TI;
extern Il2CppType t4041_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30426_MI = 
{
	"GetEnumerator", NULL, &t5278_TI, &t4041_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5278_MIs[] =
{
	&m30426_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5278_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5278_0_0_0;
extern Il2CppType t5278_1_0_0;
struct t5278;
extern TypeInfo t5278_TI;
extern Il2CppGenericClass t5278_GC;
TypeInfo t5278_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5278_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5278_TI, t5278_ITIs, NULL, &EmptyCustomAttributesCache, &t5278_TI, &t5278_0_0_0, &t5278_1_0_0, NULL, &t5278_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4041_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodInfo>
extern MethodInfo m30427_MI;
static PropertyInfo t4041____Current_PropertyInfo = 
{
	&t4041_TI, "Current", &m30427_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4041_PIs[] =
{
	&t4041____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4041_TI;
extern Il2CppType t1618_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30427_MI = 
{
	"get_Current", NULL, &t4041_TI, &t1618_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4041_MIs[] =
{
	&m30427_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4041_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4041_0_0_0;
extern Il2CppType t4041_1_0_0;
struct t4041;
extern TypeInfo t4041_TI;
extern Il2CppGenericClass t4041_GC;
TypeInfo t4041_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4041_MIs, t4041_PIs, NULL, NULL, NULL, NULL, NULL, &t4041_TI, t4041_ITIs, NULL, &EmptyCustomAttributesCache, &t4041_TI, &t4041_0_0_0, &t4041_1_0_0, NULL, &t4041_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3027.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3027_TI;
#include "t3027MD.h"

extern TypeInfo t3027_TI;
extern TypeInfo t1618_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16930_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22904_MI;
struct t122;
#define m22904(__this, p0, method) (t25 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m22904_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>
extern Il2CppType t122_0_0_1;
FieldInfo t3027_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3027_TI, offsetof(t3027, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3027_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3027_TI, offsetof(t3027, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3027_FIs[] =
{
	&t3027_f0_FieldInfo,
	&t3027_f1_FieldInfo,
	NULL
};
extern MethodInfo m16927_MI;
static PropertyInfo t3027____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3027_TI, "System.Collections.IEnumerator.Current", &m16927_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16930_MI;
static PropertyInfo t3027____Current_PropertyInfo = 
{
	&t3027_TI, "Current", &m16930_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3027_PIs[] =
{
	&t3027____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3027____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3027_m16926_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3027_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16926_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3027_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3027_m16926_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3027_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16927_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3027_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3027_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16928_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3027_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3027_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16929_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3027_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3027_TI;
extern Il2CppType t1618_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16930_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3027_TI, &t1618_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3027_MIs[] =
{
	&m16926_MI,
	&m16927_MI,
	&m16928_MI,
	&m16929_MI,
	&m16930_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16927_MI;
extern MethodInfo m16929_MI;
extern MethodInfo m16928_MI;
extern MethodInfo m16930_MI;
static MethodInfo* t3027_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16927_MI,
	&m16929_MI,
	&m16928_MI,
	&m16930_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4041_TI;
static TypeInfo* t3027_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4041_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4041_TI;
static Il2CppInterfaceOffsetPair t3027_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4041_TI, 7},
};
extern MethodInfo m16930_MI;
extern TypeInfo t1618_TI;
extern MethodInfo m22904_MI;
static void* t3027_RGCTXData[3] = 
{
	&m16930_MI,
	&t1618_TI,
	&m22904_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3027_0_0_0;
extern Il2CppType t3027_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3027_TI;
extern Il2CppGenericClass t3027_GC;
extern TypeInfo t122_TI;
TypeInfo t3027_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3027_MIs, t3027_PIs, t3027_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3027_TI, t3027_ITIs, t3027_VT, &EmptyCustomAttributesCache, &t3027_TI, &t3027_0_0_0, &t3027_1_0_0, t3027_IOs, &t3027_GC, NULL, NULL, NULL, t3027_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3027)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5277_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>
extern MethodInfo m30428_MI;
extern MethodInfo m30429_MI;
static PropertyInfo t5277____Item_PropertyInfo = 
{
	&t5277_TI, "Item", &m30428_MI, &m30429_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5277_PIs[] =
{
	&t5277____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1618_0_0_0;
static ParameterInfo t5277_m30430_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1618_0_0_0},
};
extern TypeInfo t5277_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30430_MI = 
{
	"IndexOf", NULL, &t5277_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5277_m30430_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1618_0_0_0;
static ParameterInfo t5277_m30431_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1618_0_0_0},
};
extern TypeInfo t5277_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30431_MI = 
{
	"Insert", NULL, &t5277_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5277_m30431_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5277_m30432_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5277_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30432_MI = 
{
	"RemoveAt", NULL, &t5277_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5277_m30432_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5277_m30428_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5277_TI;
extern Il2CppType t1618_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30428_MI = 
{
	"get_Item", NULL, &t5277_TI, &t1618_0_0_0, RuntimeInvoker_t25_t134, t5277_m30428_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1618_0_0_0;
static ParameterInfo t5277_m30429_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1618_0_0_0},
};
extern TypeInfo t5277_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30429_MI = 
{
	"set_Item", NULL, &t5277_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5277_m30429_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5277_MIs[] =
{
	&m30430_MI,
	&m30431_MI,
	&m30432_MI,
	&m30428_MI,
	&m30429_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5276_TI;
extern TypeInfo t5278_TI;
static TypeInfo* t5277_ITIs[] = 
{
	&t703_TI,
	&t5276_TI,
	&t5278_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5277_0_0_0;
extern Il2CppType t5277_1_0_0;
struct t5277;
extern TypeInfo t5277_TI;
extern Il2CppGenericClass t5277_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5277_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5277_MIs, t5277_PIs, NULL, NULL, NULL, NULL, NULL, &t5277_TI, t5277_ITIs, NULL, &t1518__CustomAttributeCache, &t5277_TI, &t5277_0_0_0, &t5277_1_0_0, NULL, &t5277_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5279_TI;

#include "t731.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>
extern MethodInfo m30433_MI;
static PropertyInfo t5279____Count_PropertyInfo = 
{
	&t5279_TI, "Count", &m30433_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30434_MI;
static PropertyInfo t5279____IsReadOnly_PropertyInfo = 
{
	&t5279_TI, "IsReadOnly", &m30434_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5279_PIs[] =
{
	&t5279____Count_PropertyInfo,
	&t5279____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5279_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30433_MI = 
{
	"get_Count", NULL, &t5279_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5279_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30434_MI = 
{
	"get_IsReadOnly", NULL, &t5279_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t731_0_0_0;
static ParameterInfo t5279_m30435_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t731_0_0_0},
};
extern TypeInfo t5279_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30435_MI = 
{
	"Add", NULL, &t5279_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5279_m30435_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5279_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30436_MI = 
{
	"Clear", NULL, &t5279_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t731_0_0_0;
static ParameterInfo t5279_m30437_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t731_0_0_0},
};
extern TypeInfo t5279_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30437_MI = 
{
	"Contains", NULL, &t5279_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5279_m30437_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1070_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5279_m30438_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1070_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5279_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30438_MI = 
{
	"CopyTo", NULL, &t5279_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5279_m30438_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t731_0_0_0;
static ParameterInfo t5279_m30439_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t731_0_0_0},
};
extern TypeInfo t5279_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30439_MI = 
{
	"Remove", NULL, &t5279_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5279_m30439_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5279_MIs[] =
{
	&m30433_MI,
	&m30434_MI,
	&m30435_MI,
	&m30436_MI,
	&m30437_MI,
	&m30438_MI,
	&m30439_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5281_TI;
static TypeInfo* t5279_ITIs[] = 
{
	&t703_TI,
	&t5281_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5279_0_0_0;
extern Il2CppType t5279_1_0_0;
struct t5279;
extern TypeInfo t5279_TI;
extern Il2CppGenericClass t5279_GC;
TypeInfo t5279_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5279_MIs, t5279_PIs, NULL, NULL, NULL, NULL, NULL, &t5279_TI, t5279_ITIs, NULL, &EmptyCustomAttributesCache, &t5279_TI, &t5279_0_0_0, &t5279_1_0_0, NULL, &t5279_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5281_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodBase>
extern TypeInfo t5281_TI;
extern Il2CppType t4042_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30440_MI = 
{
	"GetEnumerator", NULL, &t5281_TI, &t4042_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5281_MIs[] =
{
	&m30440_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5281_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5281_0_0_0;
extern Il2CppType t5281_1_0_0;
struct t5281;
extern TypeInfo t5281_TI;
extern Il2CppGenericClass t5281_GC;
TypeInfo t5281_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5281_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5281_TI, t5281_ITIs, NULL, &EmptyCustomAttributesCache, &t5281_TI, &t5281_0_0_0, &t5281_1_0_0, NULL, &t5281_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4042_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodBase>
extern MethodInfo m30441_MI;
static PropertyInfo t4042____Current_PropertyInfo = 
{
	&t4042_TI, "Current", &m30441_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4042_PIs[] =
{
	&t4042____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4042_TI;
extern Il2CppType t731_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30441_MI = 
{
	"get_Current", NULL, &t4042_TI, &t731_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4042_MIs[] =
{
	&m30441_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4042_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4042_0_0_0;
extern Il2CppType t4042_1_0_0;
struct t4042;
extern TypeInfo t4042_TI;
extern Il2CppGenericClass t4042_GC;
TypeInfo t4042_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4042_MIs, t4042_PIs, NULL, NULL, NULL, NULL, NULL, &t4042_TI, t4042_ITIs, NULL, &EmptyCustomAttributesCache, &t4042_TI, &t4042_0_0_0, &t4042_1_0_0, NULL, &t4042_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3028.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3028_TI;
#include "t3028MD.h"

extern TypeInfo t3028_TI;
extern TypeInfo t731_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16935_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22915_MI;
struct t122;
#define m22915(__this, p0, method) (t731 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m22915_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodBase>
extern Il2CppType t122_0_0_1;
FieldInfo t3028_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3028_TI, offsetof(t3028, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3028_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3028_TI, offsetof(t3028, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3028_FIs[] =
{
	&t3028_f0_FieldInfo,
	&t3028_f1_FieldInfo,
	NULL
};
extern MethodInfo m16932_MI;
static PropertyInfo t3028____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3028_TI, "System.Collections.IEnumerator.Current", &m16932_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16935_MI;
static PropertyInfo t3028____Current_PropertyInfo = 
{
	&t3028_TI, "Current", &m16935_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3028_PIs[] =
{
	&t3028____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3028____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3028_m16931_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3028_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16931_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3028_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3028_m16931_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3028_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16932_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3028_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3028_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16933_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3028_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3028_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16934_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3028_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3028_TI;
extern Il2CppType t731_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16935_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3028_TI, &t731_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3028_MIs[] =
{
	&m16931_MI,
	&m16932_MI,
	&m16933_MI,
	&m16934_MI,
	&m16935_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16932_MI;
extern MethodInfo m16934_MI;
extern MethodInfo m16933_MI;
extern MethodInfo m16935_MI;
static MethodInfo* t3028_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16932_MI,
	&m16934_MI,
	&m16933_MI,
	&m16935_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4042_TI;
static TypeInfo* t3028_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4042_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4042_TI;
static Il2CppInterfaceOffsetPair t3028_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4042_TI, 7},
};
extern MethodInfo m16935_MI;
extern TypeInfo t731_TI;
extern MethodInfo m22915_MI;
static void* t3028_RGCTXData[3] = 
{
	&m16935_MI,
	&t731_TI,
	&m22915_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3028_0_0_0;
extern Il2CppType t3028_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3028_TI;
extern Il2CppGenericClass t3028_GC;
extern TypeInfo t122_TI;
TypeInfo t3028_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3028_MIs, t3028_PIs, t3028_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3028_TI, t3028_ITIs, t3028_VT, &EmptyCustomAttributesCache, &t3028_TI, &t3028_0_0_0, &t3028_1_0_0, t3028_IOs, &t3028_GC, NULL, NULL, NULL, t3028_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3028)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5280_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodBase>
extern MethodInfo m30442_MI;
extern MethodInfo m30443_MI;
static PropertyInfo t5280____Item_PropertyInfo = 
{
	&t5280_TI, "Item", &m30442_MI, &m30443_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5280_PIs[] =
{
	&t5280____Item_PropertyInfo,
	NULL
};
extern Il2CppType t731_0_0_0;
static ParameterInfo t5280_m30444_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t731_0_0_0},
};
extern TypeInfo t5280_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30444_MI = 
{
	"IndexOf", NULL, &t5280_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5280_m30444_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t731_0_0_0;
static ParameterInfo t5280_m30445_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t731_0_0_0},
};
extern TypeInfo t5280_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30445_MI = 
{
	"Insert", NULL, &t5280_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5280_m30445_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5280_m30446_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5280_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30446_MI = 
{
	"RemoveAt", NULL, &t5280_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5280_m30446_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5280_m30442_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5280_TI;
extern Il2CppType t731_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30442_MI = 
{
	"get_Item", NULL, &t5280_TI, &t731_0_0_0, RuntimeInvoker_t25_t134, t5280_m30442_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t731_0_0_0;
static ParameterInfo t5280_m30443_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t731_0_0_0},
};
extern TypeInfo t5280_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30443_MI = 
{
	"set_Item", NULL, &t5280_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5280_m30443_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5280_MIs[] =
{
	&m30444_MI,
	&m30445_MI,
	&m30446_MI,
	&m30442_MI,
	&m30443_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5279_TI;
extern TypeInfo t5281_TI;
static TypeInfo* t5280_ITIs[] = 
{
	&t703_TI,
	&t5279_TI,
	&t5281_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5280_0_0_0;
extern Il2CppType t5280_1_0_0;
struct t5280;
extern TypeInfo t5280_TI;
extern Il2CppGenericClass t5280_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5280_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5280_MIs, t5280_PIs, NULL, NULL, NULL, NULL, NULL, &t5280_TI, t5280_ITIs, NULL, &t1518__CustomAttributeCache, &t5280_TI, &t5280_0_0_0, &t5280_1_0_0, NULL, &t5280_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5282_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>
extern MethodInfo m30447_MI;
static PropertyInfo t5282____Count_PropertyInfo = 
{
	&t5282_TI, "Count", &m30447_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30448_MI;
static PropertyInfo t5282____IsReadOnly_PropertyInfo = 
{
	&t5282_TI, "IsReadOnly", &m30448_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5282_PIs[] =
{
	&t5282____Count_PropertyInfo,
	&t5282____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5282_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30447_MI = 
{
	"get_Count", NULL, &t5282_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5282_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30448_MI = 
{
	"get_IsReadOnly", NULL, &t5282_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1613_0_0_0;
static ParameterInfo t5282_m30449_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1613_0_0_0},
};
extern TypeInfo t5282_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30449_MI = 
{
	"Add", NULL, &t5282_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5282_m30449_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5282_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30450_MI = 
{
	"Clear", NULL, &t5282_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1613_0_0_0;
static ParameterInfo t5282_m30451_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1613_0_0_0},
};
extern TypeInfo t5282_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30451_MI = 
{
	"Contains", NULL, &t5282_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5282_m30451_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3332_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5282_m30452_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3332_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5282_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30452_MI = 
{
	"CopyTo", NULL, &t5282_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5282_m30452_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1613_0_0_0;
static ParameterInfo t5282_m30453_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1613_0_0_0},
};
extern TypeInfo t5282_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30453_MI = 
{
	"Remove", NULL, &t5282_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5282_m30453_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5282_MIs[] =
{
	&m30447_MI,
	&m30448_MI,
	&m30449_MI,
	&m30450_MI,
	&m30451_MI,
	&m30452_MI,
	&m30453_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5284_TI;
static TypeInfo* t5282_ITIs[] = 
{
	&t703_TI,
	&t5284_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5282_0_0_0;
extern Il2CppType t5282_1_0_0;
struct t5282;
extern TypeInfo t5282_TI;
extern Il2CppGenericClass t5282_GC;
TypeInfo t5282_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5282_MIs, t5282_PIs, NULL, NULL, NULL, NULL, NULL, &t5282_TI, t5282_ITIs, NULL, &EmptyCustomAttributesCache, &t5282_TI, &t5282_0_0_0, &t5282_1_0_0, NULL, &t5282_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5284_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBase>
extern TypeInfo t5284_TI;
extern Il2CppType t4043_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30454_MI = 
{
	"GetEnumerator", NULL, &t5284_TI, &t4043_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5284_MIs[] =
{
	&m30454_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5284_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5284_0_0_0;
extern Il2CppType t5284_1_0_0;
struct t5284;
extern TypeInfo t5284_TI;
extern Il2CppGenericClass t5284_GC;
TypeInfo t5284_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5284_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5284_TI, t5284_ITIs, NULL, &EmptyCustomAttributesCache, &t5284_TI, &t5284_0_0_0, &t5284_1_0_0, NULL, &t5284_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4043_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBase>
extern MethodInfo m30455_MI;
static PropertyInfo t4043____Current_PropertyInfo = 
{
	&t4043_TI, "Current", &m30455_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4043_PIs[] =
{
	&t4043____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4043_TI;
extern Il2CppType t1613_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30455_MI = 
{
	"get_Current", NULL, &t4043_TI, &t1613_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4043_MIs[] =
{
	&m30455_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4043_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4043_0_0_0;
extern Il2CppType t4043_1_0_0;
struct t4043;
extern TypeInfo t4043_TI;
extern Il2CppGenericClass t4043_GC;
TypeInfo t4043_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4043_MIs, t4043_PIs, NULL, NULL, NULL, NULL, NULL, &t4043_TI, t4043_ITIs, NULL, &EmptyCustomAttributesCache, &t4043_TI, &t4043_0_0_0, &t4043_1_0_0, NULL, &t4043_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3029.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3029_TI;
#include "t3029MD.h"

extern TypeInfo t3029_TI;
extern TypeInfo t1613_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16940_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22926_MI;
struct t122;
#define m22926(__this, p0, method) (t25 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m22926_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>
extern Il2CppType t122_0_0_1;
FieldInfo t3029_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3029_TI, offsetof(t3029, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3029_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3029_TI, offsetof(t3029, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3029_FIs[] =
{
	&t3029_f0_FieldInfo,
	&t3029_f1_FieldInfo,
	NULL
};
extern MethodInfo m16937_MI;
static PropertyInfo t3029____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3029_TI, "System.Collections.IEnumerator.Current", &m16937_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16940_MI;
static PropertyInfo t3029____Current_PropertyInfo = 
{
	&t3029_TI, "Current", &m16940_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3029_PIs[] =
{
	&t3029____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3029____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3029_m16936_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3029_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16936_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3029_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3029_m16936_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3029_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16937_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3029_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3029_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16938_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3029_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3029_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16939_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3029_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3029_TI;
extern Il2CppType t1613_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16940_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3029_TI, &t1613_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3029_MIs[] =
{
	&m16936_MI,
	&m16937_MI,
	&m16938_MI,
	&m16939_MI,
	&m16940_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16937_MI;
extern MethodInfo m16939_MI;
extern MethodInfo m16938_MI;
extern MethodInfo m16940_MI;
static MethodInfo* t3029_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16937_MI,
	&m16939_MI,
	&m16938_MI,
	&m16940_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4043_TI;
static TypeInfo* t3029_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4043_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4043_TI;
static Il2CppInterfaceOffsetPair t3029_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4043_TI, 7},
};
extern MethodInfo m16940_MI;
extern TypeInfo t1613_TI;
extern MethodInfo m22926_MI;
static void* t3029_RGCTXData[3] = 
{
	&m16940_MI,
	&t1613_TI,
	&m22926_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3029_0_0_0;
extern Il2CppType t3029_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3029_TI;
extern Il2CppGenericClass t3029_GC;
extern TypeInfo t122_TI;
TypeInfo t3029_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3029_MIs, t3029_PIs, t3029_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3029_TI, t3029_ITIs, t3029_VT, &EmptyCustomAttributesCache, &t3029_TI, &t3029_0_0_0, &t3029_1_0_0, t3029_IOs, &t3029_GC, NULL, NULL, NULL, t3029_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3029)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5283_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>
extern MethodInfo m30456_MI;
extern MethodInfo m30457_MI;
static PropertyInfo t5283____Item_PropertyInfo = 
{
	&t5283_TI, "Item", &m30456_MI, &m30457_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5283_PIs[] =
{
	&t5283____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1613_0_0_0;
static ParameterInfo t5283_m30458_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1613_0_0_0},
};
extern TypeInfo t5283_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30458_MI = 
{
	"IndexOf", NULL, &t5283_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5283_m30458_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1613_0_0_0;
static ParameterInfo t5283_m30459_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1613_0_0_0},
};
extern TypeInfo t5283_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30459_MI = 
{
	"Insert", NULL, &t5283_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5283_m30459_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5283_m30460_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5283_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30460_MI = 
{
	"RemoveAt", NULL, &t5283_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5283_m30460_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5283_m30456_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5283_TI;
extern Il2CppType t1613_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30456_MI = 
{
	"get_Item", NULL, &t5283_TI, &t1613_0_0_0, RuntimeInvoker_t25_t134, t5283_m30456_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1613_0_0_0;
static ParameterInfo t5283_m30457_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1613_0_0_0},
};
extern TypeInfo t5283_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30457_MI = 
{
	"set_Item", NULL, &t5283_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5283_m30457_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5283_MIs[] =
{
	&m30458_MI,
	&m30459_MI,
	&m30460_MI,
	&m30456_MI,
	&m30457_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5282_TI;
extern TypeInfo t5284_TI;
static TypeInfo* t5283_ITIs[] = 
{
	&t703_TI,
	&t5282_TI,
	&t5284_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5283_0_0_0;
extern Il2CppType t5283_1_0_0;
struct t5283;
extern TypeInfo t5283_TI;
extern Il2CppGenericClass t5283_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5283_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5283_MIs, t5283_PIs, NULL, NULL, NULL, NULL, NULL, &t5283_TI, t5283_ITIs, NULL, &t1518__CustomAttributeCache, &t5283_TI, &t5283_0_0_0, &t5283_1_0_0, NULL, &t5283_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4044_TI;

#include "t754.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>
extern MethodInfo m30461_MI;
static PropertyInfo t4044____Current_PropertyInfo = 
{
	&t4044_TI, "Current", &m30461_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4044_PIs[] =
{
	&t4044____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4044_TI;
extern Il2CppType t754_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30461_MI = 
{
	"get_Current", NULL, &t4044_TI, &t754_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4044_MIs[] =
{
	&m30461_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4044_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4044_0_0_0;
extern Il2CppType t4044_1_0_0;
struct t4044;
extern TypeInfo t4044_TI;
extern Il2CppGenericClass t4044_GC;
TypeInfo t4044_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4044_MIs, t4044_PIs, NULL, NULL, NULL, NULL, NULL, &t4044_TI, t4044_ITIs, NULL, &EmptyCustomAttributesCache, &t4044_TI, &t4044_0_0_0, &t4044_1_0_0, NULL, &t4044_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3030.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3030_TI;
#include "t3030MD.h"

extern TypeInfo t3030_TI;
extern TypeInfo t754_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16945_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22937_MI;
struct t122;
#define m22937(__this, p0, method) (t754 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m22937_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>
extern Il2CppType t122_0_0_1;
FieldInfo t3030_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3030_TI, offsetof(t3030, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3030_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3030_TI, offsetof(t3030, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3030_FIs[] =
{
	&t3030_f0_FieldInfo,
	&t3030_f1_FieldInfo,
	NULL
};
extern MethodInfo m16942_MI;
static PropertyInfo t3030____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3030_TI, "System.Collections.IEnumerator.Current", &m16942_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16945_MI;
static PropertyInfo t3030____Current_PropertyInfo = 
{
	&t3030_TI, "Current", &m16945_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3030_PIs[] =
{
	&t3030____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3030____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3030_m16941_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3030_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16941_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3030_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3030_m16941_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3030_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16942_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3030_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3030_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16943_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3030_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3030_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16944_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3030_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3030_TI;
extern Il2CppType t754_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16945_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3030_TI, &t754_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3030_MIs[] =
{
	&m16941_MI,
	&m16942_MI,
	&m16943_MI,
	&m16944_MI,
	&m16945_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16942_MI;
extern MethodInfo m16944_MI;
extern MethodInfo m16943_MI;
extern MethodInfo m16945_MI;
static MethodInfo* t3030_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16942_MI,
	&m16944_MI,
	&m16943_MI,
	&m16945_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4044_TI;
static TypeInfo* t3030_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4044_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4044_TI;
static Il2CppInterfaceOffsetPair t3030_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4044_TI, 7},
};
extern MethodInfo m16945_MI;
extern TypeInfo t754_TI;
extern MethodInfo m22937_MI;
static void* t3030_RGCTXData[3] = 
{
	&m16945_MI,
	&t754_TI,
	&m22937_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3030_0_0_0;
extern Il2CppType t3030_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3030_TI;
extern Il2CppGenericClass t3030_GC;
extern TypeInfo t122_TI;
TypeInfo t3030_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3030_MIs, t3030_PIs, t3030_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3030_TI, t3030_ITIs, t3030_VT, &EmptyCustomAttributesCache, &t3030_TI, &t3030_0_0_0, &t3030_1_0_0, t3030_IOs, &t3030_GC, NULL, NULL, NULL, t3030_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3030)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5285_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>
extern MethodInfo m30462_MI;
static PropertyInfo t5285____Count_PropertyInfo = 
{
	&t5285_TI, "Count", &m30462_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30463_MI;
static PropertyInfo t5285____IsReadOnly_PropertyInfo = 
{
	&t5285_TI, "IsReadOnly", &m30463_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5285_PIs[] =
{
	&t5285____Count_PropertyInfo,
	&t5285____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5285_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30462_MI = 
{
	"get_Count", NULL, &t5285_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5285_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30463_MI = 
{
	"get_IsReadOnly", NULL, &t5285_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t754_0_0_0;
static ParameterInfo t5285_m30464_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t754_0_0_0},
};
extern TypeInfo t5285_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30464_MI = 
{
	"Add", NULL, &t5285_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5285_m30464_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5285_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30465_MI = 
{
	"Clear", NULL, &t5285_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t754_0_0_0;
static ParameterInfo t5285_m30466_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t754_0_0_0},
};
extern TypeInfo t5285_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30466_MI = 
{
	"Contains", NULL, &t5285_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5285_m30466_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t842_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5285_m30467_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t842_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5285_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30467_MI = 
{
	"CopyTo", NULL, &t5285_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5285_m30467_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t754_0_0_0;
static ParameterInfo t5285_m30468_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t754_0_0_0},
};
extern TypeInfo t5285_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30468_MI = 
{
	"Remove", NULL, &t5285_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5285_m30468_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5285_MIs[] =
{
	&m30462_MI,
	&m30463_MI,
	&m30464_MI,
	&m30465_MI,
	&m30466_MI,
	&m30467_MI,
	&m30468_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5287_TI;
static TypeInfo* t5285_ITIs[] = 
{
	&t703_TI,
	&t5287_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5285_0_0_0;
extern Il2CppType t5285_1_0_0;
struct t5285;
extern TypeInfo t5285_TI;
extern Il2CppGenericClass t5285_GC;
TypeInfo t5285_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5285_MIs, t5285_PIs, NULL, NULL, NULL, NULL, NULL, &t5285_TI, t5285_ITIs, NULL, &EmptyCustomAttributesCache, &t5285_TI, &t5285_0_0_0, &t5285_1_0_0, NULL, &t5285_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5287_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
extern TypeInfo t5287_TI;
extern Il2CppType t4044_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30469_MI = 
{
	"GetEnumerator", NULL, &t5287_TI, &t4044_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5287_MIs[] =
{
	&m30469_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5287_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5287_0_0_0;
extern Il2CppType t5287_1_0_0;
struct t5287;
extern TypeInfo t5287_TI;
extern Il2CppGenericClass t5287_GC;
TypeInfo t5287_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5287_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5287_TI, t5287_ITIs, NULL, &EmptyCustomAttributesCache, &t5287_TI, &t5287_0_0_0, &t5287_1_0_0, NULL, &t5287_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5286_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>
extern MethodInfo m30470_MI;
extern MethodInfo m30471_MI;
static PropertyInfo t5286____Item_PropertyInfo = 
{
	&t5286_TI, "Item", &m30470_MI, &m30471_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5286_PIs[] =
{
	&t5286____Item_PropertyInfo,
	NULL
};
extern Il2CppType t754_0_0_0;
static ParameterInfo t5286_m30472_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t754_0_0_0},
};
extern TypeInfo t5286_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30472_MI = 
{
	"IndexOf", NULL, &t5286_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5286_m30472_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t754_0_0_0;
static ParameterInfo t5286_m30473_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t754_0_0_0},
};
extern TypeInfo t5286_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30473_MI = 
{
	"Insert", NULL, &t5286_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5286_m30473_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5286_m30474_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5286_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30474_MI = 
{
	"RemoveAt", NULL, &t5286_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5286_m30474_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5286_m30470_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5286_TI;
extern Il2CppType t754_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30470_MI = 
{
	"get_Item", NULL, &t5286_TI, &t754_0_0_0, RuntimeInvoker_t25_t134, t5286_m30470_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t754_0_0_0;
static ParameterInfo t5286_m30471_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t754_0_0_0},
};
extern TypeInfo t5286_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30471_MI = 
{
	"set_Item", NULL, &t5286_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5286_m30471_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5286_MIs[] =
{
	&m30472_MI,
	&m30473_MI,
	&m30474_MI,
	&m30470_MI,
	&m30471_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5285_TI;
extern TypeInfo t5287_TI;
static TypeInfo* t5286_ITIs[] = 
{
	&t703_TI,
	&t5285_TI,
	&t5287_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5286_0_0_0;
extern Il2CppType t5286_1_0_0;
struct t5286;
extern TypeInfo t5286_TI;
extern Il2CppGenericClass t5286_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5286_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5286_MIs, t5286_PIs, NULL, NULL, NULL, NULL, NULL, &t5286_TI, t5286_ITIs, NULL, &t1518__CustomAttributeCache, &t5286_TI, &t5286_0_0_0, &t5286_1_0_0, NULL, &t5286_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5288_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo m30475_MI;
static PropertyInfo t5288____Count_PropertyInfo = 
{
	&t5288_TI, "Count", &m30475_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30476_MI;
static PropertyInfo t5288____IsReadOnly_PropertyInfo = 
{
	&t5288_TI, "IsReadOnly", &m30476_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5288_PIs[] =
{
	&t5288____Count_PropertyInfo,
	&t5288____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5288_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30475_MI = 
{
	"get_Count", NULL, &t5288_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5288_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30476_MI = 
{
	"get_IsReadOnly", NULL, &t5288_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1612_0_0_0;
static ParameterInfo t5288_m30477_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1612_0_0_0},
};
extern TypeInfo t5288_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30477_MI = 
{
	"Add", NULL, &t5288_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5288_m30477_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5288_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30478_MI = 
{
	"Clear", NULL, &t5288_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1612_0_0_0;
static ParameterInfo t5288_m30479_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1612_0_0_0},
};
extern TypeInfo t5288_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30479_MI = 
{
	"Contains", NULL, &t5288_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5288_m30479_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3333_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5288_m30480_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3333_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5288_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30480_MI = 
{
	"CopyTo", NULL, &t5288_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5288_m30480_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1612_0_0_0;
static ParameterInfo t5288_m30481_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1612_0_0_0},
};
extern TypeInfo t5288_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30481_MI = 
{
	"Remove", NULL, &t5288_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5288_m30481_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5288_MIs[] =
{
	&m30475_MI,
	&m30476_MI,
	&m30477_MI,
	&m30478_MI,
	&m30479_MI,
	&m30480_MI,
	&m30481_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5290_TI;
static TypeInfo* t5288_ITIs[] = 
{
	&t703_TI,
	&t5290_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5288_0_0_0;
extern Il2CppType t5288_1_0_0;
struct t5288;
extern TypeInfo t5288_TI;
extern Il2CppGenericClass t5288_GC;
TypeInfo t5288_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5288_MIs, t5288_PIs, NULL, NULL, NULL, NULL, NULL, &t5288_TI, t5288_ITIs, NULL, &EmptyCustomAttributesCache, &t5288_TI, &t5288_0_0_0, &t5288_1_0_0, NULL, &t5288_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5290_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorInfo>
extern TypeInfo t5290_TI;
extern Il2CppType t4045_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30482_MI = 
{
	"GetEnumerator", NULL, &t5290_TI, &t4045_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5290_MIs[] =
{
	&m30482_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5290_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5290_0_0_0;
extern Il2CppType t5290_1_0_0;
struct t5290;
extern TypeInfo t5290_TI;
extern Il2CppGenericClass t5290_GC;
TypeInfo t5290_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5290_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5290_TI, t5290_ITIs, NULL, &EmptyCustomAttributesCache, &t5290_TI, &t5290_0_0_0, &t5290_1_0_0, NULL, &t5290_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4045_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo m30483_MI;
static PropertyInfo t4045____Current_PropertyInfo = 
{
	&t4045_TI, "Current", &m30483_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4045_PIs[] =
{
	&t4045____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4045_TI;
extern Il2CppType t1612_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30483_MI = 
{
	"get_Current", NULL, &t4045_TI, &t1612_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4045_MIs[] =
{
	&m30483_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4045_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4045_0_0_0;
extern Il2CppType t4045_1_0_0;
struct t4045;
extern TypeInfo t4045_TI;
extern Il2CppGenericClass t4045_GC;
TypeInfo t4045_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4045_MIs, t4045_PIs, NULL, NULL, NULL, NULL, NULL, &t4045_TI, t4045_ITIs, NULL, &EmptyCustomAttributesCache, &t4045_TI, &t4045_0_0_0, &t4045_1_0_0, NULL, &t4045_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3031.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3031_TI;
#include "t3031MD.h"

extern TypeInfo t3031_TI;
extern TypeInfo t1612_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16950_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22948_MI;
struct t122;
#define m22948(__this, p0, method) (t25 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m22948_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
extern Il2CppType t122_0_0_1;
FieldInfo t3031_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3031_TI, offsetof(t3031, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3031_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3031_TI, offsetof(t3031, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3031_FIs[] =
{
	&t3031_f0_FieldInfo,
	&t3031_f1_FieldInfo,
	NULL
};
extern MethodInfo m16947_MI;
static PropertyInfo t3031____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3031_TI, "System.Collections.IEnumerator.Current", &m16947_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16950_MI;
static PropertyInfo t3031____Current_PropertyInfo = 
{
	&t3031_TI, "Current", &m16950_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3031_PIs[] =
{
	&t3031____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3031____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3031_m16946_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3031_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16946_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3031_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3031_m16946_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3031_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16947_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3031_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3031_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16948_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3031_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3031_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16949_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3031_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3031_TI;
extern Il2CppType t1612_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16950_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3031_TI, &t1612_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3031_MIs[] =
{
	&m16946_MI,
	&m16947_MI,
	&m16948_MI,
	&m16949_MI,
	&m16950_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16947_MI;
extern MethodInfo m16949_MI;
extern MethodInfo m16948_MI;
extern MethodInfo m16950_MI;
static MethodInfo* t3031_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16947_MI,
	&m16949_MI,
	&m16948_MI,
	&m16950_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4045_TI;
static TypeInfo* t3031_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4045_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4045_TI;
static Il2CppInterfaceOffsetPair t3031_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4045_TI, 7},
};
extern MethodInfo m16950_MI;
extern TypeInfo t1612_TI;
extern MethodInfo m22948_MI;
static void* t3031_RGCTXData[3] = 
{
	&m16950_MI,
	&t1612_TI,
	&m22948_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3031_0_0_0;
extern Il2CppType t3031_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3031_TI;
extern Il2CppGenericClass t3031_GC;
extern TypeInfo t122_TI;
TypeInfo t3031_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3031_MIs, t3031_PIs, t3031_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3031_TI, t3031_ITIs, t3031_VT, &EmptyCustomAttributesCache, &t3031_TI, &t3031_0_0_0, &t3031_1_0_0, t3031_IOs, &t3031_GC, NULL, NULL, NULL, t3031_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3031)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5289_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo m30484_MI;
extern MethodInfo m30485_MI;
static PropertyInfo t5289____Item_PropertyInfo = 
{
	&t5289_TI, "Item", &m30484_MI, &m30485_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5289_PIs[] =
{
	&t5289____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1612_0_0_0;
static ParameterInfo t5289_m30486_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1612_0_0_0},
};
extern TypeInfo t5289_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30486_MI = 
{
	"IndexOf", NULL, &t5289_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5289_m30486_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1612_0_0_0;
static ParameterInfo t5289_m30487_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1612_0_0_0},
};
extern TypeInfo t5289_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30487_MI = 
{
	"Insert", NULL, &t5289_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5289_m30487_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5289_m30488_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5289_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30488_MI = 
{
	"RemoveAt", NULL, &t5289_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5289_m30488_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5289_m30484_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5289_TI;
extern Il2CppType t1612_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30484_MI = 
{
	"get_Item", NULL, &t5289_TI, &t1612_0_0_0, RuntimeInvoker_t25_t134, t5289_m30484_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1612_0_0_0;
static ParameterInfo t5289_m30485_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1612_0_0_0},
};
extern TypeInfo t5289_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30485_MI = 
{
	"set_Item", NULL, &t5289_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5289_m30485_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5289_MIs[] =
{
	&m30486_MI,
	&m30487_MI,
	&m30488_MI,
	&m30484_MI,
	&m30485_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5288_TI;
extern TypeInfo t5290_TI;
static TypeInfo* t5289_ITIs[] = 
{
	&t703_TI,
	&t5288_TI,
	&t5290_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5289_0_0_0;
extern Il2CppType t5289_1_0_0;
struct t5289;
extern TypeInfo t5289_TI;
extern Il2CppGenericClass t5289_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5289_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5289_MIs, t5289_PIs, NULL, NULL, NULL, NULL, NULL, &t5289_TI, t5289_ITIs, NULL, &t1518__CustomAttributeCache, &t5289_TI, &t5289_0_0_0, &t5289_1_0_0, NULL, &t5289_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4046_TI;

#include "t1398.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoType>
extern MethodInfo m30489_MI;
static PropertyInfo t4046____Current_PropertyInfo = 
{
	&t4046_TI, "Current", &m30489_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4046_PIs[] =
{
	&t4046____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4046_TI;
extern Il2CppType t1398_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30489_MI = 
{
	"get_Current", NULL, &t4046_TI, &t1398_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4046_MIs[] =
{
	&m30489_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4046_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4046_0_0_0;
extern Il2CppType t4046_1_0_0;
struct t4046;
extern TypeInfo t4046_TI;
extern Il2CppGenericClass t4046_GC;
TypeInfo t4046_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4046_MIs, t4046_PIs, NULL, NULL, NULL, NULL, NULL, &t4046_TI, t4046_ITIs, NULL, &EmptyCustomAttributesCache, &t4046_TI, &t4046_0_0_0, &t4046_1_0_0, NULL, &t4046_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3032.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3032_TI;
#include "t3032MD.h"

extern TypeInfo t3032_TI;
extern TypeInfo t1398_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16955_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22959_MI;
struct t122;
#define m22959(__this, p0, method) (t1398 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m22959_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.MonoType>
extern Il2CppType t122_0_0_1;
FieldInfo t3032_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3032_TI, offsetof(t3032, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3032_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3032_TI, offsetof(t3032, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3032_FIs[] =
{
	&t3032_f0_FieldInfo,
	&t3032_f1_FieldInfo,
	NULL
};
extern MethodInfo m16952_MI;
static PropertyInfo t3032____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3032_TI, "System.Collections.IEnumerator.Current", &m16952_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16955_MI;
static PropertyInfo t3032____Current_PropertyInfo = 
{
	&t3032_TI, "Current", &m16955_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3032_PIs[] =
{
	&t3032____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3032____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3032_m16951_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3032_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16951_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3032_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3032_m16951_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3032_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16952_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3032_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3032_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16953_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3032_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3032_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16954_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3032_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3032_TI;
extern Il2CppType t1398_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16955_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3032_TI, &t1398_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3032_MIs[] =
{
	&m16951_MI,
	&m16952_MI,
	&m16953_MI,
	&m16954_MI,
	&m16955_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16952_MI;
extern MethodInfo m16954_MI;
extern MethodInfo m16953_MI;
extern MethodInfo m16955_MI;
static MethodInfo* t3032_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16952_MI,
	&m16954_MI,
	&m16953_MI,
	&m16955_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4046_TI;
static TypeInfo* t3032_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4046_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4046_TI;
static Il2CppInterfaceOffsetPair t3032_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4046_TI, 7},
};
extern MethodInfo m16955_MI;
extern TypeInfo t1398_TI;
extern MethodInfo m22959_MI;
static void* t3032_RGCTXData[3] = 
{
	&m16955_MI,
	&t1398_TI,
	&m22959_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3032_0_0_0;
extern Il2CppType t3032_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3032_TI;
extern Il2CppGenericClass t3032_GC;
extern TypeInfo t122_TI;
TypeInfo t3032_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3032_MIs, t3032_PIs, t3032_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3032_TI, t3032_ITIs, t3032_VT, &EmptyCustomAttributesCache, &t3032_TI, &t3032_0_0_0, &t3032_1_0_0, t3032_IOs, &t3032_GC, NULL, NULL, NULL, t3032_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3032)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5291_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoType>
extern MethodInfo m30490_MI;
static PropertyInfo t5291____Count_PropertyInfo = 
{
	&t5291_TI, "Count", &m30490_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30491_MI;
static PropertyInfo t5291____IsReadOnly_PropertyInfo = 
{
	&t5291_TI, "IsReadOnly", &m30491_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5291_PIs[] =
{
	&t5291____Count_PropertyInfo,
	&t5291____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5291_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30490_MI = 
{
	"get_Count", NULL, &t5291_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5291_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30491_MI = 
{
	"get_IsReadOnly", NULL, &t5291_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1398_0_0_0;
static ParameterInfo t5291_m30492_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1398_0_0_0},
};
extern TypeInfo t5291_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30492_MI = 
{
	"Add", NULL, &t5291_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5291_m30492_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5291_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30493_MI = 
{
	"Clear", NULL, &t5291_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1398_0_0_0;
static ParameterInfo t5291_m30494_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1398_0_0_0},
};
extern TypeInfo t5291_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30494_MI = 
{
	"Contains", NULL, &t5291_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5291_m30494_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1650_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5291_m30495_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1650_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5291_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30495_MI = 
{
	"CopyTo", NULL, &t5291_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5291_m30495_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1398_0_0_0;
static ParameterInfo t5291_m30496_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1398_0_0_0},
};
extern TypeInfo t5291_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30496_MI = 
{
	"Remove", NULL, &t5291_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5291_m30496_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5291_MIs[] =
{
	&m30490_MI,
	&m30491_MI,
	&m30492_MI,
	&m30493_MI,
	&m30494_MI,
	&m30495_MI,
	&m30496_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5293_TI;
static TypeInfo* t5291_ITIs[] = 
{
	&t703_TI,
	&t5293_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5291_0_0_0;
extern Il2CppType t5291_1_0_0;
struct t5291;
extern TypeInfo t5291_TI;
extern Il2CppGenericClass t5291_GC;
TypeInfo t5291_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5291_MIs, t5291_PIs, NULL, NULL, NULL, NULL, NULL, &t5291_TI, t5291_ITIs, NULL, &EmptyCustomAttributesCache, &t5291_TI, &t5291_0_0_0, &t5291_1_0_0, NULL, &t5291_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5293_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MonoType>
extern TypeInfo t5293_TI;
extern Il2CppType t4046_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30497_MI = 
{
	"GetEnumerator", NULL, &t5293_TI, &t4046_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5293_MIs[] =
{
	&m30497_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5293_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5293_0_0_0;
extern Il2CppType t5293_1_0_0;
struct t5293;
extern TypeInfo t5293_TI;
extern Il2CppGenericClass t5293_GC;
TypeInfo t5293_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5293_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5293_TI, t5293_ITIs, NULL, &EmptyCustomAttributesCache, &t5293_TI, &t5293_0_0_0, &t5293_1_0_0, NULL, &t5293_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5292_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.MonoType>
extern MethodInfo m30498_MI;
extern MethodInfo m30499_MI;
static PropertyInfo t5292____Item_PropertyInfo = 
{
	&t5292_TI, "Item", &m30498_MI, &m30499_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5292_PIs[] =
{
	&t5292____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1398_0_0_0;
static ParameterInfo t5292_m30500_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1398_0_0_0},
};
extern TypeInfo t5292_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30500_MI = 
{
	"IndexOf", NULL, &t5292_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5292_m30500_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1398_0_0_0;
static ParameterInfo t5292_m30501_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1398_0_0_0},
};
extern TypeInfo t5292_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30501_MI = 
{
	"Insert", NULL, &t5292_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5292_m30501_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5292_m30502_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5292_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30502_MI = 
{
	"RemoveAt", NULL, &t5292_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5292_m30502_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5292_m30498_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5292_TI;
extern Il2CppType t1398_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30498_MI = 
{
	"get_Item", NULL, &t5292_TI, &t1398_0_0_0, RuntimeInvoker_t25_t134, t5292_m30498_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1398_0_0_0;
static ParameterInfo t5292_m30499_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1398_0_0_0},
};
extern TypeInfo t5292_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30499_MI = 
{
	"set_Item", NULL, &t5292_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5292_m30499_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5292_MIs[] =
{
	&m30500_MI,
	&m30501_MI,
	&m30502_MI,
	&m30498_MI,
	&m30499_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5291_TI;
extern TypeInfo t5293_TI;
static TypeInfo* t5292_ITIs[] = 
{
	&t703_TI,
	&t5291_TI,
	&t5293_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5292_0_0_0;
extern Il2CppType t5292_1_0_0;
struct t5292;
extern TypeInfo t5292_TI;
extern Il2CppGenericClass t5292_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5292_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5292_MIs, t5292_PIs, NULL, NULL, NULL, NULL, NULL, &t5292_TI, t5292_ITIs, NULL, &t1518__CustomAttributeCache, &t5292_TI, &t5292_0_0_0, &t5292_1_0_0, NULL, &t5292_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4047_TI;

#include "t500.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ParamArrayAttribute>
extern MethodInfo m30503_MI;
static PropertyInfo t4047____Current_PropertyInfo = 
{
	&t4047_TI, "Current", &m30503_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4047_PIs[] =
{
	&t4047____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4047_TI;
extern Il2CppType t500_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30503_MI = 
{
	"get_Current", NULL, &t4047_TI, &t500_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4047_MIs[] =
{
	&m30503_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4047_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4047_0_0_0;
extern Il2CppType t4047_1_0_0;
struct t4047;
extern TypeInfo t4047_TI;
extern Il2CppGenericClass t4047_GC;
TypeInfo t4047_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4047_MIs, t4047_PIs, NULL, NULL, NULL, NULL, NULL, &t4047_TI, t4047_ITIs, NULL, &EmptyCustomAttributesCache, &t4047_TI, &t4047_0_0_0, &t4047_1_0_0, NULL, &t4047_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3033.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3033_TI;
#include "t3033MD.h"

extern TypeInfo t3033_TI;
extern TypeInfo t500_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16960_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22970_MI;
struct t122;
#define m22970(__this, p0, method) (t500 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m22970_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.ParamArrayAttribute>
extern Il2CppType t122_0_0_1;
FieldInfo t3033_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3033_TI, offsetof(t3033, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3033_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3033_TI, offsetof(t3033, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3033_FIs[] =
{
	&t3033_f0_FieldInfo,
	&t3033_f1_FieldInfo,
	NULL
};
extern MethodInfo m16957_MI;
static PropertyInfo t3033____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3033_TI, "System.Collections.IEnumerator.Current", &m16957_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16960_MI;
static PropertyInfo t3033____Current_PropertyInfo = 
{
	&t3033_TI, "Current", &m16960_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3033_PIs[] =
{
	&t3033____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3033____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3033_m16956_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3033_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16956_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3033_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3033_m16956_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3033_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16957_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3033_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3033_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16958_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3033_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3033_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16959_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3033_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3033_TI;
extern Il2CppType t500_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16960_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3033_TI, &t500_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3033_MIs[] =
{
	&m16956_MI,
	&m16957_MI,
	&m16958_MI,
	&m16959_MI,
	&m16960_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16957_MI;
extern MethodInfo m16959_MI;
extern MethodInfo m16958_MI;
extern MethodInfo m16960_MI;
static MethodInfo* t3033_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16957_MI,
	&m16959_MI,
	&m16958_MI,
	&m16960_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4047_TI;
static TypeInfo* t3033_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4047_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4047_TI;
static Il2CppInterfaceOffsetPair t3033_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4047_TI, 7},
};
extern MethodInfo m16960_MI;
extern TypeInfo t500_TI;
extern MethodInfo m22970_MI;
static void* t3033_RGCTXData[3] = 
{
	&m16960_MI,
	&t500_TI,
	&m22970_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3033_0_0_0;
extern Il2CppType t3033_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3033_TI;
extern Il2CppGenericClass t3033_GC;
extern TypeInfo t122_TI;
TypeInfo t3033_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3033_MIs, t3033_PIs, t3033_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3033_TI, t3033_ITIs, t3033_VT, &EmptyCustomAttributesCache, &t3033_TI, &t3033_0_0_0, &t3033_1_0_0, t3033_IOs, &t3033_GC, NULL, NULL, NULL, t3033_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3033)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5294_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>
extern MethodInfo m30504_MI;
static PropertyInfo t5294____Count_PropertyInfo = 
{
	&t5294_TI, "Count", &m30504_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30505_MI;
static PropertyInfo t5294____IsReadOnly_PropertyInfo = 
{
	&t5294_TI, "IsReadOnly", &m30505_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5294_PIs[] =
{
	&t5294____Count_PropertyInfo,
	&t5294____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5294_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30504_MI = 
{
	"get_Count", NULL, &t5294_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5294_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30505_MI = 
{
	"get_IsReadOnly", NULL, &t5294_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t500_0_0_0;
static ParameterInfo t5294_m30506_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t5294_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30506_MI = 
{
	"Add", NULL, &t5294_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5294_m30506_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5294_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30507_MI = 
{
	"Clear", NULL, &t5294_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t500_0_0_0;
static ParameterInfo t5294_m30508_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t5294_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30508_MI = 
{
	"Contains", NULL, &t5294_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5294_m30508_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3334_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5294_m30509_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3334_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5294_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30509_MI = 
{
	"CopyTo", NULL, &t5294_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5294_m30509_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t500_0_0_0;
static ParameterInfo t5294_m30510_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t5294_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30510_MI = 
{
	"Remove", NULL, &t5294_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5294_m30510_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5294_MIs[] =
{
	&m30504_MI,
	&m30505_MI,
	&m30506_MI,
	&m30507_MI,
	&m30508_MI,
	&m30509_MI,
	&m30510_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5296_TI;
static TypeInfo* t5294_ITIs[] = 
{
	&t703_TI,
	&t5296_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5294_0_0_0;
extern Il2CppType t5294_1_0_0;
struct t5294;
extern TypeInfo t5294_TI;
extern Il2CppGenericClass t5294_GC;
TypeInfo t5294_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5294_MIs, t5294_PIs, NULL, NULL, NULL, NULL, NULL, &t5294_TI, t5294_ITIs, NULL, &EmptyCustomAttributesCache, &t5294_TI, &t5294_0_0_0, &t5294_1_0_0, NULL, &t5294_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5296_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ParamArrayAttribute>
extern TypeInfo t5296_TI;
extern Il2CppType t4047_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30511_MI = 
{
	"GetEnumerator", NULL, &t5296_TI, &t4047_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5296_MIs[] =
{
	&m30511_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5296_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5296_0_0_0;
extern Il2CppType t5296_1_0_0;
struct t5296;
extern TypeInfo t5296_TI;
extern Il2CppGenericClass t5296_GC;
TypeInfo t5296_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5296_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5296_TI, t5296_ITIs, NULL, &EmptyCustomAttributesCache, &t5296_TI, &t5296_0_0_0, &t5296_1_0_0, NULL, &t5296_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5295_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.ParamArrayAttribute>
extern MethodInfo m30512_MI;
extern MethodInfo m30513_MI;
static PropertyInfo t5295____Item_PropertyInfo = 
{
	&t5295_TI, "Item", &m30512_MI, &m30513_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5295_PIs[] =
{
	&t5295____Item_PropertyInfo,
	NULL
};
extern Il2CppType t500_0_0_0;
static ParameterInfo t5295_m30514_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t5295_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30514_MI = 
{
	"IndexOf", NULL, &t5295_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5295_m30514_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t500_0_0_0;
static ParameterInfo t5295_m30515_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t5295_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30515_MI = 
{
	"Insert", NULL, &t5295_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5295_m30515_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5295_m30516_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5295_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30516_MI = 
{
	"RemoveAt", NULL, &t5295_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5295_m30516_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5295_m30512_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5295_TI;
extern Il2CppType t500_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30512_MI = 
{
	"get_Item", NULL, &t5295_TI, &t500_0_0_0, RuntimeInvoker_t25_t134, t5295_m30512_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t500_0_0_0;
static ParameterInfo t5295_m30513_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t5295_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30513_MI = 
{
	"set_Item", NULL, &t5295_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5295_m30513_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5295_MIs[] =
{
	&m30514_MI,
	&m30515_MI,
	&m30516_MI,
	&m30512_MI,
	&m30513_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5294_TI;
extern TypeInfo t5296_TI;
static TypeInfo* t5295_ITIs[] = 
{
	&t703_TI,
	&t5294_TI,
	&t5296_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5295_0_0_0;
extern Il2CppType t5295_1_0_0;
struct t5295;
extern TypeInfo t5295_TI;
extern Il2CppGenericClass t5295_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5295_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5295_MIs, t5295_PIs, NULL, NULL, NULL, NULL, NULL, &t5295_TI, t5295_ITIs, NULL, &t1518__CustomAttributeCache, &t5295_TI, &t5295_0_0_0, &t5295_1_0_0, NULL, &t5295_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4048_TI;

#include "t848.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo m30517_MI;
static PropertyInfo t4048____Current_PropertyInfo = 
{
	&t4048_TI, "Current", &m30517_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4048_PIs[] =
{
	&t4048____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4048_TI;
extern Il2CppType t848_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30517_MI = 
{
	"get_Current", NULL, &t4048_TI, &t848_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4048_MIs[] =
{
	&m30517_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4048_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4048_0_0_0;
extern Il2CppType t4048_1_0_0;
struct t4048;
extern TypeInfo t4048_TI;
extern Il2CppGenericClass t4048_GC;
TypeInfo t4048_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4048_MIs, t4048_PIs, NULL, NULL, NULL, NULL, NULL, &t4048_TI, t4048_ITIs, NULL, &EmptyCustomAttributesCache, &t4048_TI, &t4048_0_0_0, &t4048_1_0_0, NULL, &t4048_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3034.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3034_TI;
#include "t3034MD.h"

extern TypeInfo t3034_TI;
extern TypeInfo t848_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16965_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22981_MI;
struct t122;
#define m22981(__this, p0, method) (t848 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m22981_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>
extern Il2CppType t122_0_0_1;
FieldInfo t3034_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3034_TI, offsetof(t3034, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3034_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3034_TI, offsetof(t3034, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3034_FIs[] =
{
	&t3034_f0_FieldInfo,
	&t3034_f1_FieldInfo,
	NULL
};
extern MethodInfo m16962_MI;
static PropertyInfo t3034____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3034_TI, "System.Collections.IEnumerator.Current", &m16962_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16965_MI;
static PropertyInfo t3034____Current_PropertyInfo = 
{
	&t3034_TI, "Current", &m16965_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3034_PIs[] =
{
	&t3034____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3034____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3034_m16961_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3034_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16961_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3034_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3034_m16961_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3034_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16962_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3034_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3034_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16963_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3034_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3034_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16964_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3034_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3034_TI;
extern Il2CppType t848_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16965_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3034_TI, &t848_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3034_MIs[] =
{
	&m16961_MI,
	&m16962_MI,
	&m16963_MI,
	&m16964_MI,
	&m16965_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16962_MI;
extern MethodInfo m16964_MI;
extern MethodInfo m16963_MI;
extern MethodInfo m16965_MI;
static MethodInfo* t3034_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16962_MI,
	&m16964_MI,
	&m16963_MI,
	&m16965_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4048_TI;
static TypeInfo* t3034_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4048_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4048_TI;
static Il2CppInterfaceOffsetPair t3034_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4048_TI, 7},
};
extern MethodInfo m16965_MI;
extern TypeInfo t848_TI;
extern MethodInfo m22981_MI;
static void* t3034_RGCTXData[3] = 
{
	&m16965_MI,
	&t848_TI,
	&m22981_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3034_0_0_0;
extern Il2CppType t3034_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3034_TI;
extern Il2CppGenericClass t3034_GC;
extern TypeInfo t122_TI;
TypeInfo t3034_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3034_MIs, t3034_PIs, t3034_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3034_TI, t3034_ITIs, t3034_VT, &EmptyCustomAttributesCache, &t3034_TI, &t3034_0_0_0, &t3034_1_0_0, t3034_IOs, &t3034_GC, NULL, NULL, NULL, t3034_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3034)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5297_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo m30518_MI;
static PropertyInfo t5297____Count_PropertyInfo = 
{
	&t5297_TI, "Count", &m30518_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30519_MI;
static PropertyInfo t5297____IsReadOnly_PropertyInfo = 
{
	&t5297_TI, "IsReadOnly", &m30519_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5297_PIs[] =
{
	&t5297____Count_PropertyInfo,
	&t5297____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5297_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30518_MI = 
{
	"get_Count", NULL, &t5297_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5297_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30519_MI = 
{
	"get_IsReadOnly", NULL, &t5297_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t848_0_0_0;
static ParameterInfo t5297_m30520_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t848_0_0_0},
};
extern TypeInfo t5297_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30520_MI = 
{
	"Add", NULL, &t5297_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5297_m30520_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5297_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30521_MI = 
{
	"Clear", NULL, &t5297_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t848_0_0_0;
static ParameterInfo t5297_m30522_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t848_0_0_0},
};
extern TypeInfo t5297_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30522_MI = 
{
	"Contains", NULL, &t5297_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5297_m30522_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3335_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5297_m30523_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3335_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5297_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30523_MI = 
{
	"CopyTo", NULL, &t5297_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5297_m30523_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t848_0_0_0;
static ParameterInfo t5297_m30524_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t848_0_0_0},
};
extern TypeInfo t5297_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30524_MI = 
{
	"Remove", NULL, &t5297_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5297_m30524_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5297_MIs[] =
{
	&m30518_MI,
	&m30519_MI,
	&m30520_MI,
	&m30521_MI,
	&m30522_MI,
	&m30523_MI,
	&m30524_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5299_TI;
static TypeInfo* t5297_ITIs[] = 
{
	&t703_TI,
	&t5299_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5297_0_0_0;
extern Il2CppType t5297_1_0_0;
struct t5297;
extern TypeInfo t5297_TI;
extern Il2CppGenericClass t5297_GC;
TypeInfo t5297_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5297_MIs, t5297_PIs, NULL, NULL, NULL, NULL, NULL, &t5297_TI, t5297_ITIs, NULL, &EmptyCustomAttributesCache, &t5297_TI, &t5297_0_0_0, &t5297_1_0_0, NULL, &t5297_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5299_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OutAttribute>
extern TypeInfo t5299_TI;
extern Il2CppType t4048_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30525_MI = 
{
	"GetEnumerator", NULL, &t5299_TI, &t4048_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5299_MIs[] =
{
	&m30525_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5299_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5299_0_0_0;
extern Il2CppType t5299_1_0_0;
struct t5299;
extern TypeInfo t5299_TI;
extern Il2CppGenericClass t5299_GC;
TypeInfo t5299_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5299_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5299_TI, t5299_ITIs, NULL, &EmptyCustomAttributesCache, &t5299_TI, &t5299_0_0_0, &t5299_1_0_0, NULL, &t5299_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5298_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo m30526_MI;
extern MethodInfo m30527_MI;
static PropertyInfo t5298____Item_PropertyInfo = 
{
	&t5298_TI, "Item", &m30526_MI, &m30527_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5298_PIs[] =
{
	&t5298____Item_PropertyInfo,
	NULL
};
extern Il2CppType t848_0_0_0;
static ParameterInfo t5298_m30528_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t848_0_0_0},
};
extern TypeInfo t5298_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30528_MI = 
{
	"IndexOf", NULL, &t5298_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5298_m30528_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t848_0_0_0;
static ParameterInfo t5298_m30529_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t848_0_0_0},
};
extern TypeInfo t5298_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30529_MI = 
{
	"Insert", NULL, &t5298_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5298_m30529_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5298_m30530_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5298_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30530_MI = 
{
	"RemoveAt", NULL, &t5298_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5298_m30530_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5298_m30526_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5298_TI;
extern Il2CppType t848_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30526_MI = 
{
	"get_Item", NULL, &t5298_TI, &t848_0_0_0, RuntimeInvoker_t25_t134, t5298_m30526_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t848_0_0_0;
static ParameterInfo t5298_m30527_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t848_0_0_0},
};
extern TypeInfo t5298_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30527_MI = 
{
	"set_Item", NULL, &t5298_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5298_m30527_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5298_MIs[] =
{
	&m30528_MI,
	&m30529_MI,
	&m30530_MI,
	&m30526_MI,
	&m30527_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5297_TI;
extern TypeInfo t5299_TI;
static TypeInfo* t5298_ITIs[] = 
{
	&t703_TI,
	&t5297_TI,
	&t5299_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5298_0_0_0;
extern Il2CppType t5298_1_0_0;
struct t5298;
extern TypeInfo t5298_TI;
extern Il2CppGenericClass t5298_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5298_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5298_MIs, t5298_PIs, NULL, NULL, NULL, NULL, NULL, &t5298_TI, t5298_ITIs, NULL, &t1518__CustomAttributeCache, &t5298_TI, &t5298_0_0_0, &t5298_1_0_0, NULL, &t5298_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4049_TI;

#include "t454.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ObsoleteAttribute>
extern MethodInfo m30531_MI;
static PropertyInfo t4049____Current_PropertyInfo = 
{
	&t4049_TI, "Current", &m30531_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4049_PIs[] =
{
	&t4049____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4049_TI;
extern Il2CppType t454_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30531_MI = 
{
	"get_Current", NULL, &t4049_TI, &t454_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4049_MIs[] =
{
	&m30531_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4049_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4049_0_0_0;
extern Il2CppType t4049_1_0_0;
struct t4049;
extern TypeInfo t4049_TI;
extern Il2CppGenericClass t4049_GC;
TypeInfo t4049_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4049_MIs, t4049_PIs, NULL, NULL, NULL, NULL, NULL, &t4049_TI, t4049_ITIs, NULL, &EmptyCustomAttributesCache, &t4049_TI, &t4049_0_0_0, &t4049_1_0_0, NULL, &t4049_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3035.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3035_TI;
#include "t3035MD.h"

extern TypeInfo t3035_TI;
extern TypeInfo t454_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16970_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m22992_MI;
struct t122;
#define m22992(__this, p0, method) (t454 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m22992_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.ObsoleteAttribute>
extern Il2CppType t122_0_0_1;
FieldInfo t3035_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3035_TI, offsetof(t3035, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3035_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3035_TI, offsetof(t3035, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3035_FIs[] =
{
	&t3035_f0_FieldInfo,
	&t3035_f1_FieldInfo,
	NULL
};
extern MethodInfo m16967_MI;
static PropertyInfo t3035____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3035_TI, "System.Collections.IEnumerator.Current", &m16967_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16970_MI;
static PropertyInfo t3035____Current_PropertyInfo = 
{
	&t3035_TI, "Current", &m16970_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3035_PIs[] =
{
	&t3035____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3035____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3035_m16966_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3035_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16966_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3035_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3035_m16966_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3035_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16967_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3035_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3035_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16968_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3035_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3035_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16969_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3035_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3035_TI;
extern Il2CppType t454_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16970_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3035_TI, &t454_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3035_MIs[] =
{
	&m16966_MI,
	&m16967_MI,
	&m16968_MI,
	&m16969_MI,
	&m16970_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16967_MI;
extern MethodInfo m16969_MI;
extern MethodInfo m16968_MI;
extern MethodInfo m16970_MI;
static MethodInfo* t3035_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16967_MI,
	&m16969_MI,
	&m16968_MI,
	&m16970_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4049_TI;
static TypeInfo* t3035_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4049_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4049_TI;
static Il2CppInterfaceOffsetPair t3035_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4049_TI, 7},
};
extern MethodInfo m16970_MI;
extern TypeInfo t454_TI;
extern MethodInfo m22992_MI;
static void* t3035_RGCTXData[3] = 
{
	&m16970_MI,
	&t454_TI,
	&m22992_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3035_0_0_0;
extern Il2CppType t3035_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3035_TI;
extern Il2CppGenericClass t3035_GC;
extern TypeInfo t122_TI;
TypeInfo t3035_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3035_MIs, t3035_PIs, t3035_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3035_TI, t3035_ITIs, t3035_VT, &EmptyCustomAttributesCache, &t3035_TI, &t3035_0_0_0, &t3035_1_0_0, t3035_IOs, &t3035_GC, NULL, NULL, NULL, t3035_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3035)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5300_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>
extern MethodInfo m30532_MI;
static PropertyInfo t5300____Count_PropertyInfo = 
{
	&t5300_TI, "Count", &m30532_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30533_MI;
static PropertyInfo t5300____IsReadOnly_PropertyInfo = 
{
	&t5300_TI, "IsReadOnly", &m30533_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5300_PIs[] =
{
	&t5300____Count_PropertyInfo,
	&t5300____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5300_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30532_MI = 
{
	"get_Count", NULL, &t5300_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5300_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30533_MI = 
{
	"get_IsReadOnly", NULL, &t5300_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t454_0_0_0;
static ParameterInfo t5300_m30534_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t454_0_0_0},
};
extern TypeInfo t5300_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30534_MI = 
{
	"Add", NULL, &t5300_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5300_m30534_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5300_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30535_MI = 
{
	"Clear", NULL, &t5300_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t454_0_0_0;
static ParameterInfo t5300_m30536_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t454_0_0_0},
};
extern TypeInfo t5300_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30536_MI = 
{
	"Contains", NULL, &t5300_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5300_m30536_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3336_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5300_m30537_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3336_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5300_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30537_MI = 
{
	"CopyTo", NULL, &t5300_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5300_m30537_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t454_0_0_0;
static ParameterInfo t5300_m30538_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t454_0_0_0},
};
extern TypeInfo t5300_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30538_MI = 
{
	"Remove", NULL, &t5300_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5300_m30538_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5300_MIs[] =
{
	&m30532_MI,
	&m30533_MI,
	&m30534_MI,
	&m30535_MI,
	&m30536_MI,
	&m30537_MI,
	&m30538_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5302_TI;
static TypeInfo* t5300_ITIs[] = 
{
	&t703_TI,
	&t5302_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5300_0_0_0;
extern Il2CppType t5300_1_0_0;
struct t5300;
extern TypeInfo t5300_TI;
extern Il2CppGenericClass t5300_GC;
TypeInfo t5300_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5300_MIs, t5300_PIs, NULL, NULL, NULL, NULL, NULL, &t5300_TI, t5300_ITIs, NULL, &EmptyCustomAttributesCache, &t5300_TI, &t5300_0_0_0, &t5300_1_0_0, NULL, &t5300_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5302_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ObsoleteAttribute>
extern TypeInfo t5302_TI;
extern Il2CppType t4049_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30539_MI = 
{
	"GetEnumerator", NULL, &t5302_TI, &t4049_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5302_MIs[] =
{
	&m30539_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5302_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5302_0_0_0;
extern Il2CppType t5302_1_0_0;
struct t5302;
extern TypeInfo t5302_TI;
extern Il2CppGenericClass t5302_GC;
TypeInfo t5302_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5302_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5302_TI, t5302_ITIs, NULL, &EmptyCustomAttributesCache, &t5302_TI, &t5302_0_0_0, &t5302_1_0_0, NULL, &t5302_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5301_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.ObsoleteAttribute>
extern MethodInfo m30540_MI;
extern MethodInfo m30541_MI;
static PropertyInfo t5301____Item_PropertyInfo = 
{
	&t5301_TI, "Item", &m30540_MI, &m30541_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5301_PIs[] =
{
	&t5301____Item_PropertyInfo,
	NULL
};
extern Il2CppType t454_0_0_0;
static ParameterInfo t5301_m30542_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t454_0_0_0},
};
extern TypeInfo t5301_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30542_MI = 
{
	"IndexOf", NULL, &t5301_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5301_m30542_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t454_0_0_0;
static ParameterInfo t5301_m30543_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t454_0_0_0},
};
extern TypeInfo t5301_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30543_MI = 
{
	"Insert", NULL, &t5301_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5301_m30543_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5301_m30544_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5301_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30544_MI = 
{
	"RemoveAt", NULL, &t5301_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5301_m30544_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5301_m30540_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5301_TI;
extern Il2CppType t454_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30540_MI = 
{
	"get_Item", NULL, &t5301_TI, &t454_0_0_0, RuntimeInvoker_t25_t134, t5301_m30540_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t454_0_0_0;
static ParameterInfo t5301_m30541_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t454_0_0_0},
};
extern TypeInfo t5301_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30541_MI = 
{
	"set_Item", NULL, &t5301_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5301_m30541_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5301_MIs[] =
{
	&m30542_MI,
	&m30543_MI,
	&m30544_MI,
	&m30540_MI,
	&m30541_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5300_TI;
extern TypeInfo t5302_TI;
static TypeInfo* t5301_ITIs[] = 
{
	&t703_TI,
	&t5300_TI,
	&t5302_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5301_0_0_0;
extern Il2CppType t5301_1_0_0;
struct t5301;
extern TypeInfo t5301_TI;
extern Il2CppGenericClass t5301_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5301_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5301_MIs, t5301_PIs, NULL, NULL, NULL, NULL, NULL, &t5301_TI, t5301_ITIs, NULL, &t1518__CustomAttributeCache, &t5301_TI, &t5301_0_0_0, &t5301_1_0_0, NULL, &t5301_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4050_TI;

#include "t849.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo m30545_MI;
static PropertyInfo t4050____Current_PropertyInfo = 
{
	&t4050_TI, "Current", &m30545_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4050_PIs[] =
{
	&t4050____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4050_TI;
extern Il2CppType t849_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30545_MI = 
{
	"get_Current", NULL, &t4050_TI, &t849_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4050_MIs[] =
{
	&m30545_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4050_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4050_0_0_0;
extern Il2CppType t4050_1_0_0;
struct t4050;
extern TypeInfo t4050_TI;
extern Il2CppGenericClass t4050_GC;
TypeInfo t4050_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4050_MIs, t4050_PIs, NULL, NULL, NULL, NULL, NULL, &t4050_TI, t4050_ITIs, NULL, &EmptyCustomAttributesCache, &t4050_TI, &t4050_0_0_0, &t4050_1_0_0, NULL, &t4050_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3036.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3036_TI;
#include "t3036MD.h"

extern TypeInfo t3036_TI;
extern TypeInfo t849_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16975_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m23003_MI;
struct t122;
#define m23003(__this, p0, method) (t849 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m23003_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
extern Il2CppType t122_0_0_1;
FieldInfo t3036_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3036_TI, offsetof(t3036, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3036_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3036_TI, offsetof(t3036, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3036_FIs[] =
{
	&t3036_f0_FieldInfo,
	&t3036_f1_FieldInfo,
	NULL
};
extern MethodInfo m16972_MI;
static PropertyInfo t3036____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3036_TI, "System.Collections.IEnumerator.Current", &m16972_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16975_MI;
static PropertyInfo t3036____Current_PropertyInfo = 
{
	&t3036_TI, "Current", &m16975_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3036_PIs[] =
{
	&t3036____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3036____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3036_m16971_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3036_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16971_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3036_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3036_m16971_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3036_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16972_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3036_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3036_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16973_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3036_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3036_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16974_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3036_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3036_TI;
extern Il2CppType t849_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16975_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3036_TI, &t849_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3036_MIs[] =
{
	&m16971_MI,
	&m16972_MI,
	&m16973_MI,
	&m16974_MI,
	&m16975_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16972_MI;
extern MethodInfo m16974_MI;
extern MethodInfo m16973_MI;
extern MethodInfo m16975_MI;
static MethodInfo* t3036_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16972_MI,
	&m16974_MI,
	&m16973_MI,
	&m16975_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4050_TI;
static TypeInfo* t3036_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4050_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4050_TI;
static Il2CppInterfaceOffsetPair t3036_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4050_TI, 7},
};
extern MethodInfo m16975_MI;
extern TypeInfo t849_TI;
extern MethodInfo m23003_MI;
static void* t3036_RGCTXData[3] = 
{
	&m16975_MI,
	&t849_TI,
	&m23003_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3036_0_0_0;
extern Il2CppType t3036_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3036_TI;
extern Il2CppGenericClass t3036_GC;
extern TypeInfo t122_TI;
TypeInfo t3036_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3036_MIs, t3036_PIs, t3036_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3036_TI, t3036_ITIs, t3036_VT, &EmptyCustomAttributesCache, &t3036_TI, &t3036_0_0_0, &t3036_1_0_0, t3036_IOs, &t3036_GC, NULL, NULL, NULL, t3036_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3036)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5303_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo m30546_MI;
static PropertyInfo t5303____Count_PropertyInfo = 
{
	&t5303_TI, "Count", &m30546_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30547_MI;
static PropertyInfo t5303____IsReadOnly_PropertyInfo = 
{
	&t5303_TI, "IsReadOnly", &m30547_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5303_PIs[] =
{
	&t5303____Count_PropertyInfo,
	&t5303____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5303_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30546_MI = 
{
	"get_Count", NULL, &t5303_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5303_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30547_MI = 
{
	"get_IsReadOnly", NULL, &t5303_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t849_0_0_0;
static ParameterInfo t5303_m30548_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t849_0_0_0},
};
extern TypeInfo t5303_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30548_MI = 
{
	"Add", NULL, &t5303_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5303_m30548_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5303_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30549_MI = 
{
	"Clear", NULL, &t5303_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t849_0_0_0;
static ParameterInfo t5303_m30550_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t849_0_0_0},
};
extern TypeInfo t5303_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30550_MI = 
{
	"Contains", NULL, &t5303_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5303_m30550_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3337_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5303_m30551_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3337_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5303_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30551_MI = 
{
	"CopyTo", NULL, &t5303_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5303_m30551_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t849_0_0_0;
static ParameterInfo t5303_m30552_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t849_0_0_0},
};
extern TypeInfo t5303_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30552_MI = 
{
	"Remove", NULL, &t5303_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5303_m30552_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5303_MIs[] =
{
	&m30546_MI,
	&m30547_MI,
	&m30548_MI,
	&m30549_MI,
	&m30550_MI,
	&m30551_MI,
	&m30552_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5305_TI;
static TypeInfo* t5303_ITIs[] = 
{
	&t703_TI,
	&t5305_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5303_0_0_0;
extern Il2CppType t5303_1_0_0;
struct t5303;
extern TypeInfo t5303_TI;
extern Il2CppGenericClass t5303_GC;
TypeInfo t5303_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5303_MIs, t5303_PIs, NULL, NULL, NULL, NULL, NULL, &t5303_TI, t5303_ITIs, NULL, &EmptyCustomAttributesCache, &t5303_TI, &t5303_0_0_0, &t5303_1_0_0, NULL, &t5303_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5305_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DllImportAttribute>
extern TypeInfo t5305_TI;
extern Il2CppType t4050_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30553_MI = 
{
	"GetEnumerator", NULL, &t5305_TI, &t4050_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5305_MIs[] =
{
	&m30553_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5305_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5305_0_0_0;
extern Il2CppType t5305_1_0_0;
struct t5305;
extern TypeInfo t5305_TI;
extern Il2CppGenericClass t5305_GC;
TypeInfo t5305_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5305_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5305_TI, t5305_ITIs, NULL, &EmptyCustomAttributesCache, &t5305_TI, &t5305_0_0_0, &t5305_1_0_0, NULL, &t5305_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5304_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo m30554_MI;
extern MethodInfo m30555_MI;
static PropertyInfo t5304____Item_PropertyInfo = 
{
	&t5304_TI, "Item", &m30554_MI, &m30555_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5304_PIs[] =
{
	&t5304____Item_PropertyInfo,
	NULL
};
extern Il2CppType t849_0_0_0;
static ParameterInfo t5304_m30556_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t849_0_0_0},
};
extern TypeInfo t5304_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30556_MI = 
{
	"IndexOf", NULL, &t5304_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5304_m30556_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t849_0_0_0;
static ParameterInfo t5304_m30557_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t849_0_0_0},
};
extern TypeInfo t5304_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30557_MI = 
{
	"Insert", NULL, &t5304_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5304_m30557_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5304_m30558_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5304_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30558_MI = 
{
	"RemoveAt", NULL, &t5304_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5304_m30558_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5304_m30554_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5304_TI;
extern Il2CppType t849_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30554_MI = 
{
	"get_Item", NULL, &t5304_TI, &t849_0_0_0, RuntimeInvoker_t25_t134, t5304_m30554_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t849_0_0_0;
static ParameterInfo t5304_m30555_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t849_0_0_0},
};
extern TypeInfo t5304_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30555_MI = 
{
	"set_Item", NULL, &t5304_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5304_m30555_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5304_MIs[] =
{
	&m30556_MI,
	&m30557_MI,
	&m30558_MI,
	&m30554_MI,
	&m30555_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5303_TI;
extern TypeInfo t5305_TI;
static TypeInfo* t5304_ITIs[] = 
{
	&t703_TI,
	&t5303_TI,
	&t5305_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5304_0_0_0;
extern Il2CppType t5304_1_0_0;
struct t5304;
extern TypeInfo t5304_TI;
extern Il2CppGenericClass t5304_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5304_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5304_MIs, t5304_PIs, NULL, NULL, NULL, NULL, NULL, &t5304_TI, t5304_ITIs, NULL, &t1518__CustomAttributeCache, &t5304_TI, &t5304_0_0_0, &t5304_1_0_0, NULL, &t5304_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4051_TI;

#include "t852.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern MethodInfo m30559_MI;
static PropertyInfo t4051____Current_PropertyInfo = 
{
	&t4051_TI, "Current", &m30559_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4051_PIs[] =
{
	&t4051____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4051_TI;
extern Il2CppType t852_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30559_MI = 
{
	"get_Current", NULL, &t4051_TI, &t852_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4051_MIs[] =
{
	&m30559_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4051_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4051_0_0_0;
extern Il2CppType t4051_1_0_0;
struct t4051;
extern TypeInfo t4051_TI;
extern Il2CppGenericClass t4051_GC;
TypeInfo t4051_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4051_MIs, t4051_PIs, NULL, NULL, NULL, NULL, NULL, &t4051_TI, t4051_ITIs, NULL, &EmptyCustomAttributesCache, &t4051_TI, &t4051_0_0_0, &t4051_1_0_0, NULL, &t4051_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3037.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3037_TI;
#include "t3037MD.h"

extern TypeInfo t3037_TI;
extern TypeInfo t852_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16980_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m23014_MI;
struct t122;
#define m23014(__this, p0, method) (t852 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m23014_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern Il2CppType t122_0_0_1;
FieldInfo t3037_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3037_TI, offsetof(t3037, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3037_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3037_TI, offsetof(t3037, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3037_FIs[] =
{
	&t3037_f0_FieldInfo,
	&t3037_f1_FieldInfo,
	NULL
};
extern MethodInfo m16977_MI;
static PropertyInfo t3037____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3037_TI, "System.Collections.IEnumerator.Current", &m16977_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16980_MI;
static PropertyInfo t3037____Current_PropertyInfo = 
{
	&t3037_TI, "Current", &m16980_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3037_PIs[] =
{
	&t3037____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3037____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3037_m16976_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3037_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16976_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3037_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3037_m16976_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3037_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16977_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3037_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3037_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16978_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3037_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3037_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16979_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3037_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3037_TI;
extern Il2CppType t852_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16980_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3037_TI, &t852_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3037_MIs[] =
{
	&m16976_MI,
	&m16977_MI,
	&m16978_MI,
	&m16979_MI,
	&m16980_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16977_MI;
extern MethodInfo m16979_MI;
extern MethodInfo m16978_MI;
extern MethodInfo m16980_MI;
static MethodInfo* t3037_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16977_MI,
	&m16979_MI,
	&m16978_MI,
	&m16980_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4051_TI;
static TypeInfo* t3037_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4051_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4051_TI;
static Il2CppInterfaceOffsetPair t3037_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4051_TI, 7},
};
extern MethodInfo m16980_MI;
extern TypeInfo t852_TI;
extern MethodInfo m23014_MI;
static void* t3037_RGCTXData[3] = 
{
	&m16980_MI,
	&t852_TI,
	&m23014_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3037_0_0_0;
extern Il2CppType t3037_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3037_TI;
extern Il2CppGenericClass t3037_GC;
extern TypeInfo t122_TI;
TypeInfo t3037_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3037_MIs, t3037_PIs, t3037_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3037_TI, t3037_ITIs, t3037_VT, &EmptyCustomAttributesCache, &t3037_TI, &t3037_0_0_0, &t3037_1_0_0, t3037_IOs, &t3037_GC, NULL, NULL, NULL, t3037_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3037)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5306_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern MethodInfo m30560_MI;
static PropertyInfo t5306____Count_PropertyInfo = 
{
	&t5306_TI, "Count", &m30560_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30561_MI;
static PropertyInfo t5306____IsReadOnly_PropertyInfo = 
{
	&t5306_TI, "IsReadOnly", &m30561_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5306_PIs[] =
{
	&t5306____Count_PropertyInfo,
	&t5306____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5306_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30560_MI = 
{
	"get_Count", NULL, &t5306_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5306_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30561_MI = 
{
	"get_IsReadOnly", NULL, &t5306_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t852_0_0_0;
static ParameterInfo t5306_m30562_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t852_0_0_0},
};
extern TypeInfo t5306_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30562_MI = 
{
	"Add", NULL, &t5306_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5306_m30562_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5306_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30563_MI = 
{
	"Clear", NULL, &t5306_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t852_0_0_0;
static ParameterInfo t5306_m30564_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t852_0_0_0},
};
extern TypeInfo t5306_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30564_MI = 
{
	"Contains", NULL, &t5306_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5306_m30564_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3338_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5306_m30565_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3338_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5306_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30565_MI = 
{
	"CopyTo", NULL, &t5306_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5306_m30565_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t852_0_0_0;
static ParameterInfo t5306_m30566_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t852_0_0_0},
};
extern TypeInfo t5306_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30566_MI = 
{
	"Remove", NULL, &t5306_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5306_m30566_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5306_MIs[] =
{
	&m30560_MI,
	&m30561_MI,
	&m30562_MI,
	&m30563_MI,
	&m30564_MI,
	&m30565_MI,
	&m30566_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5308_TI;
static TypeInfo* t5306_ITIs[] = 
{
	&t703_TI,
	&t5308_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5306_0_0_0;
extern Il2CppType t5306_1_0_0;
struct t5306;
extern TypeInfo t5306_TI;
extern Il2CppGenericClass t5306_GC;
TypeInfo t5306_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5306_MIs, t5306_PIs, NULL, NULL, NULL, NULL, NULL, &t5306_TI, t5306_ITIs, NULL, &EmptyCustomAttributesCache, &t5306_TI, &t5306_0_0_0, &t5306_1_0_0, NULL, &t5306_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5308_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern TypeInfo t5308_TI;
extern Il2CppType t4051_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30567_MI = 
{
	"GetEnumerator", NULL, &t5308_TI, &t4051_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5308_MIs[] =
{
	&m30567_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5308_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5308_0_0_0;
extern Il2CppType t5308_1_0_0;
struct t5308;
extern TypeInfo t5308_TI;
extern Il2CppGenericClass t5308_GC;
TypeInfo t5308_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5308_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5308_TI, t5308_ITIs, NULL, &EmptyCustomAttributesCache, &t5308_TI, &t5308_0_0_0, &t5308_1_0_0, NULL, &t5308_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5307_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern MethodInfo m30568_MI;
extern MethodInfo m30569_MI;
static PropertyInfo t5307____Item_PropertyInfo = 
{
	&t5307_TI, "Item", &m30568_MI, &m30569_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5307_PIs[] =
{
	&t5307____Item_PropertyInfo,
	NULL
};
extern Il2CppType t852_0_0_0;
static ParameterInfo t5307_m30570_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t852_0_0_0},
};
extern TypeInfo t5307_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30570_MI = 
{
	"IndexOf", NULL, &t5307_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5307_m30570_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t852_0_0_0;
static ParameterInfo t5307_m30571_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t852_0_0_0},
};
extern TypeInfo t5307_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30571_MI = 
{
	"Insert", NULL, &t5307_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5307_m30571_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5307_m30572_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5307_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30572_MI = 
{
	"RemoveAt", NULL, &t5307_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5307_m30572_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5307_m30568_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5307_TI;
extern Il2CppType t852_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30568_MI = 
{
	"get_Item", NULL, &t5307_TI, &t852_0_0_0, RuntimeInvoker_t25_t134, t5307_m30568_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t852_0_0_0;
static ParameterInfo t5307_m30569_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t852_0_0_0},
};
extern TypeInfo t5307_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30569_MI = 
{
	"set_Item", NULL, &t5307_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5307_m30569_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5307_MIs[] =
{
	&m30570_MI,
	&m30571_MI,
	&m30572_MI,
	&m30568_MI,
	&m30569_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5306_TI;
extern TypeInfo t5308_TI;
static TypeInfo* t5307_ITIs[] = 
{
	&t703_TI,
	&t5306_TI,
	&t5308_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5307_0_0_0;
extern Il2CppType t5307_1_0_0;
struct t5307;
extern TypeInfo t5307_TI;
extern Il2CppGenericClass t5307_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5307_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5307_MIs, t5307_PIs, NULL, NULL, NULL, NULL, NULL, &t5307_TI, t5307_ITIs, NULL, &t1518__CustomAttributeCache, &t5307_TI, &t5307_0_0_0, &t5307_1_0_0, NULL, &t5307_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4052_TI;

#include "t854.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InAttribute>
extern MethodInfo m30573_MI;
static PropertyInfo t4052____Current_PropertyInfo = 
{
	&t4052_TI, "Current", &m30573_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4052_PIs[] =
{
	&t4052____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4052_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30573_MI = 
{
	"get_Current", NULL, &t4052_TI, &t854_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4052_MIs[] =
{
	&m30573_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4052_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4052_0_0_0;
extern Il2CppType t4052_1_0_0;
struct t4052;
extern TypeInfo t4052_TI;
extern Il2CppGenericClass t4052_GC;
TypeInfo t4052_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4052_MIs, t4052_PIs, NULL, NULL, NULL, NULL, NULL, &t4052_TI, t4052_ITIs, NULL, &EmptyCustomAttributesCache, &t4052_TI, &t4052_0_0_0, &t4052_1_0_0, NULL, &t4052_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3038.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3038_TI;
#include "t3038MD.h"

extern TypeInfo t3038_TI;
extern TypeInfo t854_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16985_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m23025_MI;
struct t122;
#define m23025(__this, p0, method) (t854 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m23025_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>
extern Il2CppType t122_0_0_1;
FieldInfo t3038_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3038_TI, offsetof(t3038, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3038_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3038_TI, offsetof(t3038, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3038_FIs[] =
{
	&t3038_f0_FieldInfo,
	&t3038_f1_FieldInfo,
	NULL
};
extern MethodInfo m16982_MI;
static PropertyInfo t3038____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3038_TI, "System.Collections.IEnumerator.Current", &m16982_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16985_MI;
static PropertyInfo t3038____Current_PropertyInfo = 
{
	&t3038_TI, "Current", &m16985_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3038_PIs[] =
{
	&t3038____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3038____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3038_m16981_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3038_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16981_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3038_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3038_m16981_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3038_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16982_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3038_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3038_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16983_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3038_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3038_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16984_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3038_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3038_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16985_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3038_TI, &t854_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3038_MIs[] =
{
	&m16981_MI,
	&m16982_MI,
	&m16983_MI,
	&m16984_MI,
	&m16985_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16982_MI;
extern MethodInfo m16984_MI;
extern MethodInfo m16983_MI;
extern MethodInfo m16985_MI;
static MethodInfo* t3038_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16982_MI,
	&m16984_MI,
	&m16983_MI,
	&m16985_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4052_TI;
static TypeInfo* t3038_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4052_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4052_TI;
static Il2CppInterfaceOffsetPair t3038_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4052_TI, 7},
};
extern MethodInfo m16985_MI;
extern TypeInfo t854_TI;
extern MethodInfo m23025_MI;
static void* t3038_RGCTXData[3] = 
{
	&m16985_MI,
	&t854_TI,
	&m23025_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3038_0_0_0;
extern Il2CppType t3038_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3038_TI;
extern Il2CppGenericClass t3038_GC;
extern TypeInfo t122_TI;
TypeInfo t3038_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3038_MIs, t3038_PIs, t3038_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3038_TI, t3038_ITIs, t3038_VT, &EmptyCustomAttributesCache, &t3038_TI, &t3038_0_0_0, &t3038_1_0_0, t3038_IOs, &t3038_GC, NULL, NULL, NULL, t3038_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3038)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5309_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>
extern MethodInfo m30574_MI;
static PropertyInfo t5309____Count_PropertyInfo = 
{
	&t5309_TI, "Count", &m30574_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30575_MI;
static PropertyInfo t5309____IsReadOnly_PropertyInfo = 
{
	&t5309_TI, "IsReadOnly", &m30575_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5309_PIs[] =
{
	&t5309____Count_PropertyInfo,
	&t5309____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5309_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30574_MI = 
{
	"get_Count", NULL, &t5309_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5309_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m30575_MI = 
{
	"get_IsReadOnly", NULL, &t5309_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t854_0_0_0;
static ParameterInfo t5309_m30576_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t854_0_0_0},
};
extern TypeInfo t5309_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30576_MI = 
{
	"Add", NULL, &t5309_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5309_m30576_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5309_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m30577_MI = 
{
	"Clear", NULL, &t5309_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t854_0_0_0;
static ParameterInfo t5309_m30578_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t854_0_0_0},
};
extern TypeInfo t5309_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30578_MI = 
{
	"Contains", NULL, &t5309_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5309_m30578_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3339_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5309_m30579_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3339_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5309_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30579_MI = 
{
	"CopyTo", NULL, &t5309_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5309_m30579_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t854_0_0_0;
static ParameterInfo t5309_m30580_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t854_0_0_0},
};
extern TypeInfo t5309_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30580_MI = 
{
	"Remove", NULL, &t5309_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5309_m30580_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5309_MIs[] =
{
	&m30574_MI,
	&m30575_MI,
	&m30576_MI,
	&m30577_MI,
	&m30578_MI,
	&m30579_MI,
	&m30580_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5311_TI;
static TypeInfo* t5309_ITIs[] = 
{
	&t703_TI,
	&t5311_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5309_0_0_0;
extern Il2CppType t5309_1_0_0;
struct t5309;
extern TypeInfo t5309_TI;
extern Il2CppGenericClass t5309_GC;
TypeInfo t5309_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5309_MIs, t5309_PIs, NULL, NULL, NULL, NULL, NULL, &t5309_TI, t5309_ITIs, NULL, &EmptyCustomAttributesCache, &t5309_TI, &t5309_0_0_0, &t5309_1_0_0, NULL, &t5309_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5311_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InAttribute>
extern TypeInfo t5311_TI;
extern Il2CppType t4052_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30581_MI = 
{
	"GetEnumerator", NULL, &t5311_TI, &t4052_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5311_MIs[] =
{
	&m30581_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5311_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5311_0_0_0;
extern Il2CppType t5311_1_0_0;
struct t5311;
extern TypeInfo t5311_TI;
extern Il2CppGenericClass t5311_GC;
TypeInfo t5311_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5311_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5311_TI, t5311_ITIs, NULL, &EmptyCustomAttributesCache, &t5311_TI, &t5311_0_0_0, &t5311_1_0_0, NULL, &t5311_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5310_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>
extern MethodInfo m30582_MI;
extern MethodInfo m30583_MI;
static PropertyInfo t5310____Item_PropertyInfo = 
{
	&t5310_TI, "Item", &m30582_MI, &m30583_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5310_PIs[] =
{
	&t5310____Item_PropertyInfo,
	NULL
};
extern Il2CppType t854_0_0_0;
static ParameterInfo t5310_m30584_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t854_0_0_0},
};
extern TypeInfo t5310_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30584_MI = 
{
	"IndexOf", NULL, &t5310_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5310_m30584_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t854_0_0_0;
static ParameterInfo t5310_m30585_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t854_0_0_0},
};
extern TypeInfo t5310_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30585_MI = 
{
	"Insert", NULL, &t5310_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5310_m30585_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5310_m30586_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5310_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30586_MI = 
{
	"RemoveAt", NULL, &t5310_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5310_m30586_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5310_m30582_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5310_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m30582_MI = 
{
	"get_Item", NULL, &t5310_TI, &t854_0_0_0, RuntimeInvoker_t25_t134, t5310_m30582_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t854_0_0_0;
static ParameterInfo t5310_m30583_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t854_0_0_0},
};
extern TypeInfo t5310_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30583_MI = 
{
	"set_Item", NULL, &t5310_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5310_m30583_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5310_MIs[] =
{
	&m30584_MI,
	&m30585_MI,
	&m30586_MI,
	&m30582_MI,
	&m30583_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5309_TI;
extern TypeInfo t5311_TI;
static TypeInfo* t5310_ITIs[] = 
{
	&t703_TI,
	&t5309_TI,
	&t5311_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5310_0_0_0;
extern Il2CppType t5310_1_0_0;
struct t5310;
extern TypeInfo t5310_TI;
extern Il2CppGenericClass t5310_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5310_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5310_MIs, t5310_PIs, NULL, NULL, NULL, NULL, NULL, &t5310_TI, t5310_ITIs, NULL, &t1518__CustomAttributeCache, &t5310_TI, &t5310_0_0_0, &t5310_1_0_0, NULL, &t5310_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4053_TI;

#include "t540.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GuidAttribute>
extern MethodInfo m30587_MI;
static PropertyInfo t4053____Current_PropertyInfo = 
{
	&t4053_TI, "Current", &m30587_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4053_PIs[] =
{
	&t4053____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4053_TI;
extern Il2CppType t540_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m30587_MI = 
{
	"get_Current", NULL, &t4053_TI, &t540_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4053_MIs[] =
{
	&m30587_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4053_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4053_0_0_0;
extern Il2CppType t4053_1_0_0;
struct t4053;
extern TypeInfo t4053_TI;
extern Il2CppGenericClass t4053_GC;
TypeInfo t4053_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4053_MIs, t4053_PIs, NULL, NULL, NULL, NULL, NULL, &t4053_TI, t4053_ITIs, NULL, &EmptyCustomAttributesCache, &t4053_TI, &t4053_0_0_0, &t4053_1_0_0, NULL, &t4053_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3039.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3039_TI;
#include "t3039MD.h"

extern TypeInfo t3039_TI;
extern TypeInfo t540_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m16990_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m23036_MI;
struct t122;
#define m23036(__this, p0, method) (t540 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m23036_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>
extern Il2CppType t122_0_0_1;
FieldInfo t3039_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3039_TI, offsetof(t3039, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3039_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3039_TI, offsetof(t3039, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3039_FIs[] =
{
	&t3039_f0_FieldInfo,
	&t3039_f1_FieldInfo,
	NULL
};
extern MethodInfo m16987_MI;
static PropertyInfo t3039____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3039_TI, "System.Collections.IEnumerator.Current", &m16987_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16990_MI;
static PropertyInfo t3039____Current_PropertyInfo = 
{
	&t3039_TI, "Current", &m16990_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3039_PIs[] =
{
	&t3039____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3039____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3039_m16986_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3039_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16986_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3039_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3039_m16986_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3039_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16987_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3039_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3039_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m16988_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3039_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3039_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m16989_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3039_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3039_TI;
extern Il2CppType t540_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m16990_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3039_TI, &t540_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3039_MIs[] =
{
	&m16986_MI,
	&m16987_MI,
	&m16988_MI,
	&m16989_MI,
	&m16990_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m16987_MI;
extern MethodInfo m16989_MI;
extern MethodInfo m16988_MI;
extern MethodInfo m16990_MI;
static MethodInfo* t3039_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m16987_MI,
	&m16989_MI,
	&m16988_MI,
	&m16990_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4053_TI;
static TypeInfo* t3039_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4053_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4053_TI;
static Il2CppInterfaceOffsetPair t3039_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4053_TI, 7},
};
extern MethodInfo m16990_MI;
extern TypeInfo t540_TI;
extern MethodInfo m23036_MI;
static void* t3039_RGCTXData[3] = 
{
	&m16990_MI,
	&t540_TI,
	&m23036_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3039_0_0_0;
extern Il2CppType t3039_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3039_TI;
extern Il2CppGenericClass t3039_GC;
extern TypeInfo t122_TI;
TypeInfo t3039_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3039_MIs, t3039_PIs, t3039_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3039_TI, t3039_ITIs, t3039_VT, &EmptyCustomAttributesCache, &t3039_TI, &t3039_0_0_0, &t3039_1_0_0, t3039_IOs, &t3039_GC, NULL, NULL, NULL, t3039_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3039)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
