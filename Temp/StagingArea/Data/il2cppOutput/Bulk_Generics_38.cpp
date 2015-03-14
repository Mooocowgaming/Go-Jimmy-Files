#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t3211.h"
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
extern TypeInfo t3211_TI;
#include "t3211MD.h"

#include "t25.h"
#include "t1362.h"
#include "t134.h"
#include "t27.h"
#include "t1387.h"
#include "t123.h"
#include "t122.h"
#include "t125.h"
extern TypeInfo t3211_TI;
extern TypeInfo t1362_TI;
extern TypeInfo t1387_TI;
#include "t1387MD.h"
#include "t122MD.h"
extern MethodInfo m17925_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m24756_MI;
struct t122;
#include "t1351.h"
 int32_t m24756 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m24756_MI;


extern MethodInfo m17921_MI;
 void m17921 (t3211 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17921_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m17922_MI;
 t25 * m17922 (t3211 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17922_MI);
	{
		int32_t L_0 = m17925(__this, &m17925_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t1362_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m17923_MI;
 void m17923 (t3211 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17923_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m17924_MI;
 bool m17924 (t3211 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17924_MI);
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
extern MethodInfo m17925_MI;
 int32_t m17925 (t3211 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17925_MI);
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
		int32_t L_8 = m24756(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24756_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTimeKind>
extern Il2CppType t122_0_0_1;
FieldInfo t3211_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3211_TI, offsetof(t3211, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3211_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3211_TI, offsetof(t3211, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3211_FIs[] =
{
	&t3211_f0_FieldInfo,
	&t3211_f1_FieldInfo,
	NULL
};
extern MethodInfo m17922_MI;
static PropertyInfo t3211____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3211_TI, "System.Collections.IEnumerator.Current", &m17922_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m17925_MI;
static PropertyInfo t3211____Current_PropertyInfo = 
{
	&t3211_TI, "Current", &m17925_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3211_PIs[] =
{
	&t3211____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3211____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3211_m17921_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3211_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17921_MI = 
{
	".ctor", (methodPointerType)&m17921, &t3211_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3211_m17921_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3211_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17922_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m17922, &t3211_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3211_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17923_MI = 
{
	"Dispose", (methodPointerType)&m17923, &t3211_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3211_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m17924_MI = 
{
	"MoveNext", (methodPointerType)&m17924, &t3211_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3211_TI;
extern Il2CppType t1362_0_0_0;
extern void* RuntimeInvoker_t1362 (MethodInfo* method, void* obj, void** args);
MethodInfo m17925_MI = 
{
	"get_Current", (methodPointerType)&m17925, &t3211_TI, &t1362_0_0_0, RuntimeInvoker_t1362, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3211_MIs[] =
{
	&m17921_MI,
	&m17922_MI,
	&m17923_MI,
	&m17924_MI,
	&m17925_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m17922_MI;
extern MethodInfo m17924_MI;
extern MethodInfo m17923_MI;
extern MethodInfo m17925_MI;
static MethodInfo* t3211_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m17922_MI,
	&m17924_MI,
	&m17923_MI,
	&m17925_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4209_TI;
static TypeInfo* t3211_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4209_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4209_TI;
static Il2CppInterfaceOffsetPair t3211_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4209_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3211_0_0_0;
extern Il2CppType t3211_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3211_TI;
extern Il2CppGenericClass t3211_GC;
extern TypeInfo t122_TI;
TypeInfo t3211_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3211_MIs, t3211_PIs, t3211_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3211_TI, t3211_ITIs, t3211_VT, &EmptyCustomAttributesCache, &t3211_TI, &t3211_0_0_0, &t3211_1_0_0, t3211_IOs, &t3211_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3211)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5774_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTimeKind>
extern MethodInfo m32773_MI;
static PropertyInfo t5774____Count_PropertyInfo = 
{
	&t5774_TI, "Count", &m32773_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32774_MI;
static PropertyInfo t5774____IsReadOnly_PropertyInfo = 
{
	&t5774_TI, "IsReadOnly", &m32774_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5774_PIs[] =
{
	&t5774____Count_PropertyInfo,
	&t5774____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5774_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32773_MI = 
{
	"get_Count", NULL, &t5774_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5774_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m32774_MI = 
{
	"get_IsReadOnly", NULL, &t5774_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1362_0_0_0;
static ParameterInfo t5774_m32775_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1362_0_0_0},
};
extern TypeInfo t5774_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32775_MI = 
{
	"Add", NULL, &t5774_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5774_m32775_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5774_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m32776_MI = 
{
	"Clear", NULL, &t5774_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1362_0_0_0;
static ParameterInfo t5774_m32777_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1362_0_0_0},
};
extern TypeInfo t5774_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32777_MI = 
{
	"Contains", NULL, &t5774_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t5774_m32777_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3470_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5774_m32778_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3470_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5774_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32778_MI = 
{
	"CopyTo", NULL, &t5774_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5774_m32778_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1362_0_0_0;
static ParameterInfo t5774_m32779_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1362_0_0_0},
};
extern TypeInfo t5774_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32779_MI = 
{
	"Remove", NULL, &t5774_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t5774_m32779_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5774_MIs[] =
{
	&m32773_MI,
	&m32774_MI,
	&m32775_MI,
	&m32776_MI,
	&m32777_MI,
	&m32778_MI,
	&m32779_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5776_TI;
static TypeInfo* t5774_ITIs[] = 
{
	&t703_TI,
	&t5776_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5774_0_0_0;
extern Il2CppType t5774_1_0_0;
struct t5774;
extern TypeInfo t5774_TI;
extern Il2CppGenericClass t5774_GC;
TypeInfo t5774_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5774_MIs, t5774_PIs, NULL, NULL, NULL, NULL, NULL, &t5774_TI, t5774_ITIs, NULL, &EmptyCustomAttributesCache, &t5774_TI, &t5774_0_0_0, &t5774_1_0_0, NULL, &t5774_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5776_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTimeKind>
extern TypeInfo t5776_TI;
extern Il2CppType t4209_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32780_MI = 
{
	"GetEnumerator", NULL, &t5776_TI, &t4209_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5776_MIs[] =
{
	&m32780_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5776_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5776_0_0_0;
extern Il2CppType t5776_1_0_0;
struct t5776;
extern TypeInfo t5776_TI;
extern Il2CppGenericClass t5776_GC;
TypeInfo t5776_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5776_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5776_TI, t5776_ITIs, NULL, &EmptyCustomAttributesCache, &t5776_TI, &t5776_0_0_0, &t5776_1_0_0, NULL, &t5776_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5775_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.DateTimeKind>
extern MethodInfo m32781_MI;
extern MethodInfo m32782_MI;
static PropertyInfo t5775____Item_PropertyInfo = 
{
	&t5775_TI, "Item", &m32781_MI, &m32782_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5775_PIs[] =
{
	&t5775____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1362_0_0_0;
static ParameterInfo t5775_m32783_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1362_0_0_0},
};
extern TypeInfo t5775_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32783_MI = 
{
	"IndexOf", NULL, &t5775_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t5775_m32783_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1362_0_0_0;
static ParameterInfo t5775_m32784_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1362_0_0_0},
};
extern TypeInfo t5775_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32784_MI = 
{
	"Insert", NULL, &t5775_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t5775_m32784_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5775_m32785_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5775_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32785_MI = 
{
	"RemoveAt", NULL, &t5775_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5775_m32785_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5775_m32781_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5775_TI;
extern Il2CppType t1362_0_0_0;
extern void* RuntimeInvoker_t1362_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32781_MI = 
{
	"get_Item", NULL, &t5775_TI, &t1362_0_0_0, RuntimeInvoker_t1362_t134, t5775_m32781_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1362_0_0_0;
static ParameterInfo t5775_m32782_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1362_0_0_0},
};
extern TypeInfo t5775_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32782_MI = 
{
	"set_Item", NULL, &t5775_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t5775_m32782_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5775_MIs[] =
{
	&m32783_MI,
	&m32784_MI,
	&m32785_MI,
	&m32781_MI,
	&m32782_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5774_TI;
extern TypeInfo t5776_TI;
static TypeInfo* t5775_ITIs[] = 
{
	&t703_TI,
	&t5774_TI,
	&t5776_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5775_0_0_0;
extern Il2CppType t5775_1_0_0;
struct t5775;
extern TypeInfo t5775_TI;
extern Il2CppGenericClass t5775_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5775_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5775_MIs, t5775_PIs, NULL, NULL, NULL, NULL, NULL, &t5775_TI, t5775_ITIs, NULL, &t1518__CustomAttributeCache, &t5775_TI, &t5775_0_0_0, &t5775_1_0_0, NULL, &t5775_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1672_TI;

#include "t1363.h"


// Metadata Definition System.IComparable`1<System.DateTimeOffset>
extern Il2CppType t1363_0_0_0;
static ParameterInfo t1672_m32786_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
};
extern TypeInfo t1672_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1363 (MethodInfo* method, void* obj, void** args);
MethodInfo m32786_MI = 
{
	"CompareTo", NULL, &t1672_TI, &t134_0_0_0, RuntimeInvoker_t134_t1363, t1672_m32786_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1672_MIs[] =
{
	&m32786_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1672_0_0_0;
extern Il2CppType t1672_1_0_0;
struct t1672;
extern TypeInfo t1672_TI;
extern Il2CppGenericClass t1672_GC;
TypeInfo t1672_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1672_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1672_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1672_TI, &t1672_0_0_0, &t1672_1_0_0, NULL, &t1672_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1673_TI;



// Metadata Definition System.IEquatable`1<System.DateTimeOffset>
extern Il2CppType t1363_0_0_0;
static ParameterInfo t1673_m32787_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
};
extern TypeInfo t1673_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t1363 (MethodInfo* method, void* obj, void** args);
MethodInfo m32787_MI = 
{
	"Equals", NULL, &t1673_TI, &t125_0_0_0, RuntimeInvoker_t125_t1363, t1673_m32787_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1673_MIs[] =
{
	&m32787_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1673_0_0_0;
extern Il2CppType t1673_1_0_0;
struct t1673;
extern TypeInfo t1673_TI;
extern Il2CppGenericClass t1673_GC;
TypeInfo t1673_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1673_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1673_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1673_TI, &t1673_0_0_0, &t1673_1_0_0, NULL, &t1673_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1670.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1670_TI;
#include "t1670MD.h"

extern TypeInfo t1363_TI;
extern TypeInfo t1672_TI;
extern TypeInfo t134_TI;
#include "t3212MD.h"
extern MethodInfo m17927_MI;
extern MethodInfo m32786_MI;


extern MethodInfo m8355_MI;
 void m8355 (t1670 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m8355_MI);
	{
		m17927(__this, &m17927_MI);
		return;
	}
}
extern MethodInfo m17926_MI;
 int32_t m17926 (t1670 * __this, t1363  p0, t1363  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17926_MI);
	int32_t G_B4_0 = 0;
	{
		t1363  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t1363_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t1363  L_2 = p1;
		t25 * L_3 = Box(InitializedTypeInfo(&t1363_TI), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		t1363  L_4 = p1;
		t25 * L_5 = Box(InitializedTypeInfo(&t1363_TI), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(InitializedTypeInfo(&t1363_TI), &(*(&p0))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, t1363  >::Invoke(&m32786_MI, Box(InitializedTypeInfo(&t1363_TI), &(*(&p0))), p1);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
extern TypeInfo t1670_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8355_MI = 
{
	".ctor", (methodPointerType)&m8355, &t1670_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1363_0_0_0;
extern Il2CppType t1363_0_0_0;
static ParameterInfo t1670_m17926_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
};
extern TypeInfo t1670_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1363_t1363 (MethodInfo* method, void* obj, void** args);
MethodInfo m17926_MI = 
{
	"Compare", (methodPointerType)&m17926, &t1670_TI, &t134_0_0_0, RuntimeInvoker_t134_t1363_t1363, t1670_m17926_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1670_MIs[] =
{
	&m8355_MI,
	&m17926_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m17926_MI;
extern MethodInfo m17929_MI;
extern MethodInfo m17926_MI;
static MethodInfo* t1670_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m17926_MI,
	&m17929_MI,
	&m17926_MI,
};
extern TypeInfo t5891_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t1670_IOs[] = 
{
	{ &t5891_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1670_0_0_0;
extern Il2CppType t1670_1_0_0;
extern TypeInfo t3212_TI;
struct t1670;
extern TypeInfo t1670_TI;
extern Il2CppGenericClass t1670_GC;
TypeInfo t1670_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericComparer`1", "System.Collections.Generic", t1670_MIs, NULL, NULL, NULL, &t3212_TI, NULL, NULL, &t1670_TI, NULL, t1670_VT, &EmptyCustomAttributesCache, &t1670_TI, &t1670_0_0_0, &t1670_1_0_0, t1670_IOs, &t1670_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1670), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t3212.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3212_TI;

#include "t131.h"
#include "t132.h"
#include "t941.h"
#include "t3213.h"
#include "t445.h"
extern TypeInfo t3212_TI;
extern TypeInfo t1672_TI;
extern TypeInfo t131_TI;
extern TypeInfo t1363_TI;
extern TypeInfo t125_TI;
extern TypeInfo t941_TI;
extern TypeInfo t637_TI;
extern TypeInfo t3213_TI;
extern TypeInfo t134_TI;
extern TypeInfo t445_TI;
#include "t25MD.h"
#include "t131MD.h"
#include "t1340MD.h"
#include "t3213MD.h"
#include "t445MD.h"
extern Il2CppType t1672_0_0_0;
extern Il2CppType t1363_0_0_0;
extern Il2CppType t941_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m17931_MI;
extern MethodInfo m32788_MI;
extern MethodInfo m6988_MI;


extern MethodInfo m17927_MI;
 void m17927 (t3212 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17927_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m17928_MI;
 void m17928 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17928_MI);
	t3213 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t3213 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t3213_TI));
	m17931(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m17931_MI);
	((t3212_SFs*)InitializedTypeInfo(&t3212_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m17929_MI;
 int32_t m17929 (t3212 * __this, t25 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17929_MI);
	int32_t G_B4_0 = 0;
	{
		if (p0)
		{
			goto IL_000b;
		}
	}
	{
		if (p1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (p1)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((t25 *)IsInst(p0, InitializedTypeInfo(&t1363_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t25 *)IsInst(p1, InitializedTypeInfo(&t1363_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t1363 , t1363  >::Invoke(&m32788_MI, __this, ((*(t1363 *)((t1363 *)UnBox (p0, InitializedTypeInfo(&t1363_TI))))), ((*(t1363 *)((t1363 *)UnBox (p1, InitializedTypeInfo(&t1363_TI))))));
		return L_0;
	}

IL_0033:
	{
		t445 * L_1 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m6988(L_1, &m6988_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m17930_MI;
 t3212 * m17930 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17930_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t3212_TI));
		return (((t3212_SFs*)InitializedTypeInfo(&t3212_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.DateTimeOffset>
extern Il2CppType t3212_0_0_49;
FieldInfo t3212_f0_FieldInfo = 
{
	"_default", &t3212_0_0_49, &t3212_TI, offsetof(t3212_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3212_FIs[] =
{
	&t3212_f0_FieldInfo,
	NULL
};
extern MethodInfo m17930_MI;
static PropertyInfo t3212____Default_PropertyInfo = 
{
	&t3212_TI, "Default", &m17930_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3212_PIs[] =
{
	&t3212____Default_PropertyInfo,
	NULL
};
extern TypeInfo t3212_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17927_MI = 
{
	".ctor", (methodPointerType)&m17927, &t3212_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3212_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17928_MI = 
{
	".cctor", (methodPointerType)&m17928, &t3212_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t3212_m17929_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t3212_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17929_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m17929, &t3212_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t3212_m17929_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1363_0_0_0;
extern Il2CppType t1363_0_0_0;
static ParameterInfo t3212_m32788_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
};
extern TypeInfo t3212_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1363_t1363 (MethodInfo* method, void* obj, void** args);
MethodInfo m32788_MI = 
{
	"Compare", NULL, &t3212_TI, &t134_0_0_0, RuntimeInvoker_t134_t1363_t1363, t3212_m32788_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3212_TI;
extern Il2CppType t3212_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17930_MI = 
{
	"get_Default", (methodPointerType)&m17930, &t3212_TI, &t3212_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3212_MIs[] =
{
	&m17927_MI,
	&m17928_MI,
	&m17929_MI,
	&m32788_MI,
	&m17930_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m32788_MI;
extern MethodInfo m17929_MI;
static MethodInfo* t3212_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m32788_MI,
	&m17929_MI,
	NULL,
};
extern TypeInfo t5891_TI;
extern TypeInfo t147_TI;
static TypeInfo* t3212_ITIs[] = 
{
	&t5891_TI,
	&t147_TI,
};
extern TypeInfo t5891_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t3212_IOs[] = 
{
	{ &t5891_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3212_0_0_0;
extern Il2CppType t3212_1_0_0;
extern TypeInfo t25_TI;
struct t3212;
extern TypeInfo t3212_TI;
extern Il2CppGenericClass t3212_GC;
TypeInfo t3212_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t3212_MIs, t3212_PIs, t3212_FIs, NULL, &t25_TI, NULL, NULL, &t3212_TI, t3212_ITIs, t3212_VT, &EmptyCustomAttributesCache, &t3212_TI, &t3212_0_0_0, &t3212_1_0_0, t3212_IOs, &t3212_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3212), 0, -1, sizeof(t3212_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5891_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.DateTimeOffset>
extern Il2CppType t1363_0_0_0;
extern Il2CppType t1363_0_0_0;
static ParameterInfo t5891_m32789_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
};
extern TypeInfo t5891_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1363_t1363 (MethodInfo* method, void* obj, void** args);
MethodInfo m32789_MI = 
{
	"Compare", NULL, &t5891_TI, &t134_0_0_0, RuntimeInvoker_t134_t1363_t1363, t5891_m32789_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5891_MIs[] =
{
	&m32789_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5891_0_0_0;
extern Il2CppType t5891_1_0_0;
struct t5891;
extern TypeInfo t5891_TI;
extern Il2CppGenericClass t5891_GC;
TypeInfo t5891_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t5891_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5891_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5891_TI, &t5891_0_0_0, &t5891_1_0_0, NULL, &t5891_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3213_TI;

extern TypeInfo t1363_TI;
extern TypeInfo t1672_TI;
extern TypeInfo t134_TI;
extern TypeInfo t143_TI;
extern TypeInfo t25_TI;
extern TypeInfo t445_TI;
extern MethodInfo m17927_MI;
extern MethodInfo m32786_MI;
extern MethodInfo m7828_MI;
extern MethodInfo m2409_MI;


extern MethodInfo m17931_MI;
 void m17931 (t3213 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17931_MI);
	{
		m17927(__this, &m17927_MI);
		return;
	}
}
extern MethodInfo m17932_MI;
 int32_t m17932 (t3213 * __this, t1363  p0, t1363  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17932_MI);
	int32_t G_B4_0 = 0;
	{
		t1363  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t1363_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t1363  L_2 = p1;
		t25 * L_3 = Box(InitializedTypeInfo(&t1363_TI), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		t1363  L_4 = p1;
		t25 * L_5 = Box(InitializedTypeInfo(&t1363_TI), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		t1363  L_6 = p0;
		t25 * L_7 = Box(InitializedTypeInfo(&t1363_TI), &L_6);
		if (!((t25*)IsInst(L_7, InitializedTypeInfo(&t1672_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t1363  L_8 = p0;
		t25 * L_9 = Box(InitializedTypeInfo(&t1363_TI), &L_8);
		NullCheck(((t25*)Castclass(L_9, InitializedTypeInfo(&t1672_TI))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t1363  >::Invoke(&m32786_MI, ((t25*)Castclass(L_9, InitializedTypeInfo(&t1672_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t1363  L_11 = p0;
		t25 * L_12 = Box(InitializedTypeInfo(&t1363_TI), &L_11);
		if (!((t25 *)IsInst(L_12, InitializedTypeInfo(&t143_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t1363  L_13 = p0;
		t25 * L_14 = Box(InitializedTypeInfo(&t1363_TI), &L_13);
		t1363  L_15 = p1;
		t25 * L_16 = Box(InitializedTypeInfo(&t1363_TI), &L_15);
		NullCheck(((t25 *)Castclass(L_14, InitializedTypeInfo(&t143_TI))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, t25 * >::Invoke(&m7828_MI, ((t25 *)Castclass(L_14, InitializedTypeInfo(&t143_TI))), L_16);
		return L_17;
	}

IL_0062:
	{
		t445 * L_18 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m2409(L_18, (t27*) &_stringLiteral558, &m2409_MI);
		il2cpp_codegen_raise_exception (L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
extern TypeInfo t3213_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17931_MI = 
{
	".ctor", (methodPointerType)&m17931, &t3213_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1363_0_0_0;
extern Il2CppType t1363_0_0_0;
static ParameterInfo t3213_m17932_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
};
extern TypeInfo t3213_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1363_t1363 (MethodInfo* method, void* obj, void** args);
MethodInfo m17932_MI = 
{
	"Compare", (methodPointerType)&m17932, &t3213_TI, &t134_0_0_0, RuntimeInvoker_t134_t1363_t1363, t3213_m17932_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3213_MIs[] =
{
	&m17931_MI,
	&m17932_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m17932_MI;
extern MethodInfo m17929_MI;
extern MethodInfo m17932_MI;
static MethodInfo* t3213_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m17932_MI,
	&m17929_MI,
	&m17932_MI,
};
extern TypeInfo t5891_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t3213_IOs[] = 
{
	{ &t5891_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3213_0_0_0;
extern Il2CppType t3213_1_0_0;
extern TypeInfo t3212_TI;
struct t3213;
extern TypeInfo t3213_TI;
extern Il2CppGenericClass t3213_GC;
extern TypeInfo t940_TI;
TypeInfo t3213_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t3213_MIs, NULL, NULL, NULL, &t3212_TI, NULL, &t940_TI, &t3213_TI, NULL, t3213_VT, &EmptyCustomAttributesCache, &t3213_TI, &t3213_0_0_0, &t3213_1_0_0, t3213_IOs, &t3213_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3213), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t1671.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1671_TI;
#include "t1671MD.h"

extern TypeInfo t1363_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t1673_TI;
extern TypeInfo t125_TI;
#include "t3214MD.h"
extern MethodInfo m17935_MI;
extern MethodInfo m456_MI;
extern MethodInfo m32787_MI;


extern MethodInfo m8356_MI;
 void m8356 (t1671 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m8356_MI);
	{
		m17935(__this, &m17935_MI);
		return;
	}
}
extern MethodInfo m17933_MI;
 int32_t m17933 (t1671 * __this, t1363  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17933_MI);
	{
		t1363  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t1363_TI), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&t1363_TI), &(*(&p0))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m456_MI, Box(InitializedTypeInfo(&t1363_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m17934_MI;
 bool m17934 (t1671 * __this, t1363  p0, t1363  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17934_MI);
	{
		t1363  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t1363_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1363  L_2 = p1;
		t25 * L_3 = Box(InitializedTypeInfo(&t1363_TI), &L_2);
		return ((((t25 *)L_3) == ((t25 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(InitializedTypeInfo(&t1363_TI), &(*(&p0))));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t1363  >::Invoke(&m32787_MI, Box(InitializedTypeInfo(&t1363_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
extern TypeInfo t1671_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8356_MI = 
{
	".ctor", (methodPointerType)&m8356, &t1671_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1363_0_0_0;
static ParameterInfo t1671_m17933_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
};
extern TypeInfo t1671_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1363 (MethodInfo* method, void* obj, void** args);
MethodInfo m17933_MI = 
{
	"GetHashCode", (methodPointerType)&m17933, &t1671_TI, &t134_0_0_0, RuntimeInvoker_t134_t1363, t1671_m17933_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1363_0_0_0;
extern Il2CppType t1363_0_0_0;
static ParameterInfo t1671_m17934_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
};
extern TypeInfo t1671_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t1363_t1363 (MethodInfo* method, void* obj, void** args);
MethodInfo m17934_MI = 
{
	"Equals", (methodPointerType)&m17934, &t1671_TI, &t125_0_0_0, RuntimeInvoker_t125_t1363_t1363, t1671_m17934_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1671_MIs[] =
{
	&m8356_MI,
	&m17933_MI,
	&m17934_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m17934_MI;
extern MethodInfo m17933_MI;
extern MethodInfo m17938_MI;
extern MethodInfo m17937_MI;
extern MethodInfo m17933_MI;
extern MethodInfo m17934_MI;
static MethodInfo* t1671_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m17934_MI,
	&m17933_MI,
	&m17938_MI,
	&m17937_MI,
	&m17933_MI,
	&m17934_MI,
};
extern TypeInfo t5892_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t1671_IOs[] = 
{
	{ &t5892_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1671_0_0_0;
extern Il2CppType t1671_1_0_0;
extern TypeInfo t3214_TI;
struct t1671;
extern TypeInfo t1671_TI;
extern Il2CppGenericClass t1671_GC;
TypeInfo t1671_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t1671_MIs, NULL, NULL, NULL, &t3214_TI, NULL, NULL, &t1671_TI, NULL, t1671_VT, &EmptyCustomAttributesCache, &t1671_TI, &t1671_0_0_0, &t1671_1_0_0, t1671_IOs, &t1671_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1671), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t3214.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3214_TI;

#include "t953.h"
#include "t3215.h"
extern TypeInfo t3214_TI;
extern TypeInfo t1673_TI;
extern TypeInfo t131_TI;
extern TypeInfo t1363_TI;
extern TypeInfo t125_TI;
extern TypeInfo t953_TI;
extern TypeInfo t637_TI;
extern TypeInfo t3215_TI;
extern TypeInfo t134_TI;
#include "t3215MD.h"
extern Il2CppType t1673_0_0_0;
extern Il2CppType t1363_0_0_0;
extern Il2CppType t953_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m17940_MI;
extern MethodInfo m32790_MI;
extern MethodInfo m32791_MI;


extern MethodInfo m17935_MI;
 void m17935 (t3214 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17935_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m17936_MI;
 void m17936 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17936_MI);
	t3215 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t3215 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t3215_TI));
	m17940(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m17940_MI);
	((t3214_SFs*)InitializedTypeInfo(&t3214_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m17937_MI;
 int32_t m17937 (t3214 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17937_MI);
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t1363  >::Invoke(&m32790_MI, __this, ((*(t1363 *)((t1363 *)UnBox (p0, InitializedTypeInfo(&t1363_TI))))));
		return L_0;
	}
}
extern MethodInfo m17938_MI;
 bool m17938 (t3214 * __this, t25 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17938_MI);
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t1363 , t1363  >::Invoke(&m32791_MI, __this, ((*(t1363 *)((t1363 *)UnBox (p0, InitializedTypeInfo(&t1363_TI))))), ((*(t1363 *)((t1363 *)UnBox (p1, InitializedTypeInfo(&t1363_TI))))));
		return L_0;
	}
}
extern MethodInfo m17939_MI;
 t3214 * m17939 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17939_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t3214_TI));
		return (((t3214_SFs*)InitializedTypeInfo(&t3214_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
extern Il2CppType t3214_0_0_49;
FieldInfo t3214_f0_FieldInfo = 
{
	"_default", &t3214_0_0_49, &t3214_TI, offsetof(t3214_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3214_FIs[] =
{
	&t3214_f0_FieldInfo,
	NULL
};
extern MethodInfo m17939_MI;
static PropertyInfo t3214____Default_PropertyInfo = 
{
	&t3214_TI, "Default", &m17939_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3214_PIs[] =
{
	&t3214____Default_PropertyInfo,
	NULL
};
extern TypeInfo t3214_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17935_MI = 
{
	".ctor", (methodPointerType)&m17935, &t3214_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3214_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17936_MI = 
{
	".cctor", (methodPointerType)&m17936, &t3214_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t3214_m17937_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t3214_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17937_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m17937, &t3214_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t3214_m17937_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t3214_m17938_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t3214_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17938_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m17938, &t3214_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t3214_m17938_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1363_0_0_0;
static ParameterInfo t3214_m32790_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
};
extern TypeInfo t3214_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1363 (MethodInfo* method, void* obj, void** args);
MethodInfo m32790_MI = 
{
	"GetHashCode", NULL, &t3214_TI, &t134_0_0_0, RuntimeInvoker_t134_t1363, t3214_m32790_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1363_0_0_0;
extern Il2CppType t1363_0_0_0;
static ParameterInfo t3214_m32791_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
};
extern TypeInfo t3214_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t1363_t1363 (MethodInfo* method, void* obj, void** args);
MethodInfo m32791_MI = 
{
	"Equals", NULL, &t3214_TI, &t125_0_0_0, RuntimeInvoker_t125_t1363_t1363, t3214_m32791_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3214_TI;
extern Il2CppType t3214_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17939_MI = 
{
	"get_Default", (methodPointerType)&m17939, &t3214_TI, &t3214_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3214_MIs[] =
{
	&m17935_MI,
	&m17936_MI,
	&m17937_MI,
	&m17938_MI,
	&m32790_MI,
	&m32791_MI,
	&m17939_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m32791_MI;
extern MethodInfo m32790_MI;
extern MethodInfo m17938_MI;
extern MethodInfo m17937_MI;
static MethodInfo* t3214_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m32791_MI,
	&m32790_MI,
	&m17938_MI,
	&m17937_MI,
	NULL,
	NULL,
};
extern TypeInfo t5892_TI;
extern TypeInfo t977_TI;
static TypeInfo* t3214_ITIs[] = 
{
	&t5892_TI,
	&t977_TI,
};
extern TypeInfo t5892_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t3214_IOs[] = 
{
	{ &t5892_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3214_0_0_0;
extern Il2CppType t3214_1_0_0;
extern TypeInfo t25_TI;
struct t3214;
extern TypeInfo t3214_TI;
extern Il2CppGenericClass t3214_GC;
TypeInfo t3214_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t3214_MIs, t3214_PIs, t3214_FIs, NULL, &t25_TI, NULL, NULL, &t3214_TI, t3214_ITIs, t3214_VT, &EmptyCustomAttributesCache, &t3214_TI, &t3214_0_0_0, &t3214_1_0_0, t3214_IOs, &t3214_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3214), 0, -1, sizeof(t3214_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5892_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>
extern Il2CppType t1363_0_0_0;
extern Il2CppType t1363_0_0_0;
static ParameterInfo t5892_m32792_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
};
extern TypeInfo t5892_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t1363_t1363 (MethodInfo* method, void* obj, void** args);
MethodInfo m32792_MI = 
{
	"Equals", NULL, &t5892_TI, &t125_0_0_0, RuntimeInvoker_t125_t1363_t1363, t5892_m32792_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1363_0_0_0;
static ParameterInfo t5892_m32793_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
};
extern TypeInfo t5892_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1363 (MethodInfo* method, void* obj, void** args);
MethodInfo m32793_MI = 
{
	"GetHashCode", NULL, &t5892_TI, &t134_0_0_0, RuntimeInvoker_t134_t1363, t5892_m32793_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5892_MIs[] =
{
	&m32792_MI,
	&m32793_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5892_0_0_0;
extern Il2CppType t5892_1_0_0;
struct t5892;
extern TypeInfo t5892_TI;
extern Il2CppGenericClass t5892_GC;
TypeInfo t5892_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5892_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5892_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5892_TI, &t5892_0_0_0, &t5892_1_0_0, NULL, &t5892_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3215_TI;

extern TypeInfo t1363_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t125_TI;
extern MethodInfo m17935_MI;
extern MethodInfo m456_MI;
extern MethodInfo m455_MI;


extern MethodInfo m17940_MI;
 void m17940 (t3215 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17940_MI);
	{
		m17935(__this, &m17935_MI);
		return;
	}
}
extern MethodInfo m17941_MI;
 int32_t m17941 (t3215 * __this, t1363  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17941_MI);
	{
		t1363  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t1363_TI), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&t1363_TI), &(*(&p0))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m456_MI, Box(InitializedTypeInfo(&t1363_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m17942_MI;
 bool m17942 (t3215 * __this, t1363  p0, t1363  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17942_MI);
	{
		t1363  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t1363_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1363  L_2 = p1;
		t25 * L_3 = Box(InitializedTypeInfo(&t1363_TI), &L_2);
		return ((((t25 *)L_3) == ((t25 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t1363  L_4 = p1;
		t25 * L_5 = Box(InitializedTypeInfo(&t1363_TI), &L_4);
		NullCheck(Box(InitializedTypeInfo(&t1363_TI), &(*(&p0))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, t25 * >::Invoke(&m455_MI, Box(InitializedTypeInfo(&t1363_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
extern TypeInfo t3215_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17940_MI = 
{
	".ctor", (methodPointerType)&m17940, &t3215_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1363_0_0_0;
static ParameterInfo t3215_m17941_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
};
extern TypeInfo t3215_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1363 (MethodInfo* method, void* obj, void** args);
MethodInfo m17941_MI = 
{
	"GetHashCode", (methodPointerType)&m17941, &t3215_TI, &t134_0_0_0, RuntimeInvoker_t134_t1363, t3215_m17941_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1363_0_0_0;
extern Il2CppType t1363_0_0_0;
static ParameterInfo t3215_m17942_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1363_0_0_0},
};
extern TypeInfo t3215_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t1363_t1363 (MethodInfo* method, void* obj, void** args);
MethodInfo m17942_MI = 
{
	"Equals", (methodPointerType)&m17942, &t3215_TI, &t125_0_0_0, RuntimeInvoker_t125_t1363_t1363, t3215_m17942_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3215_MIs[] =
{
	&m17940_MI,
	&m17941_MI,
	&m17942_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m17942_MI;
extern MethodInfo m17941_MI;
extern MethodInfo m17938_MI;
extern MethodInfo m17937_MI;
extern MethodInfo m17941_MI;
extern MethodInfo m17942_MI;
static MethodInfo* t3215_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m17942_MI,
	&m17941_MI,
	&m17938_MI,
	&m17937_MI,
	&m17941_MI,
	&m17942_MI,
};
extern TypeInfo t5892_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t3215_IOs[] = 
{
	{ &t5892_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3215_0_0_0;
extern Il2CppType t3215_1_0_0;
extern TypeInfo t3214_TI;
struct t3215;
extern TypeInfo t3215_TI;
extern Il2CppGenericClass t3215_GC;
extern TypeInfo t952_TI;
TypeInfo t3215_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t3215_MIs, NULL, NULL, NULL, &t3214_TI, NULL, &t952_TI, &t3215_TI, NULL, t3215_VT, &EmptyCustomAttributesCache, &t3215_TI, &t3215_0_0_0, &t3215_1_0_0, t3215_IOs, &t3215_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3215), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t1365.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1365_TI;
#include "t1365MD.h"

#include "t996.h"
#include "t117.h"
extern TypeInfo t1365_TI;
extern TypeInfo t1387_TI;
extern TypeInfo t996_TI;
extern TypeInfo t117_TI;
extern TypeInfo t125_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t27_TI;
#include "t117MD.h"
#include "t27MD.h"
extern MethodInfo m7431_MI;
extern MethodInfo m17944_MI;
extern MethodInfo m625_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;


extern MethodInfo m8357_MI;
 void m8357 (t1365 * __this, t996  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m8357_MI);
	{
		__this->f1 = 1;
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m8358_MI;
 bool m8358 (t1365 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m8358_MI);
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8359_MI;
 t996  m8359 (t1365 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m8359_MI);
	{
		bool L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1387 * L_1 = (t1387 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1387_TI));
		m7431(L_1, (t27*) &_stringLiteral435, &m7431_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t996  L_2 = (__this->f0);
		return L_2;
	}
}
extern MethodInfo m17943_MI;
 bool m17943 (t1365 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17943_MI);
	{
		if (p0)
		{
			goto IL_000d;
		}
	}
	{
		bool L_0 = (__this->f1);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		if (((t25 *)IsInst(p0, InitializedTypeInfo(&t1365_TI))))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		void* L_1 = alloca(sizeof(t1365 ));
		UnBoxNullable(p0, InitializedTypeInfo(&t1365_TI), L_1);
		bool L_2 = m17944(__this, ((*(t1365 *)((t1365 *)L_1))), &m17944_MI);
		return L_2;
	}
}
extern MethodInfo m17944_MI;
 bool m17944 (t1365 * __this, t1365  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17944_MI);
	{
		NullCheck((&p0));
		bool L_0 = ((&p0)->f1);
		bool L_1 = (__this->f1);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		bool L_2 = (__this->f1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		NullCheck((&p0));
		t996 * L_3 = &((&p0)->f0);
		t996  L_4 = (__this->f0);
		t996  L_5 = L_4;
		t25 * L_6 = Box(InitializedTypeInfo(&t996_TI), &L_5);
		NullCheck(Box(InitializedTypeInfo(&t996_TI), &(*L_3)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, t25 * >::Invoke(&m625_MI, Box(InitializedTypeInfo(&t996_TI), &(*L_3)), L_6);
		return L_7;
	}
}
extern MethodInfo m17945_MI;
 int32_t m17945 (t1365 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17945_MI);
	{
		bool L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		t996 * L_1 = &(__this->f0);
		NullCheck(Box(InitializedTypeInfo(&t996_TI), &(*L_1)));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m626_MI, Box(InitializedTypeInfo(&t996_TI), &(*L_1)));
		return L_2;
	}
}
extern MethodInfo m17946_MI;
 t27* m17946 (t1365 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17946_MI);
	{
		bool L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t996 * L_1 = &(__this->f0);
		NullCheck(Box(InitializedTypeInfo(&t996_TI), &(*L_1)));
		t27* L_2 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m627_MI, Box(InitializedTypeInfo(&t996_TI), &(*L_1)));
		return L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		return (((t27_SFs*)(&t27_TI)->static_fields)->f2);
	}
}
// Metadata Definition System.Nullable`1<System.TimeSpan>
extern Il2CppType t996_0_0_3;
FieldInfo t1365_f0_FieldInfo = 
{
	"value", &t996_0_0_3, &t1365_TI, offsetof(t1365, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_3;
FieldInfo t1365_f1_FieldInfo = 
{
	"has_value", &t125_0_0_3, &t1365_TI, offsetof(t1365, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t1365_FIs[] =
{
	&t1365_f0_FieldInfo,
	&t1365_f1_FieldInfo,
	NULL
};
extern MethodInfo m8358_MI;
static PropertyInfo t1365____HasValue_PropertyInfo = 
{
	&t1365_TI, "HasValue", &m8358_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8359_MI;
static PropertyInfo t1365____Value_PropertyInfo = 
{
	&t1365_TI, "Value", &m8359_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1365_PIs[] =
{
	&t1365____HasValue_PropertyInfo,
	&t1365____Value_PropertyInfo,
	NULL
};
extern Il2CppType t996_0_0_0;
static ParameterInfo t1365_m8357_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t1365_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m8357_MI = 
{
	".ctor", (methodPointerType)&m8357, &t1365_TI, &t123_0_0_0, RuntimeInvoker_t123_t996, t1365_m8357_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1365_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m8358_MI = 
{
	"get_HasValue", (methodPointerType)&m8358, &t1365_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1365_TI;
extern Il2CppType t996_0_0_0;
extern void* RuntimeInvoker_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m8359_MI = 
{
	"get_Value", (methodPointerType)&m8359, &t1365_TI, &t996_0_0_0, RuntimeInvoker_t996, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1365_m17943_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1365_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17943_MI = 
{
	"Equals", (methodPointerType)&m17943, &t1365_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t1365_m17943_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1365_0_0_0;
static ParameterInfo t1365_m17944_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1365_0_0_0},
};
extern TypeInfo t1365_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t1365 (MethodInfo* method, void* obj, void** args);
MethodInfo m17944_MI = 
{
	"Equals", (methodPointerType)&m17944, &t1365_TI, &t125_0_0_0, RuntimeInvoker_t125_t1365, t1365_m17944_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1365_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m17945_MI = 
{
	"GetHashCode", (methodPointerType)&m17945, &t1365_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1365_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17946_MI = 
{
	"ToString", (methodPointerType)&m17946, &t1365_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1365_MIs[] =
{
	&m8357_MI,
	&m8358_MI,
	&m8359_MI,
	&m17943_MI,
	&m17944_MI,
	&m17945_MI,
	&m17946_MI,
	NULL
};
extern MethodInfo m17943_MI;
extern MethodInfo m352_MI;
extern MethodInfo m17945_MI;
extern MethodInfo m17946_MI;
static MethodInfo* t1365_VT[] =
{
	&m17943_MI,
	&m352_MI,
	&m17945_MI,
	&m17946_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1365_0_0_0;
extern Il2CppType t1365_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t1365_TI;
extern Il2CppGenericClass t1365_GC;
TypeInfo t1365_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Nullable`1", "System", t1365_MIs, t1365_PIs, t1365_FIs, NULL, &t117_TI, NULL, NULL, &t1365_TI, NULL, t1365_VT, &EmptyCustomAttributesCache, &t1365_TI, &t1365_0_0_0, &t1365_1_0_0, NULL, &t1365_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1365)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4210_TI;

#include "t987.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DayOfWeek>
extern MethodInfo m32794_MI;
static PropertyInfo t4210____Current_PropertyInfo = 
{
	&t4210_TI, "Current", &m32794_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4210_PIs[] =
{
	&t4210____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4210_TI;
extern Il2CppType t987_0_0_0;
extern void* RuntimeInvoker_t987 (MethodInfo* method, void* obj, void** args);
MethodInfo m32794_MI = 
{
	"get_Current", NULL, &t4210_TI, &t987_0_0_0, RuntimeInvoker_t987, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4210_MIs[] =
{
	&m32794_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4210_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4210_0_0_0;
extern Il2CppType t4210_1_0_0;
struct t4210;
extern TypeInfo t4210_TI;
extern Il2CppGenericClass t4210_GC;
TypeInfo t4210_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4210_MIs, t4210_PIs, NULL, NULL, NULL, NULL, NULL, &t4210_TI, t4210_ITIs, NULL, &EmptyCustomAttributesCache, &t4210_TI, &t4210_0_0_0, &t4210_1_0_0, NULL, &t4210_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3216.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3216_TI;
#include "t3216MD.h"

extern TypeInfo t3216_TI;
extern TypeInfo t987_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m17951_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m24767_MI;
struct t122;
 int32_t m24767 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m24767_MI;


extern MethodInfo m17947_MI;
 void m17947 (t3216 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17947_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m17948_MI;
 t25 * m17948 (t3216 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17948_MI);
	{
		int32_t L_0 = m17951(__this, &m17951_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t987_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m17949_MI;
 void m17949 (t3216 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17949_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m17950_MI;
 bool m17950 (t3216 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17950_MI);
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
extern MethodInfo m17951_MI;
 int32_t m17951 (t3216 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17951_MI);
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
		int32_t L_8 = m24767(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24767_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DayOfWeek>
extern Il2CppType t122_0_0_1;
FieldInfo t3216_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3216_TI, offsetof(t3216, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3216_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3216_TI, offsetof(t3216, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3216_FIs[] =
{
	&t3216_f0_FieldInfo,
	&t3216_f1_FieldInfo,
	NULL
};
extern MethodInfo m17948_MI;
static PropertyInfo t3216____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3216_TI, "System.Collections.IEnumerator.Current", &m17948_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m17951_MI;
static PropertyInfo t3216____Current_PropertyInfo = 
{
	&t3216_TI, "Current", &m17951_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3216_PIs[] =
{
	&t3216____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3216____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3216_m17947_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3216_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17947_MI = 
{
	".ctor", (methodPointerType)&m17947, &t3216_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3216_m17947_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3216_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17948_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m17948, &t3216_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3216_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17949_MI = 
{
	"Dispose", (methodPointerType)&m17949, &t3216_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3216_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m17950_MI = 
{
	"MoveNext", (methodPointerType)&m17950, &t3216_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3216_TI;
extern Il2CppType t987_0_0_0;
extern void* RuntimeInvoker_t987 (MethodInfo* method, void* obj, void** args);
MethodInfo m17951_MI = 
{
	"get_Current", (methodPointerType)&m17951, &t3216_TI, &t987_0_0_0, RuntimeInvoker_t987, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3216_MIs[] =
{
	&m17947_MI,
	&m17948_MI,
	&m17949_MI,
	&m17950_MI,
	&m17951_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m17948_MI;
extern MethodInfo m17950_MI;
extern MethodInfo m17949_MI;
extern MethodInfo m17951_MI;
static MethodInfo* t3216_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m17948_MI,
	&m17950_MI,
	&m17949_MI,
	&m17951_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4210_TI;
static TypeInfo* t3216_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4210_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4210_TI;
static Il2CppInterfaceOffsetPair t3216_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4210_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3216_0_0_0;
extern Il2CppType t3216_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3216_TI;
extern Il2CppGenericClass t3216_GC;
extern TypeInfo t122_TI;
TypeInfo t3216_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3216_MIs, t3216_PIs, t3216_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3216_TI, t3216_ITIs, t3216_VT, &EmptyCustomAttributesCache, &t3216_TI, &t3216_0_0_0, &t3216_1_0_0, t3216_IOs, &t3216_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3216)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5777_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.DayOfWeek>
extern MethodInfo m32795_MI;
static PropertyInfo t5777____Count_PropertyInfo = 
{
	&t5777_TI, "Count", &m32795_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32796_MI;
static PropertyInfo t5777____IsReadOnly_PropertyInfo = 
{
	&t5777_TI, "IsReadOnly", &m32796_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5777_PIs[] =
{
	&t5777____Count_PropertyInfo,
	&t5777____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5777_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32795_MI = 
{
	"get_Count", NULL, &t5777_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5777_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m32796_MI = 
{
	"get_IsReadOnly", NULL, &t5777_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t987_0_0_0;
static ParameterInfo t5777_m32797_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t987_0_0_0},
};
extern TypeInfo t5777_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32797_MI = 
{
	"Add", NULL, &t5777_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5777_m32797_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5777_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m32798_MI = 
{
	"Clear", NULL, &t5777_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t987_0_0_0;
static ParameterInfo t5777_m32799_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t987_0_0_0},
};
extern TypeInfo t5777_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32799_MI = 
{
	"Contains", NULL, &t5777_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t5777_m32799_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3471_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5777_m32800_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3471_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5777_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32800_MI = 
{
	"CopyTo", NULL, &t5777_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5777_m32800_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t987_0_0_0;
static ParameterInfo t5777_m32801_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t987_0_0_0},
};
extern TypeInfo t5777_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32801_MI = 
{
	"Remove", NULL, &t5777_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t5777_m32801_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5777_MIs[] =
{
	&m32795_MI,
	&m32796_MI,
	&m32797_MI,
	&m32798_MI,
	&m32799_MI,
	&m32800_MI,
	&m32801_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5779_TI;
static TypeInfo* t5777_ITIs[] = 
{
	&t703_TI,
	&t5779_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5777_0_0_0;
extern Il2CppType t5777_1_0_0;
struct t5777;
extern TypeInfo t5777_TI;
extern Il2CppGenericClass t5777_GC;
TypeInfo t5777_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5777_MIs, t5777_PIs, NULL, NULL, NULL, NULL, NULL, &t5777_TI, t5777_ITIs, NULL, &EmptyCustomAttributesCache, &t5777_TI, &t5777_0_0_0, &t5777_1_0_0, NULL, &t5777_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5779_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DayOfWeek>
extern TypeInfo t5779_TI;
extern Il2CppType t4210_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32802_MI = 
{
	"GetEnumerator", NULL, &t5779_TI, &t4210_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5779_MIs[] =
{
	&m32802_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5779_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5779_0_0_0;
extern Il2CppType t5779_1_0_0;
struct t5779;
extern TypeInfo t5779_TI;
extern Il2CppGenericClass t5779_GC;
TypeInfo t5779_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5779_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5779_TI, t5779_ITIs, NULL, &EmptyCustomAttributesCache, &t5779_TI, &t5779_0_0_0, &t5779_1_0_0, NULL, &t5779_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5778_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.DayOfWeek>
extern MethodInfo m32803_MI;
extern MethodInfo m32804_MI;
static PropertyInfo t5778____Item_PropertyInfo = 
{
	&t5778_TI, "Item", &m32803_MI, &m32804_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5778_PIs[] =
{
	&t5778____Item_PropertyInfo,
	NULL
};
extern Il2CppType t987_0_0_0;
static ParameterInfo t5778_m32805_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t987_0_0_0},
};
extern TypeInfo t5778_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32805_MI = 
{
	"IndexOf", NULL, &t5778_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t5778_m32805_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t987_0_0_0;
static ParameterInfo t5778_m32806_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t987_0_0_0},
};
extern TypeInfo t5778_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32806_MI = 
{
	"Insert", NULL, &t5778_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t5778_m32806_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5778_m32807_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5778_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32807_MI = 
{
	"RemoveAt", NULL, &t5778_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5778_m32807_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5778_m32803_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5778_TI;
extern Il2CppType t987_0_0_0;
extern void* RuntimeInvoker_t987_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32803_MI = 
{
	"get_Item", NULL, &t5778_TI, &t987_0_0_0, RuntimeInvoker_t987_t134, t5778_m32803_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t987_0_0_0;
static ParameterInfo t5778_m32804_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t987_0_0_0},
};
extern TypeInfo t5778_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32804_MI = 
{
	"set_Item", NULL, &t5778_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t5778_m32804_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5778_MIs[] =
{
	&m32805_MI,
	&m32806_MI,
	&m32807_MI,
	&m32803_MI,
	&m32804_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5777_TI;
extern TypeInfo t5779_TI;
static TypeInfo* t5778_ITIs[] = 
{
	&t703_TI,
	&t5777_TI,
	&t5779_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5778_0_0_0;
extern Il2CppType t5778_1_0_0;
struct t5778;
extern TypeInfo t5778_TI;
extern Il2CppGenericClass t5778_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5778_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5778_MIs, t5778_PIs, NULL, NULL, NULL, NULL, NULL, &t5778_TI, t5778_ITIs, NULL, &t1518__CustomAttributeCache, &t5778_TI, &t5778_0_0_0, &t5778_1_0_0, NULL, &t5778_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1674_TI;

#include "t137.h"


// Metadata Definition System.Collections.Generic.IComparer`1<System.SByte>
extern Il2CppType t137_0_0_0;
extern Il2CppType t137_0_0_0;
static ParameterInfo t1674_m32808_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t137_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t137_0_0_0},
};
extern TypeInfo t1674_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t137_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m32808_MI = 
{
	"Compare", NULL, &t1674_TI, &t134_0_0_0, RuntimeInvoker_t134_t137_t137, t1674_m32808_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1674_MIs[] =
{
	&m32808_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1674_0_0_0;
extern Il2CppType t1674_1_0_0;
struct t1674;
extern TypeInfo t1674_TI;
extern Il2CppGenericClass t1674_GC;
TypeInfo t1674_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t1674_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1674_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1674_TI, &t1674_0_0_0, &t1674_1_0_0, NULL, &t1674_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1675_TI;

#include "t483.h"


// Metadata Definition System.Collections.Generic.IComparer`1<System.Int16>
extern Il2CppType t483_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t1675_m32809_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t1675_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t483_t483 (MethodInfo* method, void* obj, void** args);
MethodInfo m32809_MI = 
{
	"Compare", NULL, &t1675_TI, &t134_0_0_0, RuntimeInvoker_t134_t483_t483, t1675_m32809_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1675_MIs[] =
{
	&m32809_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1675_0_0_0;
extern Il2CppType t1675_1_0_0;
struct t1675;
extern TypeInfo t1675_TI;
extern Il2CppGenericClass t1675_GC;
TypeInfo t1675_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t1675_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1675_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1675_TI, &t1675_0_0_0, &t1675_1_0_0, NULL, &t1675_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1676_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.Int32>
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t1676_m32810_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1676_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32810_MI = 
{
	"Compare", NULL, &t1676_TI, &t134_0_0_0, RuntimeInvoker_t134_t134_t134, t1676_m32810_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1676_MIs[] =
{
	&m32810_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1676_0_0_0;
extern Il2CppType t1676_1_0_0;
struct t1676;
extern TypeInfo t1676_TI;
extern Il2CppGenericClass t1676_GC;
TypeInfo t1676_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t1676_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1676_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1676_TI, &t1676_0_0_0, &t1676_1_0_0, NULL, &t1676_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1677_TI;

#include "t817.h"


// Metadata Definition System.Collections.Generic.IComparer`1<System.Int64>
extern Il2CppType t817_0_0_0;
extern Il2CppType t817_0_0_0;
static ParameterInfo t1677_m32811_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t817_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t817_0_0_0},
};
extern TypeInfo t1677_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t817_t817 (MethodInfo* method, void* obj, void** args);
MethodInfo m32811_MI = 
{
	"Compare", NULL, &t1677_TI, &t134_0_0_0, RuntimeInvoker_t134_t817_t817, t1677_m32811_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1677_MIs[] =
{
	&m32811_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1677_0_0_0;
extern Il2CppType t1677_1_0_0;
struct t1677;
extern TypeInfo t1677_TI;
extern Il2CppGenericClass t1677_GC;
TypeInfo t1677_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t1677_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1677_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1677_TI, &t1677_0_0_0, &t1677_1_0_0, NULL, &t1677_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4211_TI;

#include "t1377.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Environment/SpecialFolder>
extern MethodInfo m32812_MI;
static PropertyInfo t4211____Current_PropertyInfo = 
{
	&t4211_TI, "Current", &m32812_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4211_PIs[] =
{
	&t4211____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4211_TI;
extern Il2CppType t1377_0_0_0;
extern void* RuntimeInvoker_t1377 (MethodInfo* method, void* obj, void** args);
MethodInfo m32812_MI = 
{
	"get_Current", NULL, &t4211_TI, &t1377_0_0_0, RuntimeInvoker_t1377, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4211_MIs[] =
{
	&m32812_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4211_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4211_0_0_0;
extern Il2CppType t4211_1_0_0;
struct t4211;
extern TypeInfo t4211_TI;
extern Il2CppGenericClass t4211_GC;
TypeInfo t4211_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4211_MIs, t4211_PIs, NULL, NULL, NULL, NULL, NULL, &t4211_TI, t4211_ITIs, NULL, &EmptyCustomAttributesCache, &t4211_TI, &t4211_0_0_0, &t4211_1_0_0, NULL, &t4211_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3217.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3217_TI;
#include "t3217MD.h"

extern TypeInfo t3217_TI;
extern TypeInfo t1377_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m17956_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m24778_MI;
struct t122;
 int32_t m24778 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m24778_MI;


extern MethodInfo m17952_MI;
 void m17952 (t3217 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17952_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m17953_MI;
 t25 * m17953 (t3217 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17953_MI);
	{
		int32_t L_0 = m17956(__this, &m17956_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t1377_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m17954_MI;
 void m17954 (t3217 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17954_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m17955_MI;
 bool m17955 (t3217 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17955_MI);
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
extern MethodInfo m17956_MI;
 int32_t m17956 (t3217 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17956_MI);
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
		int32_t L_8 = m24778(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24778_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>
extern Il2CppType t122_0_0_1;
FieldInfo t3217_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3217_TI, offsetof(t3217, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3217_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3217_TI, offsetof(t3217, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3217_FIs[] =
{
	&t3217_f0_FieldInfo,
	&t3217_f1_FieldInfo,
	NULL
};
extern MethodInfo m17953_MI;
static PropertyInfo t3217____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3217_TI, "System.Collections.IEnumerator.Current", &m17953_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m17956_MI;
static PropertyInfo t3217____Current_PropertyInfo = 
{
	&t3217_TI, "Current", &m17956_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3217_PIs[] =
{
	&t3217____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3217____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3217_m17952_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3217_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17952_MI = 
{
	".ctor", (methodPointerType)&m17952, &t3217_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3217_m17952_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3217_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17953_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m17953, &t3217_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3217_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17954_MI = 
{
	"Dispose", (methodPointerType)&m17954, &t3217_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3217_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m17955_MI = 
{
	"MoveNext", (methodPointerType)&m17955, &t3217_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3217_TI;
extern Il2CppType t1377_0_0_0;
extern void* RuntimeInvoker_t1377 (MethodInfo* method, void* obj, void** args);
MethodInfo m17956_MI = 
{
	"get_Current", (methodPointerType)&m17956, &t3217_TI, &t1377_0_0_0, RuntimeInvoker_t1377, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3217_MIs[] =
{
	&m17952_MI,
	&m17953_MI,
	&m17954_MI,
	&m17955_MI,
	&m17956_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m17953_MI;
extern MethodInfo m17955_MI;
extern MethodInfo m17954_MI;
extern MethodInfo m17956_MI;
static MethodInfo* t3217_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m17953_MI,
	&m17955_MI,
	&m17954_MI,
	&m17956_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4211_TI;
static TypeInfo* t3217_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4211_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4211_TI;
static Il2CppInterfaceOffsetPair t3217_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4211_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3217_0_0_0;
extern Il2CppType t3217_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3217_TI;
extern Il2CppGenericClass t3217_GC;
extern TypeInfo t122_TI;
TypeInfo t3217_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3217_MIs, t3217_PIs, t3217_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3217_TI, t3217_ITIs, t3217_VT, &EmptyCustomAttributesCache, &t3217_TI, &t3217_0_0_0, &t3217_1_0_0, t3217_IOs, &t3217_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3217)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5780_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>
extern MethodInfo m32813_MI;
static PropertyInfo t5780____Count_PropertyInfo = 
{
	&t5780_TI, "Count", &m32813_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32814_MI;
static PropertyInfo t5780____IsReadOnly_PropertyInfo = 
{
	&t5780_TI, "IsReadOnly", &m32814_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5780_PIs[] =
{
	&t5780____Count_PropertyInfo,
	&t5780____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5780_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32813_MI = 
{
	"get_Count", NULL, &t5780_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5780_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m32814_MI = 
{
	"get_IsReadOnly", NULL, &t5780_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1377_0_0_0;
static ParameterInfo t5780_m32815_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern TypeInfo t5780_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32815_MI = 
{
	"Add", NULL, &t5780_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5780_m32815_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5780_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m32816_MI = 
{
	"Clear", NULL, &t5780_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1377_0_0_0;
static ParameterInfo t5780_m32817_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern TypeInfo t5780_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32817_MI = 
{
	"Contains", NULL, &t5780_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t5780_m32817_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3472_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5780_m32818_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3472_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5780_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32818_MI = 
{
	"CopyTo", NULL, &t5780_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5780_m32818_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1377_0_0_0;
static ParameterInfo t5780_m32819_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern TypeInfo t5780_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32819_MI = 
{
	"Remove", NULL, &t5780_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t5780_m32819_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5780_MIs[] =
{
	&m32813_MI,
	&m32814_MI,
	&m32815_MI,
	&m32816_MI,
	&m32817_MI,
	&m32818_MI,
	&m32819_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5782_TI;
static TypeInfo* t5780_ITIs[] = 
{
	&t703_TI,
	&t5782_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5780_0_0_0;
extern Il2CppType t5780_1_0_0;
struct t5780;
extern TypeInfo t5780_TI;
extern Il2CppGenericClass t5780_GC;
TypeInfo t5780_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5780_MIs, t5780_PIs, NULL, NULL, NULL, NULL, NULL, &t5780_TI, t5780_ITIs, NULL, &EmptyCustomAttributesCache, &t5780_TI, &t5780_0_0_0, &t5780_1_0_0, NULL, &t5780_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5782_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>
extern TypeInfo t5782_TI;
extern Il2CppType t4211_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32820_MI = 
{
	"GetEnumerator", NULL, &t5782_TI, &t4211_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5782_MIs[] =
{
	&m32820_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5782_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5782_0_0_0;
extern Il2CppType t5782_1_0_0;
struct t5782;
extern TypeInfo t5782_TI;
extern Il2CppGenericClass t5782_GC;
TypeInfo t5782_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5782_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5782_TI, t5782_ITIs, NULL, &EmptyCustomAttributesCache, &t5782_TI, &t5782_0_0_0, &t5782_1_0_0, NULL, &t5782_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5781_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Environment/SpecialFolder>
extern MethodInfo m32821_MI;
extern MethodInfo m32822_MI;
static PropertyInfo t5781____Item_PropertyInfo = 
{
	&t5781_TI, "Item", &m32821_MI, &m32822_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5781_PIs[] =
{
	&t5781____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1377_0_0_0;
static ParameterInfo t5781_m32823_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern TypeInfo t5781_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32823_MI = 
{
	"IndexOf", NULL, &t5781_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t5781_m32823_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1377_0_0_0;
static ParameterInfo t5781_m32824_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern TypeInfo t5781_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32824_MI = 
{
	"Insert", NULL, &t5781_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t5781_m32824_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5781_m32825_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5781_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32825_MI = 
{
	"RemoveAt", NULL, &t5781_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5781_m32825_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5781_m32821_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5781_TI;
extern Il2CppType t1377_0_0_0;
extern void* RuntimeInvoker_t1377_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32821_MI = 
{
	"get_Item", NULL, &t5781_TI, &t1377_0_0_0, RuntimeInvoker_t1377_t134, t5781_m32821_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1377_0_0_0;
static ParameterInfo t5781_m32822_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern TypeInfo t5781_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32822_MI = 
{
	"set_Item", NULL, &t5781_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t5781_m32822_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5781_MIs[] =
{
	&m32823_MI,
	&m32824_MI,
	&m32825_MI,
	&m32821_MI,
	&m32822_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5780_TI;
extern TypeInfo t5782_TI;
static TypeInfo* t5781_ITIs[] = 
{
	&t703_TI,
	&t5780_TI,
	&t5782_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5781_0_0_0;
extern Il2CppType t5781_1_0_0;
struct t5781;
extern TypeInfo t5781_TI;
extern Il2CppGenericClass t5781_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5781_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5781_MIs, t5781_PIs, NULL, NULL, NULL, NULL, NULL, &t5781_TI, t5781_ITIs, NULL, &t1518__CustomAttributeCache, &t5781_TI, &t5781_0_0_0, &t5781_1_0_0, NULL, &t5781_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1681_TI;

#include "t1385.h"


// Metadata Definition System.IComparable`1<System.Guid>
extern Il2CppType t1385_0_0_0;
static ParameterInfo t1681_m32826_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
};
extern TypeInfo t1681_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1385 (MethodInfo* method, void* obj, void** args);
MethodInfo m32826_MI = 
{
	"CompareTo", NULL, &t1681_TI, &t134_0_0_0, RuntimeInvoker_t134_t1385, t1681_m32826_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1681_MIs[] =
{
	&m32826_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1681_0_0_0;
extern Il2CppType t1681_1_0_0;
struct t1681;
extern TypeInfo t1681_TI;
extern Il2CppGenericClass t1681_GC;
TypeInfo t1681_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1681_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1681_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1681_TI, &t1681_0_0_0, &t1681_1_0_0, NULL, &t1681_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1682_TI;



// Metadata Definition System.IEquatable`1<System.Guid>
extern Il2CppType t1385_0_0_0;
static ParameterInfo t1682_m32827_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
};
extern TypeInfo t1682_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t1385 (MethodInfo* method, void* obj, void** args);
MethodInfo m32827_MI = 
{
	"Equals", NULL, &t1682_TI, &t125_0_0_0, RuntimeInvoker_t125_t1385, t1682_m32827_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1682_MIs[] =
{
	&m32827_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1682_0_0_0;
extern Il2CppType t1682_1_0_0;
struct t1682;
extern TypeInfo t1682_TI;
extern Il2CppGenericClass t1682_GC;
TypeInfo t1682_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1682_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1682_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1682_TI, &t1682_0_0_0, &t1682_1_0_0, NULL, &t1682_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1679.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1679_TI;
#include "t1679MD.h"

extern TypeInfo t1385_TI;
extern TypeInfo t1681_TI;
extern TypeInfo t134_TI;
#include "t3218MD.h"
extern MethodInfo m17958_MI;
extern MethodInfo m32826_MI;


extern MethodInfo m8360_MI;
 void m8360 (t1679 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m8360_MI);
	{
		m17958(__this, &m17958_MI);
		return;
	}
}
extern MethodInfo m17957_MI;
 int32_t m17957 (t1679 * __this, t1385  p0, t1385  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17957_MI);
	int32_t G_B4_0 = 0;
	{
		t1385  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t1385_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t1385  L_2 = p1;
		t25 * L_3 = Box(InitializedTypeInfo(&t1385_TI), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		t1385  L_4 = p1;
		t25 * L_5 = Box(InitializedTypeInfo(&t1385_TI), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(InitializedTypeInfo(&t1385_TI), &(*(&p0))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, t1385  >::Invoke(&m32826_MI, Box(InitializedTypeInfo(&t1385_TI), &(*(&p0))), p1);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.Guid>
extern TypeInfo t1679_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8360_MI = 
{
	".ctor", (methodPointerType)&m8360, &t1679_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1385_0_0_0;
extern Il2CppType t1385_0_0_0;
static ParameterInfo t1679_m17957_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
};
extern TypeInfo t1679_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1385_t1385 (MethodInfo* method, void* obj, void** args);
MethodInfo m17957_MI = 
{
	"Compare", (methodPointerType)&m17957, &t1679_TI, &t134_0_0_0, RuntimeInvoker_t134_t1385_t1385, t1679_m17957_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1679_MIs[] =
{
	&m8360_MI,
	&m17957_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m17957_MI;
extern MethodInfo m17960_MI;
extern MethodInfo m17957_MI;
static MethodInfo* t1679_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m17957_MI,
	&m17960_MI,
	&m17957_MI,
};
extern TypeInfo t5893_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t1679_IOs[] = 
{
	{ &t5893_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1679_0_0_0;
extern Il2CppType t1679_1_0_0;
extern TypeInfo t3218_TI;
struct t1679;
extern TypeInfo t1679_TI;
extern Il2CppGenericClass t1679_GC;
TypeInfo t1679_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericComparer`1", "System.Collections.Generic", t1679_MIs, NULL, NULL, NULL, &t3218_TI, NULL, NULL, &t1679_TI, NULL, t1679_VT, &EmptyCustomAttributesCache, &t1679_TI, &t1679_0_0_0, &t1679_1_0_0, t1679_IOs, &t1679_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1679), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t3218.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3218_TI;

#include "t3219.h"
extern TypeInfo t3218_TI;
extern TypeInfo t1681_TI;
extern TypeInfo t131_TI;
extern TypeInfo t1385_TI;
extern TypeInfo t125_TI;
extern TypeInfo t941_TI;
extern TypeInfo t637_TI;
extern TypeInfo t3219_TI;
extern TypeInfo t134_TI;
extern TypeInfo t445_TI;
#include "t3219MD.h"
extern Il2CppType t1681_0_0_0;
extern Il2CppType t1385_0_0_0;
extern Il2CppType t941_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m17962_MI;
extern MethodInfo m32828_MI;
extern MethodInfo m6988_MI;


extern MethodInfo m17958_MI;
 void m17958 (t3218 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17958_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m17959_MI;
 void m17959 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17959_MI);
	t3219 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t3219 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t3219_TI));
	m17962(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m17962_MI);
	((t3218_SFs*)InitializedTypeInfo(&t3218_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m17960_MI;
 int32_t m17960 (t3218 * __this, t25 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17960_MI);
	int32_t G_B4_0 = 0;
	{
		if (p0)
		{
			goto IL_000b;
		}
	}
	{
		if (p1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (p1)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((t25 *)IsInst(p0, InitializedTypeInfo(&t1385_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t25 *)IsInst(p1, InitializedTypeInfo(&t1385_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t1385 , t1385  >::Invoke(&m32828_MI, __this, ((*(t1385 *)((t1385 *)UnBox (p0, InitializedTypeInfo(&t1385_TI))))), ((*(t1385 *)((t1385 *)UnBox (p1, InitializedTypeInfo(&t1385_TI))))));
		return L_0;
	}

IL_0033:
	{
		t445 * L_1 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m6988(L_1, &m6988_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m17961_MI;
 t3218 * m17961 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17961_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t3218_TI));
		return (((t3218_SFs*)InitializedTypeInfo(&t3218_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.Guid>
extern Il2CppType t3218_0_0_49;
FieldInfo t3218_f0_FieldInfo = 
{
	"_default", &t3218_0_0_49, &t3218_TI, offsetof(t3218_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3218_FIs[] =
{
	&t3218_f0_FieldInfo,
	NULL
};
extern MethodInfo m17961_MI;
static PropertyInfo t3218____Default_PropertyInfo = 
{
	&t3218_TI, "Default", &m17961_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3218_PIs[] =
{
	&t3218____Default_PropertyInfo,
	NULL
};
extern TypeInfo t3218_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17958_MI = 
{
	".ctor", (methodPointerType)&m17958, &t3218_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3218_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17959_MI = 
{
	".cctor", (methodPointerType)&m17959, &t3218_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t3218_m17960_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t3218_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17960_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m17960, &t3218_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t3218_m17960_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1385_0_0_0;
extern Il2CppType t1385_0_0_0;
static ParameterInfo t3218_m32828_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
};
extern TypeInfo t3218_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1385_t1385 (MethodInfo* method, void* obj, void** args);
MethodInfo m32828_MI = 
{
	"Compare", NULL, &t3218_TI, &t134_0_0_0, RuntimeInvoker_t134_t1385_t1385, t3218_m32828_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3218_TI;
extern Il2CppType t3218_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17961_MI = 
{
	"get_Default", (methodPointerType)&m17961, &t3218_TI, &t3218_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3218_MIs[] =
{
	&m17958_MI,
	&m17959_MI,
	&m17960_MI,
	&m32828_MI,
	&m17961_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m32828_MI;
extern MethodInfo m17960_MI;
static MethodInfo* t3218_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m32828_MI,
	&m17960_MI,
	NULL,
};
extern TypeInfo t5893_TI;
extern TypeInfo t147_TI;
static TypeInfo* t3218_ITIs[] = 
{
	&t5893_TI,
	&t147_TI,
};
extern TypeInfo t5893_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t3218_IOs[] = 
{
	{ &t5893_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3218_0_0_0;
extern Il2CppType t3218_1_0_0;
extern TypeInfo t25_TI;
struct t3218;
extern TypeInfo t3218_TI;
extern Il2CppGenericClass t3218_GC;
TypeInfo t3218_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t3218_MIs, t3218_PIs, t3218_FIs, NULL, &t25_TI, NULL, NULL, &t3218_TI, t3218_ITIs, t3218_VT, &EmptyCustomAttributesCache, &t3218_TI, &t3218_0_0_0, &t3218_1_0_0, t3218_IOs, &t3218_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3218), 0, -1, sizeof(t3218_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5893_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.Guid>
extern Il2CppType t1385_0_0_0;
extern Il2CppType t1385_0_0_0;
static ParameterInfo t5893_m32829_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
};
extern TypeInfo t5893_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1385_t1385 (MethodInfo* method, void* obj, void** args);
MethodInfo m32829_MI = 
{
	"Compare", NULL, &t5893_TI, &t134_0_0_0, RuntimeInvoker_t134_t1385_t1385, t5893_m32829_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5893_MIs[] =
{
	&m32829_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5893_0_0_0;
extern Il2CppType t5893_1_0_0;
struct t5893;
extern TypeInfo t5893_TI;
extern Il2CppGenericClass t5893_GC;
TypeInfo t5893_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t5893_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5893_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5893_TI, &t5893_0_0_0, &t5893_1_0_0, NULL, &t5893_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3219_TI;

extern TypeInfo t1385_TI;
extern TypeInfo t1681_TI;
extern TypeInfo t134_TI;
extern TypeInfo t143_TI;
extern TypeInfo t25_TI;
extern TypeInfo t445_TI;
extern MethodInfo m17958_MI;
extern MethodInfo m32826_MI;
extern MethodInfo m7828_MI;
extern MethodInfo m2409_MI;


extern MethodInfo m17962_MI;
 void m17962 (t3219 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17962_MI);
	{
		m17958(__this, &m17958_MI);
		return;
	}
}
extern MethodInfo m17963_MI;
 int32_t m17963 (t3219 * __this, t1385  p0, t1385  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17963_MI);
	int32_t G_B4_0 = 0;
	{
		t1385  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t1385_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t1385  L_2 = p1;
		t25 * L_3 = Box(InitializedTypeInfo(&t1385_TI), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		t1385  L_4 = p1;
		t25 * L_5 = Box(InitializedTypeInfo(&t1385_TI), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		t1385  L_6 = p0;
		t25 * L_7 = Box(InitializedTypeInfo(&t1385_TI), &L_6);
		if (!((t25*)IsInst(L_7, InitializedTypeInfo(&t1681_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t1385  L_8 = p0;
		t25 * L_9 = Box(InitializedTypeInfo(&t1385_TI), &L_8);
		NullCheck(((t25*)Castclass(L_9, InitializedTypeInfo(&t1681_TI))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t1385  >::Invoke(&m32826_MI, ((t25*)Castclass(L_9, InitializedTypeInfo(&t1681_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t1385  L_11 = p0;
		t25 * L_12 = Box(InitializedTypeInfo(&t1385_TI), &L_11);
		if (!((t25 *)IsInst(L_12, InitializedTypeInfo(&t143_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t1385  L_13 = p0;
		t25 * L_14 = Box(InitializedTypeInfo(&t1385_TI), &L_13);
		t1385  L_15 = p1;
		t25 * L_16 = Box(InitializedTypeInfo(&t1385_TI), &L_15);
		NullCheck(((t25 *)Castclass(L_14, InitializedTypeInfo(&t143_TI))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, t25 * >::Invoke(&m7828_MI, ((t25 *)Castclass(L_14, InitializedTypeInfo(&t143_TI))), L_16);
		return L_17;
	}

IL_0062:
	{
		t445 * L_18 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m2409(L_18, (t27*) &_stringLiteral558, &m2409_MI);
		il2cpp_codegen_raise_exception (L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
extern TypeInfo t3219_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17962_MI = 
{
	".ctor", (methodPointerType)&m17962, &t3219_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1385_0_0_0;
extern Il2CppType t1385_0_0_0;
static ParameterInfo t3219_m17963_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
};
extern TypeInfo t3219_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1385_t1385 (MethodInfo* method, void* obj, void** args);
MethodInfo m17963_MI = 
{
	"Compare", (methodPointerType)&m17963, &t3219_TI, &t134_0_0_0, RuntimeInvoker_t134_t1385_t1385, t3219_m17963_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3219_MIs[] =
{
	&m17962_MI,
	&m17963_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m17963_MI;
extern MethodInfo m17960_MI;
extern MethodInfo m17963_MI;
static MethodInfo* t3219_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m17963_MI,
	&m17960_MI,
	&m17963_MI,
};
extern TypeInfo t5893_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t3219_IOs[] = 
{
	{ &t5893_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3219_0_0_0;
extern Il2CppType t3219_1_0_0;
extern TypeInfo t3218_TI;
struct t3219;
extern TypeInfo t3219_TI;
extern Il2CppGenericClass t3219_GC;
extern TypeInfo t940_TI;
TypeInfo t3219_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t3219_MIs, NULL, NULL, NULL, &t3218_TI, NULL, &t940_TI, &t3219_TI, NULL, t3219_VT, &EmptyCustomAttributesCache, &t3219_TI, &t3219_0_0_0, &t3219_1_0_0, t3219_IOs, &t3219_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3219), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t1680.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1680_TI;
#include "t1680MD.h"

extern TypeInfo t1385_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t1682_TI;
extern TypeInfo t125_TI;
#include "t3220MD.h"
extern MethodInfo m17966_MI;
extern MethodInfo m456_MI;
extern MethodInfo m32827_MI;


extern MethodInfo m8361_MI;
 void m8361 (t1680 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m8361_MI);
	{
		m17966(__this, &m17966_MI);
		return;
	}
}
extern MethodInfo m17964_MI;
 int32_t m17964 (t1680 * __this, t1385  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17964_MI);
	{
		t1385  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t1385_TI), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&t1385_TI), &(*(&p0))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m456_MI, Box(InitializedTypeInfo(&t1385_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m17965_MI;
 bool m17965 (t1680 * __this, t1385  p0, t1385  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17965_MI);
	{
		t1385  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t1385_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1385  L_2 = p1;
		t25 * L_3 = Box(InitializedTypeInfo(&t1385_TI), &L_2);
		return ((((t25 *)L_3) == ((t25 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(InitializedTypeInfo(&t1385_TI), &(*(&p0))));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t1385  >::Invoke(&m32827_MI, Box(InitializedTypeInfo(&t1385_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
extern TypeInfo t1680_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8361_MI = 
{
	".ctor", (methodPointerType)&m8361, &t1680_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1385_0_0_0;
static ParameterInfo t1680_m17964_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
};
extern TypeInfo t1680_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1385 (MethodInfo* method, void* obj, void** args);
MethodInfo m17964_MI = 
{
	"GetHashCode", (methodPointerType)&m17964, &t1680_TI, &t134_0_0_0, RuntimeInvoker_t134_t1385, t1680_m17964_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1385_0_0_0;
extern Il2CppType t1385_0_0_0;
static ParameterInfo t1680_m17965_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
};
extern TypeInfo t1680_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t1385_t1385 (MethodInfo* method, void* obj, void** args);
MethodInfo m17965_MI = 
{
	"Equals", (methodPointerType)&m17965, &t1680_TI, &t125_0_0_0, RuntimeInvoker_t125_t1385_t1385, t1680_m17965_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1680_MIs[] =
{
	&m8361_MI,
	&m17964_MI,
	&m17965_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m17965_MI;
extern MethodInfo m17964_MI;
extern MethodInfo m17969_MI;
extern MethodInfo m17968_MI;
extern MethodInfo m17964_MI;
extern MethodInfo m17965_MI;
static MethodInfo* t1680_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m17965_MI,
	&m17964_MI,
	&m17969_MI,
	&m17968_MI,
	&m17964_MI,
	&m17965_MI,
};
extern TypeInfo t5894_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t1680_IOs[] = 
{
	{ &t5894_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1680_0_0_0;
extern Il2CppType t1680_1_0_0;
extern TypeInfo t3220_TI;
struct t1680;
extern TypeInfo t1680_TI;
extern Il2CppGenericClass t1680_GC;
TypeInfo t1680_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t1680_MIs, NULL, NULL, NULL, &t3220_TI, NULL, NULL, &t1680_TI, NULL, t1680_VT, &EmptyCustomAttributesCache, &t1680_TI, &t1680_0_0_0, &t1680_1_0_0, t1680_IOs, &t1680_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1680), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t3220.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3220_TI;

#include "t3221.h"
extern TypeInfo t3220_TI;
extern TypeInfo t1682_TI;
extern TypeInfo t131_TI;
extern TypeInfo t1385_TI;
extern TypeInfo t125_TI;
extern TypeInfo t953_TI;
extern TypeInfo t637_TI;
extern TypeInfo t3221_TI;
extern TypeInfo t134_TI;
#include "t3221MD.h"
extern Il2CppType t1682_0_0_0;
extern Il2CppType t1385_0_0_0;
extern Il2CppType t953_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m17971_MI;
extern MethodInfo m32830_MI;
extern MethodInfo m32831_MI;


extern MethodInfo m17966_MI;
 void m17966 (t3220 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17966_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m17967_MI;
 void m17967 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17967_MI);
	t3221 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t3221 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t3221_TI));
	m17971(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m17971_MI);
	((t3220_SFs*)InitializedTypeInfo(&t3220_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m17968_MI;
 int32_t m17968 (t3220 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17968_MI);
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t1385  >::Invoke(&m32830_MI, __this, ((*(t1385 *)((t1385 *)UnBox (p0, InitializedTypeInfo(&t1385_TI))))));
		return L_0;
	}
}
extern MethodInfo m17969_MI;
 bool m17969 (t3220 * __this, t25 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17969_MI);
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t1385 , t1385  >::Invoke(&m32831_MI, __this, ((*(t1385 *)((t1385 *)UnBox (p0, InitializedTypeInfo(&t1385_TI))))), ((*(t1385 *)((t1385 *)UnBox (p1, InitializedTypeInfo(&t1385_TI))))));
		return L_0;
	}
}
extern MethodInfo m17970_MI;
 t3220 * m17970 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17970_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t3220_TI));
		return (((t3220_SFs*)InitializedTypeInfo(&t3220_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Guid>
extern Il2CppType t3220_0_0_49;
FieldInfo t3220_f0_FieldInfo = 
{
	"_default", &t3220_0_0_49, &t3220_TI, offsetof(t3220_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3220_FIs[] =
{
	&t3220_f0_FieldInfo,
	NULL
};
extern MethodInfo m17970_MI;
static PropertyInfo t3220____Default_PropertyInfo = 
{
	&t3220_TI, "Default", &m17970_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3220_PIs[] =
{
	&t3220____Default_PropertyInfo,
	NULL
};
extern TypeInfo t3220_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17966_MI = 
{
	".ctor", (methodPointerType)&m17966, &t3220_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3220_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17967_MI = 
{
	".cctor", (methodPointerType)&m17967, &t3220_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t3220_m17968_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t3220_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17968_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m17968, &t3220_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t3220_m17968_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t3220_m17969_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t3220_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17969_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m17969, &t3220_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t3220_m17969_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1385_0_0_0;
static ParameterInfo t3220_m32830_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
};
extern TypeInfo t3220_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1385 (MethodInfo* method, void* obj, void** args);
MethodInfo m32830_MI = 
{
	"GetHashCode", NULL, &t3220_TI, &t134_0_0_0, RuntimeInvoker_t134_t1385, t3220_m32830_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1385_0_0_0;
extern Il2CppType t1385_0_0_0;
static ParameterInfo t3220_m32831_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
};
extern TypeInfo t3220_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t1385_t1385 (MethodInfo* method, void* obj, void** args);
MethodInfo m32831_MI = 
{
	"Equals", NULL, &t3220_TI, &t125_0_0_0, RuntimeInvoker_t125_t1385_t1385, t3220_m32831_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3220_TI;
extern Il2CppType t3220_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17970_MI = 
{
	"get_Default", (methodPointerType)&m17970, &t3220_TI, &t3220_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3220_MIs[] =
{
	&m17966_MI,
	&m17967_MI,
	&m17968_MI,
	&m17969_MI,
	&m32830_MI,
	&m32831_MI,
	&m17970_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m32831_MI;
extern MethodInfo m32830_MI;
extern MethodInfo m17969_MI;
extern MethodInfo m17968_MI;
static MethodInfo* t3220_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m32831_MI,
	&m32830_MI,
	&m17969_MI,
	&m17968_MI,
	NULL,
	NULL,
};
extern TypeInfo t5894_TI;
extern TypeInfo t977_TI;
static TypeInfo* t3220_ITIs[] = 
{
	&t5894_TI,
	&t977_TI,
};
extern TypeInfo t5894_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t3220_IOs[] = 
{
	{ &t5894_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3220_0_0_0;
extern Il2CppType t3220_1_0_0;
extern TypeInfo t25_TI;
struct t3220;
extern TypeInfo t3220_TI;
extern Il2CppGenericClass t3220_GC;
TypeInfo t3220_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t3220_MIs, t3220_PIs, t3220_FIs, NULL, &t25_TI, NULL, NULL, &t3220_TI, t3220_ITIs, t3220_VT, &EmptyCustomAttributesCache, &t3220_TI, &t3220_0_0_0, &t3220_1_0_0, t3220_IOs, &t3220_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3220), 0, -1, sizeof(t3220_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5894_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Guid>
extern Il2CppType t1385_0_0_0;
extern Il2CppType t1385_0_0_0;
static ParameterInfo t5894_m32832_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
};
extern TypeInfo t5894_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t1385_t1385 (MethodInfo* method, void* obj, void** args);
MethodInfo m32832_MI = 
{
	"Equals", NULL, &t5894_TI, &t125_0_0_0, RuntimeInvoker_t125_t1385_t1385, t5894_m32832_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1385_0_0_0;
static ParameterInfo t5894_m32833_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
};
extern TypeInfo t5894_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1385 (MethodInfo* method, void* obj, void** args);
MethodInfo m32833_MI = 
{
	"GetHashCode", NULL, &t5894_TI, &t134_0_0_0, RuntimeInvoker_t134_t1385, t5894_m32833_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5894_MIs[] =
{
	&m32832_MI,
	&m32833_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5894_0_0_0;
extern Il2CppType t5894_1_0_0;
struct t5894;
extern TypeInfo t5894_TI;
extern Il2CppGenericClass t5894_GC;
TypeInfo t5894_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5894_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5894_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5894_TI, &t5894_0_0_0, &t5894_1_0_0, NULL, &t5894_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3221_TI;

extern TypeInfo t1385_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t125_TI;
extern MethodInfo m17966_MI;
extern MethodInfo m456_MI;
extern MethodInfo m455_MI;


extern MethodInfo m17971_MI;
 void m17971 (t3221 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17971_MI);
	{
		m17966(__this, &m17966_MI);
		return;
	}
}
extern MethodInfo m17972_MI;
 int32_t m17972 (t3221 * __this, t1385  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17972_MI);
	{
		t1385  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t1385_TI), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&t1385_TI), &(*(&p0))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m456_MI, Box(InitializedTypeInfo(&t1385_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m17973_MI;
 bool m17973 (t3221 * __this, t1385  p0, t1385  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17973_MI);
	{
		t1385  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t1385_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1385  L_2 = p1;
		t25 * L_3 = Box(InitializedTypeInfo(&t1385_TI), &L_2);
		return ((((t25 *)L_3) == ((t25 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t1385  L_4 = p1;
		t25 * L_5 = Box(InitializedTypeInfo(&t1385_TI), &L_4);
		NullCheck(Box(InitializedTypeInfo(&t1385_TI), &(*(&p0))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, t25 * >::Invoke(&m455_MI, Box(InitializedTypeInfo(&t1385_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
extern TypeInfo t3221_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17971_MI = 
{
	".ctor", (methodPointerType)&m17971, &t3221_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1385_0_0_0;
static ParameterInfo t3221_m17972_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
};
extern TypeInfo t3221_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t1385 (MethodInfo* method, void* obj, void** args);
MethodInfo m17972_MI = 
{
	"GetHashCode", (methodPointerType)&m17972, &t3221_TI, &t134_0_0_0, RuntimeInvoker_t134_t1385, t3221_m17972_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1385_0_0_0;
extern Il2CppType t1385_0_0_0;
static ParameterInfo t3221_m17973_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1385_0_0_0},
};
extern TypeInfo t3221_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t1385_t1385 (MethodInfo* method, void* obj, void** args);
MethodInfo m17973_MI = 
{
	"Equals", (methodPointerType)&m17973, &t3221_TI, &t125_0_0_0, RuntimeInvoker_t125_t1385_t1385, t3221_m17973_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3221_MIs[] =
{
	&m17971_MI,
	&m17972_MI,
	&m17973_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m17973_MI;
extern MethodInfo m17972_MI;
extern MethodInfo m17969_MI;
extern MethodInfo m17968_MI;
extern MethodInfo m17972_MI;
extern MethodInfo m17973_MI;
static MethodInfo* t3221_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m17973_MI,
	&m17972_MI,
	&m17969_MI,
	&m17968_MI,
	&m17972_MI,
	&m17973_MI,
};
extern TypeInfo t5894_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t3221_IOs[] = 
{
	{ &t5894_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3221_0_0_0;
extern Il2CppType t3221_1_0_0;
extern TypeInfo t3220_TI;
struct t3221;
extern TypeInfo t3221_TI;
extern Il2CppGenericClass t3221_GC;
extern TypeInfo t952_TI;
TypeInfo t3221_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t3221_MIs, NULL, NULL, NULL, &t3220_TI, NULL, &t952_TI, &t3221_TI, NULL, t3221_VT, &EmptyCustomAttributesCache, &t3221_TI, &t3221_0_0_0, &t3221_1_0_0, t3221_IOs, &t3221_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3221), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4212_TI;

#include "t1350.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>
extern MethodInfo m32834_MI;
static PropertyInfo t4212____Current_PropertyInfo = 
{
	&t4212_TI, "Current", &m32834_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4212_PIs[] =
{
	&t4212____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4212_TI;
extern Il2CppType t1350_0_0_0;
extern void* RuntimeInvoker_t1350 (MethodInfo* method, void* obj, void** args);
MethodInfo m32834_MI = 
{
	"get_Current", NULL, &t4212_TI, &t1350_0_0_0, RuntimeInvoker_t1350, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4212_MIs[] =
{
	&m32834_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4212_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4212_0_0_0;
extern Il2CppType t4212_1_0_0;
struct t4212;
extern TypeInfo t4212_TI;
extern Il2CppGenericClass t4212_GC;
TypeInfo t4212_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4212_MIs, t4212_PIs, NULL, NULL, NULL, NULL, NULL, &t4212_TI, t4212_ITIs, NULL, &EmptyCustomAttributesCache, &t4212_TI, &t4212_0_0_0, &t4212_1_0_0, NULL, &t4212_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3222.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3222_TI;
#include "t3222MD.h"

extern TypeInfo t3222_TI;
extern TypeInfo t1350_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m17978_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m24789_MI;
struct t122;
 int32_t m24789 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m24789_MI;


extern MethodInfo m17974_MI;
 void m17974 (t3222 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17974_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m17975_MI;
 t25 * m17975 (t3222 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17975_MI);
	{
		int32_t L_0 = m17978(__this, &m17978_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t1350_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m17976_MI;
 void m17976 (t3222 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17976_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m17977_MI;
 bool m17977 (t3222 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17977_MI);
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
extern MethodInfo m17978_MI;
 int32_t m17978 (t3222 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17978_MI);
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
		int32_t L_8 = m24789(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24789_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.LoaderOptimization>
extern Il2CppType t122_0_0_1;
FieldInfo t3222_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3222_TI, offsetof(t3222, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3222_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3222_TI, offsetof(t3222, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3222_FIs[] =
{
	&t3222_f0_FieldInfo,
	&t3222_f1_FieldInfo,
	NULL
};
extern MethodInfo m17975_MI;
static PropertyInfo t3222____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3222_TI, "System.Collections.IEnumerator.Current", &m17975_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m17978_MI;
static PropertyInfo t3222____Current_PropertyInfo = 
{
	&t3222_TI, "Current", &m17978_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3222_PIs[] =
{
	&t3222____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3222____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3222_m17974_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3222_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17974_MI = 
{
	".ctor", (methodPointerType)&m17974, &t3222_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3222_m17974_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3222_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17975_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m17975, &t3222_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3222_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17976_MI = 
{
	"Dispose", (methodPointerType)&m17976, &t3222_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3222_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m17977_MI = 
{
	"MoveNext", (methodPointerType)&m17977, &t3222_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3222_TI;
extern Il2CppType t1350_0_0_0;
extern void* RuntimeInvoker_t1350 (MethodInfo* method, void* obj, void** args);
MethodInfo m17978_MI = 
{
	"get_Current", (methodPointerType)&m17978, &t3222_TI, &t1350_0_0_0, RuntimeInvoker_t1350, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3222_MIs[] =
{
	&m17974_MI,
	&m17975_MI,
	&m17976_MI,
	&m17977_MI,
	&m17978_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m17975_MI;
extern MethodInfo m17977_MI;
extern MethodInfo m17976_MI;
extern MethodInfo m17978_MI;
static MethodInfo* t3222_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m17975_MI,
	&m17977_MI,
	&m17976_MI,
	&m17978_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4212_TI;
static TypeInfo* t3222_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4212_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4212_TI;
static Il2CppInterfaceOffsetPair t3222_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4212_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3222_0_0_0;
extern Il2CppType t3222_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3222_TI;
extern Il2CppGenericClass t3222_GC;
extern TypeInfo t122_TI;
TypeInfo t3222_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3222_MIs, t3222_PIs, t3222_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3222_TI, t3222_ITIs, t3222_VT, &EmptyCustomAttributesCache, &t3222_TI, &t3222_0_0_0, &t3222_1_0_0, t3222_IOs, &t3222_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3222)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5783_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.LoaderOptimization>
extern MethodInfo m32835_MI;
static PropertyInfo t5783____Count_PropertyInfo = 
{
	&t5783_TI, "Count", &m32835_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32836_MI;
static PropertyInfo t5783____IsReadOnly_PropertyInfo = 
{
	&t5783_TI, "IsReadOnly", &m32836_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5783_PIs[] =
{
	&t5783____Count_PropertyInfo,
	&t5783____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5783_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32835_MI = 
{
	"get_Count", NULL, &t5783_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5783_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m32836_MI = 
{
	"get_IsReadOnly", NULL, &t5783_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1350_0_0_0;
static ParameterInfo t5783_m32837_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1350_0_0_0},
};
extern TypeInfo t5783_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32837_MI = 
{
	"Add", NULL, &t5783_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5783_m32837_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5783_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m32838_MI = 
{
	"Clear", NULL, &t5783_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1350_0_0_0;
static ParameterInfo t5783_m32839_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1350_0_0_0},
};
extern TypeInfo t5783_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32839_MI = 
{
	"Contains", NULL, &t5783_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t5783_m32839_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3473_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5783_m32840_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3473_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5783_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32840_MI = 
{
	"CopyTo", NULL, &t5783_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5783_m32840_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1350_0_0_0;
static ParameterInfo t5783_m32841_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1350_0_0_0},
};
extern TypeInfo t5783_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32841_MI = 
{
	"Remove", NULL, &t5783_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t5783_m32841_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5783_MIs[] =
{
	&m32835_MI,
	&m32836_MI,
	&m32837_MI,
	&m32838_MI,
	&m32839_MI,
	&m32840_MI,
	&m32841_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5785_TI;
static TypeInfo* t5783_ITIs[] = 
{
	&t703_TI,
	&t5785_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5783_0_0_0;
extern Il2CppType t5783_1_0_0;
struct t5783;
extern TypeInfo t5783_TI;
extern Il2CppGenericClass t5783_GC;
TypeInfo t5783_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5783_MIs, t5783_PIs, NULL, NULL, NULL, NULL, NULL, &t5783_TI, t5783_ITIs, NULL, &EmptyCustomAttributesCache, &t5783_TI, &t5783_0_0_0, &t5783_1_0_0, NULL, &t5783_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5785_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>
extern TypeInfo t5785_TI;
extern Il2CppType t4212_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32842_MI = 
{
	"GetEnumerator", NULL, &t5785_TI, &t4212_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5785_MIs[] =
{
	&m32842_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5785_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5785_0_0_0;
extern Il2CppType t5785_1_0_0;
struct t5785;
extern TypeInfo t5785_TI;
extern Il2CppGenericClass t5785_GC;
TypeInfo t5785_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5785_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5785_TI, t5785_ITIs, NULL, &EmptyCustomAttributesCache, &t5785_TI, &t5785_0_0_0, &t5785_1_0_0, NULL, &t5785_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5784_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.LoaderOptimization>
extern MethodInfo m32843_MI;
extern MethodInfo m32844_MI;
static PropertyInfo t5784____Item_PropertyInfo = 
{
	&t5784_TI, "Item", &m32843_MI, &m32844_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5784_PIs[] =
{
	&t5784____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1350_0_0_0;
static ParameterInfo t5784_m32845_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1350_0_0_0},
};
extern TypeInfo t5784_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32845_MI = 
{
	"IndexOf", NULL, &t5784_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t5784_m32845_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1350_0_0_0;
static ParameterInfo t5784_m32846_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1350_0_0_0},
};
extern TypeInfo t5784_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32846_MI = 
{
	"Insert", NULL, &t5784_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t5784_m32846_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5784_m32847_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5784_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32847_MI = 
{
	"RemoveAt", NULL, &t5784_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5784_m32847_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5784_m32843_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5784_TI;
extern Il2CppType t1350_0_0_0;
extern void* RuntimeInvoker_t1350_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32843_MI = 
{
	"get_Item", NULL, &t5784_TI, &t1350_0_0_0, RuntimeInvoker_t1350_t134, t5784_m32843_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1350_0_0_0;
static ParameterInfo t5784_m32844_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1350_0_0_0},
};
extern TypeInfo t5784_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32844_MI = 
{
	"set_Item", NULL, &t5784_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t5784_m32844_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5784_MIs[] =
{
	&m32845_MI,
	&m32846_MI,
	&m32847_MI,
	&m32843_MI,
	&m32844_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5783_TI;
extern TypeInfo t5785_TI;
static TypeInfo* t5784_ITIs[] = 
{
	&t703_TI,
	&t5783_TI,
	&t5785_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5784_0_0_0;
extern Il2CppType t5784_1_0_0;
struct t5784;
extern TypeInfo t5784_TI;
extern Il2CppGenericClass t5784_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5784_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5784_MIs, t5784_PIs, NULL, NULL, NULL, NULL, NULL, &t5784_TI, t5784_ITIs, NULL, &t1518__CustomAttributeCache, &t5784_TI, &t5784_0_0_0, &t5784_1_0_0, NULL, &t5784_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4213_TI;

#include "t1400.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>
extern MethodInfo m32848_MI;
static PropertyInfo t4213____Current_PropertyInfo = 
{
	&t4213_TI, "Current", &m32848_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4213_PIs[] =
{
	&t4213____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4213_TI;
extern Il2CppType t1400_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32848_MI = 
{
	"get_Current", NULL, &t4213_TI, &t1400_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4213_MIs[] =
{
	&m32848_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4213_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4213_0_0_0;
extern Il2CppType t4213_1_0_0;
struct t4213;
extern TypeInfo t4213_TI;
extern Il2CppGenericClass t4213_GC;
TypeInfo t4213_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4213_MIs, t4213_PIs, NULL, NULL, NULL, NULL, NULL, &t4213_TI, t4213_ITIs, NULL, &EmptyCustomAttributesCache, &t4213_TI, &t4213_0_0_0, &t4213_1_0_0, NULL, &t4213_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3223.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3223_TI;
#include "t3223MD.h"

extern TypeInfo t3223_TI;
extern TypeInfo t1400_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m17983_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m24800_MI;
struct t122;
struct t122;
 t25 * m18022_gshared (t122 * __this, int32_t p0, MethodInfo* method);
#define m18022(__this, p0, method) (t25 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
#define m24800(__this, p0, method) (t1400 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m24800_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.NonSerializedAttribute>
extern Il2CppType t122_0_0_1;
FieldInfo t3223_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3223_TI, offsetof(t3223, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3223_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3223_TI, offsetof(t3223, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3223_FIs[] =
{
	&t3223_f0_FieldInfo,
	&t3223_f1_FieldInfo,
	NULL
};
extern MethodInfo m17980_MI;
static PropertyInfo t3223____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3223_TI, "System.Collections.IEnumerator.Current", &m17980_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m17983_MI;
static PropertyInfo t3223____Current_PropertyInfo = 
{
	&t3223_TI, "Current", &m17983_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3223_PIs[] =
{
	&t3223____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3223____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3223_m17979_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3223_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17979_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3223_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3223_m17979_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3223_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17980_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3223_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3223_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17981_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3223_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3223_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m17982_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3223_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3223_TI;
extern Il2CppType t1400_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17983_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3223_TI, &t1400_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3223_MIs[] =
{
	&m17979_MI,
	&m17980_MI,
	&m17981_MI,
	&m17982_MI,
	&m17983_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m17980_MI;
extern MethodInfo m17982_MI;
extern MethodInfo m17981_MI;
extern MethodInfo m17983_MI;
static MethodInfo* t3223_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m17980_MI,
	&m17982_MI,
	&m17981_MI,
	&m17983_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4213_TI;
static TypeInfo* t3223_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4213_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4213_TI;
static Il2CppInterfaceOffsetPair t3223_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4213_TI, 7},
};
extern MethodInfo m17983_MI;
extern TypeInfo t1400_TI;
extern MethodInfo m24800_MI;
static void* t3223_RGCTXData[3] = 
{
	&m17983_MI,
	&t1400_TI,
	&m24800_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3223_0_0_0;
extern Il2CppType t3223_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3223_TI;
extern Il2CppGenericClass t3223_GC;
extern TypeInfo t122_TI;
TypeInfo t3223_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3223_MIs, t3223_PIs, t3223_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3223_TI, t3223_ITIs, t3223_VT, &EmptyCustomAttributesCache, &t3223_TI, &t3223_0_0_0, &t3223_1_0_0, t3223_IOs, &t3223_GC, NULL, NULL, NULL, t3223_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3223)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5786_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>
extern MethodInfo m32849_MI;
static PropertyInfo t5786____Count_PropertyInfo = 
{
	&t5786_TI, "Count", &m32849_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32850_MI;
static PropertyInfo t5786____IsReadOnly_PropertyInfo = 
{
	&t5786_TI, "IsReadOnly", &m32850_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5786_PIs[] =
{
	&t5786____Count_PropertyInfo,
	&t5786____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5786_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32849_MI = 
{
	"get_Count", NULL, &t5786_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5786_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m32850_MI = 
{
	"get_IsReadOnly", NULL, &t5786_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1400_0_0_0;
static ParameterInfo t5786_m32851_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1400_0_0_0},
};
extern TypeInfo t5786_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32851_MI = 
{
	"Add", NULL, &t5786_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5786_m32851_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5786_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m32852_MI = 
{
	"Clear", NULL, &t5786_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1400_0_0_0;
static ParameterInfo t5786_m32853_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1400_0_0_0},
};
extern TypeInfo t5786_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32853_MI = 
{
	"Contains", NULL, &t5786_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5786_m32853_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3474_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5786_m32854_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3474_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5786_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32854_MI = 
{
	"CopyTo", NULL, &t5786_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5786_m32854_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1400_0_0_0;
static ParameterInfo t5786_m32855_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1400_0_0_0},
};
extern TypeInfo t5786_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32855_MI = 
{
	"Remove", NULL, &t5786_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5786_m32855_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5786_MIs[] =
{
	&m32849_MI,
	&m32850_MI,
	&m32851_MI,
	&m32852_MI,
	&m32853_MI,
	&m32854_MI,
	&m32855_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5788_TI;
static TypeInfo* t5786_ITIs[] = 
{
	&t703_TI,
	&t5788_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5786_0_0_0;
extern Il2CppType t5786_1_0_0;
struct t5786;
extern TypeInfo t5786_TI;
extern Il2CppGenericClass t5786_GC;
TypeInfo t5786_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5786_MIs, t5786_PIs, NULL, NULL, NULL, NULL, NULL, &t5786_TI, t5786_ITIs, NULL, &EmptyCustomAttributesCache, &t5786_TI, &t5786_0_0_0, &t5786_1_0_0, NULL, &t5786_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5788_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>
extern TypeInfo t5788_TI;
extern Il2CppType t4213_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32856_MI = 
{
	"GetEnumerator", NULL, &t5788_TI, &t4213_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5788_MIs[] =
{
	&m32856_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5788_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5788_0_0_0;
extern Il2CppType t5788_1_0_0;
struct t5788;
extern TypeInfo t5788_TI;
extern Il2CppGenericClass t5788_GC;
TypeInfo t5788_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5788_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5788_TI, t5788_ITIs, NULL, &EmptyCustomAttributesCache, &t5788_TI, &t5788_0_0_0, &t5788_1_0_0, NULL, &t5788_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5787_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.NonSerializedAttribute>
extern MethodInfo m32857_MI;
extern MethodInfo m32858_MI;
static PropertyInfo t5787____Item_PropertyInfo = 
{
	&t5787_TI, "Item", &m32857_MI, &m32858_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5787_PIs[] =
{
	&t5787____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1400_0_0_0;
static ParameterInfo t5787_m32859_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1400_0_0_0},
};
extern TypeInfo t5787_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32859_MI = 
{
	"IndexOf", NULL, &t5787_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5787_m32859_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1400_0_0_0;
static ParameterInfo t5787_m32860_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1400_0_0_0},
};
extern TypeInfo t5787_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32860_MI = 
{
	"Insert", NULL, &t5787_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5787_m32860_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5787_m32861_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5787_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32861_MI = 
{
	"RemoveAt", NULL, &t5787_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5787_m32861_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5787_m32857_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5787_TI;
extern Il2CppType t1400_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32857_MI = 
{
	"get_Item", NULL, &t5787_TI, &t1400_0_0_0, RuntimeInvoker_t25_t134, t5787_m32857_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1400_0_0_0;
static ParameterInfo t5787_m32858_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1400_0_0_0},
};
extern TypeInfo t5787_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32858_MI = 
{
	"set_Item", NULL, &t5787_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5787_m32858_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5787_MIs[] =
{
	&m32859_MI,
	&m32860_MI,
	&m32861_MI,
	&m32857_MI,
	&m32858_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5786_TI;
extern TypeInfo t5788_TI;
static TypeInfo* t5787_ITIs[] = 
{
	&t703_TI,
	&t5786_TI,
	&t5788_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5787_0_0_0;
extern Il2CppType t5787_1_0_0;
struct t5787;
extern TypeInfo t5787_TI;
extern Il2CppGenericClass t5787_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5787_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5787_MIs, t5787_PIs, NULL, NULL, NULL, NULL, NULL, &t5787_TI, t5787_ITIs, NULL, &t1518__CustomAttributeCache, &t5787_TI, &t5787_0_0_0, &t5787_1_0_0, NULL, &t5787_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4214_TI;

#include "t1380.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.PlatformID>
extern MethodInfo m32862_MI;
static PropertyInfo t4214____Current_PropertyInfo = 
{
	&t4214_TI, "Current", &m32862_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4214_PIs[] =
{
	&t4214____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4214_TI;
extern Il2CppType t1380_0_0_0;
extern void* RuntimeInvoker_t1380 (MethodInfo* method, void* obj, void** args);
MethodInfo m32862_MI = 
{
	"get_Current", NULL, &t4214_TI, &t1380_0_0_0, RuntimeInvoker_t1380, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4214_MIs[] =
{
	&m32862_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4214_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4214_0_0_0;
extern Il2CppType t4214_1_0_0;
struct t4214;
extern TypeInfo t4214_TI;
extern Il2CppGenericClass t4214_GC;
TypeInfo t4214_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4214_MIs, t4214_PIs, NULL, NULL, NULL, NULL, NULL, &t4214_TI, t4214_ITIs, NULL, &EmptyCustomAttributesCache, &t4214_TI, &t4214_0_0_0, &t4214_1_0_0, NULL, &t4214_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3224.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3224_TI;
#include "t3224MD.h"

extern TypeInfo t3224_TI;
extern TypeInfo t1380_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m17988_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m24811_MI;
struct t122;
 int32_t m24811 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m24811_MI;


extern MethodInfo m17984_MI;
 void m17984 (t3224 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17984_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m17985_MI;
 t25 * m17985 (t3224 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17985_MI);
	{
		int32_t L_0 = m17988(__this, &m17988_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t1380_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m17986_MI;
 void m17986 (t3224 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17986_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m17987_MI;
 bool m17987 (t3224 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17987_MI);
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
extern MethodInfo m17988_MI;
 int32_t m17988 (t3224 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17988_MI);
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
		int32_t L_8 = m24811(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24811_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.PlatformID>
extern Il2CppType t122_0_0_1;
FieldInfo t3224_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3224_TI, offsetof(t3224, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3224_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3224_TI, offsetof(t3224, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3224_FIs[] =
{
	&t3224_f0_FieldInfo,
	&t3224_f1_FieldInfo,
	NULL
};
extern MethodInfo m17985_MI;
static PropertyInfo t3224____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3224_TI, "System.Collections.IEnumerator.Current", &m17985_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m17988_MI;
static PropertyInfo t3224____Current_PropertyInfo = 
{
	&t3224_TI, "Current", &m17988_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3224_PIs[] =
{
	&t3224____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3224____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3224_m17984_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3224_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17984_MI = 
{
	".ctor", (methodPointerType)&m17984, &t3224_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3224_m17984_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3224_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17985_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m17985, &t3224_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3224_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17986_MI = 
{
	"Dispose", (methodPointerType)&m17986, &t3224_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3224_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m17987_MI = 
{
	"MoveNext", (methodPointerType)&m17987, &t3224_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3224_TI;
extern Il2CppType t1380_0_0_0;
extern void* RuntimeInvoker_t1380 (MethodInfo* method, void* obj, void** args);
MethodInfo m17988_MI = 
{
	"get_Current", (methodPointerType)&m17988, &t3224_TI, &t1380_0_0_0, RuntimeInvoker_t1380, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3224_MIs[] =
{
	&m17984_MI,
	&m17985_MI,
	&m17986_MI,
	&m17987_MI,
	&m17988_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m17985_MI;
extern MethodInfo m17987_MI;
extern MethodInfo m17986_MI;
extern MethodInfo m17988_MI;
static MethodInfo* t3224_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m17985_MI,
	&m17987_MI,
	&m17986_MI,
	&m17988_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4214_TI;
static TypeInfo* t3224_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4214_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4214_TI;
static Il2CppInterfaceOffsetPair t3224_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4214_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3224_0_0_0;
extern Il2CppType t3224_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3224_TI;
extern Il2CppGenericClass t3224_GC;
extern TypeInfo t122_TI;
TypeInfo t3224_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3224_MIs, t3224_PIs, t3224_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3224_TI, t3224_ITIs, t3224_VT, &EmptyCustomAttributesCache, &t3224_TI, &t3224_0_0_0, &t3224_1_0_0, t3224_IOs, &t3224_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3224)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5789_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.PlatformID>
extern MethodInfo m32863_MI;
static PropertyInfo t5789____Count_PropertyInfo = 
{
	&t5789_TI, "Count", &m32863_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32864_MI;
static PropertyInfo t5789____IsReadOnly_PropertyInfo = 
{
	&t5789_TI, "IsReadOnly", &m32864_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5789_PIs[] =
{
	&t5789____Count_PropertyInfo,
	&t5789____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5789_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32863_MI = 
{
	"get_Count", NULL, &t5789_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5789_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m32864_MI = 
{
	"get_IsReadOnly", NULL, &t5789_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1380_0_0_0;
static ParameterInfo t5789_m32865_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1380_0_0_0},
};
extern TypeInfo t5789_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32865_MI = 
{
	"Add", NULL, &t5789_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5789_m32865_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5789_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m32866_MI = 
{
	"Clear", NULL, &t5789_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1380_0_0_0;
static ParameterInfo t5789_m32867_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1380_0_0_0},
};
extern TypeInfo t5789_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32867_MI = 
{
	"Contains", NULL, &t5789_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t5789_m32867_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3475_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5789_m32868_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3475_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5789_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32868_MI = 
{
	"CopyTo", NULL, &t5789_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5789_m32868_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1380_0_0_0;
static ParameterInfo t5789_m32869_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1380_0_0_0},
};
extern TypeInfo t5789_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32869_MI = 
{
	"Remove", NULL, &t5789_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t5789_m32869_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5789_MIs[] =
{
	&m32863_MI,
	&m32864_MI,
	&m32865_MI,
	&m32866_MI,
	&m32867_MI,
	&m32868_MI,
	&m32869_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5791_TI;
static TypeInfo* t5789_ITIs[] = 
{
	&t703_TI,
	&t5791_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5789_0_0_0;
extern Il2CppType t5789_1_0_0;
struct t5789;
extern TypeInfo t5789_TI;
extern Il2CppGenericClass t5789_GC;
TypeInfo t5789_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5789_MIs, t5789_PIs, NULL, NULL, NULL, NULL, NULL, &t5789_TI, t5789_ITIs, NULL, &EmptyCustomAttributesCache, &t5789_TI, &t5789_0_0_0, &t5789_1_0_0, NULL, &t5789_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5791_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.PlatformID>
extern TypeInfo t5791_TI;
extern Il2CppType t4214_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32870_MI = 
{
	"GetEnumerator", NULL, &t5791_TI, &t4214_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5791_MIs[] =
{
	&m32870_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5791_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5791_0_0_0;
extern Il2CppType t5791_1_0_0;
struct t5791;
extern TypeInfo t5791_TI;
extern Il2CppGenericClass t5791_GC;
TypeInfo t5791_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5791_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5791_TI, t5791_ITIs, NULL, &EmptyCustomAttributesCache, &t5791_TI, &t5791_0_0_0, &t5791_1_0_0, NULL, &t5791_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5790_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.PlatformID>
extern MethodInfo m32871_MI;
extern MethodInfo m32872_MI;
static PropertyInfo t5790____Item_PropertyInfo = 
{
	&t5790_TI, "Item", &m32871_MI, &m32872_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5790_PIs[] =
{
	&t5790____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1380_0_0_0;
static ParameterInfo t5790_m32873_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1380_0_0_0},
};
extern TypeInfo t5790_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32873_MI = 
{
	"IndexOf", NULL, &t5790_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t5790_m32873_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1380_0_0_0;
static ParameterInfo t5790_m32874_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1380_0_0_0},
};
extern TypeInfo t5790_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32874_MI = 
{
	"Insert", NULL, &t5790_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t5790_m32874_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5790_m32875_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5790_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32875_MI = 
{
	"RemoveAt", NULL, &t5790_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5790_m32875_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5790_m32871_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5790_TI;
extern Il2CppType t1380_0_0_0;
extern void* RuntimeInvoker_t1380_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32871_MI = 
{
	"get_Item", NULL, &t5790_TI, &t1380_0_0_0, RuntimeInvoker_t1380_t134, t5790_m32871_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1380_0_0_0;
static ParameterInfo t5790_m32872_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1380_0_0_0},
};
extern TypeInfo t5790_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32872_MI = 
{
	"set_Item", NULL, &t5790_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t5790_m32872_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5790_MIs[] =
{
	&m32873_MI,
	&m32874_MI,
	&m32875_MI,
	&m32871_MI,
	&m32872_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5789_TI;
extern TypeInfo t5791_TI;
static TypeInfo* t5790_ITIs[] = 
{
	&t703_TI,
	&t5789_TI,
	&t5791_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5790_0_0_0;
extern Il2CppType t5790_1_0_0;
struct t5790;
extern TypeInfo t5790_TI;
extern Il2CppGenericClass t5790_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5790_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5790_MIs, t5790_PIs, NULL, NULL, NULL, NULL, NULL, &t5790_TI, t5790_ITIs, NULL, &t1518__CustomAttributeCache, &t5790_TI, &t5790_0_0_0, &t5790_1_0_0, NULL, &t5790_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4215_TI;

#include "t1411.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ThreadStaticAttribute>
extern MethodInfo m32876_MI;
static PropertyInfo t4215____Current_PropertyInfo = 
{
	&t4215_TI, "Current", &m32876_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4215_PIs[] =
{
	&t4215____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4215_TI;
extern Il2CppType t1411_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32876_MI = 
{
	"get_Current", NULL, &t4215_TI, &t1411_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4215_MIs[] =
{
	&m32876_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4215_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4215_0_0_0;
extern Il2CppType t4215_1_0_0;
struct t4215;
extern TypeInfo t4215_TI;
extern Il2CppGenericClass t4215_GC;
TypeInfo t4215_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4215_MIs, t4215_PIs, NULL, NULL, NULL, NULL, NULL, &t4215_TI, t4215_ITIs, NULL, &EmptyCustomAttributesCache, &t4215_TI, &t4215_0_0_0, &t4215_1_0_0, NULL, &t4215_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3225.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3225_TI;
#include "t3225MD.h"

extern TypeInfo t3225_TI;
extern TypeInfo t1411_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m17993_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m24822_MI;
struct t122;
#define m24822(__this, p0, method) (t1411 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m24822_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>
extern Il2CppType t122_0_0_1;
FieldInfo t3225_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3225_TI, offsetof(t3225, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3225_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3225_TI, offsetof(t3225, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3225_FIs[] =
{
	&t3225_f0_FieldInfo,
	&t3225_f1_FieldInfo,
	NULL
};
extern MethodInfo m17990_MI;
static PropertyInfo t3225____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3225_TI, "System.Collections.IEnumerator.Current", &m17990_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m17993_MI;
static PropertyInfo t3225____Current_PropertyInfo = 
{
	&t3225_TI, "Current", &m17993_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3225_PIs[] =
{
	&t3225____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3225____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3225_m17989_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3225_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17989_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t3225_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3225_m17989_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3225_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17990_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t3225_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3225_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17991_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t3225_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3225_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m17992_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t3225_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3225_TI;
extern Il2CppType t1411_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17993_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t3225_TI, &t1411_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3225_MIs[] =
{
	&m17989_MI,
	&m17990_MI,
	&m17991_MI,
	&m17992_MI,
	&m17993_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m17990_MI;
extern MethodInfo m17992_MI;
extern MethodInfo m17991_MI;
extern MethodInfo m17993_MI;
static MethodInfo* t3225_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m17990_MI,
	&m17992_MI,
	&m17991_MI,
	&m17993_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4215_TI;
static TypeInfo* t3225_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4215_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4215_TI;
static Il2CppInterfaceOffsetPair t3225_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4215_TI, 7},
};
extern MethodInfo m17993_MI;
extern TypeInfo t1411_TI;
extern MethodInfo m24822_MI;
static void* t3225_RGCTXData[3] = 
{
	&m17993_MI,
	&t1411_TI,
	&m24822_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3225_0_0_0;
extern Il2CppType t3225_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3225_TI;
extern Il2CppGenericClass t3225_GC;
extern TypeInfo t122_TI;
TypeInfo t3225_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3225_MIs, t3225_PIs, t3225_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3225_TI, t3225_ITIs, t3225_VT, &EmptyCustomAttributesCache, &t3225_TI, &t3225_0_0_0, &t3225_1_0_0, t3225_IOs, &t3225_GC, NULL, NULL, NULL, t3225_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3225)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5792_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>
extern MethodInfo m32877_MI;
static PropertyInfo t5792____Count_PropertyInfo = 
{
	&t5792_TI, "Count", &m32877_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32878_MI;
static PropertyInfo t5792____IsReadOnly_PropertyInfo = 
{
	&t5792_TI, "IsReadOnly", &m32878_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5792_PIs[] =
{
	&t5792____Count_PropertyInfo,
	&t5792____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5792_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32877_MI = 
{
	"get_Count", NULL, &t5792_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5792_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m32878_MI = 
{
	"get_IsReadOnly", NULL, &t5792_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1411_0_0_0;
static ParameterInfo t5792_m32879_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1411_0_0_0},
};
extern TypeInfo t5792_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32879_MI = 
{
	"Add", NULL, &t5792_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t5792_m32879_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5792_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m32880_MI = 
{
	"Clear", NULL, &t5792_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1411_0_0_0;
static ParameterInfo t5792_m32881_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1411_0_0_0},
};
extern TypeInfo t5792_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32881_MI = 
{
	"Contains", NULL, &t5792_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5792_m32881_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3476_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5792_m32882_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3476_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5792_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32882_MI = 
{
	"CopyTo", NULL, &t5792_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5792_m32882_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1411_0_0_0;
static ParameterInfo t5792_m32883_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1411_0_0_0},
};
extern TypeInfo t5792_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32883_MI = 
{
	"Remove", NULL, &t5792_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5792_m32883_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5792_MIs[] =
{
	&m32877_MI,
	&m32878_MI,
	&m32879_MI,
	&m32880_MI,
	&m32881_MI,
	&m32882_MI,
	&m32883_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5794_TI;
static TypeInfo* t5792_ITIs[] = 
{
	&t703_TI,
	&t5794_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5792_0_0_0;
extern Il2CppType t5792_1_0_0;
struct t5792;
extern TypeInfo t5792_TI;
extern Il2CppGenericClass t5792_GC;
TypeInfo t5792_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5792_MIs, t5792_PIs, NULL, NULL, NULL, NULL, NULL, &t5792_TI, t5792_ITIs, NULL, &EmptyCustomAttributesCache, &t5792_TI, &t5792_0_0_0, &t5792_1_0_0, NULL, &t5792_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5794_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ThreadStaticAttribute>
extern TypeInfo t5794_TI;
extern Il2CppType t4215_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32884_MI = 
{
	"GetEnumerator", NULL, &t5794_TI, &t4215_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5794_MIs[] =
{
	&m32884_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5794_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5794_0_0_0;
extern Il2CppType t5794_1_0_0;
struct t5794;
extern TypeInfo t5794_TI;
extern Il2CppGenericClass t5794_GC;
TypeInfo t5794_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5794_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5794_TI, t5794_ITIs, NULL, &EmptyCustomAttributesCache, &t5794_TI, &t5794_0_0_0, &t5794_1_0_0, NULL, &t5794_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5793_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.ThreadStaticAttribute>
extern MethodInfo m32885_MI;
extern MethodInfo m32886_MI;
static PropertyInfo t5793____Item_PropertyInfo = 
{
	&t5793_TI, "Item", &m32885_MI, &m32886_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5793_PIs[] =
{
	&t5793____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1411_0_0_0;
static ParameterInfo t5793_m32887_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1411_0_0_0},
};
extern TypeInfo t5793_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32887_MI = 
{
	"IndexOf", NULL, &t5793_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5793_m32887_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1411_0_0_0;
static ParameterInfo t5793_m32888_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1411_0_0_0},
};
extern TypeInfo t5793_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32888_MI = 
{
	"Insert", NULL, &t5793_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5793_m32888_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5793_m32889_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5793_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32889_MI = 
{
	"RemoveAt", NULL, &t5793_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5793_m32889_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5793_m32885_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5793_TI;
extern Il2CppType t1411_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32885_MI = 
{
	"get_Item", NULL, &t5793_TI, &t1411_0_0_0, RuntimeInvoker_t25_t134, t5793_m32885_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1411_0_0_0;
static ParameterInfo t5793_m32886_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1411_0_0_0},
};
extern TypeInfo t5793_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32886_MI = 
{
	"set_Item", NULL, &t5793_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t5793_m32886_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5793_MIs[] =
{
	&m32887_MI,
	&m32888_MI,
	&m32889_MI,
	&m32885_MI,
	&m32886_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5792_TI;
extern TypeInfo t5794_TI;
static TypeInfo* t5793_ITIs[] = 
{
	&t703_TI,
	&t5792_TI,
	&t5794_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5793_0_0_0;
extern Il2CppType t5793_1_0_0;
struct t5793;
extern TypeInfo t5793_TI;
extern Il2CppGenericClass t5793_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5793_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5793_MIs, t5793_PIs, NULL, NULL, NULL, NULL, NULL, &t5793_TI, t5793_ITIs, NULL, &t1518__CustomAttributeCache, &t5793_TI, &t5793_0_0_0, &t5793_1_0_0, NULL, &t5793_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1691.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1691_TI;
#include "t1691MD.h"

extern TypeInfo t996_TI;
extern TypeInfo t1693_TI;
extern TypeInfo t134_TI;
#include "t3226MD.h"
extern MethodInfo m17995_MI;
extern MethodInfo m32418_MI;


extern MethodInfo m8365_MI;
 void m8365 (t1691 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m8365_MI);
	{
		m17995(__this, &m17995_MI);
		return;
	}
}
extern MethodInfo m17994_MI;
 int32_t m17994 (t1691 * __this, t996  p0, t996  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17994_MI);
	int32_t G_B4_0 = 0;
	{
		t996  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t996_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t996  L_2 = p1;
		t25 * L_3 = Box(InitializedTypeInfo(&t996_TI), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		t996  L_4 = p1;
		t25 * L_5 = Box(InitializedTypeInfo(&t996_TI), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(InitializedTypeInfo(&t996_TI), &(*(&p0))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, t996  >::Invoke(&m32418_MI, Box(InitializedTypeInfo(&t996_TI), &(*(&p0))), p1);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.TimeSpan>
extern TypeInfo t1691_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8365_MI = 
{
	".ctor", (methodPointerType)&m8365, &t1691_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t996_0_0_0;
extern Il2CppType t996_0_0_0;
static ParameterInfo t1691_m17994_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t1691_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t996_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m17994_MI = 
{
	"Compare", (methodPointerType)&m17994, &t1691_TI, &t134_0_0_0, RuntimeInvoker_t134_t996_t996, t1691_m17994_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1691_MIs[] =
{
	&m8365_MI,
	&m17994_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m17994_MI;
extern MethodInfo m17997_MI;
extern MethodInfo m17994_MI;
static MethodInfo* t1691_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m17994_MI,
	&m17997_MI,
	&m17994_MI,
};
extern TypeInfo t5895_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t1691_IOs[] = 
{
	{ &t5895_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1691_0_0_0;
extern Il2CppType t1691_1_0_0;
extern TypeInfo t3226_TI;
struct t1691;
extern TypeInfo t1691_TI;
extern Il2CppGenericClass t1691_GC;
TypeInfo t1691_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericComparer`1", "System.Collections.Generic", t1691_MIs, NULL, NULL, NULL, &t3226_TI, NULL, NULL, &t1691_TI, NULL, t1691_VT, &EmptyCustomAttributesCache, &t1691_TI, &t1691_0_0_0, &t1691_1_0_0, t1691_IOs, &t1691_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1691), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t3226.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3226_TI;

#include "t3227.h"
extern TypeInfo t3226_TI;
extern TypeInfo t1693_TI;
extern TypeInfo t131_TI;
extern TypeInfo t996_TI;
extern TypeInfo t125_TI;
extern TypeInfo t941_TI;
extern TypeInfo t637_TI;
extern TypeInfo t3227_TI;
extern TypeInfo t134_TI;
extern TypeInfo t445_TI;
#include "t3227MD.h"
extern Il2CppType t1693_0_0_0;
extern Il2CppType t996_0_0_0;
extern Il2CppType t941_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m17999_MI;
extern MethodInfo m32890_MI;
extern MethodInfo m6988_MI;


extern MethodInfo m17995_MI;
 void m17995 (t3226 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17995_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m17996_MI;
 void m17996 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17996_MI);
	t3227 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t3227 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t3227_TI));
	m17999(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m17999_MI);
	((t3226_SFs*)InitializedTypeInfo(&t3226_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m17997_MI;
 int32_t m17997 (t3226 * __this, t25 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17997_MI);
	int32_t G_B4_0 = 0;
	{
		if (p0)
		{
			goto IL_000b;
		}
	}
	{
		if (p1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (p1)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((t25 *)IsInst(p0, InitializedTypeInfo(&t996_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t25 *)IsInst(p1, InitializedTypeInfo(&t996_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t996 , t996  >::Invoke(&m32890_MI, __this, ((*(t996 *)((t996 *)UnBox (p0, InitializedTypeInfo(&t996_TI))))), ((*(t996 *)((t996 *)UnBox (p1, InitializedTypeInfo(&t996_TI))))));
		return L_0;
	}

IL_0033:
	{
		t445 * L_1 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m6988(L_1, &m6988_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m17998_MI;
 t3226 * m17998 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17998_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t3226_TI));
		return (((t3226_SFs*)InitializedTypeInfo(&t3226_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.TimeSpan>
extern Il2CppType t3226_0_0_49;
FieldInfo t3226_f0_FieldInfo = 
{
	"_default", &t3226_0_0_49, &t3226_TI, offsetof(t3226_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3226_FIs[] =
{
	&t3226_f0_FieldInfo,
	NULL
};
extern MethodInfo m17998_MI;
static PropertyInfo t3226____Default_PropertyInfo = 
{
	&t3226_TI, "Default", &m17998_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3226_PIs[] =
{
	&t3226____Default_PropertyInfo,
	NULL
};
extern TypeInfo t3226_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17995_MI = 
{
	".ctor", (methodPointerType)&m17995, &t3226_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3226_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17996_MI = 
{
	".cctor", (methodPointerType)&m17996, &t3226_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t3226_m17997_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t3226_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17997_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m17997, &t3226_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t3226_m17997_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t996_0_0_0;
extern Il2CppType t996_0_0_0;
static ParameterInfo t3226_m32890_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t3226_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t996_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m32890_MI = 
{
	"Compare", NULL, &t3226_TI, &t134_0_0_0, RuntimeInvoker_t134_t996_t996, t3226_m32890_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3226_TI;
extern Il2CppType t3226_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m17998_MI = 
{
	"get_Default", (methodPointerType)&m17998, &t3226_TI, &t3226_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3226_MIs[] =
{
	&m17995_MI,
	&m17996_MI,
	&m17997_MI,
	&m32890_MI,
	&m17998_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m32890_MI;
extern MethodInfo m17997_MI;
static MethodInfo* t3226_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m32890_MI,
	&m17997_MI,
	NULL,
};
extern TypeInfo t5895_TI;
extern TypeInfo t147_TI;
static TypeInfo* t3226_ITIs[] = 
{
	&t5895_TI,
	&t147_TI,
};
extern TypeInfo t5895_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t3226_IOs[] = 
{
	{ &t5895_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3226_0_0_0;
extern Il2CppType t3226_1_0_0;
extern TypeInfo t25_TI;
struct t3226;
extern TypeInfo t3226_TI;
extern Il2CppGenericClass t3226_GC;
TypeInfo t3226_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t3226_MIs, t3226_PIs, t3226_FIs, NULL, &t25_TI, NULL, NULL, &t3226_TI, t3226_ITIs, t3226_VT, &EmptyCustomAttributesCache, &t3226_TI, &t3226_0_0_0, &t3226_1_0_0, t3226_IOs, &t3226_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3226), 0, -1, sizeof(t3226_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5895_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.TimeSpan>
extern Il2CppType t996_0_0_0;
extern Il2CppType t996_0_0_0;
static ParameterInfo t5895_m32891_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t5895_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t996_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m32891_MI = 
{
	"Compare", NULL, &t5895_TI, &t134_0_0_0, RuntimeInvoker_t134_t996_t996, t5895_m32891_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5895_MIs[] =
{
	&m32891_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5895_0_0_0;
extern Il2CppType t5895_1_0_0;
struct t5895;
extern TypeInfo t5895_TI;
extern Il2CppGenericClass t5895_GC;
TypeInfo t5895_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t5895_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5895_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5895_TI, &t5895_0_0_0, &t5895_1_0_0, NULL, &t5895_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3227_TI;

extern TypeInfo t996_TI;
extern TypeInfo t1693_TI;
extern TypeInfo t134_TI;
extern TypeInfo t143_TI;
extern TypeInfo t25_TI;
extern TypeInfo t445_TI;
extern MethodInfo m17995_MI;
extern MethodInfo m32418_MI;
extern MethodInfo m7828_MI;
extern MethodInfo m2409_MI;


extern MethodInfo m17999_MI;
 void m17999 (t3227 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m17999_MI);
	{
		m17995(__this, &m17995_MI);
		return;
	}
}
extern MethodInfo m18000_MI;
 int32_t m18000 (t3227 * __this, t996  p0, t996  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18000_MI);
	int32_t G_B4_0 = 0;
	{
		t996  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t996_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t996  L_2 = p1;
		t25 * L_3 = Box(InitializedTypeInfo(&t996_TI), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		t996  L_4 = p1;
		t25 * L_5 = Box(InitializedTypeInfo(&t996_TI), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		t996  L_6 = p0;
		t25 * L_7 = Box(InitializedTypeInfo(&t996_TI), &L_6);
		if (!((t25*)IsInst(L_7, InitializedTypeInfo(&t1693_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t996  L_8 = p0;
		t25 * L_9 = Box(InitializedTypeInfo(&t996_TI), &L_8);
		NullCheck(((t25*)Castclass(L_9, InitializedTypeInfo(&t1693_TI))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t996  >::Invoke(&m32418_MI, ((t25*)Castclass(L_9, InitializedTypeInfo(&t1693_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t996  L_11 = p0;
		t25 * L_12 = Box(InitializedTypeInfo(&t996_TI), &L_11);
		if (!((t25 *)IsInst(L_12, InitializedTypeInfo(&t143_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t996  L_13 = p0;
		t25 * L_14 = Box(InitializedTypeInfo(&t996_TI), &L_13);
		t996  L_15 = p1;
		t25 * L_16 = Box(InitializedTypeInfo(&t996_TI), &L_15);
		NullCheck(((t25 *)Castclass(L_14, InitializedTypeInfo(&t143_TI))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, t25 * >::Invoke(&m7828_MI, ((t25 *)Castclass(L_14, InitializedTypeInfo(&t143_TI))), L_16);
		return L_17;
	}

IL_0062:
	{
		t445 * L_18 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m2409(L_18, (t27*) &_stringLiteral558, &m2409_MI);
		il2cpp_codegen_raise_exception (L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
extern TypeInfo t3227_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m17999_MI = 
{
	".ctor", (methodPointerType)&m17999, &t3227_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t996_0_0_0;
extern Il2CppType t996_0_0_0;
static ParameterInfo t3227_m18000_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t3227_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t996_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m18000_MI = 
{
	"Compare", (methodPointerType)&m18000, &t3227_TI, &t134_0_0_0, RuntimeInvoker_t134_t996_t996, t3227_m18000_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3227_MIs[] =
{
	&m17999_MI,
	&m18000_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m18000_MI;
extern MethodInfo m17997_MI;
extern MethodInfo m18000_MI;
static MethodInfo* t3227_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m18000_MI,
	&m17997_MI,
	&m18000_MI,
};
extern TypeInfo t5895_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t3227_IOs[] = 
{
	{ &t5895_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3227_0_0_0;
extern Il2CppType t3227_1_0_0;
extern TypeInfo t3226_TI;
struct t3227;
extern TypeInfo t3227_TI;
extern Il2CppGenericClass t3227_GC;
extern TypeInfo t940_TI;
TypeInfo t3227_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t3227_MIs, NULL, NULL, NULL, &t3226_TI, NULL, &t940_TI, &t3227_TI, NULL, t3227_VT, &EmptyCustomAttributesCache, &t3227_TI, &t3227_0_0_0, &t3227_1_0_0, t3227_IOs, &t3227_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3227), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t1692.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1692_TI;
#include "t1692MD.h"

extern TypeInfo t996_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t1694_TI;
extern TypeInfo t125_TI;
#include "t3228MD.h"
extern MethodInfo m18003_MI;
extern MethodInfo m456_MI;
extern MethodInfo m32433_MI;


extern MethodInfo m8366_MI;
 void m8366 (t1692 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m8366_MI);
	{
		m18003(__this, &m18003_MI);
		return;
	}
}
extern MethodInfo m18001_MI;
 int32_t m18001 (t1692 * __this, t996  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18001_MI);
	{
		t996  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t996_TI), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&t996_TI), &(*(&p0))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m456_MI, Box(InitializedTypeInfo(&t996_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m18002_MI;
 bool m18002 (t1692 * __this, t996  p0, t996  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18002_MI);
	{
		t996  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t996_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t996  L_2 = p1;
		t25 * L_3 = Box(InitializedTypeInfo(&t996_TI), &L_2);
		return ((((t25 *)L_3) == ((t25 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(InitializedTypeInfo(&t996_TI), &(*(&p0))));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t996  >::Invoke(&m32433_MI, Box(InitializedTypeInfo(&t996_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
extern TypeInfo t1692_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m8366_MI = 
{
	".ctor", (methodPointerType)&m8366, &t1692_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t996_0_0_0;
static ParameterInfo t1692_m18001_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t1692_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m18001_MI = 
{
	"GetHashCode", (methodPointerType)&m18001, &t1692_TI, &t134_0_0_0, RuntimeInvoker_t134_t996, t1692_m18001_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t996_0_0_0;
extern Il2CppType t996_0_0_0;
static ParameterInfo t1692_m18002_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t1692_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t996_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m18002_MI = 
{
	"Equals", (methodPointerType)&m18002, &t1692_TI, &t125_0_0_0, RuntimeInvoker_t125_t996_t996, t1692_m18002_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1692_MIs[] =
{
	&m8366_MI,
	&m18001_MI,
	&m18002_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m18002_MI;
extern MethodInfo m18001_MI;
extern MethodInfo m18006_MI;
extern MethodInfo m18005_MI;
extern MethodInfo m18001_MI;
extern MethodInfo m18002_MI;
static MethodInfo* t1692_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m18002_MI,
	&m18001_MI,
	&m18006_MI,
	&m18005_MI,
	&m18001_MI,
	&m18002_MI,
};
extern TypeInfo t5896_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t1692_IOs[] = 
{
	{ &t5896_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1692_0_0_0;
extern Il2CppType t1692_1_0_0;
extern TypeInfo t3228_TI;
struct t1692;
extern TypeInfo t1692_TI;
extern Il2CppGenericClass t1692_GC;
TypeInfo t1692_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t1692_MIs, NULL, NULL, NULL, &t3228_TI, NULL, NULL, &t1692_TI, NULL, t1692_VT, &EmptyCustomAttributesCache, &t1692_TI, &t1692_0_0_0, &t1692_1_0_0, t1692_IOs, &t1692_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1692), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t3228.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3228_TI;

#include "t3229.h"
extern TypeInfo t3228_TI;
extern TypeInfo t1694_TI;
extern TypeInfo t131_TI;
extern TypeInfo t996_TI;
extern TypeInfo t125_TI;
extern TypeInfo t953_TI;
extern TypeInfo t637_TI;
extern TypeInfo t3229_TI;
extern TypeInfo t134_TI;
#include "t3229MD.h"
extern Il2CppType t1694_0_0_0;
extern Il2CppType t996_0_0_0;
extern Il2CppType t953_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m18008_MI;
extern MethodInfo m32892_MI;
extern MethodInfo m32893_MI;


extern MethodInfo m18003_MI;
 void m18003 (t3228 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18003_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m18004_MI;
 void m18004 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18004_MI);
	t3229 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t3229 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t3229_TI));
	m18008(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m18008_MI);
	((t3228_SFs*)InitializedTypeInfo(&t3228_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m18005_MI;
 int32_t m18005 (t3228 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18005_MI);
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t996  >::Invoke(&m32892_MI, __this, ((*(t996 *)((t996 *)UnBox (p0, InitializedTypeInfo(&t996_TI))))));
		return L_0;
	}
}
extern MethodInfo m18006_MI;
 bool m18006 (t3228 * __this, t25 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18006_MI);
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t996 , t996  >::Invoke(&m32893_MI, __this, ((*(t996 *)((t996 *)UnBox (p0, InitializedTypeInfo(&t996_TI))))), ((*(t996 *)((t996 *)UnBox (p1, InitializedTypeInfo(&t996_TI))))));
		return L_0;
	}
}
extern MethodInfo m18007_MI;
 t3228 * m18007 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18007_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t3228_TI));
		return (((t3228_SFs*)InitializedTypeInfo(&t3228_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
extern Il2CppType t3228_0_0_49;
FieldInfo t3228_f0_FieldInfo = 
{
	"_default", &t3228_0_0_49, &t3228_TI, offsetof(t3228_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3228_FIs[] =
{
	&t3228_f0_FieldInfo,
	NULL
};
extern MethodInfo m18007_MI;
static PropertyInfo t3228____Default_PropertyInfo = 
{
	&t3228_TI, "Default", &m18007_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3228_PIs[] =
{
	&t3228____Default_PropertyInfo,
	NULL
};
extern TypeInfo t3228_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m18003_MI = 
{
	".ctor", (methodPointerType)&m18003, &t3228_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3228_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m18004_MI = 
{
	".cctor", (methodPointerType)&m18004, &t3228_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t3228_m18005_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t3228_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m18005_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m18005, &t3228_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t3228_m18005_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t3228_m18006_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t3228_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m18006_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m18006, &t3228_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t3228_m18006_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t996_0_0_0;
static ParameterInfo t3228_m32892_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t3228_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m32892_MI = 
{
	"GetHashCode", NULL, &t3228_TI, &t134_0_0_0, RuntimeInvoker_t134_t996, t3228_m32892_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t996_0_0_0;
extern Il2CppType t996_0_0_0;
static ParameterInfo t3228_m32893_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t3228_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t996_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m32893_MI = 
{
	"Equals", NULL, &t3228_TI, &t125_0_0_0, RuntimeInvoker_t125_t996_t996, t3228_m32893_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3228_TI;
extern Il2CppType t3228_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m18007_MI = 
{
	"get_Default", (methodPointerType)&m18007, &t3228_TI, &t3228_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3228_MIs[] =
{
	&m18003_MI,
	&m18004_MI,
	&m18005_MI,
	&m18006_MI,
	&m32892_MI,
	&m32893_MI,
	&m18007_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m32893_MI;
extern MethodInfo m32892_MI;
extern MethodInfo m18006_MI;
extern MethodInfo m18005_MI;
static MethodInfo* t3228_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m32893_MI,
	&m32892_MI,
	&m18006_MI,
	&m18005_MI,
	NULL,
	NULL,
};
extern TypeInfo t5896_TI;
extern TypeInfo t977_TI;
static TypeInfo* t3228_ITIs[] = 
{
	&t5896_TI,
	&t977_TI,
};
extern TypeInfo t5896_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t3228_IOs[] = 
{
	{ &t5896_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3228_0_0_0;
extern Il2CppType t3228_1_0_0;
extern TypeInfo t25_TI;
struct t3228;
extern TypeInfo t3228_TI;
extern Il2CppGenericClass t3228_GC;
TypeInfo t3228_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t3228_MIs, t3228_PIs, t3228_FIs, NULL, &t25_TI, NULL, NULL, &t3228_TI, t3228_ITIs, t3228_VT, &EmptyCustomAttributesCache, &t3228_TI, &t3228_0_0_0, &t3228_1_0_0, t3228_IOs, &t3228_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3228), 0, -1, sizeof(t3228_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5896_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>
extern Il2CppType t996_0_0_0;
extern Il2CppType t996_0_0_0;
static ParameterInfo t5896_m32894_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t5896_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t996_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m32894_MI = 
{
	"Equals", NULL, &t5896_TI, &t125_0_0_0, RuntimeInvoker_t125_t996_t996, t5896_m32894_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t996_0_0_0;
static ParameterInfo t5896_m32895_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t5896_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m32895_MI = 
{
	"GetHashCode", NULL, &t5896_TI, &t134_0_0_0, RuntimeInvoker_t134_t996, t5896_m32895_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5896_MIs[] =
{
	&m32894_MI,
	&m32895_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5896_0_0_0;
extern Il2CppType t5896_1_0_0;
struct t5896;
extern TypeInfo t5896_TI;
extern Il2CppGenericClass t5896_GC;
TypeInfo t5896_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5896_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5896_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5896_TI, &t5896_0_0_0, &t5896_1_0_0, NULL, &t5896_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3229_TI;

extern TypeInfo t996_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t125_TI;
extern MethodInfo m18003_MI;
extern MethodInfo m456_MI;
extern MethodInfo m455_MI;


extern MethodInfo m18008_MI;
 void m18008 (t3229 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18008_MI);
	{
		m18003(__this, &m18003_MI);
		return;
	}
}
extern MethodInfo m18009_MI;
 int32_t m18009 (t3229 * __this, t996  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18009_MI);
	{
		t996  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t996_TI), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&t996_TI), &(*(&p0))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m456_MI, Box(InitializedTypeInfo(&t996_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m18010_MI;
 bool m18010 (t3229 * __this, t996  p0, t996  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18010_MI);
	{
		t996  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t996_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t996  L_2 = p1;
		t25 * L_3 = Box(InitializedTypeInfo(&t996_TI), &L_2);
		return ((((t25 *)L_3) == ((t25 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t996  L_4 = p1;
		t25 * L_5 = Box(InitializedTypeInfo(&t996_TI), &L_4);
		NullCheck(Box(InitializedTypeInfo(&t996_TI), &(*(&p0))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, t25 * >::Invoke(&m455_MI, Box(InitializedTypeInfo(&t996_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
extern TypeInfo t3229_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m18008_MI = 
{
	".ctor", (methodPointerType)&m18008, &t3229_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t996_0_0_0;
static ParameterInfo t3229_m18009_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t3229_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m18009_MI = 
{
	"GetHashCode", (methodPointerType)&m18009, &t3229_TI, &t134_0_0_0, RuntimeInvoker_t134_t996, t3229_m18009_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t996_0_0_0;
extern Il2CppType t996_0_0_0;
static ParameterInfo t3229_m18010_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t3229_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t996_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m18010_MI = 
{
	"Equals", (methodPointerType)&m18010, &t3229_TI, &t125_0_0_0, RuntimeInvoker_t125_t996_t996, t3229_m18010_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3229_MIs[] =
{
	&m18008_MI,
	&m18009_MI,
	&m18010_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m18010_MI;
extern MethodInfo m18009_MI;
extern MethodInfo m18006_MI;
extern MethodInfo m18005_MI;
extern MethodInfo m18009_MI;
extern MethodInfo m18010_MI;
static MethodInfo* t3229_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m18010_MI,
	&m18009_MI,
	&m18006_MI,
	&m18005_MI,
	&m18009_MI,
	&m18010_MI,
};
extern TypeInfo t5896_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t3229_IOs[] = 
{
	{ &t5896_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3229_0_0_0;
extern Il2CppType t3229_1_0_0;
extern TypeInfo t3228_TI;
struct t3229;
extern TypeInfo t3229_TI;
extern Il2CppGenericClass t3229_GC;
extern TypeInfo t952_TI;
TypeInfo t3229_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t3229_MIs, NULL, NULL, NULL, &t3228_TI, NULL, &t952_TI, &t3229_TI, NULL, t3229_VT, &EmptyCustomAttributesCache, &t3229_TI, &t3229_0_0_0, &t3229_1_0_0, t3229_IOs, &t3229_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3229), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4216_TI;

#include "t814.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.TypeCode>
extern MethodInfo m32896_MI;
static PropertyInfo t4216____Current_PropertyInfo = 
{
	&t4216_TI, "Current", &m32896_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4216_PIs[] =
{
	&t4216____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4216_TI;
extern Il2CppType t814_0_0_0;
extern void* RuntimeInvoker_t814 (MethodInfo* method, void* obj, void** args);
MethodInfo m32896_MI = 
{
	"get_Current", NULL, &t4216_TI, &t814_0_0_0, RuntimeInvoker_t814, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4216_MIs[] =
{
	&m32896_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4216_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4216_0_0_0;
extern Il2CppType t4216_1_0_0;
struct t4216;
extern TypeInfo t4216_TI;
extern Il2CppGenericClass t4216_GC;
TypeInfo t4216_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4216_MIs, t4216_PIs, NULL, NULL, NULL, NULL, NULL, &t4216_TI, t4216_ITIs, NULL, &EmptyCustomAttributesCache, &t4216_TI, &t4216_0_0_0, &t4216_1_0_0, NULL, &t4216_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3230.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3230_TI;
#include "t3230MD.h"

extern TypeInfo t3230_TI;
extern TypeInfo t814_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m18015_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m24833_MI;
struct t122;
 int32_t m24833 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m24833_MI;


extern MethodInfo m18011_MI;
 void m18011 (t3230 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18011_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m18012_MI;
 t25 * m18012 (t3230 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18012_MI);
	{
		int32_t L_0 = m18015(__this, &m18015_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t814_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m18013_MI;
 void m18013 (t3230 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18013_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m18014_MI;
 bool m18014 (t3230 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18014_MI);
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
extern MethodInfo m18015_MI;
 int32_t m18015 (t3230 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18015_MI);
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
		int32_t L_8 = m24833(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24833_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.TypeCode>
extern Il2CppType t122_0_0_1;
FieldInfo t3230_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3230_TI, offsetof(t3230, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3230_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3230_TI, offsetof(t3230, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3230_FIs[] =
{
	&t3230_f0_FieldInfo,
	&t3230_f1_FieldInfo,
	NULL
};
extern MethodInfo m18012_MI;
static PropertyInfo t3230____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3230_TI, "System.Collections.IEnumerator.Current", &m18012_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m18015_MI;
static PropertyInfo t3230____Current_PropertyInfo = 
{
	&t3230_TI, "Current", &m18015_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3230_PIs[] =
{
	&t3230____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3230____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3230_m18011_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3230_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m18011_MI = 
{
	".ctor", (methodPointerType)&m18011, &t3230_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3230_m18011_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3230_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m18012_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m18012, &t3230_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3230_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m18013_MI = 
{
	"Dispose", (methodPointerType)&m18013, &t3230_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3230_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m18014_MI = 
{
	"MoveNext", (methodPointerType)&m18014, &t3230_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3230_TI;
extern Il2CppType t814_0_0_0;
extern void* RuntimeInvoker_t814 (MethodInfo* method, void* obj, void** args);
MethodInfo m18015_MI = 
{
	"get_Current", (methodPointerType)&m18015, &t3230_TI, &t814_0_0_0, RuntimeInvoker_t814, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3230_MIs[] =
{
	&m18011_MI,
	&m18012_MI,
	&m18013_MI,
	&m18014_MI,
	&m18015_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m18012_MI;
extern MethodInfo m18014_MI;
extern MethodInfo m18013_MI;
extern MethodInfo m18015_MI;
static MethodInfo* t3230_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m18012_MI,
	&m18014_MI,
	&m18013_MI,
	&m18015_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4216_TI;
static TypeInfo* t3230_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4216_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4216_TI;
static Il2CppInterfaceOffsetPair t3230_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4216_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3230_0_0_0;
extern Il2CppType t3230_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3230_TI;
extern Il2CppGenericClass t3230_GC;
extern TypeInfo t122_TI;
TypeInfo t3230_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3230_MIs, t3230_PIs, t3230_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3230_TI, t3230_ITIs, t3230_VT, &EmptyCustomAttributesCache, &t3230_TI, &t3230_0_0_0, &t3230_1_0_0, t3230_IOs, &t3230_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3230)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5795_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.TypeCode>
extern MethodInfo m32897_MI;
static PropertyInfo t5795____Count_PropertyInfo = 
{
	&t5795_TI, "Count", &m32897_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32898_MI;
static PropertyInfo t5795____IsReadOnly_PropertyInfo = 
{
	&t5795_TI, "IsReadOnly", &m32898_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5795_PIs[] =
{
	&t5795____Count_PropertyInfo,
	&t5795____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5795_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32897_MI = 
{
	"get_Count", NULL, &t5795_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5795_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m32898_MI = 
{
	"get_IsReadOnly", NULL, &t5795_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t814_0_0_0;
static ParameterInfo t5795_m32899_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t814_0_0_0},
};
extern TypeInfo t5795_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32899_MI = 
{
	"Add", NULL, &t5795_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5795_m32899_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5795_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m32900_MI = 
{
	"Clear", NULL, &t5795_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t814_0_0_0;
static ParameterInfo t5795_m32901_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t814_0_0_0},
};
extern TypeInfo t5795_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32901_MI = 
{
	"Contains", NULL, &t5795_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t5795_m32901_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3477_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5795_m32902_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3477_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5795_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32902_MI = 
{
	"CopyTo", NULL, &t5795_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5795_m32902_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t814_0_0_0;
static ParameterInfo t5795_m32903_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t814_0_0_0},
};
extern TypeInfo t5795_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32903_MI = 
{
	"Remove", NULL, &t5795_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t5795_m32903_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5795_MIs[] =
{
	&m32897_MI,
	&m32898_MI,
	&m32899_MI,
	&m32900_MI,
	&m32901_MI,
	&m32902_MI,
	&m32903_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5797_TI;
static TypeInfo* t5795_ITIs[] = 
{
	&t703_TI,
	&t5797_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5795_0_0_0;
extern Il2CppType t5795_1_0_0;
struct t5795;
extern TypeInfo t5795_TI;
extern Il2CppGenericClass t5795_GC;
TypeInfo t5795_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5795_MIs, t5795_PIs, NULL, NULL, NULL, NULL, NULL, &t5795_TI, t5795_ITIs, NULL, &EmptyCustomAttributesCache, &t5795_TI, &t5795_0_0_0, &t5795_1_0_0, NULL, &t5795_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5797_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.TypeCode>
extern TypeInfo t5797_TI;
extern Il2CppType t4216_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32904_MI = 
{
	"GetEnumerator", NULL, &t5797_TI, &t4216_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5797_MIs[] =
{
	&m32904_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5797_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5797_0_0_0;
extern Il2CppType t5797_1_0_0;
struct t5797;
extern TypeInfo t5797_TI;
extern Il2CppGenericClass t5797_GC;
TypeInfo t5797_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5797_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5797_TI, t5797_ITIs, NULL, &EmptyCustomAttributesCache, &t5797_TI, &t5797_0_0_0, &t5797_1_0_0, NULL, &t5797_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5796_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.TypeCode>
extern MethodInfo m32905_MI;
extern MethodInfo m32906_MI;
static PropertyInfo t5796____Item_PropertyInfo = 
{
	&t5796_TI, "Item", &m32905_MI, &m32906_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5796_PIs[] =
{
	&t5796____Item_PropertyInfo,
	NULL
};
extern Il2CppType t814_0_0_0;
static ParameterInfo t5796_m32907_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t814_0_0_0},
};
extern TypeInfo t5796_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32907_MI = 
{
	"IndexOf", NULL, &t5796_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t5796_m32907_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t814_0_0_0;
static ParameterInfo t5796_m32908_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t814_0_0_0},
};
extern TypeInfo t5796_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32908_MI = 
{
	"Insert", NULL, &t5796_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t5796_m32908_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5796_m32909_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5796_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32909_MI = 
{
	"RemoveAt", NULL, &t5796_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5796_m32909_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5796_m32905_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5796_TI;
extern Il2CppType t814_0_0_0;
extern void* RuntimeInvoker_t814_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32905_MI = 
{
	"get_Item", NULL, &t5796_TI, &t814_0_0_0, RuntimeInvoker_t814_t134, t5796_m32905_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t814_0_0_0;
static ParameterInfo t5796_m32906_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t814_0_0_0},
};
extern TypeInfo t5796_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32906_MI = 
{
	"set_Item", NULL, &t5796_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t5796_m32906_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5796_MIs[] =
{
	&m32907_MI,
	&m32908_MI,
	&m32909_MI,
	&m32905_MI,
	&m32906_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5795_TI;
extern TypeInfo t5797_TI;
static TypeInfo* t5796_ITIs[] = 
{
	&t703_TI,
	&t5795_TI,
	&t5797_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5796_0_0_0;
extern Il2CppType t5796_1_0_0;
struct t5796;
extern TypeInfo t5796_TI;
extern Il2CppGenericClass t5796_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5796_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5796_MIs, t5796_PIs, NULL, NULL, NULL, NULL, NULL, &t5796_TI, t5796_ITIs, NULL, &t1518__CustomAttributeCache, &t5796_TI, &t5796_0_0_0, &t5796_1_0_0, NULL, &t5796_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4217_TI;

#include "t1417.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo m32910_MI;
static PropertyInfo t4217____Current_PropertyInfo = 
{
	&t4217_TI, "Current", &m32910_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4217_PIs[] =
{
	&t4217____Current_PropertyInfo,
	NULL
};
extern TypeInfo t4217_TI;
extern Il2CppType t1417_0_0_0;
extern void* RuntimeInvoker_t1417 (MethodInfo* method, void* obj, void** args);
MethodInfo m32910_MI = 
{
	"get_Current", NULL, &t4217_TI, &t1417_0_0_0, RuntimeInvoker_t1417, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4217_MIs[] =
{
	&m32910_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t4217_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4217_0_0_0;
extern Il2CppType t4217_1_0_0;
struct t4217;
extern TypeInfo t4217_TI;
extern Il2CppGenericClass t4217_GC;
TypeInfo t4217_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4217_MIs, t4217_PIs, NULL, NULL, NULL, NULL, NULL, &t4217_TI, t4217_ITIs, NULL, &EmptyCustomAttributesCache, &t4217_TI, &t4217_0_0_0, &t4217_1_0_0, NULL, &t4217_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3231.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3231_TI;
#include "t3231MD.h"

extern TypeInfo t3231_TI;
extern TypeInfo t1417_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m18020_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m24844_MI;
struct t122;
 uint8_t m24844 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m24844_MI;


extern MethodInfo m18016_MI;
 void m18016 (t3231 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18016_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m18017_MI;
 t25 * m18017 (t3231 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18017_MI);
	{
		uint8_t L_0 = m18020(__this, &m18020_MI);
		uint8_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t1417_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m18018_MI;
 void m18018 (t3231 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18018_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m18019_MI;
 bool m18019 (t3231 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18019_MI);
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
extern MethodInfo m18020_MI;
 uint8_t m18020 (t3231 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m18020_MI);
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
		uint8_t L_8 = m24844(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24844_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>
extern Il2CppType t122_0_0_1;
FieldInfo t3231_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t3231_TI, offsetof(t3231, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t3231_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t3231_TI, offsetof(t3231, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t3231_FIs[] =
{
	&t3231_f0_FieldInfo,
	&t3231_f1_FieldInfo,
	NULL
};
extern MethodInfo m18017_MI;
static PropertyInfo t3231____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3231_TI, "System.Collections.IEnumerator.Current", &m18017_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m18020_MI;
static PropertyInfo t3231____Current_PropertyInfo = 
{
	&t3231_TI, "Current", &m18020_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3231_PIs[] =
{
	&t3231____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3231____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t3231_m18016_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t3231_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m18016_MI = 
{
	".ctor", (methodPointerType)&m18016, &t3231_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t3231_m18016_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3231_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m18017_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m18017, &t3231_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3231_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m18018_MI = 
{
	"Dispose", (methodPointerType)&m18018, &t3231_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3231_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m18019_MI = 
{
	"MoveNext", (methodPointerType)&m18019, &t3231_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3231_TI;
extern Il2CppType t1417_0_0_0;
extern void* RuntimeInvoker_t1417 (MethodInfo* method, void* obj, void** args);
MethodInfo m18020_MI = 
{
	"get_Current", (methodPointerType)&m18020, &t3231_TI, &t1417_0_0_0, RuntimeInvoker_t1417, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3231_MIs[] =
{
	&m18016_MI,
	&m18017_MI,
	&m18018_MI,
	&m18019_MI,
	&m18020_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m18017_MI;
extern MethodInfo m18019_MI;
extern MethodInfo m18018_MI;
extern MethodInfo m18020_MI;
static MethodInfo* t3231_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m18017_MI,
	&m18019_MI,
	&m18018_MI,
	&m18020_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4217_TI;
static TypeInfo* t3231_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t4217_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t4217_TI;
static Il2CppInterfaceOffsetPair t3231_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t4217_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3231_0_0_0;
extern Il2CppType t3231_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t3231_TI;
extern Il2CppGenericClass t3231_GC;
extern TypeInfo t122_TI;
TypeInfo t3231_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3231_MIs, t3231_PIs, t3231_FIs, NULL, &t117_TI, NULL, &t122_TI, &t3231_TI, t3231_ITIs, t3231_VT, &EmptyCustomAttributesCache, &t3231_TI, &t3231_0_0_0, &t3231_1_0_0, t3231_IOs, &t3231_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3231)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5798_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo m32911_MI;
static PropertyInfo t5798____Count_PropertyInfo = 
{
	&t5798_TI, "Count", &m32911_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32912_MI;
static PropertyInfo t5798____IsReadOnly_PropertyInfo = 
{
	&t5798_TI, "IsReadOnly", &m32912_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5798_PIs[] =
{
	&t5798____Count_PropertyInfo,
	&t5798____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5798_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32911_MI = 
{
	"get_Count", NULL, &t5798_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5798_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m32912_MI = 
{
	"get_IsReadOnly", NULL, &t5798_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1417_0_0_0;
static ParameterInfo t5798_m32913_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1417_0_0_0},
};
extern TypeInfo t5798_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t462 (MethodInfo* method, void* obj, void** args);
MethodInfo m32913_MI = 
{
	"Add", NULL, &t5798_TI, &t123_0_0_0, RuntimeInvoker_t123_t462, t5798_m32913_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5798_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m32914_MI = 
{
	"Clear", NULL, &t5798_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1417_0_0_0;
static ParameterInfo t5798_m32915_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1417_0_0_0},
};
extern TypeInfo t5798_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t462 (MethodInfo* method, void* obj, void** args);
MethodInfo m32915_MI = 
{
	"Contains", NULL, &t5798_TI, &t125_0_0_0, RuntimeInvoker_t125_t462, t5798_m32915_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3478_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t5798_m32916_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3478_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5798_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32916_MI = 
{
	"CopyTo", NULL, &t5798_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t5798_m32916_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1417_0_0_0;
static ParameterInfo t5798_m32917_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1417_0_0_0},
};
extern TypeInfo t5798_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t462 (MethodInfo* method, void* obj, void** args);
MethodInfo m32917_MI = 
{
	"Remove", NULL, &t5798_TI, &t125_0_0_0, RuntimeInvoker_t125_t462, t5798_m32917_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5798_MIs[] =
{
	&m32911_MI,
	&m32912_MI,
	&m32913_MI,
	&m32914_MI,
	&m32915_MI,
	&m32916_MI,
	&m32917_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5800_TI;
static TypeInfo* t5798_ITIs[] = 
{
	&t703_TI,
	&t5800_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5798_0_0_0;
extern Il2CppType t5798_1_0_0;
struct t5798;
extern TypeInfo t5798_TI;
extern Il2CppGenericClass t5798_GC;
TypeInfo t5798_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5798_MIs, t5798_PIs, NULL, NULL, NULL, NULL, NULL, &t5798_TI, t5798_ITIs, NULL, &EmptyCustomAttributesCache, &t5798_TI, &t5798_0_0_0, &t5798_1_0_0, NULL, &t5798_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5800_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UnitySerializationHolder/UnityType>
extern TypeInfo t5800_TI;
extern Il2CppType t4217_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32918_MI = 
{
	"GetEnumerator", NULL, &t5800_TI, &t4217_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5800_MIs[] =
{
	&m32918_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t5800_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5800_0_0_0;
extern Il2CppType t5800_1_0_0;
struct t5800;
extern TypeInfo t5800_TI;
extern Il2CppGenericClass t5800_GC;
TypeInfo t5800_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5800_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5800_TI, t5800_ITIs, NULL, &EmptyCustomAttributesCache, &t5800_TI, &t5800_0_0_0, &t5800_1_0_0, NULL, &t5800_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5799_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo m32919_MI;
extern MethodInfo m32920_MI;
static PropertyInfo t5799____Item_PropertyInfo = 
{
	&t5799_TI, "Item", &m32919_MI, &m32920_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5799_PIs[] =
{
	&t5799____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1417_0_0_0;
static ParameterInfo t5799_m32921_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1417_0_0_0},
};
extern TypeInfo t5799_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t462 (MethodInfo* method, void* obj, void** args);
MethodInfo m32921_MI = 
{
	"IndexOf", NULL, &t5799_TI, &t134_0_0_0, RuntimeInvoker_t134_t462, t5799_m32921_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1417_0_0_0;
static ParameterInfo t5799_m32922_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1417_0_0_0},
};
extern TypeInfo t5799_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t462 (MethodInfo* method, void* obj, void** args);
MethodInfo m32922_MI = 
{
	"Insert", NULL, &t5799_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t462, t5799_m32922_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5799_m32923_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5799_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32923_MI = 
{
	"RemoveAt", NULL, &t5799_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t5799_m32923_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t5799_m32919_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t5799_TI;
extern Il2CppType t1417_0_0_0;
extern void* RuntimeInvoker_t1417_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m32919_MI = 
{
	"get_Item", NULL, &t5799_TI, &t1417_0_0_0, RuntimeInvoker_t1417_t134, t5799_m32919_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t1417_0_0_0;
static ParameterInfo t5799_m32920_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1417_0_0_0},
};
extern TypeInfo t5799_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t462 (MethodInfo* method, void* obj, void** args);
MethodInfo m32920_MI = 
{
	"set_Item", NULL, &t5799_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t462, t5799_m32920_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5799_MIs[] =
{
	&m32921_MI,
	&m32922_MI,
	&m32923_MI,
	&m32919_MI,
	&m32920_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t5798_TI;
extern TypeInfo t5800_TI;
static TypeInfo* t5799_ITIs[] = 
{
	&t703_TI,
	&t5798_TI,
	&t5800_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5799_0_0_0;
extern Il2CppType t5799_1_0_0;
struct t5799;
extern TypeInfo t5799_TI;
extern Il2CppGenericClass t5799_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t5799_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5799_MIs, t5799_PIs, NULL, NULL, NULL, NULL, NULL, &t5799_TI, t5799_ITIs, NULL, &t1518__CustomAttributeCache, &t5799_TI, &t5799_0_0_0, &t5799_1_0_0, NULL, &t5799_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1697_TI;

#include "t1066.h"


// Metadata Definition System.IComparable`1<System.Version>
extern Il2CppType t1066_0_0_0;
static ParameterInfo t1697_m32924_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1066_0_0_0},
};
extern TypeInfo t1697_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32924_MI = 
{
	"CompareTo", NULL, &t1697_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t1697_m32924_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1697_MIs[] =
{
	&m32924_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1697_0_0_0;
extern Il2CppType t1697_1_0_0;
struct t1697;
extern TypeInfo t1697_TI;
extern Il2CppGenericClass t1697_GC;
TypeInfo t1697_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1697_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1697_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1697_TI, &t1697_0_0_0, &t1697_1_0_0, NULL, &t1697_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1698_TI;



// Metadata Definition System.IEquatable`1<System.Version>
extern Il2CppType t1066_0_0_0;
static ParameterInfo t1698_m32925_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1066_0_0_0},
};
extern TypeInfo t1698_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m32925_MI = 
{
	"Equals", NULL, &t1698_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t1698_m32925_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1698_MIs[] =
{
	&m32925_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1698_0_0_0;
extern Il2CppType t1698_1_0_0;
struct t1698;
extern TypeInfo t1698_TI;
extern Il2CppGenericClass t1698_GC;
TypeInfo t1698_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1698_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1698_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1698_TI, &t1698_0_0_0, &t1698_1_0_0, NULL, &t1698_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
