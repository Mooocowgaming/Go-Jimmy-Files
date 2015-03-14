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
extern TypeInfo t5840_TI;

#include "t125.h"
#include "t334.h"

#include "t122.h"

// Metadata Definition System.IEquatable`1<UnityEngine.UIVertex>
extern Il2CppType t334_0_0_0;
static ParameterInfo t5840_m27266_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
};
extern TypeInfo t5840_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m27266_MI = 
{
	"Equals", NULL, &t5840_TI, &t125_0_0_0, RuntimeInvoker_t125_t334, t5840_m27266_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5840_MIs[] =
{
	&m27266_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5840_0_0_0;
extern Il2CppType t5840_1_0_0;
struct t5840;
extern TypeInfo t5840_TI;
extern Il2CppGenericClass t5840_GC;
TypeInfo t5840_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5840_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5840_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5840_TI, &t5840_0_0_0, &t5840_1_0_0, NULL, &t5840_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2309.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2309_TI;
#include "t2309MD.h"

#include "t123.h"
#include "t134.h"
#include "t25.h"
extern TypeInfo t334_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t125_TI;
#include "t2308MD.h"
#include "t25MD.h"
extern MethodInfo m12397_MI;
extern MethodInfo m456_MI;
extern MethodInfo m455_MI;


extern MethodInfo m12402_MI;
 void m12402 (t2309 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12402_MI);
	{
		m12397(__this, &m12397_MI);
		return;
	}
}
extern MethodInfo m12403_MI;
 int32_t m12403 (t2309 * __this, t334  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12403_MI);
	{
		t334  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t334_TI), &L_0);
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
		NullCheck(Box(InitializedTypeInfo(&t334_TI), &(*(&p0))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m456_MI, Box(InitializedTypeInfo(&t334_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m12404_MI;
 bool m12404 (t2309 * __this, t334  p0, t334  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12404_MI);
	{
		t334  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t334_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t334  L_2 = p1;
		t25 * L_3 = Box(InitializedTypeInfo(&t334_TI), &L_2);
		return ((((t25 *)L_3) == ((t25 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t334  L_4 = p1;
		t25 * L_5 = Box(InitializedTypeInfo(&t334_TI), &L_4);
		NullCheck(Box(InitializedTypeInfo(&t334_TI), &(*(&p0))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, t25 * >::Invoke(&m455_MI, Box(InitializedTypeInfo(&t334_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
extern TypeInfo t2309_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12402_MI = 
{
	".ctor", (methodPointerType)&m12402, &t2309_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t334_0_0_0;
static ParameterInfo t2309_m12403_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
};
extern TypeInfo t2309_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m12403_MI = 
{
	"GetHashCode", (methodPointerType)&m12403, &t2309_TI, &t134_0_0_0, RuntimeInvoker_t134_t334, t2309_m12403_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t334_0_0_0;
extern Il2CppType t334_0_0_0;
static ParameterInfo t2309_m12404_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
};
extern TypeInfo t2309_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t334_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m12404_MI = 
{
	"Equals", (methodPointerType)&m12404, &t2309_TI, &t125_0_0_0, RuntimeInvoker_t125_t334_t334, t2309_m12404_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2309_MIs[] =
{
	&m12402_MI,
	&m12403_MI,
	&m12404_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12404_MI;
extern MethodInfo m12403_MI;
extern MethodInfo m12400_MI;
extern MethodInfo m12399_MI;
extern MethodInfo m12403_MI;
extern MethodInfo m12404_MI;
static MethodInfo* t2309_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12404_MI,
	&m12403_MI,
	&m12400_MI,
	&m12399_MI,
	&m12403_MI,
	&m12404_MI,
};
extern TypeInfo t5841_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t2309_IOs[] = 
{
	{ &t5841_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2309_0_0_0;
extern Il2CppType t2309_1_0_0;
extern TypeInfo t2308_TI;
struct t2309;
extern TypeInfo t2309_TI;
extern Il2CppGenericClass t2309_GC;
extern TypeInfo t952_TI;
TypeInfo t2309_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2309_MIs, NULL, NULL, NULL, &t2308_TI, NULL, &t952_TI, &t2309_TI, NULL, t2309_VT, &EmptyCustomAttributesCache, &t2309_TI, &t2309_0_0_0, &t2309_1_0_0, t2309_IOs, &t2309_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2309), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t2303.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2303_TI;
#include "t2303MD.h"

#include "t61.h"
#include "t219.h"


extern MethodInfo m12405_MI;
 void m12405 (t2303 * __this, t25 * p0, t61 p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12405_MI);
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m12406_MI;
 bool m12406 (t2303 * __this, t334  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12406_MI);
	typedef  bool (*FunctionPointerType) (t25 * __this, t334  p0, MethodInfo* method);
	if (__this->f9)
		m12406((t2303 *)__this->f9,  p0, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m12407_MI;
 t25 * m12407 (t2303 * __this, t334  p0, t219 * p1, t25 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12407_MI);
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t334_TI), &p0);
	return (t25 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m12408_MI;
 bool m12408 (t2303 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12408_MI);
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Predicate`1<UnityEngine.UIVertex>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2303_m12405_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2303_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m12405_MI = 
{
	".ctor", (methodPointerType)&m12405, &t2303_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2303_m12405_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t334_0_0_0;
static ParameterInfo t2303_m12406_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
};
extern TypeInfo t2303_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m12406_MI = 
{
	"Invoke", (methodPointerType)&m12406, &t2303_TI, &t125_0_0_0, RuntimeInvoker_t125_t334, t2303_m12406_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t334_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2303_m12407_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2303_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t334_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12407_MI = 
{
	"BeginInvoke", (methodPointerType)&m12407, &t2303_TI, &t218_0_0_0, RuntimeInvoker_t25_t334_t25_t25, t2303_m12407_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2303_m12408_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2303_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12408_MI = 
{
	"EndInvoke", (methodPointerType)&m12408, &t2303_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2303_m12408_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2303_MIs[] =
{
	&m12405_MI,
	&m12406_MI,
	&m12407_MI,
	&m12408_MI,
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
extern MethodInfo m12406_MI;
extern MethodInfo m12407_MI;
extern MethodInfo m12408_MI;
static MethodInfo* t2303_VT[] =
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
	&m12406_MI,
	&m12407_MI,
	&m12408_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2303_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2303_0_0_0;
extern Il2CppType t2303_1_0_0;
extern TypeInfo t345_TI;
struct t2303;
extern TypeInfo t2303_TI;
extern Il2CppGenericClass t2303_GC;
TypeInfo t2303_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2303_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2303_TI, NULL, t2303_VT, &EmptyCustomAttributesCache, &t2303_TI, &t2303_0_0_0, &t2303_1_0_0, t2303_IOs, &t2303_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2303), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2310.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2310_TI;
#include "t2310MD.h"

#include "t131.h"
#include "t132.h"
#include "t941.h"
#include "mscorlib_ArrayTypes.h"
#include "t2311.h"
#include "t445.h"
extern TypeInfo t2310_TI;
extern TypeInfo t3820_TI;
extern TypeInfo t131_TI;
extern TypeInfo t334_TI;
extern TypeInfo t125_TI;
extern TypeInfo t941_TI;
extern TypeInfo t637_TI;
extern TypeInfo t2311_TI;
extern TypeInfo t134_TI;
extern TypeInfo t445_TI;
#include "t131MD.h"
#include "t1340MD.h"
#include "t2311MD.h"
#include "t445MD.h"
extern Il2CppType t3820_0_0_0;
extern Il2CppType t334_0_0_0;
extern Il2CppType t941_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m12413_MI;
extern MethodInfo m27267_MI;
extern MethodInfo m6988_MI;


extern MethodInfo m12409_MI;
 void m12409 (t2310 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12409_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m12410_MI;
 void m12410 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12410_MI);
	t2311 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2311 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2311_TI));
	m12413(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m12413_MI);
	((t2310_SFs*)InitializedTypeInfo(&t2310_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m12411_MI;
 int32_t m12411 (t2310 * __this, t25 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12411_MI);
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
		if (!((t25 *)IsInst(p0, InitializedTypeInfo(&t334_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t25 *)IsInst(p1, InitializedTypeInfo(&t334_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t334 , t334  >::Invoke(&m27267_MI, __this, ((*(t334 *)((t334 *)UnBox (p0, InitializedTypeInfo(&t334_TI))))), ((*(t334 *)((t334 *)UnBox (p1, InitializedTypeInfo(&t334_TI))))));
		return L_0;
	}

IL_0033:
	{
		t445 * L_1 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m6988(L_1, &m6988_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m12412_MI;
 t2310 * m12412 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12412_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2310_TI));
		return (((t2310_SFs*)InitializedTypeInfo(&t2310_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>
extern Il2CppType t2310_0_0_49;
FieldInfo t2310_f0_FieldInfo = 
{
	"_default", &t2310_0_0_49, &t2310_TI, offsetof(t2310_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2310_FIs[] =
{
	&t2310_f0_FieldInfo,
	NULL
};
extern MethodInfo m12412_MI;
static PropertyInfo t2310____Default_PropertyInfo = 
{
	&t2310_TI, "Default", &m12412_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2310_PIs[] =
{
	&t2310____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2310_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12409_MI = 
{
	".ctor", (methodPointerType)&m12409, &t2310_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2310_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12410_MI = 
{
	".cctor", (methodPointerType)&m12410, &t2310_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2310_m12411_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2310_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12411_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m12411, &t2310_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2310_m12411_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t334_0_0_0;
extern Il2CppType t334_0_0_0;
static ParameterInfo t2310_m27267_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
};
extern TypeInfo t2310_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t334_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m27267_MI = 
{
	"Compare", NULL, &t2310_TI, &t134_0_0_0, RuntimeInvoker_t134_t334_t334, t2310_m27267_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2310_TI;
extern Il2CppType t2310_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12412_MI = 
{
	"get_Default", (methodPointerType)&m12412, &t2310_TI, &t2310_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2310_MIs[] =
{
	&m12409_MI,
	&m12410_MI,
	&m12411_MI,
	&m27267_MI,
	&m12412_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m27267_MI;
extern MethodInfo m12411_MI;
static MethodInfo* t2310_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m27267_MI,
	&m12411_MI,
	NULL,
};
extern TypeInfo t3819_TI;
extern TypeInfo t147_TI;
static TypeInfo* t2310_ITIs[] = 
{
	&t3819_TI,
	&t147_TI,
};
extern TypeInfo t3819_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t2310_IOs[] = 
{
	{ &t3819_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2310_0_0_0;
extern Il2CppType t2310_1_0_0;
extern TypeInfo t25_TI;
struct t2310;
extern TypeInfo t2310_TI;
extern Il2CppGenericClass t2310_GC;
TypeInfo t2310_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2310_MIs, t2310_PIs, t2310_FIs, NULL, &t25_TI, NULL, NULL, &t2310_TI, t2310_ITIs, t2310_VT, &EmptyCustomAttributesCache, &t2310_TI, &t2310_0_0_0, &t2310_1_0_0, t2310_IOs, &t2310_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2310), 0, -1, sizeof(t2310_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3819_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
extern Il2CppType t334_0_0_0;
extern Il2CppType t334_0_0_0;
static ParameterInfo t3819_m20177_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
};
extern TypeInfo t3819_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t334_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m20177_MI = 
{
	"Compare", NULL, &t3819_TI, &t134_0_0_0, RuntimeInvoker_t134_t334_t334, t3819_m20177_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3819_MIs[] =
{
	&m20177_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3819_0_0_0;
extern Il2CppType t3819_1_0_0;
struct t3819;
extern TypeInfo t3819_TI;
extern Il2CppGenericClass t3819_GC;
TypeInfo t3819_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3819_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3819_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3819_TI, &t3819_0_0_0, &t3819_1_0_0, NULL, &t3819_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3820_TI;



// Metadata Definition System.IComparable`1<UnityEngine.UIVertex>
extern Il2CppType t334_0_0_0;
static ParameterInfo t3820_m20178_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
};
extern TypeInfo t3820_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m20178_MI = 
{
	"CompareTo", NULL, &t3820_TI, &t134_0_0_0, RuntimeInvoker_t134_t334, t3820_m20178_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3820_MIs[] =
{
	&m20178_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3820_0_0_0;
extern Il2CppType t3820_1_0_0;
struct t3820;
extern TypeInfo t3820_TI;
extern Il2CppGenericClass t3820_GC;
TypeInfo t3820_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3820_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3820_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3820_TI, &t3820_0_0_0, &t3820_1_0_0, NULL, &t3820_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2311_TI;

#include "t27.h"
extern TypeInfo t334_TI;
extern TypeInfo t3820_TI;
extern TypeInfo t134_TI;
extern TypeInfo t143_TI;
extern TypeInfo t25_TI;
extern TypeInfo t445_TI;
extern MethodInfo m12409_MI;
extern MethodInfo m20178_MI;
extern MethodInfo m7828_MI;
extern MethodInfo m2409_MI;


extern MethodInfo m12413_MI;
 void m12413 (t2311 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12413_MI);
	{
		m12409(__this, &m12409_MI);
		return;
	}
}
extern MethodInfo m12414_MI;
 int32_t m12414 (t2311 * __this, t334  p0, t334  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12414_MI);
	int32_t G_B4_0 = 0;
	{
		t334  L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t334_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t334  L_2 = p1;
		t25 * L_3 = Box(InitializedTypeInfo(&t334_TI), &L_2);
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
		t334  L_4 = p1;
		t25 * L_5 = Box(InitializedTypeInfo(&t334_TI), &L_4);
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
		t334  L_6 = p0;
		t25 * L_7 = Box(InitializedTypeInfo(&t334_TI), &L_6);
		if (!((t25*)IsInst(L_7, InitializedTypeInfo(&t3820_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t334  L_8 = p0;
		t25 * L_9 = Box(InitializedTypeInfo(&t334_TI), &L_8);
		NullCheck(((t25*)Castclass(L_9, InitializedTypeInfo(&t3820_TI))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t334  >::Invoke(&m20178_MI, ((t25*)Castclass(L_9, InitializedTypeInfo(&t3820_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t334  L_11 = p0;
		t25 * L_12 = Box(InitializedTypeInfo(&t334_TI), &L_11);
		if (!((t25 *)IsInst(L_12, InitializedTypeInfo(&t143_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t334  L_13 = p0;
		t25 * L_14 = Box(InitializedTypeInfo(&t334_TI), &L_13);
		t334  L_15 = p1;
		t25 * L_16 = Box(InitializedTypeInfo(&t334_TI), &L_15);
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
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UIVertex>
extern TypeInfo t2311_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12413_MI = 
{
	".ctor", (methodPointerType)&m12413, &t2311_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t334_0_0_0;
extern Il2CppType t334_0_0_0;
static ParameterInfo t2311_m12414_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
};
extern TypeInfo t2311_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t334_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m12414_MI = 
{
	"Compare", (methodPointerType)&m12414, &t2311_TI, &t134_0_0_0, RuntimeInvoker_t134_t334_t334, t2311_m12414_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2311_MIs[] =
{
	&m12413_MI,
	&m12414_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12414_MI;
extern MethodInfo m12411_MI;
extern MethodInfo m12414_MI;
static MethodInfo* t2311_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12414_MI,
	&m12411_MI,
	&m12414_MI,
};
extern TypeInfo t3819_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t2311_IOs[] = 
{
	{ &t3819_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2311_0_0_0;
extern Il2CppType t2311_1_0_0;
extern TypeInfo t2310_TI;
struct t2311;
extern TypeInfo t2311_TI;
extern Il2CppGenericClass t2311_GC;
extern TypeInfo t940_TI;
TypeInfo t2311_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2311_MIs, NULL, NULL, NULL, &t2310_TI, NULL, &t940_TI, &t2311_TI, NULL, t2311_VT, &EmptyCustomAttributesCache, &t2311_TI, &t2311_0_0_0, &t2311_1_0_0, t2311_IOs, &t2311_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2311), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t2304.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2304_TI;
#include "t2304MD.h"



extern MethodInfo m12415_MI;
 void m12415 (t2304 * __this, t25 * p0, t61 p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12415_MI);
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m12416_MI;
 int32_t m12416 (t2304 * __this, t334  p0, t334  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12416_MI);
	typedef  int32_t (*FunctionPointerType) (t25 * __this, t334  p0, t334  p1, MethodInfo* method);
	if (__this->f9)
		m12416((t2304 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m12417_MI;
 t25 * m12417 (t2304 * __this, t334  p0, t334  p1, t219 * p2, t25 * p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12417_MI);
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t334_TI), &p0);
	__d_args[1] = Box(InitializedTypeInfo(&t334_TI), &p1);
	return (t25 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m12418_MI;
 int32_t m12418 (t2304 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12418_MI);
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Comparison`1<UnityEngine.UIVertex>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2304_m12415_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2304_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m12415_MI = 
{
	".ctor", (methodPointerType)&m12415, &t2304_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2304_m12415_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t334_0_0_0;
extern Il2CppType t334_0_0_0;
static ParameterInfo t2304_m12416_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
};
extern TypeInfo t2304_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t334_t334 (MethodInfo* method, void* obj, void** args);
MethodInfo m12416_MI = 
{
	"Invoke", (methodPointerType)&m12416, &t2304_TI, &t134_0_0_0, RuntimeInvoker_t134_t334_t334, t2304_m12416_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t334_0_0_0;
extern Il2CppType t334_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2304_m12417_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t334_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2304_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t334_t334_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12417_MI = 
{
	"BeginInvoke", (methodPointerType)&m12417, &t2304_TI, &t218_0_0_0, RuntimeInvoker_t25_t334_t334_t25_t25, t2304_m12417_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2304_m12418_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2304_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12418_MI = 
{
	"EndInvoke", (methodPointerType)&m12418, &t2304_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2304_m12418_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2304_MIs[] =
{
	&m12415_MI,
	&m12416_MI,
	&m12417_MI,
	&m12418_MI,
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
extern MethodInfo m12416_MI;
extern MethodInfo m12417_MI;
extern MethodInfo m12418_MI;
static MethodInfo* t2304_VT[] =
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
	&m12416_MI,
	&m12417_MI,
	&m12418_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2304_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2304_0_0_0;
extern Il2CppType t2304_1_0_0;
extern TypeInfo t345_TI;
struct t2304;
extern TypeInfo t2304_TI;
extern Il2CppGenericClass t2304_GC;
TypeInfo t2304_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2304_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2304_TI, NULL, t2304_VT, &EmptyCustomAttributesCache, &t2304_TI, &t2304_0_0_0, &t2304_1_0_0, t2304_IOs, &t2304_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2304), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2312.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2312_TI;
#include "t2312MD.h"

#include "t314.h"
#include "t1387.h"
extern TypeInfo t2312_TI;
extern TypeInfo t314_TI;
extern TypeInfo t1387_TI;
#include "t1387MD.h"
#include "t122MD.h"
extern MethodInfo m12423_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20183_MI;
struct t122;
#include "t1351.h"
struct t122;
 t25 * m18022_gshared (t122 * __this, int32_t p0, MethodInfo* method);
#define m18022(__this, p0, method) (t25 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
#define m20183(__this, p0, method) (t314 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m20183_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
extern Il2CppType t122_0_0_1;
FieldInfo t2312_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2312_TI, offsetof(t2312, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2312_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2312_TI, offsetof(t2312, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2312_FIs[] =
{
	&t2312_f0_FieldInfo,
	&t2312_f1_FieldInfo,
	NULL
};
extern MethodInfo m12420_MI;
static PropertyInfo t2312____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2312_TI, "System.Collections.IEnumerator.Current", &m12420_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12423_MI;
static PropertyInfo t2312____Current_PropertyInfo = 
{
	&t2312_TI, "Current", &m12423_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2312_PIs[] =
{
	&t2312____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2312____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2312_m12419_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2312_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12419_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t2312_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2312_m12419_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2312_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12420_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t2312_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2312_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12421_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t2312_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2312_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12422_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t2312_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2312_TI;
extern Il2CppType t314_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12423_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t2312_TI, &t314_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2312_MIs[] =
{
	&m12419_MI,
	&m12420_MI,
	&m12421_MI,
	&m12422_MI,
	&m12423_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m12420_MI;
extern MethodInfo m12422_MI;
extern MethodInfo m12421_MI;
extern MethodInfo m12423_MI;
static MethodInfo* t2312_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m12420_MI,
	&m12422_MI,
	&m12421_MI,
	&m12423_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2298_TI;
static TypeInfo* t2312_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2298_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2298_TI;
static Il2CppInterfaceOffsetPair t2312_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2298_TI, 7},
};
extern MethodInfo m12423_MI;
extern TypeInfo t314_TI;
extern MethodInfo m20183_MI;
static void* t2312_RGCTXData[3] = 
{
	&m12423_MI,
	&t314_TI,
	&m20183_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2312_0_0_0;
extern Il2CppType t2312_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2312_TI;
extern Il2CppGenericClass t2312_GC;
extern TypeInfo t122_TI;
TypeInfo t2312_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2312_MIs, t2312_PIs, t2312_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2312_TI, t2312_ITIs, t2312_VT, &EmptyCustomAttributesCache, &t2312_TI, &t2312_0_0_0, &t2312_1_0_0, t2312_IOs, &t2312_GC, NULL, NULL, NULL, t2312_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2312)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4661_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
extern MethodInfo m27268_MI;
static PropertyInfo t4661____Count_PropertyInfo = 
{
	&t4661_TI, "Count", &m27268_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27269_MI;
static PropertyInfo t4661____IsReadOnly_PropertyInfo = 
{
	&t4661_TI, "IsReadOnly", &m27269_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4661_PIs[] =
{
	&t4661____Count_PropertyInfo,
	&t4661____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4661_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27268_MI = 
{
	"get_Count", NULL, &t4661_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4661_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27269_MI = 
{
	"get_IsReadOnly", NULL, &t4661_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t314_0_0_0;
static ParameterInfo t4661_m27270_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t314_0_0_0},
};
extern TypeInfo t4661_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27270_MI = 
{
	"Add", NULL, &t4661_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t4661_m27270_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4661_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27271_MI = 
{
	"Clear", NULL, &t4661_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t314_0_0_0;
static ParameterInfo t4661_m27272_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t314_0_0_0},
};
extern TypeInfo t4661_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27272_MI = 
{
	"Contains", NULL, &t4661_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4661_m27272_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2297_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4661_m27273_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2297_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4661_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27273_MI = 
{
	"CopyTo", NULL, &t4661_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4661_m27273_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t314_0_0_0;
static ParameterInfo t4661_m27274_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t314_0_0_0},
};
extern TypeInfo t4661_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27274_MI = 
{
	"Remove", NULL, &t4661_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4661_m27274_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4661_MIs[] =
{
	&m27268_MI,
	&m27269_MI,
	&m27270_MI,
	&m27271_MI,
	&m27272_MI,
	&m27273_MI,
	&m27274_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4663_TI;
static TypeInfo* t4661_ITIs[] = 
{
	&t703_TI,
	&t4663_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4661_0_0_0;
extern Il2CppType t4661_1_0_0;
struct t4661;
extern TypeInfo t4661_TI;
extern Il2CppGenericClass t4661_GC;
TypeInfo t4661_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4661_MIs, t4661_PIs, NULL, NULL, NULL, NULL, NULL, &t4661_TI, t4661_ITIs, NULL, &EmptyCustomAttributesCache, &t4661_TI, &t4661_0_0_0, &t4661_1_0_0, NULL, &t4661_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4662_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
extern MethodInfo m27275_MI;
extern MethodInfo m27276_MI;
static PropertyInfo t4662____Item_PropertyInfo = 
{
	&t4662_TI, "Item", &m27275_MI, &m27276_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4662_PIs[] =
{
	&t4662____Item_PropertyInfo,
	NULL
};
extern Il2CppType t314_0_0_0;
static ParameterInfo t4662_m27277_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t314_0_0_0},
};
extern TypeInfo t4662_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27277_MI = 
{
	"IndexOf", NULL, &t4662_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t4662_m27277_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t314_0_0_0;
static ParameterInfo t4662_m27278_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t314_0_0_0},
};
extern TypeInfo t4662_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27278_MI = 
{
	"Insert", NULL, &t4662_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4662_m27278_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4662_m27279_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4662_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27279_MI = 
{
	"RemoveAt", NULL, &t4662_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4662_m27279_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4662_m27275_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4662_TI;
extern Il2CppType t314_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27275_MI = 
{
	"get_Item", NULL, &t4662_TI, &t314_0_0_0, RuntimeInvoker_t25_t134, t4662_m27275_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t314_0_0_0;
static ParameterInfo t4662_m27276_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t314_0_0_0},
};
extern TypeInfo t4662_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27276_MI = 
{
	"set_Item", NULL, &t4662_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4662_m27276_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4662_MIs[] =
{
	&m27277_MI,
	&m27278_MI,
	&m27279_MI,
	&m27275_MI,
	&m27276_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4661_TI;
extern TypeInfo t4663_TI;
static TypeInfo* t4662_ITIs[] = 
{
	&t703_TI,
	&t4661_TI,
	&t4663_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4662_0_0_0;
extern Il2CppType t4662_1_0_0;
struct t4662;
extern TypeInfo t4662_TI;
extern Il2CppGenericClass t4662_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4662_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4662_MIs, t4662_PIs, NULL, NULL, NULL, NULL, NULL, &t4662_TI, t4662_ITIs, NULL, &t1518__CustomAttributeCache, &t4662_TI, &t4662_0_0_0, &t4662_1_0_0, NULL, &t4662_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2299.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2299_TI;
#include "t2299MD.h"

#include "t2296.h"
extern TypeInfo t2299_TI;
extern TypeInfo t314_TI;
extern TypeInfo t1387_TI;
extern TypeInfo t2296_TI;
extern MethodInfo m12428_MI;
extern MethodInfo m7430_MI;


// Metadata Definition System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
extern Il2CppType t2296_0_0_1;
FieldInfo t2299_f0_FieldInfo = 
{
	"parent", &t2296_0_0_1, &t2299_TI, offsetof(t2299, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2299_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2299_TI, offsetof(t2299, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2299_f2_FieldInfo = 
{
	"_version", &t134_0_0_1, &t2299_TI, offsetof(t2299, f2) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2299_FIs[] =
{
	&t2299_f0_FieldInfo,
	&t2299_f1_FieldInfo,
	&t2299_f2_FieldInfo,
	NULL
};
extern MethodInfo m12425_MI;
static PropertyInfo t2299____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2299_TI, "System.Collections.IEnumerator.Current", &m12425_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12428_MI;
static PropertyInfo t2299____Current_PropertyInfo = 
{
	&t2299_TI, "Current", &m12428_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2299_PIs[] =
{
	&t2299____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2299____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2296_0_0_0;
static ParameterInfo t2299_m12424_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t2296_0_0_0},
};
extern TypeInfo t2299_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12424_MI = 
{
	".ctor", (methodPointerType)&m10406_gshared, &t2299_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2299_m12424_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2299_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12425_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10407_gshared, &t2299_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2299_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12426_MI = 
{
	"Dispose", (methodPointerType)&m10408_gshared, &t2299_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2299_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12427_MI = 
{
	"MoveNext", (methodPointerType)&m10409_gshared, &t2299_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2299_TI;
extern Il2CppType t314_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12428_MI = 
{
	"get_Current", (methodPointerType)&m10410_gshared, &t2299_TI, &t314_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2299_MIs[] =
{
	&m12424_MI,
	&m12425_MI,
	&m12426_MI,
	&m12427_MI,
	&m12428_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m12425_MI;
extern MethodInfo m12427_MI;
extern MethodInfo m12426_MI;
extern MethodInfo m12428_MI;
static MethodInfo* t2299_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m12425_MI,
	&m12427_MI,
	&m12426_MI,
	&m12428_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2298_TI;
static TypeInfo* t2299_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2298_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2298_TI;
static Il2CppInterfaceOffsetPair t2299_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2298_TI, 7},
};
extern MethodInfo m12428_MI;
extern TypeInfo t314_TI;
static void* t2299_RGCTXData[2] = 
{
	&m12428_MI,
	&t314_TI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t2299_0_0_0;
extern Il2CppType t2299_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2299_TI;
extern Il2CppGenericClass t2299_GC;
extern TypeInfo t796_TI;
TypeInfo t2299_TI = 
{
	&g_System_dll_Image, NULL, "Enumerator", "", t2299_MIs, t2299_PIs, t2299_FIs, NULL, &t117_TI, NULL, &t796_TI, &t2299_TI, t2299_ITIs, t2299_VT, &EmptyCustomAttributesCache, &t2299_TI, &t2299_0_0_0, &t2299_1_0_0, t2299_IOs, &t2299_GC, NULL, NULL, NULL, t2299_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2299)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 3, 0, 0, 8, 3, 3};
#include "t312.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t312_TI;
#include "t312MD.h"



// Metadata Definition UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t312_m2071_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t312_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m2071_MI = 
{
	".ctor", (methodPointerType)&m8422_gshared, &t312_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t312_m2071_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t314_0_0_0;
static ParameterInfo t312_m12429_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t314_0_0_0},
};
extern TypeInfo t312_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12429_MI = 
{
	"Invoke", (methodPointerType)&m8423_gshared, &t312_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t312_m12429_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t314_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t312_m12430_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t314_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t312_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12430_MI = 
{
	"BeginInvoke", (methodPointerType)&m8424_gshared, &t312_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t312_m12430_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t312_m12431_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t312_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12431_MI = 
{
	"EndInvoke", (methodPointerType)&m8425_gshared, &t312_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t312_m12431_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t312_MIs[] =
{
	&m2071_MI,
	&m12429_MI,
	&m12430_MI,
	&m12431_MI,
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
extern MethodInfo m12429_MI;
extern MethodInfo m12430_MI;
extern MethodInfo m12431_MI;
static MethodInfo* t312_VT[] =
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
	&m12429_MI,
	&m12430_MI,
	&m12431_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t312_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t312_0_0_0;
extern Il2CppType t312_1_0_0;
extern TypeInfo t345_TI;
struct t312;
extern TypeInfo t312_TI;
extern Il2CppGenericClass t312_GC;
TypeInfo t312_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t312_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t312_TI, NULL, t312_VT, &EmptyCustomAttributesCache, &t312_TI, &t312_0_0_0, &t312_1_0_0, t312_IOs, &t312_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t312), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t311.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t311_TI;
#include "t311MD.h"

#include "t277.h"
#include "t2313.h"
#include "t3.h"
#include "t60.h"
#include "t62.h"
#include "t124.h"
#include "t181.h"
extern TypeInfo t2313_TI;
extern TypeInfo t311_TI;
extern TypeInfo t277_TI;
extern TypeInfo t458_TI;
extern TypeInfo t123_TI;
extern TypeInfo t124_TI;
#include "t2313MD.h"
#include "t60MD.h"
#include "t150MD.h"
#include "t3MD.h"
#include "t127MD.h"
#include "t62MD.h"
extern MethodInfo m452_MI;
extern MethodInfo m12433_MI;
extern MethodInfo m411_MI;
extern MethodInfo m2989_MI;
extern MethodInfo m3023_MI;
extern MethodInfo m370_MI;
extern MethodInfo m1930_MI;
extern MethodInfo m2008_MI;
extern MethodInfo m12432_MI;
extern MethodInfo m604_MI;


extern MethodInfo m2069_MI;
 void m2069 (t311 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2069_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m12432_MI;
 t25 * m12432 (t25 * __this, t277  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12432_MI);
	t2313 * V_0 = {0};
	{
		t2313 * L_0 = (t2313 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2313_TI));
		m12433(L_0, &m12433_MI);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->f0 = p0;
		NullCheck(V_0);
		V_0->f5 = p0;
		return V_0;
	}
}
extern MethodInfo m2070_MI;
 void m2070 (t311 * __this, t3 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2070_MI);
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m2103_MI;
 void m2103 (t311 * __this, t277  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m2103_MI);
	{
		t3 * L_0 = (__this->f0);
		bool L_1 = m411(NULL, L_0, (t60 *)NULL, &m411_MI);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		m2989(NULL, (t27*) &_stringLiteral64, &m2989_MI);
		return;
	}

IL_001c:
	{
		t25 * L_2 = (__this->f1);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		t3 * L_3 = (__this->f0);
		t25 * L_4 = (__this->f1);
		NullCheck(L_3);
		m3023(L_3, L_4, &m3023_MI);
		__this->f1 = (t25 *)NULL;
	}

IL_003f:
	{
		t3 * L_5 = (__this->f0);
		NullCheck(L_5);
		t62 * L_6 = m370(L_5, &m370_MI);
		NullCheck(L_6);
		bool L_7 = m1930(L_6, &m1930_MI);
		if (L_7)
		{
			goto IL_0067;
		}
	}
	{
		NullCheck(Box(InitializedTypeInfo(&t277_TI), &(*(&p0))));
		InterfaceActionInvoker1< float >::Invoke(&m2008_MI, Box(InitializedTypeInfo(&t277_TI), &(*(&p0))), (1.0f));
		return;
	}

IL_0067:
	{
		t25 * L_8 = m12432(NULL, p0, &m12432_MI);
		__this->f1 = L_8;
		t3 * L_9 = (__this->f0);
		t25 * L_10 = (__this->f1);
		NullCheck(L_9);
		m604(L_9, L_10, &m604_MI);
		return;
	}
}
// Metadata Definition UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
extern Il2CppType t3_0_0_4;
FieldInfo t311_f0_FieldInfo = 
{
	"m_CoroutineContainer", &t3_0_0_4, &t311_TI, offsetof(t311, f0), &EmptyCustomAttributesCache};
extern Il2CppType t78_0_0_4;
FieldInfo t311_f1_FieldInfo = 
{
	"m_Tween", &t78_0_0_4, &t311_TI, offsetof(t311, f1), &EmptyCustomAttributesCache};
static FieldInfo* t311_FIs[] =
{
	&t311_f0_FieldInfo,
	&t311_f1_FieldInfo,
	NULL
};
extern TypeInfo t311_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2069_MI = 
{
	".ctor", (methodPointerType)&m2069, &t311_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t277_0_0_0;
static ParameterInfo t311_m12432_ParameterInfos[] = 
{
	{"tweenInfo", 0, 134217728, &EmptyCustomAttributesCache, &t277_0_0_0},
};
extern TypeInfo t311_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25_t277 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t280__CustomAttributeCache_m2023;
MethodInfo m12432_MI = 
{
	"Start", (methodPointerType)&m12432, &t311_TI, &t78_0_0_0, RuntimeInvoker_t25_t277, t311_m12432_ParameterInfos, &t280__CustomAttributeCache_m2023, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3_0_0_0;
static ParameterInfo t311_m2070_ParameterInfos[] = 
{
	{"coroutineContainer", 0, 134217728, &EmptyCustomAttributesCache, &t3_0_0_0},
};
extern TypeInfo t311_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2070_MI = 
{
	"Init", (methodPointerType)&m2070, &t311_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t311_m2070_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t277_0_0_0;
static ParameterInfo t311_m2103_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t277_0_0_0},
};
extern TypeInfo t311_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t277 (MethodInfo* method, void* obj, void** args);
MethodInfo m2103_MI = 
{
	"StartTween", (methodPointerType)&m2103, &t311_TI, &t123_0_0_0, RuntimeInvoker_t123_t277, t311_m2103_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t311_MIs[] =
{
	&m2069_MI,
	&m12432_MI,
	&m2070_MI,
	&m2103_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t311_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t311_0_0_0;
extern Il2CppType t311_1_0_0;
extern TypeInfo t25_TI;
struct t311;
extern TypeInfo t311_TI;
extern Il2CppGenericClass t311_GC;
extern CustomAttributesCache t280__CustomAttributeCache_m2023;
TypeInfo t311_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "TweenRunner`1", "UnityEngine.UI.CoroutineTween", t311_MIs, NULL, t311_FIs, NULL, &t25_TI, NULL, NULL, &t311_TI, NULL, t311_VT, &EmptyCustomAttributesCache, &t311_TI, &t311_0_0_0, &t311_1_0_0, NULL, &t311_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t311), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2313_TI;

#include "t176.h"
#include "t177.h"
extern TypeInfo t2313_TI;
extern TypeInfo t277_TI;
extern TypeInfo t458_TI;
extern TypeInfo t125_TI;
extern TypeInfo t124_TI;
extern TypeInfo t126_TI;
extern TypeInfo t123_TI;
extern TypeInfo t177_TI;
#include "t128MD.h"
#include "t126MD.h"
#include "t177MD.h"
extern MethodInfo m452_MI;
extern MethodInfo m2009_MI;
extern MethodInfo m2006_MI;
extern MethodInfo m2029_MI;
extern MethodInfo m345_MI;
extern MethodInfo m2007_MI;
extern MethodInfo m2142_MI;
extern MethodInfo m2008_MI;
extern MethodInfo m566_MI;


extern MethodInfo m12433_MI;
 void m12433 (t2313 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12433_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m12434_MI;
 t25 * m12434 (t2313 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12434_MI);
	{
		t25 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m12435_MI;
 t25 * m12435 (t2313 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12435_MI);
	{
		t25 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m12436_MI;
 bool m12436 (t2313 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12436_MI);
	uint32_t V_0 = 0;
	bool V_1 = false;
	float G_B7_0 = 0.0f;
	t2313 * G_B7_1 = {0};
	float G_B6_0 = 0.0f;
	t2313 * G_B6_1 = {0};
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	t2313 * G_B8_2 = {0};
	{
		int32_t L_0 = (__this->f3);
		V_0 = L_0;
		__this->f3 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0104;
	}

IL_0021:
	{
		t277 * L_1 = &(__this->f0);
		NullCheck(Box(InitializedTypeInfo(&t277_TI), &(*L_1)));
		bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m2009_MI, Box(InitializedTypeInfo(&t277_TI), &(*L_1)));
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0104;
	}

IL_003c:
	{
		__this->f1 = (0.0f);
		goto IL_00cb;
	}

IL_004c:
	{
		float L_3 = (__this->f1);
		t277 * L_4 = &(__this->f0);
		NullCheck(Box(InitializedTypeInfo(&t277_TI), &(*L_4)));
		bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m2006_MI, Box(InitializedTypeInfo(&t277_TI), &(*L_4)));
		G_B6_0 = L_3;
		G_B6_1 = ((t2313 *)(__this));
		if (!L_5)
		{
			G_B7_0 = L_3;
			G_B7_1 = ((t2313 *)(__this));
			goto IL_0073;
		}
	}
	{
		float L_6 = m2029(NULL, &m2029_MI);
		G_B8_0 = L_6;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((t2313 *)(G_B6_1));
		goto IL_0078;
	}

IL_0073:
	{
		float L_7 = m345(NULL, &m345_MI);
		G_B8_0 = L_7;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((t2313 *)(G_B7_1));
	}

IL_0078:
	{
		NullCheck(G_B8_2);
		G_B8_2->f1 = ((float)(G_B8_1+G_B8_0));
		float L_8 = (__this->f1);
		t277 * L_9 = &(__this->f0);
		NullCheck(Box(InitializedTypeInfo(&t277_TI), &(*L_9)));
		float L_10 = (float)InterfaceFuncInvoker0< float >::Invoke(&m2007_MI, Box(InitializedTypeInfo(&t277_TI), &(*L_9)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		float L_11 = m2142(NULL, ((float)(L_8/L_10)), &m2142_MI);
		__this->f2 = L_11;
		t277 * L_12 = &(__this->f0);
		float L_13 = (__this->f2);
		NullCheck(Box(InitializedTypeInfo(&t277_TI), &(*L_12)));
		InterfaceActionInvoker1< float >::Invoke(&m2008_MI, Box(InitializedTypeInfo(&t277_TI), &(*L_12)), L_13);
		__this->f4 = NULL;
		__this->f3 = 1;
		goto IL_0106;
	}

IL_00cb:
	{
		float L_14 = (__this->f1);
		t277 * L_15 = &(__this->f0);
		NullCheck(Box(InitializedTypeInfo(&t277_TI), &(*L_15)));
		float L_16 = (float)InterfaceFuncInvoker0< float >::Invoke(&m2007_MI, Box(InitializedTypeInfo(&t277_TI), &(*L_15)));
		if ((((float)L_14) < ((float)L_16)))
		{
			goto IL_004c;
		}
	}
	{
		t277 * L_17 = &(__this->f0);
		NullCheck(Box(InitializedTypeInfo(&t277_TI), &(*L_17)));
		InterfaceActionInvoker1< float >::Invoke(&m2008_MI, Box(InitializedTypeInfo(&t277_TI), &(*L_17)), (1.0f));
		__this->f3 = (-1);
	}

IL_0104:
	{
		return 0;
	}

IL_0106:
	{
		return 1;
	}
	// Dead block : IL_0108: ldloc.1
}
extern MethodInfo m12437_MI;
 void m12437 (t2313 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12437_MI);
	{
		__this->f3 = (-1);
		return;
	}
}
extern MethodInfo m12438_MI;
 void m12438 (t2313 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12438_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m566(L_0, &m566_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
extern Il2CppType t277_0_0_3;
FieldInfo t2313_f0_FieldInfo = 
{
	"tweenInfo", &t277_0_0_3, &t2313_TI, offsetof(t2313, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t2313_f1_FieldInfo = 
{
	"<elapsedTime>__0", &t124_0_0_3, &t2313_TI, offsetof(t2313, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t2313_f2_FieldInfo = 
{
	"<percentage>__1", &t124_0_0_3, &t2313_TI, offsetof(t2313, f2), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t2313_f3_FieldInfo = 
{
	"$PC", &t134_0_0_3, &t2313_TI, offsetof(t2313, f3), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_3;
FieldInfo t2313_f4_FieldInfo = 
{
	"$current", &t25_0_0_3, &t2313_TI, offsetof(t2313, f4), &EmptyCustomAttributesCache};
extern Il2CppType t277_0_0_3;
FieldInfo t2313_f5_FieldInfo = 
{
	"<$>tweenInfo", &t277_0_0_3, &t2313_TI, offsetof(t2313, f5), &EmptyCustomAttributesCache};
static FieldInfo* t2313_FIs[] =
{
	&t2313_f0_FieldInfo,
	&t2313_f1_FieldInfo,
	&t2313_f2_FieldInfo,
	&t2313_f3_FieldInfo,
	&t2313_f4_FieldInfo,
	&t2313_f5_FieldInfo,
	NULL
};
extern MethodInfo m12434_MI;
static PropertyInfo t2313____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&t2313_TI, "System.Collections.Generic.IEnumerator<object>.Current", &m12434_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12435_MI;
static PropertyInfo t2313____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2313_TI, "System.Collections.IEnumerator.Current", &m12435_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2313_PIs[] =
{
	&t2313____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&t2313____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t2313_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12433_MI = 
{
	".ctor", (methodPointerType)&m12433, &t2313_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2313_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t279__CustomAttributeCache_m2017;
MethodInfo m12434_MI = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current", (methodPointerType)&m12434, &t2313_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t279__CustomAttributeCache_m2017, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2313_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t279__CustomAttributeCache_m2018;
MethodInfo m12435_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12435, &t2313_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &t279__CustomAttributeCache_m2018, 2529, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2313_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12436_MI = 
{
	"MoveNext", (methodPointerType)&m12436, &t2313_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2313_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t279__CustomAttributeCache_m2020;
MethodInfo m12437_MI = 
{
	"Dispose", (methodPointerType)&m12437, &t2313_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t279__CustomAttributeCache_m2020, 486, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2313_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t279__CustomAttributeCache_m2021;
MethodInfo m12438_MI = 
{
	"Reset", (methodPointerType)&m12438, &t2313_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t279__CustomAttributeCache_m2021, 486, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2313_MIs[] =
{
	&m12433_MI,
	&m12434_MI,
	&m12435_MI,
	&m12436_MI,
	&m12437_MI,
	&m12438_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12437_MI;
extern MethodInfo m12435_MI;
extern MethodInfo m12436_MI;
extern MethodInfo m12434_MI;
extern MethodInfo m12438_MI;
static MethodInfo* t2313_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12437_MI,
	&m12435_MI,
	&m12436_MI,
	&m12434_MI,
	&m12438_MI,
};
extern TypeInfo t167_TI;
extern TypeInfo t78_TI;
extern TypeInfo t179_TI;
static TypeInfo* t2313_ITIs[] = 
{
	&t167_TI,
	&t78_TI,
	&t179_TI,
};
extern TypeInfo t167_TI;
extern TypeInfo t78_TI;
extern TypeInfo t179_TI;
static Il2CppInterfaceOffsetPair t2313_IOs[] = 
{
	{ &t167_TI, 4},
	{ &t78_TI, 5},
	{ &t179_TI, 7},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t2313_0_0_0;
extern Il2CppType t2313_1_0_0;
extern TypeInfo t25_TI;
struct t2313;
extern TypeInfo t2313_TI;
extern Il2CppGenericClass t2313_GC;
extern TypeInfo t280_TI;
extern CustomAttributesCache t279__CustomAttributeCache;
extern CustomAttributesCache t279__CustomAttributeCache_m2017;
extern CustomAttributesCache t279__CustomAttributeCache_m2018;
extern CustomAttributesCache t279__CustomAttributeCache_m2020;
extern CustomAttributesCache t279__CustomAttributeCache_m2021;
TypeInfo t2313_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "<Start>c__Iterator0", "", t2313_MIs, t2313_PIs, t2313_FIs, NULL, &t25_TI, NULL, &t280_TI, &t2313_TI, t2313_ITIs, t2313_VT, &t279__CustomAttributeCache, &t2313_TI, &t2313_0_0_0, &t2313_1_0_0, t2313_IOs, &t2313_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2313), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 6, 0, 0, 9, 3, 3};
#include "t425.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t425_TI;
#include "t425MD.h"

#include "t309.h"
#include "UnityEngine_ArrayTypes.h"
#include "t2321.h"
#include "t2318.h"
#include "t2319.h"
#include "t165.h"
#include "t2327.h"
#include "t2320.h"
extern TypeInfo t425_TI;
extern TypeInfo t309_TI;
extern TypeInfo t134_TI;
extern TypeInfo t123_TI;
extern TypeInfo t445_TI;
extern TypeInfo t685_TI;
extern TypeInfo t1386_TI;
extern TypeInfo t1351_TI;
extern TypeInfo t2317_TI;
extern TypeInfo t2314_TI;
extern TypeInfo t2321_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2315_TI;
extern TypeInfo t2316_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2318_TI;
extern TypeInfo t165_TI;
extern TypeInfo t2319_TI;
extern TypeInfo t2327_TI;
#include "t1351MD.h"
#include "t702MD.h"
#include "t2318MD.h"
#include "t165MD.h"
#include "t2319MD.h"
#include "t2321MD.h"
#include "t2327MD.h"
extern MethodInfo m2076_MI;
extern MethodInfo m12485_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m6998_MI;
extern MethodInfo m20208_MI;
extern MethodInfo m6999_MI;
extern MethodInfo m12472_MI;
extern MethodInfo m452_MI;
extern MethodInfo m12474_MI;
extern MethodInfo m12461_MI;
extern MethodInfo m27280_MI;
extern MethodInfo m12460_MI;
extern MethodInfo m12469_MI;
extern MethodInfo m4283_MI;
extern MethodInfo m12458_MI;
extern MethodInfo m12464_MI;
extern MethodInfo m12470_MI;
extern MethodInfo m12473_MI;
extern MethodInfo m12475_MI;
extern MethodInfo m12459_MI;
extern MethodInfo m12483_MI;
extern MethodInfo m7436_MI;
extern MethodInfo m12484_MI;
extern MethodInfo m27281_MI;
extern MethodInfo m27282_MI;
extern MethodInfo m27283_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m12497_MI;
extern MethodInfo m4279_MI;
extern MethodInfo m20210_MI;
extern MethodInfo m12467_MI;
extern MethodInfo m12468_MI;
extern MethodInfo m489_MI;
extern MethodInfo m12572_MI;
extern MethodInfo m12491_MI;
extern MethodInfo m12471_MI;
extern MethodInfo m12477_MI;
extern MethodInfo m4295_MI;
extern MethodInfo m12578_MI;
extern MethodInfo m20212_MI;
extern MethodInfo m20220_MI;
extern MethodInfo m4282_MI;
struct t122;
struct t122;
 void m18837_gshared (t25 * __this, t158** p0, int32_t p1, MethodInfo* method);
#define m18837(__this, p0, p1, method) (void)m18837_gshared((t25 *)__this, (t158**)p0, (int32_t)p1, method)
#define m20208(__this, p0, p1, method) (void)m18837_gshared((t25 *)__this, (t158**)p0, (int32_t)p1, method)
extern MethodInfo m20208_MI;
struct t122;
#include "t2325.h"
struct t122;
#include "t1603.h"
 int32_t m8232_gshared (t25 * __this, t158* p0, t25 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m8232(__this, p0, p1, p2, p3, method) (int32_t)m8232_gshared((t25 *)__this, (t158*)p0, (t25 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m20210(__this, p0, p1, p2, p3, method) (int32_t)m8232_gshared((t25 *)__this, (t158*)p0, (t25 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m20210_MI;
struct t122;
struct t122;
 void m18840_gshared (t25 * __this, t158* p0, int32_t p1, int32_t p2, t25* p3, MethodInfo* method);
#define m18840(__this, p0, p1, p2, p3, method) (void)m18840_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (int32_t)p2, (t25*)p3, method)
#define m20212(__this, p0, p1, p2, p3, method) (void)m18840_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (int32_t)p2, (t25*)p3, method)
extern MethodInfo m20212_MI;
struct t122;
#include "t168.h"
struct t122;
#include "t1889.h"
 void m18914_gshared (t25 * __this, t158* p0, int32_t p1, t1889 * p2, MethodInfo* method);
#define m18914(__this, p0, p1, p2, method) (void)m18914_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (t1889 *)p2, method)
#define m20220(__this, p0, p1, p2, method) (void)m18914_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (t1889 *)p2, method)
extern MethodInfo m20220_MI;


extern MethodInfo m12469_MI;
 t2321  m12469 (t425 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12469_MI);
	{
		t2321  L_0 = {0};
		m12491(&L_0, __this, &m12491_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.Canvas>
extern Il2CppType t134_0_0_32849;
FieldInfo t425_f0_FieldInfo = 
{
	"DefaultCapacity", &t134_0_0_32849, &t425_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2314_0_0_1;
FieldInfo t425_f1_FieldInfo = 
{
	"_items", &t2314_0_0_1, &t425_TI, offsetof(t425, f1), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t425_f2_FieldInfo = 
{
	"_size", &t134_0_0_1, &t425_TI, offsetof(t425, f2), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t425_f3_FieldInfo = 
{
	"_version", &t134_0_0_1, &t425_TI, offsetof(t425, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2314_0_0_49;
FieldInfo t425_f4_FieldInfo = 
{
	"EmptyArray", &t2314_0_0_49, &t425_TI, offsetof(t425_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t425_FIs[] =
{
	&t425_f0_FieldInfo,
	&t425_f1_FieldInfo,
	&t425_f2_FieldInfo,
	&t425_f3_FieldInfo,
	&t425_f4_FieldInfo,
	NULL
};
static const int32_t t425_f0_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t425_f0_DefaultValue = 
{
	&t425_f0_FieldInfo, { (char*)&t425_f0_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t425_FDVs[] = 
{
	&t425_f0_DefaultValue,
	NULL
};
extern MethodInfo m12451_MI;
static PropertyInfo t425____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t425_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m12451_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12452_MI;
static PropertyInfo t425____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t425_TI, "System.Collections.ICollection.IsSynchronized", &m12452_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12453_MI;
static PropertyInfo t425____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t425_TI, "System.Collections.ICollection.SyncRoot", &m12453_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12454_MI;
static PropertyInfo t425____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t425_TI, "System.Collections.IList.IsFixedSize", &m12454_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12455_MI;
static PropertyInfo t425____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t425_TI, "System.Collections.IList.IsReadOnly", &m12455_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12456_MI;
extern MethodInfo m12457_MI;
static PropertyInfo t425____System_Collections_IList_Item_PropertyInfo = 
{
	&t425_TI, "System.Collections.IList.Item", &m12456_MI, &m12457_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12483_MI;
extern MethodInfo m12484_MI;
static PropertyInfo t425____Capacity_PropertyInfo = 
{
	&t425_TI, "Capacity", &m12483_MI, &m12484_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2075_MI;
static PropertyInfo t425____Count_PropertyInfo = 
{
	&t425_TI, "Count", &m2075_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2076_MI;
extern MethodInfo m12485_MI;
static PropertyInfo t425____Item_PropertyInfo = 
{
	&t425_TI, "Item", &m2076_MI, &m12485_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t425_PIs[] =
{
	&t425____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t425____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t425____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t425____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t425____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t425____System_Collections_IList_Item_PropertyInfo,
	&t425____Capacity_PropertyInfo,
	&t425____Count_PropertyInfo,
	&t425____Item_PropertyInfo,
	NULL
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12439_MI = 
{
	".ctor", (methodPointerType)&m9248_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2315_0_0_0;
static ParameterInfo t425_m12440_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2315_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12440_MI = 
{
	".ctor", (methodPointerType)&m9250_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t425_m12440_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t425_m12441_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12441_MI = 
{
	".ctor", (methodPointerType)&m9252_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t425_m12441_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12442_MI = 
{
	".cctor", (methodPointerType)&m9254_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t2316_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12443_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m9256_gshared, &t425_TI, &t2316_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t425_m12444_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12444_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9258_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t425_m12444_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12445_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9260_gshared, &t425_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t425_m12446_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12446_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9262_gshared, &t425_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t425_m12446_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t425_m12447_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12447_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9264_gshared, &t425_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t425_m12447_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t425_m12448_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12448_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9266_gshared, &t425_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t425_m12448_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t425_m12449_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12449_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9268_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t425_m12449_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t425_m12450_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12450_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9270_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t425_m12450_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12451_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9272_gshared, &t425_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12452_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9274_gshared, &t425_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12453_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9276_gshared, &t425_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12454_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9278_gshared, &t425_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12455_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9280_gshared, &t425_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t425_m12456_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12456_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9282_gshared, &t425_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t425_m12456_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t425_m12457_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12457_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9284_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t425_m12457_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t425_m12458_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12458_MI = 
{
	"Add", (methodPointerType)&m9285_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t425_m12458_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t425_m12459_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12459_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m9287_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t425_m12459_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2317_0_0_0;
static ParameterInfo t425_m12460_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2317_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12460_MI = 
{
	"AddCollection", (methodPointerType)&m9289_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t425_m12460_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2315_0_0_0;
static ParameterInfo t425_m12461_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2315_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12461_MI = 
{
	"AddEnumerable", (methodPointerType)&m9291_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t425_m12461_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2315_0_0_0;
static ParameterInfo t425_m12462_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2315_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12462_MI = 
{
	"AddRange", (methodPointerType)&m9293_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t425_m12462_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t2318_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12463_MI = 
{
	"AsReadOnly", (methodPointerType)&m9295_gshared, &t425_TI, &t2318_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2504_MI = 
{
	"Clear", (methodPointerType)&m9297_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t425_m12464_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12464_MI = 
{
	"Contains", (methodPointerType)&m9299_gshared, &t425_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t425_m12464_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2314_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t425_m12465_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2314_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12465_MI = 
{
	"CopyTo", (methodPointerType)&m9301_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t425_m12465_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2319_0_0_0;
static ParameterInfo t425_m12466_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2319_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12466_MI = 
{
	"Find", (methodPointerType)&m9303_gshared, &t425_TI, &t309_0_0_0, RuntimeInvoker_t25_t25, t425_m12466_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2319_0_0_0;
static ParameterInfo t425_m12467_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2319_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12467_MI = 
{
	"CheckMatch", (methodPointerType)&m9305_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t425_m12467_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t2319_0_0_0;
static ParameterInfo t425_m12468_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2319_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12468_MI = 
{
	"GetIndex", (methodPointerType)&m9307_gshared, &t425_TI, &t134_0_0_0, RuntimeInvoker_t134_t134_t134_t25, t425_m12468_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t2321_0_0_0;
extern void* RuntimeInvoker_t2321 (MethodInfo* method, void* obj, void** args);
MethodInfo m12469_MI = 
{
	"GetEnumerator", (methodPointerType)&m12469, &t425_TI, &t2321_0_0_0, RuntimeInvoker_t2321, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t425_m12470_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12470_MI = 
{
	"IndexOf", (methodPointerType)&m9310_gshared, &t425_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t425_m12470_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t425_m12471_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12471_MI = 
{
	"Shift", (methodPointerType)&m9312_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t425_m12471_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t425_m12472_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12472_MI = 
{
	"CheckIndex", (methodPointerType)&m9314_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t425_m12472_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t425_m12473_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12473_MI = 
{
	"Insert", (methodPointerType)&m9316_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t425_m12473_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2315_0_0_0;
static ParameterInfo t425_m12474_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2315_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12474_MI = 
{
	"CheckCollection", (methodPointerType)&m9318_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t425_m12474_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t425_m12475_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12475_MI = 
{
	"Remove", (methodPointerType)&m9320_gshared, &t425_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t425_m12475_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2319_0_0_0;
static ParameterInfo t425_m12476_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2319_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12476_MI = 
{
	"RemoveAll", (methodPointerType)&m9322_gshared, &t425_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t425_m12476_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t425_m12477_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12477_MI = 
{
	"RemoveAt", (methodPointerType)&m9324_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t425_m12477_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12478_MI = 
{
	"Reverse", (methodPointerType)&m9326_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12479_MI = 
{
	"Sort", (methodPointerType)&m9328_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2320_0_0_0;
static ParameterInfo t425_m12480_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2320_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12480_MI = 
{
	"Sort", (methodPointerType)&m9330_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t425_m12480_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t2314_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12481_MI = 
{
	"ToArray", (methodPointerType)&m9332_gshared, &t425_TI, &t2314_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12482_MI = 
{
	"TrimExcess", (methodPointerType)&m9334_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12483_MI = 
{
	"get_Capacity", (methodPointerType)&m9336_gshared, &t425_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t425_m12484_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12484_MI = 
{
	"set_Capacity", (methodPointerType)&m9338_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t425_m12484_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t425_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m2075_MI = 
{
	"get_Count", (methodPointerType)&m9340_gshared, &t425_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t425_m2076_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m2076_MI = 
{
	"get_Item", (methodPointerType)&m9342_gshared, &t425_TI, &t309_0_0_0, RuntimeInvoker_t25_t134, t425_m2076_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t425_m12485_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12485_MI = 
{
	"set_Item", (methodPointerType)&m9344_gshared, &t425_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t425_m12485_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t425_MIs[] =
{
	&m12439_MI,
	&m12440_MI,
	&m12441_MI,
	&m12442_MI,
	&m12443_MI,
	&m12444_MI,
	&m12445_MI,
	&m12446_MI,
	&m12447_MI,
	&m12448_MI,
	&m12449_MI,
	&m12450_MI,
	&m12451_MI,
	&m12452_MI,
	&m12453_MI,
	&m12454_MI,
	&m12455_MI,
	&m12456_MI,
	&m12457_MI,
	&m12458_MI,
	&m12459_MI,
	&m12460_MI,
	&m12461_MI,
	&m12462_MI,
	&m12463_MI,
	&m2504_MI,
	&m12464_MI,
	&m12465_MI,
	&m12466_MI,
	&m12467_MI,
	&m12468_MI,
	&m12469_MI,
	&m12470_MI,
	&m12471_MI,
	&m12472_MI,
	&m12473_MI,
	&m12474_MI,
	&m12475_MI,
	&m12476_MI,
	&m12477_MI,
	&m12478_MI,
	&m12479_MI,
	&m12480_MI,
	&m12481_MI,
	&m12482_MI,
	&m12483_MI,
	&m12484_MI,
	&m2075_MI,
	&m2076_MI,
	&m12485_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12445_MI;
extern MethodInfo m2075_MI;
extern MethodInfo m12452_MI;
extern MethodInfo m12453_MI;
extern MethodInfo m12444_MI;
extern MethodInfo m12454_MI;
extern MethodInfo m12455_MI;
extern MethodInfo m12456_MI;
extern MethodInfo m12457_MI;
extern MethodInfo m12446_MI;
extern MethodInfo m2504_MI;
extern MethodInfo m12447_MI;
extern MethodInfo m12448_MI;
extern MethodInfo m12449_MI;
extern MethodInfo m12450_MI;
extern MethodInfo m12477_MI;
extern MethodInfo m2075_MI;
extern MethodInfo m12451_MI;
extern MethodInfo m12458_MI;
extern MethodInfo m2504_MI;
extern MethodInfo m12464_MI;
extern MethodInfo m12465_MI;
extern MethodInfo m12475_MI;
extern MethodInfo m12443_MI;
extern MethodInfo m12470_MI;
extern MethodInfo m12473_MI;
extern MethodInfo m12477_MI;
extern MethodInfo m2076_MI;
extern MethodInfo m12485_MI;
static MethodInfo* t425_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12445_MI,
	&m2075_MI,
	&m12452_MI,
	&m12453_MI,
	&m12444_MI,
	&m12454_MI,
	&m12455_MI,
	&m12456_MI,
	&m12457_MI,
	&m12446_MI,
	&m2504_MI,
	&m12447_MI,
	&m12448_MI,
	&m12449_MI,
	&m12450_MI,
	&m12477_MI,
	&m2075_MI,
	&m12451_MI,
	&m12458_MI,
	&m2504_MI,
	&m12464_MI,
	&m12465_MI,
	&m12475_MI,
	&m12443_MI,
	&m12470_MI,
	&m12473_MI,
	&m12477_MI,
	&m2076_MI,
	&m12485_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2317_TI;
extern TypeInfo t2315_TI;
extern TypeInfo t2323_TI;
static TypeInfo* t425_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t2317_TI,
	&t2315_TI,
	&t2323_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2317_TI;
extern TypeInfo t2315_TI;
extern TypeInfo t2323_TI;
static Il2CppInterfaceOffsetPair t425_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t2317_TI, 20},
	{ &t2315_TI, 27},
	{ &t2323_TI, 28},
};
extern TypeInfo t425_TI;
extern MethodInfo m12474_MI;
extern TypeInfo t2317_TI;
extern MethodInfo m12461_MI;
extern MethodInfo m27280_MI;
extern TypeInfo t2314_TI;
extern MethodInfo m12460_MI;
extern MethodInfo m12469_MI;
extern TypeInfo t2321_TI;
extern TypeInfo t309_TI;
extern MethodInfo m12458_MI;
extern MethodInfo m12464_MI;
extern MethodInfo m12470_MI;
extern MethodInfo m12472_MI;
extern MethodInfo m12473_MI;
extern MethodInfo m12475_MI;
extern MethodInfo m2076_MI;
extern MethodInfo m12485_MI;
extern MethodInfo m12459_MI;
extern MethodInfo m12483_MI;
extern MethodInfo m12484_MI;
extern MethodInfo m27281_MI;
extern MethodInfo m27282_MI;
extern MethodInfo m27283_MI;
extern TypeInfo t2318_TI;
extern MethodInfo m12497_MI;
extern MethodInfo m20210_MI;
extern MethodInfo m12467_MI;
extern MethodInfo m12468_MI;
extern MethodInfo m12572_MI;
extern MethodInfo m12491_MI;
extern MethodInfo m12471_MI;
extern MethodInfo m12477_MI;
extern MethodInfo m12578_MI;
extern MethodInfo m20212_MI;
extern MethodInfo m20220_MI;
extern MethodInfo m20208_MI;
static void* t425_RGCTXData[37] = 
{
	&t425_TI,
	&m12474_MI,
	&t2317_TI,
	&m12461_MI,
	&m27280_MI,
	&t2314_TI,
	&m12460_MI,
	&m12469_MI,
	&t2321_TI,
	&t309_TI,
	&m12458_MI,
	&m12464_MI,
	&m12470_MI,
	&m12472_MI,
	&m12473_MI,
	&m12475_MI,
	&m2076_MI,
	&m12485_MI,
	&m12459_MI,
	&m12483_MI,
	&m12484_MI,
	&m27281_MI,
	&m27282_MI,
	&m27283_MI,
	&t2318_TI,
	&m12497_MI,
	&m20210_MI,
	&m12467_MI,
	&m12468_MI,
	&m12572_MI,
	&m12491_MI,
	&m12471_MI,
	&m12477_MI,
	&m12578_MI,
	&m20212_MI,
	&m20220_MI,
	&m20208_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t425_0_0_0;
extern Il2CppType t425_1_0_0;
extern TypeInfo t25_TI;
struct t425;
extern TypeInfo t425_TI;
extern Il2CppGenericClass t425_GC;
extern CustomAttributesCache t957__CustomAttributeCache;
TypeInfo t425_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t425_MIs, t425_PIs, t425_FIs, NULL, &t25_TI, NULL, NULL, &t425_TI, t425_ITIs, t425_VT, &t957__CustomAttributeCache, &t425_TI, &t425_0_0_0, &t425_1_0_0, t425_IOs, &t425_GC, NULL, t425_FDVs, NULL, t425_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t425), 0, -1, sizeof(t425_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 50, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2317_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Canvas>
extern MethodInfo m27280_MI;
static PropertyInfo t2317____Count_PropertyInfo = 
{
	&t2317_TI, "Count", &m27280_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27284_MI;
static PropertyInfo t2317____IsReadOnly_PropertyInfo = 
{
	&t2317_TI, "IsReadOnly", &m27284_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2317_PIs[] =
{
	&t2317____Count_PropertyInfo,
	&t2317____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t2317_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27280_MI = 
{
	"get_Count", NULL, &t2317_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2317_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27284_MI = 
{
	"get_IsReadOnly", NULL, &t2317_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2317_m27285_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2317_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27285_MI = 
{
	"Add", NULL, &t2317_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2317_m27285_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2317_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27286_MI = 
{
	"Clear", NULL, &t2317_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2317_m27287_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2317_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27287_MI = 
{
	"Contains", NULL, &t2317_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2317_m27287_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2314_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2317_m27281_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2314_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2317_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27281_MI = 
{
	"CopyTo", NULL, &t2317_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2317_m27281_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2317_m27288_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2317_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27288_MI = 
{
	"Remove", NULL, &t2317_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2317_m27288_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2317_MIs[] =
{
	&m27280_MI,
	&m27284_MI,
	&m27285_MI,
	&m27286_MI,
	&m27287_MI,
	&m27281_MI,
	&m27288_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t2315_TI;
static TypeInfo* t2317_ITIs[] = 
{
	&t703_TI,
	&t2315_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2317_0_0_0;
extern Il2CppType t2317_1_0_0;
struct t2317;
extern TypeInfo t2317_TI;
extern Il2CppGenericClass t2317_GC;
TypeInfo t2317_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2317_MIs, t2317_PIs, NULL, NULL, NULL, NULL, NULL, &t2317_TI, t2317_ITIs, NULL, &EmptyCustomAttributesCache, &t2317_TI, &t2317_0_0_0, &t2317_1_0_0, NULL, &t2317_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2315_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Canvas>
extern TypeInfo t2315_TI;
extern Il2CppType t2316_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27282_MI = 
{
	"GetEnumerator", NULL, &t2315_TI, &t2316_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2315_MIs[] =
{
	&m27282_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t2315_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2315_0_0_0;
extern Il2CppType t2315_1_0_0;
struct t2315;
extern TypeInfo t2315_TI;
extern Il2CppGenericClass t2315_GC;
TypeInfo t2315_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2315_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2315_TI, t2315_ITIs, NULL, &EmptyCustomAttributesCache, &t2315_TI, &t2315_0_0_0, &t2315_1_0_0, NULL, &t2315_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2316_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Canvas>
extern MethodInfo m27283_MI;
static PropertyInfo t2316____Current_PropertyInfo = 
{
	&t2316_TI, "Current", &m27283_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2316_PIs[] =
{
	&t2316____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2316_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27283_MI = 
{
	"get_Current", NULL, &t2316_TI, &t309_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2316_MIs[] =
{
	&m27283_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t2316_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2316_0_0_0;
extern Il2CppType t2316_1_0_0;
struct t2316;
extern TypeInfo t2316_TI;
extern Il2CppGenericClass t2316_GC;
TypeInfo t2316_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2316_MIs, t2316_PIs, NULL, NULL, NULL, NULL, NULL, &t2316_TI, t2316_ITIs, NULL, &EmptyCustomAttributesCache, &t2316_TI, &t2316_0_0_0, &t2316_1_0_0, NULL, &t2316_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2322.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2322_TI;
#include "t2322MD.h"

extern TypeInfo t2322_TI;
extern TypeInfo t309_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m12490_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20197_MI;
struct t122;
#define m20197(__this, p0, method) (t309 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m20197_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Canvas>
extern Il2CppType t122_0_0_1;
FieldInfo t2322_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2322_TI, offsetof(t2322, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2322_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2322_TI, offsetof(t2322, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2322_FIs[] =
{
	&t2322_f0_FieldInfo,
	&t2322_f1_FieldInfo,
	NULL
};
extern MethodInfo m12487_MI;
static PropertyInfo t2322____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2322_TI, "System.Collections.IEnumerator.Current", &m12487_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12490_MI;
static PropertyInfo t2322____Current_PropertyInfo = 
{
	&t2322_TI, "Current", &m12490_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2322_PIs[] =
{
	&t2322____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2322____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2322_m12486_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2322_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12486_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t2322_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2322_m12486_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2322_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12487_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t2322_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2322_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12488_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t2322_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2322_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12489_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t2322_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2322_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12490_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t2322_TI, &t309_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2322_MIs[] =
{
	&m12486_MI,
	&m12487_MI,
	&m12488_MI,
	&m12489_MI,
	&m12490_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m12487_MI;
extern MethodInfo m12489_MI;
extern MethodInfo m12488_MI;
extern MethodInfo m12490_MI;
static MethodInfo* t2322_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m12487_MI,
	&m12489_MI,
	&m12488_MI,
	&m12490_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2316_TI;
static TypeInfo* t2322_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2316_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2316_TI;
static Il2CppInterfaceOffsetPair t2322_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2316_TI, 7},
};
extern MethodInfo m12490_MI;
extern TypeInfo t309_TI;
extern MethodInfo m20197_MI;
static void* t2322_RGCTXData[3] = 
{
	&m12490_MI,
	&t309_TI,
	&m20197_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2322_0_0_0;
extern Il2CppType t2322_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2322_TI;
extern Il2CppGenericClass t2322_GC;
extern TypeInfo t122_TI;
TypeInfo t2322_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2322_MIs, t2322_PIs, t2322_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2322_TI, t2322_ITIs, t2322_VT, &EmptyCustomAttributesCache, &t2322_TI, &t2322_0_0_0, &t2322_1_0_0, t2322_IOs, &t2322_GC, NULL, NULL, NULL, t2322_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2322)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2323_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Canvas>
extern MethodInfo m27289_MI;
extern MethodInfo m27290_MI;
static PropertyInfo t2323____Item_PropertyInfo = 
{
	&t2323_TI, "Item", &m27289_MI, &m27290_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2323_PIs[] =
{
	&t2323____Item_PropertyInfo,
	NULL
};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2323_m27291_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2323_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27291_MI = 
{
	"IndexOf", NULL, &t2323_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2323_m27291_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t2323_m27292_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2323_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27292_MI = 
{
	"Insert", NULL, &t2323_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2323_m27292_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2323_m27293_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2323_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27293_MI = 
{
	"RemoveAt", NULL, &t2323_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2323_m27293_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2323_m27289_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2323_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27289_MI = 
{
	"get_Item", NULL, &t2323_TI, &t309_0_0_0, RuntimeInvoker_t25_t134, t2323_m27289_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t2323_m27290_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2323_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27290_MI = 
{
	"set_Item", NULL, &t2323_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2323_m27290_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2323_MIs[] =
{
	&m27291_MI,
	&m27292_MI,
	&m27293_MI,
	&m27289_MI,
	&m27290_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t2317_TI;
extern TypeInfo t2315_TI;
static TypeInfo* t2323_ITIs[] = 
{
	&t703_TI,
	&t2317_TI,
	&t2315_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2323_0_0_0;
extern Il2CppType t2323_1_0_0;
struct t2323;
extern TypeInfo t2323_TI;
extern Il2CppGenericClass t2323_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t2323_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t2323_MIs, t2323_PIs, NULL, NULL, NULL, NULL, NULL, &t2323_TI, t2323_ITIs, NULL, &t1518__CustomAttributeCache, &t2323_TI, &t2323_0_0_0, &t2323_1_0_0, NULL, &t2323_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2321_TI;

#include "t1404.h"
extern TypeInfo t2321_TI;
extern TypeInfo t1387_TI;
extern TypeInfo t309_TI;
extern TypeInfo t425_TI;
extern TypeInfo t131_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1404_TI;
#include "t1404MD.h"
extern MethodInfo m12494_MI;
extern MethodInfo m7430_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m3520_MI;
extern MethodInfo m7635_MI;
extern MethodInfo m7431_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.Canvas>
extern Il2CppType t425_0_0_1;
FieldInfo t2321_f0_FieldInfo = 
{
	"l", &t425_0_0_1, &t2321_TI, offsetof(t2321, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2321_f1_FieldInfo = 
{
	"next", &t134_0_0_1, &t2321_TI, offsetof(t2321, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2321_f2_FieldInfo = 
{
	"ver", &t134_0_0_1, &t2321_TI, offsetof(t2321, f2) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t309_0_0_1;
FieldInfo t2321_f3_FieldInfo = 
{
	"current", &t309_0_0_1, &t2321_TI, offsetof(t2321, f3) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2321_FIs[] =
{
	&t2321_f0_FieldInfo,
	&t2321_f1_FieldInfo,
	&t2321_f2_FieldInfo,
	&t2321_f3_FieldInfo,
	NULL
};
extern MethodInfo m12492_MI;
static PropertyInfo t2321____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2321_TI, "System.Collections.IEnumerator.Current", &m12492_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12496_MI;
static PropertyInfo t2321____Current_PropertyInfo = 
{
	&t2321_TI, "Current", &m12496_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2321_PIs[] =
{
	&t2321____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2321____Current_PropertyInfo,
	NULL
};
extern Il2CppType t425_0_0_0;
static ParameterInfo t2321_m12491_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t425_0_0_0},
};
extern TypeInfo t2321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12491_MI = 
{
	".ctor", (methodPointerType)&m9346_gshared, &t2321_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2321_m12491_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2321_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12492_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m9347_gshared, &t2321_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12493_MI = 
{
	"Dispose", (methodPointerType)&m9348_gshared, &t2321_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12494_MI = 
{
	"VerifyState", (methodPointerType)&m9349_gshared, &t2321_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2321_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12495_MI = 
{
	"MoveNext", (methodPointerType)&m9350_gshared, &t2321_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2321_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12496_MI = 
{
	"get_Current", (methodPointerType)&m9351_gshared, &t2321_TI, &t309_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2321_MIs[] =
{
	&m12491_MI,
	&m12492_MI,
	&m12493_MI,
	&m12494_MI,
	&m12495_MI,
	&m12496_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m12492_MI;
extern MethodInfo m12495_MI;
extern MethodInfo m12493_MI;
extern MethodInfo m12496_MI;
static MethodInfo* t2321_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m12492_MI,
	&m12495_MI,
	&m12493_MI,
	&m12496_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2316_TI;
static TypeInfo* t2321_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2316_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2316_TI;
static Il2CppInterfaceOffsetPair t2321_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2316_TI, 7},
};
extern MethodInfo m12494_MI;
extern TypeInfo t309_TI;
extern TypeInfo t2321_TI;
static void* t2321_RGCTXData[3] = 
{
	&m12494_MI,
	&t309_TI,
	&t2321_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2321_0_0_0;
extern Il2CppType t2321_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2321_TI;
extern Il2CppGenericClass t2321_GC;
extern TypeInfo t957_TI;
TypeInfo t2321_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2321_MIs, t2321_PIs, t2321_FIs, NULL, &t117_TI, NULL, &t957_TI, &t2321_TI, t2321_ITIs, t2321_VT, &EmptyCustomAttributesCache, &t2321_TI, &t2321_0_0_0, &t2321_1_0_0, t2321_IOs, &t2321_GC, NULL, NULL, NULL, t2321_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2321)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2318_TI;

extern TypeInfo t2318_TI;
extern TypeInfo t309_TI;
extern TypeInfo t134_TI;
extern TypeInfo t177_TI;
extern TypeInfo t2323_TI;
extern TypeInfo t2317_TI;
extern TypeInfo t165_TI;
extern TypeInfo t759_TI;
extern TypeInfo t123_TI;
extern TypeInfo t122_TI;
extern TypeInfo t703_TI;
extern TypeInfo t78_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2314_TI;
extern TypeInfo t2315_TI;
extern TypeInfo t2316_TI;
#include "t2324MD.h"
extern MethodInfo m12526_MI;
extern MethodInfo m566_MI;
extern MethodInfo m27289_MI;
extern MethodInfo m27280_MI;
extern MethodInfo m452_MI;
extern MethodInfo m489_MI;
extern MethodInfo m7922_MI;
extern MethodInfo m7831_MI;
extern MethodInfo m12558_MI;
extern MethodInfo m27287_MI;
extern MethodInfo m27291_MI;
extern MethodInfo m27281_MI;
extern MethodInfo m27282_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Canvas>
extern Il2CppType t2323_0_0_1;
FieldInfo t2318_f0_FieldInfo = 
{
	"list", &t2323_0_0_1, &t2318_TI, offsetof(t2318, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2318_FIs[] =
{
	&t2318_f0_FieldInfo,
	NULL
};
extern MethodInfo m12503_MI;
extern MethodInfo m12504_MI;
static PropertyInfo t2318____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2318_TI, "System.Collections.Generic.IList<T>.Item", &m12503_MI, &m12504_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12505_MI;
static PropertyInfo t2318____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2318_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m12505_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12515_MI;
static PropertyInfo t2318____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2318_TI, "System.Collections.ICollection.IsSynchronized", &m12515_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12516_MI;
static PropertyInfo t2318____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2318_TI, "System.Collections.ICollection.SyncRoot", &m12516_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12517_MI;
static PropertyInfo t2318____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2318_TI, "System.Collections.IList.IsFixedSize", &m12517_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12518_MI;
static PropertyInfo t2318____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2318_TI, "System.Collections.IList.IsReadOnly", &m12518_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12519_MI;
extern MethodInfo m12520_MI;
static PropertyInfo t2318____System_Collections_IList_Item_PropertyInfo = 
{
	&t2318_TI, "System.Collections.IList.Item", &m12519_MI, &m12520_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12525_MI;
static PropertyInfo t2318____Count_PropertyInfo = 
{
	&t2318_TI, "Count", &m12525_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12526_MI;
static PropertyInfo t2318____Item_PropertyInfo = 
{
	&t2318_TI, "Item", &m12526_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2318_PIs[] =
{
	&t2318____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2318____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2318____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2318____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2318____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2318____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2318____System_Collections_IList_Item_PropertyInfo,
	&t2318____Count_PropertyInfo,
	&t2318____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2323_0_0_0;
static ParameterInfo t2318_m12497_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2323_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12497_MI = 
{
	".ctor", (methodPointerType)&m9352_gshared, &t2318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2318_m12497_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2318_m12498_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12498_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m9353_gshared, &t2318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2318_m12498_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12499_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m9354_gshared, &t2318_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t2318_m12500_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12500_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m9355_gshared, &t2318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2318_m12500_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2318_m12501_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12501_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m9356_gshared, &t2318_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2318_m12501_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2318_m12502_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12502_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m9357_gshared, &t2318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2318_m12502_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2318_m12503_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12503_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m9358_gshared, &t2318_TI, &t309_0_0_0, RuntimeInvoker_t25_t134, t2318_m12503_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t2318_m12504_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12504_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m9359_gshared, &t2318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2318_m12504_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2318_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12505_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9360_gshared, &t2318_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2318_m12506_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12506_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9361_gshared, &t2318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2318_m12506_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2318_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12507_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9362_gshared, &t2318_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2318_m12508_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12508_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9363_gshared, &t2318_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2318_m12508_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12509_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m9364_gshared, &t2318_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2318_m12510_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12510_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9365_gshared, &t2318_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2318_m12510_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2318_m12511_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12511_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9366_gshared, &t2318_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2318_m12511_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2318_m12512_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12512_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9367_gshared, &t2318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2318_m12512_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2318_m12513_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12513_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9368_gshared, &t2318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2318_m12513_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2318_m12514_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12514_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m9369_gshared, &t2318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2318_m12514_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2318_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12515_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9370_gshared, &t2318_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2318_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12516_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9371_gshared, &t2318_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2318_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12517_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9372_gshared, &t2318_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2318_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12518_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9373_gshared, &t2318_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2318_m12519_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12519_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9374_gshared, &t2318_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t2318_m12519_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2318_m12520_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12520_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9375_gshared, &t2318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2318_m12520_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2318_m12521_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12521_MI = 
{
	"Contains", (methodPointerType)&m9376_gshared, &t2318_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2318_m12521_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2314_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2318_m12522_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2314_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12522_MI = 
{
	"CopyTo", (methodPointerType)&m9377_gshared, &t2318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2318_m12522_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2318_TI;
extern Il2CppType t2316_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12523_MI = 
{
	"GetEnumerator", (methodPointerType)&m9378_gshared, &t2318_TI, &t2316_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2318_m12524_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12524_MI = 
{
	"IndexOf", (methodPointerType)&m9379_gshared, &t2318_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2318_m12524_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2318_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12525_MI = 
{
	"get_Count", (methodPointerType)&m9380_gshared, &t2318_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2318_m12526_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2318_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12526_MI = 
{
	"get_Item", (methodPointerType)&m9381_gshared, &t2318_TI, &t309_0_0_0, RuntimeInvoker_t25_t134, t2318_m12526_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2318_MIs[] =
{
	&m12497_MI,
	&m12498_MI,
	&m12499_MI,
	&m12500_MI,
	&m12501_MI,
	&m12502_MI,
	&m12503_MI,
	&m12504_MI,
	&m12505_MI,
	&m12506_MI,
	&m12507_MI,
	&m12508_MI,
	&m12509_MI,
	&m12510_MI,
	&m12511_MI,
	&m12512_MI,
	&m12513_MI,
	&m12514_MI,
	&m12515_MI,
	&m12516_MI,
	&m12517_MI,
	&m12518_MI,
	&m12519_MI,
	&m12520_MI,
	&m12521_MI,
	&m12522_MI,
	&m12523_MI,
	&m12524_MI,
	&m12525_MI,
	&m12526_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12507_MI;
extern MethodInfo m12525_MI;
extern MethodInfo m12515_MI;
extern MethodInfo m12516_MI;
extern MethodInfo m12506_MI;
extern MethodInfo m12517_MI;
extern MethodInfo m12518_MI;
extern MethodInfo m12519_MI;
extern MethodInfo m12520_MI;
extern MethodInfo m12508_MI;
extern MethodInfo m12509_MI;
extern MethodInfo m12510_MI;
extern MethodInfo m12511_MI;
extern MethodInfo m12512_MI;
extern MethodInfo m12513_MI;
extern MethodInfo m12514_MI;
extern MethodInfo m12525_MI;
extern MethodInfo m12505_MI;
extern MethodInfo m12498_MI;
extern MethodInfo m12499_MI;
extern MethodInfo m12521_MI;
extern MethodInfo m12522_MI;
extern MethodInfo m12501_MI;
extern MethodInfo m12524_MI;
extern MethodInfo m12500_MI;
extern MethodInfo m12502_MI;
extern MethodInfo m12503_MI;
extern MethodInfo m12504_MI;
extern MethodInfo m12523_MI;
extern MethodInfo m12526_MI;
static MethodInfo* t2318_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12507_MI,
	&m12525_MI,
	&m12515_MI,
	&m12516_MI,
	&m12506_MI,
	&m12517_MI,
	&m12518_MI,
	&m12519_MI,
	&m12520_MI,
	&m12508_MI,
	&m12509_MI,
	&m12510_MI,
	&m12511_MI,
	&m12512_MI,
	&m12513_MI,
	&m12514_MI,
	&m12525_MI,
	&m12505_MI,
	&m12498_MI,
	&m12499_MI,
	&m12521_MI,
	&m12522_MI,
	&m12501_MI,
	&m12524_MI,
	&m12500_MI,
	&m12502_MI,
	&m12503_MI,
	&m12504_MI,
	&m12523_MI,
	&m12526_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2317_TI;
extern TypeInfo t2323_TI;
extern TypeInfo t2315_TI;
static TypeInfo* t2318_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t2317_TI,
	&t2323_TI,
	&t2315_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2317_TI;
extern TypeInfo t2323_TI;
extern TypeInfo t2315_TI;
static Il2CppInterfaceOffsetPair t2318_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t2317_TI, 20},
	{ &t2323_TI, 27},
	{ &t2315_TI, 32},
};
extern MethodInfo m12526_MI;
extern MethodInfo m12558_MI;
extern TypeInfo t309_TI;
extern MethodInfo m27287_MI;
extern MethodInfo m27291_MI;
extern MethodInfo m27289_MI;
extern MethodInfo m27281_MI;
extern MethodInfo m27282_MI;
extern MethodInfo m27280_MI;
static void* t2318_RGCTXData[9] = 
{
	&m12526_MI,
	&m12558_MI,
	&t309_TI,
	&m27287_MI,
	&m27291_MI,
	&m27289_MI,
	&m27281_MI,
	&m27282_MI,
	&m27280_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2318_0_0_0;
extern Il2CppType t2318_1_0_0;
extern TypeInfo t25_TI;
struct t2318;
extern TypeInfo t2318_TI;
extern Il2CppGenericClass t2318_GC;
extern CustomAttributesCache t959__CustomAttributeCache;
TypeInfo t2318_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2318_MIs, t2318_PIs, t2318_FIs, NULL, &t25_TI, NULL, NULL, &t2318_TI, t2318_ITIs, t2318_VT, &t959__CustomAttributeCache, &t2318_TI, &t2318_0_0_0, &t2318_1_0_0, t2318_IOs, &t2318_GC, NULL, NULL, NULL, t2318_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2318), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2324.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2324_TI;

extern TypeInfo t2324_TI;
extern TypeInfo t2317_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2323_TI;
extern TypeInfo t309_TI;
extern TypeInfo t134_TI;
extern TypeInfo t123_TI;
extern TypeInfo t425_TI;
extern TypeInfo t759_TI;
extern TypeInfo t25_TI;
extern TypeInfo t122_TI;
extern TypeInfo t2315_TI;
extern TypeInfo t2316_TI;
extern TypeInfo t2314_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t177_TI;
extern TypeInfo t1132_TI;
extern Il2CppType t309_0_0_0;
extern MethodInfo m27284_MI;
extern MethodInfo m12561_MI;
extern MethodInfo m12562_MI;
extern MethodInfo m27289_MI;
extern MethodInfo m12559_MI;
extern MethodInfo m12557_MI;
extern MethodInfo m27280_MI;
extern MethodInfo m452_MI;
extern MethodInfo m12439_MI;
extern MethodInfo m7921_MI;
extern MethodInfo m7922_MI;
extern MethodInfo m27282_MI;
extern MethodInfo m12550_MI;
extern MethodInfo m12558_MI;
extern MethodInfo m27287_MI;
extern MethodInfo m27291_MI;
extern MethodInfo m12560_MI;
extern MethodInfo m12548_MI;
extern MethodInfo m12553_MI;
extern MethodInfo m12544_MI;
extern MethodInfo m27286_MI;
extern MethodInfo m27281_MI;
extern MethodInfo m27292_MI;
extern MethodInfo m27293_MI;
extern MethodInfo m27290_MI;
extern MethodInfo m484_MI;
extern MethodInfo m4337_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m566_MI;
extern MethodInfo m7920_MI;
extern MethodInfo m7923_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.Canvas>
extern Il2CppType t2323_0_0_1;
FieldInfo t2324_f0_FieldInfo = 
{
	"list", &t2323_0_0_1, &t2324_TI, offsetof(t2324, f0), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_1;
FieldInfo t2324_f1_FieldInfo = 
{
	"syncRoot", &t25_0_0_1, &t2324_TI, offsetof(t2324, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2324_FIs[] =
{
	&t2324_f0_FieldInfo,
	&t2324_f1_FieldInfo,
	NULL
};
extern MethodInfo m12528_MI;
static PropertyInfo t2324____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2324_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m12528_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12536_MI;
static PropertyInfo t2324____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2324_TI, "System.Collections.ICollection.IsSynchronized", &m12536_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12537_MI;
static PropertyInfo t2324____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2324_TI, "System.Collections.ICollection.SyncRoot", &m12537_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12538_MI;
static PropertyInfo t2324____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2324_TI, "System.Collections.IList.IsFixedSize", &m12538_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12539_MI;
static PropertyInfo t2324____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2324_TI, "System.Collections.IList.IsReadOnly", &m12539_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12540_MI;
extern MethodInfo m12541_MI;
static PropertyInfo t2324____System_Collections_IList_Item_PropertyInfo = 
{
	&t2324_TI, "System.Collections.IList.Item", &m12540_MI, &m12541_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12554_MI;
static PropertyInfo t2324____Count_PropertyInfo = 
{
	&t2324_TI, "Count", &m12554_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12555_MI;
extern MethodInfo m12556_MI;
static PropertyInfo t2324____Item_PropertyInfo = 
{
	&t2324_TI, "Item", &m12555_MI, &m12556_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2324_PIs[] =
{
	&t2324____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2324____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2324____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2324____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2324____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2324____System_Collections_IList_Item_PropertyInfo,
	&t2324____Count_PropertyInfo,
	&t2324____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12527_MI = 
{
	".ctor", (methodPointerType)&m9382_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2324_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12528_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9383_gshared, &t2324_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2324_m12529_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12529_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9384_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2324_m12529_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2324_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12530_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9385_gshared, &t2324_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2324_m12531_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12531_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9386_gshared, &t2324_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2324_m12531_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2324_m12532_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12532_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9387_gshared, &t2324_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2324_m12532_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2324_m12533_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12533_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9388_gshared, &t2324_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2324_m12533_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2324_m12534_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12534_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9389_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2324_m12534_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2324_m12535_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12535_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9390_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2324_m12535_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2324_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12536_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9391_gshared, &t2324_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2324_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12537_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9392_gshared, &t2324_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2324_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12538_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9393_gshared, &t2324_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2324_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12539_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9394_gshared, &t2324_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2324_m12540_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12540_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9395_gshared, &t2324_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t2324_m12540_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2324_m12541_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12541_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9396_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2324_m12541_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2324_m12542_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12542_MI = 
{
	"Add", (methodPointerType)&m9397_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2324_m12542_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12543_MI = 
{
	"Clear", (methodPointerType)&m9398_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12544_MI = 
{
	"ClearItems", (methodPointerType)&m9399_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2324_m12545_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12545_MI = 
{
	"Contains", (methodPointerType)&m9400_gshared, &t2324_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2324_m12545_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2314_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2324_m12546_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2314_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12546_MI = 
{
	"CopyTo", (methodPointerType)&m9401_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2324_m12546_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2324_TI;
extern Il2CppType t2316_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12547_MI = 
{
	"GetEnumerator", (methodPointerType)&m9402_gshared, &t2324_TI, &t2316_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2324_m12548_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12548_MI = 
{
	"IndexOf", (methodPointerType)&m9403_gshared, &t2324_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2324_m12548_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t2324_m12549_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12549_MI = 
{
	"Insert", (methodPointerType)&m9404_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2324_m12549_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t2324_m12550_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12550_MI = 
{
	"InsertItem", (methodPointerType)&m9405_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2324_m12550_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2324_m12551_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12551_MI = 
{
	"Remove", (methodPointerType)&m9406_gshared, &t2324_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2324_m12551_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2324_m12552_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12552_MI = 
{
	"RemoveAt", (methodPointerType)&m9407_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2324_m12552_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2324_m12553_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12553_MI = 
{
	"RemoveItem", (methodPointerType)&m9408_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2324_m12553_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2324_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12554_MI = 
{
	"get_Count", (methodPointerType)&m9409_gshared, &t2324_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2324_m12555_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12555_MI = 
{
	"get_Item", (methodPointerType)&m9410_gshared, &t2324_TI, &t309_0_0_0, RuntimeInvoker_t25_t134, t2324_m12555_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t2324_m12556_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12556_MI = 
{
	"set_Item", (methodPointerType)&m9411_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2324_m12556_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t2324_m12557_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12557_MI = 
{
	"SetItem", (methodPointerType)&m9412_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2324_m12557_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2324_m12558_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12558_MI = 
{
	"IsValidItem", (methodPointerType)&m9413_gshared, &t2324_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2324_m12558_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2324_m12559_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12559_MI = 
{
	"ConvertItem", (methodPointerType)&m9414_gshared, &t2324_TI, &t309_0_0_0, RuntimeInvoker_t25_t25, t2324_m12559_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2323_0_0_0;
static ParameterInfo t2324_m12560_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2323_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12560_MI = 
{
	"CheckWritable", (methodPointerType)&m9415_gshared, &t2324_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2324_m12560_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2323_0_0_0;
static ParameterInfo t2324_m12561_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2323_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12561_MI = 
{
	"IsSynchronized", (methodPointerType)&m9416_gshared, &t2324_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2324_m12561_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2323_0_0_0;
static ParameterInfo t2324_m12562_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2323_0_0_0},
};
extern TypeInfo t2324_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12562_MI = 
{
	"IsFixedSize", (methodPointerType)&m9417_gshared, &t2324_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2324_m12562_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2324_MIs[] =
{
	&m12527_MI,
	&m12528_MI,
	&m12529_MI,
	&m12530_MI,
	&m12531_MI,
	&m12532_MI,
	&m12533_MI,
	&m12534_MI,
	&m12535_MI,
	&m12536_MI,
	&m12537_MI,
	&m12538_MI,
	&m12539_MI,
	&m12540_MI,
	&m12541_MI,
	&m12542_MI,
	&m12543_MI,
	&m12544_MI,
	&m12545_MI,
	&m12546_MI,
	&m12547_MI,
	&m12548_MI,
	&m12549_MI,
	&m12550_MI,
	&m12551_MI,
	&m12552_MI,
	&m12553_MI,
	&m12554_MI,
	&m12555_MI,
	&m12556_MI,
	&m12557_MI,
	&m12558_MI,
	&m12559_MI,
	&m12560_MI,
	&m12561_MI,
	&m12562_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12530_MI;
extern MethodInfo m12554_MI;
extern MethodInfo m12536_MI;
extern MethodInfo m12537_MI;
extern MethodInfo m12529_MI;
extern MethodInfo m12538_MI;
extern MethodInfo m12539_MI;
extern MethodInfo m12540_MI;
extern MethodInfo m12541_MI;
extern MethodInfo m12531_MI;
extern MethodInfo m12543_MI;
extern MethodInfo m12532_MI;
extern MethodInfo m12533_MI;
extern MethodInfo m12534_MI;
extern MethodInfo m12535_MI;
extern MethodInfo m12552_MI;
extern MethodInfo m12554_MI;
extern MethodInfo m12528_MI;
extern MethodInfo m12542_MI;
extern MethodInfo m12543_MI;
extern MethodInfo m12545_MI;
extern MethodInfo m12546_MI;
extern MethodInfo m12551_MI;
extern MethodInfo m12548_MI;
extern MethodInfo m12549_MI;
extern MethodInfo m12552_MI;
extern MethodInfo m12555_MI;
extern MethodInfo m12556_MI;
extern MethodInfo m12547_MI;
extern MethodInfo m12544_MI;
extern MethodInfo m12550_MI;
extern MethodInfo m12553_MI;
extern MethodInfo m12557_MI;
static MethodInfo* t2324_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12530_MI,
	&m12554_MI,
	&m12536_MI,
	&m12537_MI,
	&m12529_MI,
	&m12538_MI,
	&m12539_MI,
	&m12540_MI,
	&m12541_MI,
	&m12531_MI,
	&m12543_MI,
	&m12532_MI,
	&m12533_MI,
	&m12534_MI,
	&m12535_MI,
	&m12552_MI,
	&m12554_MI,
	&m12528_MI,
	&m12542_MI,
	&m12543_MI,
	&m12545_MI,
	&m12546_MI,
	&m12551_MI,
	&m12548_MI,
	&m12549_MI,
	&m12552_MI,
	&m12555_MI,
	&m12556_MI,
	&m12547_MI,
	&m12544_MI,
	&m12550_MI,
	&m12553_MI,
	&m12557_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2317_TI;
extern TypeInfo t2323_TI;
extern TypeInfo t2315_TI;
static TypeInfo* t2324_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t2317_TI,
	&t2323_TI,
	&t2315_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t2317_TI;
extern TypeInfo t2323_TI;
extern TypeInfo t2315_TI;
static Il2CppInterfaceOffsetPair t2324_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t2317_TI, 20},
	{ &t2323_TI, 27},
	{ &t2315_TI, 32},
};
extern TypeInfo t425_TI;
extern MethodInfo m12439_MI;
extern MethodInfo m27284_MI;
extern MethodInfo m27282_MI;
extern MethodInfo m27280_MI;
extern MethodInfo m12559_MI;
extern MethodInfo m12550_MI;
extern MethodInfo m12558_MI;
extern TypeInfo t309_TI;
extern MethodInfo m27287_MI;
extern MethodInfo m27291_MI;
extern MethodInfo m12560_MI;
extern MethodInfo m12548_MI;
extern MethodInfo m12553_MI;
extern MethodInfo m12561_MI;
extern MethodInfo m12562_MI;
extern MethodInfo m27289_MI;
extern MethodInfo m12557_MI;
extern MethodInfo m12544_MI;
extern MethodInfo m27286_MI;
extern MethodInfo m27281_MI;
extern MethodInfo m27292_MI;
extern MethodInfo m27293_MI;
extern MethodInfo m27290_MI;
extern Il2CppType t309_0_0_0;
static void* t2324_RGCTXData[25] = 
{
	&t425_TI,
	&m12439_MI,
	&m27284_MI,
	&m27282_MI,
	&m27280_MI,
	&m12559_MI,
	&m12550_MI,
	&m12558_MI,
	&t309_TI,
	&m27287_MI,
	&m27291_MI,
	&m12560_MI,
	&m12548_MI,
	&m12553_MI,
	&m12561_MI,
	&m12562_MI,
	&m27289_MI,
	&m12557_MI,
	&m12544_MI,
	&m27286_MI,
	&m27281_MI,
	&m27292_MI,
	&m27293_MI,
	&m27290_MI,
	(void*)&t309_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2324_0_0_0;
extern Il2CppType t2324_1_0_0;
extern TypeInfo t25_TI;
struct t2324;
extern TypeInfo t2324_TI;
extern Il2CppGenericClass t2324_GC;
extern CustomAttributesCache t958__CustomAttributeCache;
TypeInfo t2324_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2324_MIs, t2324_PIs, t2324_FIs, NULL, &t25_TI, NULL, NULL, &t2324_TI, t2324_ITIs, t2324_VT, &t958__CustomAttributeCache, &t2324_TI, &t2324_0_0_0, &t2324_1_0_0, t2324_IOs, &t2324_GC, NULL, NULL, NULL, t2324_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2324), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2325_TI;
#include "t2325MD.h"

#include "t953.h"
#include "t2326.h"
extern TypeInfo t2325_TI;
extern TypeInfo t5842_TI;
extern TypeInfo t131_TI;
extern TypeInfo t309_TI;
extern TypeInfo t125_TI;
extern TypeInfo t953_TI;
extern TypeInfo t637_TI;
extern TypeInfo t2326_TI;
extern TypeInfo t134_TI;
#include "t2326MD.h"
extern Il2CppType t5842_0_0_0;
extern Il2CppType t309_0_0_0;
extern Il2CppType t953_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m12568_MI;
extern MethodInfo m27294_MI;
extern MethodInfo m20209_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.Canvas>
extern Il2CppType t2325_0_0_49;
FieldInfo t2325_f0_FieldInfo = 
{
	"_default", &t2325_0_0_49, &t2325_TI, offsetof(t2325_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2325_FIs[] =
{
	&t2325_f0_FieldInfo,
	NULL
};
extern MethodInfo m12567_MI;
static PropertyInfo t2325____Default_PropertyInfo = 
{
	&t2325_TI, "Default", &m12567_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2325_PIs[] =
{
	&t2325____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2325_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12563_MI = 
{
	".ctor", (methodPointerType)&m8967_gshared, &t2325_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2325_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12564_MI = 
{
	".cctor", (methodPointerType)&m8968_gshared, &t2325_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2325_m12565_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2325_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12565_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8969_gshared, &t2325_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2325_m12565_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2325_m12566_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2325_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12566_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8970_gshared, &t2325_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2325_m12566_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2325_m27294_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2325_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27294_MI = 
{
	"GetHashCode", NULL, &t2325_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2325_m27294_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t2325_m20209_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2325_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20209_MI = 
{
	"Equals", NULL, &t2325_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2325_m20209_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2325_TI;
extern Il2CppType t2325_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12567_MI = 
{
	"get_Default", (methodPointerType)&m8971_gshared, &t2325_TI, &t2325_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2325_MIs[] =
{
	&m12563_MI,
	&m12564_MI,
	&m12565_MI,
	&m12566_MI,
	&m27294_MI,
	&m20209_MI,
	&m12567_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m20209_MI;
extern MethodInfo m27294_MI;
extern MethodInfo m12566_MI;
extern MethodInfo m12565_MI;
static MethodInfo* t2325_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m20209_MI,
	&m27294_MI,
	&m12566_MI,
	&m12565_MI,
	NULL,
	NULL,
};
extern TypeInfo t2346_TI;
extern TypeInfo t977_TI;
static TypeInfo* t2325_ITIs[] = 
{
	&t2346_TI,
	&t977_TI,
};
extern TypeInfo t2346_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t2325_IOs[] = 
{
	{ &t2346_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppType t5842_0_0_0;
extern Il2CppType t309_0_0_0;
extern TypeInfo t2325_TI;
extern TypeInfo t2325_TI;
extern TypeInfo t2326_TI;
extern MethodInfo m12568_MI;
extern TypeInfo t309_TI;
extern MethodInfo m27294_MI;
extern MethodInfo m20209_MI;
static void* t2325_RGCTXData[9] = 
{
	(void*)&t5842_0_0_0,
	(void*)&t309_0_0_0,
	&t2325_TI,
	&t2325_TI,
	&t2326_TI,
	&m12568_MI,
	&t309_TI,
	&m27294_MI,
	&m20209_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2325_0_0_0;
extern Il2CppType t2325_1_0_0;
extern TypeInfo t25_TI;
struct t2325;
extern TypeInfo t2325_TI;
extern Il2CppGenericClass t2325_GC;
TypeInfo t2325_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2325_MIs, t2325_PIs, t2325_FIs, NULL, &t25_TI, NULL, NULL, &t2325_TI, t2325_ITIs, t2325_VT, &EmptyCustomAttributesCache, &t2325_TI, &t2325_0_0_0, &t2325_1_0_0, t2325_IOs, &t2325_GC, NULL, NULL, NULL, t2325_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2325), 0, -1, sizeof(t2325_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2346_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.Canvas>
extern Il2CppType t309_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t2346_m27295_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2346_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27295_MI = 
{
	"Equals", NULL, &t2346_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2346_m27295_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2346_m27296_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2346_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27296_MI = 
{
	"GetHashCode", NULL, &t2346_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2346_m27296_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2346_MIs[] =
{
	&m27295_MI,
	&m27296_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2346_0_0_0;
extern Il2CppType t2346_1_0_0;
struct t2346;
extern TypeInfo t2346_TI;
extern Il2CppGenericClass t2346_GC;
TypeInfo t2346_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t2346_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2346_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2346_TI, &t2346_0_0_0, &t2346_1_0_0, NULL, &t2346_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5842_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.Canvas>
extern Il2CppType t309_0_0_0;
static ParameterInfo t5842_m27297_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t5842_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27297_MI = 
{
	"Equals", NULL, &t5842_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5842_m27297_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5842_MIs[] =
{
	&m27297_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5842_0_0_0;
extern Il2CppType t5842_1_0_0;
struct t5842;
extern TypeInfo t5842_TI;
extern Il2CppGenericClass t5842_GC;
TypeInfo t5842_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5842_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5842_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5842_TI, &t5842_0_0_0, &t5842_1_0_0, NULL, &t5842_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2326_TI;

extern TypeInfo t309_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t125_TI;
extern MethodInfo m12563_MI;
extern MethodInfo m456_MI;
extern MethodInfo m455_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Canvas>
extern TypeInfo t2326_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12568_MI = 
{
	".ctor", (methodPointerType)&m9002_gshared, &t2326_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2326_m12569_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2326_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12569_MI = 
{
	"GetHashCode", (methodPointerType)&m9003_gshared, &t2326_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2326_m12569_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t2326_m12570_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2326_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12570_MI = 
{
	"Equals", (methodPointerType)&m9004_gshared, &t2326_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2326_m12570_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2326_MIs[] =
{
	&m12568_MI,
	&m12569_MI,
	&m12570_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12570_MI;
extern MethodInfo m12569_MI;
extern MethodInfo m12566_MI;
extern MethodInfo m12565_MI;
extern MethodInfo m12569_MI;
extern MethodInfo m12570_MI;
static MethodInfo* t2326_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12570_MI,
	&m12569_MI,
	&m12566_MI,
	&m12565_MI,
	&m12569_MI,
	&m12570_MI,
};
extern TypeInfo t2346_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t2326_IOs[] = 
{
	{ &t2346_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppType t5842_0_0_0;
extern Il2CppType t309_0_0_0;
extern TypeInfo t2325_TI;
extern TypeInfo t2325_TI;
extern TypeInfo t2326_TI;
extern MethodInfo m12568_MI;
extern TypeInfo t309_TI;
extern MethodInfo m27294_MI;
extern MethodInfo m20209_MI;
extern MethodInfo m12563_MI;
extern TypeInfo t309_TI;
static void* t2326_RGCTXData[11] = 
{
	(void*)&t5842_0_0_0,
	(void*)&t309_0_0_0,
	&t2325_TI,
	&t2325_TI,
	&t2326_TI,
	&m12568_MI,
	&t309_TI,
	&m27294_MI,
	&m20209_MI,
	&m12563_MI,
	&t309_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2326_0_0_0;
extern Il2CppType t2326_1_0_0;
extern TypeInfo t2325_TI;
struct t2326;
extern TypeInfo t2326_TI;
extern Il2CppGenericClass t2326_GC;
extern TypeInfo t952_TI;
TypeInfo t2326_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2326_MIs, NULL, NULL, NULL, &t2325_TI, NULL, &t952_TI, &t2326_TI, NULL, t2326_VT, &EmptyCustomAttributesCache, &t2326_TI, &t2326_0_0_0, &t2326_1_0_0, t2326_IOs, &t2326_GC, NULL, NULL, NULL, t2326_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2326), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2319_TI;



// Metadata Definition System.Predicate`1<UnityEngine.Canvas>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2319_m12571_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2319_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m12571_MI = 
{
	".ctor", (methodPointerType)&m9418_gshared, &t2319_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2319_m12571_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2319_m12572_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2319_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12572_MI = 
{
	"Invoke", (methodPointerType)&m9419_gshared, &t2319_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2319_m12572_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2319_m12573_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2319_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12573_MI = 
{
	"BeginInvoke", (methodPointerType)&m9420_gshared, &t2319_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t2319_m12573_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2319_m12574_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2319_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12574_MI = 
{
	"EndInvoke", (methodPointerType)&m9421_gshared, &t2319_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2319_m12574_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2319_MIs[] =
{
	&m12571_MI,
	&m12572_MI,
	&m12573_MI,
	&m12574_MI,
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
extern MethodInfo m12572_MI;
extern MethodInfo m12573_MI;
extern MethodInfo m12574_MI;
static MethodInfo* t2319_VT[] =
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
	&m12572_MI,
	&m12573_MI,
	&m12574_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2319_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2319_0_0_0;
extern Il2CppType t2319_1_0_0;
extern TypeInfo t345_TI;
struct t2319;
extern TypeInfo t2319_TI;
extern Il2CppGenericClass t2319_GC;
TypeInfo t2319_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2319_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2319_TI, NULL, t2319_VT, &EmptyCustomAttributesCache, &t2319_TI, &t2319_0_0_0, &t2319_1_0_0, t2319_IOs, &t2319_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2319), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2327_TI;

#include "t2328.h"
extern TypeInfo t2327_TI;
extern TypeInfo t3822_TI;
extern TypeInfo t131_TI;
extern TypeInfo t309_TI;
extern TypeInfo t125_TI;
extern TypeInfo t941_TI;
extern TypeInfo t637_TI;
extern TypeInfo t2328_TI;
extern TypeInfo t134_TI;
extern TypeInfo t445_TI;
#include "t2328MD.h"
extern Il2CppType t3822_0_0_0;
extern Il2CppType t309_0_0_0;
extern Il2CppType t941_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m12579_MI;
extern MethodInfo m27298_MI;
extern MethodInfo m6988_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.Canvas>
extern Il2CppType t2327_0_0_49;
FieldInfo t2327_f0_FieldInfo = 
{
	"_default", &t2327_0_0_49, &t2327_TI, offsetof(t2327_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2327_FIs[] =
{
	&t2327_f0_FieldInfo,
	NULL
};
extern MethodInfo m12578_MI;
static PropertyInfo t2327____Default_PropertyInfo = 
{
	&t2327_TI, "Default", &m12578_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2327_PIs[] =
{
	&t2327____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2327_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12575_MI = 
{
	".ctor", (methodPointerType)&m9422_gshared, &t2327_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2327_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12576_MI = 
{
	".cctor", (methodPointerType)&m9423_gshared, &t2327_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2327_m12577_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2327_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12577_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m9424_gshared, &t2327_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2327_m12577_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t2327_m27298_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2327_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27298_MI = 
{
	"Compare", NULL, &t2327_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2327_m27298_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2327_TI;
extern Il2CppType t2327_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12578_MI = 
{
	"get_Default", (methodPointerType)&m9425_gshared, &t2327_TI, &t2327_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2327_MIs[] =
{
	&m12575_MI,
	&m12576_MI,
	&m12577_MI,
	&m27298_MI,
	&m12578_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m27298_MI;
extern MethodInfo m12577_MI;
static MethodInfo* t2327_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m27298_MI,
	&m12577_MI,
	NULL,
};
extern TypeInfo t3821_TI;
extern TypeInfo t147_TI;
static TypeInfo* t2327_ITIs[] = 
{
	&t3821_TI,
	&t147_TI,
};
extern TypeInfo t3821_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t2327_IOs[] = 
{
	{ &t3821_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppType t3822_0_0_0;
extern Il2CppType t309_0_0_0;
extern TypeInfo t2327_TI;
extern TypeInfo t2327_TI;
extern TypeInfo t2328_TI;
extern MethodInfo m12579_MI;
extern TypeInfo t309_TI;
extern MethodInfo m27298_MI;
static void* t2327_RGCTXData[8] = 
{
	(void*)&t3822_0_0_0,
	(void*)&t309_0_0_0,
	&t2327_TI,
	&t2327_TI,
	&t2328_TI,
	&m12579_MI,
	&t309_TI,
	&m27298_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2327_0_0_0;
extern Il2CppType t2327_1_0_0;
extern TypeInfo t25_TI;
struct t2327;
extern TypeInfo t2327_TI;
extern Il2CppGenericClass t2327_GC;
TypeInfo t2327_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2327_MIs, t2327_PIs, t2327_FIs, NULL, &t25_TI, NULL, NULL, &t2327_TI, t2327_ITIs, t2327_VT, &EmptyCustomAttributesCache, &t2327_TI, &t2327_0_0_0, &t2327_1_0_0, t2327_IOs, &t2327_GC, NULL, NULL, NULL, t2327_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2327), 0, -1, sizeof(t2327_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3821_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.Canvas>
extern Il2CppType t309_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t3821_m20217_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t3821_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20217_MI = 
{
	"Compare", NULL, &t3821_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t3821_m20217_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3821_MIs[] =
{
	&m20217_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3821_0_0_0;
extern Il2CppType t3821_1_0_0;
struct t3821;
extern TypeInfo t3821_TI;
extern Il2CppGenericClass t3821_GC;
TypeInfo t3821_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3821_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3821_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3821_TI, &t3821_0_0_0, &t3821_1_0_0, NULL, &t3821_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3822_TI;



// Metadata Definition System.IComparable`1<UnityEngine.Canvas>
extern Il2CppType t309_0_0_0;
static ParameterInfo t3822_m20218_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t3822_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20218_MI = 
{
	"CompareTo", NULL, &t3822_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t3822_m20218_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3822_MIs[] =
{
	&m20218_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3822_0_0_0;
extern Il2CppType t3822_1_0_0;
struct t3822;
extern TypeInfo t3822_TI;
extern Il2CppGenericClass t3822_GC;
TypeInfo t3822_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3822_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3822_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3822_TI, &t3822_0_0_0, &t3822_1_0_0, NULL, &t3822_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2328_TI;

extern TypeInfo t309_TI;
extern TypeInfo t3822_TI;
extern TypeInfo t134_TI;
extern TypeInfo t143_TI;
extern TypeInfo t25_TI;
extern TypeInfo t445_TI;
extern MethodInfo m12575_MI;
extern MethodInfo m20218_MI;
extern MethodInfo m7828_MI;
extern MethodInfo m2409_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Canvas>
extern TypeInfo t2328_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12579_MI = 
{
	".ctor", (methodPointerType)&m9426_gshared, &t2328_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t2328_m12580_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2328_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12580_MI = 
{
	"Compare", (methodPointerType)&m9427_gshared, &t2328_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2328_m12580_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2328_MIs[] =
{
	&m12579_MI,
	&m12580_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12580_MI;
extern MethodInfo m12577_MI;
extern MethodInfo m12580_MI;
static MethodInfo* t2328_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12580_MI,
	&m12577_MI,
	&m12580_MI,
};
extern TypeInfo t3821_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t2328_IOs[] = 
{
	{ &t3821_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppType t3822_0_0_0;
extern Il2CppType t309_0_0_0;
extern TypeInfo t2327_TI;
extern TypeInfo t2327_TI;
extern TypeInfo t2328_TI;
extern MethodInfo m12579_MI;
extern TypeInfo t309_TI;
extern MethodInfo m27298_MI;
extern MethodInfo m12575_MI;
extern TypeInfo t309_TI;
extern TypeInfo t3822_TI;
extern MethodInfo m20218_MI;
static void* t2328_RGCTXData[12] = 
{
	(void*)&t3822_0_0_0,
	(void*)&t309_0_0_0,
	&t2327_TI,
	&t2327_TI,
	&t2328_TI,
	&m12579_MI,
	&t309_TI,
	&m27298_MI,
	&m12575_MI,
	&t309_TI,
	&t3822_TI,
	&m20218_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2328_0_0_0;
extern Il2CppType t2328_1_0_0;
extern TypeInfo t2327_TI;
struct t2328;
extern TypeInfo t2328_TI;
extern Il2CppGenericClass t2328_GC;
extern TypeInfo t940_TI;
TypeInfo t2328_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2328_MIs, NULL, NULL, NULL, &t2327_TI, NULL, &t940_TI, &t2328_TI, NULL, t2328_VT, &EmptyCustomAttributesCache, &t2328_TI, &t2328_0_0_0, &t2328_1_0_0, t2328_IOs, &t2328_GC, NULL, NULL, NULL, t2328_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2328), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2320_TI;
#include "t2320MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.Canvas>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2320_m12581_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2320_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m12581_MI = 
{
	".ctor", (methodPointerType)&m9458_gshared, &t2320_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2320_m12581_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t2320_m12582_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2320_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12582_MI = 
{
	"Invoke", (methodPointerType)&m9459_gshared, &t2320_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2320_m12582_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t309_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2320_m12583_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2320_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12583_MI = 
{
	"BeginInvoke", (methodPointerType)&m9460_gshared, &t2320_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25_t25, t2320_m12583_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2320_m12584_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2320_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12584_MI = 
{
	"EndInvoke", (methodPointerType)&m9461_gshared, &t2320_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2320_m12584_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2320_MIs[] =
{
	&m12581_MI,
	&m12582_MI,
	&m12583_MI,
	&m12584_MI,
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
extern MethodInfo m12582_MI;
extern MethodInfo m12583_MI;
extern MethodInfo m12584_MI;
static MethodInfo* t2320_VT[] =
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
	&m12582_MI,
	&m12583_MI,
	&m12584_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2320_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2320_0_0_0;
extern Il2CppType t2320_1_0_0;
extern TypeInfo t345_TI;
struct t2320;
extern TypeInfo t2320_TI;
extern Il2CppGenericClass t2320_GC;
TypeInfo t2320_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2320_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2320_TI, NULL, t2320_VT, &EmptyCustomAttributesCache, &t2320_TI, &t2320_0_0_0, &t2320_1_0_0, t2320_IOs, &t2320_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2320), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3823_TI;

#include "t317.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.GraphicRaycaster>
extern MethodInfo m27299_MI;
static PropertyInfo t3823____Current_PropertyInfo = 
{
	&t3823_TI, "Current", &m27299_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3823_PIs[] =
{
	&t3823____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3823_TI;
extern Il2CppType t317_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27299_MI = 
{
	"get_Current", NULL, &t3823_TI, &t317_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3823_MIs[] =
{
	&m27299_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3823_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3823_0_0_0;
extern Il2CppType t3823_1_0_0;
struct t3823;
extern TypeInfo t3823_TI;
extern Il2CppGenericClass t3823_GC;
TypeInfo t3823_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3823_MIs, t3823_PIs, NULL, NULL, NULL, NULL, NULL, &t3823_TI, t3823_ITIs, NULL, &EmptyCustomAttributesCache, &t3823_TI, &t3823_0_0_0, &t3823_1_0_0, NULL, &t3823_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2329.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2329_TI;
#include "t2329MD.h"

extern TypeInfo t2329_TI;
extern TypeInfo t317_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m12589_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20223_MI;
struct t122;
#define m20223(__this, p0, method) (t317 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m20223_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.GraphicRaycaster>
extern Il2CppType t122_0_0_1;
FieldInfo t2329_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2329_TI, offsetof(t2329, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2329_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2329_TI, offsetof(t2329, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2329_FIs[] =
{
	&t2329_f0_FieldInfo,
	&t2329_f1_FieldInfo,
	NULL
};
extern MethodInfo m12586_MI;
static PropertyInfo t2329____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2329_TI, "System.Collections.IEnumerator.Current", &m12586_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12589_MI;
static PropertyInfo t2329____Current_PropertyInfo = 
{
	&t2329_TI, "Current", &m12589_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2329_PIs[] =
{
	&t2329____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2329____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2329_m12585_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2329_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12585_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t2329_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2329_m12585_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2329_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12586_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t2329_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2329_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12587_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t2329_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2329_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12588_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t2329_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2329_TI;
extern Il2CppType t317_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12589_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t2329_TI, &t317_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2329_MIs[] =
{
	&m12585_MI,
	&m12586_MI,
	&m12587_MI,
	&m12588_MI,
	&m12589_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m12586_MI;
extern MethodInfo m12588_MI;
extern MethodInfo m12587_MI;
extern MethodInfo m12589_MI;
static MethodInfo* t2329_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m12586_MI,
	&m12588_MI,
	&m12587_MI,
	&m12589_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3823_TI;
static TypeInfo* t2329_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3823_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3823_TI;
static Il2CppInterfaceOffsetPair t2329_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3823_TI, 7},
};
extern MethodInfo m12589_MI;
extern TypeInfo t317_TI;
extern MethodInfo m20223_MI;
static void* t2329_RGCTXData[3] = 
{
	&m12589_MI,
	&t317_TI,
	&m20223_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2329_0_0_0;
extern Il2CppType t2329_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2329_TI;
extern Il2CppGenericClass t2329_GC;
extern TypeInfo t122_TI;
TypeInfo t2329_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2329_MIs, t2329_PIs, t2329_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2329_TI, t2329_ITIs, t2329_VT, &EmptyCustomAttributesCache, &t2329_TI, &t2329_0_0_0, &t2329_1_0_0, t2329_IOs, &t2329_GC, NULL, NULL, NULL, t2329_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2329)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4664_TI;

#include "UnityEngine.UI_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.GraphicRaycaster>
extern MethodInfo m27300_MI;
static PropertyInfo t4664____Count_PropertyInfo = 
{
	&t4664_TI, "Count", &m27300_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27301_MI;
static PropertyInfo t4664____IsReadOnly_PropertyInfo = 
{
	&t4664_TI, "IsReadOnly", &m27301_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4664_PIs[] =
{
	&t4664____Count_PropertyInfo,
	&t4664____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4664_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27300_MI = 
{
	"get_Count", NULL, &t4664_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4664_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27301_MI = 
{
	"get_IsReadOnly", NULL, &t4664_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t317_0_0_0;
static ParameterInfo t4664_m27302_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern TypeInfo t4664_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27302_MI = 
{
	"Add", NULL, &t4664_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t4664_m27302_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4664_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27303_MI = 
{
	"Clear", NULL, &t4664_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t317_0_0_0;
static ParameterInfo t4664_m27304_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern TypeInfo t4664_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27304_MI = 
{
	"Contains", NULL, &t4664_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4664_m27304_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3598_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4664_m27305_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3598_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4664_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27305_MI = 
{
	"CopyTo", NULL, &t4664_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4664_m27305_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t317_0_0_0;
static ParameterInfo t4664_m27306_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern TypeInfo t4664_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27306_MI = 
{
	"Remove", NULL, &t4664_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4664_m27306_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4664_MIs[] =
{
	&m27300_MI,
	&m27301_MI,
	&m27302_MI,
	&m27303_MI,
	&m27304_MI,
	&m27305_MI,
	&m27306_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4666_TI;
static TypeInfo* t4664_ITIs[] = 
{
	&t703_TI,
	&t4666_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4664_0_0_0;
extern Il2CppType t4664_1_0_0;
struct t4664;
extern TypeInfo t4664_TI;
extern Il2CppGenericClass t4664_GC;
TypeInfo t4664_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4664_MIs, t4664_PIs, NULL, NULL, NULL, NULL, NULL, &t4664_TI, t4664_ITIs, NULL, &EmptyCustomAttributesCache, &t4664_TI, &t4664_0_0_0, &t4664_1_0_0, NULL, &t4664_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4666_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.GraphicRaycaster>
extern TypeInfo t4666_TI;
extern Il2CppType t3823_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27307_MI = 
{
	"GetEnumerator", NULL, &t4666_TI, &t3823_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4666_MIs[] =
{
	&m27307_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4666_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4666_0_0_0;
extern Il2CppType t4666_1_0_0;
struct t4666;
extern TypeInfo t4666_TI;
extern Il2CppGenericClass t4666_GC;
TypeInfo t4666_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4666_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4666_TI, t4666_ITIs, NULL, &EmptyCustomAttributesCache, &t4666_TI, &t4666_0_0_0, &t4666_1_0_0, NULL, &t4666_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4665_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.GraphicRaycaster>
extern MethodInfo m27308_MI;
extern MethodInfo m27309_MI;
static PropertyInfo t4665____Item_PropertyInfo = 
{
	&t4665_TI, "Item", &m27308_MI, &m27309_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4665_PIs[] =
{
	&t4665____Item_PropertyInfo,
	NULL
};
extern Il2CppType t317_0_0_0;
static ParameterInfo t4665_m27310_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern TypeInfo t4665_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27310_MI = 
{
	"IndexOf", NULL, &t4665_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t4665_m27310_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t317_0_0_0;
static ParameterInfo t4665_m27311_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern TypeInfo t4665_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27311_MI = 
{
	"Insert", NULL, &t4665_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4665_m27311_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4665_m27312_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4665_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27312_MI = 
{
	"RemoveAt", NULL, &t4665_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4665_m27312_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4665_m27308_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4665_TI;
extern Il2CppType t317_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27308_MI = 
{
	"get_Item", NULL, &t4665_TI, &t317_0_0_0, RuntimeInvoker_t25_t134, t4665_m27308_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t317_0_0_0;
static ParameterInfo t4665_m27309_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern TypeInfo t4665_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27309_MI = 
{
	"set_Item", NULL, &t4665_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4665_m27309_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4665_MIs[] =
{
	&m27310_MI,
	&m27311_MI,
	&m27312_MI,
	&m27308_MI,
	&m27309_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4664_TI;
extern TypeInfo t4666_TI;
static TypeInfo* t4665_ITIs[] = 
{
	&t703_TI,
	&t4664_TI,
	&t4666_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4665_0_0_0;
extern Il2CppType t4665_1_0_0;
struct t4665;
extern TypeInfo t4665_TI;
extern Il2CppGenericClass t4665_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4665_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4665_MIs, t4665_PIs, NULL, NULL, NULL, NULL, NULL, &t4665_TI, t4665_ITIs, NULL, &t1518__CustomAttributeCache, &t4665_TI, &t4665_0_0_0, &t4665_1_0_0, NULL, &t4665_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2330.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2330_TI;
#include "t2330MD.h"

#include "t657.h"
#include "t2331.h"
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t2330_TI;
extern TypeInfo t317_TI;
extern TypeInfo t2331_TI;
extern TypeInfo t123_TI;
#include "t2331MD.h"
extern MethodInfo m12592_MI;
extern MethodInfo m12594_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.GraphicRaycaster>
extern Il2CppType t158_0_0_33;
FieldInfo t2330_f1_FieldInfo = 
{
	"m_Arg1", &t158_0_0_33, &t2330_TI, offsetof(t2330, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2330_FIs[] =
{
	&t2330_f1_FieldInfo,
	NULL
};
extern Il2CppType t60_0_0_0;
extern Il2CppType t657_0_0_0;
extern Il2CppType t317_0_0_0;
static ParameterInfo t2330_m12590_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern TypeInfo t2330_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12590_MI = 
{
	".ctor", (methodPointerType)&m8415_gshared, &t2330_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t2330_m12590_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2330_m12591_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2330_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12591_MI = 
{
	"Invoke", (methodPointerType)&m8417_gshared, &t2330_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2330_m12591_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2330_MIs[] =
{
	&m12590_MI,
	&m12591_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12591_MI;
extern MethodInfo m12595_MI;
static MethodInfo* t2330_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12591_MI,
	&m12595_MI,
};
extern Il2CppType t2332_0_0_0;
extern TypeInfo t2332_TI;
extern MethodInfo m20233_MI;
extern TypeInfo t317_TI;
extern MethodInfo m12597_MI;
extern MethodInfo m12592_MI;
extern TypeInfo t317_TI;
extern MethodInfo m12594_MI;
static void* t2330_RGCTXData[8] = 
{
	(void*)&t2332_0_0_0,
	&t2332_TI,
	&m20233_MI,
	&t317_TI,
	&m12597_MI,
	&m12592_MI,
	&t317_TI,
	&m12594_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2330_0_0_0;
extern Il2CppType t2330_1_0_0;
extern TypeInfo t2331_TI;
struct t2330;
extern TypeInfo t2330_TI;
extern Il2CppGenericClass t2330_GC;
TypeInfo t2330_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2330_MIs, NULL, t2330_FIs, NULL, &t2331_TI, NULL, NULL, &t2330_TI, NULL, t2330_VT, &EmptyCustomAttributesCache, &t2330_TI, &t2330_0_0_0, &t2330_1_0_0, NULL, &t2330_GC, NULL, NULL, NULL, t2330_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2330), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2331_TI;

#include "t2332.h"
#include "t466.h"
extern TypeInfo t2331_TI;
extern TypeInfo t2332_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t317_TI;
extern TypeInfo t123_TI;
#include "t656MD.h"
#include "t466MD.h"
#include "t2332MD.h"
extern Il2CppType t2332_0_0_0;
extern MethodInfo m3313_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m2105_MI;
extern MethodInfo m3312_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m20233_MI;
extern MethodInfo m3314_MI;
extern MethodInfo m12597_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3473_MI;
struct t656;
#include "t656.h"
struct t656;
 void m18087_gshared (t25 * __this, t25 * p0, MethodInfo* method);
#define m18087(__this, p0, method) (void)m18087_gshared((t25 *)__this, (t25 *)p0, method)
#define m20233(__this, p0, method) (void)m18087_gshared((t25 *)__this, (t25 *)p0, method)
extern MethodInfo m20233_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.GraphicRaycaster>
extern Il2CppType t2332_0_0_1;
FieldInfo t2331_f0_FieldInfo = 
{
	"Delegate", &t2332_0_0_1, &t2331_TI, offsetof(t2331, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2331_FIs[] =
{
	&t2331_f0_FieldInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2331_m12592_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2331_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12592_MI = 
{
	".ctor", (methodPointerType)&m8418_gshared, &t2331_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t2331_m12592_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2332_0_0_0;
static ParameterInfo t2331_m12593_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2332_0_0_0},
};
extern TypeInfo t2331_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12593_MI = 
{
	".ctor", (methodPointerType)&m8419_gshared, &t2331_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2331_m12593_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t2331_m12594_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t2331_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12594_MI = 
{
	"Invoke", (methodPointerType)&m8420_gshared, &t2331_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2331_m12594_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t657_0_0_0;
static ParameterInfo t2331_m12595_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t657_0_0_0},
};
extern TypeInfo t2331_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12595_MI = 
{
	"Find", (methodPointerType)&m8421_gshared, &t2331_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2331_m12595_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2331_MIs[] =
{
	&m12592_MI,
	&m12593_MI,
	&m12594_MI,
	&m12595_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12594_MI;
extern MethodInfo m12595_MI;
static MethodInfo* t2331_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12594_MI,
	&m12595_MI,
};
extern Il2CppType t2332_0_0_0;
extern TypeInfo t2332_TI;
extern MethodInfo m20233_MI;
extern TypeInfo t317_TI;
extern MethodInfo m12597_MI;
static void* t2331_RGCTXData[5] = 
{
	(void*)&t2332_0_0_0,
	&t2332_TI,
	&m20233_MI,
	&t317_TI,
	&m12597_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2331_0_0_0;
extern Il2CppType t2331_1_0_0;
extern TypeInfo t656_TI;
struct t2331;
extern TypeInfo t2331_TI;
extern Il2CppGenericClass t2331_GC;
TypeInfo t2331_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2331_MIs, NULL, t2331_FIs, NULL, &t656_TI, NULL, NULL, &t2331_TI, NULL, t2331_VT, &EmptyCustomAttributesCache, &t2331_TI, &t2331_0_0_0, &t2331_1_0_0, NULL, &t2331_GC, NULL, NULL, NULL, t2331_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2331), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2332_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.GraphicRaycaster>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2332_m12596_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2332_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m12596_MI = 
{
	".ctor", (methodPointerType)&m8422_gshared, &t2332_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2332_m12596_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t317_0_0_0;
static ParameterInfo t2332_m12597_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern TypeInfo t2332_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12597_MI = 
{
	"Invoke", (methodPointerType)&m8423_gshared, &t2332_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2332_m12597_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t317_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2332_m12598_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2332_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12598_MI = 
{
	"BeginInvoke", (methodPointerType)&m8424_gshared, &t2332_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t2332_m12598_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2332_m12599_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2332_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12599_MI = 
{
	"EndInvoke", (methodPointerType)&m8425_gshared, &t2332_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2332_m12599_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2332_MIs[] =
{
	&m12596_MI,
	&m12597_MI,
	&m12598_MI,
	&m12599_MI,
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
extern MethodInfo m12597_MI;
extern MethodInfo m12598_MI;
extern MethodInfo m12599_MI;
static MethodInfo* t2332_VT[] =
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
	&m12597_MI,
	&m12598_MI,
	&m12599_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2332_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2332_0_0_0;
extern Il2CppType t2332_1_0_0;
extern TypeInfo t345_TI;
struct t2332;
extern TypeInfo t2332_TI;
extern Il2CppGenericClass t2332_GC;
TypeInfo t2332_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2332_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2332_TI, NULL, t2332_VT, &EmptyCustomAttributesCache, &t2332_TI, &t2332_0_0_0, &t2332_1_0_0, t2332_IOs, &t2332_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2332), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t318.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t318_TI;
#include "t318MD.h"

#include "t303.h"
#include "t2338.h"
#include "t2336.h"
#include "t2337.h"
#include "t2342.h"
#include "t319.h"
extern TypeInfo t318_TI;
extern TypeInfo t303_TI;
extern TypeInfo t134_TI;
extern TypeInfo t123_TI;
extern TypeInfo t445_TI;
extern TypeInfo t685_TI;
extern TypeInfo t1386_TI;
extern TypeInfo t1351_TI;
extern TypeInfo t474_TI;
extern TypeInfo t2333_TI;
extern TypeInfo t2338_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2334_TI;
extern TypeInfo t2335_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2336_TI;
extern TypeInfo t165_TI;
extern TypeInfo t2337_TI;
extern TypeInfo t2342_TI;
#include "t2336MD.h"
#include "t2337MD.h"
#include "t2338MD.h"
#include "t2342MD.h"
extern MethodInfo m2123_MI;
extern MethodInfo m12643_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m6998_MI;
extern MethodInfo m20235_MI;
extern MethodInfo m6999_MI;
extern MethodInfo m12631_MI;
extern MethodInfo m452_MI;
extern MethodInfo m12633_MI;
extern MethodInfo m12620_MI;
extern MethodInfo m2129_MI;
extern MethodInfo m12619_MI;
extern MethodInfo m12628_MI;
extern MethodInfo m4283_MI;
extern MethodInfo m2128_MI;
extern MethodInfo m12623_MI;
extern MethodInfo m12629_MI;
extern MethodInfo m12632_MI;
extern MethodInfo m12634_MI;
extern MethodInfo m12618_MI;
extern MethodInfo m12641_MI;
extern MethodInfo m7436_MI;
extern MethodInfo m12642_MI;
extern MethodInfo m27196_MI;
extern MethodInfo m27198_MI;
extern MethodInfo m27199_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m12650_MI;
extern MethodInfo m4279_MI;
extern MethodInfo m20237_MI;
extern MethodInfo m12626_MI;
extern MethodInfo m12627_MI;
extern MethodInfo m489_MI;
extern MethodInfo m12725_MI;
extern MethodInfo m12644_MI;
extern MethodInfo m12630_MI;
extern MethodInfo m12636_MI;
extern MethodInfo m4295_MI;
extern MethodInfo m12731_MI;
extern MethodInfo m20239_MI;
extern MethodInfo m20247_MI;
extern MethodInfo m4282_MI;
struct t122;
#define m20235(__this, p0, p1, method) (void)m18837_gshared((t25 *)__this, (t158**)p0, (int32_t)p1, method)
extern MethodInfo m20235_MI;
struct t122;
#include "t2340.h"
#define m20237(__this, p0, p1, p2, p3, method) (int32_t)m8232_gshared((t25 *)__this, (t158*)p0, (t25 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m20237_MI;
struct t122;
#define m20239(__this, p0, p1, p2, p3, method) (void)m18840_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (int32_t)p2, (t25*)p3, method)
extern MethodInfo m20239_MI;
struct t122;
#define m20247(__this, p0, p1, p2, method) (void)m18914_gshared((t25 *)__this, (t158*)p0, (int32_t)p1, (t1889 *)p2, method)
extern MethodInfo m20247_MI;


extern MethodInfo m12628_MI;
 t2338  m12628 (t318 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12628_MI);
	{
		t2338  L_0 = {0};
		m12644(&L_0, __this, &m12644_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
extern Il2CppType t134_0_0_32849;
FieldInfo t318_f0_FieldInfo = 
{
	"DefaultCapacity", &t134_0_0_32849, &t318_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2333_0_0_1;
FieldInfo t318_f1_FieldInfo = 
{
	"_items", &t2333_0_0_1, &t318_TI, offsetof(t318, f1), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t318_f2_FieldInfo = 
{
	"_size", &t134_0_0_1, &t318_TI, offsetof(t318, f2), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t318_f3_FieldInfo = 
{
	"_version", &t134_0_0_1, &t318_TI, offsetof(t318, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2333_0_0_49;
FieldInfo t318_f4_FieldInfo = 
{
	"EmptyArray", &t2333_0_0_49, &t318_TI, offsetof(t318_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t318_FIs[] =
{
	&t318_f0_FieldInfo,
	&t318_f1_FieldInfo,
	&t318_f2_FieldInfo,
	&t318_f3_FieldInfo,
	&t318_f4_FieldInfo,
	NULL
};
static const int32_t t318_f0_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t318_f0_DefaultValue = 
{
	&t318_f0_FieldInfo, { (char*)&t318_f0_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t318_FDVs[] = 
{
	&t318_f0_DefaultValue,
	NULL
};
extern MethodInfo m12611_MI;
static PropertyInfo t318____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t318_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m12611_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12612_MI;
static PropertyInfo t318____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t318_TI, "System.Collections.ICollection.IsSynchronized", &m12612_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12613_MI;
static PropertyInfo t318____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t318_TI, "System.Collections.ICollection.SyncRoot", &m12613_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12614_MI;
static PropertyInfo t318____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t318_TI, "System.Collections.IList.IsFixedSize", &m12614_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12615_MI;
static PropertyInfo t318____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t318_TI, "System.Collections.IList.IsReadOnly", &m12615_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12616_MI;
extern MethodInfo m12617_MI;
static PropertyInfo t318____System_Collections_IList_Item_PropertyInfo = 
{
	&t318_TI, "System.Collections.IList.Item", &m12616_MI, &m12617_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12641_MI;
extern MethodInfo m12642_MI;
static PropertyInfo t318____Capacity_PropertyInfo = 
{
	&t318_TI, "Capacity", &m12641_MI, &m12642_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2125_MI;
static PropertyInfo t318____Count_PropertyInfo = 
{
	&t318_TI, "Count", &m2125_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2123_MI;
extern MethodInfo m12643_MI;
static PropertyInfo t318____Item_PropertyInfo = 
{
	&t318_TI, "Item", &m2123_MI, &m12643_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t318_PIs[] =
{
	&t318____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t318____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t318____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t318____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t318____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t318____System_Collections_IList_Item_PropertyInfo,
	&t318____Capacity_PropertyInfo,
	&t318____Count_PropertyInfo,
	&t318____Item_PropertyInfo,
	NULL
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2117_MI = 
{
	".ctor", (methodPointerType)&m9248_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2334_0_0_0;
static ParameterInfo t318_m12600_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2334_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12600_MI = 
{
	".ctor", (methodPointerType)&m9250_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t318_m12600_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t318_m12601_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12601_MI = 
{
	".ctor", (methodPointerType)&m9252_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t318_m12601_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12602_MI = 
{
	".cctor", (methodPointerType)&m9254_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t2335_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12603_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m9256_gshared, &t318_TI, &t2335_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t318_m12604_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12604_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9258_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t318_m12604_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12605_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9260_gshared, &t318_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t318_m12606_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12606_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9262_gshared, &t318_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t318_m12606_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t318_m12607_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12607_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9264_gshared, &t318_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t318_m12607_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t318_m12608_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12608_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9266_gshared, &t318_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t318_m12608_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t318_m12609_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12609_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9268_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t318_m12609_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t318_m12610_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12610_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9270_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t318_m12610_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12611_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9272_gshared, &t318_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12612_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9274_gshared, &t318_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12613_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9276_gshared, &t318_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12614_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9278_gshared, &t318_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12615_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9280_gshared, &t318_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t318_m12616_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12616_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9282_gshared, &t318_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t318_m12616_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t318_m12617_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12617_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9284_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t318_m12617_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t318_m2128_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2128_MI = 
{
	"Add", (methodPointerType)&m9285_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t318_m2128_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t318_m12618_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12618_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m9287_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t318_m12618_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t474_0_0_0;
static ParameterInfo t318_m12619_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t474_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12619_MI = 
{
	"AddCollection", (methodPointerType)&m9289_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t318_m12619_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2334_0_0_0;
static ParameterInfo t318_m12620_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2334_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12620_MI = 
{
	"AddEnumerable", (methodPointerType)&m9291_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t318_m12620_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2334_0_0_0;
static ParameterInfo t318_m12621_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2334_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12621_MI = 
{
	"AddRange", (methodPointerType)&m9293_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t318_m12621_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t2336_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12622_MI = 
{
	"AsReadOnly", (methodPointerType)&m9295_gshared, &t318_TI, &t2336_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2122_MI = 
{
	"Clear", (methodPointerType)&m9297_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t318_m12623_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12623_MI = 
{
	"Contains", (methodPointerType)&m9299_gshared, &t318_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t318_m12623_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2333_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t318_m12624_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2333_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12624_MI = 
{
	"CopyTo", (methodPointerType)&m9301_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t318_m12624_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2337_0_0_0;
static ParameterInfo t318_m12625_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2337_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12625_MI = 
{
	"Find", (methodPointerType)&m9303_gshared, &t318_TI, &t303_0_0_0, RuntimeInvoker_t25_t25, t318_m12625_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2337_0_0_0;
static ParameterInfo t318_m12626_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2337_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12626_MI = 
{
	"CheckMatch", (methodPointerType)&m9305_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t318_m12626_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t2337_0_0_0;
static ParameterInfo t318_m12627_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2337_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12627_MI = 
{
	"GetIndex", (methodPointerType)&m9307_gshared, &t318_TI, &t134_0_0_0, RuntimeInvoker_t134_t134_t134_t25, t318_m12627_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t2338_0_0_0;
extern void* RuntimeInvoker_t2338 (MethodInfo* method, void* obj, void** args);
MethodInfo m12628_MI = 
{
	"GetEnumerator", (methodPointerType)&m12628, &t318_TI, &t2338_0_0_0, RuntimeInvoker_t2338, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t318_m12629_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12629_MI = 
{
	"IndexOf", (methodPointerType)&m9310_gshared, &t318_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t318_m12629_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t318_m12630_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12630_MI = 
{
	"Shift", (methodPointerType)&m9312_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t318_m12630_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t318_m12631_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12631_MI = 
{
	"CheckIndex", (methodPointerType)&m9314_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t318_m12631_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t318_m12632_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12632_MI = 
{
	"Insert", (methodPointerType)&m9316_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t318_m12632_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2334_0_0_0;
static ParameterInfo t318_m12633_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2334_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12633_MI = 
{
	"CheckCollection", (methodPointerType)&m9318_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t318_m12633_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t318_m12634_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12634_MI = 
{
	"Remove", (methodPointerType)&m9320_gshared, &t318_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t318_m12634_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2337_0_0_0;
static ParameterInfo t318_m12635_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2337_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12635_MI = 
{
	"RemoveAll", (methodPointerType)&m9322_gshared, &t318_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t318_m12635_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t318_m12636_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12636_MI = 
{
	"RemoveAt", (methodPointerType)&m9324_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t318_m12636_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12637_MI = 
{
	"Reverse", (methodPointerType)&m9326_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12638_MI = 
{
	"Sort", (methodPointerType)&m9328_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t319_0_0_0;
static ParameterInfo t318_m2131_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t319_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2131_MI = 
{
	"Sort", (methodPointerType)&m9330_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t318_m2131_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t2333_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12639_MI = 
{
	"ToArray", (methodPointerType)&m9332_gshared, &t318_TI, &t2333_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12640_MI = 
{
	"TrimExcess", (methodPointerType)&m9334_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12641_MI = 
{
	"get_Capacity", (methodPointerType)&m9336_gshared, &t318_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t318_m12642_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12642_MI = 
{
	"set_Capacity", (methodPointerType)&m9338_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t318_m12642_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t318_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m2125_MI = 
{
	"get_Count", (methodPointerType)&m9340_gshared, &t318_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t318_m2123_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m2123_MI = 
{
	"get_Item", (methodPointerType)&m9342_gshared, &t318_TI, &t303_0_0_0, RuntimeInvoker_t25_t134, t318_m2123_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t318_m12643_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t318_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12643_MI = 
{
	"set_Item", (methodPointerType)&m9344_gshared, &t318_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t318_m12643_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t318_MIs[] =
{
	&m2117_MI,
	&m12600_MI,
	&m12601_MI,
	&m12602_MI,
	&m12603_MI,
	&m12604_MI,
	&m12605_MI,
	&m12606_MI,
	&m12607_MI,
	&m12608_MI,
	&m12609_MI,
	&m12610_MI,
	&m12611_MI,
	&m12612_MI,
	&m12613_MI,
	&m12614_MI,
	&m12615_MI,
	&m12616_MI,
	&m12617_MI,
	&m2128_MI,
	&m12618_MI,
	&m12619_MI,
	&m12620_MI,
	&m12621_MI,
	&m12622_MI,
	&m2122_MI,
	&m12623_MI,
	&m12624_MI,
	&m12625_MI,
	&m12626_MI,
	&m12627_MI,
	&m12628_MI,
	&m12629_MI,
	&m12630_MI,
	&m12631_MI,
	&m12632_MI,
	&m12633_MI,
	&m12634_MI,
	&m12635_MI,
	&m12636_MI,
	&m12637_MI,
	&m12638_MI,
	&m2131_MI,
	&m12639_MI,
	&m12640_MI,
	&m12641_MI,
	&m12642_MI,
	&m2125_MI,
	&m2123_MI,
	&m12643_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12605_MI;
extern MethodInfo m2125_MI;
extern MethodInfo m12612_MI;
extern MethodInfo m12613_MI;
extern MethodInfo m12604_MI;
extern MethodInfo m12614_MI;
extern MethodInfo m12615_MI;
extern MethodInfo m12616_MI;
extern MethodInfo m12617_MI;
extern MethodInfo m12606_MI;
extern MethodInfo m2122_MI;
extern MethodInfo m12607_MI;
extern MethodInfo m12608_MI;
extern MethodInfo m12609_MI;
extern MethodInfo m12610_MI;
extern MethodInfo m12636_MI;
extern MethodInfo m2125_MI;
extern MethodInfo m12611_MI;
extern MethodInfo m2128_MI;
extern MethodInfo m2122_MI;
extern MethodInfo m12623_MI;
extern MethodInfo m12624_MI;
extern MethodInfo m12634_MI;
extern MethodInfo m12603_MI;
extern MethodInfo m12629_MI;
extern MethodInfo m12632_MI;
extern MethodInfo m12636_MI;
extern MethodInfo m2123_MI;
extern MethodInfo m12643_MI;
static MethodInfo* t318_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12605_MI,
	&m2125_MI,
	&m12612_MI,
	&m12613_MI,
	&m12604_MI,
	&m12614_MI,
	&m12615_MI,
	&m12616_MI,
	&m12617_MI,
	&m12606_MI,
	&m2122_MI,
	&m12607_MI,
	&m12608_MI,
	&m12609_MI,
	&m12610_MI,
	&m12636_MI,
	&m2125_MI,
	&m12611_MI,
	&m2128_MI,
	&m2122_MI,
	&m12623_MI,
	&m12624_MI,
	&m12634_MI,
	&m12603_MI,
	&m12629_MI,
	&m12632_MI,
	&m12636_MI,
	&m2123_MI,
	&m12643_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t474_TI;
extern TypeInfo t2334_TI;
extern TypeInfo t322_TI;
static TypeInfo* t318_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t474_TI,
	&t2334_TI,
	&t322_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t474_TI;
extern TypeInfo t2334_TI;
extern TypeInfo t322_TI;
static Il2CppInterfaceOffsetPair t318_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t474_TI, 20},
	{ &t2334_TI, 27},
	{ &t322_TI, 28},
};
extern TypeInfo t318_TI;
extern MethodInfo m12633_MI;
extern TypeInfo t474_TI;
extern MethodInfo m12620_MI;
extern MethodInfo m2129_MI;
extern TypeInfo t2333_TI;
extern MethodInfo m12619_MI;
extern MethodInfo m12628_MI;
extern TypeInfo t2338_TI;
extern TypeInfo t303_TI;
extern MethodInfo m2128_MI;
extern MethodInfo m12623_MI;
extern MethodInfo m12629_MI;
extern MethodInfo m12631_MI;
extern MethodInfo m12632_MI;
extern MethodInfo m12634_MI;
extern MethodInfo m2123_MI;
extern MethodInfo m12643_MI;
extern MethodInfo m12618_MI;
extern MethodInfo m12641_MI;
extern MethodInfo m12642_MI;
extern MethodInfo m27196_MI;
extern MethodInfo m27198_MI;
extern MethodInfo m27199_MI;
extern TypeInfo t2336_TI;
extern MethodInfo m12650_MI;
extern MethodInfo m20237_MI;
extern MethodInfo m12626_MI;
extern MethodInfo m12627_MI;
extern MethodInfo m12725_MI;
extern MethodInfo m12644_MI;
extern MethodInfo m12630_MI;
extern MethodInfo m12636_MI;
extern MethodInfo m12731_MI;
extern MethodInfo m20239_MI;
extern MethodInfo m20247_MI;
extern MethodInfo m20235_MI;
static void* t318_RGCTXData[37] = 
{
	&t318_TI,
	&m12633_MI,
	&t474_TI,
	&m12620_MI,
	&m2129_MI,
	&t2333_TI,
	&m12619_MI,
	&m12628_MI,
	&t2338_TI,
	&t303_TI,
	&m2128_MI,
	&m12623_MI,
	&m12629_MI,
	&m12631_MI,
	&m12632_MI,
	&m12634_MI,
	&m2123_MI,
	&m12643_MI,
	&m12618_MI,
	&m12641_MI,
	&m12642_MI,
	&m27196_MI,
	&m27198_MI,
	&m27199_MI,
	&t2336_TI,
	&m12650_MI,
	&m20237_MI,
	&m12626_MI,
	&m12627_MI,
	&m12725_MI,
	&m12644_MI,
	&m12630_MI,
	&m12636_MI,
	&m12731_MI,
	&m20239_MI,
	&m20247_MI,
	&m20235_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t318_0_0_0;
extern Il2CppType t318_1_0_0;
extern TypeInfo t25_TI;
struct t318;
extern TypeInfo t318_TI;
extern Il2CppGenericClass t318_GC;
extern CustomAttributesCache t957__CustomAttributeCache;
TypeInfo t318_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t318_MIs, t318_PIs, t318_FIs, NULL, &t25_TI, NULL, NULL, &t318_TI, t318_ITIs, t318_VT, &t957__CustomAttributeCache, &t318_TI, &t318_0_0_0, &t318_1_0_0, t318_IOs, &t318_GC, NULL, t318_FDVs, NULL, t318_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t318), 0, -1, sizeof(t318_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 50, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2338_TI;

extern TypeInfo t2338_TI;
extern TypeInfo t1387_TI;
extern TypeInfo t303_TI;
extern TypeInfo t318_TI;
extern TypeInfo t131_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1404_TI;
extern MethodInfo m12647_MI;
extern MethodInfo m7430_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m3520_MI;
extern MethodInfo m7635_MI;
extern MethodInfo m7431_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Graphic>
extern Il2CppType t318_0_0_1;
FieldInfo t2338_f0_FieldInfo = 
{
	"l", &t318_0_0_1, &t2338_TI, offsetof(t2338, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2338_f1_FieldInfo = 
{
	"next", &t134_0_0_1, &t2338_TI, offsetof(t2338, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2338_f2_FieldInfo = 
{
	"ver", &t134_0_0_1, &t2338_TI, offsetof(t2338, f2) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_1;
FieldInfo t2338_f3_FieldInfo = 
{
	"current", &t303_0_0_1, &t2338_TI, offsetof(t2338, f3) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2338_FIs[] =
{
	&t2338_f0_FieldInfo,
	&t2338_f1_FieldInfo,
	&t2338_f2_FieldInfo,
	&t2338_f3_FieldInfo,
	NULL
};
extern MethodInfo m12645_MI;
static PropertyInfo t2338____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2338_TI, "System.Collections.IEnumerator.Current", &m12645_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12649_MI;
static PropertyInfo t2338____Current_PropertyInfo = 
{
	&t2338_TI, "Current", &m12649_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2338_PIs[] =
{
	&t2338____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2338____Current_PropertyInfo,
	NULL
};
extern Il2CppType t318_0_0_0;
static ParameterInfo t2338_m12644_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t318_0_0_0},
};
extern TypeInfo t2338_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12644_MI = 
{
	".ctor", (methodPointerType)&m9346_gshared, &t2338_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2338_m12644_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2338_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12645_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m9347_gshared, &t2338_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2338_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12646_MI = 
{
	"Dispose", (methodPointerType)&m9348_gshared, &t2338_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2338_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12647_MI = 
{
	"VerifyState", (methodPointerType)&m9349_gshared, &t2338_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2338_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12648_MI = 
{
	"MoveNext", (methodPointerType)&m9350_gshared, &t2338_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2338_TI;
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12649_MI = 
{
	"get_Current", (methodPointerType)&m9351_gshared, &t2338_TI, &t303_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2338_MIs[] =
{
	&m12644_MI,
	&m12645_MI,
	&m12646_MI,
	&m12647_MI,
	&m12648_MI,
	&m12649_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m12645_MI;
extern MethodInfo m12648_MI;
extern MethodInfo m12646_MI;
extern MethodInfo m12649_MI;
static MethodInfo* t2338_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m12645_MI,
	&m12648_MI,
	&m12646_MI,
	&m12649_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2335_TI;
static TypeInfo* t2338_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2335_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2335_TI;
static Il2CppInterfaceOffsetPair t2338_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2335_TI, 7},
};
extern MethodInfo m12647_MI;
extern TypeInfo t303_TI;
extern TypeInfo t2338_TI;
static void* t2338_RGCTXData[3] = 
{
	&m12647_MI,
	&t303_TI,
	&t2338_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2338_0_0_0;
extern Il2CppType t2338_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2338_TI;
extern Il2CppGenericClass t2338_GC;
extern TypeInfo t957_TI;
TypeInfo t2338_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2338_MIs, t2338_PIs, t2338_FIs, NULL, &t117_TI, NULL, &t957_TI, &t2338_TI, t2338_ITIs, t2338_VT, &EmptyCustomAttributesCache, &t2338_TI, &t2338_0_0_0, &t2338_1_0_0, t2338_IOs, &t2338_GC, NULL, NULL, NULL, t2338_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2338)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2336_TI;

extern TypeInfo t2336_TI;
extern TypeInfo t303_TI;
extern TypeInfo t134_TI;
extern TypeInfo t177_TI;
extern TypeInfo t322_TI;
extern TypeInfo t474_TI;
extern TypeInfo t165_TI;
extern TypeInfo t759_TI;
extern TypeInfo t123_TI;
extern TypeInfo t122_TI;
extern TypeInfo t703_TI;
extern TypeInfo t78_TI;
extern TypeInfo t125_TI;
extern TypeInfo t2333_TI;
extern TypeInfo t2334_TI;
extern TypeInfo t2335_TI;
#include "t2339MD.h"
extern MethodInfo m12679_MI;
extern MethodInfo m566_MI;
extern MethodInfo m2126_MI;
extern MethodInfo m2129_MI;
extern MethodInfo m452_MI;
extern MethodInfo m489_MI;
extern MethodInfo m7922_MI;
extern MethodInfo m7831_MI;
extern MethodInfo m12711_MI;
extern MethodInfo m27195_MI;
extern MethodInfo m27201_MI;
extern MethodInfo m27196_MI;
extern MethodInfo m27198_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Graphic>
extern Il2CppType t322_0_0_1;
FieldInfo t2336_f0_FieldInfo = 
{
	"list", &t322_0_0_1, &t2336_TI, offsetof(t2336, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2336_FIs[] =
{
	&t2336_f0_FieldInfo,
	NULL
};
extern MethodInfo m12656_MI;
extern MethodInfo m12657_MI;
static PropertyInfo t2336____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2336_TI, "System.Collections.Generic.IList<T>.Item", &m12656_MI, &m12657_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12658_MI;
static PropertyInfo t2336____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2336_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m12658_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12668_MI;
static PropertyInfo t2336____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2336_TI, "System.Collections.ICollection.IsSynchronized", &m12668_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12669_MI;
static PropertyInfo t2336____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2336_TI, "System.Collections.ICollection.SyncRoot", &m12669_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12670_MI;
static PropertyInfo t2336____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2336_TI, "System.Collections.IList.IsFixedSize", &m12670_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12671_MI;
static PropertyInfo t2336____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2336_TI, "System.Collections.IList.IsReadOnly", &m12671_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12672_MI;
extern MethodInfo m12673_MI;
static PropertyInfo t2336____System_Collections_IList_Item_PropertyInfo = 
{
	&t2336_TI, "System.Collections.IList.Item", &m12672_MI, &m12673_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12678_MI;
static PropertyInfo t2336____Count_PropertyInfo = 
{
	&t2336_TI, "Count", &m12678_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12679_MI;
static PropertyInfo t2336____Item_PropertyInfo = 
{
	&t2336_TI, "Item", &m12679_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2336_PIs[] =
{
	&t2336____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2336____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2336____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2336____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2336____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2336____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2336____System_Collections_IList_Item_PropertyInfo,
	&t2336____Count_PropertyInfo,
	&t2336____Item_PropertyInfo,
	NULL
};
extern Il2CppType t322_0_0_0;
static ParameterInfo t2336_m12650_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t322_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12650_MI = 
{
	".ctor", (methodPointerType)&m9352_gshared, &t2336_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2336_m12650_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t2336_m12651_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12651_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m9353_gshared, &t2336_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2336_m12651_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2336_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12652_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m9354_gshared, &t2336_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t2336_m12653_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12653_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m9355_gshared, &t2336_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2336_m12653_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t2336_m12654_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12654_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m9356_gshared, &t2336_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2336_m12654_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2336_m12655_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12655_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m9357_gshared, &t2336_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2336_m12655_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2336_m12656_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12656_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m9358_gshared, &t2336_TI, &t303_0_0_0, RuntimeInvoker_t25_t134, t2336_m12656_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t2336_m12657_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12657_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m9359_gshared, &t2336_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2336_m12657_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2336_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12658_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9360_gshared, &t2336_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2336_m12659_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12659_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9361_gshared, &t2336_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2336_m12659_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2336_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12660_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9362_gshared, &t2336_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2336_m12661_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12661_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9363_gshared, &t2336_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2336_m12661_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2336_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12662_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m9364_gshared, &t2336_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2336_m12663_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12663_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9365_gshared, &t2336_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2336_m12663_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2336_m12664_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12664_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9366_gshared, &t2336_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2336_m12664_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2336_m12665_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12665_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9367_gshared, &t2336_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2336_m12665_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2336_m12666_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12666_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9368_gshared, &t2336_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2336_m12666_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2336_m12667_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12667_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m9369_gshared, &t2336_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2336_m12667_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2336_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12668_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9370_gshared, &t2336_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2336_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12669_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9371_gshared, &t2336_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2336_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12670_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9372_gshared, &t2336_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2336_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12671_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9373_gshared, &t2336_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2336_m12672_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12672_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9374_gshared, &t2336_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t2336_m12672_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2336_m12673_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12673_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9375_gshared, &t2336_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2336_m12673_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t2336_m12674_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12674_MI = 
{
	"Contains", (methodPointerType)&m9376_gshared, &t2336_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2336_m12674_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2333_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2336_m12675_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2333_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12675_MI = 
{
	"CopyTo", (methodPointerType)&m9377_gshared, &t2336_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2336_m12675_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2336_TI;
extern Il2CppType t2335_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12676_MI = 
{
	"GetEnumerator", (methodPointerType)&m9378_gshared, &t2336_TI, &t2335_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t2336_m12677_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12677_MI = 
{
	"IndexOf", (methodPointerType)&m9379_gshared, &t2336_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2336_m12677_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2336_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12678_MI = 
{
	"get_Count", (methodPointerType)&m9380_gshared, &t2336_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2336_m12679_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2336_TI;
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12679_MI = 
{
	"get_Item", (methodPointerType)&m9381_gshared, &t2336_TI, &t303_0_0_0, RuntimeInvoker_t25_t134, t2336_m12679_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2336_MIs[] =
{
	&m12650_MI,
	&m12651_MI,
	&m12652_MI,
	&m12653_MI,
	&m12654_MI,
	&m12655_MI,
	&m12656_MI,
	&m12657_MI,
	&m12658_MI,
	&m12659_MI,
	&m12660_MI,
	&m12661_MI,
	&m12662_MI,
	&m12663_MI,
	&m12664_MI,
	&m12665_MI,
	&m12666_MI,
	&m12667_MI,
	&m12668_MI,
	&m12669_MI,
	&m12670_MI,
	&m12671_MI,
	&m12672_MI,
	&m12673_MI,
	&m12674_MI,
	&m12675_MI,
	&m12676_MI,
	&m12677_MI,
	&m12678_MI,
	&m12679_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12660_MI;
extern MethodInfo m12678_MI;
extern MethodInfo m12668_MI;
extern MethodInfo m12669_MI;
extern MethodInfo m12659_MI;
extern MethodInfo m12670_MI;
extern MethodInfo m12671_MI;
extern MethodInfo m12672_MI;
extern MethodInfo m12673_MI;
extern MethodInfo m12661_MI;
extern MethodInfo m12662_MI;
extern MethodInfo m12663_MI;
extern MethodInfo m12664_MI;
extern MethodInfo m12665_MI;
extern MethodInfo m12666_MI;
extern MethodInfo m12667_MI;
extern MethodInfo m12678_MI;
extern MethodInfo m12658_MI;
extern MethodInfo m12651_MI;
extern MethodInfo m12652_MI;
extern MethodInfo m12674_MI;
extern MethodInfo m12675_MI;
extern MethodInfo m12654_MI;
extern MethodInfo m12677_MI;
extern MethodInfo m12653_MI;
extern MethodInfo m12655_MI;
extern MethodInfo m12656_MI;
extern MethodInfo m12657_MI;
extern MethodInfo m12676_MI;
extern MethodInfo m12679_MI;
static MethodInfo* t2336_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12660_MI,
	&m12678_MI,
	&m12668_MI,
	&m12669_MI,
	&m12659_MI,
	&m12670_MI,
	&m12671_MI,
	&m12672_MI,
	&m12673_MI,
	&m12661_MI,
	&m12662_MI,
	&m12663_MI,
	&m12664_MI,
	&m12665_MI,
	&m12666_MI,
	&m12667_MI,
	&m12678_MI,
	&m12658_MI,
	&m12651_MI,
	&m12652_MI,
	&m12674_MI,
	&m12675_MI,
	&m12654_MI,
	&m12677_MI,
	&m12653_MI,
	&m12655_MI,
	&m12656_MI,
	&m12657_MI,
	&m12676_MI,
	&m12679_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t474_TI;
extern TypeInfo t322_TI;
extern TypeInfo t2334_TI;
static TypeInfo* t2336_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t474_TI,
	&t322_TI,
	&t2334_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t474_TI;
extern TypeInfo t322_TI;
extern TypeInfo t2334_TI;
static Il2CppInterfaceOffsetPair t2336_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t474_TI, 20},
	{ &t322_TI, 27},
	{ &t2334_TI, 32},
};
extern MethodInfo m12679_MI;
extern MethodInfo m12711_MI;
extern TypeInfo t303_TI;
extern MethodInfo m27195_MI;
extern MethodInfo m27201_MI;
extern MethodInfo m2126_MI;
extern MethodInfo m27196_MI;
extern MethodInfo m27198_MI;
extern MethodInfo m2129_MI;
static void* t2336_RGCTXData[9] = 
{
	&m12679_MI,
	&m12711_MI,
	&t303_TI,
	&m27195_MI,
	&m27201_MI,
	&m2126_MI,
	&m27196_MI,
	&m27198_MI,
	&m2129_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2336_0_0_0;
extern Il2CppType t2336_1_0_0;
extern TypeInfo t25_TI;
struct t2336;
extern TypeInfo t2336_TI;
extern Il2CppGenericClass t2336_GC;
extern CustomAttributesCache t959__CustomAttributeCache;
TypeInfo t2336_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2336_MIs, t2336_PIs, t2336_FIs, NULL, &t25_TI, NULL, NULL, &t2336_TI, t2336_ITIs, t2336_VT, &t959__CustomAttributeCache, &t2336_TI, &t2336_0_0_0, &t2336_1_0_0, t2336_IOs, &t2336_GC, NULL, NULL, NULL, t2336_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2336), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2339.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2339_TI;

extern TypeInfo t2339_TI;
extern TypeInfo t474_TI;
extern TypeInfo t125_TI;
extern TypeInfo t322_TI;
extern TypeInfo t303_TI;
extern TypeInfo t134_TI;
extern TypeInfo t123_TI;
extern TypeInfo t318_TI;
extern TypeInfo t759_TI;
extern TypeInfo t25_TI;
extern TypeInfo t122_TI;
extern TypeInfo t2334_TI;
extern TypeInfo t2335_TI;
extern TypeInfo t2333_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern TypeInfo t177_TI;
extern TypeInfo t1132_TI;
extern Il2CppType t303_0_0_0;
extern MethodInfo m27192_MI;
extern MethodInfo m12714_MI;
extern MethodInfo m12715_MI;
extern MethodInfo m2126_MI;
extern MethodInfo m12712_MI;
extern MethodInfo m12710_MI;
extern MethodInfo m2129_MI;
extern MethodInfo m452_MI;
extern MethodInfo m2117_MI;
extern MethodInfo m7921_MI;
extern MethodInfo m7922_MI;
extern MethodInfo m27198_MI;
extern MethodInfo m12703_MI;
extern MethodInfo m12711_MI;
extern MethodInfo m27195_MI;
extern MethodInfo m27201_MI;
extern MethodInfo m12713_MI;
extern MethodInfo m12701_MI;
extern MethodInfo m12706_MI;
extern MethodInfo m12697_MI;
extern MethodInfo m27194_MI;
extern MethodInfo m27196_MI;
extern MethodInfo m27202_MI;
extern MethodInfo m27203_MI;
extern MethodInfo m27200_MI;
extern MethodInfo m484_MI;
extern MethodInfo m4337_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m566_MI;
extern MethodInfo m7920_MI;
extern MethodInfo m7923_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Graphic>
extern Il2CppType t322_0_0_1;
FieldInfo t2339_f0_FieldInfo = 
{
	"list", &t322_0_0_1, &t2339_TI, offsetof(t2339, f0), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_1;
FieldInfo t2339_f1_FieldInfo = 
{
	"syncRoot", &t25_0_0_1, &t2339_TI, offsetof(t2339, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2339_FIs[] =
{
	&t2339_f0_FieldInfo,
	&t2339_f1_FieldInfo,
	NULL
};
extern MethodInfo m12681_MI;
static PropertyInfo t2339____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2339_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m12681_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12689_MI;
static PropertyInfo t2339____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2339_TI, "System.Collections.ICollection.IsSynchronized", &m12689_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12690_MI;
static PropertyInfo t2339____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2339_TI, "System.Collections.ICollection.SyncRoot", &m12690_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12691_MI;
static PropertyInfo t2339____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2339_TI, "System.Collections.IList.IsFixedSize", &m12691_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12692_MI;
static PropertyInfo t2339____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2339_TI, "System.Collections.IList.IsReadOnly", &m12692_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12693_MI;
extern MethodInfo m12694_MI;
static PropertyInfo t2339____System_Collections_IList_Item_PropertyInfo = 
{
	&t2339_TI, "System.Collections.IList.Item", &m12693_MI, &m12694_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12707_MI;
static PropertyInfo t2339____Count_PropertyInfo = 
{
	&t2339_TI, "Count", &m12707_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12708_MI;
extern MethodInfo m12709_MI;
static PropertyInfo t2339____Item_PropertyInfo = 
{
	&t2339_TI, "Item", &m12708_MI, &m12709_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2339_PIs[] =
{
	&t2339____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2339____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2339____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2339____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2339____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2339____System_Collections_IList_Item_PropertyInfo,
	&t2339____Count_PropertyInfo,
	&t2339____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12680_MI = 
{
	".ctor", (methodPointerType)&m9382_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2339_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12681_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m9383_gshared, &t2339_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2339_m12682_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12682_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9384_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2339_m12682_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2339_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12683_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9385_gshared, &t2339_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2339_m12684_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12684_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m9386_gshared, &t2339_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2339_m12684_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2339_m12685_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12685_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m9387_gshared, &t2339_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2339_m12685_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2339_m12686_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12686_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m9388_gshared, &t2339_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2339_m12686_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2339_m12687_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12687_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m9389_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2339_m12687_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2339_m12688_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12688_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m9390_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2339_m12688_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2339_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12689_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9391_gshared, &t2339_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2339_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12690_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9392_gshared, &t2339_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2339_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12691_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m9393_gshared, &t2339_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2339_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12692_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m9394_gshared, &t2339_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2339_m12693_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12693_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m9395_gshared, &t2339_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t2339_m12693_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2339_m12694_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12694_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m9396_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2339_m12694_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t2339_m12695_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12695_MI = 
{
	"Add", (methodPointerType)&m9397_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2339_m12695_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12696_MI = 
{
	"Clear", (methodPointerType)&m9398_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12697_MI = 
{
	"ClearItems", (methodPointerType)&m9399_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t2339_m12698_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12698_MI = 
{
	"Contains", (methodPointerType)&m9400_gshared, &t2339_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2339_m12698_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2333_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2339_m12699_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2333_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12699_MI = 
{
	"CopyTo", (methodPointerType)&m9401_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2339_m12699_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2339_TI;
extern Il2CppType t2335_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12700_MI = 
{
	"GetEnumerator", (methodPointerType)&m9402_gshared, &t2339_TI, &t2335_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t2339_m12701_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12701_MI = 
{
	"IndexOf", (methodPointerType)&m9403_gshared, &t2339_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2339_m12701_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t2339_m12702_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12702_MI = 
{
	"Insert", (methodPointerType)&m9404_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2339_m12702_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t2339_m12703_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12703_MI = 
{
	"InsertItem", (methodPointerType)&m9405_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2339_m12703_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t2339_m12704_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12704_MI = 
{
	"Remove", (methodPointerType)&m9406_gshared, &t2339_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2339_m12704_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2339_m12705_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12705_MI = 
{
	"RemoveAt", (methodPointerType)&m9407_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2339_m12705_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2339_m12706_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12706_MI = 
{
	"RemoveItem", (methodPointerType)&m9408_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2339_m12706_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2339_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12707_MI = 
{
	"get_Count", (methodPointerType)&m9409_gshared, &t2339_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2339_m12708_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12708_MI = 
{
	"get_Item", (methodPointerType)&m9410_gshared, &t2339_TI, &t303_0_0_0, RuntimeInvoker_t25_t134, t2339_m12708_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t2339_m12709_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12709_MI = 
{
	"set_Item", (methodPointerType)&m9411_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2339_m12709_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t2339_m12710_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12710_MI = 
{
	"SetItem", (methodPointerType)&m9412_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t2339_m12710_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2339_m12711_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12711_MI = 
{
	"IsValidItem", (methodPointerType)&m9413_gshared, &t2339_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2339_m12711_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2339_m12712_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12712_MI = 
{
	"ConvertItem", (methodPointerType)&m9414_gshared, &t2339_TI, &t303_0_0_0, RuntimeInvoker_t25_t25, t2339_m12712_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t322_0_0_0;
static ParameterInfo t2339_m12713_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t322_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12713_MI = 
{
	"CheckWritable", (methodPointerType)&m9415_gshared, &t2339_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2339_m12713_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t322_0_0_0;
static ParameterInfo t2339_m12714_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t322_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12714_MI = 
{
	"IsSynchronized", (methodPointerType)&m9416_gshared, &t2339_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2339_m12714_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t322_0_0_0;
static ParameterInfo t2339_m12715_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t322_0_0_0},
};
extern TypeInfo t2339_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12715_MI = 
{
	"IsFixedSize", (methodPointerType)&m9417_gshared, &t2339_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2339_m12715_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2339_MIs[] =
{
	&m12680_MI,
	&m12681_MI,
	&m12682_MI,
	&m12683_MI,
	&m12684_MI,
	&m12685_MI,
	&m12686_MI,
	&m12687_MI,
	&m12688_MI,
	&m12689_MI,
	&m12690_MI,
	&m12691_MI,
	&m12692_MI,
	&m12693_MI,
	&m12694_MI,
	&m12695_MI,
	&m12696_MI,
	&m12697_MI,
	&m12698_MI,
	&m12699_MI,
	&m12700_MI,
	&m12701_MI,
	&m12702_MI,
	&m12703_MI,
	&m12704_MI,
	&m12705_MI,
	&m12706_MI,
	&m12707_MI,
	&m12708_MI,
	&m12709_MI,
	&m12710_MI,
	&m12711_MI,
	&m12712_MI,
	&m12713_MI,
	&m12714_MI,
	&m12715_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12683_MI;
extern MethodInfo m12707_MI;
extern MethodInfo m12689_MI;
extern MethodInfo m12690_MI;
extern MethodInfo m12682_MI;
extern MethodInfo m12691_MI;
extern MethodInfo m12692_MI;
extern MethodInfo m12693_MI;
extern MethodInfo m12694_MI;
extern MethodInfo m12684_MI;
extern MethodInfo m12696_MI;
extern MethodInfo m12685_MI;
extern MethodInfo m12686_MI;
extern MethodInfo m12687_MI;
extern MethodInfo m12688_MI;
extern MethodInfo m12705_MI;
extern MethodInfo m12707_MI;
extern MethodInfo m12681_MI;
extern MethodInfo m12695_MI;
extern MethodInfo m12696_MI;
extern MethodInfo m12698_MI;
extern MethodInfo m12699_MI;
extern MethodInfo m12704_MI;
extern MethodInfo m12701_MI;
extern MethodInfo m12702_MI;
extern MethodInfo m12705_MI;
extern MethodInfo m12708_MI;
extern MethodInfo m12709_MI;
extern MethodInfo m12700_MI;
extern MethodInfo m12697_MI;
extern MethodInfo m12703_MI;
extern MethodInfo m12706_MI;
extern MethodInfo m12710_MI;
static MethodInfo* t2339_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12683_MI,
	&m12707_MI,
	&m12689_MI,
	&m12690_MI,
	&m12682_MI,
	&m12691_MI,
	&m12692_MI,
	&m12693_MI,
	&m12694_MI,
	&m12684_MI,
	&m12696_MI,
	&m12685_MI,
	&m12686_MI,
	&m12687_MI,
	&m12688_MI,
	&m12705_MI,
	&m12707_MI,
	&m12681_MI,
	&m12695_MI,
	&m12696_MI,
	&m12698_MI,
	&m12699_MI,
	&m12704_MI,
	&m12701_MI,
	&m12702_MI,
	&m12705_MI,
	&m12708_MI,
	&m12709_MI,
	&m12700_MI,
	&m12697_MI,
	&m12703_MI,
	&m12706_MI,
	&m12710_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t474_TI;
extern TypeInfo t322_TI;
extern TypeInfo t2334_TI;
static TypeInfo* t2339_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t1132_TI,
	&t474_TI,
	&t322_TI,
	&t2334_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t474_TI;
extern TypeInfo t322_TI;
extern TypeInfo t2334_TI;
static Il2CppInterfaceOffsetPair t2339_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t1132_TI, 9},
	{ &t474_TI, 20},
	{ &t322_TI, 27},
	{ &t2334_TI, 32},
};
extern TypeInfo t318_TI;
extern MethodInfo m2117_MI;
extern MethodInfo m27192_MI;
extern MethodInfo m27198_MI;
extern MethodInfo m2129_MI;
extern MethodInfo m12712_MI;
extern MethodInfo m12703_MI;
extern MethodInfo m12711_MI;
extern TypeInfo t303_TI;
extern MethodInfo m27195_MI;
extern MethodInfo m27201_MI;
extern MethodInfo m12713_MI;
extern MethodInfo m12701_MI;
extern MethodInfo m12706_MI;
extern MethodInfo m12714_MI;
extern MethodInfo m12715_MI;
extern MethodInfo m2126_MI;
extern MethodInfo m12710_MI;
extern MethodInfo m12697_MI;
extern MethodInfo m27194_MI;
extern MethodInfo m27196_MI;
extern MethodInfo m27202_MI;
extern MethodInfo m27203_MI;
extern MethodInfo m27200_MI;
extern Il2CppType t303_0_0_0;
static void* t2339_RGCTXData[25] = 
{
	&t318_TI,
	&m2117_MI,
	&m27192_MI,
	&m27198_MI,
	&m2129_MI,
	&m12712_MI,
	&m12703_MI,
	&m12711_MI,
	&t303_TI,
	&m27195_MI,
	&m27201_MI,
	&m12713_MI,
	&m12701_MI,
	&m12706_MI,
	&m12714_MI,
	&m12715_MI,
	&m2126_MI,
	&m12710_MI,
	&m12697_MI,
	&m27194_MI,
	&m27196_MI,
	&m27202_MI,
	&m27203_MI,
	&m27200_MI,
	(void*)&t303_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2339_0_0_0;
extern Il2CppType t2339_1_0_0;
extern TypeInfo t25_TI;
struct t2339;
extern TypeInfo t2339_TI;
extern Il2CppGenericClass t2339_GC;
extern CustomAttributesCache t958__CustomAttributeCache;
TypeInfo t2339_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2339_MIs, t2339_PIs, t2339_FIs, NULL, &t25_TI, NULL, NULL, &t2339_TI, t2339_ITIs, t2339_VT, &t958__CustomAttributeCache, &t2339_TI, &t2339_0_0_0, &t2339_1_0_0, t2339_IOs, &t2339_GC, NULL, NULL, NULL, t2339_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2339), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2340_TI;
#include "t2340MD.h"

#include "t2341.h"
extern TypeInfo t2340_TI;
extern TypeInfo t5843_TI;
extern TypeInfo t131_TI;
extern TypeInfo t303_TI;
extern TypeInfo t125_TI;
extern TypeInfo t953_TI;
extern TypeInfo t637_TI;
extern TypeInfo t2341_TI;
extern TypeInfo t134_TI;
#include "t2341MD.h"
extern Il2CppType t5843_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t953_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m12721_MI;
extern MethodInfo m27313_MI;
extern MethodInfo m20236_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Graphic>
extern Il2CppType t2340_0_0_49;
FieldInfo t2340_f0_FieldInfo = 
{
	"_default", &t2340_0_0_49, &t2340_TI, offsetof(t2340_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2340_FIs[] =
{
	&t2340_f0_FieldInfo,
	NULL
};
extern MethodInfo m12720_MI;
static PropertyInfo t2340____Default_PropertyInfo = 
{
	&t2340_TI, "Default", &m12720_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2340_PIs[] =
{
	&t2340____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2340_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12716_MI = 
{
	".ctor", (methodPointerType)&m8967_gshared, &t2340_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2340_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12717_MI = 
{
	".cctor", (methodPointerType)&m8968_gshared, &t2340_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2340_m12718_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2340_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12718_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8969_gshared, &t2340_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2340_m12718_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2340_m12719_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2340_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12719_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8970_gshared, &t2340_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2340_m12719_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t2340_m27313_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2340_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27313_MI = 
{
	"GetHashCode", NULL, &t2340_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2340_m27313_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t2340_m20236_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2340_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20236_MI = 
{
	"Equals", NULL, &t2340_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2340_m20236_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2340_TI;
extern Il2CppType t2340_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12720_MI = 
{
	"get_Default", (methodPointerType)&m8971_gshared, &t2340_TI, &t2340_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2340_MIs[] =
{
	&m12716_MI,
	&m12717_MI,
	&m12718_MI,
	&m12719_MI,
	&m27313_MI,
	&m20236_MI,
	&m12720_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m20236_MI;
extern MethodInfo m27313_MI;
extern MethodInfo m12719_MI;
extern MethodInfo m12718_MI;
static MethodInfo* t2340_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m20236_MI,
	&m27313_MI,
	&m12719_MI,
	&m12718_MI,
	NULL,
	NULL,
};
extern TypeInfo t2353_TI;
extern TypeInfo t977_TI;
static TypeInfo* t2340_ITIs[] = 
{
	&t2353_TI,
	&t977_TI,
};
extern TypeInfo t2353_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t2340_IOs[] = 
{
	{ &t2353_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppType t5843_0_0_0;
extern Il2CppType t303_0_0_0;
extern TypeInfo t2340_TI;
extern TypeInfo t2340_TI;
extern TypeInfo t2341_TI;
extern MethodInfo m12721_MI;
extern TypeInfo t303_TI;
extern MethodInfo m27313_MI;
extern MethodInfo m20236_MI;
static void* t2340_RGCTXData[9] = 
{
	(void*)&t5843_0_0_0,
	(void*)&t303_0_0_0,
	&t2340_TI,
	&t2340_TI,
	&t2341_TI,
	&m12721_MI,
	&t303_TI,
	&m27313_MI,
	&m20236_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2340_0_0_0;
extern Il2CppType t2340_1_0_0;
extern TypeInfo t25_TI;
struct t2340;
extern TypeInfo t2340_TI;
extern Il2CppGenericClass t2340_GC;
TypeInfo t2340_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2340_MIs, t2340_PIs, t2340_FIs, NULL, &t25_TI, NULL, NULL, &t2340_TI, t2340_ITIs, t2340_VT, &EmptyCustomAttributesCache, &t2340_TI, &t2340_0_0_0, &t2340_1_0_0, t2340_IOs, &t2340_GC, NULL, NULL, NULL, t2340_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2340), 0, -1, sizeof(t2340_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2353_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Graphic>
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t2353_m27314_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2353_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27314_MI = 
{
	"Equals", NULL, &t2353_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2353_m27314_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t2353_m27315_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2353_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27315_MI = 
{
	"GetHashCode", NULL, &t2353_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2353_m27315_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2353_MIs[] =
{
	&m27314_MI,
	&m27315_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2353_0_0_0;
extern Il2CppType t2353_1_0_0;
struct t2353;
extern TypeInfo t2353_TI;
extern Il2CppGenericClass t2353_GC;
TypeInfo t2353_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t2353_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2353_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2353_TI, &t2353_0_0_0, &t2353_1_0_0, NULL, &t2353_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5843_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.UI.Graphic>
extern Il2CppType t303_0_0_0;
static ParameterInfo t5843_m27316_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t5843_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27316_MI = 
{
	"Equals", NULL, &t5843_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5843_m27316_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5843_MIs[] =
{
	&m27316_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5843_0_0_0;
extern Il2CppType t5843_1_0_0;
struct t5843;
extern TypeInfo t5843_TI;
extern Il2CppGenericClass t5843_GC;
TypeInfo t5843_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5843_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5843_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5843_TI, &t5843_0_0_0, &t5843_1_0_0, NULL, &t5843_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2341_TI;

extern TypeInfo t303_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t125_TI;
extern MethodInfo m12716_MI;
extern MethodInfo m456_MI;
extern MethodInfo m455_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Graphic>
extern TypeInfo t2341_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12721_MI = 
{
	".ctor", (methodPointerType)&m9002_gshared, &t2341_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t2341_m12722_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2341_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12722_MI = 
{
	"GetHashCode", (methodPointerType)&m9003_gshared, &t2341_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2341_m12722_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t2341_m12723_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2341_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12723_MI = 
{
	"Equals", (methodPointerType)&m9004_gshared, &t2341_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2341_m12723_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2341_MIs[] =
{
	&m12721_MI,
	&m12722_MI,
	&m12723_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12723_MI;
extern MethodInfo m12722_MI;
extern MethodInfo m12719_MI;
extern MethodInfo m12718_MI;
extern MethodInfo m12722_MI;
extern MethodInfo m12723_MI;
static MethodInfo* t2341_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12723_MI,
	&m12722_MI,
	&m12719_MI,
	&m12718_MI,
	&m12722_MI,
	&m12723_MI,
};
extern TypeInfo t2353_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t2341_IOs[] = 
{
	{ &t2353_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppType t5843_0_0_0;
extern Il2CppType t303_0_0_0;
extern TypeInfo t2340_TI;
extern TypeInfo t2340_TI;
extern TypeInfo t2341_TI;
extern MethodInfo m12721_MI;
extern TypeInfo t303_TI;
extern MethodInfo m27313_MI;
extern MethodInfo m20236_MI;
extern MethodInfo m12716_MI;
extern TypeInfo t303_TI;
static void* t2341_RGCTXData[11] = 
{
	(void*)&t5843_0_0_0,
	(void*)&t303_0_0_0,
	&t2340_TI,
	&t2340_TI,
	&t2341_TI,
	&m12721_MI,
	&t303_TI,
	&m27313_MI,
	&m20236_MI,
	&m12716_MI,
	&t303_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2341_0_0_0;
extern Il2CppType t2341_1_0_0;
extern TypeInfo t2340_TI;
struct t2341;
extern TypeInfo t2341_TI;
extern Il2CppGenericClass t2341_GC;
extern TypeInfo t952_TI;
TypeInfo t2341_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2341_MIs, NULL, NULL, NULL, &t2340_TI, NULL, &t952_TI, &t2341_TI, NULL, t2341_VT, &EmptyCustomAttributesCache, &t2341_TI, &t2341_0_0_0, &t2341_1_0_0, t2341_IOs, &t2341_GC, NULL, NULL, NULL, t2341_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2341), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2337_TI;



// Metadata Definition System.Predicate`1<UnityEngine.UI.Graphic>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2337_m12724_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2337_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m12724_MI = 
{
	".ctor", (methodPointerType)&m9418_gshared, &t2337_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2337_m12724_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t2337_m12725_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2337_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12725_MI = 
{
	"Invoke", (methodPointerType)&m9419_gshared, &t2337_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2337_m12725_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2337_m12726_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2337_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12726_MI = 
{
	"BeginInvoke", (methodPointerType)&m9420_gshared, &t2337_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t2337_m12726_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2337_m12727_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2337_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12727_MI = 
{
	"EndInvoke", (methodPointerType)&m9421_gshared, &t2337_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2337_m12727_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2337_MIs[] =
{
	&m12724_MI,
	&m12725_MI,
	&m12726_MI,
	&m12727_MI,
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
extern MethodInfo m12725_MI;
extern MethodInfo m12726_MI;
extern MethodInfo m12727_MI;
static MethodInfo* t2337_VT[] =
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
	&m12725_MI,
	&m12726_MI,
	&m12727_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2337_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2337_0_0_0;
extern Il2CppType t2337_1_0_0;
extern TypeInfo t345_TI;
struct t2337;
extern TypeInfo t2337_TI;
extern Il2CppGenericClass t2337_GC;
TypeInfo t2337_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2337_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t2337_TI, NULL, t2337_VT, &EmptyCustomAttributesCache, &t2337_TI, &t2337_0_0_0, &t2337_1_0_0, t2337_IOs, &t2337_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2337), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2342_TI;

#include "t2343.h"
extern TypeInfo t2342_TI;
extern TypeInfo t3825_TI;
extern TypeInfo t131_TI;
extern TypeInfo t303_TI;
extern TypeInfo t125_TI;
extern TypeInfo t941_TI;
extern TypeInfo t637_TI;
extern TypeInfo t2343_TI;
extern TypeInfo t134_TI;
extern TypeInfo t445_TI;
#include "t2343MD.h"
extern Il2CppType t3825_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t941_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m12732_MI;
extern MethodInfo m27317_MI;
extern MethodInfo m6988_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.UI.Graphic>
extern Il2CppType t2342_0_0_49;
FieldInfo t2342_f0_FieldInfo = 
{
	"_default", &t2342_0_0_49, &t2342_TI, offsetof(t2342_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2342_FIs[] =
{
	&t2342_f0_FieldInfo,
	NULL
};
extern MethodInfo m12731_MI;
static PropertyInfo t2342____Default_PropertyInfo = 
{
	&t2342_TI, "Default", &m12731_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2342_PIs[] =
{
	&t2342____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2342_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12728_MI = 
{
	".ctor", (methodPointerType)&m9422_gshared, &t2342_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2342_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12729_MI = 
{
	".cctor", (methodPointerType)&m9423_gshared, &t2342_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2342_m12730_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2342_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12730_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m9424_gshared, &t2342_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2342_m12730_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t2342_m27317_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2342_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27317_MI = 
{
	"Compare", NULL, &t2342_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2342_m27317_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2342_TI;
extern Il2CppType t2342_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12731_MI = 
{
	"get_Default", (methodPointerType)&m9425_gshared, &t2342_TI, &t2342_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2342_MIs[] =
{
	&m12728_MI,
	&m12729_MI,
	&m12730_MI,
	&m27317_MI,
	&m12731_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m27317_MI;
extern MethodInfo m12730_MI;
static MethodInfo* t2342_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m27317_MI,
	&m12730_MI,
	NULL,
};
extern TypeInfo t3824_TI;
extern TypeInfo t147_TI;
static TypeInfo* t2342_ITIs[] = 
{
	&t3824_TI,
	&t147_TI,
};
extern TypeInfo t3824_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t2342_IOs[] = 
{
	{ &t3824_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppType t3825_0_0_0;
extern Il2CppType t303_0_0_0;
extern TypeInfo t2342_TI;
extern TypeInfo t2342_TI;
extern TypeInfo t2343_TI;
extern MethodInfo m12732_MI;
extern TypeInfo t303_TI;
extern MethodInfo m27317_MI;
static void* t2342_RGCTXData[8] = 
{
	(void*)&t3825_0_0_0,
	(void*)&t303_0_0_0,
	&t2342_TI,
	&t2342_TI,
	&t2343_TI,
	&m12732_MI,
	&t303_TI,
	&m27317_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2342_0_0_0;
extern Il2CppType t2342_1_0_0;
extern TypeInfo t25_TI;
struct t2342;
extern TypeInfo t2342_TI;
extern Il2CppGenericClass t2342_GC;
TypeInfo t2342_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2342_MIs, t2342_PIs, t2342_FIs, NULL, &t25_TI, NULL, NULL, &t2342_TI, t2342_ITIs, t2342_VT, &EmptyCustomAttributesCache, &t2342_TI, &t2342_0_0_0, &t2342_1_0_0, t2342_IOs, &t2342_GC, NULL, NULL, NULL, t2342_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2342), 0, -1, sizeof(t2342_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3824_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UI.Graphic>
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t3824_m20244_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t3824_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20244_MI = 
{
	"Compare", NULL, &t3824_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t3824_m20244_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3824_MIs[] =
{
	&m20244_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3824_0_0_0;
extern Il2CppType t3824_1_0_0;
struct t3824;
extern TypeInfo t3824_TI;
extern Il2CppGenericClass t3824_GC;
TypeInfo t3824_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3824_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3824_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3824_TI, &t3824_0_0_0, &t3824_1_0_0, NULL, &t3824_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3825_TI;



// Metadata Definition System.IComparable`1<UnityEngine.UI.Graphic>
extern Il2CppType t303_0_0_0;
static ParameterInfo t3825_m20245_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t3825_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m20245_MI = 
{
	"CompareTo", NULL, &t3825_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t3825_m20245_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3825_MIs[] =
{
	&m20245_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3825_0_0_0;
extern Il2CppType t3825_1_0_0;
struct t3825;
extern TypeInfo t3825_TI;
extern Il2CppGenericClass t3825_GC;
TypeInfo t3825_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3825_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3825_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3825_TI, &t3825_0_0_0, &t3825_1_0_0, NULL, &t3825_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2343_TI;

extern TypeInfo t303_TI;
extern TypeInfo t3825_TI;
extern TypeInfo t134_TI;
extern TypeInfo t143_TI;
extern TypeInfo t25_TI;
extern TypeInfo t445_TI;
extern MethodInfo m12728_MI;
extern MethodInfo m20245_MI;
extern MethodInfo m7828_MI;
extern MethodInfo m2409_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Graphic>
extern TypeInfo t2343_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12732_MI = 
{
	".ctor", (methodPointerType)&m9426_gshared, &t2343_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t2343_m12733_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2343_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12733_MI = 
{
	"Compare", (methodPointerType)&m9427_gshared, &t2343_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t2343_m12733_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2343_MIs[] =
{
	&m12732_MI,
	&m12733_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12733_MI;
extern MethodInfo m12730_MI;
extern MethodInfo m12733_MI;
static MethodInfo* t2343_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12733_MI,
	&m12730_MI,
	&m12733_MI,
};
extern TypeInfo t3824_TI;
extern TypeInfo t147_TI;
static Il2CppInterfaceOffsetPair t2343_IOs[] = 
{
	{ &t3824_TI, 4},
	{ &t147_TI, 5},
};
extern Il2CppType t3825_0_0_0;
extern Il2CppType t303_0_0_0;
extern TypeInfo t2342_TI;
extern TypeInfo t2342_TI;
extern TypeInfo t2343_TI;
extern MethodInfo m12732_MI;
extern TypeInfo t303_TI;
extern MethodInfo m27317_MI;
extern MethodInfo m12728_MI;
extern TypeInfo t303_TI;
extern TypeInfo t3825_TI;
extern MethodInfo m20245_MI;
static void* t2343_RGCTXData[12] = 
{
	(void*)&t3825_0_0_0,
	(void*)&t303_0_0_0,
	&t2342_TI,
	&t2342_TI,
	&t2343_TI,
	&m12732_MI,
	&t303_TI,
	&m27317_MI,
	&m12728_MI,
	&t303_TI,
	&t3825_TI,
	&m20245_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2343_0_0_0;
extern Il2CppType t2343_1_0_0;
extern TypeInfo t2342_TI;
struct t2343;
extern TypeInfo t2343_TI;
extern Il2CppGenericClass t2343_GC;
extern TypeInfo t940_TI;
TypeInfo t2343_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2343_MIs, NULL, NULL, NULL, &t2342_TI, NULL, &t940_TI, &t2343_TI, NULL, t2343_VT, &EmptyCustomAttributesCache, &t2343_TI, &t2343_0_0_0, &t2343_1_0_0, t2343_IOs, &t2343_GC, NULL, NULL, NULL, t2343_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2343), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t319_TI;
#include "t319MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.UI.Graphic>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t319_m2130_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t319_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m2130_MI = 
{
	".ctor", (methodPointerType)&m9458_gshared, &t319_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t319_m2130_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t319_m12734_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t319_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12734_MI = 
{
	"Invoke", (methodPointerType)&m9459_gshared, &t319_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t25, t319_m12734_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t319_m12735_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t319_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12735_MI = 
{
	"BeginInvoke", (methodPointerType)&m9460_gshared, &t319_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25_t25, t319_m12735_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t319_m12736_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t319_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12736_MI = 
{
	"EndInvoke", (methodPointerType)&m9461_gshared, &t319_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t319_m12736_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t319_MIs[] =
{
	&m2130_MI,
	&m12734_MI,
	&m12735_MI,
	&m12736_MI,
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
extern MethodInfo m12734_MI;
extern MethodInfo m12735_MI;
extern MethodInfo m12736_MI;
static MethodInfo* t319_VT[] =
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
	&m12734_MI,
	&m12735_MI,
	&m12736_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t319_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t319_0_0_0;
extern Il2CppType t319_1_0_0;
extern TypeInfo t345_TI;
struct t319;
extern TypeInfo t319_TI;
extern Il2CppGenericClass t319_GC;
TypeInfo t319_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t319_MIs, NULL, NULL, NULL, &t345_TI, NULL, NULL, &t319_TI, NULL, t319_VT, &EmptyCustomAttributesCache, &t319_TI, &t319_0_0_0, &t319_1_0_0, t319_IOs, &t319_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t319), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3826_TI;

#include "t316.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.GraphicRaycaster/BlockingObjects>
extern MethodInfo m27318_MI;
static PropertyInfo t3826____Current_PropertyInfo = 
{
	&t3826_TI, "Current", &m27318_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3826_PIs[] =
{
	&t3826____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3826_TI;
extern Il2CppType t316_0_0_0;
extern void* RuntimeInvoker_t316 (MethodInfo* method, void* obj, void** args);
MethodInfo m27318_MI = 
{
	"get_Current", NULL, &t3826_TI, &t316_0_0_0, RuntimeInvoker_t316, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3826_MIs[] =
{
	&m27318_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t3826_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3826_0_0_0;
extern Il2CppType t3826_1_0_0;
struct t3826;
extern TypeInfo t3826_TI;
extern Il2CppGenericClass t3826_GC;
TypeInfo t3826_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3826_MIs, t3826_PIs, NULL, NULL, NULL, NULL, NULL, &t3826_TI, t3826_ITIs, NULL, &EmptyCustomAttributesCache, &t3826_TI, &t3826_0_0_0, &t3826_1_0_0, NULL, &t3826_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2344.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2344_TI;
#include "t2344MD.h"

extern TypeInfo t2344_TI;
extern TypeInfo t316_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m12741_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20250_MI;
struct t122;
 int32_t m20250 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20250_MI;


extern MethodInfo m12737_MI;
 void m12737 (t2344 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12737_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12738_MI;
 t25 * m12738 (t2344 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12738_MI);
	{
		int32_t L_0 = m12741(__this, &m12741_MI);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t316_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12739_MI;
 void m12739 (t2344 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12739_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12740_MI;
 bool m12740 (t2344 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12740_MI);
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
extern MethodInfo m12741_MI;
 int32_t m12741 (t2344 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12741_MI);
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
		int32_t L_8 = m20250(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20250_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.GraphicRaycaster/BlockingObjects>
extern Il2CppType t122_0_0_1;
FieldInfo t2344_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2344_TI, offsetof(t2344, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2344_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2344_TI, offsetof(t2344, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2344_FIs[] =
{
	&t2344_f0_FieldInfo,
	&t2344_f1_FieldInfo,
	NULL
};
extern MethodInfo m12738_MI;
static PropertyInfo t2344____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2344_TI, "System.Collections.IEnumerator.Current", &m12738_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12741_MI;
static PropertyInfo t2344____Current_PropertyInfo = 
{
	&t2344_TI, "Current", &m12741_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2344_PIs[] =
{
	&t2344____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2344____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2344_m12737_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2344_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12737_MI = 
{
	".ctor", (methodPointerType)&m12737, &t2344_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2344_m12737_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2344_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12738_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12738, &t2344_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2344_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12739_MI = 
{
	"Dispose", (methodPointerType)&m12739, &t2344_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2344_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12740_MI = 
{
	"MoveNext", (methodPointerType)&m12740, &t2344_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2344_TI;
extern Il2CppType t316_0_0_0;
extern void* RuntimeInvoker_t316 (MethodInfo* method, void* obj, void** args);
MethodInfo m12741_MI = 
{
	"get_Current", (methodPointerType)&m12741, &t2344_TI, &t316_0_0_0, RuntimeInvoker_t316, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2344_MIs[] =
{
	&m12737_MI,
	&m12738_MI,
	&m12739_MI,
	&m12740_MI,
	&m12741_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m12738_MI;
extern MethodInfo m12740_MI;
extern MethodInfo m12739_MI;
extern MethodInfo m12741_MI;
static MethodInfo* t2344_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m12738_MI,
	&m12740_MI,
	&m12739_MI,
	&m12741_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3826_TI;
static TypeInfo* t2344_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t3826_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t3826_TI;
static Il2CppInterfaceOffsetPair t2344_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t3826_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2344_0_0_0;
extern Il2CppType t2344_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2344_TI;
extern Il2CppGenericClass t2344_GC;
extern TypeInfo t122_TI;
TypeInfo t2344_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2344_MIs, t2344_PIs, t2344_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2344_TI, t2344_ITIs, t2344_VT, &EmptyCustomAttributesCache, &t2344_TI, &t2344_0_0_0, &t2344_1_0_0, t2344_IOs, &t2344_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2344)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4667_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.GraphicRaycaster/BlockingObjects>
extern MethodInfo m27319_MI;
static PropertyInfo t4667____Count_PropertyInfo = 
{
	&t4667_TI, "Count", &m27319_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27320_MI;
static PropertyInfo t4667____IsReadOnly_PropertyInfo = 
{
	&t4667_TI, "IsReadOnly", &m27320_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4667_PIs[] =
{
	&t4667____Count_PropertyInfo,
	&t4667____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4667_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27319_MI = 
{
	"get_Count", NULL, &t4667_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4667_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27320_MI = 
{
	"get_IsReadOnly", NULL, &t4667_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t316_0_0_0;
static ParameterInfo t4667_m27321_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern TypeInfo t4667_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27321_MI = 
{
	"Add", NULL, &t4667_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4667_m27321_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4667_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27322_MI = 
{
	"Clear", NULL, &t4667_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t316_0_0_0;
static ParameterInfo t4667_m27323_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern TypeInfo t4667_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27323_MI = 
{
	"Contains", NULL, &t4667_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4667_m27323_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3599_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4667_m27324_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3599_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4667_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27324_MI = 
{
	"CopyTo", NULL, &t4667_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4667_m27324_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t316_0_0_0;
static ParameterInfo t4667_m27325_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern TypeInfo t4667_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27325_MI = 
{
	"Remove", NULL, &t4667_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t4667_m27325_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4667_MIs[] =
{
	&m27319_MI,
	&m27320_MI,
	&m27321_MI,
	&m27322_MI,
	&m27323_MI,
	&m27324_MI,
	&m27325_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4669_TI;
static TypeInfo* t4667_ITIs[] = 
{
	&t703_TI,
	&t4669_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4667_0_0_0;
extern Il2CppType t4667_1_0_0;
struct t4667;
extern TypeInfo t4667_TI;
extern Il2CppGenericClass t4667_GC;
TypeInfo t4667_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4667_MIs, t4667_PIs, NULL, NULL, NULL, NULL, NULL, &t4667_TI, t4667_ITIs, NULL, &EmptyCustomAttributesCache, &t4667_TI, &t4667_0_0_0, &t4667_1_0_0, NULL, &t4667_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4669_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.GraphicRaycaster/BlockingObjects>
extern TypeInfo t4669_TI;
extern Il2CppType t3826_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27326_MI = 
{
	"GetEnumerator", NULL, &t4669_TI, &t3826_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4669_MIs[] =
{
	&m27326_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4669_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4669_0_0_0;
extern Il2CppType t4669_1_0_0;
struct t4669;
extern TypeInfo t4669_TI;
extern Il2CppGenericClass t4669_GC;
TypeInfo t4669_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4669_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4669_TI, t4669_ITIs, NULL, &EmptyCustomAttributesCache, &t4669_TI, &t4669_0_0_0, &t4669_1_0_0, NULL, &t4669_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4668_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.GraphicRaycaster/BlockingObjects>
extern MethodInfo m27327_MI;
extern MethodInfo m27328_MI;
static PropertyInfo t4668____Item_PropertyInfo = 
{
	&t4668_TI, "Item", &m27327_MI, &m27328_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4668_PIs[] =
{
	&t4668____Item_PropertyInfo,
	NULL
};
extern Il2CppType t316_0_0_0;
static ParameterInfo t4668_m27329_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern TypeInfo t4668_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27329_MI = 
{
	"IndexOf", NULL, &t4668_TI, &t134_0_0_0, RuntimeInvoker_t134_t134, t4668_m27329_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t316_0_0_0;
static ParameterInfo t4668_m27330_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern TypeInfo t4668_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27330_MI = 
{
	"Insert", NULL, &t4668_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4668_m27330_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4668_m27331_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4668_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27331_MI = 
{
	"RemoveAt", NULL, &t4668_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4668_m27331_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4668_m27327_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4668_TI;
extern Il2CppType t316_0_0_0;
extern void* RuntimeInvoker_t316_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27327_MI = 
{
	"get_Item", NULL, &t4668_TI, &t316_0_0_0, RuntimeInvoker_t316_t134, t4668_m27327_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t316_0_0_0;
static ParameterInfo t4668_m27328_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern TypeInfo t4668_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27328_MI = 
{
	"set_Item", NULL, &t4668_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t4668_m27328_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4668_MIs[] =
{
	&m27329_MI,
	&m27330_MI,
	&m27331_MI,
	&m27327_MI,
	&m27328_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4667_TI;
extern TypeInfo t4669_TI;
static TypeInfo* t4668_ITIs[] = 
{
	&t703_TI,
	&t4667_TI,
	&t4669_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4668_0_0_0;
extern Il2CppType t4668_1_0_0;
struct t4668;
extern TypeInfo t4668_TI;
extern Il2CppGenericClass t4668_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4668_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4668_MIs, t4668_PIs, NULL, NULL, NULL, NULL, NULL, &t4668_TI, t4668_ITIs, NULL, &t1518__CustomAttributeCache, &t4668_TI, &t4668_0_0_0, &t4668_1_0_0, NULL, &t4668_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t321.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t321_TI;
#include "t321MD.h"

#include "t477.h"
#include "t942.h"
#include "t954.h"
#include "t2348.h"
#include "t823.h"
#include "t824.h"
#include "t2350.h"
#include "t944.h"
#include "t2347.h"
#include "t2370.h"
#include "t2352.h"
#include "t2371.h"
#include "t2372.h"
extern TypeInfo t321_TI;
extern TypeInfo t123_TI;
extern TypeInfo t309_TI;
extern TypeInfo t477_TI;
extern TypeInfo t165_TI;
extern TypeInfo t2346_TI;
extern TypeInfo t134_TI;
extern TypeInfo t942_TI;
extern TypeInfo t125_TI;
extern TypeInfo t954_TI;
extern TypeInfo t2348_TI;
extern TypeInfo t2349_TI;
extern TypeInfo t2350_TI;
extern TypeInfo t3293_TI;
extern TypeInfo t944_TI;
extern TypeInfo t2347_TI;
extern TypeInfo t2370_TI;
extern TypeInfo t2352_TI;
extern TypeInfo t2371_TI;
extern TypeInfo t1351_TI;
extern TypeInfo t2325_TI;
extern TypeInfo t822_TI;
extern TypeInfo t1568_TI;
extern TypeInfo t2314_TI;
extern TypeInfo t2345_TI;
extern TypeInfo t445_TI;
extern TypeInfo t972_TI;
extern TypeInfo t2372_TI;
extern TypeInfo t5844_TI;
extern TypeInfo t131_TI;
extern TypeInfo t27_TI;
#include "t954MD.h"
#include "t2348MD.h"
#include "t2350MD.h"
#include "t2347MD.h"
#include "t2370MD.h"
#include "t2352MD.h"
#include "t2371MD.h"
#include "t972MD.h"
#include "t2372MD.h"
#include "t823MD.h"
#include "t27MD.h"
#include "t944MD.h"
extern Il2CppType t2346_0_0_0;
extern Il2CppType t2349_0_0_0;
extern Il2CppType t309_0_0_0;
extern Il2CppType t477_0_0_0;
extern MethodInfo m12774_MI;
extern MethodInfo m12775_MI;
extern MethodInfo m12759_MI;
extern MethodInfo m489_MI;
extern MethodInfo m27296_MI;
extern MethodInfo m27295_MI;
extern MethodInfo m4772_MI;
extern MethodInfo m12766_MI;
extern MethodInfo m12907_MI;
extern MethodInfo m452_MI;
extern MethodInfo m12760_MI;
extern MethodInfo m12780_MI;
extern MethodInfo m12782_MI;
extern MethodInfo m2136_MI;
extern MethodInfo m12776_MI;
extern MethodInfo m12765_MI;
extern MethodInfo m12772_MI;
extern MethodInfo m12762_MI;
extern MethodInfo m12778_MI;
extern MethodInfo m12941_MI;
extern MethodInfo m20303_MI;
extern MethodInfo m12763_MI;
extern MethodInfo m12945_MI;
extern MethodInfo m20305_MI;
extern MethodInfo m12926_MI;
extern MethodInfo m12949_MI;
extern MethodInfo m6999_MI;
extern MethodInfo m12567_MI;
extern MethodInfo m12761_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m12757_MI;
extern MethodInfo m12779_MI;
extern MethodInfo m20306_MI;
extern MethodInfo m4935_MI;
extern MethodInfo m4283_MI;
extern MethodInfo m4279_MI;
extern MethodInfo m12958_MI;
extern MethodInfo m27332_MI;
extern MethodInfo m6265_MI;
extern MethodInfo m6271_MI;
extern MethodInfo m6274_MI;
extern MethodInfo m484_MI;
extern MethodInfo m6261_MI;
extern MethodInfo m4368_MI;
extern MethodInfo m610_MI;
extern MethodInfo m6989_MI;
extern MethodInfo m4337_MI;
extern MethodInfo m2133_MI;
extern MethodInfo m27333_MI;
extern MethodInfo m4877_MI;
struct t321;
 void m20303 (t321 * __this, t3293* p0, int32_t p1, t2347 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20303_MI;
struct t321;
 void m20305 (t321 * __this, t122 * p0, int32_t p1, t2370 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20305_MI;
struct t321;
 void m20306 (t321 * __this, t2349* p0, int32_t p1, t2370 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20306_MI;


extern MethodInfo m12749_MI;
 void m12749 (t321 * __this, t2350  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12749_MI);
	{
		t309 * L_0 = m12780((&p0), &m12780_MI);
		t477 * L_1 = m12782((&p0), &m12782_MI);
		VirtActionInvoker2< t309 *, t477 * >::Invoke(&m2136_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m12750_MI;
 bool m12750 (t321 * __this, t2350  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12750_MI);
	{
		bool L_0 = m12776(__this, p0, &m12776_MI);
		return L_0;
	}
}
extern MethodInfo m12752_MI;
 bool m12752 (t321 * __this, t2350  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12752_MI);
	{
		bool L_0 = m12776(__this, p0, &m12776_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t309 * L_1 = m12780((&p0), &m12780_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t309 * >::Invoke(&m12772_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m12763_MI;
 t2350  m12763 (t25 * __this, t309 * p0, t477 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12763_MI);
	{
		t2350  L_0 = {0};
		m12779(&L_0, p0, p1, &m12779_MI);
		return L_0;
	}
}
extern MethodInfo m12776_MI;
 bool m12776 (t321 * __this, t2350  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12776_MI);
	t477 * V_0 = {0};
	{
		t309 * L_0 = m12780((&p0), &m12780_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t309 *, t477 ** >::Invoke(&m2133_MI, __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2372_TI));
		t2372 * L_2 = m12958(NULL, &m12958_MI);
		t477 * L_3 = m12782((&p0), &m12782_MI);
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker2< bool, t477 *, t477 * >::Invoke(&m27333_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m12777_MI;
 t2352  m12777 (t321 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12777_MI);
	{
		t2352  L_0 = {0};
		m12926(&L_0, __this, &m12926_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t134_0_0_32849;
FieldInfo t321_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t134_0_0_32849, &t321_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_32849;
FieldInfo t321_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t124_0_0_32849, &t321_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_32849;
FieldInfo t321_f2_FieldInfo = 
{
	"NO_SLOT", &t134_0_0_32849, &t321_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_32849;
FieldInfo t321_f3_FieldInfo = 
{
	"HASH_FLAG", &t134_0_0_32849, &t321_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t822_0_0_1;
FieldInfo t321_f4_FieldInfo = 
{
	"table", &t822_0_0_1, &t321_TI, offsetof(t321, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1568_0_0_1;
FieldInfo t321_f5_FieldInfo = 
{
	"linkSlots", &t1568_0_0_1, &t321_TI, offsetof(t321, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2314_0_0_1;
FieldInfo t321_f6_FieldInfo = 
{
	"keySlots", &t2314_0_0_1, &t321_TI, offsetof(t321, f6), &EmptyCustomAttributesCache};
extern Il2CppType t2345_0_0_1;
FieldInfo t321_f7_FieldInfo = 
{
	"valueSlots", &t2345_0_0_1, &t321_TI, offsetof(t321, f7), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t321_f8_FieldInfo = 
{
	"touchedSlots", &t134_0_0_1, &t321_TI, offsetof(t321, f8), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t321_f9_FieldInfo = 
{
	"emptySlot", &t134_0_0_1, &t321_TI, offsetof(t321, f9), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t321_f10_FieldInfo = 
{
	"count", &t134_0_0_1, &t321_TI, offsetof(t321, f10), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t321_f11_FieldInfo = 
{
	"threshold", &t134_0_0_1, &t321_TI, offsetof(t321, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2346_0_0_1;
FieldInfo t321_f12_FieldInfo = 
{
	"hcp", &t2346_0_0_1, &t321_TI, offsetof(t321, f12), &EmptyCustomAttributesCache};
extern Il2CppType t823_0_0_1;
FieldInfo t321_f13_FieldInfo = 
{
	"serialization_info", &t823_0_0_1, &t321_TI, offsetof(t321, f13), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t321_f14_FieldInfo = 
{
	"generation", &t134_0_0_1, &t321_TI, offsetof(t321, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2347_0_0_17;
extern CustomAttributesCache t949__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t321_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t2347_0_0_17, &t321_TI, offsetof(t321_SFs, f15), &t949__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t321_FIs[] =
{
	&t321_f0_FieldInfo,
	&t321_f1_FieldInfo,
	&t321_f2_FieldInfo,
	&t321_f3_FieldInfo,
	&t321_f4_FieldInfo,
	&t321_f5_FieldInfo,
	&t321_f6_FieldInfo,
	&t321_f7_FieldInfo,
	&t321_f8_FieldInfo,
	&t321_f9_FieldInfo,
	&t321_f10_FieldInfo,
	&t321_f11_FieldInfo,
	&t321_f12_FieldInfo,
	&t321_f13_FieldInfo,
	&t321_f14_FieldInfo,
	&t321_f15_FieldInfo,
	NULL
};
static const int32_t t321_f0_DefaultValueData = 10;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t321_f0_DefaultValue = 
{
	&t321_f0_FieldInfo, { (char*)&t321_f0_DefaultValueData, &t134_0_0_0 }};
static const float t321_f1_DefaultValueData = 0.9f;
extern Il2CppType t124_0_0_0;
static Il2CppFieldDefaultValueEntry t321_f1_DefaultValue = 
{
	&t321_f1_FieldInfo, { (char*)&t321_f1_DefaultValueData, &t124_0_0_0 }};
static const int32_t t321_f2_DefaultValueData = -1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t321_f2_DefaultValue = 
{
	&t321_f2_FieldInfo, { (char*)&t321_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t321_f3_DefaultValueData = -2147483648;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t321_f3_DefaultValue = 
{
	&t321_f3_FieldInfo, { (char*)&t321_f3_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t321_FDVs[] = 
{
	&t321_f0_DefaultValue,
	&t321_f1_DefaultValue,
	&t321_f2_DefaultValue,
	&t321_f3_DefaultValue,
	NULL
};
extern MethodInfo m12745_MI;
static PropertyInfo t321____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t321_TI, "System.Collections.IDictionary.Item", NULL, &m12745_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12746_MI;
static PropertyInfo t321____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t321_TI, "System.Collections.ICollection.IsSynchronized", &m12746_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12747_MI;
static PropertyInfo t321____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t321_TI, "System.Collections.ICollection.SyncRoot", &m12747_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12748_MI;
static PropertyInfo t321____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t321_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m12748_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12757_MI;
static PropertyInfo t321____Count_PropertyInfo = 
{
	&t321_TI, "Count", &m12757_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12758_MI;
extern MethodInfo m12759_MI;
static PropertyInfo t321____Item_PropertyInfo = 
{
	&t321_TI, "Item", &m12758_MI, &m12759_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12773_MI;
static PropertyInfo t321____Values_PropertyInfo = 
{
	&t321_TI, "Values", &m12773_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t321_PIs[] =
{
	&t321____System_Collections_IDictionary_Item_PropertyInfo,
	&t321____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t321____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t321____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t321____Count_PropertyInfo,
	&t321____Item_PropertyInfo,
	&t321____Values_PropertyInfo,
	NULL
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2132_MI = 
{
	".ctor", (methodPointerType)&m8784_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2346_0_0_0;
static ParameterInfo t321_m12742_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t2346_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12742_MI = 
{
	".ctor", (methodPointerType)&m8786_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t321_m12742_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t321_m12743_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12743_MI = 
{
	".ctor", (methodPointerType)&m8788_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t321_m12743_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t321_m12744_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m12744_MI = 
{
	".ctor", (methodPointerType)&m8790_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t321_m12744_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t321_m12745_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12745_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m8792_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t321_m12745_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t321_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12746_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8794_gshared, &t321_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t321_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12747_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8796_gshared, &t321_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t321_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12748_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m8798_gshared, &t321_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2350_0_0_0;
static ParameterInfo t321_m12749_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2350_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t2350 (MethodInfo* method, void* obj, void** args);
MethodInfo m12749_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m12749, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123_t2350, t321_m12749_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2350_0_0_0;
static ParameterInfo t321_m12750_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2350_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t2350 (MethodInfo* method, void* obj, void** args);
MethodInfo m12750_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m12750, &t321_TI, &t125_0_0_0, RuntimeInvoker_t125_t2350, t321_m12750_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2349_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t321_m12751_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2349_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12751_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m8802_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t321_m12751_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2350_0_0_0;
static ParameterInfo t321_m12752_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2350_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t2350 (MethodInfo* method, void* obj, void** args);
MethodInfo m12752_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m12752, &t321_TI, &t125_0_0_0, RuntimeInvoker_t125_t2350, t321_m12752_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t321_m12753_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12753_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8805_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t321_m12753_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t321_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12754_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8807_gshared, &t321_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t321_TI;
extern Il2CppType t2351_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12755_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m8809_gshared, &t321_TI, &t2351_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t321_TI;
extern Il2CppType t950_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12756_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m8811_gshared, &t321_TI, &t950_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t321_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12757_MI = 
{
	"get_Count", (methodPointerType)&m8813_gshared, &t321_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t321_m12758_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t477_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12758_MI = 
{
	"get_Item", (methodPointerType)&m8814_gshared, &t321_TI, &t477_0_0_0, RuntimeInvoker_t25_t25, t321_m12758_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t477_0_0_0;
static ParameterInfo t321_m12759_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12759_MI = 
{
	"set_Item", (methodPointerType)&m8816_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t321_m12759_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t2346_0_0_0;
static ParameterInfo t321_m12760_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t2346_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12760_MI = 
{
	"Init", (methodPointerType)&m8818_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t321_m12760_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t321_m12761_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12761_MI = 
{
	"InitArrays", (methodPointerType)&m8820_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t321_m12761_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t321_m12762_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12762_MI = 
{
	"CopyToCheck", (methodPointerType)&m8822_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t321_m12762_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern Il2CppGenericContainer m27334_IGC;
extern TypeInfo m27334_gp_TRet_0_TI;
Il2CppGenericParamFull m27334_gp_TRet_0_TI_GenericParamFull = { { &m27334_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m27334_gp_TElem_1_TI;
Il2CppGenericParamFull m27334_gp_TElem_1_TI_GenericParamFull = { { &m27334_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m27334_IGPA[2] = 
{
	&m27334_gp_TRet_0_TI_GenericParamFull,
	&m27334_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m27334_MI;
Il2CppGenericContainer m27334_IGC = { { NULL, NULL }, NULL, &m27334_MI, 2, 1, m27334_IGPA };
MethodInfo m27334_MI = 
{
	"Do_CopyTo", NULL, &t321_TI, &t123_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t477_0_0_0;
static ParameterInfo t321_m12763_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t2350_0_0_0;
extern void* RuntimeInvoker_t2350_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12763_MI = 
{
	"make_pair", (methodPointerType)&m12763, &t321_TI, &t2350_0_0_0, RuntimeInvoker_t2350_t25_t25, t321_m12763_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t477_0_0_0;
static ParameterInfo t321_m12764_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t477_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12764_MI = 
{
	"pick_value", (methodPointerType)&m8825_gshared, &t321_TI, &t477_0_0_0, RuntimeInvoker_t25_t25_t25, t321_m12764_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2349_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t321_m12765_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2349_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12765_MI = 
{
	"CopyTo", (methodPointerType)&m8827_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t321_m12765_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern Il2CppGenericContainer m27335_IGC;
extern TypeInfo m27335_gp_TRet_0_TI;
Il2CppGenericParamFull m27335_gp_TRet_0_TI_GenericParamFull = { { &m27335_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m27335_IGPA[1] = 
{
	&m27335_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m27335_MI;
Il2CppGenericContainer m27335_IGC = { { NULL, NULL }, NULL, &m27335_MI, 1, 1, m27335_IGPA };
MethodInfo m27335_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t321_TI, &t123_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12766_MI = 
{
	"Resize", (methodPointerType)&m8829_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t477_0_0_0;
static ParameterInfo t321_m2136_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2136_MI = 
{
	"Add", (methodPointerType)&m8830_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t321_m2136_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12767_MI = 
{
	"Clear", (methodPointerType)&m8832_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t321_m12768_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12768_MI = 
{
	"ContainsKey", (methodPointerType)&m8833_gshared, &t321_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t321_m12768_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t477_0_0_0;
static ParameterInfo t321_m12769_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12769_MI = 
{
	"ContainsValue", (methodPointerType)&m8835_gshared, &t321_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t321_m12769_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t321_m12770_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m12770_MI = 
{
	"GetObjectData", (methodPointerType)&m8837_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t321_m12770_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t321_m12771_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12771_MI = 
{
	"OnDeserialization", (methodPointerType)&m8839_gshared, &t321_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t321_m12771_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t321_m12772_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12772_MI = 
{
	"Remove", (methodPointerType)&m8840_gshared, &t321_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t321_m12772_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t477_1_0_0;
static ParameterInfo t321_m2133_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t477_1_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t5845 (MethodInfo* method, void* obj, void** args);
MethodInfo m2133_MI = 
{
	"TryGetValue", (methodPointerType)&m8842_gshared, &t321_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t5845, t321_m2133_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t321_TI;
extern Il2CppType t2348_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12773_MI = 
{
	"get_Values", (methodPointerType)&m8844_gshared, &t321_TI, &t2348_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t321_m12774_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12774_MI = 
{
	"ToTKey", (methodPointerType)&m8846_gshared, &t321_TI, &t309_0_0_0, RuntimeInvoker_t25_t25, t321_m12774_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t321_m12775_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t477_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12775_MI = 
{
	"ToTValue", (methodPointerType)&m8848_gshared, &t321_TI, &t477_0_0_0, RuntimeInvoker_t25_t25, t321_m12775_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2350_0_0_0;
static ParameterInfo t321_m12776_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t2350_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t2350 (MethodInfo* method, void* obj, void** args);
MethodInfo m12776_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m12776, &t321_TI, &t125_0_0_0, RuntimeInvoker_t125_t2350, t321_m12776_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t321_TI;
extern Il2CppType t2352_0_0_0;
extern void* RuntimeInvoker_t2352 (MethodInfo* method, void* obj, void** args);
MethodInfo m12777_MI = 
{
	"GetEnumerator", (methodPointerType)&m12777, &t321_TI, &t2352_0_0_0, RuntimeInvoker_t2352, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t477_0_0_0;
static ParameterInfo t321_m12778_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t321_TI;
extern Il2CppType t944_0_0_0;
extern void* RuntimeInvoker_t944_t25_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t949__CustomAttributeCache_m8086;
MethodInfo m12778_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m8852_gshared, &t321_TI, &t944_0_0_0, RuntimeInvoker_t944_t25_t25, t321_m12778_ParameterInfos, &t949__CustomAttributeCache_m8086, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t321_MIs[] =
{
	&m2132_MI,
	&m12742_MI,
	&m12743_MI,
	&m12744_MI,
	&m12745_MI,
	&m12746_MI,
	&m12747_MI,
	&m12748_MI,
	&m12749_MI,
	&m12750_MI,
	&m12751_MI,
	&m12752_MI,
	&m12753_MI,
	&m12754_MI,
	&m12755_MI,
	&m12756_MI,
	&m12757_MI,
	&m12758_MI,
	&m12759_MI,
	&m12760_MI,
	&m12761_MI,
	&m12762_MI,
	&m27334_MI,
	&m12763_MI,
	&m12764_MI,
	&m12765_MI,
	&m27335_MI,
	&m12766_MI,
	&m2136_MI,
	&m12767_MI,
	&m12768_MI,
	&m12769_MI,
	&m12770_MI,
	&m12771_MI,
	&m12772_MI,
	&m2133_MI,
	&m12773_MI,
	&m12774_MI,
	&m12775_MI,
	&m12776_MI,
	&m12777_MI,
	&m12778_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12754_MI;
extern MethodInfo m12770_MI;
extern MethodInfo m12757_MI;
extern MethodInfo m12746_MI;
extern MethodInfo m12747_MI;
extern MethodInfo m12753_MI;
extern MethodInfo m12757_MI;
extern MethodInfo m12748_MI;
extern MethodInfo m12749_MI;
extern MethodInfo m12767_MI;
extern MethodInfo m12750_MI;
extern MethodInfo m12751_MI;
extern MethodInfo m12752_MI;
extern MethodInfo m12755_MI;
extern MethodInfo m12772_MI;
extern MethodInfo m12745_MI;
extern MethodInfo m12756_MI;
extern MethodInfo m12771_MI;
extern MethodInfo m12758_MI;
extern MethodInfo m12759_MI;
extern MethodInfo m2136_MI;
extern MethodInfo m12768_MI;
extern MethodInfo m12770_MI;
extern MethodInfo m12771_MI;
extern MethodInfo m2133_MI;
static MethodInfo* t321_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12754_MI,
	&m12770_MI,
	&m12757_MI,
	&m12746_MI,
	&m12747_MI,
	&m12753_MI,
	&m12757_MI,
	&m12748_MI,
	&m12749_MI,
	&m12767_MI,
	&m12750_MI,
	&m12751_MI,
	&m12752_MI,
	&m12755_MI,
	&m12772_MI,
	&m12745_MI,
	&m12756_MI,
	&m12771_MI,
	&m12758_MI,
	&m12759_MI,
	&m2136_MI,
	&m12768_MI,
	&m12770_MI,
	&m12771_MI,
	&m2133_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t485_TI;
extern TypeInfo t759_TI;
extern TypeInfo t4673_TI;
extern TypeInfo t4675_TI;
extern TypeInfo t5846_TI;
extern TypeInfo t846_TI;
extern TypeInfo t1604_TI;
static TypeInfo* t321_ITIs[] = 
{
	&t703_TI,
	&t485_TI,
	&t759_TI,
	&t4673_TI,
	&t4675_TI,
	&t5846_TI,
	&t846_TI,
	&t1604_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t485_TI;
extern TypeInfo t759_TI;
extern TypeInfo t4673_TI;
extern TypeInfo t4675_TI;
extern TypeInfo t5846_TI;
extern TypeInfo t846_TI;
extern TypeInfo t1604_TI;
static Il2CppInterfaceOffsetPair t321_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t485_TI, 5},
	{ &t759_TI, 6},
	{ &t4673_TI, 10},
	{ &t4675_TI, 17},
	{ &t5846_TI, 18},
	{ &t846_TI, 19},
	{ &t1604_TI, 21},
};
extern MethodInfo m12760_MI;
extern MethodInfo m12774_MI;
extern MethodInfo m12775_MI;
extern MethodInfo m12759_MI;
extern MethodInfo m12780_MI;
extern MethodInfo m12782_MI;
extern MethodInfo m2136_MI;
extern MethodInfo m12776_MI;
extern MethodInfo m12765_MI;
extern MethodInfo m12772_MI;
extern TypeInfo t2349_TI;
extern MethodInfo m12762_MI;
extern TypeInfo t321_TI;
extern MethodInfo m12778_MI;
extern TypeInfo t2347_TI;
extern MethodInfo m12941_MI;
extern MethodInfo m20303_MI;
extern MethodInfo m12763_MI;
extern TypeInfo t2370_TI;
extern MethodInfo m12945_MI;
extern MethodInfo m20305_MI;
extern TypeInfo t2352_TI;
extern MethodInfo m12926_MI;
extern TypeInfo t2371_TI;
extern MethodInfo m12949_MI;
extern TypeInfo t309_TI;
extern MethodInfo m27296_MI;
extern MethodInfo m27295_MI;
extern MethodInfo m12766_MI;
extern MethodInfo m12567_MI;
extern MethodInfo m12761_MI;
extern TypeInfo t2314_TI;
extern TypeInfo t2345_TI;
extern MethodInfo m12757_MI;
extern TypeInfo t2350_TI;
extern MethodInfo m12779_MI;
extern MethodInfo m20306_MI;
extern MethodInfo m12958_MI;
extern MethodInfo m27332_MI;
extern TypeInfo t2349_TI;
extern Il2CppType t2346_0_0_0;
extern TypeInfo t2346_TI;
extern Il2CppType t2349_0_0_0;
extern TypeInfo t2348_TI;
extern MethodInfo m12907_MI;
extern Il2CppType t309_0_0_0;
extern Il2CppType t477_0_0_0;
extern TypeInfo t477_TI;
extern MethodInfo m2133_MI;
extern MethodInfo m27333_MI;
static void* t321_RGCTXData[50] = 
{
	&m12760_MI,
	&m12774_MI,
	&m12775_MI,
	&m12759_MI,
	&m12780_MI,
	&m12782_MI,
	&m2136_MI,
	&m12776_MI,
	&m12765_MI,
	&m12772_MI,
	&t2349_TI,
	&m12762_MI,
	&t321_TI,
	&m12778_MI,
	&t2347_TI,
	&m12941_MI,
	&m20303_MI,
	&m12763_MI,
	&t2370_TI,
	&m12945_MI,
	&m20305_MI,
	&t2352_TI,
	&m12926_MI,
	&t2371_TI,
	&m12949_MI,
	&t309_TI,
	&m27296_MI,
	&m27295_MI,
	&m12766_MI,
	&m12567_MI,
	&m12761_MI,
	&t2314_TI,
	&t2345_TI,
	&m12757_MI,
	&t2350_TI,
	&m12779_MI,
	&m20306_MI,
	&m12958_MI,
	&m27332_MI,
	&t2349_TI,
	(void*)&t2346_0_0_0,
	&t2346_TI,
	(void*)&t2349_0_0_0,
	&t2348_TI,
	&m12907_MI,
	(void*)&t309_0_0_0,
	(void*)&t477_0_0_0,
	&t477_TI,
	&m2133_MI,
	&m27333_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t321_0_0_0;
extern Il2CppType t321_1_0_0;
extern TypeInfo t25_TI;
struct t321;
extern TypeInfo t321_TI;
extern Il2CppGenericClass t321_GC;
extern CustomAttributesCache t949__CustomAttributeCache;
extern CustomAttributesCache t949__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t949__CustomAttributeCache_m8086;
TypeInfo t321_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t321_MIs, t321_PIs, t321_FIs, NULL, &t25_TI, NULL, NULL, &t321_TI, t321_ITIs, t321_VT, &t949__CustomAttributeCache, &t321_TI, &t321_0_0_0, &t321_1_0_0, t321_IOs, &t321_GC, NULL, t321_FDVs, NULL, t321_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t321), 0, -1, sizeof(t321_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 42, 7, 16, 0, 0, 29, 8, 8};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4673_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
extern MethodInfo m27336_MI;
static PropertyInfo t4673____Count_PropertyInfo = 
{
	&t4673_TI, "Count", &m27336_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27337_MI;
static PropertyInfo t4673____IsReadOnly_PropertyInfo = 
{
	&t4673_TI, "IsReadOnly", &m27337_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4673_PIs[] =
{
	&t4673____Count_PropertyInfo,
	&t4673____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4673_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27336_MI = 
{
	"get_Count", NULL, &t4673_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4673_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27337_MI = 
{
	"get_IsReadOnly", NULL, &t4673_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2350_0_0_0;
static ParameterInfo t4673_m27338_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2350_0_0_0},
};
extern TypeInfo t4673_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t2350 (MethodInfo* method, void* obj, void** args);
MethodInfo m27338_MI = 
{
	"Add", NULL, &t4673_TI, &t123_0_0_0, RuntimeInvoker_t123_t2350, t4673_m27338_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4673_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27339_MI = 
{
	"Clear", NULL, &t4673_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2350_0_0_0;
static ParameterInfo t4673_m27340_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2350_0_0_0},
};
extern TypeInfo t4673_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t2350 (MethodInfo* method, void* obj, void** args);
MethodInfo m27340_MI = 
{
	"Contains", NULL, &t4673_TI, &t125_0_0_0, RuntimeInvoker_t125_t2350, t4673_m27340_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2349_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4673_m27341_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2349_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4673_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27341_MI = 
{
	"CopyTo", NULL, &t4673_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4673_m27341_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2350_0_0_0;
static ParameterInfo t4673_m27342_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2350_0_0_0},
};
extern TypeInfo t4673_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t2350 (MethodInfo* method, void* obj, void** args);
MethodInfo m27342_MI = 
{
	"Remove", NULL, &t4673_TI, &t125_0_0_0, RuntimeInvoker_t125_t2350, t4673_m27342_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4673_MIs[] =
{
	&m27336_MI,
	&m27337_MI,
	&m27338_MI,
	&m27339_MI,
	&m27340_MI,
	&m27341_MI,
	&m27342_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4675_TI;
static TypeInfo* t4673_ITIs[] = 
{
	&t703_TI,
	&t4675_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4673_0_0_0;
extern Il2CppType t4673_1_0_0;
struct t4673;
extern TypeInfo t4673_TI;
extern Il2CppGenericClass t4673_GC;
TypeInfo t4673_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4673_MIs, t4673_PIs, NULL, NULL, NULL, NULL, NULL, &t4673_TI, t4673_ITIs, NULL, &EmptyCustomAttributesCache, &t4673_TI, &t4673_0_0_0, &t4673_1_0_0, NULL, &t4673_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4675_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
extern TypeInfo t4675_TI;
extern Il2CppType t2351_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27343_MI = 
{
	"GetEnumerator", NULL, &t4675_TI, &t2351_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4675_MIs[] =
{
	&m27343_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4675_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4675_0_0_0;
extern Il2CppType t4675_1_0_0;
struct t4675;
extern TypeInfo t4675_TI;
extern Il2CppGenericClass t4675_GC;
TypeInfo t4675_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4675_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4675_TI, t4675_ITIs, NULL, &EmptyCustomAttributesCache, &t4675_TI, &t4675_0_0_0, &t4675_1_0_0, NULL, &t4675_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2351_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
extern MethodInfo m27344_MI;
static PropertyInfo t2351____Current_PropertyInfo = 
{
	&t2351_TI, "Current", &m27344_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2351_PIs[] =
{
	&t2351____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2351_TI;
extern Il2CppType t2350_0_0_0;
extern void* RuntimeInvoker_t2350 (MethodInfo* method, void* obj, void** args);
MethodInfo m27344_MI = 
{
	"get_Current", NULL, &t2351_TI, &t2350_0_0_0, RuntimeInvoker_t2350, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2351_MIs[] =
{
	&m27344_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t2351_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2351_0_0_0;
extern Il2CppType t2351_1_0_0;
struct t2351;
extern TypeInfo t2351_TI;
extern Il2CppGenericClass t2351_GC;
TypeInfo t2351_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2351_MIs, t2351_PIs, NULL, NULL, NULL, NULL, NULL, &t2351_TI, t2351_ITIs, NULL, &EmptyCustomAttributesCache, &t2351_TI, &t2351_0_0_0, &t2351_1_0_0, NULL, &t2351_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2350_TI;

extern TypeInfo t2350_TI;
extern TypeInfo t548_TI;
extern TypeInfo t27_TI;
extern TypeInfo t309_TI;
extern TypeInfo t25_TI;
extern TypeInfo t477_TI;
extern MethodInfo m12781_MI;
extern MethodInfo m12783_MI;
extern MethodInfo m12780_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12782_MI;
extern MethodInfo m3945_MI;


// Metadata Definition System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t309_0_0_1;
FieldInfo t2350_f0_FieldInfo = 
{
	"key", &t309_0_0_1, &t2350_TI, offsetof(t2350, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t477_0_0_1;
FieldInfo t2350_f1_FieldInfo = 
{
	"value", &t477_0_0_1, &t2350_TI, offsetof(t2350, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2350_FIs[] =
{
	&t2350_f0_FieldInfo,
	&t2350_f1_FieldInfo,
	NULL
};
extern MethodInfo m12780_MI;
extern MethodInfo m12781_MI;
static PropertyInfo t2350____Key_PropertyInfo = 
{
	&t2350_TI, "Key", &m12780_MI, &m12781_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12782_MI;
extern MethodInfo m12783_MI;
static PropertyInfo t2350____Value_PropertyInfo = 
{
	&t2350_TI, "Value", &m12782_MI, &m12783_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2350_PIs[] =
{
	&t2350____Key_PropertyInfo,
	&t2350____Value_PropertyInfo,
	NULL
};
extern Il2CppType t309_0_0_0;
extern Il2CppType t477_0_0_0;
static ParameterInfo t2350_m12779_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t2350_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12779_MI = 
{
	".ctor", (methodPointerType)&m8859_gshared, &t2350_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t2350_m12779_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2350_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12780_MI = 
{
	"get_Key", (methodPointerType)&m8860_gshared, &t2350_TI, &t309_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2350_m12781_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2350_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12781_MI = 
{
	"set_Key", (methodPointerType)&m8861_gshared, &t2350_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2350_m12781_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2350_TI;
extern Il2CppType t477_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12782_MI = 
{
	"get_Value", (methodPointerType)&m8862_gshared, &t2350_TI, &t477_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t477_0_0_0;
static ParameterInfo t2350_m12783_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t2350_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12783_MI = 
{
	"set_Value", (methodPointerType)&m8863_gshared, &t2350_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2350_m12783_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2350_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12784_MI = 
{
	"ToString", (methodPointerType)&m8864_gshared, &t2350_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2350_MIs[] =
{
	&m12779_MI,
	&m12780_MI,
	&m12781_MI,
	&m12782_MI,
	&m12783_MI,
	&m12784_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m12784_MI;
static MethodInfo* t2350_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m12784_MI,
};
extern MethodInfo m12781_MI;
extern MethodInfo m12783_MI;
extern MethodInfo m12780_MI;
extern TypeInfo t309_TI;
extern MethodInfo m12782_MI;
extern TypeInfo t477_TI;
static void* t2350_RGCTXData[6] = 
{
	&m12781_MI,
	&m12783_MI,
	&m12780_MI,
	&t309_TI,
	&m12782_MI,
	&t477_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2350_0_0_0;
extern Il2CppType t2350_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2350_TI;
extern Il2CppGenericClass t2350_GC;
extern CustomAttributesCache t955__CustomAttributeCache;
TypeInfo t2350_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t2350_MIs, t2350_PIs, t2350_FIs, NULL, &t117_TI, NULL, NULL, &t2350_TI, NULL, t2350_VT, &t955__CustomAttributeCache, &t2350_TI, &t2350_0_0_0, &t2350_1_0_0, NULL, &t2350_GC, NULL, NULL, NULL, t2350_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2350)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t477_TI;
#include "t477MD.h"

#include "t475.h"
#include "t1401.h"
extern TypeInfo t477_TI;
extern TypeInfo t318_TI;
extern TypeInfo t134_TI;
extern TypeInfo t303_TI;
extern TypeInfo t475_TI;
extern TypeInfo t125_TI;
extern TypeInfo t123_TI;
extern TypeInfo t2335_TI;
extern TypeInfo t1401_TI;
extern TypeInfo t2333_TI;
extern TypeInfo t177_TI;
extern TypeInfo t2337_TI;
#include "t475MD.h"
#include "t1401MD.h"
extern MethodInfo m2125_MI;
extern MethodInfo m2123_MI;
extern MethodInfo m12831_MI;
extern MethodInfo m12643_MI;
extern MethodInfo m12825_MI;
extern MethodInfo m2117_MI;
extern MethodInfo m12799_MI;
extern MethodInfo m452_MI;
extern MethodInfo m12786_MI;
extern MethodInfo m12827_MI;
extern MethodInfo m2128_MI;
extern MethodInfo m12832_MI;
extern MethodInfo m12794_MI;
extern MethodInfo m7530_MI;
extern MethodInfo m2122_MI;
extern MethodInfo m12826_MI;
extern MethodInfo m12624_MI;
extern MethodInfo m7533_MI;
extern MethodInfo m12636_MI;
extern MethodInfo m12817_MI;
extern MethodInfo m12725_MI;
extern MethodInfo m2137_MI;
extern MethodInfo m2131_MI;


// Metadata Definition UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
extern Il2CppType t318_0_0_33;
FieldInfo t477_f0_FieldInfo = 
{
	"m_List", &t318_0_0_33, &t477_TI, offsetof(t477, f0), &EmptyCustomAttributesCache};
extern Il2CppType t475_0_0_1;
FieldInfo t477_f1_FieldInfo = 
{
	"m_Dictionary", &t475_0_0_1, &t477_TI, offsetof(t477, f1), &EmptyCustomAttributesCache};
static FieldInfo* t477_FIs[] =
{
	&t477_f0_FieldInfo,
	&t477_f1_FieldInfo,
	NULL
};
extern MethodInfo m12790_MI;
static PropertyInfo t477____Count_PropertyInfo = 
{
	&t477_TI, "Count", &m12790_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12791_MI;
static PropertyInfo t477____IsReadOnly_PropertyInfo = 
{
	&t477_TI, "IsReadOnly", &m12791_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12795_MI;
extern MethodInfo m12796_MI;
static PropertyInfo t477____Item_PropertyInfo = 
{
	&t477_TI, "Item", &m12795_MI, &m12796_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t477_PIs[] =
{
	&t477____Count_PropertyInfo,
	&t477____IsReadOnly_PropertyInfo,
	&t477____Item_PropertyInfo,
	NULL
};
extern TypeInfo t477_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m2135_MI = 
{
	".ctor", (methodPointerType)&m11595_gshared, &t477_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t477_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12785_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11597_gshared, &t477_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t477_m2134_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t477_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2134_MI = 
{
	"Add", (methodPointerType)&m11598_gshared, &t477_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t477_m2134_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t477_m2137_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t477_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m2137_MI = 
{
	"Remove", (methodPointerType)&m11599_gshared, &t477_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t477_m2137_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t477_TI;
extern Il2CppType t2335_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12786_MI = 
{
	"GetEnumerator", (methodPointerType)&m11601_gshared, &t477_TI, &t2335_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t477_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12787_MI = 
{
	"Clear", (methodPointerType)&m11602_gshared, &t477_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t477_m12788_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t477_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12788_MI = 
{
	"Contains", (methodPointerType)&m11604_gshared, &t477_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t477_m12788_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2333_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t477_m12789_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2333_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t477_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12789_MI = 
{
	"CopyTo", (methodPointerType)&m11606_gshared, &t477_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t477_m12789_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t477_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12790_MI = 
{
	"get_Count", (methodPointerType)&m11607_gshared, &t477_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t477_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12791_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m11609_gshared, &t477_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t477_m12792_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t477_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12792_MI = 
{
	"IndexOf", (methodPointerType)&m11611_gshared, &t477_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t477_m12792_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t477_m12793_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t477_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12793_MI = 
{
	"Insert", (methodPointerType)&m11613_gshared, &t477_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t477_m12793_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t477_m12794_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t477_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12794_MI = 
{
	"RemoveAt", (methodPointerType)&m11615_gshared, &t477_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t477_m12794_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t477_m12795_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t477_TI;
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12795_MI = 
{
	"get_Item", (methodPointerType)&m11616_gshared, &t477_TI, &t303_0_0_0, RuntimeInvoker_t25_t134, t477_m12795_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t477_m12796_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t477_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12796_MI = 
{
	"set_Item", (methodPointerType)&m11618_gshared, &t477_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t477_m12796_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2337_0_0_0;
static ParameterInfo t477_m12797_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2337_0_0_0},
};
extern TypeInfo t477_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12797_MI = 
{
	"RemoveAll", (methodPointerType)&m11619_gshared, &t477_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t477_m12797_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t319_0_0_0;
static ParameterInfo t477_m12798_ParameterInfos[] = 
{
	{"sortLayoutFunction", 0, 134217728, &EmptyCustomAttributesCache, &t319_0_0_0},
};
extern TypeInfo t477_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12798_MI = 
{
	"Sort", (methodPointerType)&m11620_gshared, &t477_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t477_m12798_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t477_MIs[] =
{
	&m2135_MI,
	&m12785_MI,
	&m2134_MI,
	&m2137_MI,
	&m12786_MI,
	&m12787_MI,
	&m12788_MI,
	&m12789_MI,
	&m12790_MI,
	&m12791_MI,
	&m12792_MI,
	&m12793_MI,
	&m12794_MI,
	&m12795_MI,
	&m12796_MI,
	&m12797_MI,
	&m12798_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12792_MI;
extern MethodInfo m12793_MI;
extern MethodInfo m12794_MI;
extern MethodInfo m12795_MI;
extern MethodInfo m12796_MI;
extern MethodInfo m12790_MI;
extern MethodInfo m12791_MI;
extern MethodInfo m2134_MI;
extern MethodInfo m12787_MI;
extern MethodInfo m12788_MI;
extern MethodInfo m12789_MI;
extern MethodInfo m2137_MI;
extern MethodInfo m12786_MI;
extern MethodInfo m12785_MI;
static MethodInfo* t477_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12792_MI,
	&m12793_MI,
	&m12794_MI,
	&m12795_MI,
	&m12796_MI,
	&m12790_MI,
	&m12791_MI,
	&m2134_MI,
	&m12787_MI,
	&m12788_MI,
	&m12789_MI,
	&m2137_MI,
	&m12786_MI,
	&m12785_MI,
};
extern TypeInfo t322_TI;
extern TypeInfo t474_TI;
extern TypeInfo t2334_TI;
extern TypeInfo t703_TI;
static TypeInfo* t477_ITIs[] = 
{
	&t322_TI,
	&t474_TI,
	&t2334_TI,
	&t703_TI,
};
extern TypeInfo t322_TI;
extern TypeInfo t474_TI;
extern TypeInfo t2334_TI;
extern TypeInfo t703_TI;
static Il2CppInterfaceOffsetPair t477_IOs[] = 
{
	{ &t322_TI, 4},
	{ &t474_TI, 9},
	{ &t2334_TI, 16},
	{ &t703_TI, 17},
};
extern TypeInfo t318_TI;
extern MethodInfo m2117_MI;
extern TypeInfo t475_TI;
extern MethodInfo m12799_MI;
extern MethodInfo m12786_MI;
extern MethodInfo m12827_MI;
extern MethodInfo m2128_MI;
extern MethodInfo m2125_MI;
extern MethodInfo m12825_MI;
extern MethodInfo m12832_MI;
extern MethodInfo m12794_MI;
extern MethodInfo m2122_MI;
extern MethodInfo m12826_MI;
extern MethodInfo m12624_MI;
extern MethodInfo m2123_MI;
extern MethodInfo m12831_MI;
extern MethodInfo m12636_MI;
extern MethodInfo m12643_MI;
extern MethodInfo m12817_MI;
extern MethodInfo m12725_MI;
extern MethodInfo m2137_MI;
extern MethodInfo m2131_MI;
static void* t477_RGCTXData[22] = 
{
	&t318_TI,
	&m2117_MI,
	&t475_TI,
	&m12799_MI,
	&m12786_MI,
	&m12827_MI,
	&m2128_MI,
	&m2125_MI,
	&m12825_MI,
	&m12832_MI,
	&m12794_MI,
	&m2122_MI,
	&m12826_MI,
	&m12624_MI,
	&m2123_MI,
	&m12831_MI,
	&m12636_MI,
	&m12643_MI,
	&m12817_MI,
	&m12725_MI,
	&m2137_MI,
	&m2131_MI,
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t477_0_0_0;
extern Il2CppType t477_1_0_0;
extern TypeInfo t25_TI;
struct t477;
extern TypeInfo t477_TI;
extern Il2CppGenericClass t477_GC;
extern CustomAttributesCache t421__CustomAttributeCache;
TypeInfo t477_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "IndexedSet`1", "UnityEngine.UI.Collections", t477_MIs, t477_PIs, t477_FIs, NULL, &t25_TI, NULL, NULL, &t477_TI, t477_ITIs, t477_VT, &t421__CustomAttributeCache, &t477_TI, &t477_0_0_0, &t477_1_0_0, t477_IOs, &t477_GC, NULL, NULL, NULL, t477_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t477), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 17, 3, 2, 0, 0, 18, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t475_TI;

#include "t2355.h"
#include "t2357.h"
#include "t2354.h"
#include "t2363.h"
#include "t2359.h"
#include "t2364.h"
#include "t2163.h"
extern TypeInfo t475_TI;
extern TypeInfo t123_TI;
extern TypeInfo t303_TI;
extern TypeInfo t134_TI;
extern TypeInfo t165_TI;
extern TypeInfo t2353_TI;
extern TypeInfo t942_TI;
extern TypeInfo t125_TI;
extern TypeInfo t954_TI;
extern TypeInfo t2355_TI;
extern TypeInfo t2356_TI;
extern TypeInfo t2357_TI;
extern TypeInfo t3293_TI;
extern TypeInfo t944_TI;
extern TypeInfo t2354_TI;
extern TypeInfo t2363_TI;
extern TypeInfo t2359_TI;
extern TypeInfo t2364_TI;
extern TypeInfo t1351_TI;
extern TypeInfo t2340_TI;
extern TypeInfo t822_TI;
extern TypeInfo t1568_TI;
extern TypeInfo t2333_TI;
extern TypeInfo t445_TI;
extern TypeInfo t972_TI;
extern TypeInfo t2163_TI;
extern TypeInfo t2152_TI;
extern TypeInfo t131_TI;
extern TypeInfo t27_TI;
#include "t2355MD.h"
#include "t2357MD.h"
#include "t2354MD.h"
#include "t2363MD.h"
#include "t2359MD.h"
#include "t2364MD.h"
#include "t2163MD.h"
extern Il2CppType t2353_0_0_0;
extern Il2CppType t2356_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t134_0_0_0;
extern MethodInfo m12834_MI;
extern MethodInfo m12835_MI;
extern MethodInfo m12817_MI;
extern MethodInfo m489_MI;
extern MethodInfo m27315_MI;
extern MethodInfo m27314_MI;
extern MethodInfo m4772_MI;
extern MethodInfo m12824_MI;
extern MethodInfo m12850_MI;
extern MethodInfo m452_MI;
extern MethodInfo m12818_MI;
extern MethodInfo m12840_MI;
extern MethodInfo m12842_MI;
extern MethodInfo m12825_MI;
extern MethodInfo m12836_MI;
extern MethodInfo m12823_MI;
extern MethodInfo m12831_MI;
extern MethodInfo m12820_MI;
extern MethodInfo m12838_MI;
extern MethodInfo m12884_MI;
extern MethodInfo m20274_MI;
extern MethodInfo m12821_MI;
extern MethodInfo m12888_MI;
extern MethodInfo m20276_MI;
extern MethodInfo m12869_MI;
extern MethodInfo m12892_MI;
extern MethodInfo m6999_MI;
extern MethodInfo m12720_MI;
extern MethodInfo m12819_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m12815_MI;
extern MethodInfo m12839_MI;
extern MethodInfo m20277_MI;
extern MethodInfo m4935_MI;
extern MethodInfo m4283_MI;
extern MethodInfo m4279_MI;
extern MethodInfo m11313_MI;
extern MethodInfo m26856_MI;
extern MethodInfo m6265_MI;
extern MethodInfo m6271_MI;
extern MethodInfo m6274_MI;
extern MethodInfo m484_MI;
extern MethodInfo m6261_MI;
extern MethodInfo m4368_MI;
extern MethodInfo m610_MI;
extern MethodInfo m6989_MI;
extern MethodInfo m4337_MI;
extern MethodInfo m12832_MI;
extern MethodInfo m26905_MI;
extern MethodInfo m4877_MI;
struct t475;
 void m20274 (t475 * __this, t3293* p0, int32_t p1, t2354 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20274_MI;
struct t475;
 void m20276 (t475 * __this, t122 * p0, int32_t p1, t2363 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20276_MI;
struct t475;
 void m20277 (t475 * __this, t2356* p0, int32_t p1, t2363 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20277_MI;


extern MethodInfo m12799_MI;
 void m12799 (t475 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12799_MI);
	{
		m452(__this, &m452_MI);
		m12818(__this, ((int32_t)10), (t25*)NULL, &m12818_MI);
		return;
	}
}
extern MethodInfo m12800_MI;
 void m12800 (t475 * __this, t25* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12800_MI);
	{
		m452(__this, &m452_MI);
		m12818(__this, ((int32_t)10), p0, &m12818_MI);
		return;
	}
}
extern MethodInfo m12801_MI;
 void m12801 (t475 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12801_MI);
	{
		m452(__this, &m452_MI);
		m12818(__this, p0, (t25*)NULL, &m12818_MI);
		return;
	}
}
extern MethodInfo m12802_MI;
 void m12802 (t475 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12802_MI);
	{
		m452(__this, &m452_MI);
		__this->f13 = p0;
		return;
	}
}
extern MethodInfo m12803_MI;
 void m12803 (t475 * __this, t25 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12803_MI);
	{
		t303 * L_0 = m12834(__this, p0, &m12834_MI);
		int32_t L_1 = m12835(__this, p1, &m12835_MI);
		VirtActionInvoker2< t303 *, int32_t >::Invoke(&m12817_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m12804_MI;
 bool m12804 (t475 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12804_MI);
	{
		return 0;
	}
}
extern MethodInfo m12805_MI;
 t25 * m12805 (t475 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12805_MI);
	{
		return __this;
	}
}
extern MethodInfo m12806_MI;
 bool m12806 (t475 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12806_MI);
	{
		return 0;
	}
}
extern MethodInfo m12807_MI;
 void m12807 (t475 * __this, t2357  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12807_MI);
	{
		t303 * L_0 = m12840((&p0), &m12840_MI);
		int32_t L_1 = m12842((&p0), &m12842_MI);
		VirtActionInvoker2< t303 *, int32_t >::Invoke(&m12825_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m12808_MI;
 bool m12808 (t475 * __this, t2357  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12808_MI);
	{
		bool L_0 = m12836(__this, p0, &m12836_MI);
		return L_0;
	}
}
extern MethodInfo m12809_MI;
 void m12809 (t475 * __this, t2356* p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12809_MI);
	{
		m12823(__this, p0, p1, &m12823_MI);
		return;
	}
}
extern MethodInfo m12810_MI;
 bool m12810 (t475 * __this, t2357  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12810_MI);
	{
		bool L_0 = m12836(__this, p0, &m12836_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t303 * L_1 = m12840((&p0), &m12840_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t303 * >::Invoke(&m12831_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m12811_MI;
 void m12811 (t475 * __this, t122 * p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12811_MI);
	t2356* V_0 = {0};
	t3293* V_1 = {0};
	int32_t G_B5_0 = 0;
	t3293* G_B5_1 = {0};
	t475 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t3293* G_B4_1 = {0};
	t475 * G_B4_2 = {0};
	{
		V_0 = ((t2356*)IsInst(p0, InitializedTypeInfo(&t2356_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		m12823(__this, V_0, p1, &m12823_MI);
		return;
	}

IL_0013:
	{
		m12820(__this, p0, p1, &m12820_MI);
		V_1 = ((t3293*)IsInst(p0, InitializedTypeInfo(&t3293_TI)));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = p1;
		G_B4_1 = V_1;
		G_B4_2 = ((t475 *)(__this));
		if ((((t475_SFs*)InitializedTypeInfo(&t475_TI)->static_fields)->f15))
		{
			G_B5_0 = p1;
			G_B5_1 = V_1;
			G_B5_2 = ((t475 *)(__this));
			goto IL_0040;
		}
	}
	{
		t61 L_0 = { &m12838_MI };
		t2354 * L_1 = (t2354 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2354_TI));
		m12884(L_1, NULL, L_0, &m12884_MI);
		((t475_SFs*)InitializedTypeInfo(&t475_TI)->static_fields)->f15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t475 *)(G_B4_2));
	}

IL_0040:
	{
		NullCheck(G_B5_2);
		m20274(G_B5_2, G_B5_1, G_B5_0, (((t475_SFs*)InitializedTypeInfo(&t475_TI)->static_fields)->f15), &m20274_MI);
		return;
	}

IL_004b:
	{
		t61 L_2 = { &m12821_MI };
		t2363 * L_3 = (t2363 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2363_TI));
		m12888(L_3, NULL, L_2, &m12888_MI);
		m20276(__this, p0, p1, L_3, &m20276_MI);
		return;
	}
}
extern MethodInfo m12812_MI;
 t25 * m12812 (t475 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12812_MI);
	{
		t2359  L_0 = {0};
		m12869(&L_0, __this, &m12869_MI);
		t2359  L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t2359_TI), &L_1);
		return (t25 *)L_2;
	}
}
extern MethodInfo m12813_MI;
 t25* m12813 (t475 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12813_MI);
	{
		t2359  L_0 = {0};
		m12869(&L_0, __this, &m12869_MI);
		t2359  L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t2359_TI), &L_1);
		return (t25*)L_2;
	}
}
extern MethodInfo m12814_MI;
 t25 * m12814 (t475 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12814_MI);
	{
		t2364 * L_0 = (t2364 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2364_TI));
		m12892(L_0, __this, &m12892_MI);
		return L_0;
	}
}
extern MethodInfo m12815_MI;
 int32_t m12815 (t475 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12815_MI);
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m12816_MI;
 int32_t m12816 (t475 * __this, t303 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12816_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t303 * L_0 = p0;
		if (((t303 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t165 * L_1 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_1, (t27*) &_stringLiteral559, &m489_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t25* L_2 = (__this->f12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t303 * >::Invoke(&m27315_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t822* L_4 = (__this->f4);
		t822* L_5 = (__this->f4);
		NullCheck(L_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t122 *)L_5)->max_length))))));
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t122 *)L_5)->max_length)))))))-1));
		goto IL_008f;
	}

IL_0042:
	{
		t1568* L_6 = (__this->f5);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, V_1);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_6, V_1)));
		int32_t L_7 = (((t942 *)(t942 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t25* L_8 = (__this->f12);
		t2333* L_9 = (__this->f6);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, V_1);
		NullCheck(L_8);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t303 *, t303 * >::Invoke(&m27314_MI, L_8, (*(t303 **)(t303 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		t822* L_11 = (__this->f7);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, V_1);
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, V_1));
	}

IL_007d:
	{
		t1568* L_12 = (__this->f5);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, V_1);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_12, V_1)));
		int32_t L_13 = (((t942 *)(t942 *)SZArrayLdElema(L_12, V_1))->f1);
		V_1 = L_13;
	}

IL_008f:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		t954 * L_14 = (t954 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t954_TI));
		m4772(L_14, &m4772_MI);
		il2cpp_codegen_raise_exception (L_14);
	}
}
extern MethodInfo m12817_MI;
 void m12817 (t475 * __this, t303 * p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12817_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t303 * L_0 = p0;
		if (((t303 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t165 * L_1 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_1, (t27*) &_stringLiteral559, &m489_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t25* L_2 = (__this->f12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t303 * >::Invoke(&m27315_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t822* L_4 = (__this->f4);
		NullCheck(L_4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t122 *)L_4)->max_length)))));
		t822* L_5 = (__this->f4);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_1);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		V_3 = (-1);
		if ((((int32_t)V_2) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t1568* L_6 = (__this->f5);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, V_2);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_6, V_2)));
		int32_t L_7 = (((t942 *)(t942 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0078;
		}
	}
	{
		t25* L_8 = (__this->f12);
		t2333* L_9 = (__this->f6);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, V_2);
		NullCheck(L_8);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t303 *, t303 * >::Invoke(&m27314_MI, L_8, (*(t303 **)(t303 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		V_3 = V_2;
		t1568* L_11 = (__this->f5);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, V_2);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_11, V_2)));
		int32_t L_12 = (((t942 *)(t942 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_13 = (__this->f10);
		int32_t L_14 = ((int32_t)(L_13+1));
		V_4 = L_14;
		__this->f10 = L_14;
		int32_t L_15 = (__this->f11);
		if ((((int32_t)V_4) <= ((int32_t)L_15)))
		{
			goto IL_00c9;
		}
	}
	{
		m12824(__this, &m12824_MI);
		t822* L_16 = (__this->f4);
		NullCheck(L_16);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t122 *)L_16)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_17 = (__this->f9);
		V_2 = L_17;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_18 = (__this->f8);
		int32_t L_19 = L_18;
		V_4 = L_19;
		__this->f8 = ((int32_t)(L_19+1));
		V_2 = V_4;
		goto IL_0101;
	}

IL_00ea:
	{
		t1568* L_20 = (__this->f5);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, V_2);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_20, V_2)));
		int32_t L_21 = (((t942 *)(t942 *)SZArrayLdElema(L_20, V_2))->f1);
		__this->f9 = L_21;
	}

IL_0101:
	{
		t1568* L_22 = (__this->f5);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, V_2);
		t822* L_23 = (__this->f4);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, V_1);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_22, V_2)));
		((t942 *)(t942 *)SZArrayLdElema(L_22, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_23, V_1))-1));
		t822* L_24 = (__this->f4);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_1)) = (int32_t)((int32_t)(V_2+1));
		t1568* L_25 = (__this->f5);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, V_2);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_25, V_2)));
		((t942 *)(t942 *)SZArrayLdElema(L_25, V_2))->f0 = V_0;
		t2333* L_26 = (__this->f6);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, V_2);
		*((t303 **)(t303 **)SZArrayLdElema(L_26, V_2)) = (t303 *)p0;
		goto IL_0194;
	}

IL_0148:
	{
		if ((((int32_t)V_3) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		t1568* L_27 = (__this->f5);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, V_3);
		t1568* L_28 = (__this->f5);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, V_2);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_28, V_2)));
		int32_t L_29 = (((t942 *)(t942 *)SZArrayLdElema(L_28, V_2))->f1);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_27, V_3)));
		((t942 *)(t942 *)SZArrayLdElema(L_27, V_3))->f1 = L_29;
		t1568* L_30 = (__this->f5);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, V_2);
		t822* L_31 = (__this->f4);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, V_1);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_30, V_2)));
		((t942 *)(t942 *)SZArrayLdElema(L_30, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_31, V_1))-1));
		t822* L_32 = (__this->f4);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_32, V_1)) = (int32_t)((int32_t)(V_2+1));
	}

IL_0194:
	{
		t822* L_33 = (__this->f7);
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, V_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_33, V_2)) = (int32_t)p1;
		int32_t L_34 = (__this->f14);
		__this->f14 = ((int32_t)(L_34+1));
		return;
	}
}
extern MethodInfo m12818_MI;
 void m12818 (t475 * __this, int32_t p0, t25* p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12818_MI);
	t25* V_0 = {0};
	t475 * G_B4_0 = {0};
	t475 * G_B3_0 = {0};
	t25* G_B5_0 = {0};
	t475 * G_B5_1 = {0};
	{
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t1351 * L_0 = (t1351 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1351_TI));
		m6999(L_0, (t27*) &_stringLiteral560, &m6999_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000f:
	{
		G_B3_0 = ((t475 *)(__this));
		if (!p1)
		{
			G_B4_0 = ((t475 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = p1;
		G_B5_0 = V_0;
		G_B5_1 = ((t475 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2340_TI));
		t2340 * L_1 = m12720(NULL, &m12720_MI);
		G_B5_0 = ((t25*)(L_1));
		G_B5_1 = ((t475 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->f12 = G_B5_0;
		if (p0)
		{
			goto IL_002b;
		}
	}
	{
		p0 = ((int32_t)10);
	}

IL_002b:
	{
		p0 = ((int32_t)((((int32_t)((float)((((float)p0))/(0.9f)))))+1));
		m12819(__this, p0, &m12819_MI);
		__this->f14 = 0;
		return;
	}
}
extern MethodInfo m12819_MI;
 void m12819 (t475 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12819_MI);
	{
		__this->f4 = ((t822*)SZArrayNew(InitializedTypeInfo(&t822_TI), p0));
		__this->f5 = ((t1568*)SZArrayNew(InitializedTypeInfo(&t1568_TI), p0));
		__this->f9 = (-1);
		__this->f6 = ((t2333*)SZArrayNew(InitializedTypeInfo(&t2333_TI), p0));
		__this->f7 = ((t822*)SZArrayNew(InitializedTypeInfo(&t822_TI), p0));
		__this->f8 = 0;
		t822* L_0 = (__this->f4);
		NullCheck(L_0);
		__this->f11 = (((int32_t)((float)((((float)(((int32_t)(((t122 *)L_0)->max_length)))))*(0.9f)))));
		int32_t L_1 = (__this->f11);
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		t822* L_2 = (__this->f4);
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((t122 *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->f11 = 1;
	}

IL_006e:
	{
		return;
	}
}
extern MethodInfo m12820_MI;
 void m12820 (t475 * __this, t122 * p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12820_MI);
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral350, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t1351 * L_1 = (t1351 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1351_TI));
		m6999(L_1, (t27*) &_stringLiteral347, &m6999_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001d:
	{
		NullCheck(p0);
		int32_t L_2 = m4234(p0, &m4234_MI);
		if ((((int32_t)p1) <= ((int32_t)L_2)))
		{
			goto IL_0031;
		}
	}
	{
		t445 * L_3 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m2409(L_3, (t27*) &_stringLiteral561, &m2409_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0031:
	{
		NullCheck(p0);
		int32_t L_4 = m4234(p0, &m4234_MI);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12815_MI, __this);
		if ((((int32_t)((int32_t)(L_4-p1))) >= ((int32_t)L_5)))
		{
			goto IL_004c;
		}
	}
	{
		t445 * L_6 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m2409(L_6, (t27*) &_stringLiteral562, &m2409_MI);
		il2cpp_codegen_raise_exception (L_6);
	}

IL_004c:
	{
		return;
	}
}
extern MethodInfo m12821_MI;
 t2357  m12821 (t25 * __this, t303 * p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12821_MI);
	{
		t2357  L_0 = {0};
		m12839(&L_0, p0, p1, &m12839_MI);
		return L_0;
	}
}
extern MethodInfo m12822_MI;
 int32_t m12822 (t25 * __this, t303 * p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12822_MI);
	{
		return p1;
	}
}
extern MethodInfo m12823_MI;
 void m12823 (t475 * __this, t2356* p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12823_MI);
	{
		m12820(__this, (t122 *)(t122 *)p0, p1, &m12820_MI);
		t61 L_0 = { &m12821_MI };
		t2363 * L_1 = (t2363 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2363_TI));
		m12888(L_1, NULL, L_0, &m12888_MI);
		m20277(__this, p0, p1, L_1, &m20277_MI);
		return;
	}
}
extern MethodInfo m12824_MI;
 void m12824 (t475 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12824_MI);
	int32_t V_0 = 0;
	t822* V_1 = {0};
	t1568* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t2333* V_7 = {0};
	t822* V_8 = {0};
	int32_t V_9 = 0;
	{
		t822* L_0 = (__this->f4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t972_TI));
		int32_t L_1 = m4935(NULL, ((int32_t)(((int32_t)((((int32_t)(((t122 *)L_0)->max_length)))<<1))|1)), &m4935_MI);
		V_0 = L_1;
		V_1 = ((t822*)SZArrayNew(InitializedTypeInfo(&t822_TI), V_0));
		V_2 = ((t1568*)SZArrayNew(InitializedTypeInfo(&t1568_TI), V_0));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		t822* L_2 = (__this->f4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, V_3);
		V_4 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_3))-1));
		goto IL_00a2;
	}

IL_0035:
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_4);
		t25* L_3 = (__this->f12);
		t2333* L_4 = (__this->f6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, V_4);
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t303 * >::Invoke(&m27315_MI, L_3, (*(t303 **)(t303 **)SZArrayLdElema(L_4, V_4)));
		int32_t L_6 = ((int32_t)(L_5|((int32_t)-2147483648)));
		V_9 = L_6;
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(V_2, V_4)));
		((t942 *)(t942 *)SZArrayLdElema(V_2, V_4))->f0 = L_6;
		V_5 = V_9;
		V_6 = ((int32_t)(((int32_t)(V_5&((int32_t)2147483647)))%V_0));
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_4);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_6);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(V_2, V_4)));
		((t942 *)(t942 *)SZArrayLdElema(V_2, V_4))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6))-1));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_6);
		*((int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6)) = (int32_t)((int32_t)(V_4+1));
		t1568* L_7 = (__this->f5);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_4);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_7, V_4)));
		int32_t L_8 = (((t942 *)(t942 *)SZArrayLdElema(L_7, V_4))->f1);
		V_4 = L_8;
	}

IL_00a2:
	{
		if ((((uint32_t)V_4) != ((uint32_t)(-1))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_00ab:
	{
		t822* L_9 = (__this->f4);
		NullCheck(L_9);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t122 *)L_9)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->f4 = V_1;
		__this->f5 = V_2;
		V_7 = ((t2333*)SZArrayNew(InitializedTypeInfo(&t2333_TI), V_0));
		V_8 = ((t822*)SZArrayNew(InitializedTypeInfo(&t822_TI), V_0));
		t2333* L_10 = (__this->f6);
		int32_t L_11 = (__this->f8);
		m4283(NULL, (t122 *)(t122 *)L_10, 0, (t122 *)(t122 *)V_7, 0, L_11, &m4283_MI);
		t822* L_12 = (__this->f7);
		int32_t L_13 = (__this->f8);
		m4283(NULL, (t122 *)(t122 *)L_12, 0, (t122 *)(t122 *)V_8, 0, L_13, &m4283_MI);
		__this->f6 = V_7;
		__this->f7 = V_8;
		__this->f11 = (((int32_t)((float)((((float)V_0))*(0.9f)))));
		return;
	}
}
extern MethodInfo m12825_MI;
 void m12825 (t475 * __this, t303 * p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12825_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t303 * L_0 = p0;
		if (((t303 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t165 * L_1 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_1, (t27*) &_stringLiteral559, &m489_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t25* L_2 = (__this->f12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t303 * >::Invoke(&m27315_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t822* L_4 = (__this->f4);
		NullCheck(L_4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t122 *)L_4)->max_length)))));
		t822* L_5 = (__this->f4);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_1);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		goto IL_008f;
	}

IL_0044:
	{
		t1568* L_6 = (__this->f5);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, V_2);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_6, V_2)));
		int32_t L_7 = (((t942 *)(t942 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t25* L_8 = (__this->f12);
		t2333* L_9 = (__this->f6);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, V_2);
		NullCheck(L_8);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t303 *, t303 * >::Invoke(&m27314_MI, L_8, (*(t303 **)(t303 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		t445 * L_11 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m2409(L_11, (t27*) &_stringLiteral564, &m2409_MI);
		il2cpp_codegen_raise_exception (L_11);
	}

IL_007d:
	{
		t1568* L_12 = (__this->f5);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, V_2);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_12, V_2)));
		int32_t L_13 = (((t942 *)(t942 *)SZArrayLdElema(L_12, V_2))->f1);
		V_2 = L_13;
	}

IL_008f:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_14 = (__this->f10);
		int32_t L_15 = ((int32_t)(L_14+1));
		V_3 = L_15;
		__this->f10 = L_15;
		int32_t L_16 = (__this->f11);
		if ((((int32_t)V_3) <= ((int32_t)L_16)))
		{
			goto IL_00c3;
		}
	}
	{
		m12824(__this, &m12824_MI);
		t822* L_17 = (__this->f4);
		NullCheck(L_17);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t122 *)L_17)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_18 = (__this->f9);
		V_2 = L_18;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_19 = (__this->f8);
		int32_t L_20 = L_19;
		V_3 = L_20;
		__this->f8 = ((int32_t)(L_20+1));
		V_2 = V_3;
		goto IL_00f9;
	}

IL_00e2:
	{
		t1568* L_21 = (__this->f5);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, V_2);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_21, V_2)));
		int32_t L_22 = (((t942 *)(t942 *)SZArrayLdElema(L_21, V_2))->f1);
		__this->f9 = L_22;
	}

IL_00f9:
	{
		t1568* L_23 = (__this->f5);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, V_2);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_23, V_2)));
		((t942 *)(t942 *)SZArrayLdElema(L_23, V_2))->f0 = V_0;
		t1568* L_24 = (__this->f5);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, V_2);
		t822* L_25 = (__this->f4);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, V_1);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_24, V_2)));
		((t942 *)(t942 *)SZArrayLdElema(L_24, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_25, V_1))-1));
		t822* L_26 = (__this->f4);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, V_1)) = (int32_t)((int32_t)(V_2+1));
		t2333* L_27 = (__this->f6);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, V_2);
		*((t303 **)(t303 **)SZArrayLdElema(L_27, V_2)) = (t303 *)p0;
		t822* L_28 = (__this->f7);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, V_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_28, V_2)) = (int32_t)p1;
		int32_t L_29 = (__this->f14);
		__this->f14 = ((int32_t)(L_29+1));
		return;
	}
}
extern MethodInfo m12826_MI;
 void m12826 (t475 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12826_MI);
	{
		__this->f10 = 0;
		t822* L_0 = (__this->f4);
		t822* L_1 = (__this->f4);
		NullCheck(L_1);
		m4279(NULL, (t122 *)(t122 *)L_0, 0, (((int32_t)(((t122 *)L_1)->max_length))), &m4279_MI);
		t2333* L_2 = (__this->f6);
		t2333* L_3 = (__this->f6);
		NullCheck(L_3);
		m4279(NULL, (t122 *)(t122 *)L_2, 0, (((int32_t)(((t122 *)L_3)->max_length))), &m4279_MI);
		t822* L_4 = (__this->f7);
		t822* L_5 = (__this->f7);
		NullCheck(L_5);
		m4279(NULL, (t122 *)(t122 *)L_4, 0, (((int32_t)(((t122 *)L_5)->max_length))), &m4279_MI);
		t1568* L_6 = (__this->f5);
		t1568* L_7 = (__this->f5);
		NullCheck(L_7);
		m4279(NULL, (t122 *)(t122 *)L_6, 0, (((int32_t)(((t122 *)L_7)->max_length))), &m4279_MI);
		__this->f9 = (-1);
		__this->f8 = 0;
		int32_t L_8 = (__this->f14);
		__this->f14 = ((int32_t)(L_8+1));
		return;
	}
}
extern MethodInfo m12827_MI;
 bool m12827 (t475 * __this, t303 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12827_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t303 * L_0 = p0;
		if (((t303 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t165 * L_1 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_1, (t27*) &_stringLiteral559, &m489_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t25* L_2 = (__this->f12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t303 * >::Invoke(&m27315_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t822* L_4 = (__this->f4);
		t822* L_5 = (__this->f4);
		NullCheck(L_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t122 *)L_5)->max_length))))));
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t122 *)L_5)->max_length)))))))-1));
		goto IL_0084;
	}

IL_0042:
	{
		t1568* L_6 = (__this->f5);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, V_1);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_6, V_1)));
		int32_t L_7 = (((t942 *)(t942 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0072;
		}
	}
	{
		t25* L_8 = (__this->f12);
		t2333* L_9 = (__this->f6);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, V_1);
		NullCheck(L_8);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t303 *, t303 * >::Invoke(&m27314_MI, L_8, (*(t303 **)(t303 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t1568* L_11 = (__this->f5);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, V_1);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_11, V_1)));
		int32_t L_12 = (((t942 *)(t942 *)SZArrayLdElema(L_11, V_1))->f1);
		V_1 = L_12;
	}

IL_0084:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m12828_MI;
 bool m12828 (t475 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12828_MI);
	t25* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2163_TI));
		t2163 * L_0 = m11313(NULL, &m11313_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		t822* L_1 = (__this->f4);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, V_1);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1))-1));
		goto IL_0040;
	}

IL_0017:
	{
		t822* L_2 = (__this->f7);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, V_2);
		NullCheck(V_0);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m26856_MI, V_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_2)), p0);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t1568* L_4 = (__this->f5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, V_2);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_4, V_2)));
		int32_t L_5 = (((t942 *)(t942 *)SZArrayLdElema(L_4, V_2))->f1);
		V_2 = L_5;
	}

IL_0040:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0048:
	{
		t822* L_6 = (__this->f4);
		NullCheck(L_6);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t122 *)L_6)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m12829_MI;
 void m12829 (t475 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12829_MI);
	t2356* V_0 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral318, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = (__this->f14);
		NullCheck(p0);
		m6265(p0, (t27*) &_stringLiteral565, L_1, &m6265_MI);
		t25* L_2 = (__this->f12);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral566, L_2, &m6271_MI);
		V_0 = (t2356*)NULL;
		int32_t L_3 = (__this->f10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->f10);
		V_0 = ((t2356*)SZArrayNew(InitializedTypeInfo(&t2356_TI), L_4));
		m12823(__this, V_0, 0, &m12823_MI);
	}

IL_004f:
	{
		t822* L_5 = (__this->f4);
		NullCheck(L_5);
		NullCheck(p0);
		m6265(p0, (t27*) &_stringLiteral567, (((int32_t)(((t122 *)L_5)->max_length))), &m6265_MI);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral568, (t25 *)(t25 *)V_0, &m6271_MI);
		return;
	}
}
extern MethodInfo m12830_MI;
 void m12830 (t475 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12830_MI);
	int32_t V_0 = 0;
	t2356* V_1 = {0};
	int32_t V_2 = 0;
	{
		t823 * L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		t823 * L_1 = (__this->f13);
		NullCheck(L_1);
		int32_t L_2 = m6274(L_1, (t27*) &_stringLiteral565, &m6274_MI);
		__this->f14 = L_2;
		t823 * L_3 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_4 = m484(NULL, LoadTypeToken(&t2353_0_0_0), &m484_MI);
		NullCheck(L_3);
		t25 * L_5 = m6261(L_3, (t27*) &_stringLiteral566, L_4, &m6261_MI);
		__this->f12 = ((t25*)Castclass(L_5, InitializedTypeInfo(&t2353_TI)));
		t823 * L_6 = (__this->f13);
		NullCheck(L_6);
		int32_t L_7 = m6274(L_6, (t27*) &_stringLiteral567, &m6274_MI);
		V_0 = L_7;
		t823 * L_8 = (__this->f13);
		t131 * L_9 = m484(NULL, LoadTypeToken(&t2356_0_0_0), &m484_MI);
		NullCheck(L_8);
		t25 * L_10 = m6261(L_8, (t27*) &_stringLiteral568, L_9, &m6261_MI);
		V_1 = ((t2356*)Castclass(L_10, InitializedTypeInfo(&t2356_TI)));
		if ((((int32_t)V_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		m12819(__this, V_0, &m12819_MI);
		__this->f10 = 0;
		if (!V_1)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		t303 * L_11 = m12840(((t2357 *)(t2357 *)SZArrayLdElema(V_1, V_2)), &m12840_MI);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		int32_t L_12 = m12842(((t2357 *)(t2357 *)SZArrayLdElema(V_1, V_2)), &m12842_MI);
		VirtActionInvoker2< t303 *, int32_t >::Invoke(&m12825_MI, __this, L_11, L_12);
		V_2 = ((int32_t)(V_2+1));
	}

IL_00b4:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t122 *)V_1)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_13 = (__this->f14);
		__this->f14 = ((int32_t)(L_13+1));
		__this->f13 = (t823 *)NULL;
		return;
	}
}
extern MethodInfo m12831_MI;
 bool m12831 (t475 * __this, t303 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12831_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t303 * V_4 = {0};
	int32_t V_5 = 0;
	{
		t303 * L_0 = p0;
		if (((t303 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t165 * L_1 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_1, (t27*) &_stringLiteral559, &m489_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t25* L_2 = (__this->f12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t303 * >::Invoke(&m27315_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t822* L_4 = (__this->f4);
		NullCheck(L_4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t122 *)L_4)->max_length)))));
		t822* L_5 = (__this->f4);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_1);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		t1568* L_6 = (__this->f5);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, V_2);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_6, V_2)));
		int32_t L_7 = (((t942 *)(t942 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		t25* L_8 = (__this->f12);
		t2333* L_9 = (__this->f6);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, V_2);
		NullCheck(L_8);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t303 *, t303 * >::Invoke(&m27314_MI, L_8, (*(t303 **)(t303 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		V_3 = V_2;
		t1568* L_11 = (__this->f5);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, V_2);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_11, V_2)));
		int32_t L_12 = (((t942 *)(t942 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_13 = (__this->f10);
		__this->f10 = ((int32_t)(L_13-1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		t822* L_14 = (__this->f4);
		t1568* L_15 = (__this->f5);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, V_2);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_15, V_2)));
		int32_t L_16 = (((t942 *)(t942 *)SZArrayLdElema(L_15, V_2))->f1);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_14, V_1)) = (int32_t)((int32_t)(L_16+1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t1568* L_17 = (__this->f5);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, V_3);
		t1568* L_18 = (__this->f5);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, V_2);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_18, V_2)));
		int32_t L_19 = (((t942 *)(t942 *)SZArrayLdElema(L_18, V_2))->f1);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_17, V_3)));
		((t942 *)(t942 *)SZArrayLdElema(L_17, V_3))->f1 = L_19;
	}

IL_00e9:
	{
		t1568* L_20 = (__this->f5);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, V_2);
		int32_t L_21 = (__this->f9);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_20, V_2)));
		((t942 *)(t942 *)SZArrayLdElema(L_20, V_2))->f1 = L_21;
		__this->f9 = V_2;
		t1568* L_22 = (__this->f5);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, V_2);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_22, V_2)));
		((t942 *)(t942 *)SZArrayLdElema(L_22, V_2))->f0 = 0;
		t2333* L_23 = (__this->f6);
		Initobj (&t303_TI, (&V_4));
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, V_2);
		*((t303 **)(t303 **)SZArrayLdElema(L_23, V_2)) = (t303 *)V_4;
		t822* L_24 = (__this->f7);
		Initobj (&t134_TI, (&V_5));
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, V_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_2)) = (int32_t)V_5;
		int32_t L_25 = (__this->f14);
		__this->f14 = ((int32_t)(L_25+1));
		return 1;
	}
}
extern MethodInfo m12832_MI;
 bool m12832 (t475 * __this, t303 * p0, int32_t* p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12832_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		t303 * L_0 = p0;
		if (((t303 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t165 * L_1 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_1, (t27*) &_stringLiteral559, &m489_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t25* L_2 = (__this->f12);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t303 * >::Invoke(&m27315_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t822* L_4 = (__this->f4);
		t822* L_5 = (__this->f4);
		NullCheck(L_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t122 *)L_5)->max_length))))));
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t122 *)L_5)->max_length)))))))-1));
		goto IL_0096;
	}

IL_0042:
	{
		t1568* L_6 = (__this->f5);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, V_1);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_6, V_1)));
		int32_t L_7 = (((t942 *)(t942 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0084;
		}
	}
	{
		t25* L_8 = (__this->f12);
		t2333* L_9 = (__this->f6);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, V_1);
		NullCheck(L_8);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t303 *, t303 * >::Invoke(&m27314_MI, L_8, (*(t303 **)(t303 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		t822* L_11 = (__this->f7);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, V_1);
		*p1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, V_1));
		return 1;
	}

IL_0084:
	{
		t1568* L_12 = (__this->f5);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, V_1);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_12, V_1)));
		int32_t L_13 = (((t942 *)(t942 *)SZArrayLdElema(L_12, V_1))->f1);
		V_1 = L_13;
	}

IL_0096:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Initobj (&t134_TI, (&V_2));
		*p1 = V_2;
		return 0;
	}
}
extern MethodInfo m12833_MI;
 t2355 * m12833 (t475 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12833_MI);
	{
		t2355 * L_0 = (t2355 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2355_TI));
		m12850(L_0, __this, &m12850_MI);
		return L_0;
	}
}
extern MethodInfo m12834_MI;
 t303 * m12834 (t475 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12834_MI);
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral559, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if (((t303 *)IsInst(p0, InitializedTypeInfo(&t303_TI))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t303_0_0_0), &m484_MI);
		NullCheck(L_1);
		t27* L_2 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m4368_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_3 = m610(NULL, (t27*) &_stringLiteral569, L_2, &m610_MI);
		t445 * L_4 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m6989(L_4, L_3, (t27*) &_stringLiteral559, &m6989_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_003a:
	{
		return ((t303 *)Castclass(p0, InitializedTypeInfo(&t303_TI)));
	}
}
extern MethodInfo m12835_MI;
 int32_t m12835 (t475 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12835_MI);
	int32_t V_0 = 0;
	{
		if (p0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t134_0_0_0), &m484_MI);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4337_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (&t134_TI, (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((t25 *)IsInst(p0, InitializedTypeInfo(&t134_TI))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_2 = m484(NULL, LoadTypeToken(&t134_0_0_0), &m484_MI);
		NullCheck(L_2);
		t27* L_3 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m4368_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_4 = m610(NULL, (t27*) &_stringLiteral569, L_3, &m610_MI);
		t445 * L_5 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m6989(L_5, L_4, (t27*) &_stringLiteral266, &m6989_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_004a:
	{
		return ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t134_TI)))));
	}
}
extern MethodInfo m12836_MI;
 bool m12836 (t475 * __this, t2357  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12836_MI);
	int32_t V_0 = 0;
	{
		t303 * L_0 = m12840((&p0), &m12840_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t303 *, int32_t* >::Invoke(&m12832_MI, __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2163_TI));
		t2163 * L_2 = m11313(NULL, &m11313_MI);
		int32_t L_3 = m12842((&p0), &m12842_MI);
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m26905_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m12837_MI;
 t2359  m12837 (t475 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12837_MI);
	{
		t2359  L_0 = {0};
		m12869(&L_0, __this, &m12869_MI);
		return L_0;
	}
}
extern MethodInfo m12838_MI;
 t944  m12838 (t25 * __this, t303 * p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12838_MI);
	{
		t303 * L_0 = p0;
		int32_t L_1 = p1;
		t25 * L_2 = Box(InitializedTypeInfo(&t134_TI), &L_1);
		t944  L_3 = {0};
		m4877(&L_3, ((t303 *)L_0), L_2, &m4877_MI);
		return L_3;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>
extern Il2CppType t134_0_0_32849;
FieldInfo t475_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t134_0_0_32849, &t475_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_32849;
FieldInfo t475_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t124_0_0_32849, &t475_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_32849;
FieldInfo t475_f2_FieldInfo = 
{
	"NO_SLOT", &t134_0_0_32849, &t475_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_32849;
FieldInfo t475_f3_FieldInfo = 
{
	"HASH_FLAG", &t134_0_0_32849, &t475_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t822_0_0_1;
FieldInfo t475_f4_FieldInfo = 
{
	"table", &t822_0_0_1, &t475_TI, offsetof(t475, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1568_0_0_1;
FieldInfo t475_f5_FieldInfo = 
{
	"linkSlots", &t1568_0_0_1, &t475_TI, offsetof(t475, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2333_0_0_1;
FieldInfo t475_f6_FieldInfo = 
{
	"keySlots", &t2333_0_0_1, &t475_TI, offsetof(t475, f6), &EmptyCustomAttributesCache};
extern Il2CppType t822_0_0_1;
FieldInfo t475_f7_FieldInfo = 
{
	"valueSlots", &t822_0_0_1, &t475_TI, offsetof(t475, f7), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t475_f8_FieldInfo = 
{
	"touchedSlots", &t134_0_0_1, &t475_TI, offsetof(t475, f8), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t475_f9_FieldInfo = 
{
	"emptySlot", &t134_0_0_1, &t475_TI, offsetof(t475, f9), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t475_f10_FieldInfo = 
{
	"count", &t134_0_0_1, &t475_TI, offsetof(t475, f10), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t475_f11_FieldInfo = 
{
	"threshold", &t134_0_0_1, &t475_TI, offsetof(t475, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2353_0_0_1;
FieldInfo t475_f12_FieldInfo = 
{
	"hcp", &t2353_0_0_1, &t475_TI, offsetof(t475, f12), &EmptyCustomAttributesCache};
extern Il2CppType t823_0_0_1;
FieldInfo t475_f13_FieldInfo = 
{
	"serialization_info", &t823_0_0_1, &t475_TI, offsetof(t475, f13), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t475_f14_FieldInfo = 
{
	"generation", &t134_0_0_1, &t475_TI, offsetof(t475, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2354_0_0_17;
extern CustomAttributesCache t949__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t475_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t2354_0_0_17, &t475_TI, offsetof(t475_SFs, f15), &t949__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t475_FIs[] =
{
	&t475_f0_FieldInfo,
	&t475_f1_FieldInfo,
	&t475_f2_FieldInfo,
	&t475_f3_FieldInfo,
	&t475_f4_FieldInfo,
	&t475_f5_FieldInfo,
	&t475_f6_FieldInfo,
	&t475_f7_FieldInfo,
	&t475_f8_FieldInfo,
	&t475_f9_FieldInfo,
	&t475_f10_FieldInfo,
	&t475_f11_FieldInfo,
	&t475_f12_FieldInfo,
	&t475_f13_FieldInfo,
	&t475_f14_FieldInfo,
	&t475_f15_FieldInfo,
	NULL
};
static const int32_t t475_f0_DefaultValueData = 10;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t475_f0_DefaultValue = 
{
	&t475_f0_FieldInfo, { (char*)&t475_f0_DefaultValueData, &t134_0_0_0 }};
static const float t475_f1_DefaultValueData = 0.9f;
extern Il2CppType t124_0_0_0;
static Il2CppFieldDefaultValueEntry t475_f1_DefaultValue = 
{
	&t475_f1_FieldInfo, { (char*)&t475_f1_DefaultValueData, &t124_0_0_0 }};
static const int32_t t475_f2_DefaultValueData = -1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t475_f2_DefaultValue = 
{
	&t475_f2_FieldInfo, { (char*)&t475_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t475_f3_DefaultValueData = -2147483648;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t475_f3_DefaultValue = 
{
	&t475_f3_FieldInfo, { (char*)&t475_f3_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t475_FDVs[] = 
{
	&t475_f0_DefaultValue,
	&t475_f1_DefaultValue,
	&t475_f2_DefaultValue,
	&t475_f3_DefaultValue,
	NULL
};
extern MethodInfo m12803_MI;
static PropertyInfo t475____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t475_TI, "System.Collections.IDictionary.Item", NULL, &m12803_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12804_MI;
static PropertyInfo t475____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t475_TI, "System.Collections.ICollection.IsSynchronized", &m12804_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12805_MI;
static PropertyInfo t475____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t475_TI, "System.Collections.ICollection.SyncRoot", &m12805_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12806_MI;
static PropertyInfo t475____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t475_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m12806_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12815_MI;
static PropertyInfo t475____Count_PropertyInfo = 
{
	&t475_TI, "Count", &m12815_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12816_MI;
extern MethodInfo m12817_MI;
static PropertyInfo t475____Item_PropertyInfo = 
{
	&t475_TI, "Item", &m12816_MI, &m12817_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12833_MI;
static PropertyInfo t475____Values_PropertyInfo = 
{
	&t475_TI, "Values", &m12833_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t475_PIs[] =
{
	&t475____System_Collections_IDictionary_Item_PropertyInfo,
	&t475____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t475____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t475____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t475____Count_PropertyInfo,
	&t475____Item_PropertyInfo,
	&t475____Values_PropertyInfo,
	NULL
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12799_MI = 
{
	".ctor", (methodPointerType)&m12799, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2353_0_0_0;
static ParameterInfo t475_m12800_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t2353_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12800_MI = 
{
	".ctor", (methodPointerType)&m12800, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t475_m12800_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t475_m12801_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12801_MI = 
{
	".ctor", (methodPointerType)&m12801, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t475_m12801_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t475_m12802_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m12802_MI = 
{
	".ctor", (methodPointerType)&m12802, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t475_m12802_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t475_m12803_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12803_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m12803, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t475_m12803_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t475_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12804_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m12804, &t475_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t475_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12805_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m12805, &t475_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t475_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12806_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m12806, &t475_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2357_0_0_0;
static ParameterInfo t475_m12807_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2357_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t2357 (MethodInfo* method, void* obj, void** args);
MethodInfo m12807_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m12807, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123_t2357, t475_m12807_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2357_0_0_0;
static ParameterInfo t475_m12808_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2357_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t2357 (MethodInfo* method, void* obj, void** args);
MethodInfo m12808_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m12808, &t475_TI, &t125_0_0_0, RuntimeInvoker_t125_t2357, t475_m12808_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2356_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t475_m12809_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2356_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12809_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m12809, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t475_m12809_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2357_0_0_0;
static ParameterInfo t475_m12810_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2357_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t2357 (MethodInfo* method, void* obj, void** args);
MethodInfo m12810_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m12810, &t475_TI, &t125_0_0_0, RuntimeInvoker_t125_t2357, t475_m12810_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t475_m12811_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12811_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m12811, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t475_m12811_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t475_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12812_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m12812, &t475_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t475_TI;
extern Il2CppType t2358_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12813_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m12813, &t475_TI, &t2358_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t475_TI;
extern Il2CppType t950_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12814_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m12814, &t475_TI, &t950_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t475_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12815_MI = 
{
	"get_Count", (methodPointerType)&m12815, &t475_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t475_m12816_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12816_MI = 
{
	"get_Item", (methodPointerType)&m12816, &t475_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t475_m12816_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t475_m12817_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12817_MI = 
{
	"set_Item", (methodPointerType)&m12817, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t475_m12817_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t2353_0_0_0;
static ParameterInfo t475_m12818_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t2353_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12818_MI = 
{
	"Init", (methodPointerType)&m12818, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t475_m12818_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t475_m12819_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12819_MI = 
{
	"InitArrays", (methodPointerType)&m12819, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t475_m12819_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t475_m12820_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12820_MI = 
{
	"CopyToCheck", (methodPointerType)&m12820, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t475_m12820_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern Il2CppGenericContainer m27345_IGC;
extern TypeInfo m27345_gp_TRet_0_TI;
Il2CppGenericParamFull m27345_gp_TRet_0_TI_GenericParamFull = { { &m27345_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m27345_gp_TElem_1_TI;
Il2CppGenericParamFull m27345_gp_TElem_1_TI_GenericParamFull = { { &m27345_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m27345_IGPA[2] = 
{
	&m27345_gp_TRet_0_TI_GenericParamFull,
	&m27345_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m27345_MI;
Il2CppGenericContainer m27345_IGC = { { NULL, NULL }, NULL, &m27345_MI, 2, 1, m27345_IGPA };
MethodInfo m27345_MI = 
{
	"Do_CopyTo", NULL, &t475_TI, &t123_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t475_m12821_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t2357_0_0_0;
extern void* RuntimeInvoker_t2357_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12821_MI = 
{
	"make_pair", (methodPointerType)&m12821, &t475_TI, &t2357_0_0_0, RuntimeInvoker_t2357_t25_t134, t475_m12821_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t475_m12822_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12822_MI = 
{
	"pick_value", (methodPointerType)&m12822, &t475_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t134, t475_m12822_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2356_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t475_m12823_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2356_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12823_MI = 
{
	"CopyTo", (methodPointerType)&m12823, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t475_m12823_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern Il2CppGenericContainer m27346_IGC;
extern TypeInfo m27346_gp_TRet_0_TI;
Il2CppGenericParamFull m27346_gp_TRet_0_TI_GenericParamFull = { { &m27346_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m27346_IGPA[1] = 
{
	&m27346_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m27346_MI;
Il2CppGenericContainer m27346_IGC = { { NULL, NULL }, NULL, &m27346_MI, 1, 1, m27346_IGPA };
MethodInfo m27346_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t475_TI, &t123_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12824_MI = 
{
	"Resize", (methodPointerType)&m12824, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t475_m12825_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12825_MI = 
{
	"Add", (methodPointerType)&m12825, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t475_m12825_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12826_MI = 
{
	"Clear", (methodPointerType)&m12826, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t475_m12827_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12827_MI = 
{
	"ContainsKey", (methodPointerType)&m12827, &t475_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t475_m12827_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t475_m12828_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12828_MI = 
{
	"ContainsValue", (methodPointerType)&m12828, &t475_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t475_m12828_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t475_m12829_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m12829_MI = 
{
	"GetObjectData", (methodPointerType)&m12829, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t475_m12829_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t475_m12830_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12830_MI = 
{
	"OnDeserialization", (methodPointerType)&m12830, &t475_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t475_m12830_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t475_m12831_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12831_MI = 
{
	"Remove", (methodPointerType)&m12831, &t475_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t475_m12831_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t134_1_0_0;
static ParameterInfo t475_m12832_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t134_1_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t499 (MethodInfo* method, void* obj, void** args);
MethodInfo m12832_MI = 
{
	"TryGetValue", (methodPointerType)&m12832, &t475_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t499, t475_m12832_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t475_TI;
extern Il2CppType t2355_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12833_MI = 
{
	"get_Values", (methodPointerType)&m12833, &t475_TI, &t2355_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t475_m12834_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12834_MI = 
{
	"ToTKey", (methodPointerType)&m12834, &t475_TI, &t303_0_0_0, RuntimeInvoker_t25_t25, t475_m12834_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t475_m12835_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12835_MI = 
{
	"ToTValue", (methodPointerType)&m12835, &t475_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t475_m12835_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2357_0_0_0;
static ParameterInfo t475_m12836_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t2357_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t2357 (MethodInfo* method, void* obj, void** args);
MethodInfo m12836_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m12836, &t475_TI, &t125_0_0_0, RuntimeInvoker_t125_t2357, t475_m12836_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t475_TI;
extern Il2CppType t2359_0_0_0;
extern void* RuntimeInvoker_t2359 (MethodInfo* method, void* obj, void** args);
MethodInfo m12837_MI = 
{
	"GetEnumerator", (methodPointerType)&m12837, &t475_TI, &t2359_0_0_0, RuntimeInvoker_t2359, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t475_m12838_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t475_TI;
extern Il2CppType t944_0_0_0;
extern void* RuntimeInvoker_t944_t25_t134 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t949__CustomAttributeCache_m8086;
MethodInfo m12838_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m12838, &t475_TI, &t944_0_0_0, RuntimeInvoker_t944_t25_t134, t475_m12838_ParameterInfos, &t949__CustomAttributeCache_m8086, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t475_MIs[] =
{
	&m12799_MI,
	&m12800_MI,
	&m12801_MI,
	&m12802_MI,
	&m12803_MI,
	&m12804_MI,
	&m12805_MI,
	&m12806_MI,
	&m12807_MI,
	&m12808_MI,
	&m12809_MI,
	&m12810_MI,
	&m12811_MI,
	&m12812_MI,
	&m12813_MI,
	&m12814_MI,
	&m12815_MI,
	&m12816_MI,
	&m12817_MI,
	&m12818_MI,
	&m12819_MI,
	&m12820_MI,
	&m27345_MI,
	&m12821_MI,
	&m12822_MI,
	&m12823_MI,
	&m27346_MI,
	&m12824_MI,
	&m12825_MI,
	&m12826_MI,
	&m12827_MI,
	&m12828_MI,
	&m12829_MI,
	&m12830_MI,
	&m12831_MI,
	&m12832_MI,
	&m12833_MI,
	&m12834_MI,
	&m12835_MI,
	&m12836_MI,
	&m12837_MI,
	&m12838_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12812_MI;
extern MethodInfo m12829_MI;
extern MethodInfo m12815_MI;
extern MethodInfo m12804_MI;
extern MethodInfo m12805_MI;
extern MethodInfo m12811_MI;
extern MethodInfo m12815_MI;
extern MethodInfo m12806_MI;
extern MethodInfo m12807_MI;
extern MethodInfo m12826_MI;
extern MethodInfo m12808_MI;
extern MethodInfo m12809_MI;
extern MethodInfo m12810_MI;
extern MethodInfo m12813_MI;
extern MethodInfo m12831_MI;
extern MethodInfo m12803_MI;
extern MethodInfo m12814_MI;
extern MethodInfo m12830_MI;
extern MethodInfo m12816_MI;
extern MethodInfo m12817_MI;
extern MethodInfo m12825_MI;
extern MethodInfo m12827_MI;
extern MethodInfo m12829_MI;
extern MethodInfo m12830_MI;
extern MethodInfo m12832_MI;
static MethodInfo* t475_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12812_MI,
	&m12829_MI,
	&m12815_MI,
	&m12804_MI,
	&m12805_MI,
	&m12811_MI,
	&m12815_MI,
	&m12806_MI,
	&m12807_MI,
	&m12826_MI,
	&m12808_MI,
	&m12809_MI,
	&m12810_MI,
	&m12813_MI,
	&m12831_MI,
	&m12803_MI,
	&m12814_MI,
	&m12830_MI,
	&m12816_MI,
	&m12817_MI,
	&m12825_MI,
	&m12827_MI,
	&m12829_MI,
	&m12830_MI,
	&m12832_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t485_TI;
extern TypeInfo t759_TI;
extern TypeInfo t4670_TI;
extern TypeInfo t4672_TI;
extern TypeInfo t5847_TI;
extern TypeInfo t846_TI;
extern TypeInfo t1604_TI;
static TypeInfo* t475_ITIs[] = 
{
	&t703_TI,
	&t485_TI,
	&t759_TI,
	&t4670_TI,
	&t4672_TI,
	&t5847_TI,
	&t846_TI,
	&t1604_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t485_TI;
extern TypeInfo t759_TI;
extern TypeInfo t4670_TI;
extern TypeInfo t4672_TI;
extern TypeInfo t5847_TI;
extern TypeInfo t846_TI;
extern TypeInfo t1604_TI;
static Il2CppInterfaceOffsetPair t475_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t485_TI, 5},
	{ &t759_TI, 6},
	{ &t4670_TI, 10},
	{ &t4672_TI, 17},
	{ &t5847_TI, 18},
	{ &t846_TI, 19},
	{ &t1604_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t475_0_0_0;
extern Il2CppType t475_1_0_0;
extern TypeInfo t25_TI;
struct t475;
extern TypeInfo t475_TI;
extern Il2CppGenericClass t475_GC;
extern CustomAttributesCache t949__CustomAttributeCache;
extern CustomAttributesCache t949__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t949__CustomAttributeCache_m8086;
TypeInfo t475_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t475_MIs, t475_PIs, t475_FIs, NULL, &t25_TI, NULL, NULL, &t475_TI, t475_ITIs, t475_VT, &t949__CustomAttributeCache, &t475_TI, &t475_0_0_0, &t475_1_0_0, t475_IOs, &t475_GC, NULL, t475_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t475), 0, -1, sizeof(t475_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 42, 7, 16, 0, 0, 29, 8, 8};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4670_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
extern MethodInfo m27347_MI;
static PropertyInfo t4670____Count_PropertyInfo = 
{
	&t4670_TI, "Count", &m27347_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27348_MI;
static PropertyInfo t4670____IsReadOnly_PropertyInfo = 
{
	&t4670_TI, "IsReadOnly", &m27348_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4670_PIs[] =
{
	&t4670____Count_PropertyInfo,
	&t4670____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4670_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27347_MI = 
{
	"get_Count", NULL, &t4670_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4670_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27348_MI = 
{
	"get_IsReadOnly", NULL, &t4670_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2357_0_0_0;
static ParameterInfo t4670_m27349_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2357_0_0_0},
};
extern TypeInfo t4670_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t2357 (MethodInfo* method, void* obj, void** args);
MethodInfo m27349_MI = 
{
	"Add", NULL, &t4670_TI, &t123_0_0_0, RuntimeInvoker_t123_t2357, t4670_m27349_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4670_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27350_MI = 
{
	"Clear", NULL, &t4670_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2357_0_0_0;
static ParameterInfo t4670_m27351_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2357_0_0_0},
};
extern TypeInfo t4670_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t2357 (MethodInfo* method, void* obj, void** args);
MethodInfo m27351_MI = 
{
	"Contains", NULL, &t4670_TI, &t125_0_0_0, RuntimeInvoker_t125_t2357, t4670_m27351_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2356_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4670_m27352_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2356_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4670_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27352_MI = 
{
	"CopyTo", NULL, &t4670_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4670_m27352_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2357_0_0_0;
static ParameterInfo t4670_m27353_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2357_0_0_0},
};
extern TypeInfo t4670_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t2357 (MethodInfo* method, void* obj, void** args);
MethodInfo m27353_MI = 
{
	"Remove", NULL, &t4670_TI, &t125_0_0_0, RuntimeInvoker_t125_t2357, t4670_m27353_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4670_MIs[] =
{
	&m27347_MI,
	&m27348_MI,
	&m27349_MI,
	&m27350_MI,
	&m27351_MI,
	&m27352_MI,
	&m27353_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4672_TI;
static TypeInfo* t4670_ITIs[] = 
{
	&t703_TI,
	&t4672_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4670_0_0_0;
extern Il2CppType t4670_1_0_0;
struct t4670;
extern TypeInfo t4670_TI;
extern Il2CppGenericClass t4670_GC;
TypeInfo t4670_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4670_MIs, t4670_PIs, NULL, NULL, NULL, NULL, NULL, &t4670_TI, t4670_ITIs, NULL, &EmptyCustomAttributesCache, &t4670_TI, &t4670_0_0_0, &t4670_1_0_0, NULL, &t4670_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4672_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
extern TypeInfo t4672_TI;
extern Il2CppType t2358_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27354_MI = 
{
	"GetEnumerator", NULL, &t4672_TI, &t2358_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4672_MIs[] =
{
	&m27354_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4672_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4672_0_0_0;
extern Il2CppType t4672_1_0_0;
struct t4672;
extern TypeInfo t4672_TI;
extern Il2CppGenericClass t4672_GC;
TypeInfo t4672_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4672_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4672_TI, t4672_ITIs, NULL, &EmptyCustomAttributesCache, &t4672_TI, &t4672_0_0_0, &t4672_1_0_0, NULL, &t4672_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2358_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
extern MethodInfo m27355_MI;
static PropertyInfo t2358____Current_PropertyInfo = 
{
	&t2358_TI, "Current", &m27355_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2358_PIs[] =
{
	&t2358____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2358_TI;
extern Il2CppType t2357_0_0_0;
extern void* RuntimeInvoker_t2357 (MethodInfo* method, void* obj, void** args);
MethodInfo m27355_MI = 
{
	"get_Current", NULL, &t2358_TI, &t2357_0_0_0, RuntimeInvoker_t2357, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2358_MIs[] =
{
	&m27355_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t2358_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2358_0_0_0;
extern Il2CppType t2358_1_0_0;
struct t2358;
extern TypeInfo t2358_TI;
extern Il2CppGenericClass t2358_GC;
TypeInfo t2358_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2358_MIs, t2358_PIs, NULL, NULL, NULL, NULL, NULL, &t2358_TI, t2358_ITIs, NULL, &EmptyCustomAttributesCache, &t2358_TI, &t2358_0_0_0, &t2358_1_0_0, NULL, &t2358_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2357_TI;

extern TypeInfo t2357_TI;
extern TypeInfo t548_TI;
extern TypeInfo t27_TI;
extern TypeInfo t303_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern MethodInfo m12841_MI;
extern MethodInfo m12843_MI;
extern MethodInfo m12840_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12842_MI;
extern MethodInfo m3945_MI;


extern MethodInfo m12839_MI;
 void m12839 (t2357 * __this, t303 * p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12839_MI);
	{
		m12841(__this, p0, &m12841_MI);
		m12843(__this, p1, &m12843_MI);
		return;
	}
}
extern MethodInfo m12840_MI;
 t303 * m12840 (t2357 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12840_MI);
	{
		t303 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m12841_MI;
 void m12841 (t2357 * __this, t303 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12841_MI);
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m12842_MI;
 int32_t m12842 (t2357 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12842_MI);
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m12843_MI;
 void m12843 (t2357 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12843_MI);
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m12844_MI;
 t27* m12844 (t2357 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12844_MI);
	t303 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	t548* G_B2_1 = {0};
	t548* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	t548* G_B1_1 = {0};
	t548* G_B1_2 = {0};
	t27* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t548* G_B3_2 = {0};
	t548* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	t548* G_B5_1 = {0};
	t548* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t548* G_B4_1 = {0};
	t548* G_B4_2 = {0};
	t27* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t548* G_B6_2 = {0};
	t548* G_B6_3 = {0};
	{
		t548* L_0 = ((t548*)SZArrayNew(InitializedTypeInfo(&t548_TI), 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (t27*) &_stringLiteral198);
		*((t27**)(t27**)SZArrayLdElema(L_0, 0)) = (t27*)(t27*) &_stringLiteral198;
		t548* L_1 = L_0;
		t303 * L_2 = m12840(__this, &m12840_MI);
		t303 * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((t303 *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		t303 * L_4 = m12840(__this, &m12840_MI);
		V_0 = L_4;
		NullCheck((*(&V_0)));
		t27* L_5 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m457_MI, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		G_B3_0 = (((t27_SFs*)(&t27_TI)->static_fields)->f2);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t27**)(t27**)SZArrayLdElema(G_B3_2, G_B3_1)) = (t27*)G_B3_0;
		t548* L_6 = G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (t27*) &_stringLiteral207);
		*((t27**)(t27**)SZArrayLdElema(L_6, 2)) = (t27*)(t27*) &_stringLiteral207;
		t548* L_7 = L_6;
		int32_t L_8 = m12842(__this, &m12842_MI);
		int32_t L_9 = L_8;
		t25 * L_10 = Box(InitializedTypeInfo(&t134_TI), &L_9);
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_10)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = m12842(__this, &m12842_MI);
		V_1 = L_11;
		NullCheck(Box(InitializedTypeInfo(&t134_TI), &(*(&V_1))));
		t27* L_12 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m457_MI, Box(InitializedTypeInfo(&t134_TI), &(*(&V_1))));
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		G_B6_0 = (((t27_SFs*)(&t27_TI)->static_fields)->f2);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t27**)(t27**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t27*)G_B6_0;
		t548* L_13 = G_B6_3;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, (t27*) &_stringLiteral199);
		*((t27**)(t27**)SZArrayLdElema(L_13, 4)) = (t27*)(t27*) &_stringLiteral199;
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_14 = m3945(NULL, L_13, &m3945_MI);
		return L_14;
	}
}
// Metadata Definition System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>
extern Il2CppType t303_0_0_1;
FieldInfo t2357_f0_FieldInfo = 
{
	"key", &t303_0_0_1, &t2357_TI, offsetof(t2357, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2357_f1_FieldInfo = 
{
	"value", &t134_0_0_1, &t2357_TI, offsetof(t2357, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2357_FIs[] =
{
	&t2357_f0_FieldInfo,
	&t2357_f1_FieldInfo,
	NULL
};
extern MethodInfo m12840_MI;
extern MethodInfo m12841_MI;
static PropertyInfo t2357____Key_PropertyInfo = 
{
	&t2357_TI, "Key", &m12840_MI, &m12841_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12842_MI;
extern MethodInfo m12843_MI;
static PropertyInfo t2357____Value_PropertyInfo = 
{
	&t2357_TI, "Value", &m12842_MI, &m12843_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2357_PIs[] =
{
	&t2357____Key_PropertyInfo,
	&t2357____Value_PropertyInfo,
	NULL
};
extern Il2CppType t303_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2357_m12839_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2357_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12839_MI = 
{
	".ctor", (methodPointerType)&m12839, &t2357_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2357_m12839_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2357_TI;
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12840_MI = 
{
	"get_Key", (methodPointerType)&m12840, &t2357_TI, &t303_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
static ParameterInfo t2357_m12841_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t2357_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12841_MI = 
{
	"set_Key", (methodPointerType)&m12841, &t2357_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2357_m12841_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2357_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12842_MI = 
{
	"get_Value", (methodPointerType)&m12842, &t2357_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2357_m12843_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2357_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12843_MI = 
{
	"set_Value", (methodPointerType)&m12843, &t2357_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2357_m12843_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2357_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12844_MI = 
{
	"ToString", (methodPointerType)&m12844, &t2357_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2357_MIs[] =
{
	&m12839_MI,
	&m12840_MI,
	&m12841_MI,
	&m12842_MI,
	&m12843_MI,
	&m12844_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m12844_MI;
static MethodInfo* t2357_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m12844_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2357_0_0_0;
extern Il2CppType t2357_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2357_TI;
extern Il2CppGenericClass t2357_GC;
extern CustomAttributesCache t955__CustomAttributeCache;
TypeInfo t2357_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t2357_MIs, t2357_PIs, t2357_FIs, NULL, &t117_TI, NULL, NULL, &t2357_TI, NULL, t2357_VT, &t955__CustomAttributeCache, &t2357_TI, &t2357_0_0_0, &t2357_1_0_0, NULL, &t2357_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2357)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t2360.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2360_TI;
#include "t2360MD.h"

extern TypeInfo t2360_TI;
extern TypeInfo t2357_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m12849_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20261_MI;
struct t122;
 t2357  m20261 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20261_MI;


extern MethodInfo m12845_MI;
 void m12845 (t2360 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12845_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12846_MI;
 t25 * m12846 (t2360 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12846_MI);
	{
		t2357  L_0 = m12849(__this, &m12849_MI);
		t2357  L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t2357_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12847_MI;
 void m12847 (t2360 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12847_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12848_MI;
 bool m12848 (t2360 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12848_MI);
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
extern MethodInfo m12849_MI;
 t2357  m12849 (t2360 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12849_MI);
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
		t2357  L_8 = m20261(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20261_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
extern Il2CppType t122_0_0_1;
FieldInfo t2360_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2360_TI, offsetof(t2360, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2360_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2360_TI, offsetof(t2360, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2360_FIs[] =
{
	&t2360_f0_FieldInfo,
	&t2360_f1_FieldInfo,
	NULL
};
extern MethodInfo m12846_MI;
static PropertyInfo t2360____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2360_TI, "System.Collections.IEnumerator.Current", &m12846_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12849_MI;
static PropertyInfo t2360____Current_PropertyInfo = 
{
	&t2360_TI, "Current", &m12849_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2360_PIs[] =
{
	&t2360____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2360____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2360_m12845_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2360_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12845_MI = 
{
	".ctor", (methodPointerType)&m12845, &t2360_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2360_m12845_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2360_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12846_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12846, &t2360_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2360_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12847_MI = 
{
	"Dispose", (methodPointerType)&m12847, &t2360_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2360_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12848_MI = 
{
	"MoveNext", (methodPointerType)&m12848, &t2360_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2360_TI;
extern Il2CppType t2357_0_0_0;
extern void* RuntimeInvoker_t2357 (MethodInfo* method, void* obj, void** args);
MethodInfo m12849_MI = 
{
	"get_Current", (methodPointerType)&m12849, &t2360_TI, &t2357_0_0_0, RuntimeInvoker_t2357, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2360_MIs[] =
{
	&m12845_MI,
	&m12846_MI,
	&m12847_MI,
	&m12848_MI,
	&m12849_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m12846_MI;
extern MethodInfo m12848_MI;
extern MethodInfo m12847_MI;
extern MethodInfo m12849_MI;
static MethodInfo* t2360_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m12846_MI,
	&m12848_MI,
	&m12847_MI,
	&m12849_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2358_TI;
static TypeInfo* t2360_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2358_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2358_TI;
static Il2CppInterfaceOffsetPair t2360_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2358_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2360_0_0_0;
extern Il2CppType t2360_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2360_TI;
extern Il2CppGenericClass t2360_GC;
extern TypeInfo t122_TI;
TypeInfo t2360_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2360_MIs, t2360_PIs, t2360_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2360_TI, t2360_ITIs, t2360_VT, &EmptyCustomAttributesCache, &t2360_TI, &t2360_0_0_0, &t2360_1_0_0, t2360_IOs, &t2360_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2360)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4671_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
extern MethodInfo m27356_MI;
extern MethodInfo m27357_MI;
static PropertyInfo t4671____Item_PropertyInfo = 
{
	&t4671_TI, "Item", &m27356_MI, &m27357_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4671_PIs[] =
{
	&t4671____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2357_0_0_0;
static ParameterInfo t4671_m27358_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2357_0_0_0},
};
extern TypeInfo t4671_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t2357 (MethodInfo* method, void* obj, void** args);
MethodInfo m27358_MI = 
{
	"IndexOf", NULL, &t4671_TI, &t134_0_0_0, RuntimeInvoker_t134_t2357, t4671_m27358_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t2357_0_0_0;
static ParameterInfo t4671_m27359_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2357_0_0_0},
};
extern TypeInfo t4671_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t2357 (MethodInfo* method, void* obj, void** args);
MethodInfo m27359_MI = 
{
	"Insert", NULL, &t4671_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t2357, t4671_m27359_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4671_m27360_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4671_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27360_MI = 
{
	"RemoveAt", NULL, &t4671_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4671_m27360_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4671_m27356_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4671_TI;
extern Il2CppType t2357_0_0_0;
extern void* RuntimeInvoker_t2357_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27356_MI = 
{
	"get_Item", NULL, &t4671_TI, &t2357_0_0_0, RuntimeInvoker_t2357_t134, t4671_m27356_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t2357_0_0_0;
static ParameterInfo t4671_m27357_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2357_0_0_0},
};
extern TypeInfo t4671_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t2357 (MethodInfo* method, void* obj, void** args);
MethodInfo m27357_MI = 
{
	"set_Item", NULL, &t4671_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t2357, t4671_m27357_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4671_MIs[] =
{
	&m27358_MI,
	&m27359_MI,
	&m27360_MI,
	&m27356_MI,
	&m27357_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4670_TI;
extern TypeInfo t4672_TI;
static TypeInfo* t4671_ITIs[] = 
{
	&t703_TI,
	&t4670_TI,
	&t4672_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4671_0_0_0;
extern Il2CppType t4671_1_0_0;
struct t4671;
extern TypeInfo t4671_TI;
extern Il2CppGenericClass t4671_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4671_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4671_MIs, t4671_PIs, NULL, NULL, NULL, NULL, NULL, &t4671_TI, t4671_ITIs, NULL, &t1518__CustomAttributeCache, &t4671_TI, &t4671_0_0_0, &t4671_1_0_0, NULL, &t4671_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5847_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<UnityEngine.UI.Graphic,System.Int32>
extern Il2CppType t303_0_0_0;
static ParameterInfo t5847_m27361_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t5847_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27361_MI = 
{
	"Remove", NULL, &t5847_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5847_m27361_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5847_MIs[] =
{
	&m27361_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4670_TI;
extern TypeInfo t4672_TI;
static TypeInfo* t5847_ITIs[] = 
{
	&t703_TI,
	&t4670_TI,
	&t4672_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5847_0_0_0;
extern Il2CppType t5847_1_0_0;
struct t5847;
extern TypeInfo t5847_TI;
extern Il2CppGenericClass t5847_GC;
extern CustomAttributesCache t1578__CustomAttributeCache;
TypeInfo t5847_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5847_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5847_TI, t5847_ITIs, NULL, &t1578__CustomAttributeCache, &t5847_TI, &t5847_0_0_0, &t5847_1_0_0, NULL, &t5847_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2355_TI;

#include "t2361.h"
#include "t2362.h"
extern TypeInfo t2355_TI;
extern TypeInfo t759_TI;
extern TypeInfo t25_TI;
extern TypeInfo t475_TI;
extern TypeInfo t134_TI;
extern TypeInfo t165_TI;
extern TypeInfo t177_TI;
extern TypeInfo t2361_TI;
extern TypeInfo t822_TI;
extern TypeInfo t123_TI;
extern TypeInfo t2362_TI;
#include "t2362MD.h"
#include "t2361MD.h"
extern MethodInfo m7921_MI;
extern MethodInfo m12815_MI;
extern MethodInfo m452_MI;
extern MethodInfo m489_MI;
extern MethodInfo m7533_MI;
extern MethodInfo m12828_MI;
extern MethodInfo m12862_MI;
extern MethodInfo m12861_MI;
extern MethodInfo m12820_MI;
extern MethodInfo m12822_MI;
extern MethodInfo m12880_MI;
extern MethodInfo m20272_MI;
extern MethodInfo m20273_MI;
extern MethodInfo m12864_MI;
struct t475;
 void m20272 (t475 * __this, t122 * p0, int32_t p1, t2362 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20272_MI;
struct t475;
 void m20273 (t475 * __this, t822* p0, int32_t p1, t2362 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20273_MI;


extern MethodInfo m12850_MI;
 void m12850 (t2355 * __this, t475 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12850_MI);
	{
		m452(__this, &m452_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral572, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m12851_MI;
 void m12851 (t2355 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12851_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m7533(L_0, (t27*) &_stringLiteral573, &m7533_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m12852_MI;
 void m12852 (t2355 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12852_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m7533(L_0, (t27*) &_stringLiteral573, &m7533_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m12853_MI;
 bool m12853 (t2355 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12853_MI);
	{
		t475 * L_0 = (__this->f0);
		NullCheck(L_0);
		bool L_1 = m12828(L_0, p0, &m12828_MI);
		return L_1;
	}
}
extern MethodInfo m12854_MI;
 bool m12854 (t2355 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12854_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m7533(L_0, (t27*) &_stringLiteral573, &m7533_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m12855_MI;
 t25* m12855 (t2355 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12855_MI);
	{
		t2361  L_0 = m12862(__this, &m12862_MI);
		t2361  L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t2361_TI), &L_1);
		return (t25*)L_2;
	}
}
extern MethodInfo m12856_MI;
 void m12856 (t2355 * __this, t122 * p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12856_MI);
	t822* V_0 = {0};
	{
		V_0 = ((t822*)IsInst(p0, InitializedTypeInfo(&t822_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t822*, int32_t >::Invoke(&m12861_MI, __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t475 * L_0 = (__this->f0);
		NullCheck(L_0);
		m12820(L_0, p0, p1, &m12820_MI);
		t475 * L_1 = (__this->f0);
		t61 L_2 = { &m12822_MI };
		t2362 * L_3 = (t2362 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2362_TI));
		m12880(L_3, NULL, L_2, &m12880_MI);
		NullCheck(L_1);
		m20272(L_1, p0, p1, L_3, &m20272_MI);
		return;
	}
}
extern MethodInfo m12857_MI;
 t25 * m12857 (t2355 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12857_MI);
	{
		t2361  L_0 = m12862(__this, &m12862_MI);
		t2361  L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t2361_TI), &L_1);
		return (t25 *)L_2;
	}
}
extern MethodInfo m12858_MI;
 bool m12858 (t2355 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12858_MI);
	{
		return 1;
	}
}
extern MethodInfo m12859_MI;
 bool m12859 (t2355 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12859_MI);
	{
		return 0;
	}
}
extern MethodInfo m12860_MI;
 t25 * m12860 (t2355 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12860_MI);
	{
		t475 * L_0 = (__this->f0);
		NullCheck(L_0);
		t25 * L_1 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m7921_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m12861_MI;
 void m12861 (t2355 * __this, t822* p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12861_MI);
	{
		t475 * L_0 = (__this->f0);
		NullCheck(L_0);
		m12820(L_0, (t122 *)(t122 *)p0, p1, &m12820_MI);
		t475 * L_1 = (__this->f0);
		t61 L_2 = { &m12822_MI };
		t2362 * L_3 = (t2362 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2362_TI));
		m12880(L_3, NULL, L_2, &m12880_MI);
		NullCheck(L_1);
		m20273(L_1, p0, p1, L_3, &m20273_MI);
		return;
	}
}
extern MethodInfo m12862_MI;
 t2361  m12862 (t2355 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12862_MI);
	{
		t475 * L_0 = (__this->f0);
		t2361  L_1 = {0};
		m12864(&L_1, L_0, &m12864_MI);
		return L_1;
	}
}
extern MethodInfo m12863_MI;
 int32_t m12863 (t2355 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12863_MI);
	{
		t475 * L_0 = (__this->f0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12815_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.Graphic,System.Int32>
extern Il2CppType t475_0_0_1;
FieldInfo t2355_f0_FieldInfo = 
{
	"dictionary", &t475_0_0_1, &t2355_TI, offsetof(t2355, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2355_FIs[] =
{
	&t2355_f0_FieldInfo,
	NULL
};
extern MethodInfo m12858_MI;
static PropertyInfo t2355____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t2355_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m12858_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12859_MI;
static PropertyInfo t2355____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2355_TI, "System.Collections.ICollection.IsSynchronized", &m12859_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12860_MI;
static PropertyInfo t2355____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2355_TI, "System.Collections.ICollection.SyncRoot", &m12860_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12863_MI;
static PropertyInfo t2355____Count_PropertyInfo = 
{
	&t2355_TI, "Count", &m12863_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2355_PIs[] =
{
	&t2355____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t2355____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2355____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2355____Count_PropertyInfo,
	NULL
};
extern Il2CppType t475_0_0_0;
static ParameterInfo t2355_m12850_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t475_0_0_0},
};
extern TypeInfo t2355_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12850_MI = 
{
	".ctor", (methodPointerType)&m12850, &t2355_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2355_m12850_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2355_m12851_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2355_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12851_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m12851, &t2355_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t2355_m12851_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2355_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12852_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m12852, &t2355_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2355_m12853_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2355_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12853_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m12853, &t2355_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t2355_m12853_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t2355_m12854_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2355_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12854_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m12854, &t2355_TI, &t125_0_0_0, RuntimeInvoker_t125_t134, t2355_m12854_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2355_TI;
extern Il2CppType t2224_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12855_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m12855, &t2355_TI, &t2224_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2355_m12856_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2355_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12856_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m12856, &t2355_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2355_m12856_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2355_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12857_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m12857, &t2355_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2355_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12858_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m12858, &t2355_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2355_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12859_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m12859, &t2355_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2355_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12860_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m12860, &t2355_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t822_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2355_m12861_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t822_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2355_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12861_MI = 
{
	"CopyTo", (methodPointerType)&m12861, &t2355_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2355_m12861_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2355_TI;
extern Il2CppType t2361_0_0_0;
extern void* RuntimeInvoker_t2361 (MethodInfo* method, void* obj, void** args);
MethodInfo m12862_MI = 
{
	"GetEnumerator", (methodPointerType)&m12862, &t2355_TI, &t2361_0_0_0, RuntimeInvoker_t2361, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2355_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12863_MI = 
{
	"get_Count", (methodPointerType)&m12863, &t2355_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2355_MIs[] =
{
	&m12850_MI,
	&m12851_MI,
	&m12852_MI,
	&m12853_MI,
	&m12854_MI,
	&m12855_MI,
	&m12856_MI,
	&m12857_MI,
	&m12858_MI,
	&m12859_MI,
	&m12860_MI,
	&m12861_MI,
	&m12862_MI,
	&m12863_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12857_MI;
extern MethodInfo m12863_MI;
extern MethodInfo m12859_MI;
extern MethodInfo m12860_MI;
extern MethodInfo m12856_MI;
extern MethodInfo m12863_MI;
extern MethodInfo m12858_MI;
extern MethodInfo m12851_MI;
extern MethodInfo m12852_MI;
extern MethodInfo m12853_MI;
extern MethodInfo m12861_MI;
extern MethodInfo m12854_MI;
extern MethodInfo m12855_MI;
static MethodInfo* t2355_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12857_MI,
	&m12863_MI,
	&m12859_MI,
	&m12860_MI,
	&m12856_MI,
	&m12863_MI,
	&m12858_MI,
	&m12851_MI,
	&m12852_MI,
	&m12853_MI,
	&m12861_MI,
	&m12854_MI,
	&m12855_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t4350_TI;
extern TypeInfo t4352_TI;
static TypeInfo* t2355_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t4350_TI,
	&t4352_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t4350_TI;
extern TypeInfo t4352_TI;
static Il2CppInterfaceOffsetPair t2355_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t4350_TI, 9},
	{ &t4352_TI, 16},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2355_0_0_0;
extern Il2CppType t2355_1_0_0;
extern TypeInfo t25_TI;
struct t2355;
extern TypeInfo t2355_TI;
extern Il2CppGenericClass t2355_GC;
extern TypeInfo t949_TI;
extern CustomAttributesCache t947__CustomAttributeCache;
TypeInfo t2355_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t2355_MIs, t2355_PIs, t2355_FIs, NULL, &t25_TI, NULL, &t949_TI, &t2355_TI, t2355_ITIs, t2355_VT, &t947__CustomAttributeCache, &t2355_TI, &t2355_0_0_0, &t2355_1_0_0, t2355_IOs, &t2355_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2355), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2361_TI;

extern TypeInfo t2361_TI;
extern TypeInfo t134_TI;
extern TypeInfo t2359_TI;
extern TypeInfo t123_TI;
extern TypeInfo t125_TI;
extern MethodInfo m12876_MI;
extern MethodInfo m12842_MI;
extern MethodInfo m12837_MI;
extern MethodInfo m12879_MI;
extern MethodInfo m12873_MI;


extern MethodInfo m12864_MI;
 void m12864 (t2361 * __this, t475 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12864_MI);
	{
		NullCheck(p0);
		t2359  L_0 = m12837(p0, &m12837_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m12865_MI;
 t25 * m12865 (t2361 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12865_MI);
	{
		t2359 * L_0 = &(__this->f0);
		int32_t L_1 = m12876(L_0, &m12876_MI);
		int32_t L_2 = L_1;
		t25 * L_3 = Box(InitializedTypeInfo(&t134_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m12866_MI;
 void m12866 (t2361 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12866_MI);
	{
		t2359 * L_0 = &(__this->f0);
		m12879(L_0, &m12879_MI);
		return;
	}
}
extern MethodInfo m12867_MI;
 bool m12867 (t2361 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12867_MI);
	{
		t2359 * L_0 = &(__this->f0);
		bool L_1 = m12873(L_0, &m12873_MI);
		return L_1;
	}
}
extern MethodInfo m12868_MI;
 int32_t m12868 (t2361 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12868_MI);
	{
		t2359 * L_0 = &(__this->f0);
		NullCheck(L_0);
		t2357 * L_1 = &(L_0->f3);
		int32_t L_2 = m12842(L_1, &m12842_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.Graphic,System.Int32>
extern Il2CppType t2359_0_0_1;
FieldInfo t2361_f0_FieldInfo = 
{
	"host_enumerator", &t2359_0_0_1, &t2361_TI, offsetof(t2361, f0) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2361_FIs[] =
{
	&t2361_f0_FieldInfo,
	NULL
};
extern MethodInfo m12865_MI;
static PropertyInfo t2361____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2361_TI, "System.Collections.IEnumerator.Current", &m12865_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12868_MI;
static PropertyInfo t2361____Current_PropertyInfo = 
{
	&t2361_TI, "Current", &m12868_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2361_PIs[] =
{
	&t2361____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2361____Current_PropertyInfo,
	NULL
};
extern Il2CppType t475_0_0_0;
static ParameterInfo t2361_m12864_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t475_0_0_0},
};
extern TypeInfo t2361_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12864_MI = 
{
	".ctor", (methodPointerType)&m12864, &t2361_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2361_m12864_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2361_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12865_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12865, &t2361_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2361_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12866_MI = 
{
	"Dispose", (methodPointerType)&m12866, &t2361_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2361_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12867_MI = 
{
	"MoveNext", (methodPointerType)&m12867, &t2361_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2361_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12868_MI = 
{
	"get_Current", (methodPointerType)&m12868, &t2361_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2361_MIs[] =
{
	&m12864_MI,
	&m12865_MI,
	&m12866_MI,
	&m12867_MI,
	&m12868_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m12865_MI;
extern MethodInfo m12867_MI;
extern MethodInfo m12866_MI;
extern MethodInfo m12868_MI;
static MethodInfo* t2361_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m12865_MI,
	&m12867_MI,
	&m12866_MI,
	&m12868_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2224_TI;
static TypeInfo* t2361_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2224_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2224_TI;
static Il2CppInterfaceOffsetPair t2361_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2224_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2361_0_0_0;
extern Il2CppType t2361_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2361_TI;
extern Il2CppGenericClass t2361_GC;
extern TypeInfo t947_TI;
TypeInfo t2361_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2361_MIs, t2361_PIs, t2361_FIs, NULL, &t117_TI, NULL, &t947_TI, &t2361_TI, t2361_ITIs, t2361_VT, &EmptyCustomAttributesCache, &t2361_TI, &t2361_0_0_0, &t2361_1_0_0, t2361_IOs, &t2361_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2361)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2359_TI;

extern TypeInfo t2359_TI;
extern TypeInfo t2357_TI;
extern TypeInfo t303_TI;
extern TypeInfo t134_TI;
extern TypeInfo t944_TI;
extern TypeInfo t475_TI;
extern TypeInfo t942_TI;
extern TypeInfo t1404_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m12878_MI;
extern MethodInfo m12840_MI;
extern MethodInfo m12842_MI;
extern MethodInfo m4877_MI;
extern MethodInfo m12875_MI;
extern MethodInfo m12877_MI;
extern MethodInfo m12839_MI;
extern MethodInfo m7635_MI;
extern MethodInfo m7431_MI;


extern MethodInfo m12869_MI;
 void m12869 (t2359 * __this, t475 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12869_MI);
	{
		__this->f0 = p0;
		NullCheck(p0);
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m12870_MI;
 t25 * m12870 (t2359 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12870_MI);
	{
		m12878(__this, &m12878_MI);
		t2357  L_0 = (__this->f3);
		t2357  L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t2357_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12871_MI;
 t944  m12871 (t2359 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12871_MI);
	{
		m12878(__this, &m12878_MI);
		t2357 * L_0 = &(__this->f3);
		t303 * L_1 = m12840(L_0, &m12840_MI);
		t303 * L_2 = L_1;
		t2357 * L_3 = &(__this->f3);
		int32_t L_4 = m12842(L_3, &m12842_MI);
		int32_t L_5 = L_4;
		t25 * L_6 = Box(InitializedTypeInfo(&t134_TI), &L_5);
		t944  L_7 = {0};
		m4877(&L_7, ((t303 *)L_2), L_6, &m4877_MI);
		return L_7;
	}
}
extern MethodInfo m12872_MI;
 t25 * m12872 (t2359 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12872_MI);
	{
		t303 * L_0 = m12875(__this, &m12875_MI);
		t303 * L_1 = L_0;
		return ((t303 *)L_1);
	}
}
extern MethodInfo m12873_MI;
 bool m12873 (t2359 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12873_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m12877(__this, &m12877_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->f1 = ((int32_t)(L_2+1));
		V_0 = V_1;
		t475 * L_3 = (__this->f0);
		NullCheck(L_3);
		t1568* L_4 = (L_3->f5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, V_0);
		NullCheck(((t942 *)(t942 *)SZArrayLdElema(L_4, V_0)));
		int32_t L_5 = (((t942 *)(t942 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)(L_5&((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t475 * L_6 = (__this->f0);
		NullCheck(L_6);
		t2333* L_7 = (L_6->f6);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_0);
		t475 * L_8 = (__this->f0);
		NullCheck(L_8);
		t822* L_9 = (L_8->f7);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, V_0);
		t2357  L_10 = {0};
		m12839(&L_10, (*(t303 **)(t303 **)SZArrayLdElema(L_7, V_0)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, V_0)), &m12839_MI);
		__this->f3 = L_10;
		return 1;
	}

IL_0072:
	{
		int32_t L_11 = (__this->f1);
		t475 * L_12 = (__this->f0);
		NullCheck(L_12);
		int32_t L_13 = (L_12->f8);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m12874_MI;
 t2357  m12874 (t2359 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12874_MI);
	{
		t2357  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m12875_MI;
 t303 * m12875 (t2359 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12875_MI);
	{
		m12878(__this, &m12878_MI);
		t2357 * L_0 = &(__this->f3);
		t303 * L_1 = m12840(L_0, &m12840_MI);
		return L_1;
	}
}
extern MethodInfo m12876_MI;
 int32_t m12876 (t2359 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12876_MI);
	{
		m12878(__this, &m12878_MI);
		t2357 * L_0 = &(__this->f3);
		int32_t L_1 = m12842(L_0, &m12842_MI);
		return L_1;
	}
}
extern MethodInfo m12877_MI;
 void m12877 (t2359 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12877_MI);
	{
		t475 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1404 * L_1 = (t1404 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1404_TI));
		m7635(L_1, (t27*)NULL, &m7635_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000f:
	{
		t475 * L_2 = (__this->f0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1387 * L_5 = (t1387 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1387_TI));
		m7431(L_5, (t27*) &_stringLiteral570, &m7431_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m12878_MI;
 void m12878 (t2359 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12878_MI);
	{
		m12877(__this, &m12877_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1387 * L_1 = (t1387 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1387_TI));
		m7431(L_1, (t27*) &_stringLiteral571, &m7431_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001a:
	{
		return;
	}
}
extern MethodInfo m12879_MI;
 void m12879 (t2359 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12879_MI);
	{
		__this->f0 = (t475 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.Graphic,System.Int32>
extern Il2CppType t475_0_0_1;
FieldInfo t2359_f0_FieldInfo = 
{
	"dictionary", &t475_0_0_1, &t2359_TI, offsetof(t2359, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2359_f1_FieldInfo = 
{
	"next", &t134_0_0_1, &t2359_TI, offsetof(t2359, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2359_f2_FieldInfo = 
{
	"stamp", &t134_0_0_1, &t2359_TI, offsetof(t2359, f2) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t2357_0_0_3;
FieldInfo t2359_f3_FieldInfo = 
{
	"current", &t2357_0_0_3, &t2359_TI, offsetof(t2359, f3) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2359_FIs[] =
{
	&t2359_f0_FieldInfo,
	&t2359_f1_FieldInfo,
	&t2359_f2_FieldInfo,
	&t2359_f3_FieldInfo,
	NULL
};
extern MethodInfo m12870_MI;
static PropertyInfo t2359____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2359_TI, "System.Collections.IEnumerator.Current", &m12870_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12871_MI;
static PropertyInfo t2359____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t2359_TI, "System.Collections.IDictionaryEnumerator.Entry", &m12871_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12872_MI;
static PropertyInfo t2359____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t2359_TI, "System.Collections.IDictionaryEnumerator.Key", &m12872_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12874_MI;
static PropertyInfo t2359____Current_PropertyInfo = 
{
	&t2359_TI, "Current", &m12874_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12875_MI;
static PropertyInfo t2359____CurrentKey_PropertyInfo = 
{
	&t2359_TI, "CurrentKey", &m12875_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12876_MI;
static PropertyInfo t2359____CurrentValue_PropertyInfo = 
{
	&t2359_TI, "CurrentValue", &m12876_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2359_PIs[] =
{
	&t2359____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2359____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t2359____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t2359____Current_PropertyInfo,
	&t2359____CurrentKey_PropertyInfo,
	&t2359____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t475_0_0_0;
static ParameterInfo t2359_m12869_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t475_0_0_0},
};
extern TypeInfo t2359_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12869_MI = 
{
	".ctor", (methodPointerType)&m12869, &t2359_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2359_m12869_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2359_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12870_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12870, &t2359_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2359_TI;
extern Il2CppType t944_0_0_0;
extern void* RuntimeInvoker_t944 (MethodInfo* method, void* obj, void** args);
MethodInfo m12871_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m12871, &t2359_TI, &t944_0_0_0, RuntimeInvoker_t944, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2359_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12872_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m12872, &t2359_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2359_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12873_MI = 
{
	"MoveNext", (methodPointerType)&m12873, &t2359_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2359_TI;
extern Il2CppType t2357_0_0_0;
extern void* RuntimeInvoker_t2357 (MethodInfo* method, void* obj, void** args);
MethodInfo m12874_MI = 
{
	"get_Current", (methodPointerType)&m12874, &t2359_TI, &t2357_0_0_0, RuntimeInvoker_t2357, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2359_TI;
extern Il2CppType t303_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12875_MI = 
{
	"get_CurrentKey", (methodPointerType)&m12875, &t2359_TI, &t303_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2359_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12876_MI = 
{
	"get_CurrentValue", (methodPointerType)&m12876, &t2359_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2359_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12877_MI = 
{
	"VerifyState", (methodPointerType)&m12877, &t2359_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2359_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12878_MI = 
{
	"VerifyCurrent", (methodPointerType)&m12878, &t2359_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2359_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12879_MI = 
{
	"Dispose", (methodPointerType)&m12879, &t2359_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2359_MIs[] =
{
	&m12869_MI,
	&m12870_MI,
	&m12871_MI,
	&m12872_MI,
	&m12873_MI,
	&m12874_MI,
	&m12875_MI,
	&m12876_MI,
	&m12877_MI,
	&m12878_MI,
	&m12879_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m12870_MI;
extern MethodInfo m12873_MI;
extern MethodInfo m12879_MI;
extern MethodInfo m12874_MI;
extern MethodInfo m12871_MI;
extern MethodInfo m12872_MI;
static MethodInfo* t2359_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m12870_MI,
	&m12873_MI,
	&m12879_MI,
	&m12874_MI,
	&m12871_MI,
	&m12872_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2358_TI;
extern TypeInfo t950_TI;
static TypeInfo* t2359_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2358_TI,
	&t950_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2358_TI;
extern TypeInfo t950_TI;
static Il2CppInterfaceOffsetPair t2359_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2358_TI, 7},
	{ &t950_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2359_0_0_0;
extern Il2CppType t2359_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2359_TI;
extern Il2CppGenericClass t2359_GC;
extern TypeInfo t949_TI;
TypeInfo t2359_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2359_MIs, t2359_PIs, t2359_FIs, NULL, &t117_TI, NULL, &t949_TI, &t2359_TI, t2359_ITIs, t2359_VT, &EmptyCustomAttributesCache, &t2359_TI, &t2359_0_0_0, &t2359_1_0_0, t2359_IOs, &t2359_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2359)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2362_TI;



extern MethodInfo m12880_MI;
 void m12880 (t2362 * __this, t25 * p0, t61 p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12880_MI);
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m12881_MI;
 int32_t m12881 (t2362 * __this, t303 * p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12881_MI);
	typedef  int32_t (*FunctionPointerType) (t25 * __this, t303 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m12881((t2362 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m12882_MI;
 t25 * m12882 (t2362 * __this, t303 * p0, int32_t p1, t219 * p2, t25 * p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12882_MI);
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t134_TI), &p1);
	return (t25 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m12883_MI;
 int32_t m12883 (t2362 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12883_MI);
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Int32>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2362_m12880_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2362_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m12880_MI = 
{
	".ctor", (methodPointerType)&m12880, &t2362_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2362_m12880_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2362_m12881_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2362_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12881_MI = 
{
	"Invoke", (methodPointerType)&m12881, &t2362_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t134, t2362_m12881_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2362_m12882_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2362_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12882_MI = 
{
	"BeginInvoke", (methodPointerType)&m12882, &t2362_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t134_t25_t25, t2362_m12882_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2362_m12883_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2362_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12883_MI = 
{
	"EndInvoke", (methodPointerType)&m12883, &t2362_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2362_m12883_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2362_MIs[] =
{
	&m12880_MI,
	&m12881_MI,
	&m12882_MI,
	&m12883_MI,
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
extern MethodInfo m12881_MI;
extern MethodInfo m12882_MI;
extern MethodInfo m12883_MI;
static MethodInfo* t2362_VT[] =
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
	&m12881_MI,
	&m12882_MI,
	&m12883_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2362_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2362_0_0_0;
extern Il2CppType t2362_1_0_0;
extern TypeInfo t345_TI;
struct t2362;
extern TypeInfo t2362_TI;
extern Il2CppGenericClass t2362_GC;
extern TypeInfo t949_TI;
TypeInfo t2362_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2362_MIs, NULL, NULL, NULL, &t345_TI, NULL, &t949_TI, &t2362_TI, NULL, t2362_VT, &EmptyCustomAttributesCache, &t2362_TI, &t2362_0_0_0, &t2362_1_0_0, t2362_IOs, &t2362_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2362), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2354_TI;



extern MethodInfo m12884_MI;
 void m12884 (t2354 * __this, t25 * p0, t61 p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12884_MI);
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m12885_MI;
 t944  m12885 (t2354 * __this, t303 * p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12885_MI);
	typedef  t944  (*FunctionPointerType) (t25 * __this, t303 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m12885((t2354 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m12886_MI;
 t25 * m12886 (t2354 * __this, t303 * p0, int32_t p1, t219 * p2, t25 * p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12886_MI);
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t134_TI), &p1);
	return (t25 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m12887_MI;
 t944  m12887 (t2354 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12887_MI);
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t944 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2354_m12884_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2354_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m12884_MI = 
{
	".ctor", (methodPointerType)&m12884, &t2354_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2354_m12884_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2354_m12885_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2354_TI;
extern Il2CppType t944_0_0_0;
extern void* RuntimeInvoker_t944_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12885_MI = 
{
	"Invoke", (methodPointerType)&m12885, &t2354_TI, &t944_0_0_0, RuntimeInvoker_t944_t25_t134, t2354_m12885_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2354_m12886_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2354_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12886_MI = 
{
	"BeginInvoke", (methodPointerType)&m12886, &t2354_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t134_t25_t25, t2354_m12886_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2354_m12887_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2354_TI;
extern Il2CppType t944_0_0_0;
extern void* RuntimeInvoker_t944_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12887_MI = 
{
	"EndInvoke", (methodPointerType)&m12887, &t2354_TI, &t944_0_0_0, RuntimeInvoker_t944_t25, t2354_m12887_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2354_MIs[] =
{
	&m12884_MI,
	&m12885_MI,
	&m12886_MI,
	&m12887_MI,
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
extern MethodInfo m12885_MI;
extern MethodInfo m12886_MI;
extern MethodInfo m12887_MI;
static MethodInfo* t2354_VT[] =
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
	&m12885_MI,
	&m12886_MI,
	&m12887_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2354_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2354_0_0_0;
extern Il2CppType t2354_1_0_0;
extern TypeInfo t345_TI;
struct t2354;
extern TypeInfo t2354_TI;
extern Il2CppGenericClass t2354_GC;
extern TypeInfo t949_TI;
TypeInfo t2354_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2354_MIs, NULL, NULL, NULL, &t345_TI, NULL, &t949_TI, &t2354_TI, NULL, t2354_VT, &EmptyCustomAttributesCache, &t2354_TI, &t2354_0_0_0, &t2354_1_0_0, t2354_IOs, &t2354_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2354), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2363_TI;



extern MethodInfo m12888_MI;
 void m12888 (t2363 * __this, t25 * p0, t61 p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12888_MI);
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m12889_MI;
 t2357  m12889 (t2363 * __this, t303 * p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12889_MI);
	typedef  t2357  (*FunctionPointerType) (t25 * __this, t303 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m12889((t2363 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m12890_MI;
 t25 * m12890 (t2363 * __this, t303 * p0, int32_t p1, t219 * p2, t25 * p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12890_MI);
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t134_TI), &p1);
	return (t25 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m12891_MI;
 t2357  m12891 (t2363 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12891_MI);
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2357 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2363_m12888_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2363_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m12888_MI = 
{
	".ctor", (methodPointerType)&m12888, &t2363_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2363_m12888_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2363_m12889_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2363_TI;
extern Il2CppType t2357_0_0_0;
extern void* RuntimeInvoker_t2357_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12889_MI = 
{
	"Invoke", (methodPointerType)&m12889, &t2363_TI, &t2357_0_0_0, RuntimeInvoker_t2357_t25_t134, t2363_m12889_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t303_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2363_m12890_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2363_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12890_MI = 
{
	"BeginInvoke", (methodPointerType)&m12890, &t2363_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t134_t25_t25, t2363_m12890_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2363_m12891_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2363_TI;
extern Il2CppType t2357_0_0_0;
extern void* RuntimeInvoker_t2357_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12891_MI = 
{
	"EndInvoke", (methodPointerType)&m12891, &t2363_TI, &t2357_0_0_0, RuntimeInvoker_t2357_t25, t2363_m12891_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2363_MIs[] =
{
	&m12888_MI,
	&m12889_MI,
	&m12890_MI,
	&m12891_MI,
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
extern MethodInfo m12889_MI;
extern MethodInfo m12890_MI;
extern MethodInfo m12891_MI;
static MethodInfo* t2363_VT[] =
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
	&m12889_MI,
	&m12890_MI,
	&m12891_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2363_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2363_0_0_0;
extern Il2CppType t2363_1_0_0;
extern TypeInfo t345_TI;
struct t2363;
extern TypeInfo t2363_TI;
extern Il2CppGenericClass t2363_GC;
extern TypeInfo t949_TI;
TypeInfo t2363_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2363_MIs, NULL, NULL, NULL, &t345_TI, NULL, &t949_TI, &t2363_TI, NULL, t2363_VT, &EmptyCustomAttributesCache, &t2363_TI, &t2363_0_0_0, &t2363_1_0_0, t2363_IOs, &t2363_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2363), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2364_TI;

extern TypeInfo t2364_TI;
extern TypeInfo t2359_TI;
extern TypeInfo t950_TI;
extern TypeInfo t944_TI;
extern TypeInfo t2357_TI;
extern TypeInfo t303_TI;
extern TypeInfo t125_TI;
extern MethodInfo m8233_MI;
extern MethodInfo m12874_MI;
extern MethodInfo m12840_MI;
extern MethodInfo m12894_MI;
extern MethodInfo m452_MI;
extern MethodInfo m12837_MI;
extern MethodInfo m12873_MI;


extern MethodInfo m12892_MI;
 void m12892 (t2364 * __this, t475 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12892_MI);
	{
		m452(__this, &m452_MI);
		NullCheck(p0);
		t2359  L_0 = m12837(p0, &m12837_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m12893_MI;
 bool m12893 (t2364 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12893_MI);
	{
		t2359 * L_0 = &(__this->f0);
		bool L_1 = m12873(L_0, &m12873_MI);
		return L_1;
	}
}
extern MethodInfo m12894_MI;
 t944  m12894 (t2364 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12894_MI);
	{
		t2359  L_0 = (__this->f0);
		t2359  L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t2359_TI), &L_1);
		NullCheck(L_2);
		t944  L_3 = (t944 )InterfaceFuncInvoker0< t944  >::Invoke(&m8233_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m12895_MI;
 t25 * m12895 (t2364 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12895_MI);
	t2357  V_0 = {0};
	{
		t2359 * L_0 = &(__this->f0);
		t2357  L_1 = m12874(L_0, &m12874_MI);
		V_0 = L_1;
		t303 * L_2 = m12840((&V_0), &m12840_MI);
		t303 * L_3 = L_2;
		return ((t303 *)L_3);
	}
}
extern MethodInfo m12896_MI;
 t25 * m12896 (t2364 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12896_MI);
	{
		t944  L_0 = (t944 )VirtFuncInvoker0< t944  >::Invoke(&m12894_MI, __this);
		t944  L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t944_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.Graphic,System.Int32>
extern Il2CppType t2359_0_0_1;
FieldInfo t2364_f0_FieldInfo = 
{
	"host_enumerator", &t2359_0_0_1, &t2364_TI, offsetof(t2364, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2364_FIs[] =
{
	&t2364_f0_FieldInfo,
	NULL
};
extern MethodInfo m12894_MI;
static PropertyInfo t2364____Entry_PropertyInfo = 
{
	&t2364_TI, "Entry", &m12894_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12895_MI;
static PropertyInfo t2364____Key_PropertyInfo = 
{
	&t2364_TI, "Key", &m12895_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12896_MI;
static PropertyInfo t2364____Current_PropertyInfo = 
{
	&t2364_TI, "Current", &m12896_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2364_PIs[] =
{
	&t2364____Entry_PropertyInfo,
	&t2364____Key_PropertyInfo,
	&t2364____Current_PropertyInfo,
	NULL
};
extern Il2CppType t475_0_0_0;
static ParameterInfo t2364_m12892_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t475_0_0_0},
};
extern TypeInfo t2364_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12892_MI = 
{
	".ctor", (methodPointerType)&m12892, &t2364_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2364_m12892_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2364_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12893_MI = 
{
	"MoveNext", (methodPointerType)&m12893, &t2364_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2364_TI;
extern Il2CppType t944_0_0_0;
extern void* RuntimeInvoker_t944 (MethodInfo* method, void* obj, void** args);
MethodInfo m12894_MI = 
{
	"get_Entry", (methodPointerType)&m12894, &t2364_TI, &t944_0_0_0, RuntimeInvoker_t944, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2364_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12895_MI = 
{
	"get_Key", (methodPointerType)&m12895, &t2364_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2364_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12896_MI = 
{
	"get_Current", (methodPointerType)&m12896, &t2364_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2364_MIs[] =
{
	&m12892_MI,
	&m12893_MI,
	&m12894_MI,
	&m12895_MI,
	&m12896_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12896_MI;
extern MethodInfo m12893_MI;
extern MethodInfo m12894_MI;
extern MethodInfo m12895_MI;
static MethodInfo* t2364_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12896_MI,
	&m12893_MI,
	&m12894_MI,
	&m12895_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t950_TI;
static TypeInfo* t2364_ITIs[] = 
{
	&t78_TI,
	&t950_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t950_TI;
static Il2CppInterfaceOffsetPair t2364_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t950_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2364_0_0_0;
extern Il2CppType t2364_1_0_0;
extern TypeInfo t25_TI;
struct t2364;
extern TypeInfo t2364_TI;
extern Il2CppGenericClass t2364_GC;
extern TypeInfo t949_TI;
TypeInfo t2364_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t2364_MIs, t2364_PIs, t2364_FIs, NULL, &t25_TI, NULL, &t949_TI, &t2364_TI, t2364_ITIs, t2364_VT, &EmptyCustomAttributesCache, &t2364_TI, &t2364_0_0_0, &t2364_1_0_0, t2364_IOs, &t2364_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2364), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#include "t2365.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2365_TI;
#include "t2365MD.h"

extern TypeInfo t2365_TI;
extern TypeInfo t2350_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m12901_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20279_MI;
struct t122;
 t2350  m20279 (t122 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20279_MI;


extern MethodInfo m12897_MI;
 void m12897 (t2365 * __this, t122 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12897_MI);
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12898_MI;
 t25 * m12898 (t2365 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12898_MI);
	{
		t2350  L_0 = m12901(__this, &m12901_MI);
		t2350  L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t2350_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12899_MI;
 void m12899 (t2365 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12899_MI);
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12900_MI;
 bool m12900 (t2365 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12900_MI);
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
extern MethodInfo m12901_MI;
 t2350  m12901 (t2365 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12901_MI);
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
		t2350  L_8 = m20279(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20279_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
extern Il2CppType t122_0_0_1;
FieldInfo t2365_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2365_TI, offsetof(t2365, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2365_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2365_TI, offsetof(t2365, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2365_FIs[] =
{
	&t2365_f0_FieldInfo,
	&t2365_f1_FieldInfo,
	NULL
};
extern MethodInfo m12898_MI;
static PropertyInfo t2365____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2365_TI, "System.Collections.IEnumerator.Current", &m12898_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12901_MI;
static PropertyInfo t2365____Current_PropertyInfo = 
{
	&t2365_TI, "Current", &m12901_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2365_PIs[] =
{
	&t2365____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2365____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2365_m12897_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2365_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12897_MI = 
{
	".ctor", (methodPointerType)&m12897, &t2365_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2365_m12897_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2365_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12898_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12898, &t2365_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2365_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12899_MI = 
{
	"Dispose", (methodPointerType)&m12899, &t2365_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2365_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12900_MI = 
{
	"MoveNext", (methodPointerType)&m12900, &t2365_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2365_TI;
extern Il2CppType t2350_0_0_0;
extern void* RuntimeInvoker_t2350 (MethodInfo* method, void* obj, void** args);
MethodInfo m12901_MI = 
{
	"get_Current", (methodPointerType)&m12901, &t2365_TI, &t2350_0_0_0, RuntimeInvoker_t2350, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2365_MIs[] =
{
	&m12897_MI,
	&m12898_MI,
	&m12899_MI,
	&m12900_MI,
	&m12901_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m12898_MI;
extern MethodInfo m12900_MI;
extern MethodInfo m12899_MI;
extern MethodInfo m12901_MI;
static MethodInfo* t2365_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m12898_MI,
	&m12900_MI,
	&m12899_MI,
	&m12901_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2351_TI;
static TypeInfo* t2365_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2351_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2351_TI;
static Il2CppInterfaceOffsetPair t2365_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2351_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2365_0_0_0;
extern Il2CppType t2365_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2365_TI;
extern Il2CppGenericClass t2365_GC;
extern TypeInfo t122_TI;
TypeInfo t2365_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2365_MIs, t2365_PIs, t2365_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2365_TI, t2365_ITIs, t2365_VT, &EmptyCustomAttributesCache, &t2365_TI, &t2365_0_0_0, &t2365_1_0_0, t2365_IOs, &t2365_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2365)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4674_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
extern MethodInfo m27362_MI;
extern MethodInfo m27363_MI;
static PropertyInfo t4674____Item_PropertyInfo = 
{
	&t4674_TI, "Item", &m27362_MI, &m27363_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4674_PIs[] =
{
	&t4674____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2350_0_0_0;
static ParameterInfo t4674_m27364_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2350_0_0_0},
};
extern TypeInfo t4674_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t2350 (MethodInfo* method, void* obj, void** args);
MethodInfo m27364_MI = 
{
	"IndexOf", NULL, &t4674_TI, &t134_0_0_0, RuntimeInvoker_t134_t2350, t4674_m27364_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t2350_0_0_0;
static ParameterInfo t4674_m27365_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2350_0_0_0},
};
extern TypeInfo t4674_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t2350 (MethodInfo* method, void* obj, void** args);
MethodInfo m27365_MI = 
{
	"Insert", NULL, &t4674_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t2350, t4674_m27365_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4674_m27366_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4674_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27366_MI = 
{
	"RemoveAt", NULL, &t4674_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4674_m27366_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4674_m27362_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4674_TI;
extern Il2CppType t2350_0_0_0;
extern void* RuntimeInvoker_t2350_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27362_MI = 
{
	"get_Item", NULL, &t4674_TI, &t2350_0_0_0, RuntimeInvoker_t2350_t134, t4674_m27362_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t2350_0_0_0;
static ParameterInfo t4674_m27363_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2350_0_0_0},
};
extern TypeInfo t4674_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t2350 (MethodInfo* method, void* obj, void** args);
MethodInfo m27363_MI = 
{
	"set_Item", NULL, &t4674_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t2350, t4674_m27363_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4674_MIs[] =
{
	&m27364_MI,
	&m27365_MI,
	&m27366_MI,
	&m27362_MI,
	&m27363_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4673_TI;
extern TypeInfo t4675_TI;
static TypeInfo* t4674_ITIs[] = 
{
	&t703_TI,
	&t4673_TI,
	&t4675_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4674_0_0_0;
extern Il2CppType t4674_1_0_0;
struct t4674;
extern TypeInfo t4674_TI;
extern Il2CppGenericClass t4674_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4674_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4674_MIs, t4674_PIs, NULL, NULL, NULL, NULL, NULL, &t4674_TI, t4674_ITIs, NULL, &t1518__CustomAttributeCache, &t4674_TI, &t4674_0_0_0, &t4674_1_0_0, NULL, &t4674_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5846_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t309_0_0_0;
static ParameterInfo t5846_m27367_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t5846_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27367_MI = 
{
	"Remove", NULL, &t5846_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5846_m27367_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5846_MIs[] =
{
	&m27367_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4673_TI;
extern TypeInfo t4675_TI;
static TypeInfo* t5846_ITIs[] = 
{
	&t703_TI,
	&t4673_TI,
	&t4675_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5846_0_0_0;
extern Il2CppType t5846_1_0_0;
struct t5846;
extern TypeInfo t5846_TI;
extern Il2CppGenericClass t5846_GC;
extern CustomAttributesCache t1578__CustomAttributeCache;
TypeInfo t5846_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5846_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5846_TI, t5846_ITIs, NULL, &t1578__CustomAttributeCache, &t5846_TI, &t5846_0_0_0, &t5846_1_0_0, NULL, &t5846_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2367_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern MethodInfo m27368_MI;
static PropertyInfo t2367____Current_PropertyInfo = 
{
	&t2367_TI, "Current", &m27368_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2367_PIs[] =
{
	&t2367____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2367_TI;
extern Il2CppType t477_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27368_MI = 
{
	"get_Current", NULL, &t2367_TI, &t477_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2367_MIs[] =
{
	&m27368_MI,
	NULL
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
static TypeInfo* t2367_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2367_0_0_0;
extern Il2CppType t2367_1_0_0;
struct t2367;
extern TypeInfo t2367_TI;
extern Il2CppGenericClass t2367_GC;
TypeInfo t2367_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2367_MIs, t2367_PIs, NULL, NULL, NULL, NULL, NULL, &t2367_TI, t2367_ITIs, NULL, &EmptyCustomAttributesCache, &t2367_TI, &t2367_0_0_0, &t2367_1_0_0, NULL, &t2367_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2366.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2366_TI;
#include "t2366MD.h"

extern TypeInfo t2366_TI;
extern TypeInfo t477_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m12906_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m20290_MI;
struct t122;
#define m20290(__this, p0, method) (t477 *)m18022_gshared((t122 *)__this, (int32_t)p0, method)
extern MethodInfo m20290_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t122_0_0_1;
FieldInfo t2366_f0_FieldInfo = 
{
	"array", &t122_0_0_1, &t2366_TI, offsetof(t2366, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2366_f1_FieldInfo = 
{
	"idx", &t134_0_0_1, &t2366_TI, offsetof(t2366, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2366_FIs[] =
{
	&t2366_f0_FieldInfo,
	&t2366_f1_FieldInfo,
	NULL
};
extern MethodInfo m12903_MI;
static PropertyInfo t2366____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2366_TI, "System.Collections.IEnumerator.Current", &m12903_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12906_MI;
static PropertyInfo t2366____Current_PropertyInfo = 
{
	&t2366_TI, "Current", &m12906_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2366_PIs[] =
{
	&t2366____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2366____Current_PropertyInfo,
	NULL
};
extern Il2CppType t122_0_0_0;
static ParameterInfo t2366_m12902_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
};
extern TypeInfo t2366_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12902_MI = 
{
	".ctor", (methodPointerType)&m8385_gshared, &t2366_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2366_m12902_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2366_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12903_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8387_gshared, &t2366_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2366_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12904_MI = 
{
	"Dispose", (methodPointerType)&m8389_gshared, &t2366_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2366_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12905_MI = 
{
	"MoveNext", (methodPointerType)&m8391_gshared, &t2366_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2366_TI;
extern Il2CppType t477_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12906_MI = 
{
	"get_Current", (methodPointerType)&m8393_gshared, &t2366_TI, &t477_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2366_MIs[] =
{
	&m12902_MI,
	&m12903_MI,
	&m12904_MI,
	&m12905_MI,
	&m12906_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m12903_MI;
extern MethodInfo m12905_MI;
extern MethodInfo m12904_MI;
extern MethodInfo m12906_MI;
static MethodInfo* t2366_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m12903_MI,
	&m12905_MI,
	&m12904_MI,
	&m12906_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2367_TI;
static TypeInfo* t2366_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2367_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2367_TI;
static Il2CppInterfaceOffsetPair t2366_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2367_TI, 7},
};
extern MethodInfo m12906_MI;
extern TypeInfo t477_TI;
extern MethodInfo m20290_MI;
static void* t2366_RGCTXData[3] = 
{
	&m12906_MI,
	&t477_TI,
	&m20290_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2366_0_0_0;
extern Il2CppType t2366_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2366_TI;
extern Il2CppGenericClass t2366_GC;
extern TypeInfo t122_TI;
TypeInfo t2366_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2366_MIs, t2366_PIs, t2366_FIs, NULL, &t117_TI, NULL, &t122_TI, &t2366_TI, t2366_ITIs, t2366_VT, &EmptyCustomAttributesCache, &t2366_TI, &t2366_0_0_0, &t2366_1_0_0, t2366_IOs, &t2366_GC, NULL, NULL, NULL, t2366_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2366)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4676_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern MethodInfo m27369_MI;
static PropertyInfo t4676____Count_PropertyInfo = 
{
	&t4676_TI, "Count", &m27369_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27370_MI;
static PropertyInfo t4676____IsReadOnly_PropertyInfo = 
{
	&t4676_TI, "IsReadOnly", &m27370_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4676_PIs[] =
{
	&t4676____Count_PropertyInfo,
	&t4676____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4676_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27369_MI = 
{
	"get_Count", NULL, &t4676_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4676_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m27370_MI = 
{
	"get_IsReadOnly", NULL, &t4676_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t477_0_0_0;
static ParameterInfo t4676_m27371_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t4676_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27371_MI = 
{
	"Add", NULL, &t4676_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t4676_m27371_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4676_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m27372_MI = 
{
	"Clear", NULL, &t4676_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t477_0_0_0;
static ParameterInfo t4676_m27373_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t4676_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27373_MI = 
{
	"Contains", NULL, &t4676_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4676_m27373_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2345_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t4676_m27374_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2345_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4676_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27374_MI = 
{
	"CopyTo", NULL, &t4676_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t4676_m27374_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t477_0_0_0;
static ParameterInfo t4676_m27375_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t4676_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27375_MI = 
{
	"Remove", NULL, &t4676_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t4676_m27375_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4676_MIs[] =
{
	&m27369_MI,
	&m27370_MI,
	&m27371_MI,
	&m27372_MI,
	&m27373_MI,
	&m27374_MI,
	&m27375_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4678_TI;
static TypeInfo* t4676_ITIs[] = 
{
	&t703_TI,
	&t4678_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4676_0_0_0;
extern Il2CppType t4676_1_0_0;
struct t4676;
extern TypeInfo t4676_TI;
extern Il2CppGenericClass t4676_GC;
TypeInfo t4676_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4676_MIs, t4676_PIs, NULL, NULL, NULL, NULL, NULL, &t4676_TI, t4676_ITIs, NULL, &EmptyCustomAttributesCache, &t4676_TI, &t4676_0_0_0, &t4676_1_0_0, NULL, &t4676_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4678_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern TypeInfo t4678_TI;
extern Il2CppType t2367_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27376_MI = 
{
	"GetEnumerator", NULL, &t4678_TI, &t2367_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4678_MIs[] =
{
	&m27376_MI,
	NULL
};
extern TypeInfo t703_TI;
static TypeInfo* t4678_ITIs[] = 
{
	&t703_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4678_0_0_0;
extern Il2CppType t4678_1_0_0;
struct t4678;
extern TypeInfo t4678_TI;
extern Il2CppGenericClass t4678_GC;
TypeInfo t4678_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4678_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4678_TI, t4678_ITIs, NULL, &EmptyCustomAttributesCache, &t4678_TI, &t4678_0_0_0, &t4678_1_0_0, NULL, &t4678_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4677_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern MethodInfo m27377_MI;
extern MethodInfo m27378_MI;
static PropertyInfo t4677____Item_PropertyInfo = 
{
	&t4677_TI, "Item", &m27377_MI, &m27378_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4677_PIs[] =
{
	&t4677____Item_PropertyInfo,
	NULL
};
extern Il2CppType t477_0_0_0;
static ParameterInfo t4677_m27379_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t4677_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27379_MI = 
{
	"IndexOf", NULL, &t4677_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t4677_m27379_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t477_0_0_0;
static ParameterInfo t4677_m27380_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t4677_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27380_MI = 
{
	"Insert", NULL, &t4677_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4677_m27380_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4677_m27381_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4677_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27381_MI = 
{
	"RemoveAt", NULL, &t4677_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t4677_m27381_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t4677_m27377_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t4677_TI;
extern Il2CppType t477_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m27377_MI = 
{
	"get_Item", NULL, &t4677_TI, &t477_0_0_0, RuntimeInvoker_t25_t134, t4677_m27377_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t477_0_0_0;
static ParameterInfo t4677_m27378_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t4677_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27378_MI = 
{
	"set_Item", NULL, &t4677_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t4677_m27378_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4677_MIs[] =
{
	&m27379_MI,
	&m27380_MI,
	&m27381_MI,
	&m27377_MI,
	&m27378_MI,
	NULL
};
extern TypeInfo t703_TI;
extern TypeInfo t4676_TI;
extern TypeInfo t4678_TI;
static TypeInfo* t4677_ITIs[] = 
{
	&t703_TI,
	&t4676_TI,
	&t4678_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4677_0_0_0;
extern Il2CppType t4677_1_0_0;
struct t4677;
extern TypeInfo t4677_TI;
extern Il2CppGenericClass t4677_GC;
extern CustomAttributesCache t1518__CustomAttributeCache;
TypeInfo t4677_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4677_MIs, t4677_PIs, NULL, NULL, NULL, NULL, NULL, &t4677_TI, t4677_ITIs, NULL, &t1518__CustomAttributeCache, &t4677_TI, &t4677_0_0_0, &t4677_1_0_0, NULL, &t4677_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2348_TI;

#include "t2368.h"
#include "t2369.h"
extern TypeInfo t2348_TI;
extern TypeInfo t759_TI;
extern TypeInfo t25_TI;
extern TypeInfo t321_TI;
extern TypeInfo t134_TI;
extern TypeInfo t165_TI;
extern TypeInfo t177_TI;
extern TypeInfo t2368_TI;
extern TypeInfo t2345_TI;
extern TypeInfo t477_TI;
extern TypeInfo t123_TI;
extern TypeInfo t2369_TI;
#include "t2369MD.h"
#include "t2368MD.h"
extern MethodInfo m7921_MI;
extern MethodInfo m12757_MI;
extern MethodInfo m452_MI;
extern MethodInfo m489_MI;
extern MethodInfo m7533_MI;
extern MethodInfo m12769_MI;
extern MethodInfo m12919_MI;
extern MethodInfo m12918_MI;
extern MethodInfo m12762_MI;
extern MethodInfo m12764_MI;
extern MethodInfo m12937_MI;
extern MethodInfo m20301_MI;
extern MethodInfo m20302_MI;
extern MethodInfo m12921_MI;
struct t321;
struct t1810;
#include "t1810.h"
#include "t1829.h"
 void m18617_gshared (t1810 * __this, t122 * p0, int32_t p1, t1829 * p2, MethodInfo* method);
#define m18617(__this, p0, p1, p2, method) (void)m18617_gshared((t1810 *)__this, (t122 *)p0, (int32_t)p1, (t1829 *)p2, method)
#define m20301(__this, p0, p1, p2, method) (void)m18617_gshared((t1810 *)__this, (t122 *)p0, (int32_t)p1, (t1829 *)p2, method)
extern MethodInfo m20301_MI;
struct t321;
 void m20302 (t321 * __this, t2345* p0, int32_t p1, t2369 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20302_MI;


extern MethodInfo m12919_MI;
 t2368  m12919 (t2348 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12919_MI);
	{
		t321 * L_0 = (__this->f0);
		t2368  L_1 = {0};
		m12921(&L_1, L_0, &m12921_MI);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t321_0_0_1;
FieldInfo t2348_f0_FieldInfo = 
{
	"dictionary", &t321_0_0_1, &t2348_TI, offsetof(t2348, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2348_FIs[] =
{
	&t2348_f0_FieldInfo,
	NULL
};
extern MethodInfo m12915_MI;
static PropertyInfo t2348____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t2348_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m12915_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12916_MI;
static PropertyInfo t2348____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2348_TI, "System.Collections.ICollection.IsSynchronized", &m12916_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12917_MI;
static PropertyInfo t2348____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2348_TI, "System.Collections.ICollection.SyncRoot", &m12917_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12920_MI;
static PropertyInfo t2348____Count_PropertyInfo = 
{
	&t2348_TI, "Count", &m12920_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2348_PIs[] =
{
	&t2348____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t2348____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2348____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2348____Count_PropertyInfo,
	NULL
};
extern Il2CppType t321_0_0_0;
static ParameterInfo t2348_m12907_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t321_0_0_0},
};
extern TypeInfo t2348_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12907_MI = 
{
	".ctor", (methodPointerType)&m8915_gshared, &t2348_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2348_m12907_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t477_0_0_0;
static ParameterInfo t2348_m12908_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t2348_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12908_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m8916_gshared, &t2348_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2348_m12908_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2348_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12909_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m8917_gshared, &t2348_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t477_0_0_0;
static ParameterInfo t2348_m12910_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t2348_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12910_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m8918_gshared, &t2348_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2348_m12910_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t477_0_0_0;
static ParameterInfo t2348_m12911_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t2348_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12911_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m8919_gshared, &t2348_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t2348_m12911_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2348_TI;
extern Il2CppType t2367_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12912_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m8920_gshared, &t2348_TI, &t2367_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2348_m12913_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2348_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12913_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8921_gshared, &t2348_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2348_m12913_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2348_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12914_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8922_gshared, &t2348_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2348_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12915_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m8923_gshared, &t2348_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2348_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12916_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8924_gshared, &t2348_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2348_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12917_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8925_gshared, &t2348_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2345_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t2348_m12918_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2345_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t2348_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12918_MI = 
{
	"CopyTo", (methodPointerType)&m8926_gshared, &t2348_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t2348_m12918_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2348_TI;
extern Il2CppType t2368_0_0_0;
extern void* RuntimeInvoker_t2368 (MethodInfo* method, void* obj, void** args);
MethodInfo m12919_MI = 
{
	"GetEnumerator", (methodPointerType)&m12919, &t2348_TI, &t2368_0_0_0, RuntimeInvoker_t2368, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2348_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m12920_MI = 
{
	"get_Count", (methodPointerType)&m8928_gshared, &t2348_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2348_MIs[] =
{
	&m12907_MI,
	&m12908_MI,
	&m12909_MI,
	&m12910_MI,
	&m12911_MI,
	&m12912_MI,
	&m12913_MI,
	&m12914_MI,
	&m12915_MI,
	&m12916_MI,
	&m12917_MI,
	&m12918_MI,
	&m12919_MI,
	&m12920_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12914_MI;
extern MethodInfo m12920_MI;
extern MethodInfo m12916_MI;
extern MethodInfo m12917_MI;
extern MethodInfo m12913_MI;
extern MethodInfo m12920_MI;
extern MethodInfo m12915_MI;
extern MethodInfo m12908_MI;
extern MethodInfo m12909_MI;
extern MethodInfo m12910_MI;
extern MethodInfo m12918_MI;
extern MethodInfo m12911_MI;
extern MethodInfo m12912_MI;
static MethodInfo* t2348_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12914_MI,
	&m12920_MI,
	&m12916_MI,
	&m12917_MI,
	&m12913_MI,
	&m12920_MI,
	&m12915_MI,
	&m12908_MI,
	&m12909_MI,
	&m12910_MI,
	&m12918_MI,
	&m12911_MI,
	&m12912_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t4676_TI;
extern TypeInfo t4678_TI;
static TypeInfo* t2348_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t4676_TI,
	&t4678_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t4676_TI;
extern TypeInfo t4678_TI;
static Il2CppInterfaceOffsetPair t2348_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t4676_TI, 9},
	{ &t4678_TI, 16},
};
extern MethodInfo m12769_MI;
extern MethodInfo m12919_MI;
extern TypeInfo t2368_TI;
extern TypeInfo t2345_TI;
extern MethodInfo m12918_MI;
extern MethodInfo m12762_MI;
extern MethodInfo m12764_MI;
extern TypeInfo t2369_TI;
extern MethodInfo m12937_MI;
extern MethodInfo m20301_MI;
extern MethodInfo m20302_MI;
extern MethodInfo m12921_MI;
extern MethodInfo m12757_MI;
static void* t2348_RGCTXData[13] = 
{
	&m12769_MI,
	&m12919_MI,
	&t2368_TI,
	&t2345_TI,
	&m12918_MI,
	&m12762_MI,
	&m12764_MI,
	&t2369_TI,
	&m12937_MI,
	&m20301_MI,
	&m20302_MI,
	&m12921_MI,
	&m12757_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2348_0_0_0;
extern Il2CppType t2348_1_0_0;
extern TypeInfo t25_TI;
struct t2348;
extern TypeInfo t2348_TI;
extern Il2CppGenericClass t2348_GC;
extern TypeInfo t949_TI;
extern CustomAttributesCache t947__CustomAttributeCache;
TypeInfo t2348_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t2348_MIs, t2348_PIs, t2348_FIs, NULL, &t25_TI, NULL, &t949_TI, &t2348_TI, t2348_ITIs, t2348_VT, &t947__CustomAttributeCache, &t2348_TI, &t2348_0_0_0, &t2348_1_0_0, t2348_IOs, &t2348_GC, NULL, NULL, NULL, t2348_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2348), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2368_TI;

extern TypeInfo t2368_TI;
extern TypeInfo t477_TI;
extern TypeInfo t2352_TI;
extern TypeInfo t123_TI;
extern TypeInfo t125_TI;
extern MethodInfo m12933_MI;
extern MethodInfo m12782_MI;
extern MethodInfo m12777_MI;
extern MethodInfo m12936_MI;
extern MethodInfo m12930_MI;


// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t2352_0_0_1;
FieldInfo t2368_f0_FieldInfo = 
{
	"host_enumerator", &t2352_0_0_1, &t2368_TI, offsetof(t2368, f0) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2368_FIs[] =
{
	&t2368_f0_FieldInfo,
	NULL
};
extern MethodInfo m12922_MI;
static PropertyInfo t2368____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2368_TI, "System.Collections.IEnumerator.Current", &m12922_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12925_MI;
static PropertyInfo t2368____Current_PropertyInfo = 
{
	&t2368_TI, "Current", &m12925_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2368_PIs[] =
{
	&t2368____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2368____Current_PropertyInfo,
	NULL
};
extern Il2CppType t321_0_0_0;
static ParameterInfo t2368_m12921_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t321_0_0_0},
};
extern TypeInfo t2368_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12921_MI = 
{
	".ctor", (methodPointerType)&m8929_gshared, &t2368_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2368_m12921_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2368_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12922_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8930_gshared, &t2368_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2368_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12923_MI = 
{
	"Dispose", (methodPointerType)&m8931_gshared, &t2368_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2368_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12924_MI = 
{
	"MoveNext", (methodPointerType)&m8932_gshared, &t2368_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2368_TI;
extern Il2CppType t477_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12925_MI = 
{
	"get_Current", (methodPointerType)&m8933_gshared, &t2368_TI, &t477_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2368_MIs[] =
{
	&m12921_MI,
	&m12922_MI,
	&m12923_MI,
	&m12924_MI,
	&m12925_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m12922_MI;
extern MethodInfo m12924_MI;
extern MethodInfo m12923_MI;
extern MethodInfo m12925_MI;
static MethodInfo* t2368_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m12922_MI,
	&m12924_MI,
	&m12923_MI,
	&m12925_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2367_TI;
static TypeInfo* t2368_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2367_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2367_TI;
static Il2CppInterfaceOffsetPair t2368_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2367_TI, 7},
};
extern MethodInfo m12777_MI;
extern MethodInfo m12933_MI;
extern TypeInfo t477_TI;
extern MethodInfo m12936_MI;
extern MethodInfo m12930_MI;
extern MethodInfo m12782_MI;
static void* t2368_RGCTXData[6] = 
{
	&m12777_MI,
	&m12933_MI,
	&t477_TI,
	&m12936_MI,
	&m12930_MI,
	&m12782_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2368_0_0_0;
extern Il2CppType t2368_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2368_TI;
extern Il2CppGenericClass t2368_GC;
extern TypeInfo t947_TI;
TypeInfo t2368_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2368_MIs, t2368_PIs, t2368_FIs, NULL, &t117_TI, NULL, &t947_TI, &t2368_TI, t2368_ITIs, t2368_VT, &EmptyCustomAttributesCache, &t2368_TI, &t2368_0_0_0, &t2368_1_0_0, t2368_IOs, &t2368_GC, NULL, NULL, NULL, t2368_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2368)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2352_TI;

extern TypeInfo t2352_TI;
extern TypeInfo t2350_TI;
extern TypeInfo t309_TI;
extern TypeInfo t477_TI;
extern TypeInfo t944_TI;
extern TypeInfo t321_TI;
extern TypeInfo t942_TI;
extern TypeInfo t1404_TI;
extern TypeInfo t1387_TI;
extern MethodInfo m12935_MI;
extern MethodInfo m12780_MI;
extern MethodInfo m12782_MI;
extern MethodInfo m4877_MI;
extern MethodInfo m12932_MI;
extern MethodInfo m12934_MI;
extern MethodInfo m12779_MI;
extern MethodInfo m7635_MI;
extern MethodInfo m7431_MI;


extern MethodInfo m12931_MI;
 t2350  m12931 (t2352 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12931_MI);
	{
		t2350  L_0 = (__this->f3);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t321_0_0_1;
FieldInfo t2352_f0_FieldInfo = 
{
	"dictionary", &t321_0_0_1, &t2352_TI, offsetof(t2352, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2352_f1_FieldInfo = 
{
	"next", &t134_0_0_1, &t2352_TI, offsetof(t2352, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t2352_f2_FieldInfo = 
{
	"stamp", &t134_0_0_1, &t2352_TI, offsetof(t2352, f2) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t2350_0_0_3;
FieldInfo t2352_f3_FieldInfo = 
{
	"current", &t2350_0_0_3, &t2352_TI, offsetof(t2352, f3) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t2352_FIs[] =
{
	&t2352_f0_FieldInfo,
	&t2352_f1_FieldInfo,
	&t2352_f2_FieldInfo,
	&t2352_f3_FieldInfo,
	NULL
};
extern MethodInfo m12927_MI;
static PropertyInfo t2352____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2352_TI, "System.Collections.IEnumerator.Current", &m12927_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12928_MI;
static PropertyInfo t2352____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t2352_TI, "System.Collections.IDictionaryEnumerator.Entry", &m12928_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12929_MI;
static PropertyInfo t2352____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t2352_TI, "System.Collections.IDictionaryEnumerator.Key", &m12929_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12931_MI;
static PropertyInfo t2352____Current_PropertyInfo = 
{
	&t2352_TI, "Current", &m12931_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12932_MI;
static PropertyInfo t2352____CurrentKey_PropertyInfo = 
{
	&t2352_TI, "CurrentKey", &m12932_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12933_MI;
static PropertyInfo t2352____CurrentValue_PropertyInfo = 
{
	&t2352_TI, "CurrentValue", &m12933_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2352_PIs[] =
{
	&t2352____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2352____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t2352____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t2352____Current_PropertyInfo,
	&t2352____CurrentKey_PropertyInfo,
	&t2352____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t321_0_0_0;
static ParameterInfo t2352_m12926_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t321_0_0_0},
};
extern TypeInfo t2352_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12926_MI = 
{
	".ctor", (methodPointerType)&m8934_gshared, &t2352_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2352_m12926_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2352_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12927_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8935_gshared, &t2352_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2352_TI;
extern Il2CppType t944_0_0_0;
extern void* RuntimeInvoker_t944 (MethodInfo* method, void* obj, void** args);
MethodInfo m12928_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m8936_gshared, &t2352_TI, &t944_0_0_0, RuntimeInvoker_t944, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2352_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12929_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m8937_gshared, &t2352_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2352_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12930_MI = 
{
	"MoveNext", (methodPointerType)&m8938_gshared, &t2352_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2352_TI;
extern Il2CppType t2350_0_0_0;
extern void* RuntimeInvoker_t2350 (MethodInfo* method, void* obj, void** args);
MethodInfo m12931_MI = 
{
	"get_Current", (methodPointerType)&m12931, &t2352_TI, &t2350_0_0_0, RuntimeInvoker_t2350, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2352_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12932_MI = 
{
	"get_CurrentKey", (methodPointerType)&m8940_gshared, &t2352_TI, &t309_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2352_TI;
extern Il2CppType t477_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12933_MI = 
{
	"get_CurrentValue", (methodPointerType)&m8941_gshared, &t2352_TI, &t477_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2352_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12934_MI = 
{
	"VerifyState", (methodPointerType)&m8942_gshared, &t2352_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2352_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12935_MI = 
{
	"VerifyCurrent", (methodPointerType)&m8943_gshared, &t2352_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2352_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12936_MI = 
{
	"Dispose", (methodPointerType)&m8944_gshared, &t2352_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2352_MIs[] =
{
	&m12926_MI,
	&m12927_MI,
	&m12928_MI,
	&m12929_MI,
	&m12930_MI,
	&m12931_MI,
	&m12932_MI,
	&m12933_MI,
	&m12934_MI,
	&m12935_MI,
	&m12936_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
extern MethodInfo m12927_MI;
extern MethodInfo m12930_MI;
extern MethodInfo m12936_MI;
extern MethodInfo m12931_MI;
extern MethodInfo m12928_MI;
extern MethodInfo m12929_MI;
static MethodInfo* t2352_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
	&m12927_MI,
	&m12930_MI,
	&m12936_MI,
	&m12931_MI,
	&m12928_MI,
	&m12929_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2351_TI;
extern TypeInfo t950_TI;
static TypeInfo* t2352_ITIs[] = 
{
	&t78_TI,
	&t167_TI,
	&t2351_TI,
	&t950_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t2351_TI;
extern TypeInfo t950_TI;
static Il2CppInterfaceOffsetPair t2352_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t167_TI, 6},
	{ &t2351_TI, 7},
	{ &t950_TI, 8},
};
extern MethodInfo m12935_MI;
extern TypeInfo t2350_TI;
extern MethodInfo m12780_MI;
extern TypeInfo t309_TI;
extern MethodInfo m12782_MI;
extern TypeInfo t477_TI;
extern MethodInfo m12932_MI;
extern MethodInfo m12934_MI;
extern MethodInfo m12779_MI;
static void* t2352_RGCTXData[9] = 
{
	&m12935_MI,
	&t2350_TI,
	&m12780_MI,
	&t309_TI,
	&m12782_MI,
	&t477_TI,
	&m12932_MI,
	&m12934_MI,
	&m12779_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2352_0_0_0;
extern Il2CppType t2352_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t2352_TI;
extern Il2CppGenericClass t2352_GC;
extern TypeInfo t949_TI;
TypeInfo t2352_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2352_MIs, t2352_PIs, t2352_FIs, NULL, &t117_TI, NULL, &t949_TI, &t2352_TI, t2352_ITIs, t2352_VT, &EmptyCustomAttributesCache, &t2352_TI, &t2352_0_0_0, &t2352_1_0_0, t2352_IOs, &t2352_GC, NULL, NULL, NULL, t2352_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2352)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2369_TI;



// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2369_m12937_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2369_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m12937_MI = 
{
	".ctor", (methodPointerType)&m8945_gshared, &t2369_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2369_m12937_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t477_0_0_0;
static ParameterInfo t2369_m12938_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t2369_TI;
extern Il2CppType t477_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12938_MI = 
{
	"Invoke", (methodPointerType)&m8946_gshared, &t2369_TI, &t477_0_0_0, RuntimeInvoker_t25_t25_t25, t2369_m12938_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t477_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2369_m12939_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2369_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12939_MI = 
{
	"BeginInvoke", (methodPointerType)&m8947_gshared, &t2369_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25_t25, t2369_m12939_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2369_m12940_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2369_TI;
extern Il2CppType t477_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12940_MI = 
{
	"EndInvoke", (methodPointerType)&m8948_gshared, &t2369_TI, &t477_0_0_0, RuntimeInvoker_t25_t25, t2369_m12940_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2369_MIs[] =
{
	&m12937_MI,
	&m12938_MI,
	&m12939_MI,
	&m12940_MI,
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
extern MethodInfo m12938_MI;
extern MethodInfo m12939_MI;
extern MethodInfo m12940_MI;
static MethodInfo* t2369_VT[] =
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
	&m12938_MI,
	&m12939_MI,
	&m12940_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2369_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2369_0_0_0;
extern Il2CppType t2369_1_0_0;
extern TypeInfo t345_TI;
struct t2369;
extern TypeInfo t2369_TI;
extern Il2CppGenericClass t2369_GC;
extern TypeInfo t949_TI;
TypeInfo t2369_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2369_MIs, NULL, NULL, NULL, &t345_TI, NULL, &t949_TI, &t2369_TI, NULL, t2369_VT, &EmptyCustomAttributesCache, &t2369_TI, &t2369_0_0_0, &t2369_1_0_0, t2369_IOs, &t2369_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2369), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2347_TI;



extern MethodInfo m12941_MI;
 void m12941 (t2347 * __this, t25 * p0, t61 p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12941_MI);
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m12942_MI;
 t944  m12942 (t2347 * __this, t309 * p0, t477 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12942_MI);
	typedef  t944  (*FunctionPointerType) (t25 * __this, t309 * p0, t477 * p1, MethodInfo* method);
	if (__this->f9)
		m12942((t2347 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m12943_MI;
 t25 * m12943 (t2347 * __this, t309 * p0, t477 * p1, t219 * p2, t25 * p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12943_MI);
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t25 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m12944_MI;
 t944  m12944 (t2347 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12944_MI);
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t944 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.DictionaryEntry>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2347_m12941_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2347_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m12941_MI = 
{
	".ctor", (methodPointerType)&m12941, &t2347_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2347_m12941_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t477_0_0_0;
static ParameterInfo t2347_m12942_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t2347_TI;
extern Il2CppType t944_0_0_0;
extern void* RuntimeInvoker_t944_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12942_MI = 
{
	"Invoke", (methodPointerType)&m12942, &t2347_TI, &t944_0_0_0, RuntimeInvoker_t944_t25_t25, t2347_m12942_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t477_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2347_m12943_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2347_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12943_MI = 
{
	"BeginInvoke", (methodPointerType)&m12943, &t2347_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25_t25, t2347_m12943_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2347_m12944_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2347_TI;
extern Il2CppType t944_0_0_0;
extern void* RuntimeInvoker_t944_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12944_MI = 
{
	"EndInvoke", (methodPointerType)&m12944, &t2347_TI, &t944_0_0_0, RuntimeInvoker_t944_t25, t2347_m12944_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2347_MIs[] =
{
	&m12941_MI,
	&m12942_MI,
	&m12943_MI,
	&m12944_MI,
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
extern MethodInfo m12942_MI;
extern MethodInfo m12943_MI;
extern MethodInfo m12944_MI;
static MethodInfo* t2347_VT[] =
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
	&m12942_MI,
	&m12943_MI,
	&m12944_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2347_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2347_0_0_0;
extern Il2CppType t2347_1_0_0;
extern TypeInfo t345_TI;
struct t2347;
extern TypeInfo t2347_TI;
extern Il2CppGenericClass t2347_GC;
extern TypeInfo t949_TI;
TypeInfo t2347_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2347_MIs, NULL, NULL, NULL, &t345_TI, NULL, &t949_TI, &t2347_TI, NULL, t2347_VT, &EmptyCustomAttributesCache, &t2347_TI, &t2347_0_0_0, &t2347_1_0_0, t2347_IOs, &t2347_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2347), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2370_TI;



extern MethodInfo m12945_MI;
 void m12945 (t2370 * __this, t25 * p0, t61 p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12945_MI);
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m12946_MI;
 t2350  m12946 (t2370 * __this, t309 * p0, t477 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12946_MI);
	typedef  t2350  (*FunctionPointerType) (t25 * __this, t309 * p0, t477 * p1, MethodInfo* method);
	if (__this->f9)
		m12946((t2370 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m12947_MI;
 t25 * m12947 (t2370 * __this, t309 * p0, t477 * p1, t219 * p2, t25 * p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12947_MI);
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t25 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m12948_MI;
 t2350  m12948 (t2370 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m12948_MI);
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2350 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2370_m12945_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t2370_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m12945_MI = 
{
	".ctor", (methodPointerType)&m12945, &t2370_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t2370_m12945_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t477_0_0_0;
static ParameterInfo t2370_m12946_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t2370_TI;
extern Il2CppType t2350_0_0_0;
extern void* RuntimeInvoker_t2350_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12946_MI = 
{
	"Invoke", (methodPointerType)&m12946, &t2370_TI, &t2350_0_0_0, RuntimeInvoker_t2350_t25_t25, t2370_m12946_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
extern Il2CppType t477_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2370_m12947_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2370_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12947_MI = 
{
	"BeginInvoke", (methodPointerType)&m12947, &t2370_TI, &t218_0_0_0, RuntimeInvoker_t25_t25_t25_t25_t25, t2370_m12947_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2370_m12948_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2370_TI;
extern Il2CppType t2350_0_0_0;
extern void* RuntimeInvoker_t2350_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12948_MI = 
{
	"EndInvoke", (methodPointerType)&m12948, &t2370_TI, &t2350_0_0_0, RuntimeInvoker_t2350_t25, t2370_m12948_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2370_MIs[] =
{
	&m12945_MI,
	&m12946_MI,
	&m12947_MI,
	&m12948_MI,
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
extern MethodInfo m12946_MI;
extern MethodInfo m12947_MI;
extern MethodInfo m12948_MI;
static MethodInfo* t2370_VT[] =
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
	&m12946_MI,
	&m12947_MI,
	&m12948_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t2370_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2370_0_0_0;
extern Il2CppType t2370_1_0_0;
extern TypeInfo t345_TI;
struct t2370;
extern TypeInfo t2370_TI;
extern Il2CppGenericClass t2370_GC;
extern TypeInfo t949_TI;
TypeInfo t2370_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2370_MIs, NULL, NULL, NULL, &t345_TI, NULL, &t949_TI, &t2370_TI, NULL, t2370_VT, &EmptyCustomAttributesCache, &t2370_TI, &t2370_0_0_0, &t2370_1_0_0, t2370_IOs, &t2370_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2370), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2371_TI;

extern TypeInfo t2371_TI;
extern TypeInfo t2352_TI;
extern TypeInfo t950_TI;
extern TypeInfo t944_TI;
extern TypeInfo t2350_TI;
extern TypeInfo t309_TI;
extern TypeInfo t125_TI;
extern MethodInfo m8233_MI;
extern MethodInfo m12931_MI;
extern MethodInfo m12780_MI;
extern MethodInfo m12951_MI;
extern MethodInfo m452_MI;
extern MethodInfo m12777_MI;
extern MethodInfo m12930_MI;


// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t2352_0_0_1;
FieldInfo t2371_f0_FieldInfo = 
{
	"host_enumerator", &t2352_0_0_1, &t2371_TI, offsetof(t2371, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2371_FIs[] =
{
	&t2371_f0_FieldInfo,
	NULL
};
extern MethodInfo m12951_MI;
static PropertyInfo t2371____Entry_PropertyInfo = 
{
	&t2371_TI, "Entry", &m12951_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12952_MI;
static PropertyInfo t2371____Key_PropertyInfo = 
{
	&t2371_TI, "Key", &m12952_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12953_MI;
static PropertyInfo t2371____Current_PropertyInfo = 
{
	&t2371_TI, "Current", &m12953_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2371_PIs[] =
{
	&t2371____Entry_PropertyInfo,
	&t2371____Key_PropertyInfo,
	&t2371____Current_PropertyInfo,
	NULL
};
extern Il2CppType t321_0_0_0;
static ParameterInfo t2371_m12949_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t321_0_0_0},
};
extern TypeInfo t2371_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12949_MI = 
{
	".ctor", (methodPointerType)&m8962_gshared, &t2371_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t2371_m12949_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2371_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m12950_MI = 
{
	"MoveNext", (methodPointerType)&m8963_gshared, &t2371_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2371_TI;
extern Il2CppType t944_0_0_0;
extern void* RuntimeInvoker_t944 (MethodInfo* method, void* obj, void** args);
MethodInfo m12951_MI = 
{
	"get_Entry", (methodPointerType)&m8964_gshared, &t2371_TI, &t944_0_0_0, RuntimeInvoker_t944, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2371_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12952_MI = 
{
	"get_Key", (methodPointerType)&m8965_gshared, &t2371_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2371_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12953_MI = 
{
	"get_Current", (methodPointerType)&m8966_gshared, &t2371_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2371_MIs[] =
{
	&m12949_MI,
	&m12950_MI,
	&m12951_MI,
	&m12952_MI,
	&m12953_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m12953_MI;
extern MethodInfo m12950_MI;
extern MethodInfo m12951_MI;
extern MethodInfo m12952_MI;
static MethodInfo* t2371_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m12953_MI,
	&m12950_MI,
	&m12951_MI,
	&m12952_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t950_TI;
static TypeInfo* t2371_ITIs[] = 
{
	&t78_TI,
	&t950_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t950_TI;
static Il2CppInterfaceOffsetPair t2371_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t950_TI, 6},
};
extern MethodInfo m12777_MI;
extern MethodInfo m12930_MI;
extern TypeInfo t2352_TI;
extern MethodInfo m12931_MI;
extern MethodInfo m12780_MI;
extern TypeInfo t309_TI;
extern MethodInfo m12951_MI;
static void* t2371_RGCTXData[7] = 
{
	&m12777_MI,
	&m12930_MI,
	&t2352_TI,
	&m12931_MI,
	&m12780_MI,
	&t309_TI,
	&m12951_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2371_0_0_0;
extern Il2CppType t2371_1_0_0;
extern TypeInfo t25_TI;
struct t2371;
extern TypeInfo t2371_TI;
extern Il2CppGenericClass t2371_GC;
extern TypeInfo t949_TI;
TypeInfo t2371_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t2371_MIs, t2371_PIs, t2371_FIs, NULL, &t25_TI, NULL, &t949_TI, &t2371_TI, t2371_ITIs, t2371_VT, &EmptyCustomAttributesCache, &t2371_TI, &t2371_0_0_0, &t2371_1_0_0, t2371_IOs, &t2371_GC, NULL, NULL, NULL, t2371_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2371), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5844_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t477_0_0_0;
extern Il2CppType t477_0_0_0;
static ParameterInfo t5844_m27332_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t5844_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27332_MI = 
{
	"Equals", NULL, &t5844_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t5844_m27332_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t477_0_0_0;
static ParameterInfo t5844_m27382_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t5844_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27382_MI = 
{
	"GetHashCode", NULL, &t5844_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t5844_m27382_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5844_MIs[] =
{
	&m27332_MI,
	&m27382_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5844_0_0_0;
extern Il2CppType t5844_1_0_0;
struct t5844;
extern TypeInfo t5844_TI;
extern Il2CppGenericClass t5844_GC;
TypeInfo t5844_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5844_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5844_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5844_TI, &t5844_0_0_0, &t5844_1_0_0, NULL, &t5844_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2372_TI;

#include "t2373.h"
extern TypeInfo t2372_TI;
extern TypeInfo t5848_TI;
extern TypeInfo t131_TI;
extern TypeInfo t477_TI;
extern TypeInfo t125_TI;
extern TypeInfo t953_TI;
extern TypeInfo t637_TI;
extern TypeInfo t2373_TI;
extern TypeInfo t134_TI;
#include "t2373MD.h"
extern Il2CppType t5848_0_0_0;
extern Il2CppType t477_0_0_0;
extern Il2CppType t953_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m12959_MI;
extern MethodInfo m27383_MI;
extern MethodInfo m27333_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t2372_0_0_49;
FieldInfo t2372_f0_FieldInfo = 
{
	"_default", &t2372_0_0_49, &t2372_TI, offsetof(t2372_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2372_FIs[] =
{
	&t2372_f0_FieldInfo,
	NULL
};
extern MethodInfo m12958_MI;
static PropertyInfo t2372____Default_PropertyInfo = 
{
	&t2372_TI, "Default", &m12958_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2372_PIs[] =
{
	&t2372____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2372_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12954_MI = 
{
	".ctor", (methodPointerType)&m8967_gshared, &t2372_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2372_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m12955_MI = 
{
	".cctor", (methodPointerType)&m8968_gshared, &t2372_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t2372_m12956_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2372_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12956_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8969_gshared, &t2372_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2372_m12956_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t2372_m12957_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t2372_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12957_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8970_gshared, &t2372_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2372_m12957_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t477_0_0_0;
static ParameterInfo t2372_m27383_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t2372_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27383_MI = 
{
	"GetHashCode", NULL, &t2372_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t2372_m27383_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t477_0_0_0;
extern Il2CppType t477_0_0_0;
static ParameterInfo t2372_m27333_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t2372_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27333_MI = 
{
	"Equals", NULL, &t2372_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t2372_m27333_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2372_TI;
extern Il2CppType t2372_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m12958_MI = 
{
	"get_Default", (methodPointerType)&m8971_gshared, &t2372_TI, &t2372_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2372_MIs[] =
{
	&m12954_MI,
	&m12955_MI,
	&m12956_MI,
	&m12957_MI,
	&m27383_MI,
	&m27333_MI,
	&m12958_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m27333_MI;
extern MethodInfo m27383_MI;
extern MethodInfo m12957_MI;
extern MethodInfo m12956_MI;
static MethodInfo* t2372_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m27333_MI,
	&m27383_MI,
	&m12957_MI,
	&m12956_MI,
	NULL,
	NULL,
};
extern TypeInfo t5844_TI;
extern TypeInfo t977_TI;
static TypeInfo* t2372_ITIs[] = 
{
	&t5844_TI,
	&t977_TI,
};
extern TypeInfo t5844_TI;
extern TypeInfo t977_TI;
static Il2CppInterfaceOffsetPair t2372_IOs[] = 
{
	{ &t5844_TI, 4},
	{ &t977_TI, 6},
};
extern Il2CppType t5848_0_0_0;
extern Il2CppType t477_0_0_0;
extern TypeInfo t2372_TI;
extern TypeInfo t2372_TI;
extern TypeInfo t2373_TI;
extern MethodInfo m12959_MI;
extern TypeInfo t477_TI;
extern MethodInfo m27383_MI;
extern MethodInfo m27333_MI;
static void* t2372_RGCTXData[9] = 
{
	(void*)&t5848_0_0_0,
	(void*)&t477_0_0_0,
	&t2372_TI,
	&t2372_TI,
	&t2373_TI,
	&m12959_MI,
	&t477_TI,
	&m27383_MI,
	&m27333_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2372_0_0_0;
extern Il2CppType t2372_1_0_0;
extern TypeInfo t25_TI;
struct t2372;
extern TypeInfo t2372_TI;
extern Il2CppGenericClass t2372_GC;
TypeInfo t2372_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2372_MIs, t2372_PIs, t2372_FIs, NULL, &t25_TI, NULL, NULL, &t2372_TI, t2372_ITIs, t2372_VT, &EmptyCustomAttributesCache, &t2372_TI, &t2372_0_0_0, &t2372_1_0_0, t2372_IOs, &t2372_GC, NULL, NULL, NULL, t2372_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2372), 0, -1, sizeof(t2372_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5848_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t477_0_0_0;
static ParameterInfo t5848_m27384_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t477_0_0_0},
};
extern TypeInfo t5848_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m27384_MI = 
{
	"Equals", NULL, &t5848_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t5848_m27384_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5848_MIs[] =
{
	&m27384_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5848_0_0_0;
extern Il2CppType t5848_1_0_0;
struct t5848;
extern TypeInfo t5848_TI;
extern Il2CppGenericClass t5848_GC;
TypeInfo t5848_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5848_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5848_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5848_TI, &t5848_0_0_0, &t5848_1_0_0, NULL, &t5848_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
