#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1088.h"
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
extern TypeInfo t1088_TI;
#include "t1088MD.h"

#include "t1087.h"
#include "t123.h"
#include "t1089.h"
#include "t1086.h"
#include "t131.h"
#include "mscorlib_ArrayTypes.h"
#include "t732.h"
#include "t657.h"
#include "t731.h"
#include "t27.h"
#include "t125.h"
#include "t134.h"
#include "t122.h"
#include "t438.h"
#include "t25.h"
#include "t725.h"
#include "t726.h"
#include "t728.h"
#include "t445.h"
#include "t823.h"
#include "t824.h"
#include "t844.h"
extern TypeInfo t1088_TI;
extern TypeInfo t1086_TI;
extern TypeInfo t657_TI;
extern TypeInfo t131_TI;
extern TypeInfo t731_TI;
extern TypeInfo t733_TI;
extern TypeInfo t732_TI;
extern TypeInfo t125_TI;
extern TypeInfo t1394_TI;
extern TypeInfo t27_TI;
extern TypeInfo t445_TI;
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t122_TI;
extern TypeInfo t123_TI;
extern TypeInfo t134_TI;
extern TypeInfo t725_TI;
extern TypeInfo t726_TI;
extern TypeInfo t728_TI;
#include "t657MD.h"
#include "t731MD.h"
#include "t732MD.h"
#include "t841MD.h"
#include "t1086MD.h"
#include "t122MD.h"
#include "t1394MD.h"
#include "t27MD.h"
#include "t445MD.h"
#include "t131MD.h"
#include "t1074MD.h"
extern MethodInfo m5812_MI;
extern MethodInfo m5698_MI;
extern MethodInfo m3463_MI;
extern MethodInfo m3464_MI;
extern MethodInfo m5844_MI;
extern MethodInfo m5806_MI;
extern MethodInfo m5690_MI;
extern MethodInfo m4282_MI;
extern MethodInfo m5829_MI;
extern MethodInfo m7472_MI;
extern MethodInfo m7471_MI;
extern MethodInfo m7470_MI;
extern MethodInfo m5820_MI;
extern MethodInfo m5817_MI;
extern MethodInfo m532_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m4314_MI;
extern MethodInfo m8276_MI;
extern MethodInfo m5814_MI;
extern MethodInfo m4368_MI;
extern MethodInfo m5815_MI;
extern MethodInfo m5825_MI;
extern MethodInfo m5679_MI;


extern MethodInfo m5811_MI;
 void m5811 (t1088 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5811_MI);
	{
		m5844(__this, &m5844_MI);
		return;
	}
}
extern MethodInfo m5812_MI;
 void m5812 (t1088 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5812_MI);
	{
		int32_t L_0 = (__this->f3);
		if ((((int32_t)((int32_t)(L_0&p0))) == ((int32_t)p0)))
		{
			goto IL_0026;
		}
	}
	{
		t1086 * L_1 = &(__this->f2);
		m5806(NULL, __this, L_1, p0, &m5806_MI);
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)(L_2|p0));
	}

IL_0026:
	{
		return;
	}
}
extern MethodInfo m5813_MI;
 int32_t m5813 (t1088 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5813_MI);
	{
		m5812(__this, 1, &m5812_MI);
		t1086 * L_0 = &(__this->f2);
		NullCheck(L_0);
		int32_t L_1 = (L_0->f4);
		return L_1;
	}
}
extern MethodInfo m5814_MI;
 t131 * m5814 (t1088 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5814_MI);
	t733* V_0 = {0};
	{
		m5812(__this, 6, &m5812_MI);
		t1086 * L_0 = &(__this->f2);
		NullCheck(L_0);
		t657 * L_1 = (L_0->f2);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		t1086 * L_2 = &(__this->f2);
		NullCheck(L_2);
		t657 * L_3 = (L_2->f2);
		NullCheck(L_3);
		t131 * L_4 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m5698_MI, L_3);
		return L_4;
	}

IL_0025:
	{
		t1086 * L_5 = &(__this->f2);
		NullCheck(L_5);
		t657 * L_6 = (L_5->f3);
		NullCheck(L_6);
		t733* L_7 = (t733*)VirtFuncInvoker0< t733* >::Invoke(&m3463_MI, L_6);
		V_0 = L_7;
		NullCheck(V_0);
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, ((int32_t)((((int32_t)(((t122 *)V_0)->max_length)))-1)));
		NullCheck((*(t732 **)(t732 **)SZArrayLdElema(V_0, ((int32_t)((((int32_t)(((t122 *)V_0)->max_length)))-1)))));
		t131 * L_8 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3464_MI, (*(t732 **)(t732 **)SZArrayLdElema(V_0, ((int32_t)((((int32_t)(((t122 *)V_0)->max_length)))-1)))));
		return L_8;
	}
}
extern MethodInfo m5815_MI;
 t131 * m5815 (t1088 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5815_MI);
	{
		m5812(__this, 8, &m5812_MI);
		t1086 * L_0 = &(__this->f2);
		NullCheck(L_0);
		t131 * L_1 = (L_0->f0);
		return L_1;
	}
}
extern MethodInfo m5816_MI;
 t131 * m5816 (t1088 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5816_MI);
	{
		m5812(__this, ((int32_t)16), &m5812_MI);
		t1086 * L_0 = &(__this->f2);
		NullCheck(L_0);
		t131 * L_1 = (L_0->f0);
		return L_1;
	}
}
extern MethodInfo m5817_MI;
 t27* m5817 (t1088 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5817_MI);
	{
		m5812(__this, ((int32_t)32), &m5812_MI);
		t1086 * L_0 = &(__this->f2);
		NullCheck(L_0);
		t27* L_1 = (L_0->f1);
		return L_1;
	}
}
extern MethodInfo m5818_MI;
 t657 * m5818 (t1088 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5818_MI);
	{
		m5812(__this, 2, &m5812_MI);
		t1086 * L_0 = &(__this->f2);
		NullCheck(L_0);
		t657 * L_1 = (L_0->f2);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		if (p0)
		{
			goto IL_0029;
		}
	}
	{
		t1086 * L_2 = &(__this->f2);
		NullCheck(L_2);
		t657 * L_3 = (L_2->f2);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5690_MI, L_3);
		if (!L_4)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		t1086 * L_5 = &(__this->f2);
		NullCheck(L_5);
		t657 * L_6 = (L_5->f2);
		return L_6;
	}

IL_0035:
	{
		return (t657 *)NULL;
	}
}
extern MethodInfo m5819_MI;
 t733* m5819 (t1088 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5819_MI);
	t733* V_0 = {0};
	t733* V_1 = {0};
	int32_t V_2 = 0;
	t732 * V_3 = {0};
	{
		m5812(__this, 6, &m5812_MI);
		t1086 * L_0 = &(__this->f2);
		NullCheck(L_0);
		t657 * L_1 = (L_0->f2);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		t1086 * L_2 = &(__this->f2);
		NullCheck(L_2);
		t657 * L_3 = (L_2->f2);
		NullCheck(L_3);
		t733* L_4 = (t733*)VirtFuncInvoker0< t733* >::Invoke(&m3463_MI, L_3);
		V_0 = L_4;
		goto IL_0063;
	}

IL_0027:
	{
		t1086 * L_5 = &(__this->f2);
		NullCheck(L_5);
		t657 * L_6 = (L_5->f3);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		t1086 * L_7 = &(__this->f2);
		NullCheck(L_7);
		t657 * L_8 = (L_7->f3);
		NullCheck(L_8);
		t733* L_9 = (t733*)VirtFuncInvoker0< t733* >::Invoke(&m3463_MI, L_8);
		V_1 = L_9;
		NullCheck(V_1);
		V_0 = ((t733*)SZArrayNew(InitializedTypeInfo(&t733_TI), ((int32_t)((((int32_t)(((t122 *)V_1)->max_length)))-1))));
		NullCheck(V_0);
		m4282(NULL, (t122 *)(t122 *)V_1, (t122 *)(t122 *)V_0, (((int32_t)(((t122 *)V_0)->max_length))), &m4282_MI);
		goto IL_0063;
	}

IL_005c:
	{
		return ((t733*)SZArrayNew(InitializedTypeInfo(&t733_TI), 0));
	}

IL_0063:
	{
		V_2 = 0;
		goto IL_0079;
	}

IL_0067:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_2);
		V_3 = (*(t732 **)(t732 **)SZArrayLdElema(V_0, V_2));
		t732 * L_10 = (t732 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t732_TI));
		m5829(L_10, V_3, __this, &m5829_MI);
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_2);
		ArrayElementTypeCheck (V_0, L_10);
		*((t732 **)(t732 **)SZArrayLdElema(V_0, V_2)) = (t732 *)L_10;
		V_2 = ((int32_t)(V_2+1));
	}

IL_0079:
	{
		NullCheck(V_0);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t122 *)V_0)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		return V_0;
	}
}
extern MethodInfo m5820_MI;
 t657 * m5820 (t1088 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5820_MI);
	{
		m5812(__this, 4, &m5812_MI);
		t1086 * L_0 = &(__this->f2);
		NullCheck(L_0);
		t657 * L_1 = (L_0->f3);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		if (p0)
		{
			goto IL_0029;
		}
	}
	{
		t1086 * L_2 = &(__this->f2);
		NullCheck(L_2);
		t657 * L_3 = (L_2->f3);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5690_MI, L_3);
		if (!L_4)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		t1086 * L_5 = &(__this->f2);
		NullCheck(L_5);
		t657 * L_6 = (L_5->f3);
		return L_6;
	}

IL_0035:
	{
		return (t657 *)NULL;
	}
}
extern MethodInfo m5821_MI;
 bool m5821 (t1088 * __this, t131 * p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5821_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1394_TI));
		bool L_0 = m7472(NULL, __this, p0, 0, &m7472_MI);
		return L_0;
	}
}
extern MethodInfo m5822_MI;
 t158* m5822 (t1088 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5822_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1394_TI));
		t158* L_0 = m7471(NULL, __this, 0, &m7471_MI);
		return L_0;
	}
}
extern MethodInfo m5823_MI;
 t158* m5823 (t1088 * __this, t131 * p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5823_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1394_TI));
		t158* L_0 = m7470(NULL, __this, p0, 0, &m7470_MI);
		return L_0;
	}
}
extern MethodInfo m5824_MI;
 void m5824 (t1088 * __this, t25 * p0, t25 * p1, int32_t p2, t726 * p3, t158* p4, t728 * p5, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5824_MI);
	t657 * V_0 = {0};
	t158* V_1 = {0};
	int32_t V_2 = 0;
	{
		t657 * L_0 = (t657 *)VirtFuncInvoker1< t657 *, bool >::Invoke(&m5820_MI, __this, 1);
		V_0 = L_0;
		if (V_0)
		{
			goto IL_0026;
		}
	}
	{
		t27* L_1 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5817_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_2 = m532(NULL, (t27*) &_stringLiteral937, L_1, (t27*) &_stringLiteral75, &m532_MI);
		t445 * L_3 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m2409(L_3, L_2, &m2409_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0026:
	{
		if (!p4)
		{
			goto IL_0030;
		}
	}
	{
		NullCheck(p4);
		if ((((int32_t)(((t122 *)p4)->max_length))))
		{
			goto IL_003d;
		}
	}

IL_0030:
	{
		t158* L_4 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), 1));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, p1);
		*((t25 **)(t25 **)SZArrayLdElema(L_4, 0)) = (t25 *)p1;
		V_1 = L_4;
		goto IL_0058;
	}

IL_003d:
	{
		NullCheck(p4);
		V_2 = (((int32_t)(((t122 *)p4)->max_length)));
		V_1 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), ((int32_t)(V_2+1))));
		NullCheck(p4);
		VirtActionInvoker2< t122 *, int32_t >::Invoke(&m4314_MI, p4, (t122 *)(t122 *)V_1, 0);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		ArrayElementTypeCheck (V_1, p1);
		*((t25 **)(t25 **)SZArrayLdElema(V_1, V_2)) = (t25 *)p1;
	}

IL_0058:
	{
		NullCheck(V_0);
		VirtFuncInvoker5< t25 *, t25 *, int32_t, t726 *, t158*, t728 * >::Invoke(&m8276_MI, V_0, p0, p2, p3, V_1, p5);
		return;
	}
}
extern MethodInfo m5825_MI;
 t27* m5825 (t1088 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5825_MI);
	{
		t131 * L_0 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m5814_MI, __this);
		NullCheck(L_0);
		t27* L_1 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m4368_MI, L_0);
		t27* L_2 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5817_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_3 = m532(NULL, L_1, (t27*) &_stringLiteral101, L_2, &m532_MI);
		return L_3;
	}
}
extern MethodInfo m5826_MI;
 void m5826 (t1088 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5826_MI);
	{
		t27* L_0 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5817_MI, __this);
		t131 * L_1 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m5815_MI, __this);
		t27* L_2 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5825_MI, __this);
		m5679(NULL, p0, L_0, L_1, L_2, ((int32_t)16), &m5679_MI);
		return;
	}
}
// Metadata Definition System.Reflection.MonoProperty
extern Il2CppType t61_0_0_3;
FieldInfo t1088_f0_FieldInfo = 
{
	"klass", &t61_0_0_3, &t1088_TI, offsetof(t1088, f0), &EmptyCustomAttributesCache};
extern Il2CppType t61_0_0_3;
FieldInfo t1088_f1_FieldInfo = 
{
	"prop", &t61_0_0_3, &t1088_TI, offsetof(t1088, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1086_0_0_1;
FieldInfo t1088_f2_FieldInfo = 
{
	"info", &t1086_0_0_1, &t1088_TI, offsetof(t1088, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1089_0_0_1;
FieldInfo t1088_f3_FieldInfo = 
{
	"cached", &t1089_0_0_1, &t1088_TI, offsetof(t1088, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1090_0_0_1;
FieldInfo t1088_f4_FieldInfo = 
{
	"cached_getter", &t1090_0_0_1, &t1088_TI, offsetof(t1088, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1088_FIs[] =
{
	&t1088_f0_FieldInfo,
	&t1088_f1_FieldInfo,
	&t1088_f2_FieldInfo,
	&t1088_f3_FieldInfo,
	&t1088_f4_FieldInfo,
	NULL
};
extern MethodInfo m5813_MI;
static PropertyInfo t1088____Attributes_PropertyInfo = 
{
	&t1088_TI, "Attributes", &m5813_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5814_MI;
static PropertyInfo t1088____PropertyType_PropertyInfo = 
{
	&t1088_TI, "PropertyType", &m5814_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5815_MI;
static PropertyInfo t1088____ReflectedType_PropertyInfo = 
{
	&t1088_TI, "ReflectedType", &m5815_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5816_MI;
static PropertyInfo t1088____DeclaringType_PropertyInfo = 
{
	&t1088_TI, "DeclaringType", &m5816_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5817_MI;
static PropertyInfo t1088____Name_PropertyInfo = 
{
	&t1088_TI, "Name", &m5817_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1088_PIs[] =
{
	&t1088____Attributes_PropertyInfo,
	&t1088____PropertyType_PropertyInfo,
	&t1088____ReflectedType_PropertyInfo,
	&t1088____DeclaringType_PropertyInfo,
	&t1088____Name_PropertyInfo,
	NULL
};
extern TypeInfo t1088_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5811_MI = 
{
	".ctor", (methodPointerType)&m5811, &t1088_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2825, NULL, (methodPointerType)NULL};
extern Il2CppType t1089_0_0_0;
static ParameterInfo t1088_m5812_ParameterInfos[] = 
{
	{"flags", 0, 134221278, &EmptyCustomAttributesCache, &t1089_0_0_0},
};
extern TypeInfo t1088_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5812_MI = 
{
	"CachePropertyInfo", (methodPointerType)&m5812, &t1088_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t1088_m5812_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 2826, NULL, (methodPointerType)NULL};
extern TypeInfo t1088_TI;
extern Il2CppType t1087_0_0_0;
extern void* RuntimeInvoker_t1087 (MethodInfo* method, void* obj, void** args);
MethodInfo m5813_MI = 
{
	"get_Attributes", (methodPointerType)&m5813, &t1088_TI, &t1087_0_0_0, RuntimeInvoker_t1087, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 2827, NULL, (methodPointerType)NULL};
extern TypeInfo t1088_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5814_MI = 
{
	"get_PropertyType", (methodPointerType)&m5814, &t1088_TI, &t131_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 2828, NULL, (methodPointerType)NULL};
extern TypeInfo t1088_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5815_MI = 
{
	"get_ReflectedType", (methodPointerType)&m5815, &t1088_TI, &t131_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 2829, NULL, (methodPointerType)NULL};
extern TypeInfo t1088_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5816_MI = 
{
	"get_DeclaringType", (methodPointerType)&m5816, &t1088_TI, &t131_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 2830, NULL, (methodPointerType)NULL};
extern TypeInfo t1088_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5817_MI = 
{
	"get_Name", (methodPointerType)&m5817, &t1088_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 2831, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1088_m5818_ParameterInfos[] = 
{
	{"nonPublic", 0, 134221279, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1088_TI;
extern Il2CppType t657_0_0_0;
extern void* RuntimeInvoker_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m5818_MI = 
{
	"GetGetMethod", (methodPointerType)&m5818, &t1088_TI, &t657_0_0_0, RuntimeInvoker_t25_t137, t1088_m5818_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 1, false, false, 2832, NULL, (methodPointerType)NULL};
extern TypeInfo t1088_TI;
extern Il2CppType t733_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5819_MI = 
{
	"GetIndexParameters", (methodPointerType)&m5819, &t1088_TI, &t733_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 198, 0, 17, 0, false, false, 2833, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1088_m5820_ParameterInfos[] = 
{
	{"nonPublic", 0, 134221280, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1088_TI;
extern Il2CppType t657_0_0_0;
extern void* RuntimeInvoker_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m5820_MI = 
{
	"GetSetMethod", (methodPointerType)&m5820, &t1088_TI, &t657_0_0_0, RuntimeInvoker_t25_t137, t1088_m5820_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 18, 1, false, false, 2834, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1088_m5821_ParameterInfos[] = 
{
	{"attributeType", 0, 134221281, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"inherit", 1, 134221282, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1088_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m5821_MI = 
{
	"IsDefined", (methodPointerType)&m5821, &t1088_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t137, t1088_m5821_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 2835, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1088_m5822_ParameterInfos[] = 
{
	{"inherit", 0, 134221283, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1088_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m5822_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m5822, &t1088_TI, &t158_0_0_0, RuntimeInvoker_t25_t137, t1088_m5822_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 2836, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1088_m5823_ParameterInfos[] = 
{
	{"attributeType", 0, 134221284, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"inherit", 1, 134221285, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1088_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m5823_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m5823, &t1088_TI, &t158_0_0_0, RuntimeInvoker_t25_t25_t137, t1088_m5823_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 2837, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t725_0_0_0;
extern Il2CppType t726_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t728_0_0_0;
static ParameterInfo t1088_m5824_ParameterInfos[] = 
{
	{"obj", 0, 134221286, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"value", 1, 134221287, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"invokeAttr", 2, 134221288, &EmptyCustomAttributesCache, &t725_0_0_0},
	{"binder", 3, 134221289, &EmptyCustomAttributesCache, &t726_0_0_0},
	{"index", 4, 134221290, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"culture", 5, 134221291, &EmptyCustomAttributesCache, &t728_0_0_0},
};
extern TypeInfo t1088_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t134_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5824_MI = 
{
	"SetValue", (methodPointerType)&m5824, &t1088_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t134_t25_t25_t25, t1088_m5824_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 20, 6, false, false, 2838, NULL, (methodPointerType)NULL};
extern TypeInfo t1088_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5825_MI = 
{
	"ToString", (methodPointerType)&m5825, &t1088_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2839, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1088_m5826_ParameterInfos[] = 
{
	{"info", 0, 134221292, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221293, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1088_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m5826_MI = 
{
	"GetObjectData", (methodPointerType)&m5826, &t1088_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1088_m5826_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 21, 2, false, false, 2840, NULL, (methodPointerType)NULL};
static MethodInfo* t1088_MIs[] =
{
	&m5811_MI,
	&m5812_MI,
	&m5813_MI,
	&m5814_MI,
	&m5815_MI,
	&m5816_MI,
	&m5817_MI,
	&m5818_MI,
	&m5819_MI,
	&m5820_MI,
	&m5821_MI,
	&m5822_MI,
	&m5823_MI,
	&m5824_MI,
	&m5825_MI,
	&m5826_MI,
	NULL
};
extern TypeInfo t1090_TI;
static TypeInfo* t1088_TI__nestedTypes[2] =
{
	&t1090_TI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m5825_MI;
extern MethodInfo m5823_MI;
extern MethodInfo m5821_MI;
extern MethodInfo m5816_MI;
extern MethodInfo m5845_MI;
extern MethodInfo m5817_MI;
extern MethodInfo m5815_MI;
extern MethodInfo m4381_MI;
extern MethodInfo m5821_MI;
extern MethodInfo m5822_MI;
extern MethodInfo m5823_MI;
extern MethodInfo m5813_MI;
extern MethodInfo m5814_MI;
extern MethodInfo m5818_MI;
extern MethodInfo m5819_MI;
extern MethodInfo m5820_MI;
extern MethodInfo m5846_MI;
extern MethodInfo m5824_MI;
extern MethodInfo m5826_MI;
static MethodInfo* t1088_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m5825_MI,
	&m5823_MI,
	&m5821_MI,
	&m5816_MI,
	&m5845_MI,
	&m5817_MI,
	&m5815_MI,
	&m4381_MI,
	&m5821_MI,
	&m5822_MI,
	&m5823_MI,
	&m5813_MI,
	&m5814_MI,
	&m5818_MI,
	&m5819_MI,
	&m5820_MI,
	&m5846_MI,
	&m5824_MI,
	&m5826_MI,
};
extern TypeInfo t485_TI;
static TypeInfo* t1088_ITIs[] = 
{
	&t485_TI,
};
extern TypeInfo t1631_TI;
extern TypeInfo t1395_TI;
extern TypeInfo t1525_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t1088_IOs[] = 
{
	{ &t1631_TI, 14},
	{ &t1395_TI, 4},
	{ &t1525_TI, 6},
	{ &t485_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1088_0_0_0;
extern Il2CppType t1088_1_0_0;
extern TypeInfo t841_TI;
struct t1088;
extern TypeInfo t1088_TI;
TypeInfo t1088_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoProperty", "System.Reflection", t1088_MIs, t1088_PIs, t1088_FIs, NULL, &t841_TI, t1088_TI__nestedTypes, NULL, &t1088_TI, t1088_ITIs, t1088_VT, &EmptyCustomAttributesCache, &t1088_TI, &t1088_0_0_0, &t1088_1_0_0, t1088_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1088), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 16, 5, 5, 0, 1, 22, 1, 4};
#include "t1057.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1057_TI;
#include "t1057MD.h"



// Metadata Definition System.Reflection.ParameterAttributes
extern Il2CppType t134_0_0_1542;
FieldInfo t1057_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1057_TI, offsetof(t1057, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1057_0_0_32854;
FieldInfo t1057_f2_FieldInfo = 
{
	"None", &t1057_0_0_32854, &t1057_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1057_0_0_32854;
FieldInfo t1057_f3_FieldInfo = 
{
	"In", &t1057_0_0_32854, &t1057_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1057_0_0_32854;
FieldInfo t1057_f4_FieldInfo = 
{
	"Out", &t1057_0_0_32854, &t1057_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1057_0_0_32854;
FieldInfo t1057_f5_FieldInfo = 
{
	"Lcid", &t1057_0_0_32854, &t1057_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1057_0_0_32854;
FieldInfo t1057_f6_FieldInfo = 
{
	"Retval", &t1057_0_0_32854, &t1057_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1057_0_0_32854;
FieldInfo t1057_f7_FieldInfo = 
{
	"Optional", &t1057_0_0_32854, &t1057_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1057_0_0_32854;
FieldInfo t1057_f8_FieldInfo = 
{
	"ReservedMask", &t1057_0_0_32854, &t1057_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1057_0_0_32854;
FieldInfo t1057_f9_FieldInfo = 
{
	"HasDefault", &t1057_0_0_32854, &t1057_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1057_0_0_32854;
FieldInfo t1057_f10_FieldInfo = 
{
	"HasFieldMarshal", &t1057_0_0_32854, &t1057_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1057_0_0_32854;
FieldInfo t1057_f11_FieldInfo = 
{
	"Reserved3", &t1057_0_0_32854, &t1057_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1057_0_0_32854;
FieldInfo t1057_f12_FieldInfo = 
{
	"Reserved4", &t1057_0_0_32854, &t1057_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1057_FIs[] =
{
	&t1057_f1_FieldInfo,
	&t1057_f2_FieldInfo,
	&t1057_f3_FieldInfo,
	&t1057_f4_FieldInfo,
	&t1057_f5_FieldInfo,
	&t1057_f6_FieldInfo,
	&t1057_f7_FieldInfo,
	&t1057_f8_FieldInfo,
	&t1057_f9_FieldInfo,
	&t1057_f10_FieldInfo,
	&t1057_f11_FieldInfo,
	&t1057_f12_FieldInfo,
	NULL
};
static const int32_t t1057_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1057_f2_DefaultValue = 
{
	&t1057_f2_FieldInfo, { (char*)&t1057_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1057_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1057_f3_DefaultValue = 
{
	&t1057_f3_FieldInfo, { (char*)&t1057_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1057_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1057_f4_DefaultValue = 
{
	&t1057_f4_FieldInfo, { (char*)&t1057_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1057_f5_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1057_f5_DefaultValue = 
{
	&t1057_f5_FieldInfo, { (char*)&t1057_f5_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1057_f6_DefaultValueData = 8;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1057_f6_DefaultValue = 
{
	&t1057_f6_FieldInfo, { (char*)&t1057_f6_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1057_f7_DefaultValueData = 16;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1057_f7_DefaultValue = 
{
	&t1057_f7_FieldInfo, { (char*)&t1057_f7_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1057_f8_DefaultValueData = 61440;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1057_f8_DefaultValue = 
{
	&t1057_f8_FieldInfo, { (char*)&t1057_f8_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1057_f9_DefaultValueData = 4096;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1057_f9_DefaultValue = 
{
	&t1057_f9_FieldInfo, { (char*)&t1057_f9_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1057_f10_DefaultValueData = 8192;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1057_f10_DefaultValue = 
{
	&t1057_f10_FieldInfo, { (char*)&t1057_f10_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1057_f11_DefaultValueData = 16384;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1057_f11_DefaultValue = 
{
	&t1057_f11_FieldInfo, { (char*)&t1057_f11_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1057_f12_DefaultValueData = 32768;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1057_f12_DefaultValue = 
{
	&t1057_f12_FieldInfo, { (char*)&t1057_f12_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1057_FDVs[] = 
{
	&t1057_f2_DefaultValue,
	&t1057_f3_DefaultValue,
	&t1057_f4_DefaultValue,
	&t1057_f5_DefaultValue,
	&t1057_f6_DefaultValue,
	&t1057_f7_DefaultValue,
	&t1057_f8_DefaultValue,
	&t1057_f9_DefaultValue,
	&t1057_f10_DefaultValue,
	&t1057_f11_DefaultValue,
	&t1057_f12_DefaultValue,
	NULL
};
static MethodInfo* t1057_MIs[] =
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
static MethodInfo* t1057_VT[] =
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
static Il2CppInterfaceOffsetPair t1057_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t435_TI;
#include "t435.h"
#include "t435MD.h"
extern MethodInfo m1830_MI;
extern TypeInfo t541_TI;
#include "t541.h"
#include "t541MD.h"
extern MethodInfo m2528_MI;
void t1057_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t435 * tmp;
		tmp = (t435 *)il2cpp_codegen_object_new (&t435_TI);
		m1830(tmp, &m1830_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1057__CustomAttributeCache = {
2,
NULL,
&t1057_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1057_0_0_0;
extern Il2CppType t1057_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t1057__CustomAttributeCache;
TypeInfo t1057_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ParameterAttributes", "System.Reflection", t1057_MIs, NULL, t1057_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1057_VT, &t1057__CustomAttributeCache, &t134_TI, &t1057_0_0_0, &t1057_1_0_0, t1057_IOs, NULL, NULL, t1057_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1057)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 12, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t732_TI;

#include "t1047.h"
#include "t132.h"
#include "t344.h"
#include "t1052.h"
#include "t854.h"
#include "t856.h"
#include "t848.h"
#include "t852.h"
extern TypeInfo t732_TI;
extern TypeInfo t1057_TI;
extern TypeInfo t1047_TI;
extern TypeInfo t27_TI;
extern TypeInfo t134_TI;
extern TypeInfo t131_TI;
extern TypeInfo t125_TI;
extern TypeInfo t123_TI;
extern TypeInfo t438_TI;
extern TypeInfo t344_TI;
extern TypeInfo t1394_TI;
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t854_TI;
extern TypeInfo t856_TI;
extern TypeInfo t848_TI;
#include "t25MD.h"
#include "t1047MD.h"
#include "t438MD.h"
#include "t854MD.h"
#include "t856MD.h"
#include "t848MD.h"
#include "t1052MD.h"
extern Il2CppType t123_0_0_0;
extern MethodInfo m5831_MI;
extern MethodInfo m452_MI;
extern MethodInfo m5545_MI;
extern MethodInfo m5546_MI;
extern MethodInfo m5544_MI;
extern MethodInfo m3464_MI;
extern MethodInfo m5837_MI;
extern MethodInfo m5838_MI;
extern MethodInfo m7865_MI;
extern MethodInfo m4324_MI;
extern MethodInfo m3522_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3462_MI;
extern MethodInfo m3461_MI;
extern MethodInfo m386_MI;
extern MethodInfo m3448_MI;
extern MethodInfo m3520_MI;
extern MethodInfo m5835_MI;
extern MethodInfo m1867_MI;
extern MethodInfo m610_MI;
extern MethodInfo m7470_MI;
extern MethodInfo m7472_MI;
extern MethodInfo m5832_MI;
extern MethodInfo m5834_MI;
extern MethodInfo m5833_MI;
extern MethodInfo m4401_MI;
extern MethodInfo m4403_MI;
extern MethodInfo m4396_MI;
extern MethodInfo m5595_MI;


extern MethodInfo m5827_MI;
 void m5827 (t732 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5827_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m5828_MI;
 void m5828 (t732 * __this, t1047 * p0, t131 * p1, t438 * p2, int32_t p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5828_MI);
	{
		m452(__this, &m452_MI);
		__this->f0 = p1;
		__this->f2 = p2;
		if (!p0)
		{
			goto IL_003f;
		}
	}
	{
		NullCheck(p0);
		t27* L_0 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5545_MI, p0);
		__this->f3 = L_0;
		NullCheck(p0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5546_MI, p0);
		__this->f4 = ((int32_t)(L_1-1));
		NullCheck(p0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5544_MI, p0);
		__this->f5 = L_2;
		goto IL_0057;
	}

IL_003f:
	{
		__this->f3 = (t27*)NULL;
		__this->f4 = ((int32_t)(p3-1));
		__this->f5 = 0;
	}

IL_0057:
	{
		return;
	}
}
extern MethodInfo m5829_MI;
 void m5829 (t732 * __this, t732 * p0, t438 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5829_MI);
	{
		m452(__this, &m452_MI);
		NullCheck(p0);
		t131 * L_0 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3464_MI, p0);
		__this->f0 = L_0;
		__this->f2 = p1;
		NullCheck(p0);
		t27* L_1 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5837_MI, p0);
		__this->f3 = L_1;
		NullCheck(p0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5838_MI, p0);
		__this->f4 = L_2;
		NullCheck(p0);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5831_MI, p0);
		__this->f5 = L_3;
		return;
	}
}
extern MethodInfo m5830_MI;
 t27* m5830 (t732 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5830_MI);
	t131 * V_0 = {0};
	bool V_1 = false;
	t27* V_2 = {0};
	int32_t G_B7_0 = 0;
	t27* G_B10_0 = {0};
	{
		t131 * L_0 = (__this->f0);
		V_0 = L_0;
		goto IL_0010;
	}

IL_0009:
	{
		NullCheck(V_0);
		t131 * L_1 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m7865_MI, V_0);
		V_0 = L_1;
	}

IL_0010:
	{
		NullCheck(V_0);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4324_MI, V_0);
		if (L_2)
		{
			goto IL_0009;
		}
	}
	{
		NullCheck(V_0);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3522_MI, V_0);
		if (L_3)
		{
			goto IL_0054;
		}
	}
	{
		t131 * L_4 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_5 = m484(NULL, LoadTypeToken(&t123_0_0_0), &m484_MI);
		if ((((t131 *)L_4) == ((t131 *)L_5)))
		{
			goto IL_0054;
		}
	}
	{
		t131 * L_6 = (__this->f0);
		NullCheck(L_6);
		t27* L_7 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3462_MI, L_6);
		t438 * L_8 = (__this->f2);
		NullCheck(L_8);
		t131 * L_9 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3461_MI, L_8);
		NullCheck(L_9);
		t27* L_10 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3462_MI, L_9);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_11 = m386(NULL, L_7, L_10, &m386_MI);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 1;
	}

IL_0055:
	{
		V_1 = G_B7_0;
		if (!V_1)
		{
			goto IL_0066;
		}
	}
	{
		t131 * L_12 = (__this->f0);
		NullCheck(L_12);
		t27* L_13 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3448_MI, L_12);
		G_B10_0 = L_13;
		goto IL_0071;
	}

IL_0066:
	{
		t131 * L_14 = (__this->f0);
		NullCheck(L_14);
		t27* L_15 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, L_14);
		G_B10_0 = L_15;
	}

IL_0071:
	{
		V_2 = G_B10_0;
		bool L_16 = m5835(__this, &m5835_MI);
		if (L_16)
		{
			goto IL_0095;
		}
	}
	{
		uint16_t L_17 = ((int32_t)32);
		t25 * L_18 = Box(InitializedTypeInfo(&t344_TI), &L_17);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_19 = m1867(NULL, V_2, L_18, &m1867_MI);
		V_2 = L_19;
		t27* L_20 = (__this->f3);
		t27* L_21 = m610(NULL, V_2, L_20, &m610_MI);
		V_2 = L_21;
	}

IL_0095:
	{
		return V_2;
	}
}
extern MethodInfo m3464_MI;
 t131 * m3464 (t732 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3464_MI);
	{
		t131 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m5831_MI;
 int32_t m5831 (t732 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5831_MI);
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m5832_MI;
 bool m5832 (t732 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5832_MI);
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5831_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)(L_0&1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m5833_MI;
 bool m5833 (t732 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5833_MI);
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5831_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)(L_0&((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m5834_MI;
 bool m5834 (t732 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5834_MI);
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5831_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)(L_0&2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m5835_MI;
 bool m5835 (t732 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5835_MI);
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5831_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)(L_0&8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m5836_MI;
 t438 * m5836 (t732 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5836_MI);
	{
		t438 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m5837_MI;
 t27* m5837 (t732 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5837_MI);
	{
		t27* L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m5838_MI;
 int32_t m5838 (t732 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5838_MI);
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m5839_MI;
 t158* m5839 (t732 * __this, t131 * p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5839_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1394_TI));
		t158* L_0 = m7470(NULL, __this, p0, p1, &m7470_MI);
		return L_0;
	}
}
extern MethodInfo m5840_MI;
 bool m5840 (t732 * __this, t131 * p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5840_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1394_TI));
		bool L_0 = m7472(NULL, __this, p0, p1, &m7472_MI);
		return L_0;
	}
}
extern MethodInfo m5841_MI;
 t158* m5841 (t732 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5841_MI);
	int32_t V_0 = 0;
	t158* V_1 = {0};
	{
		V_0 = 0;
		bool L_0 = m5832(__this, &m5832_MI);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_000e:
	{
		bool L_1 = m5834(__this, &m5834_MI);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_001a:
	{
		bool L_2 = m5833(__this, &m5833_MI);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0026:
	{
		t1052 * L_3 = (__this->f6);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0032:
	{
		if (V_0)
		{
			goto IL_0037;
		}
	}
	{
		return (t158*)NULL;
	}

IL_0037:
	{
		V_1 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), V_0));
		V_0 = 0;
		bool L_4 = m5832(__this, &m5832_MI);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)(L_5+1));
		t854 * L_6 = (t854 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t854_TI));
		m4401(L_6, &m4401_MI);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_5);
		ArrayElementTypeCheck (V_1, L_6);
		*((t25 **)(t25 **)SZArrayLdElema(V_1, L_5)) = (t25 *)L_6;
	}

IL_0054:
	{
		bool L_7 = m5833(__this, &m5833_MI);
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)(L_8+1));
		t856 * L_9 = (t856 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t856_TI));
		m4403(L_9, &m4403_MI);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_8);
		ArrayElementTypeCheck (V_1, L_9);
		*((t25 **)(t25 **)SZArrayLdElema(V_1, L_8)) = (t25 *)L_9;
	}

IL_0068:
	{
		bool L_10 = m5834(__this, &m5834_MI);
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)(L_11+1));
		t848 * L_12 = (t848 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t848_TI));
		m4396(L_12, &m4396_MI);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_11);
		ArrayElementTypeCheck (V_1, L_12);
		*((t25 **)(t25 **)SZArrayLdElema(V_1, L_11)) = (t25 *)L_12;
	}

IL_007c:
	{
		t1052 * L_13 = (__this->f6);
		if (!L_13)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)(L_14+1));
		t1052 * L_15 = (__this->f6);
		NullCheck(L_15);
		t852 * L_16 = m5595(L_15, &m5595_MI);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_14);
		ArrayElementTypeCheck (V_1, L_16);
		*((t25 **)(t25 **)SZArrayLdElema(V_1, L_14)) = (t25 *)L_16;
	}

IL_0096:
	{
		return V_1;
	}
}
// Metadata Definition System.Reflection.ParameterInfo
extern Il2CppType t131_0_0_4;
FieldInfo t732_f0_FieldInfo = 
{
	"ClassImpl", &t131_0_0_4, &t732_TI, offsetof(t732, f0), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_4;
FieldInfo t732_f1_FieldInfo = 
{
	"DefaultValueImpl", &t25_0_0_4, &t732_TI, offsetof(t732, f1), &EmptyCustomAttributesCache};
extern Il2CppType t438_0_0_4;
FieldInfo t732_f2_FieldInfo = 
{
	"MemberImpl", &t438_0_0_4, &t732_TI, offsetof(t732, f2), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_4;
FieldInfo t732_f3_FieldInfo = 
{
	"NameImpl", &t27_0_0_4, &t732_TI, offsetof(t732, f3), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_4;
FieldInfo t732_f4_FieldInfo = 
{
	"PositionImpl", &t134_0_0_4, &t732_TI, offsetof(t732, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1057_0_0_4;
FieldInfo t732_f5_FieldInfo = 
{
	"AttrsImpl", &t1057_0_0_4, &t732_TI, offsetof(t732, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1052_0_0_1;
FieldInfo t732_f6_FieldInfo = 
{
	"marshalAs", &t1052_0_0_1, &t732_TI, offsetof(t732, f6), &EmptyCustomAttributesCache};
static FieldInfo* t732_FIs[] =
{
	&t732_f0_FieldInfo,
	&t732_f1_FieldInfo,
	&t732_f2_FieldInfo,
	&t732_f3_FieldInfo,
	&t732_f4_FieldInfo,
	&t732_f5_FieldInfo,
	&t732_f6_FieldInfo,
	NULL
};
extern MethodInfo m3464_MI;
static PropertyInfo t732____ParameterType_PropertyInfo = 
{
	&t732_TI, "ParameterType", &m3464_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5831_MI;
static PropertyInfo t732____Attributes_PropertyInfo = 
{
	&t732_TI, "Attributes", &m5831_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5832_MI;
static PropertyInfo t732____IsIn_PropertyInfo = 
{
	&t732_TI, "IsIn", &m5832_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5833_MI;
static PropertyInfo t732____IsOptional_PropertyInfo = 
{
	&t732_TI, "IsOptional", &m5833_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5834_MI;
static PropertyInfo t732____IsOut_PropertyInfo = 
{
	&t732_TI, "IsOut", &m5834_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5835_MI;
static PropertyInfo t732____IsRetval_PropertyInfo = 
{
	&t732_TI, "IsRetval", &m5835_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5836_MI;
static PropertyInfo t732____Member_PropertyInfo = 
{
	&t732_TI, "Member", &m5836_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5837_MI;
static PropertyInfo t732____Name_PropertyInfo = 
{
	&t732_TI, "Name", &m5837_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5838_MI;
static PropertyInfo t732____Position_PropertyInfo = 
{
	&t732_TI, "Position", &m5838_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t732_PIs[] =
{
	&t732____ParameterType_PropertyInfo,
	&t732____Attributes_PropertyInfo,
	&t732____IsIn_PropertyInfo,
	&t732____IsOptional_PropertyInfo,
	&t732____IsOut_PropertyInfo,
	&t732____IsRetval_PropertyInfo,
	&t732____Member_PropertyInfo,
	&t732____Name_PropertyInfo,
	&t732____Position_PropertyInfo,
	NULL
};
extern TypeInfo t732_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5827_MI = 
{
	".ctor", (methodPointerType)&m5827, &t732_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2845, NULL, (methodPointerType)NULL};
extern Il2CppType t1047_0_0_0;
extern Il2CppType t131_0_0_0;
extern Il2CppType t438_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t732_m5828_ParameterInfos[] = 
{
	{"pb", 0, 134221301, &EmptyCustomAttributesCache, &t1047_0_0_0},
	{"type", 1, 134221302, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"member", 2, 134221303, &EmptyCustomAttributesCache, &t438_0_0_0},
	{"position", 3, 134221304, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t732_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5828_MI = 
{
	".ctor", (methodPointerType)&m5828, &t732_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25_t134, t732_m5828_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 2846, NULL, (methodPointerType)NULL};
extern Il2CppType t732_0_0_0;
extern Il2CppType t438_0_0_0;
static ParameterInfo t732_m5829_ParameterInfos[] = 
{
	{"pinfo", 0, 134221305, &EmptyCustomAttributesCache, &t732_0_0_0},
	{"member", 1, 134221306, &EmptyCustomAttributesCache, &t438_0_0_0},
};
extern TypeInfo t732_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5829_MI = 
{
	".ctor", (methodPointerType)&m5829, &t732_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t732_m5829_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 2847, NULL, (methodPointerType)NULL};
extern TypeInfo t732_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5830_MI = 
{
	"ToString", (methodPointerType)&m5830, &t732_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2848, NULL, (methodPointerType)NULL};
extern TypeInfo t732_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3464_MI = 
{
	"get_ParameterType", (methodPointerType)&m3464, &t732_TI, &t131_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 2849, NULL, (methodPointerType)NULL};
extern TypeInfo t732_TI;
extern Il2CppType t1057_0_0_0;
extern void* RuntimeInvoker_t1057 (MethodInfo* method, void* obj, void** args);
MethodInfo m5831_MI = 
{
	"get_Attributes", (methodPointerType)&m5831, &t732_TI, &t1057_0_0_0, RuntimeInvoker_t1057, NULL, &EmptyCustomAttributesCache, 2502, 0, 7, 0, false, false, 2850, NULL, (methodPointerType)NULL};
extern TypeInfo t732_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5832_MI = 
{
	"get_IsIn", (methodPointerType)&m5832, &t732_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2851, NULL, (methodPointerType)NULL};
extern TypeInfo t732_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5833_MI = 
{
	"get_IsOptional", (methodPointerType)&m5833, &t732_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2852, NULL, (methodPointerType)NULL};
extern TypeInfo t732_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5834_MI = 
{
	"get_IsOut", (methodPointerType)&m5834, &t732_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2853, NULL, (methodPointerType)NULL};
extern TypeInfo t732_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5835_MI = 
{
	"get_IsRetval", (methodPointerType)&m5835, &t732_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2854, NULL, (methodPointerType)NULL};
extern TypeInfo t732_TI;
extern Il2CppType t438_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5836_MI = 
{
	"get_Member", (methodPointerType)&m5836, &t732_TI, &t438_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 2855, NULL, (methodPointerType)NULL};
extern TypeInfo t732_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5837_MI = 
{
	"get_Name", (methodPointerType)&m5837, &t732_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 2856, NULL, (methodPointerType)NULL};
extern TypeInfo t732_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5838_MI = 
{
	"get_Position", (methodPointerType)&m5838, &t732_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2502, 0, 10, 0, false, false, 2857, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t732_m5839_ParameterInfos[] = 
{
	{"attributeType", 0, 134221307, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"inherit", 1, 134221308, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t732_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m5839_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m5839, &t732_TI, &t158_0_0_0, RuntimeInvoker_t25_t25_t137, t732_m5839_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 2, false, false, 2858, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t732_m5840_ParameterInfos[] = 
{
	{"attributeType", 0, 134221309, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"inherit", 1, 134221310, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t732_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m5840_MI = 
{
	"IsDefined", (methodPointerType)&m5840, &t732_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t137, t732_m5840_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 12, 2, false, false, 2859, NULL, (methodPointerType)NULL};
extern TypeInfo t732_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5841_MI = 
{
	"GetPseudoCustomAttributes", (methodPointerType)&m5841, &t732_TI, &t158_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2860, NULL, (methodPointerType)NULL};
static MethodInfo* t732_MIs[] =
{
	&m5827_MI,
	&m5828_MI,
	&m5829_MI,
	&m5830_MI,
	&m3464_MI,
	&m5831_MI,
	&m5832_MI,
	&m5833_MI,
	&m5834_MI,
	&m5835_MI,
	&m5836_MI,
	&m5837_MI,
	&m5838_MI,
	&m5839_MI,
	&m5840_MI,
	&m5841_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m5830_MI;
extern MethodInfo m5839_MI;
extern MethodInfo m5840_MI;
extern MethodInfo m3464_MI;
extern MethodInfo m5831_MI;
extern MethodInfo m5836_MI;
extern MethodInfo m5837_MI;
extern MethodInfo m5838_MI;
extern MethodInfo m5839_MI;
extern MethodInfo m5840_MI;
static MethodInfo* t732_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m5830_MI,
	&m5839_MI,
	&m5840_MI,
	&m3464_MI,
	&m5831_MI,
	&m5836_MI,
	&m5837_MI,
	&m5838_MI,
	&m5839_MI,
	&m5840_MI,
};
extern TypeInfo t1395_TI;
extern TypeInfo t1632_TI;
static TypeInfo* t732_ITIs[] = 
{
	&t1395_TI,
	&t1632_TI,
};
extern TypeInfo t1395_TI;
extern TypeInfo t1632_TI;
static Il2CppInterfaceOffsetPair t732_IOs[] = 
{
	{ &t1395_TI, 4},
	{ &t1632_TI, 6},
};
extern TypeInfo t1106_TI;
#include "t1106.h"
#include "t1106MD.h"
extern MethodInfo m5863_MI;
extern TypeInfo t1108_TI;
#include "t1108.h"
#include "t1108MD.h"
extern MethodInfo m5864_MI;
extern TypeInfo t1632_TI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t732_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1106 * tmp;
		tmp = (t1106 *)il2cpp_codegen_object_new (&t1106_TI);
		m5863(tmp, 0, &m5863_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1108 * tmp;
		tmp = (t1108 *)il2cpp_codegen_object_new (&t1108_TI);
		m5864(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1632_TI)), &m5864_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t732__CustomAttributeCache = {
3,
NULL,
&t732_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t732_0_0_0;
extern Il2CppType t732_1_0_0;
extern TypeInfo t25_TI;
struct t732;
extern TypeInfo t732_TI;
extern CustomAttributesCache t732__CustomAttributeCache;
TypeInfo t732_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ParameterInfo", "System.Reflection", t732_MIs, t732_PIs, t732_FIs, NULL, &t25_TI, NULL, NULL, &t732_TI, t732_ITIs, t732_VT, &t732__CustomAttributeCache, &t732_TI, &t732_0_0_0, &t732_1_0_0, t732_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t732), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 16, 9, 7, 0, 0, 13, 2, 2};
#include "t727.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t727_TI;
#include "t727MD.h"



// Conversion methods for marshalling of: System.Reflection.ParameterModifier
void t727_marshal(const t727& unmarshaled, t727_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.f0);
}
void t727_marshal_back(const t727_marshaled& marshaled, t727& unmarshaled)
{
	extern TypeInfo t125_TI;
	unmarshaled.f0 = (t1091*)il2cpp_codegen_marshal_array_result(&t125_TI, marshaled.f0, 1);
}
// Conversion method for clean up from marshalling of: System.Reflection.ParameterModifier
void t727_marshal_cleanup(t727_marshaled& marshaled)
{
}
// Metadata Definition System.Reflection.ParameterModifier
extern Il2CppType t1091_0_0_1;
FieldInfo t727_f0_FieldInfo = 
{
	"_byref", &t1091_0_0_1, &t727_TI, offsetof(t727, f0) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t727_FIs[] =
{
	&t727_f0_FieldInfo,
	NULL
};
static MethodInfo* t727_MIs[] =
{
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
static MethodInfo* t727_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
};
extern TypeInfo t530_TI;
#include "t530.h"
#include "t530MD.h"
extern MethodInfo m2499_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t727_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t530 * tmp;
		tmp = (t530 *)il2cpp_codegen_object_new (&t530_TI);
		m2499(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m2499_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t727__CustomAttributeCache = {
2,
NULL,
&t727_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t727_0_0_0;
extern Il2CppType t727_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t727_TI;
extern CustomAttributesCache t727__CustomAttributeCache;
TypeInfo t727_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ParameterModifier", "System.Reflection", t727_MIs, NULL, t727_FIs, NULL, &t117_TI, NULL, NULL, &t727_TI, NULL, t727_VT, &t727__CustomAttributeCache, &t727_TI, &t727_0_0_0, &t727_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t727_marshal, (methodPointerType)t727_marshal_back, (methodPointerType)t727_marshal_cleanup, sizeof (t727)+ sizeof (Il2CppObject), 0, sizeof(t727_marshaled), 0, 0, -1, 1057033, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 1, 0, 0, 4, 0, 0};
#include "t1092.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1092_TI;
#include "t1092MD.h"

#include "t177.h"
extern TypeInfo t177_TI;
#include "t177MD.h"
extern MethodInfo m452_MI;
extern MethodInfo m7533_MI;


extern MethodInfo m5842_MI;
 void m5842 (t1092 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5842_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m5843_MI;
 void m5843 (t1092 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5843_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m7533(L_0, (t27*) &_stringLiteral938, &m7533_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Reflection.Pointer
extern Il2CppType t1498_0_0_1;
FieldInfo t1092_f0_FieldInfo = 
{
	"data", &t1498_0_0_1, &t1092_TI, offsetof(t1092, f0), &EmptyCustomAttributesCache};
extern Il2CppType t131_0_0_1;
FieldInfo t1092_f1_FieldInfo = 
{
	"type", &t131_0_0_1, &t1092_TI, offsetof(t1092, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1092_FIs[] =
{
	&t1092_f0_FieldInfo,
	&t1092_f1_FieldInfo,
	NULL
};
extern TypeInfo t1092_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5842_MI = 
{
	".ctor", (methodPointerType)&m5842, &t1092_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6273, 0, 255, 0, false, false, 2861, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1092_m5843_ParameterInfos[] = 
{
	{"info", 0, 134221311, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221312, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1092_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m5843_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m5843, &t1092_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1092_m5843_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 2, false, false, 2862, NULL, (methodPointerType)NULL};
static MethodInfo* t1092_MIs[] =
{
	&m5842_MI,
	&m5843_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m5843_MI;
static MethodInfo* t1092_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m5843_MI,
};
extern TypeInfo t485_TI;
static TypeInfo* t1092_ITIs[] = 
{
	&t485_TI,
};
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t1092_IOs[] = 
{
	{ &t485_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t789_TI;
#include "t789.h"
#include "t789MD.h"
extern MethodInfo m3582_MI;
void t1092_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1092__CustomAttributeCache = {
2,
NULL,
&t1092_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1092_0_0_0;
extern Il2CppType t1092_1_0_0;
extern TypeInfo t25_TI;
struct t1092;
extern TypeInfo t1092_TI;
extern CustomAttributesCache t1092__CustomAttributeCache;
TypeInfo t1092_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Pointer", "System.Reflection", t1092_MIs, NULL, t1092_FIs, NULL, &t25_TI, NULL, NULL, &t1092_TI, t1092_ITIs, t1092_VT, &t1092__CustomAttributeCache, &t1092_TI, &t1092_0_0_0, &t1092_1_0_0, t1092_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1092), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 2, 0, 0, 5, 1, 1};
#include "t1068.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1068_TI;
#include "t1068MD.h"



// Metadata Definition System.Reflection.ProcessorArchitecture
extern Il2CppType t134_0_0_1542;
FieldInfo t1068_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1068_TI, offsetof(t1068, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1068_0_0_32854;
FieldInfo t1068_f2_FieldInfo = 
{
	"None", &t1068_0_0_32854, &t1068_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1068_0_0_32854;
FieldInfo t1068_f3_FieldInfo = 
{
	"MSIL", &t1068_0_0_32854, &t1068_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1068_0_0_32854;
FieldInfo t1068_f4_FieldInfo = 
{
	"X86", &t1068_0_0_32854, &t1068_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1068_0_0_32854;
FieldInfo t1068_f5_FieldInfo = 
{
	"IA64", &t1068_0_0_32854, &t1068_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1068_0_0_32854;
FieldInfo t1068_f6_FieldInfo = 
{
	"Amd64", &t1068_0_0_32854, &t1068_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1068_FIs[] =
{
	&t1068_f1_FieldInfo,
	&t1068_f2_FieldInfo,
	&t1068_f3_FieldInfo,
	&t1068_f4_FieldInfo,
	&t1068_f5_FieldInfo,
	&t1068_f6_FieldInfo,
	NULL
};
static const int32_t t1068_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1068_f2_DefaultValue = 
{
	&t1068_f2_FieldInfo, { (char*)&t1068_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1068_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1068_f3_DefaultValue = 
{
	&t1068_f3_FieldInfo, { (char*)&t1068_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1068_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1068_f4_DefaultValue = 
{
	&t1068_f4_FieldInfo, { (char*)&t1068_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1068_f5_DefaultValueData = 3;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1068_f5_DefaultValue = 
{
	&t1068_f5_FieldInfo, { (char*)&t1068_f5_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1068_f6_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1068_f6_DefaultValue = 
{
	&t1068_f6_FieldInfo, { (char*)&t1068_f6_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1068_FDVs[] = 
{
	&t1068_f2_DefaultValue,
	&t1068_f3_DefaultValue,
	&t1068_f4_DefaultValue,
	&t1068_f5_DefaultValue,
	&t1068_f6_DefaultValue,
	NULL
};
static MethodInfo* t1068_MIs[] =
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
static MethodInfo* t1068_VT[] =
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
static Il2CppInterfaceOffsetPair t1068_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1068_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1068__CustomAttributeCache = {
1,
NULL,
&t1068_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1068_0_0_0;
extern Il2CppType t1068_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t1068__CustomAttributeCache;
TypeInfo t1068_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ProcessorArchitecture", "System.Reflection", t1068_MIs, NULL, t1068_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1068_VT, &t1068__CustomAttributeCache, &t134_TI, &t1068_0_0_0, &t1068_1_0_0, t1068_IOs, NULL, NULL, t1068_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1068)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1087_TI;
#include "t1087MD.h"



// Metadata Definition System.Reflection.PropertyAttributes
extern Il2CppType t134_0_0_1542;
FieldInfo t1087_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1087_TI, offsetof(t1087, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1087_0_0_32854;
FieldInfo t1087_f2_FieldInfo = 
{
	"None", &t1087_0_0_32854, &t1087_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1087_0_0_32854;
FieldInfo t1087_f3_FieldInfo = 
{
	"SpecialName", &t1087_0_0_32854, &t1087_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1087_0_0_32854;
FieldInfo t1087_f4_FieldInfo = 
{
	"ReservedMask", &t1087_0_0_32854, &t1087_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1087_0_0_32854;
FieldInfo t1087_f5_FieldInfo = 
{
	"RTSpecialName", &t1087_0_0_32854, &t1087_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1087_0_0_32854;
FieldInfo t1087_f6_FieldInfo = 
{
	"HasDefault", &t1087_0_0_32854, &t1087_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1087_0_0_32854;
FieldInfo t1087_f7_FieldInfo = 
{
	"Reserved2", &t1087_0_0_32854, &t1087_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1087_0_0_32854;
FieldInfo t1087_f8_FieldInfo = 
{
	"Reserved3", &t1087_0_0_32854, &t1087_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1087_0_0_32854;
FieldInfo t1087_f9_FieldInfo = 
{
	"Reserved4", &t1087_0_0_32854, &t1087_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1087_FIs[] =
{
	&t1087_f1_FieldInfo,
	&t1087_f2_FieldInfo,
	&t1087_f3_FieldInfo,
	&t1087_f4_FieldInfo,
	&t1087_f5_FieldInfo,
	&t1087_f6_FieldInfo,
	&t1087_f7_FieldInfo,
	&t1087_f8_FieldInfo,
	&t1087_f9_FieldInfo,
	NULL
};
static const int32_t t1087_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1087_f2_DefaultValue = 
{
	&t1087_f2_FieldInfo, { (char*)&t1087_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1087_f3_DefaultValueData = 512;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1087_f3_DefaultValue = 
{
	&t1087_f3_FieldInfo, { (char*)&t1087_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1087_f4_DefaultValueData = 62464;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1087_f4_DefaultValue = 
{
	&t1087_f4_FieldInfo, { (char*)&t1087_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1087_f5_DefaultValueData = 1024;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1087_f5_DefaultValue = 
{
	&t1087_f5_FieldInfo, { (char*)&t1087_f5_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1087_f6_DefaultValueData = 4096;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1087_f6_DefaultValue = 
{
	&t1087_f6_FieldInfo, { (char*)&t1087_f6_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1087_f7_DefaultValueData = 8192;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1087_f7_DefaultValue = 
{
	&t1087_f7_FieldInfo, { (char*)&t1087_f7_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1087_f8_DefaultValueData = 16384;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1087_f8_DefaultValue = 
{
	&t1087_f8_FieldInfo, { (char*)&t1087_f8_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1087_f9_DefaultValueData = 32768;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1087_f9_DefaultValue = 
{
	&t1087_f9_FieldInfo, { (char*)&t1087_f9_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1087_FDVs[] = 
{
	&t1087_f2_DefaultValue,
	&t1087_f3_DefaultValue,
	&t1087_f4_DefaultValue,
	&t1087_f5_DefaultValue,
	&t1087_f6_DefaultValue,
	&t1087_f7_DefaultValue,
	&t1087_f8_DefaultValue,
	&t1087_f9_DefaultValue,
	NULL
};
static MethodInfo* t1087_MIs[] =
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
static MethodInfo* t1087_VT[] =
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
static Il2CppInterfaceOffsetPair t1087_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t435_TI;
extern MethodInfo m1830_MI;
void t1087_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t435 * tmp;
		tmp = (t435 *)il2cpp_codegen_object_new (&t435_TI);
		m1830(tmp, &m1830_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1087__CustomAttributeCache = {
2,
NULL,
&t1087_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1087_0_0_0;
extern Il2CppType t1087_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t1087__CustomAttributeCache;
TypeInfo t1087_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PropertyAttributes", "System.Reflection", t1087_MIs, NULL, t1087_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1087_VT, &t1087__CustomAttributeCache, &t134_TI, &t1087_0_0_0, &t1087_1_0_0, t1087_IOs, NULL, NULL, t1087_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1087)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 9, 0, 0, 23, 0, 3};
#include "t841.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t841_TI;

extern TypeInfo t841_TI;
extern TypeInfo t123_TI;
extern TypeInfo t25_TI;
extern TypeInfo t725_TI;
extern TypeInfo t726_TI;
extern TypeInfo t158_TI;
extern TypeInfo t728_TI;
extern MethodInfo m4380_MI;
extern MethodInfo m8279_MI;


extern MethodInfo m5844_MI;
 void m5844 (t841 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5844_MI);
	{
		m4380(__this, &m4380_MI);
		return;
	}
}
extern MethodInfo m5845_MI;
 int32_t m5845 (t841 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5845_MI);
	{
		return (int32_t)(((int32_t)16));
	}
}
extern MethodInfo m5846_MI;
 void m5846 (t841 * __this, t25 * p0, t25 * p1, t158* p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5846_MI);
	{
		VirtActionInvoker6< t25 *, t25 *, int32_t, t726 *, t158*, t728 * >::Invoke(&m8279_MI, __this, p0, p1, 0, (t726 *)NULL, p2, (t728 *)NULL);
		return;
	}
}
// Metadata Definition System.Reflection.PropertyInfo
extern MethodInfo m7953_MI;
static PropertyInfo t841____Attributes_PropertyInfo = 
{
	&t841_TI, "Attributes", &m7953_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5845_MI;
static PropertyInfo t841____MemberType_PropertyInfo = 
{
	&t841_TI, "MemberType", &m5845_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8264_MI;
static PropertyInfo t841____PropertyType_PropertyInfo = 
{
	&t841_TI, "PropertyType", &m8264_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t841_PIs[] =
{
	&t841____Attributes_PropertyInfo,
	&t841____MemberType_PropertyInfo,
	&t841____PropertyType_PropertyInfo,
	NULL
};
extern TypeInfo t841_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5844_MI = 
{
	".ctor", (methodPointerType)&m5844, &t841_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 2863, NULL, (methodPointerType)NULL};
extern TypeInfo t841_TI;
extern Il2CppType t1087_0_0_0;
extern void* RuntimeInvoker_t1087 (MethodInfo* method, void* obj, void** args);
MethodInfo m7953_MI = 
{
	"get_Attributes", NULL, &t841_TI, &t1087_0_0_0, RuntimeInvoker_t1087, NULL, &EmptyCustomAttributesCache, 3526, 0, 14, 0, false, false, 2864, NULL, (methodPointerType)NULL};
extern TypeInfo t841_TI;
extern Il2CppType t844_0_0_0;
extern void* RuntimeInvoker_t844 (MethodInfo* method, void* obj, void** args);
MethodInfo m5845_MI = 
{
	"get_MemberType", (methodPointerType)&m5845, &t841_TI, &t844_0_0_0, RuntimeInvoker_t844, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 2865, NULL, (methodPointerType)NULL};
extern TypeInfo t841_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8264_MI = 
{
	"get_PropertyType", NULL, &t841_TI, &t131_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 15, 0, false, false, 2866, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t841_m8280_ParameterInfos[] = 
{
	{"nonPublic", 0, 134221313, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t841_TI;
extern Il2CppType t657_0_0_0;
extern void* RuntimeInvoker_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m8280_MI = 
{
	"GetGetMethod", NULL, &t841_TI, &t657_0_0_0, RuntimeInvoker_t25_t137, t841_m8280_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 16, 1, false, false, 2867, NULL, (methodPointerType)NULL};
extern TypeInfo t841_TI;
extern Il2CppType t733_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8263_MI = 
{
	"GetIndexParameters", NULL, &t841_TI, &t733_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 1478, 0, 17, 0, false, false, 2868, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t841_m8281_ParameterInfos[] = 
{
	{"nonPublic", 0, 134221314, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t841_TI;
extern Il2CppType t657_0_0_0;
extern void* RuntimeInvoker_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m8281_MI = 
{
	"GetSetMethod", NULL, &t841_TI, &t657_0_0_0, RuntimeInvoker_t25_t137, t841_m8281_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 18, 1, false, false, 2869, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t158_0_0_0;
static ParameterInfo t841_m5846_ParameterInfos[] = 
{
	{"obj", 0, 134221315, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"value", 1, 134221316, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"index", 2, 134221317, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t841_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t841__CustomAttributeCache_m5846;
MethodInfo m5846_MI = 
{
	"SetValue", (methodPointerType)&m5846, &t841_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t841_m5846_ParameterInfos, &t841__CustomAttributeCache_m5846, 454, 0, 19, 3, false, false, 2870, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t725_0_0_0;
extern Il2CppType t726_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t728_0_0_0;
static ParameterInfo t841_m8279_ParameterInfos[] = 
{
	{"obj", 0, 134221318, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"value", 1, 134221319, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"invokeAttr", 2, 134221320, &EmptyCustomAttributesCache, &t725_0_0_0},
	{"binder", 3, 134221321, &EmptyCustomAttributesCache, &t726_0_0_0},
	{"index", 4, 134221322, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"culture", 5, 134221323, &EmptyCustomAttributesCache, &t728_0_0_0},
};
extern TypeInfo t841_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t134_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8279_MI = 
{
	"SetValue", NULL, &t841_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t134_t25_t25_t25, t841_m8279_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 20, 6, false, false, 2871, NULL, (methodPointerType)NULL};
static MethodInfo* t841_MIs[] =
{
	&m5844_MI,
	&m7953_MI,
	&m5845_MI,
	&m8264_MI,
	&m8280_MI,
	&m8263_MI,
	&m8281_MI,
	&m5846_MI,
	&m8279_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m3434_MI;
extern MethodInfo m7809_MI;
extern MethodInfo m5845_MI;
extern MethodInfo m4381_MI;
extern MethodInfo m5846_MI;
static MethodInfo* t841_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m3434_MI,
	&m7809_MI,
	NULL,
	&m5845_MI,
	NULL,
	NULL,
	&m4381_MI,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&m5846_MI,
	NULL,
};
extern TypeInfo t1631_TI;
static TypeInfo* t841_ITIs[] = 
{
	&t1631_TI,
};
extern TypeInfo t1395_TI;
extern TypeInfo t1525_TI;
extern TypeInfo t1631_TI;
static Il2CppInterfaceOffsetPair t841_IOs[] = 
{
	{ &t1395_TI, 4},
	{ &t1525_TI, 6},
	{ &t1631_TI, 14},
};
extern TypeInfo t1108_TI;
extern MethodInfo m5864_MI;
extern TypeInfo t1631_TI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t1106_TI;
extern MethodInfo m5863_MI;
void t841_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1108 * tmp;
		tmp = (t1108 *)il2cpp_codegen_object_new (&t1108_TI);
		m5864(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1631_TI)), &m5864_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1106 * tmp;
		tmp = (t1106 *)il2cpp_codegen_object_new (&t1106_TI);
		m5863(tmp, 0, &m5863_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t983_TI;
#include "t983.h"
#include "t983MD.h"
extern MethodInfo m4942_MI;
extern TypeInfo t180_TI;
#include "t180.h"
#include "t180MD.h"
extern MethodInfo m567_MI;
void t841_CustomAttributesCacheGenerator_m5846(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t983 * tmp;
		tmp = (t983 *)il2cpp_codegen_object_new (&t983_TI);
		m4942(tmp, &m4942_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t841__CustomAttributeCache = {
3,
NULL,
&t841_CustomAttributesCacheGenerator
};
CustomAttributesCache t841__CustomAttributeCache_m5846 = {
2,
NULL,
&t841_CustomAttributesCacheGenerator_m5846
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t841_0_0_0;
extern Il2CppType t841_1_0_0;
extern TypeInfo t438_TI;
struct t841;
extern TypeInfo t841_TI;
extern CustomAttributesCache t841__CustomAttributeCache;
extern CustomAttributesCache t841__CustomAttributeCache_m5846;
TypeInfo t841_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PropertyInfo", "System.Reflection", t841_MIs, t841_PIs, NULL, NULL, &t438_TI, NULL, NULL, &t841_TI, t841_ITIs, t841_VT, &t841__CustomAttributeCache, &t841_TI, &t841_0_0_0, &t841_1_0_0, t841_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t841), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 9, 3, 0, 0, 0, 21, 1, 3};
#include "t1065.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1065_TI;
#include "t1065MD.h"

#include "t462.h"
extern TypeInfo t876_TI;
extern TypeInfo t462_TI;
extern TypeInfo t131_TI;
extern TypeInfo t1065_TI;
#include "t823MD.h"
extern Il2CppType t876_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m6261_MI;
extern MethodInfo m6276_MI;
extern MethodInfo m6272_MI;
extern MethodInfo m6260_MI;
extern MethodInfo m6271_MI;
extern MethodInfo m6266_MI;


extern MethodInfo m5847_MI;
 void m5847 (t1065 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5847_MI);
	{
		m452(__this, &m452_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t876_0_0_0), &m484_MI);
		NullCheck(p0);
		t25 * L_1 = m6261(p0, (t27*) &_stringLiteral939, L_0, &m6261_MI);
		__this->f0 = ((t876*)Castclass(L_1, InitializedTypeInfo(&t876_TI)));
		NullCheck(p0);
		t27* L_2 = m6276(p0, (t27*) &_stringLiteral940, &m6276_MI);
		__this->f1 = L_2;
		NullCheck(p0);
		bool L_3 = m6272(p0, (t27*) &_stringLiteral941, &m6272_MI);
		__this->f2 = L_3;
		t131 * L_4 = m484(NULL, LoadTypeToken(&t876_0_0_0), &m484_MI);
		NullCheck(p0);
		t25 * L_5 = m6261(p0, (t27*) &_stringLiteral942, L_4, &m6261_MI);
		__this->f3 = ((t876*)Castclass(L_5, InitializedTypeInfo(&t876_TI)));
		return;
	}
}
extern MethodInfo m5848_MI;
 void m5848 (t1065 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5848_MI);
	{
		t876* L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t876_0_0_0), &m484_MI);
		NullCheck(p0);
		m6260(p0, (t27*) &_stringLiteral939, (t25 *)(t25 *)L_0, L_1, &m6260_MI);
		t27* L_2 = (__this->f1);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral940, L_2, &m6271_MI);
		bool L_3 = (__this->f2);
		NullCheck(p0);
		m6266(p0, (t27*) &_stringLiteral941, L_3, &m6266_MI);
		t876* L_4 = (__this->f3);
		t131 * L_5 = m484(NULL, LoadTypeToken(&t876_0_0_0), &m484_MI);
		NullCheck(p0);
		m6260(p0, (t27*) &_stringLiteral942, (t25 *)(t25 *)L_4, L_5, &m6260_MI);
		return;
	}
}
extern MethodInfo m5849_MI;
 void m5849 (t1065 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5849_MI);
	{
		return;
	}
}
// Metadata Definition System.Reflection.StrongNameKeyPair
extern Il2CppType t876_0_0_1;
FieldInfo t1065_f0_FieldInfo = 
{
	"_publicKey", &t876_0_0_1, &t1065_TI, offsetof(t1065, f0), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
FieldInfo t1065_f1_FieldInfo = 
{
	"_keyPairContainer", &t27_0_0_1, &t1065_TI, offsetof(t1065, f1), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1065_f2_FieldInfo = 
{
	"_keyPairExported", &t125_0_0_1, &t1065_TI, offsetof(t1065, f2), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_1;
FieldInfo t1065_f3_FieldInfo = 
{
	"_keyPairArray", &t876_0_0_1, &t1065_TI, offsetof(t1065, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1065_FIs[] =
{
	&t1065_f0_FieldInfo,
	&t1065_f1_FieldInfo,
	&t1065_f2_FieldInfo,
	&t1065_f3_FieldInfo,
	NULL
};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1065_m5847_ParameterInfos[] = 
{
	{"info", 0, 134221324, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221325, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1065_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m5847_MI = 
{
	".ctor", (methodPointerType)&m5847, &t1065_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1065_m5847_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2872, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1065_m5848_ParameterInfos[] = 
{
	{"info", 0, 134221326, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221327, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1065_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m5848_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m5848, &t1065_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1065_m5848_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 2, false, false, 2873, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1065_m5849_ParameterInfos[] = 
{
	{"sender", 0, 134221328, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1065_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5849_MI = 
{
	"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", (methodPointerType)&m5849, &t1065_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1065_m5849_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 1, false, false, 2874, NULL, (methodPointerType)NULL};
static MethodInfo* t1065_MIs[] =
{
	&m5847_MI,
	&m5848_MI,
	&m5849_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m5848_MI;
extern MethodInfo m5849_MI;
static MethodInfo* t1065_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m5848_MI,
	&m5849_MI,
};
extern TypeInfo t485_TI;
extern TypeInfo t1604_TI;
static TypeInfo* t1065_ITIs[] = 
{
	&t485_TI,
	&t1604_TI,
};
extern TypeInfo t485_TI;
extern TypeInfo t1604_TI;
static Il2CppInterfaceOffsetPair t1065_IOs[] = 
{
	{ &t485_TI, 4},
	{ &t1604_TI, 5},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1065_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1065__CustomAttributeCache = {
1,
NULL,
&t1065_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1065_0_0_0;
extern Il2CppType t1065_1_0_0;
extern TypeInfo t25_TI;
struct t1065;
extern TypeInfo t1065_TI;
extern CustomAttributesCache t1065__CustomAttributeCache;
TypeInfo t1065_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StrongNameKeyPair", "System.Reflection", t1065_MIs, NULL, t1065_FIs, NULL, &t25_TI, NULL, NULL, &t1065_TI, t1065_ITIs, t1065_VT, &t1065__CustomAttributeCache, &t1065_TI, &t1065_0_0_0, &t1065_1_0_0, t1065_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1065), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 4, 0, 0, 6, 2, 2};
#include "t1093.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1093_TI;
#include "t1093MD.h"

#include "t866MD.h"
#include "t168MD.h"
extern MethodInfo m4419_MI;
extern MethodInfo m517_MI;
extern MethodInfo m4383_MI;


extern MethodInfo m5850_MI;
 void m5850 (t1093 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5850_MI);
	{
		t27* L_0 = m4419(NULL, (t27*) &_stringLiteral943, &m4419_MI);
		m517(__this, L_0, &m517_MI);
		return;
	}
}
extern MethodInfo m5851_MI;
 void m5851 (t1093 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5851_MI);
	{
		m517(__this, p0, &m517_MI);
		return;
	}
}
extern MethodInfo m5852_MI;
 void m5852 (t1093 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5852_MI);
	{
		m4383(__this, p0, p1, &m4383_MI);
		return;
	}
}
// Metadata Definition System.Reflection.TargetException
extern TypeInfo t1093_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5850_MI = 
{
	".ctor", (methodPointerType)&m5850, &t1093_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2875, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1093_m5851_ParameterInfos[] = 
{
	{"message", 0, 134221329, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1093_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5851_MI = 
{
	".ctor", (methodPointerType)&m5851, &t1093_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1093_m5851_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2876, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1093_m5852_ParameterInfos[] = 
{
	{"info", 0, 134221330, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221331, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1093_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m5852_MI = 
{
	".ctor", (methodPointerType)&m5852, &t1093_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1093_m5852_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 2877, NULL, (methodPointerType)NULL};
static MethodInfo* t1093_MIs[] =
{
	&m5850_MI,
	&m5851_MI,
	&m5852_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m3377_MI;
extern MethodInfo m3378_MI;
extern MethodInfo m3379_MI;
extern MethodInfo m2183_MI;
extern MethodInfo m3380_MI;
extern MethodInfo m3381_MI;
extern MethodInfo m3378_MI;
extern MethodInfo m3382_MI;
static MethodInfo* t1093_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m3377_MI,
	&m3378_MI,
	&m3379_MI,
	&m2183_MI,
	&m3380_MI,
	&m3381_MI,
	&m3378_MI,
	&m3382_MI,
};
extern TypeInfo t485_TI;
extern TypeInfo t690_TI;
static Il2CppInterfaceOffsetPair t1093_IOs[] = 
{
	{ &t485_TI, 4},
	{ &t690_TI, 5},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1093_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1093__CustomAttributeCache = {
1,
NULL,
&t1093_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1093_0_0_0;
extern Il2CppType t1093_1_0_0;
extern TypeInfo t168_TI;
struct t1093;
extern TypeInfo t1093_TI;
extern CustomAttributesCache t1093__CustomAttributeCache;
TypeInfo t1093_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TargetException", "System.Reflection", t1093_MIs, NULL, NULL, NULL, &t168_TI, NULL, NULL, &t1093_TI, NULL, t1093_VT, &t1093__CustomAttributeCache, &t1093_TI, &t1093_0_0_0, &t1093_1_0_0, t1093_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1093), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1094.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1094_TI;
#include "t1094MD.h"

#include "t168.h"
extern MethodInfo m3470_MI;
extern MethodInfo m4383_MI;


extern MethodInfo m5853_MI;
 void m5853 (t1094 * __this, t168 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5853_MI);
	{
		m3470(__this, (t27*) &_stringLiteral944, p0, &m3470_MI);
		return;
	}
}
extern MethodInfo m5854_MI;
 void m5854 (t1094 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5854_MI);
	{
		m4383(__this, p0, p1, &m4383_MI);
		return;
	}
}
// Metadata Definition System.Reflection.TargetInvocationException
extern Il2CppType t168_0_0_0;
static ParameterInfo t1094_m5853_ParameterInfos[] = 
{
	{"inner", 0, 134221332, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern TypeInfo t1094_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5853_MI = 
{
	".ctor", (methodPointerType)&m5853, &t1094_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1094_m5853_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2878, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1094_m5854_ParameterInfos[] = 
{
	{"info", 0, 134221333, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"sc", 1, 134221334, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1094_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m5854_MI = 
{
	".ctor", (methodPointerType)&m5854, &t1094_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1094_m5854_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 2879, NULL, (methodPointerType)NULL};
static MethodInfo* t1094_MIs[] =
{
	&m5853_MI,
	&m5854_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m3377_MI;
extern MethodInfo m3378_MI;
extern MethodInfo m3379_MI;
extern MethodInfo m2183_MI;
extern MethodInfo m3380_MI;
extern MethodInfo m3381_MI;
extern MethodInfo m3378_MI;
extern MethodInfo m3382_MI;
static MethodInfo* t1094_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m3377_MI,
	&m3378_MI,
	&m3379_MI,
	&m2183_MI,
	&m3380_MI,
	&m3381_MI,
	&m3378_MI,
	&m3382_MI,
};
extern TypeInfo t485_TI;
extern TypeInfo t690_TI;
static Il2CppInterfaceOffsetPair t1094_IOs[] = 
{
	{ &t485_TI, 4},
	{ &t690_TI, 5},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1094_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1094__CustomAttributeCache = {
1,
NULL,
&t1094_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1094_0_0_0;
extern Il2CppType t1094_1_0_0;
extern TypeInfo t168_TI;
struct t1094;
extern TypeInfo t1094_TI;
extern CustomAttributesCache t1094__CustomAttributeCache;
TypeInfo t1094_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TargetInvocationException", "System.Reflection", t1094_MIs, NULL, NULL, NULL, &t168_TI, NULL, NULL, &t1094_TI, NULL, t1094_VT, &t1094__CustomAttributeCache, &t1094_TI, &t1094_0_0_0, &t1094_1_0_0, t1094_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1094), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 11, 0, 2};
#include "t1095.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1095_TI;
#include "t1095MD.h"

extern MethodInfo m4419_MI;
extern MethodInfo m517_MI;
extern MethodInfo m4383_MI;


extern MethodInfo m5855_MI;
 void m5855 (t1095 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5855_MI);
	{
		t27* L_0 = m4419(NULL, (t27*) &_stringLiteral945, &m4419_MI);
		m517(__this, L_0, &m517_MI);
		return;
	}
}
extern MethodInfo m5856_MI;
 void m5856 (t1095 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5856_MI);
	{
		m517(__this, p0, &m517_MI);
		return;
	}
}
extern MethodInfo m5857_MI;
 void m5857 (t1095 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5857_MI);
	{
		m4383(__this, p0, p1, &m4383_MI);
		return;
	}
}
// Metadata Definition System.Reflection.TargetParameterCountException
extern TypeInfo t1095_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5855_MI = 
{
	".ctor", (methodPointerType)&m5855, &t1095_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2880, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1095_m5856_ParameterInfos[] = 
{
	{"message", 0, 134221335, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1095_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5856_MI = 
{
	".ctor", (methodPointerType)&m5856, &t1095_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1095_m5856_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2881, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1095_m5857_ParameterInfos[] = 
{
	{"info", 0, 134221336, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221337, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1095_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m5857_MI = 
{
	".ctor", (methodPointerType)&m5857, &t1095_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1095_m5857_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 2882, NULL, (methodPointerType)NULL};
static MethodInfo* t1095_MIs[] =
{
	&m5855_MI,
	&m5856_MI,
	&m5857_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m3377_MI;
extern MethodInfo m3378_MI;
extern MethodInfo m3379_MI;
extern MethodInfo m2183_MI;
extern MethodInfo m3380_MI;
extern MethodInfo m3381_MI;
extern MethodInfo m3378_MI;
extern MethodInfo m3382_MI;
static MethodInfo* t1095_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m3377_MI,
	&m3378_MI,
	&m3379_MI,
	&m2183_MI,
	&m3380_MI,
	&m3381_MI,
	&m3378_MI,
	&m3382_MI,
};
extern TypeInfo t485_TI;
extern TypeInfo t690_TI;
static Il2CppInterfaceOffsetPair t1095_IOs[] = 
{
	{ &t485_TI, 4},
	{ &t690_TI, 5},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1095_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1095__CustomAttributeCache = {
1,
NULL,
&t1095_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1095_0_0_0;
extern Il2CppType t1095_1_0_0;
extern TypeInfo t168_TI;
struct t1095;
extern TypeInfo t1095_TI;
extern CustomAttributesCache t1095__CustomAttributeCache;
TypeInfo t1095_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TargetParameterCountException", "System.Reflection", t1095_MIs, NULL, NULL, NULL, &t168_TI, NULL, NULL, &t1095_TI, NULL, t1095_VT, &t1095__CustomAttributeCache, &t1095_TI, &t1095_0_0_0, &t1095_1_0_0, t1095_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1095), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t843.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t843_TI;
#include "t843MD.h"



// Metadata Definition System.Reflection.TypeAttributes
extern Il2CppType t134_0_0_1542;
FieldInfo t843_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t843_TI, offsetof(t843, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f2_FieldInfo = 
{
	"VisibilityMask", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f3_FieldInfo = 
{
	"NotPublic", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f4_FieldInfo = 
{
	"Public", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f5_FieldInfo = 
{
	"NestedPublic", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f6_FieldInfo = 
{
	"NestedPrivate", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f7_FieldInfo = 
{
	"NestedFamily", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f8_FieldInfo = 
{
	"NestedAssembly", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f9_FieldInfo = 
{
	"NestedFamANDAssem", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f10_FieldInfo = 
{
	"NestedFamORAssem", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f11_FieldInfo = 
{
	"LayoutMask", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f12_FieldInfo = 
{
	"AutoLayout", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f13_FieldInfo = 
{
	"SequentialLayout", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f14_FieldInfo = 
{
	"ExplicitLayout", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f15_FieldInfo = 
{
	"ClassSemanticsMask", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f16_FieldInfo = 
{
	"Class", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f17_FieldInfo = 
{
	"Interface", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f18_FieldInfo = 
{
	"Abstract", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f19_FieldInfo = 
{
	"Sealed", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f20_FieldInfo = 
{
	"SpecialName", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f21_FieldInfo = 
{
	"Import", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f22_FieldInfo = 
{
	"Serializable", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f23_FieldInfo = 
{
	"StringFormatMask", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f24_FieldInfo = 
{
	"AnsiClass", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f25_FieldInfo = 
{
	"UnicodeClass", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f26_FieldInfo = 
{
	"AutoClass", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f27_FieldInfo = 
{
	"BeforeFieldInit", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f28_FieldInfo = 
{
	"ReservedMask", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f29_FieldInfo = 
{
	"RTSpecialName", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f30_FieldInfo = 
{
	"HasSecurity", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f31_FieldInfo = 
{
	"CustomFormatClass", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t843_0_0_32854;
FieldInfo t843_f32_FieldInfo = 
{
	"CustomFormatMask", &t843_0_0_32854, &t843_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t843_FIs[] =
{
	&t843_f1_FieldInfo,
	&t843_f2_FieldInfo,
	&t843_f3_FieldInfo,
	&t843_f4_FieldInfo,
	&t843_f5_FieldInfo,
	&t843_f6_FieldInfo,
	&t843_f7_FieldInfo,
	&t843_f8_FieldInfo,
	&t843_f9_FieldInfo,
	&t843_f10_FieldInfo,
	&t843_f11_FieldInfo,
	&t843_f12_FieldInfo,
	&t843_f13_FieldInfo,
	&t843_f14_FieldInfo,
	&t843_f15_FieldInfo,
	&t843_f16_FieldInfo,
	&t843_f17_FieldInfo,
	&t843_f18_FieldInfo,
	&t843_f19_FieldInfo,
	&t843_f20_FieldInfo,
	&t843_f21_FieldInfo,
	&t843_f22_FieldInfo,
	&t843_f23_FieldInfo,
	&t843_f24_FieldInfo,
	&t843_f25_FieldInfo,
	&t843_f26_FieldInfo,
	&t843_f27_FieldInfo,
	&t843_f28_FieldInfo,
	&t843_f29_FieldInfo,
	&t843_f30_FieldInfo,
	&t843_f31_FieldInfo,
	&t843_f32_FieldInfo,
	NULL
};
static const int32_t t843_f2_DefaultValueData = 7;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f2_DefaultValue = 
{
	&t843_f2_FieldInfo, { (char*)&t843_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f3_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f3_DefaultValue = 
{
	&t843_f3_FieldInfo, { (char*)&t843_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f4_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f4_DefaultValue = 
{
	&t843_f4_FieldInfo, { (char*)&t843_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f5_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f5_DefaultValue = 
{
	&t843_f5_FieldInfo, { (char*)&t843_f5_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f6_DefaultValueData = 3;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f6_DefaultValue = 
{
	&t843_f6_FieldInfo, { (char*)&t843_f6_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f7_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f7_DefaultValue = 
{
	&t843_f7_FieldInfo, { (char*)&t843_f7_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f8_DefaultValueData = 5;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f8_DefaultValue = 
{
	&t843_f8_FieldInfo, { (char*)&t843_f8_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f9_DefaultValueData = 6;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f9_DefaultValue = 
{
	&t843_f9_FieldInfo, { (char*)&t843_f9_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f10_DefaultValueData = 7;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f10_DefaultValue = 
{
	&t843_f10_FieldInfo, { (char*)&t843_f10_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f11_DefaultValueData = 24;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f11_DefaultValue = 
{
	&t843_f11_FieldInfo, { (char*)&t843_f11_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f12_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f12_DefaultValue = 
{
	&t843_f12_FieldInfo, { (char*)&t843_f12_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f13_DefaultValueData = 8;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f13_DefaultValue = 
{
	&t843_f13_FieldInfo, { (char*)&t843_f13_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f14_DefaultValueData = 16;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f14_DefaultValue = 
{
	&t843_f14_FieldInfo, { (char*)&t843_f14_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f15_DefaultValueData = 32;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f15_DefaultValue = 
{
	&t843_f15_FieldInfo, { (char*)&t843_f15_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f16_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f16_DefaultValue = 
{
	&t843_f16_FieldInfo, { (char*)&t843_f16_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f17_DefaultValueData = 32;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f17_DefaultValue = 
{
	&t843_f17_FieldInfo, { (char*)&t843_f17_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f18_DefaultValueData = 128;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f18_DefaultValue = 
{
	&t843_f18_FieldInfo, { (char*)&t843_f18_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f19_DefaultValueData = 256;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f19_DefaultValue = 
{
	&t843_f19_FieldInfo, { (char*)&t843_f19_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f20_DefaultValueData = 1024;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f20_DefaultValue = 
{
	&t843_f20_FieldInfo, { (char*)&t843_f20_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f21_DefaultValueData = 4096;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f21_DefaultValue = 
{
	&t843_f21_FieldInfo, { (char*)&t843_f21_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f22_DefaultValueData = 8192;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f22_DefaultValue = 
{
	&t843_f22_FieldInfo, { (char*)&t843_f22_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f23_DefaultValueData = 196608;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f23_DefaultValue = 
{
	&t843_f23_FieldInfo, { (char*)&t843_f23_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f24_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f24_DefaultValue = 
{
	&t843_f24_FieldInfo, { (char*)&t843_f24_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f25_DefaultValueData = 65536;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f25_DefaultValue = 
{
	&t843_f25_FieldInfo, { (char*)&t843_f25_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f26_DefaultValueData = 131072;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f26_DefaultValue = 
{
	&t843_f26_FieldInfo, { (char*)&t843_f26_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f27_DefaultValueData = 1048576;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f27_DefaultValue = 
{
	&t843_f27_FieldInfo, { (char*)&t843_f27_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f28_DefaultValueData = 264192;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f28_DefaultValue = 
{
	&t843_f28_FieldInfo, { (char*)&t843_f28_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f29_DefaultValueData = 2048;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f29_DefaultValue = 
{
	&t843_f29_FieldInfo, { (char*)&t843_f29_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f30_DefaultValueData = 262144;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f30_DefaultValue = 
{
	&t843_f30_FieldInfo, { (char*)&t843_f30_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f31_DefaultValueData = 196608;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f31_DefaultValue = 
{
	&t843_f31_FieldInfo, { (char*)&t843_f31_DefaultValueData, &t134_0_0_0 }};
static const int32_t t843_f32_DefaultValueData = 12582912;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t843_f32_DefaultValue = 
{
	&t843_f32_FieldInfo, { (char*)&t843_f32_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t843_FDVs[] = 
{
	&t843_f2_DefaultValue,
	&t843_f3_DefaultValue,
	&t843_f4_DefaultValue,
	&t843_f5_DefaultValue,
	&t843_f6_DefaultValue,
	&t843_f7_DefaultValue,
	&t843_f8_DefaultValue,
	&t843_f9_DefaultValue,
	&t843_f10_DefaultValue,
	&t843_f11_DefaultValue,
	&t843_f12_DefaultValue,
	&t843_f13_DefaultValue,
	&t843_f14_DefaultValue,
	&t843_f15_DefaultValue,
	&t843_f16_DefaultValue,
	&t843_f17_DefaultValue,
	&t843_f18_DefaultValue,
	&t843_f19_DefaultValue,
	&t843_f20_DefaultValue,
	&t843_f21_DefaultValue,
	&t843_f22_DefaultValue,
	&t843_f23_DefaultValue,
	&t843_f24_DefaultValue,
	&t843_f25_DefaultValue,
	&t843_f26_DefaultValue,
	&t843_f27_DefaultValue,
	&t843_f28_DefaultValue,
	&t843_f29_DefaultValue,
	&t843_f30_DefaultValue,
	&t843_f31_DefaultValue,
	&t843_f32_DefaultValue,
	NULL
};
static MethodInfo* t843_MIs[] =
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
static MethodInfo* t843_VT[] =
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
static Il2CppInterfaceOffsetPair t843_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t435_TI;
extern MethodInfo m1830_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t843_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t435 * tmp;
		tmp = (t435 *)il2cpp_codegen_object_new (&t435_TI);
		m1830(tmp, &m1830_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t843__CustomAttributeCache = {
2,
NULL,
&t843_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t843_0_0_0;
extern Il2CppType t843_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t843__CustomAttributeCache;
TypeInfo t843_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeAttributes", "System.Reflection", t843_MIs, NULL, t843_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t843_VT, &t843__CustomAttributeCache, &t134_TI, &t843_0_0_0, &t843_1_0_0, t843_IOs, NULL, NULL, t843_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t843)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 32, 0, 0, 23, 0, 3};
#include "t788.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t788_TI;
#include "t788MD.h"

#include "t165.h"
extern TypeInfo t165_TI;
extern TypeInfo t788_TI;
#include "t591MD.h"
#include "t165MD.h"
extern MethodInfo m3403_MI;
extern MethodInfo m489_MI;


extern MethodInfo m3581_MI;
 void m3581 (t788 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3581_MI);
	{
		m3403(__this, &m3403_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral946, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Resources.NeutralResourcesLanguageAttribute
extern Il2CppType t27_0_0_1;
FieldInfo t788_f0_FieldInfo = 
{
	"culture", &t27_0_0_1, &t788_TI, offsetof(t788, f0), &EmptyCustomAttributesCache};
static FieldInfo* t788_FIs[] =
{
	&t788_f0_FieldInfo,
	NULL
};
extern Il2CppType t27_0_0_0;
static ParameterInfo t788_m3581_ParameterInfos[] = 
{
	{"cultureName", 0, 134221338, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t788_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3581_MI = 
{
	".ctor", (methodPointerType)&m3581, &t788_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t788_m3581_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2883, NULL, (methodPointerType)NULL};
static MethodInfo* t788_MIs[] =
{
	&m3581_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t788_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t788_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t724_TI;
#include "t724.h"
#include "t724MD.h"
extern MethodInfo m3439_MI;
void t788_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 1, &m3439_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t788__CustomAttributeCache = {
2,
NULL,
&t788_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t788_0_0_0;
extern Il2CppType t788_1_0_0;
extern TypeInfo t591_TI;
struct t788;
extern TypeInfo t788_TI;
extern CustomAttributesCache t788__CustomAttributeCache;
TypeInfo t788_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NeutralResourcesLanguageAttribute", "System.Resources", t788_MIs, NULL, t788_FIs, NULL, &t591_TI, NULL, NULL, &t788_TI, NULL, t788_VT, &t788__CustomAttributeCache, &t788_TI, &t788_0_0_0, &t788_1_0_0, t788_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t788), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t786.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t786_TI;
#include "t786MD.h"

#include "t1066.h"
extern TypeInfo t1066_TI;
extern TypeInfo t786_TI;
#include "t1066MD.h"
extern MethodInfo m3403_MI;
extern MethodInfo m7747_MI;


extern MethodInfo m3579_MI;
 void m3579 (t786 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3579_MI);
	{
		m3403(__this, &m3403_MI);
		t1066 * L_0 = (t1066 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1066_TI));
		m7747(L_0, p0, &m7747_MI);
		__this->f0 = L_0;
		return;
	}
}
// Metadata Definition System.Resources.SatelliteContractVersionAttribute
extern Il2CppType t1066_0_0_1;
FieldInfo t786_f0_FieldInfo = 
{
	"ver", &t1066_0_0_1, &t786_TI, offsetof(t786, f0), &EmptyCustomAttributesCache};
static FieldInfo* t786_FIs[] =
{
	&t786_f0_FieldInfo,
	NULL
};
extern Il2CppType t27_0_0_0;
static ParameterInfo t786_m3579_ParameterInfos[] = 
{
	{"version", 0, 134221339, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t786_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3579_MI = 
{
	".ctor", (methodPointerType)&m3579, &t786_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t786_m3579_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2884, NULL, (methodPointerType)NULL};
static MethodInfo* t786_MIs[] =
{
	&m3579_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t786_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t786_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
void t786_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 1, &m3439_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t786__CustomAttributeCache = {
2,
NULL,
&t786_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t786_0_0_0;
extern Il2CppType t786_1_0_0;
extern TypeInfo t591_TI;
struct t786;
extern TypeInfo t786_TI;
extern CustomAttributesCache t786__CustomAttributeCache;
TypeInfo t786_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SatelliteContractVersionAttribute", "System.Resources", t786_MIs, NULL, t786_FIs, NULL, &t591_TI, NULL, NULL, &t786_TI, NULL, t786_VT, &t786__CustomAttributeCache, &t786_TI, &t786_0_0_0, &t786_1_0_0, t786_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t786), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t1096.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1096_TI;
#include "t1096MD.h"



// Metadata Definition System.Runtime.CompilerServices.CompilationRelaxations
extern Il2CppType t134_0_0_1542;
FieldInfo t1096_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1096_TI, offsetof(t1096, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1096_0_0_32854;
FieldInfo t1096_f2_FieldInfo = 
{
	"NoStringInterning", &t1096_0_0_32854, &t1096_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1096_FIs[] =
{
	&t1096_f1_FieldInfo,
	&t1096_f2_FieldInfo,
	NULL
};
static const int32_t t1096_f2_DefaultValueData = 8;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1096_f2_DefaultValue = 
{
	&t1096_f2_FieldInfo, { (char*)&t1096_f2_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1096_FDVs[] = 
{
	&t1096_f2_DefaultValue,
	NULL
};
static MethodInfo* t1096_MIs[] =
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
static MethodInfo* t1096_VT[] =
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
static Il2CppInterfaceOffsetPair t1096_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t435_TI;
extern MethodInfo m1830_MI;
void t1096_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t435 * tmp;
		tmp = (t435 *)il2cpp_codegen_object_new (&t435_TI);
		m1830(tmp, &m1830_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1096__CustomAttributeCache = {
2,
NULL,
&t1096_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1096_0_0_0;
extern Il2CppType t1096_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t1096__CustomAttributeCache;
TypeInfo t1096_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CompilationRelaxations", "System.Runtime.CompilerServices", t1096_MIs, NULL, t1096_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1096_VT, &t1096__CustomAttributeCache, &t134_TI, &t1096_0_0_0, &t1096_1_0_0, t1096_IOs, NULL, NULL, t1096_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1096)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 2, 0, 0, 23, 0, 3};
#include "t790.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t790_TI;
#include "t790MD.h"

extern TypeInfo t790_TI;
extern MethodInfo m3403_MI;


extern MethodInfo m3583_MI;
 void m3583 (t790 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3583_MI);
	{
		m3403(__this, &m3403_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.CompilerServices.CompilationRelaxationsAttribute
extern Il2CppType t134_0_0_1;
FieldInfo t790_f0_FieldInfo = 
{
	"relax", &t134_0_0_1, &t790_TI, offsetof(t790, f0), &EmptyCustomAttributesCache};
static FieldInfo* t790_FIs[] =
{
	&t790_f0_FieldInfo,
	NULL
};
extern Il2CppType t1096_0_0_0;
static ParameterInfo t790_m3583_ParameterInfos[] = 
{
	{"relaxations", 0, 134221340, &EmptyCustomAttributesCache, &t1096_0_0_0},
};
extern TypeInfo t790_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m3583_MI = 
{
	".ctor", (methodPointerType)&m3583, &t790_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t790_m3583_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2885, NULL, (methodPointerType)NULL};
static MethodInfo* t790_MIs[] =
{
	&m3583_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t790_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t790_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
void t790_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 71, &m3439_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t790__CustomAttributeCache = {
2,
NULL,
&t790_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t790_0_0_0;
extern Il2CppType t790_1_0_0;
extern TypeInfo t591_TI;
struct t790;
extern TypeInfo t790_TI;
extern CustomAttributesCache t790__CustomAttributeCache;
TypeInfo t790_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CompilationRelaxationsAttribute", "System.Runtime.CompilerServices", t790_MIs, NULL, t790_FIs, NULL, &t591_TI, NULL, NULL, &t790_TI, NULL, t790_VT, &t790__CustomAttributeCache, &t790_TI, &t790_0_0_0, &t790_1_0_0, t790_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t790), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t1097.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1097_TI;
#include "t1097MD.h"

#include "t1098.h"
extern TypeInfo t1097_TI;
extern MethodInfo m3403_MI;


extern MethodInfo m5858_MI;
 void m5858 (t1097 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5858_MI);
	{
		m3403(__this, &m3403_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.CompilerServices.DefaultDependencyAttribute
extern Il2CppType t1098_0_0_1;
FieldInfo t1097_f0_FieldInfo = 
{
	"hint", &t1098_0_0_1, &t1097_TI, offsetof(t1097, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1097_FIs[] =
{
	&t1097_f0_FieldInfo,
	NULL
};
extern Il2CppType t1098_0_0_0;
static ParameterInfo t1097_m5858_ParameterInfos[] = 
{
	{"loadHintArgument", 0, 134221341, &EmptyCustomAttributesCache, &t1098_0_0_0},
};
extern TypeInfo t1097_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5858_MI = 
{
	".ctor", (methodPointerType)&m5858, &t1097_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t1097_m5858_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2886, NULL, (methodPointerType)NULL};
static MethodInfo* t1097_MIs[] =
{
	&m5858_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1097_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t1097_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
void t1097_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 1, &m3439_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1097__CustomAttributeCache = {
1,
NULL,
&t1097_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1097_0_0_0;
extern Il2CppType t1097_1_0_0;
extern TypeInfo t591_TI;
struct t1097;
extern TypeInfo t1097_TI;
extern CustomAttributesCache t1097__CustomAttributeCache;
TypeInfo t1097_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultDependencyAttribute", "System.Runtime.CompilerServices", t1097_MIs, NULL, t1097_FIs, NULL, &t591_TI, NULL, NULL, &t1097_TI, NULL, t1097_VT, &t1097__CustomAttributeCache, &t1097_TI, &t1097_0_0_0, &t1097_1_0_0, t1097_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1097), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t1099.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1099_TI;
#include "t1099MD.h"



// Metadata Definition System.Runtime.CompilerServices.IsVolatile
static MethodInfo* t1099_MIs[] =
{
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1099_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1099_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1099__CustomAttributeCache = {
1,
NULL,
&t1099_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1099_0_0_0;
extern Il2CppType t1099_1_0_0;
extern TypeInfo t25_TI;
struct t1099;
extern TypeInfo t1099_TI;
extern CustomAttributesCache t1099__CustomAttributeCache;
TypeInfo t1099_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IsVolatile", "System.Runtime.CompilerServices", t1099_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t1099_TI, NULL, t1099_VT, &t1099__CustomAttributeCache, &t1099_TI, &t1099_0_0_0, &t1099_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1099), 0, -1, 0, 0, -1, 1048961, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1098_TI;
#include "t1098MD.h"



// Metadata Definition System.Runtime.CompilerServices.LoadHint
extern Il2CppType t134_0_0_1542;
FieldInfo t1098_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1098_TI, offsetof(t1098, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1098_0_0_32854;
FieldInfo t1098_f2_FieldInfo = 
{
	"Default", &t1098_0_0_32854, &t1098_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1098_0_0_32854;
FieldInfo t1098_f3_FieldInfo = 
{
	"Always", &t1098_0_0_32854, &t1098_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1098_0_0_32854;
FieldInfo t1098_f4_FieldInfo = 
{
	"Sometimes", &t1098_0_0_32854, &t1098_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1098_FIs[] =
{
	&t1098_f1_FieldInfo,
	&t1098_f2_FieldInfo,
	&t1098_f3_FieldInfo,
	&t1098_f4_FieldInfo,
	NULL
};
static const int32_t t1098_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1098_f2_DefaultValue = 
{
	&t1098_f2_FieldInfo, { (char*)&t1098_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1098_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1098_f3_DefaultValue = 
{
	&t1098_f3_FieldInfo, { (char*)&t1098_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1098_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1098_f4_DefaultValue = 
{
	&t1098_f4_FieldInfo, { (char*)&t1098_f4_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1098_FDVs[] = 
{
	&t1098_f2_DefaultValue,
	&t1098_f3_DefaultValue,
	&t1098_f4_DefaultValue,
	NULL
};
static MethodInfo* t1098_MIs[] =
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
static MethodInfo* t1098_VT[] =
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
static Il2CppInterfaceOffsetPair t1098_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1098_0_0_0;
extern Il2CppType t1098_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
TypeInfo t1098_TI = 
{
	&g_mscorlib_dll_Image, NULL, "LoadHint", "System.Runtime.CompilerServices", t1098_MIs, NULL, t1098_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1098_VT, &EmptyCustomAttributesCache, &t134_TI, &t1098_0_0_0, &t1098_1_0_0, t1098_IOs, NULL, NULL, t1098_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1098)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1100.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1100_TI;
#include "t1100MD.h"

extern MethodInfo m3403_MI;


extern MethodInfo m5859_MI;
 void m5859 (t1100 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5859_MI);
	{
		m3403(__this, &m3403_MI);
		return;
	}
}
// Metadata Definition System.Runtime.CompilerServices.StringFreezingAttribute
extern TypeInfo t1100_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5859_MI = 
{
	".ctor", (methodPointerType)&m5859, &t1100_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2887, NULL, (methodPointerType)NULL};
static MethodInfo* t1100_MIs[] =
{
	&m5859_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1100_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t1100_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
void t1100_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 1, &m3439_MI);
		extern MethodInfo m3440_MI;
		m3440(tmp, false, &m3440_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1100__CustomAttributeCache = {
1,
NULL,
&t1100_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1100_0_0_0;
extern Il2CppType t1100_1_0_0;
extern TypeInfo t591_TI;
struct t1100;
extern TypeInfo t1100_TI;
extern CustomAttributesCache t1100__CustomAttributeCache;
TypeInfo t1100_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StringFreezingAttribute", "System.Runtime.CompilerServices", t1100_MIs, NULL, NULL, NULL, &t591_TI, NULL, NULL, &t1100_TI, NULL, t1100_VT, &t1100__CustomAttributeCache, &t1100_TI, &t1100_0_0_0, &t1100_1_0_0, t1100_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1100), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t1101.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1101_TI;
#include "t1101MD.h"



// Metadata Definition System.Runtime.ConstrainedExecution.Cer
extern Il2CppType t134_0_0_1542;
FieldInfo t1101_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1101_TI, offsetof(t1101, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1101_0_0_32854;
FieldInfo t1101_f2_FieldInfo = 
{
	"None", &t1101_0_0_32854, &t1101_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1101_0_0_32854;
FieldInfo t1101_f3_FieldInfo = 
{
	"MayFail", &t1101_0_0_32854, &t1101_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1101_0_0_32854;
FieldInfo t1101_f4_FieldInfo = 
{
	"Success", &t1101_0_0_32854, &t1101_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1101_FIs[] =
{
	&t1101_f1_FieldInfo,
	&t1101_f2_FieldInfo,
	&t1101_f3_FieldInfo,
	&t1101_f4_FieldInfo,
	NULL
};
static const int32_t t1101_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1101_f2_DefaultValue = 
{
	&t1101_f2_FieldInfo, { (char*)&t1101_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1101_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1101_f3_DefaultValue = 
{
	&t1101_f3_FieldInfo, { (char*)&t1101_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1101_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1101_f4_DefaultValue = 
{
	&t1101_f4_FieldInfo, { (char*)&t1101_f4_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1101_FDVs[] = 
{
	&t1101_f2_DefaultValue,
	&t1101_f3_DefaultValue,
	&t1101_f4_DefaultValue,
	NULL
};
static MethodInfo* t1101_MIs[] =
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
static MethodInfo* t1101_VT[] =
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
static Il2CppInterfaceOffsetPair t1101_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1101_0_0_0;
extern Il2CppType t1101_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
TypeInfo t1101_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Cer", "System.Runtime.ConstrainedExecution", t1101_MIs, NULL, t1101_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1101_VT, &EmptyCustomAttributesCache, &t134_TI, &t1101_0_0_0, &t1101_1_0_0, t1101_IOs, NULL, NULL, t1101_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1101)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1102.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1102_TI;
#include "t1102MD.h"



// Metadata Definition System.Runtime.ConstrainedExecution.Consistency
extern Il2CppType t134_0_0_1542;
FieldInfo t1102_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1102_TI, offsetof(t1102, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1102_0_0_32854;
FieldInfo t1102_f2_FieldInfo = 
{
	"MayCorruptAppDomain", &t1102_0_0_32854, &t1102_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1102_0_0_32854;
FieldInfo t1102_f3_FieldInfo = 
{
	"MayCorruptInstance", &t1102_0_0_32854, &t1102_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1102_0_0_32854;
FieldInfo t1102_f4_FieldInfo = 
{
	"MayCorruptProcess", &t1102_0_0_32854, &t1102_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1102_0_0_32854;
FieldInfo t1102_f5_FieldInfo = 
{
	"WillNotCorruptState", &t1102_0_0_32854, &t1102_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1102_FIs[] =
{
	&t1102_f1_FieldInfo,
	&t1102_f2_FieldInfo,
	&t1102_f3_FieldInfo,
	&t1102_f4_FieldInfo,
	&t1102_f5_FieldInfo,
	NULL
};
static const int32_t t1102_f2_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1102_f2_DefaultValue = 
{
	&t1102_f2_FieldInfo, { (char*)&t1102_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1102_f3_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1102_f3_DefaultValue = 
{
	&t1102_f3_FieldInfo, { (char*)&t1102_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1102_f4_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1102_f4_DefaultValue = 
{
	&t1102_f4_FieldInfo, { (char*)&t1102_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1102_f5_DefaultValueData = 3;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1102_f5_DefaultValue = 
{
	&t1102_f5_FieldInfo, { (char*)&t1102_f5_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1102_FDVs[] = 
{
	&t1102_f2_DefaultValue,
	&t1102_f3_DefaultValue,
	&t1102_f4_DefaultValue,
	&t1102_f5_DefaultValue,
	NULL
};
static MethodInfo* t1102_MIs[] =
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
static MethodInfo* t1102_VT[] =
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
static Il2CppInterfaceOffsetPair t1102_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1102_0_0_0;
extern Il2CppType t1102_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
TypeInfo t1102_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Consistency", "System.Runtime.ConstrainedExecution", t1102_MIs, NULL, t1102_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1102_VT, &EmptyCustomAttributesCache, &t134_TI, &t1102_0_0_0, &t1102_1_0_0, t1102_IOs, NULL, NULL, t1102_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1102)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t1103.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1103_TI;
#include "t1103MD.h"

extern TypeInfo t25_TI;
extern TypeInfo t123_TI;
extern MethodInfo m452_MI;
extern MethodInfo m352_MI;


extern MethodInfo m5860_MI;
 void m5860 (t1103 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5860_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m5861_MI;
 void m5861 (t1103 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5861_MI);
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		// IL_0000: leave.s IL_0009
		leaveInstructions[0] = 0x9; // 1
		THROW_SENTINEL(IL_0009);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0002;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0002;
	}

IL_0002:
	{ // begin finally (depth: 1)
		m352(__this, &m352_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x9:
				goto IL_0009;
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

IL_0009:
	{
		return;
	}
}
// Metadata Definition System.Runtime.ConstrainedExecution.CriticalFinalizerObject
extern TypeInfo t1103_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1103__CustomAttributeCache_m5860;
MethodInfo m5860_MI = 
{
	".ctor", (methodPointerType)&m5860, &t1103_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t1103__CustomAttributeCache_m5860, 6276, 0, 255, 0, false, false, 2888, NULL, (methodPointerType)NULL};
extern TypeInfo t1103_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1103__CustomAttributeCache_m5861;
MethodInfo m5861_MI = 
{
	"Finalize", (methodPointerType)&m5861, &t1103_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t1103__CustomAttributeCache_m5861, 196, 0, 1, 0, false, false, 2889, NULL, (methodPointerType)NULL};
static MethodInfo* t1103_MIs[] =
{
	&m5860_MI,
	&m5861_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m5861_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1103_VT[] =
{
	&m455_MI,
	&m5861_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1103_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1104_TI;
#include "t1104.h"
#include "t1104MD.h"
extern MethodInfo m5862_MI;
void t1103_CustomAttributesCacheGenerator_m5860(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1104 * tmp;
		tmp = (t1104 *)il2cpp_codegen_object_new (&t1104_TI);
		m5862(tmp, 3, 1, &m5862_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1104_TI;
extern MethodInfo m5862_MI;
void t1103_CustomAttributesCacheGenerator_m5861(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1104 * tmp;
		tmp = (t1104 *)il2cpp_codegen_object_new (&t1104_TI);
		m5862(tmp, 3, 2, &m5862_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1103__CustomAttributeCache = {
1,
NULL,
&t1103_CustomAttributesCacheGenerator
};
CustomAttributesCache t1103__CustomAttributeCache_m5860 = {
1,
NULL,
&t1103_CustomAttributesCacheGenerator_m5860
};
CustomAttributesCache t1103__CustomAttributeCache_m5861 = {
1,
NULL,
&t1103_CustomAttributesCacheGenerator_m5861
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1103_0_0_0;
extern Il2CppType t1103_1_0_0;
extern TypeInfo t25_TI;
struct t1103;
extern TypeInfo t1103_TI;
extern CustomAttributesCache t1103__CustomAttributeCache;
extern CustomAttributesCache t1103__CustomAttributeCache_m5860;
extern CustomAttributesCache t1103__CustomAttributeCache_m5861;
TypeInfo t1103_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CriticalFinalizerObject", "System.Runtime.ConstrainedExecution", t1103_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t1103_TI, NULL, t1103_VT, &t1103__CustomAttributeCache, &t1103_TI, &t1103_0_0_0, &t1103_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1103), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, true, false, false, false, 2, 0, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1104_TI;

extern TypeInfo t1104_TI;
extern MethodInfo m3403_MI;


extern MethodInfo m5862_MI;
 void m5862 (t1104 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5862_MI);
	{
		m3403(__this, &m3403_MI);
		__this->f0 = p0;
		__this->f1 = p1;
		return;
	}
}
// Metadata Definition System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
extern Il2CppType t1102_0_0_1;
FieldInfo t1104_f0_FieldInfo = 
{
	"consistency", &t1102_0_0_1, &t1104_TI, offsetof(t1104, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1101_0_0_1;
FieldInfo t1104_f1_FieldInfo = 
{
	"cer", &t1101_0_0_1, &t1104_TI, offsetof(t1104, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1104_FIs[] =
{
	&t1104_f0_FieldInfo,
	&t1104_f1_FieldInfo,
	NULL
};
extern Il2CppType t1102_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t1104_m5862_ParameterInfos[] = 
{
	{"consistencyGuarantee", 0, 134221342, &EmptyCustomAttributesCache, &t1102_0_0_0},
	{"cer", 1, 134221343, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern TypeInfo t1104_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5862_MI = 
{
	".ctor", (methodPointerType)&m5862, &t1104_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t1104_m5862_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2890, NULL, (methodPointerType)NULL};
static MethodInfo* t1104_MIs[] =
{
	&m5862_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1104_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t1104_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
void t1104_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 1133, &m3439_MI);
		extern MethodInfo m3440_MI;
		m3440(tmp, false, &m3440_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1104__CustomAttributeCache = {
1,
NULL,
&t1104_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1104_0_0_0;
extern Il2CppType t1104_1_0_0;
extern TypeInfo t591_TI;
struct t1104;
extern TypeInfo t1104_TI;
extern CustomAttributesCache t1104__CustomAttributeCache;
TypeInfo t1104_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReliabilityContractAttribute", "System.Runtime.ConstrainedExecution", t1104_MIs, NULL, t1104_FIs, NULL, &t591_TI, NULL, NULL, &t1104_TI, NULL, t1104_VT, &t1104__CustomAttributeCache, &t1104_TI, &t1104_0_0_0, &t1104_1_0_0, t1104_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1104), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 0, 4, 0, 1};
#include "t1105.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1105_TI;
#include "t1105MD.h"



// Metadata Definition System.Runtime.Hosting.ActivationArguments
static MethodInfo* t1105_MIs[] =
{
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1105_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1105_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1105__CustomAttributeCache = {
1,
NULL,
&t1105_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1105_0_0_0;
extern Il2CppType t1105_1_0_0;
extern TypeInfo t25_TI;
struct t1105;
extern TypeInfo t1105_TI;
extern CustomAttributesCache t1105__CustomAttributeCache;
TypeInfo t1105_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ActivationArguments", "System.Runtime.Hosting", t1105_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t1105_TI, NULL, t1105_VT, &t1105__CustomAttributeCache, &t1105_TI, &t1105_0_0_0, &t1105_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1105), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#include "t850.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t850_TI;
#include "t850MD.h"



// Metadata Definition System.Runtime.InteropServices.CallingConvention
extern Il2CppType t134_0_0_1542;
FieldInfo t850_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t850_TI, offsetof(t850, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t850_0_0_32854;
FieldInfo t850_f2_FieldInfo = 
{
	"Winapi", &t850_0_0_32854, &t850_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t850_0_0_32854;
FieldInfo t850_f3_FieldInfo = 
{
	"Cdecl", &t850_0_0_32854, &t850_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t850_0_0_32854;
FieldInfo t850_f4_FieldInfo = 
{
	"StdCall", &t850_0_0_32854, &t850_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t850_0_0_32854;
FieldInfo t850_f5_FieldInfo = 
{
	"ThisCall", &t850_0_0_32854, &t850_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t850_0_0_32854;
FieldInfo t850_f6_FieldInfo = 
{
	"FastCall", &t850_0_0_32854, &t850_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t850_FIs[] =
{
	&t850_f1_FieldInfo,
	&t850_f2_FieldInfo,
	&t850_f3_FieldInfo,
	&t850_f4_FieldInfo,
	&t850_f5_FieldInfo,
	&t850_f6_FieldInfo,
	NULL
};
static const int32_t t850_f2_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t850_f2_DefaultValue = 
{
	&t850_f2_FieldInfo, { (char*)&t850_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t850_f3_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t850_f3_DefaultValue = 
{
	&t850_f3_FieldInfo, { (char*)&t850_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t850_f4_DefaultValueData = 3;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t850_f4_DefaultValue = 
{
	&t850_f4_FieldInfo, { (char*)&t850_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t850_f5_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t850_f5_DefaultValue = 
{
	&t850_f5_FieldInfo, { (char*)&t850_f5_DefaultValueData, &t134_0_0_0 }};
static const int32_t t850_f6_DefaultValueData = 5;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t850_f6_DefaultValue = 
{
	&t850_f6_FieldInfo, { (char*)&t850_f6_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t850_FDVs[] = 
{
	&t850_f2_DefaultValue,
	&t850_f3_DefaultValue,
	&t850_f4_DefaultValue,
	&t850_f5_DefaultValue,
	&t850_f6_DefaultValue,
	NULL
};
static MethodInfo* t850_MIs[] =
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
static MethodInfo* t850_VT[] =
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
static Il2CppInterfaceOffsetPair t850_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t850_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t850__CustomAttributeCache = {
1,
NULL,
&t850_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t850_0_0_0;
extern Il2CppType t850_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t850__CustomAttributeCache;
TypeInfo t850_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CallingConvention", "System.Runtime.InteropServices", t850_MIs, NULL, t850_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t850_VT, &t850__CustomAttributeCache, &t134_TI, &t850_0_0_0, &t850_1_0_0, t850_IOs, NULL, NULL, t850_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t850)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t851.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t851_TI;
#include "t851MD.h"



// Metadata Definition System.Runtime.InteropServices.CharSet
extern Il2CppType t134_0_0_1542;
FieldInfo t851_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t851_TI, offsetof(t851, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t851_0_0_32854;
FieldInfo t851_f2_FieldInfo = 
{
	"None", &t851_0_0_32854, &t851_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t851_0_0_32854;
FieldInfo t851_f3_FieldInfo = 
{
	"Ansi", &t851_0_0_32854, &t851_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t851_0_0_32854;
FieldInfo t851_f4_FieldInfo = 
{
	"Unicode", &t851_0_0_32854, &t851_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t851_0_0_32854;
FieldInfo t851_f5_FieldInfo = 
{
	"Auto", &t851_0_0_32854, &t851_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t851_FIs[] =
{
	&t851_f1_FieldInfo,
	&t851_f2_FieldInfo,
	&t851_f3_FieldInfo,
	&t851_f4_FieldInfo,
	&t851_f5_FieldInfo,
	NULL
};
static const int32_t t851_f2_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t851_f2_DefaultValue = 
{
	&t851_f2_FieldInfo, { (char*)&t851_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t851_f3_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t851_f3_DefaultValue = 
{
	&t851_f3_FieldInfo, { (char*)&t851_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t851_f4_DefaultValueData = 3;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t851_f4_DefaultValue = 
{
	&t851_f4_FieldInfo, { (char*)&t851_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t851_f5_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t851_f5_DefaultValue = 
{
	&t851_f5_FieldInfo, { (char*)&t851_f5_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t851_FDVs[] = 
{
	&t851_f2_DefaultValue,
	&t851_f3_DefaultValue,
	&t851_f4_DefaultValue,
	&t851_f5_DefaultValue,
	NULL
};
static MethodInfo* t851_MIs[] =
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
static MethodInfo* t851_VT[] =
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
static Il2CppInterfaceOffsetPair t851_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t851_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t851__CustomAttributeCache = {
1,
NULL,
&t851_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t851_0_0_0;
extern Il2CppType t851_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t851__CustomAttributeCache;
TypeInfo t851_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CharSet", "System.Runtime.InteropServices", t851_MIs, NULL, t851_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t851_VT, &t851__CustomAttributeCache, &t134_TI, &t851_0_0_0, &t851_1_0_0, t851_IOs, NULL, NULL, t851_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t851)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1106_TI;

#include "t1107.h"
extern TypeInfo t1106_TI;
extern MethodInfo m3403_MI;


extern MethodInfo m5863_MI;
 void m5863 (t1106 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5863_MI);
	{
		m3403(__this, &m3403_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.ClassInterfaceAttribute
extern Il2CppType t1107_0_0_1;
FieldInfo t1106_f0_FieldInfo = 
{
	"ciType", &t1107_0_0_1, &t1106_TI, offsetof(t1106, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1106_FIs[] =
{
	&t1106_f0_FieldInfo,
	NULL
};
extern Il2CppType t1107_0_0_0;
static ParameterInfo t1106_m5863_ParameterInfos[] = 
{
	{"classInterfaceType", 0, 134221344, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern TypeInfo t1106_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5863_MI = 
{
	".ctor", (methodPointerType)&m5863, &t1106_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t1106_m5863_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2891, NULL, (methodPointerType)NULL};
static MethodInfo* t1106_MIs[] =
{
	&m5863_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1106_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t1106_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1106_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 5, &m3439_MI);
		extern MethodInfo m3440_MI;
		m3440(tmp, false, &m3440_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1106__CustomAttributeCache = {
2,
NULL,
&t1106_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1106_1_0_0;
extern TypeInfo t591_TI;
struct t1106;
extern TypeInfo t1106_TI;
extern CustomAttributesCache t1106__CustomAttributeCache;
TypeInfo t1106_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ClassInterfaceAttribute", "System.Runtime.InteropServices", t1106_MIs, NULL, t1106_FIs, NULL, &t591_TI, NULL, NULL, &t1106_TI, NULL, t1106_VT, &t1106__CustomAttributeCache, &t1106_TI, &t1106_0_0_0, &t1106_1_0_0, t1106_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1106), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1107_TI;
#include "t1107MD.h"



// Metadata Definition System.Runtime.InteropServices.ClassInterfaceType
extern Il2CppType t134_0_0_1542;
FieldInfo t1107_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1107_TI, offsetof(t1107, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1107_0_0_32854;
FieldInfo t1107_f2_FieldInfo = 
{
	"None", &t1107_0_0_32854, &t1107_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1107_0_0_32854;
FieldInfo t1107_f3_FieldInfo = 
{
	"AutoDispatch", &t1107_0_0_32854, &t1107_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1107_0_0_32854;
FieldInfo t1107_f4_FieldInfo = 
{
	"AutoDual", &t1107_0_0_32854, &t1107_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1107_FIs[] =
{
	&t1107_f1_FieldInfo,
	&t1107_f2_FieldInfo,
	&t1107_f3_FieldInfo,
	&t1107_f4_FieldInfo,
	NULL
};
static const int32_t t1107_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1107_f2_DefaultValue = 
{
	&t1107_f2_FieldInfo, { (char*)&t1107_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1107_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1107_f3_DefaultValue = 
{
	&t1107_f3_FieldInfo, { (char*)&t1107_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1107_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1107_f4_DefaultValue = 
{
	&t1107_f4_FieldInfo, { (char*)&t1107_f4_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1107_FDVs[] = 
{
	&t1107_f2_DefaultValue,
	&t1107_f3_DefaultValue,
	&t1107_f4_DefaultValue,
	NULL
};
static MethodInfo* t1107_MIs[] =
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
static MethodInfo* t1107_VT[] =
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
static Il2CppInterfaceOffsetPair t1107_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1107_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1107__CustomAttributeCache = {
1,
NULL,
&t1107_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1107_0_0_0;
extern Il2CppType t1107_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t1107__CustomAttributeCache;
TypeInfo t1107_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ClassInterfaceType", "System.Runtime.InteropServices", t1107_MIs, NULL, t1107_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1107_VT, &t1107__CustomAttributeCache, &t134_TI, &t1107_0_0_0, &t1107_1_0_0, t1107_IOs, NULL, NULL, t1107_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1107)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1108_TI;

extern TypeInfo t1108_TI;
extern MethodInfo m3403_MI;


extern MethodInfo m5864_MI;
 void m5864 (t1108 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5864_MI);
	{
		m3403(__this, &m3403_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.ComDefaultInterfaceAttribute
extern Il2CppType t131_0_0_1;
FieldInfo t1108_f0_FieldInfo = 
{
	"_type", &t131_0_0_1, &t1108_TI, offsetof(t1108, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1108_FIs[] =
{
	&t1108_f0_FieldInfo,
	NULL
};
extern Il2CppType t131_0_0_0;
static ParameterInfo t1108_m5864_ParameterInfos[] = 
{
	{"defaultInterface", 0, 134221345, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1108_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5864_MI = 
{
	".ctor", (methodPointerType)&m5864, &t1108_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1108_m5864_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2892, NULL, (methodPointerType)NULL};
static MethodInfo* t1108_MIs[] =
{
	&m5864_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1108_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t1108_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1108_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 4, &m3439_MI);
		extern MethodInfo m3440_MI;
		m3440(tmp, false, &m3440_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1108__CustomAttributeCache = {
2,
NULL,
&t1108_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1108_0_0_0;
extern Il2CppType t1108_1_0_0;
extern TypeInfo t591_TI;
struct t1108;
extern TypeInfo t1108_TI;
extern CustomAttributesCache t1108__CustomAttributeCache;
TypeInfo t1108_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ComDefaultInterfaceAttribute", "System.Runtime.InteropServices", t1108_MIs, NULL, t1108_FIs, NULL, &t591_TI, NULL, NULL, &t1108_TI, NULL, t1108_VT, &t1108__CustomAttributeCache, &t1108_TI, &t1108_0_0_0, &t1108_1_0_0, t1108_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1108), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t1109.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1109_TI;
#include "t1109MD.h"



// Metadata Definition System.Runtime.InteropServices.ComInterfaceType
extern Il2CppType t134_0_0_1542;
FieldInfo t1109_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1109_TI, offsetof(t1109, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1109_0_0_32854;
FieldInfo t1109_f2_FieldInfo = 
{
	"InterfaceIsDual", &t1109_0_0_32854, &t1109_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1109_0_0_32854;
FieldInfo t1109_f3_FieldInfo = 
{
	"InterfaceIsIUnknown", &t1109_0_0_32854, &t1109_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1109_0_0_32854;
FieldInfo t1109_f4_FieldInfo = 
{
	"InterfaceIsIDispatch", &t1109_0_0_32854, &t1109_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1109_FIs[] =
{
	&t1109_f1_FieldInfo,
	&t1109_f2_FieldInfo,
	&t1109_f3_FieldInfo,
	&t1109_f4_FieldInfo,
	NULL
};
static const int32_t t1109_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1109_f2_DefaultValue = 
{
	&t1109_f2_FieldInfo, { (char*)&t1109_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1109_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1109_f3_DefaultValue = 
{
	&t1109_f3_FieldInfo, { (char*)&t1109_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1109_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1109_f4_DefaultValue = 
{
	&t1109_f4_FieldInfo, { (char*)&t1109_f4_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1109_FDVs[] = 
{
	&t1109_f2_DefaultValue,
	&t1109_f3_DefaultValue,
	&t1109_f4_DefaultValue,
	NULL
};
static MethodInfo* t1109_MIs[] =
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
static MethodInfo* t1109_VT[] =
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
static Il2CppInterfaceOffsetPair t1109_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1109_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1109__CustomAttributeCache = {
1,
NULL,
&t1109_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1109_0_0_0;
extern Il2CppType t1109_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t1109__CustomAttributeCache;
TypeInfo t1109_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ComInterfaceType", "System.Runtime.InteropServices", t1109_MIs, NULL, t1109_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1109_VT, &t1109__CustomAttributeCache, &t134_TI, &t1109_0_0_0, &t1109_1_0_0, t1109_IOs, NULL, NULL, t1109_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1109)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1110.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1110_TI;
#include "t1110MD.h"

extern TypeInfo t1110_TI;
extern MethodInfo m3403_MI;


extern MethodInfo m5865_MI;
 void m5865 (t1110 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5865_MI);
	{
		m3403(__this, &m3403_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.DispIdAttribute
extern Il2CppType t134_0_0_1;
FieldInfo t1110_f0_FieldInfo = 
{
	"id", &t134_0_0_1, &t1110_TI, offsetof(t1110, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1110_FIs[] =
{
	&t1110_f0_FieldInfo,
	NULL
};
extern Il2CppType t134_0_0_0;
static ParameterInfo t1110_m5865_ParameterInfos[] = 
{
	{"dispId", 0, 134221346, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1110_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5865_MI = 
{
	".ctor", (methodPointerType)&m5865, &t1110_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t1110_m5865_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2893, NULL, (methodPointerType)NULL};
static MethodInfo* t1110_MIs[] =
{
	&m5865_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1110_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t1110_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
void t1110_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 960, &m3439_MI);
		extern MethodInfo m3440_MI;
		m3440(tmp, false, &m3440_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1110__CustomAttributeCache = {
2,
NULL,
&t1110_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1110_0_0_0;
extern Il2CppType t1110_1_0_0;
extern TypeInfo t591_TI;
struct t1110;
extern TypeInfo t1110_TI;
extern CustomAttributesCache t1110__CustomAttributeCache;
TypeInfo t1110_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DispIdAttribute", "System.Runtime.InteropServices", t1110_MIs, NULL, t1110_FIs, NULL, &t591_TI, NULL, NULL, &t1110_TI, NULL, t1110_VT, &t1110__CustomAttributeCache, &t1110_TI, &t1110_0_0_0, &t1110_1_0_0, t1110_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1110), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t1111.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1111_TI;
#include "t1111MD.h"

#include "t1387.h"
#include "t1112.h"
extern TypeInfo t1111_TI;
extern TypeInfo t1387_TI;
extern TypeInfo t134_TI;
#include "t1387MD.h"
#include "t134MD.h"
extern MethodInfo m5867_MI;
extern MethodInfo m4419_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m5871_MI;
extern MethodInfo m5872_MI;
extern MethodInfo m5866_MI;
extern MethodInfo m5873_MI;
extern MethodInfo m3361_MI;


extern MethodInfo m5866_MI;
 void m5866 (t1111 * __this, t25 * p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5866_MI);
	{
		if ((((int32_t)p1) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		if ((((int32_t)p1) <= ((int32_t)3)))
		{
			goto IL_000d;
		}
	}

IL_0008:
	{
		p1 = 2;
	}

IL_000d:
	{
		int32_t L_0 = m5872(NULL, p0, 0, p1, &m5872_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m5867_MI;
 bool m5867 (t1111 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5867_MI);
	{
		int32_t L_0 = (__this->f0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m5868_MI;
 t25 * m5868 (t1111 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5868_MI);
	{
		bool L_0 = m5867(__this, &m5867_MI);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t27* L_1 = m4419(NULL, (t27*) &_stringLiteral947, &m4419_MI);
		t1387 * L_2 = (t1387 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1387_TI));
		m7431(L_2, L_1, &m7431_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0018:
	{
		int32_t L_3 = (__this->f0);
		t25 * L_4 = m5871(NULL, L_3, &m5871_MI);
		return L_4;
	}
}
extern MethodInfo m5869_MI;
 t1111  m5869 (t25 * __this, t25 * p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5869_MI);
	{
		t1111  L_0 = {0};
		m5866(&L_0, p0, p1, &m5866_MI);
		return L_0;
	}
}
extern MethodInfo m5870_MI;
 void m5870 (t1111 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5870_MI);
	{
		int32_t L_0 = (__this->f0);
		m5873(NULL, L_0, &m5873_MI);
		__this->f0 = 0;
		return;
	}
}
extern MethodInfo m5871_MI;
 t25 * m5871 (t25 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5871_MI);
	typedef t25 * (*m5871_ftn) (int32_t);
	static m5871_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m5871_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m5872_MI;
 int32_t m5872 (t25 * __this, t25 * p0, int32_t p1, int32_t p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5872_MI);
	typedef int32_t (*m5872_ftn) (t25 *, int32_t, int32_t);
	static m5872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m5872_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m5873_MI;
 void m5873 (t25 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5873_MI);
	typedef void (*m5873_ftn) (int32_t);
	static m5873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m5873_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m5874_MI;
 bool m5874 (t1111 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5874_MI);
	t1111  V_0 = {0};
	{
		if (!p0)
		{
			goto IL_000b;
		}
	}
	{
		if (((t25 *)IsInst(p0, InitializedTypeInfo(&t1111_TI))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_0 = (__this->f0);
		V_0 = ((*(t1111 *)((t1111 *)UnBox (p0, InitializedTypeInfo(&t1111_TI)))));
		NullCheck((&V_0));
		int32_t L_1 = ((&V_0)->f0);
		return ((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
extern MethodInfo m5875_MI;
 int32_t m5875 (t1111 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5875_MI);
	{
		int32_t* L_0 = &(__this->f0);
		int32_t L_1 = m3361(L_0, &m3361_MI);
		return L_1;
	}
}
// Metadata Definition System.Runtime.InteropServices.GCHandle
extern Il2CppType t134_0_0_1;
FieldInfo t1111_f0_FieldInfo = 
{
	"handle", &t134_0_0_1, &t1111_TI, offsetof(t1111, f0) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t1111_FIs[] =
{
	&t1111_f0_FieldInfo,
	NULL
};
extern MethodInfo m5867_MI;
static PropertyInfo t1111____IsAllocated_PropertyInfo = 
{
	&t1111_TI, "IsAllocated", &m5867_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5868_MI;
static PropertyInfo t1111____Target_PropertyInfo = 
{
	&t1111_TI, "Target", &m5868_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1111_PIs[] =
{
	&t1111____IsAllocated_PropertyInfo,
	&t1111____Target_PropertyInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t1112_0_0_0;
static ParameterInfo t1111_m5866_ParameterInfos[] = 
{
	{"value", 0, 134221347, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"type", 1, 134221348, &EmptyCustomAttributesCache, &t1112_0_0_0},
};
extern TypeInfo t1111_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5866_MI = 
{
	".ctor", (methodPointerType)&m5866, &t1111_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t1111_m5866_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 2, false, false, 2894, NULL, (methodPointerType)NULL};
extern TypeInfo t1111_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5867_MI = 
{
	"get_IsAllocated", (methodPointerType)&m5867, &t1111_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2895, NULL, (methodPointerType)NULL};
extern TypeInfo t1111_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5868_MI = 
{
	"get_Target", (methodPointerType)&m5868, &t1111_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2896, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t1112_0_0_0;
static ParameterInfo t1111_m5869_ParameterInfos[] = 
{
	{"value", 0, 134221349, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"type", 1, 134221350, &EmptyCustomAttributesCache, &t1112_0_0_0},
};
extern TypeInfo t1111_TI;
extern Il2CppType t1111_0_0_0;
extern void* RuntimeInvoker_t1111_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5869_MI = 
{
	"Alloc", (methodPointerType)&m5869, &t1111_TI, &t1111_0_0_0, RuntimeInvoker_t1111_t25_t134, t1111_m5869_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2897, NULL, (methodPointerType)NULL};
extern TypeInfo t1111_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5870_MI = 
{
	"Free", (methodPointerType)&m5870, &t1111_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 2898, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t1111_m5871_ParameterInfos[] = 
{
	{"handle", 0, 134221351, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1111_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5871_MI = 
{
	"GetTarget", (methodPointerType)&m5871, &t1111_TI, &t25_0_0_0, RuntimeInvoker_t25_t134, t1111_m5871_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 2899, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t1112_0_0_0;
static ParameterInfo t1111_m5872_ParameterInfos[] = 
{
	{"obj", 0, 134221352, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"handle", 1, 134221353, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"type", 2, 134221354, &EmptyCustomAttributesCache, &t1112_0_0_0},
};
extern TypeInfo t1111_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5872_MI = 
{
	"GetTargetHandle", (methodPointerType)&m5872, &t1111_TI, &t134_0_0_0, RuntimeInvoker_t134_t25_t134_t134, t1111_m5872_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 3, false, false, 2900, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t1111_m5873_ParameterInfos[] = 
{
	{"handle", 0, 134221355, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1111_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5873_MI = 
{
	"FreeHandle", (methodPointerType)&m5873, &t1111_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t1111_m5873_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 2901, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1111_m5874_ParameterInfos[] = 
{
	{"o", 0, 134221356, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1111_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5874_MI = 
{
	"Equals", (methodPointerType)&m5874, &t1111_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t1111_m5874_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 2902, NULL, (methodPointerType)NULL};
extern TypeInfo t1111_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5875_MI = 
{
	"GetHashCode", (methodPointerType)&m5875, &t1111_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 2903, NULL, (methodPointerType)NULL};
static MethodInfo* t1111_MIs[] =
{
	&m5866_MI,
	&m5867_MI,
	&m5868_MI,
	&m5869_MI,
	&m5870_MI,
	&m5871_MI,
	&m5872_MI,
	&m5873_MI,
	&m5874_MI,
	&m5875_MI,
	NULL
};
extern MethodInfo m5874_MI;
extern MethodInfo m352_MI;
extern MethodInfo m5875_MI;
extern MethodInfo m627_MI;
static MethodInfo* t1111_VT[] =
{
	&m5874_MI,
	&m352_MI,
	&m5875_MI,
	&m627_MI,
};
extern TypeInfo t867_TI;
#include "t867.h"
#include "t867MD.h"
extern MethodInfo m4422_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1111_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t867 * tmp;
		tmp = (t867 *)il2cpp_codegen_object_new (&t867_TI);
		m4422(tmp, il2cpp_codegen_string_new_wrapper("Struct should be [StructLayout(LayoutKind.Sequential)] but will need to be reordered for that."), &m4422_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1111__CustomAttributeCache = {
2,
NULL,
&t1111_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1111_0_0_0;
extern Il2CppType t1111_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t1111_TI;
extern CustomAttributesCache t1111__CustomAttributeCache;
TypeInfo t1111_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GCHandle", "System.Runtime.InteropServices", t1111_MIs, t1111_PIs, t1111_FIs, NULL, &t117_TI, NULL, NULL, &t1111_TI, NULL, t1111_VT, &t1111__CustomAttributeCache, &t1111_TI, &t1111_0_0_0, &t1111_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1111)+ sizeof (Il2CppObject), 0, sizeof(t1111 ), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, true, true, 10, 2, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1112_TI;
#include "t1112MD.h"



// Metadata Definition System.Runtime.InteropServices.GCHandleType
extern Il2CppType t134_0_0_1542;
FieldInfo t1112_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1112_TI, offsetof(t1112, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1112_0_0_32854;
FieldInfo t1112_f2_FieldInfo = 
{
	"Weak", &t1112_0_0_32854, &t1112_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1112_0_0_32854;
FieldInfo t1112_f3_FieldInfo = 
{
	"WeakTrackResurrection", &t1112_0_0_32854, &t1112_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1112_0_0_32854;
FieldInfo t1112_f4_FieldInfo = 
{
	"Normal", &t1112_0_0_32854, &t1112_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1112_0_0_32854;
FieldInfo t1112_f5_FieldInfo = 
{
	"Pinned", &t1112_0_0_32854, &t1112_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1112_FIs[] =
{
	&t1112_f1_FieldInfo,
	&t1112_f2_FieldInfo,
	&t1112_f3_FieldInfo,
	&t1112_f4_FieldInfo,
	&t1112_f5_FieldInfo,
	NULL
};
static const int32_t t1112_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1112_f2_DefaultValue = 
{
	&t1112_f2_FieldInfo, { (char*)&t1112_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1112_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1112_f3_DefaultValue = 
{
	&t1112_f3_FieldInfo, { (char*)&t1112_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1112_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1112_f4_DefaultValue = 
{
	&t1112_f4_FieldInfo, { (char*)&t1112_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1112_f5_DefaultValueData = 3;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1112_f5_DefaultValue = 
{
	&t1112_f5_FieldInfo, { (char*)&t1112_f5_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1112_FDVs[] = 
{
	&t1112_f2_DefaultValue,
	&t1112_f3_DefaultValue,
	&t1112_f4_DefaultValue,
	&t1112_f5_DefaultValue,
	NULL
};
static MethodInfo* t1112_MIs[] =
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
static MethodInfo* t1112_VT[] =
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
static Il2CppInterfaceOffsetPair t1112_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1112_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1112__CustomAttributeCache = {
1,
NULL,
&t1112_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1112_0_0_0;
extern Il2CppType t1112_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t1112__CustomAttributeCache;
TypeInfo t1112_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GCHandleType", "System.Runtime.InteropServices", t1112_MIs, NULL, t1112_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1112_VT, &t1112__CustomAttributeCache, &t134_TI, &t1112_0_0_0, &t1112_1_0_0, t1112_IOs, NULL, NULL, t1112_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1112)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t1113.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1113_TI;
#include "t1113MD.h"

extern TypeInfo t1113_TI;
extern MethodInfo m3403_MI;


extern MethodInfo m5876_MI;
 void m5876 (t1113 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5876_MI);
	{
		m3403(__this, &m3403_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.InterfaceTypeAttribute
extern Il2CppType t1109_0_0_1;
FieldInfo t1113_f0_FieldInfo = 
{
	"intType", &t1109_0_0_1, &t1113_TI, offsetof(t1113, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1113_FIs[] =
{
	&t1113_f0_FieldInfo,
	NULL
};
extern Il2CppType t1109_0_0_0;
static ParameterInfo t1113_m5876_ParameterInfos[] = 
{
	{"interfaceType", 0, 134221357, &EmptyCustomAttributesCache, &t1109_0_0_0},
};
extern TypeInfo t1113_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5876_MI = 
{
	".ctor", (methodPointerType)&m5876, &t1113_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t1113_m5876_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2904, NULL, (methodPointerType)NULL};
static MethodInfo* t1113_MIs[] =
{
	&m5876_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1113_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t1113_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
void t1113_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 1024, &m3439_MI);
		extern MethodInfo m3440_MI;
		m3440(tmp, false, &m3440_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1113__CustomAttributeCache = {
2,
NULL,
&t1113_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1113_0_0_0;
extern Il2CppType t1113_1_0_0;
extern TypeInfo t591_TI;
struct t1113;
extern TypeInfo t1113_TI;
extern CustomAttributesCache t1113__CustomAttributeCache;
TypeInfo t1113_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InterfaceTypeAttribute", "System.Runtime.InteropServices", t1113_MIs, NULL, t1113_FIs, NULL, &t591_TI, NULL, NULL, &t1113_TI, NULL, t1113_VT, &t1113__CustomAttributeCache, &t1113_TI, &t1113_0_0_0, &t1113_1_0_0, t1113_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1113), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t1114.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1114_TI;
#include "t1114MD.h"

#include "t1379.h"
#include "t1380.h"
#include "t61.h"
extern TypeInfo t1114_TI;
#include "t1378MD.h"
#include "t1379MD.h"
extern MethodInfo m7386_MI;
extern MethodInfo m7641_MI;
extern MethodInfo m5878_MI;


extern MethodInfo m5877_MI;
 void m5877 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5877_MI);
	int32_t G_B3_0 = 0;
	{
		((t1114_SFs*)InitializedTypeInfo(&t1114_TI)->static_fields)->f0 = 2;
		t1379 * L_0 = m7386(NULL, &m7386_MI);
		NullCheck(L_0);
		int32_t L_1 = m7641(L_0, &m7641_MI);
		if ((((uint32_t)L_1) != ((uint32_t)2)))
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		((t1114_SFs*)InitializedTypeInfo(&t1114_TI)->static_fields)->f1 = G_B3_0;
		return;
	}
}
extern MethodInfo m5878_MI;
 void m5878 (t25 * __this, t61 p0, int32_t p1, t122 * p2, int32_t p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5878_MI);
	typedef void (*m5878_ftn) (t61, int32_t, t122 *, int32_t);
	static m5878_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m5878_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m5879_MI;
 void m5879 (t25 * __this, t61 p0, t350* p1, int32_t p2, int32_t p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5879_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1114_TI));
		m5878(NULL, p0, p2, (t122 *)(t122 *)p1, p3, &m5878_MI);
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.Marshal
extern Il2CppType t134_0_0_54;
FieldInfo t1114_f0_FieldInfo = 
{
	"SystemMaxDBCSCharSize", &t134_0_0_54, &t1114_TI, offsetof(t1114_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_54;
FieldInfo t1114_f1_FieldInfo = 
{
	"SystemDefaultCharSize", &t134_0_0_54, &t1114_TI, offsetof(t1114_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1114_FIs[] =
{
	&t1114_f0_FieldInfo,
	&t1114_f1_FieldInfo,
	NULL
};
extern TypeInfo t1114_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5877_MI = 
{
	".cctor", (methodPointerType)&m5877, &t1114_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2905, NULL, (methodPointerType)NULL};
extern Il2CppType t61_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t1114_m5878_ParameterInfos[] = 
{
	{"source", 0, 134221358, &EmptyCustomAttributesCache, &t61_0_0_0},
	{"startIndex", 1, 134221359, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"destination", 2, 134221360, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"length", 3, 134221361, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1114_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t61_t134_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5878_MI = 
{
	"copy_from_unmanaged", (methodPointerType)&m5878, &t1114_TI, &t123_0_0_0, RuntimeInvoker_t123_t61_t134_t25_t134, t1114_m5878_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 4, false, false, 2906, NULL, (methodPointerType)NULL};
extern Il2CppType t61_0_0_0;
extern Il2CppType t350_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t1114_m5879_ParameterInfos[] = 
{
	{"source", 0, 134221362, &EmptyCustomAttributesCache, &t61_0_0_0},
	{"destination", 1, 134221363, &EmptyCustomAttributesCache, &t350_0_0_0},
	{"startIndex", 2, 134221364, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"length", 3, 134221365, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1114_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t61_t25_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5879_MI = 
{
	"Copy", (methodPointerType)&m5879, &t1114_TI, &t123_0_0_0, RuntimeInvoker_t123_t61_t25_t134_t134, t1114_m5879_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 4, false, false, 2907, NULL, (methodPointerType)NULL};
static MethodInfo* t1114_MIs[] =
{
	&m5877_MI,
	&m5878_MI,
	&m5879_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1114_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t1298_TI;
#include "t1298.h"
#include "t1298MD.h"
extern MethodInfo m6666_MI;
void t1114_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1298 * tmp;
		tmp = (t1298 *)il2cpp_codegen_object_new (&t1298_TI);
		m6666(tmp, &m6666_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1114__CustomAttributeCache = {
1,
NULL,
&t1114_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1114_0_0_0;
extern Il2CppType t1114_1_0_0;
extern TypeInfo t25_TI;
struct t1114;
extern TypeInfo t1114_TI;
extern CustomAttributesCache t1114__CustomAttributeCache;
TypeInfo t1114_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Marshal", "System.Runtime.InteropServices", t1114_MIs, NULL, t1114_FIs, NULL, &t25_TI, NULL, NULL, &t1114_TI, NULL, t1114_VT, &t1114__CustomAttributeCache, &t1114_TI, &t1114_0_0_0, &t1114_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1114), 0, -1, sizeof(t1114_SFs), 0, -1, 262529, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 3, 0, 2, 0, 0, 4, 0, 0};
#include "t1115.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1115_TI;
#include "t1115MD.h"

extern MethodInfo m3403_MI;


extern MethodInfo m5880_MI;
 void m5880 (t1115 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5880_MI);
	{
		m3403(__this, &m3403_MI);
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.PreserveSigAttribute
extern TypeInfo t1115_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5880_MI = 
{
	".ctor", (methodPointerType)&m5880, &t1115_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2908, NULL, (methodPointerType)NULL};
static MethodInfo* t1115_MIs[] =
{
	&m5880_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1115_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t1115_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
void t1115_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 64, &m3439_MI);
		extern MethodInfo m3440_MI;
		m3440(tmp, false, &m3440_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1115__CustomAttributeCache = {
2,
NULL,
&t1115_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1115_0_0_0;
extern Il2CppType t1115_1_0_0;
extern TypeInfo t591_TI;
struct t1115;
extern TypeInfo t1115_TI;
extern CustomAttributesCache t1115__CustomAttributeCache;
TypeInfo t1115_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PreserveSigAttribute", "System.Runtime.InteropServices", t1115_MIs, NULL, NULL, NULL, &t591_TI, NULL, NULL, &t1115_TI, NULL, t1115_VT, &t1115__CustomAttributeCache, &t1115_TI, &t1115_0_0_0, &t1115_1_0_0, t1115_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1115), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t869.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t869_TI;
#include "t869MD.h"

#include "t1404.h"
extern TypeInfo t869_TI;
extern TypeInfo t131_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1404_TI;
extern TypeInfo t125_TI;
extern TypeInfo t123_TI;
extern TypeInfo t1103_TI;
#include "t1404MD.h"
#include "t1328MD.h"
#include "t1384MD.h"
extern MethodInfo m5860_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m3520_MI;
extern MethodInfo m7635_MI;
extern MethodInfo m6920_MI;
extern MethodInfo m8282_MI;
extern MethodInfo m8283_MI;
extern MethodInfo m5887_MI;
extern MethodInfo m7403_MI;
extern MethodInfo m5882_MI;
extern MethodInfo m5861_MI;


extern MethodInfo m5881_MI;
 void m5881 (t869 * __this, t61 p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5881_MI);
	{
		m5860(__this, &m5860_MI);
		__this->f1 = p0;
		__this->f3 = p1;
		__this->f2 = 1;
		return;
	}
}
extern MethodInfo m5882_MI;
 void m5882 (t869 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5882_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t131 * L_1 = m1959(__this, &m1959_MI);
		NullCheck(L_1);
		t27* L_2 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, L_1);
		t1404 * L_3 = (t1404 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1404_TI));
		m7635(L_3, L_2, &m7635_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0019:
	{
		int32_t L_4 = (__this->f2);
		V_1 = L_4;
		V_0 = ((int32_t)(V_1-1));
		int32_t* L_5 = &(__this->f2);
		int32_t L_6 = m6920(NULL, L_5, V_0, V_1, &m6920_MI);
		if ((((uint32_t)L_6) != ((uint32_t)V_1)))
		{
			goto IL_0019;
		}
	}
	{
		if (V_0)
		{
			goto IL_0061;
		}
	}
	{
		bool L_7 = (__this->f3);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8282_MI, __this);
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&m8283_MI, __this);
		t61 L_9 = (__this->f1);
		__this->f0 = L_9;
		__this->f2 = (-1);
	}

IL_0061:
	{
		return;
	}
}
extern MethodInfo m5883_MI;
 void m5883 (t869 * __this, bool* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5883_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t131 * L_1 = m1959(__this, &m1959_MI);
		NullCheck(L_1);
		t27* L_2 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, L_1);
		t1404 * L_3 = (t1404 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1404_TI));
		m7635(L_3, L_2, &m7635_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_001a:
	{
		int32_t L_4 = (__this->f2);
		V_1 = L_4;
		V_0 = ((int32_t)(V_1+1));
		if ((((int32_t)V_1) > ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		t131 * L_5 = m1959(__this, &m1959_MI);
		NullCheck(L_5);
		t27* L_6 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, L_5);
		t1404 * L_7 = (t1404 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1404_TI));
		m7635(L_7, L_6, &m7635_MI);
		il2cpp_codegen_raise_exception (L_7);
	}

IL_003a:
	{
		int32_t* L_8 = &(__this->f2);
		int32_t L_9 = m6920(NULL, L_8, V_0, V_1, &m6920_MI);
		if ((((uint32_t)L_9) != ((uint32_t)V_1)))
		{
			goto IL_001a;
		}
	}
	{
		*((int8_t*)(p0)) = (int8_t)1;
		return;
	}
}
extern MethodInfo m5884_MI;
 t61 m5884 (t869 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5884_MI);
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t131 * L_1 = m1959(__this, &m1959_MI);
		NullCheck(L_1);
		t27* L_2 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, L_1);
		t1404 * L_3 = (t1404 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1404_TI));
		m7635(L_3, L_2, &m7635_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_001a:
	{
		t61 L_4 = (__this->f0);
		return L_4;
	}
}
extern MethodInfo m5885_MI;
 void m5885 (t869 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5885_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t131 * L_1 = m1959(__this, &m1959_MI);
		NullCheck(L_1);
		t27* L_2 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, L_1);
		t1404 * L_3 = (t1404 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1404_TI));
		m7635(L_3, L_2, &m7635_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_001a:
	{
		int32_t L_4 = (__this->f2);
		V_1 = L_4;
		V_0 = ((int32_t)(V_1-1));
		int32_t* L_5 = &(__this->f2);
		int32_t L_6 = m6920(NULL, L_5, V_0, V_1, &m6920_MI);
		if ((((uint32_t)L_6) != ((uint32_t)V_1)))
		{
			goto IL_001a;
		}
	}
	{
		if (V_0)
		{
			goto IL_005b;
		}
	}
	{
		bool L_7 = (__this->f3);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8282_MI, __this);
		if (L_8)
		{
			goto IL_005b;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&m8283_MI, __this);
		t61 L_9 = (__this->f1);
		__this->f0 = L_9;
	}

IL_005b:
	{
		return;
	}
}
extern MethodInfo m5886_MI;
 void m5886 (t869 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5886_MI);
	{
		VirtActionInvoker1< bool >::Invoke(&m5887_MI, __this, 1);
		m7403(NULL, __this, &m7403_MI);
		return;
	}
}
extern MethodInfo m5887_MI;
 void m5887 (t869 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5887_MI);
	{
		if (!p0)
		{
			goto IL_000b;
		}
	}
	{
		m5882(__this, &m5882_MI);
		goto IL_000b;
	}

IL_000b:
	{
		return;
	}
}
extern MethodInfo m5888_MI;
 void m5888 (t869 * __this, t61 p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5888_MI);
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m5889_MI;
 void m5889 (t869 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5889_MI);
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = (__this->f3);
			if (!L_0)
			{
				goto IL_0023;
			}
		}

IL_0008:
		{
			bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8282_MI, __this);
			if (L_1)
			{
				goto IL_0023;
			}
		}

IL_0010:
		{
			VirtFuncInvoker0< bool >::Invoke(&m8283_MI, __this);
			t61 L_2 = (__this->f1);
			__this->f0 = L_2;
		}

IL_0023:
		{
			// IL_0023: leave.s IL_002c
			leaveInstructions[0] = 0x2C; // 1
			THROW_SENTINEL(IL_002c);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0025;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0025;
	}

IL_0025:
	{ // begin finally (depth: 1)
		m5861(__this, &m5861_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x2C:
				goto IL_002c;
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

IL_002c:
	{
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.SafeHandle
extern Il2CppType t61_0_0_4;
FieldInfo t869_f0_FieldInfo = 
{
	"handle", &t61_0_0_4, &t869_TI, offsetof(t869, f0), &EmptyCustomAttributesCache};
extern Il2CppType t61_0_0_1;
FieldInfo t869_f1_FieldInfo = 
{
	"invalid_handle_value", &t61_0_0_1, &t869_TI, offsetof(t869, f1), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t869_f2_FieldInfo = 
{
	"refcount", &t134_0_0_1, &t869_TI, offsetof(t869, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t869_f3_FieldInfo = 
{
	"owns_handle", &t125_0_0_1, &t869_TI, offsetof(t869, f3), &EmptyCustomAttributesCache};
static FieldInfo* t869_FIs[] =
{
	&t869_f0_FieldInfo,
	&t869_f1_FieldInfo,
	&t869_f2_FieldInfo,
	&t869_f3_FieldInfo,
	NULL
};
extern MethodInfo m8282_MI;
static PropertyInfo t869____IsInvalid_PropertyInfo = 
{
	&t869_TI, "IsInvalid", &m8282_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t869_PIs[] =
{
	&t869____IsInvalid_PropertyInfo,
	NULL
};
extern Il2CppType t61_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t869_m5881_ParameterInfos[] = 
{
	{"invalidHandleValue", 0, 134221366, &EmptyCustomAttributesCache, &t61_0_0_0},
	{"ownsHandle", 1, 134221367, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t869_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t61_t137 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t869__CustomAttributeCache_m5881;
MethodInfo m5881_MI = 
{
	".ctor", (methodPointerType)&m5881, &t869_TI, &t123_0_0_0, RuntimeInvoker_t123_t61_t137, t869_m5881_ParameterInfos, &t869__CustomAttributeCache_m5881, 6276, 0, 255, 2, false, false, 2909, NULL, (methodPointerType)NULL};
extern TypeInfo t869_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t869__CustomAttributeCache_m5882;
MethodInfo m5882_MI = 
{
	"Close", (methodPointerType)&m5882, &t869_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t869__CustomAttributeCache_m5882, 134, 0, 255, 0, false, false, 2910, NULL, (methodPointerType)NULL};
extern Il2CppType t125_1_0_0;
static ParameterInfo t869_m5883_ParameterInfos[] = 
{
	{"success", 0, 134221368, &EmptyCustomAttributesCache, &t125_1_0_0},
};
extern TypeInfo t869_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t453 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t869__CustomAttributeCache_m5883;
MethodInfo m5883_MI = 
{
	"DangerousAddRef", (methodPointerType)&m5883, &t869_TI, &t123_0_0_0, RuntimeInvoker_t123_t453, t869_m5883_ParameterInfos, &t869__CustomAttributeCache_m5883, 134, 0, 255, 1, false, false, 2911, NULL, (methodPointerType)NULL};
extern TypeInfo t869_TI;
extern Il2CppType t61_0_0_0;
extern void* RuntimeInvoker_t61 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t869__CustomAttributeCache_m5884;
MethodInfo m5884_MI = 
{
	"DangerousGetHandle", (methodPointerType)&m5884, &t869_TI, &t61_0_0_0, RuntimeInvoker_t61, NULL, &t869__CustomAttributeCache_m5884, 134, 0, 255, 0, false, false, 2912, NULL, (methodPointerType)NULL};
extern TypeInfo t869_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t869__CustomAttributeCache_m5885;
MethodInfo m5885_MI = 
{
	"DangerousRelease", (methodPointerType)&m5885, &t869_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t869__CustomAttributeCache_m5885, 134, 0, 255, 0, false, false, 2913, NULL, (methodPointerType)NULL};
extern TypeInfo t869_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t869__CustomAttributeCache_m5886;
MethodInfo m5886_MI = 
{
	"Dispose", (methodPointerType)&m5886, &t869_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &t869__CustomAttributeCache_m5886, 486, 0, 4, 0, false, false, 2914, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t869_m5887_ParameterInfos[] = 
{
	{"disposing", 0, 134221369, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t869_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t869__CustomAttributeCache_m5887;
MethodInfo m5887_MI = 
{
	"Dispose", (methodPointerType)&m5887, &t869_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t869_m5887_ParameterInfos, &t869__CustomAttributeCache_m5887, 452, 0, 5, 1, false, false, 2915, NULL, (methodPointerType)NULL};
extern TypeInfo t869_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t869__CustomAttributeCache_m8283;
MethodInfo m8283_MI = 
{
	"ReleaseHandle", NULL, &t869_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t869__CustomAttributeCache_m8283, 1476, 0, 6, 0, false, false, 2916, NULL, (methodPointerType)NULL};
extern Il2CppType t61_0_0_0;
static ParameterInfo t869_m5888_ParameterInfos[] = 
{
	{"handle", 0, 134221370, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t869_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t61 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t869__CustomAttributeCache_m5888;
MethodInfo m5888_MI = 
{
	"SetHandle", (methodPointerType)&m5888, &t869_TI, &t123_0_0_0, RuntimeInvoker_t123_t61, t869_m5888_ParameterInfos, &t869__CustomAttributeCache_m5888, 132, 0, 255, 1, false, false, 2917, NULL, (methodPointerType)NULL};
extern TypeInfo t869_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t869__CustomAttributeCache_m8282;
MethodInfo m8282_MI = 
{
	"get_IsInvalid", NULL, &t869_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &t869__CustomAttributeCache_m8282, 3526, 0, 7, 0, false, false, 2918, NULL, (methodPointerType)NULL};
extern TypeInfo t869_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5889_MI = 
{
	"Finalize", (methodPointerType)&m5889, &t869_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 2919, NULL, (methodPointerType)NULL};
static MethodInfo* t869_MIs[] =
{
	&m5881_MI,
	&m5882_MI,
	&m5883_MI,
	&m5884_MI,
	&m5885_MI,
	&m5886_MI,
	&m5887_MI,
	&m8283_MI,
	&m5888_MI,
	&m8282_MI,
	&m5889_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m5889_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m5886_MI;
extern MethodInfo m5887_MI;
static MethodInfo* t869_VT[] =
{
	&m455_MI,
	&m5889_MI,
	&m456_MI,
	&m457_MI,
	&m5886_MI,
	&m5887_MI,
	NULL,
	NULL,
};
extern TypeInfo t167_TI;
static TypeInfo* t869_ITIs[] = 
{
	&t167_TI,
};
extern TypeInfo t167_TI;
static Il2CppInterfaceOffsetPair t869_IOs[] = 
{
	{ &t167_TI, 4},
};
extern TypeInfo t1104_TI;
extern MethodInfo m5862_MI;
void t869_CustomAttributesCacheGenerator_m5881(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1104 * tmp;
		tmp = (t1104 *)il2cpp_codegen_object_new (&t1104_TI);
		m5862(tmp, 3, 1, &m5862_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1104_TI;
extern MethodInfo m5862_MI;
void t869_CustomAttributesCacheGenerator_m5882(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1104 * tmp;
		tmp = (t1104 *)il2cpp_codegen_object_new (&t1104_TI);
		m5862(tmp, 3, 2, &m5862_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1104_TI;
extern MethodInfo m5862_MI;
void t869_CustomAttributesCacheGenerator_m5883(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1104 * tmp;
		tmp = (t1104 *)il2cpp_codegen_object_new (&t1104_TI);
		m5862(tmp, 3, 1, &m5862_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1104_TI;
extern MethodInfo m5862_MI;
void t869_CustomAttributesCacheGenerator_m5884(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1104 * tmp;
		tmp = (t1104 *)il2cpp_codegen_object_new (&t1104_TI);
		m5862(tmp, 3, 2, &m5862_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1104_TI;
extern MethodInfo m5862_MI;
void t869_CustomAttributesCacheGenerator_m5885(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1104 * tmp;
		tmp = (t1104 *)il2cpp_codegen_object_new (&t1104_TI);
		m5862(tmp, 3, 2, &m5862_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1104_TI;
extern MethodInfo m5862_MI;
void t869_CustomAttributesCacheGenerator_m5886(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1104 * tmp;
		tmp = (t1104 *)il2cpp_codegen_object_new (&t1104_TI);
		m5862(tmp, 3, 2, &m5862_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1104_TI;
extern MethodInfo m5862_MI;
void t869_CustomAttributesCacheGenerator_m5887(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1104 * tmp;
		tmp = (t1104 *)il2cpp_codegen_object_new (&t1104_TI);
		m5862(tmp, 3, 2, &m5862_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1104_TI;
extern MethodInfo m5862_MI;
void t869_CustomAttributesCacheGenerator_m8283(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1104 * tmp;
		tmp = (t1104 *)il2cpp_codegen_object_new (&t1104_TI);
		m5862(tmp, 3, 2, &m5862_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1104_TI;
extern MethodInfo m5862_MI;
void t869_CustomAttributesCacheGenerator_m5888(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1104 * tmp;
		tmp = (t1104 *)il2cpp_codegen_object_new (&t1104_TI);
		m5862(tmp, 3, 2, &m5862_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1104_TI;
extern MethodInfo m5862_MI;
void t869_CustomAttributesCacheGenerator_m8282(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1104 * tmp;
		tmp = (t1104 *)il2cpp_codegen_object_new (&t1104_TI);
		m5862(tmp, 3, 2, &m5862_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t869__CustomAttributeCache_m5881 = {
1,
NULL,
&t869_CustomAttributesCacheGenerator_m5881
};
CustomAttributesCache t869__CustomAttributeCache_m5882 = {
1,
NULL,
&t869_CustomAttributesCacheGenerator_m5882
};
CustomAttributesCache t869__CustomAttributeCache_m5883 = {
1,
NULL,
&t869_CustomAttributesCacheGenerator_m5883
};
CustomAttributesCache t869__CustomAttributeCache_m5884 = {
1,
NULL,
&t869_CustomAttributesCacheGenerator_m5884
};
CustomAttributesCache t869__CustomAttributeCache_m5885 = {
1,
NULL,
&t869_CustomAttributesCacheGenerator_m5885
};
CustomAttributesCache t869__CustomAttributeCache_m5886 = {
1,
NULL,
&t869_CustomAttributesCacheGenerator_m5886
};
CustomAttributesCache t869__CustomAttributeCache_m5887 = {
1,
NULL,
&t869_CustomAttributesCacheGenerator_m5887
};
CustomAttributesCache t869__CustomAttributeCache_m8283 = {
1,
NULL,
&t869_CustomAttributesCacheGenerator_m8283
};
CustomAttributesCache t869__CustomAttributeCache_m5888 = {
1,
NULL,
&t869_CustomAttributesCacheGenerator_m5888
};
CustomAttributesCache t869__CustomAttributeCache_m8282 = {
1,
NULL,
&t869_CustomAttributesCacheGenerator_m8282
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t869_0_0_0;
extern Il2CppType t869_1_0_0;
extern TypeInfo t1103_TI;
struct t869;
extern TypeInfo t869_TI;
extern CustomAttributesCache t869__CustomAttributeCache_m5881;
extern CustomAttributesCache t869__CustomAttributeCache_m5882;
extern CustomAttributesCache t869__CustomAttributeCache_m5883;
extern CustomAttributesCache t869__CustomAttributeCache_m5884;
extern CustomAttributesCache t869__CustomAttributeCache_m5885;
extern CustomAttributesCache t869__CustomAttributeCache_m5886;
extern CustomAttributesCache t869__CustomAttributeCache_m5887;
extern CustomAttributesCache t869__CustomAttributeCache_m8283;
extern CustomAttributesCache t869__CustomAttributeCache_m5888;
extern CustomAttributesCache t869__CustomAttributeCache_m8282;
TypeInfo t869_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SafeHandle", "System.Runtime.InteropServices", t869_MIs, t869_PIs, t869_FIs, NULL, &t1103_TI, NULL, NULL, &t869_TI, t869_ITIs, t869_VT, &EmptyCustomAttributesCache, &t869_TI, &t869_0_0_0, &t869_1_0_0, t869_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t869), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, true, false, false, false, 11, 1, 4, 0, 0, 8, 1, 1};
#include "t1116.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1116_TI;
#include "t1116MD.h"

extern TypeInfo t131_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1116_TI;
extern MethodInfo m3403_MI;
extern MethodInfo m4368_MI;


extern MethodInfo m5890_MI;
 void m5890 (t1116 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5890_MI);
	{
		m3403(__this, &m3403_MI);
		NullCheck(p0);
		t27* L_0 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m4368_MI, p0);
		__this->f0 = L_0;
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.TypeLibImportClassAttribute
extern Il2CppType t27_0_0_1;
FieldInfo t1116_f0_FieldInfo = 
{
	"_importClass", &t27_0_0_1, &t1116_TI, offsetof(t1116, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1116_FIs[] =
{
	&t1116_f0_FieldInfo,
	NULL
};
extern Il2CppType t131_0_0_0;
static ParameterInfo t1116_m5890_ParameterInfos[] = 
{
	{"importClass", 0, 134221371, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1116_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5890_MI = 
{
	".ctor", (methodPointerType)&m5890, &t1116_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1116_m5890_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2920, NULL, (methodPointerType)NULL};
static MethodInfo* t1116_MIs[] =
{
	&m5890_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1116_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t1116_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1116_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 1024, &m3439_MI);
		extern MethodInfo m3440_MI;
		m3440(tmp, false, &m3440_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1116__CustomAttributeCache = {
2,
NULL,
&t1116_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1116_0_0_0;
extern Il2CppType t1116_1_0_0;
extern TypeInfo t591_TI;
struct t1116;
extern TypeInfo t1116_TI;
extern CustomAttributesCache t1116__CustomAttributeCache;
TypeInfo t1116_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeLibImportClassAttribute", "System.Runtime.InteropServices", t1116_MIs, NULL, t1116_FIs, NULL, &t591_TI, NULL, NULL, &t1116_TI, NULL, t1116_VT, &t1116__CustomAttributeCache, &t1116_TI, &t1116_0_0_0, &t1116_1_0_0, t1116_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1116), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t1117.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1117_TI;
#include "t1117MD.h"

extern TypeInfo t1117_TI;
extern MethodInfo m3403_MI;


extern MethodInfo m5891_MI;
 void m5891 (t1117 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5891_MI);
	{
		m3403(__this, &m3403_MI);
		__this->f0 = p0;
		__this->f1 = p1;
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.TypeLibVersionAttribute
extern Il2CppType t134_0_0_1;
FieldInfo t1117_f0_FieldInfo = 
{
	"major", &t134_0_0_1, &t1117_TI, offsetof(t1117, f0), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t1117_f1_FieldInfo = 
{
	"minor", &t134_0_0_1, &t1117_TI, offsetof(t1117, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1117_FIs[] =
{
	&t1117_f0_FieldInfo,
	&t1117_f1_FieldInfo,
	NULL
};
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t1117_m5891_ParameterInfos[] = 
{
	{"major", 0, 134221372, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"minor", 1, 134221373, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1117_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5891_MI = 
{
	".ctor", (methodPointerType)&m5891, &t1117_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t134, t1117_m5891_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2921, NULL, (methodPointerType)NULL};
static MethodInfo* t1117_MIs[] =
{
	&m5891_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1117_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t1117_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
void t1117_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 1, &m3439_MI);
		extern MethodInfo m3441_MI;
		m3441(tmp, false, &m3441_MI);
		extern MethodInfo m3440_MI;
		m3440(tmp, false, &m3440_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1117__CustomAttributeCache = {
2,
NULL,
&t1117_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1117_0_0_0;
extern Il2CppType t1117_1_0_0;
extern TypeInfo t591_TI;
struct t1117;
extern TypeInfo t1117_TI;
extern CustomAttributesCache t1117__CustomAttributeCache;
TypeInfo t1117_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeLibVersionAttribute", "System.Runtime.InteropServices", t1117_MIs, NULL, t1117_FIs, NULL, &t591_TI, NULL, NULL, &t1117_TI, NULL, t1117_VT, &t1117__CustomAttributeCache, &t1117_TI, &t1117_0_0_0, &t1117_1_0_0, t1117_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1117), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 0, 4, 0, 1};
#include "t853.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t853_TI;
#include "t853MD.h"



// Metadata Definition System.Runtime.InteropServices.UnmanagedType
extern Il2CppType t134_0_0_1542;
FieldInfo t853_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t853_TI, offsetof(t853, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f2_FieldInfo = 
{
	"Bool", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f3_FieldInfo = 
{
	"I1", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f4_FieldInfo = 
{
	"U1", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f5_FieldInfo = 
{
	"I2", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f6_FieldInfo = 
{
	"U2", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f7_FieldInfo = 
{
	"I4", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f8_FieldInfo = 
{
	"U4", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f9_FieldInfo = 
{
	"I8", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f10_FieldInfo = 
{
	"U8", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f11_FieldInfo = 
{
	"R4", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f12_FieldInfo = 
{
	"R8", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f13_FieldInfo = 
{
	"Currency", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f14_FieldInfo = 
{
	"BStr", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f15_FieldInfo = 
{
	"LPStr", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f16_FieldInfo = 
{
	"LPWStr", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f17_FieldInfo = 
{
	"LPTStr", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f18_FieldInfo = 
{
	"ByValTStr", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f19_FieldInfo = 
{
	"IUnknown", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f20_FieldInfo = 
{
	"IDispatch", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f21_FieldInfo = 
{
	"Struct", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f22_FieldInfo = 
{
	"Interface", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f23_FieldInfo = 
{
	"SafeArray", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f24_FieldInfo = 
{
	"ByValArray", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f25_FieldInfo = 
{
	"SysInt", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f26_FieldInfo = 
{
	"SysUInt", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f27_FieldInfo = 
{
	"VBByRefStr", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f28_FieldInfo = 
{
	"AnsiBStr", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f29_FieldInfo = 
{
	"TBStr", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f30_FieldInfo = 
{
	"VariantBool", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f31_FieldInfo = 
{
	"FunctionPtr", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f32_FieldInfo = 
{
	"AsAny", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f33_FieldInfo = 
{
	"LPArray", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f34_FieldInfo = 
{
	"LPStruct", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f35_FieldInfo = 
{
	"CustomMarshaler", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t853_0_0_32854;
FieldInfo t853_f36_FieldInfo = 
{
	"Error", &t853_0_0_32854, &t853_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t853_FIs[] =
{
	&t853_f1_FieldInfo,
	&t853_f2_FieldInfo,
	&t853_f3_FieldInfo,
	&t853_f4_FieldInfo,
	&t853_f5_FieldInfo,
	&t853_f6_FieldInfo,
	&t853_f7_FieldInfo,
	&t853_f8_FieldInfo,
	&t853_f9_FieldInfo,
	&t853_f10_FieldInfo,
	&t853_f11_FieldInfo,
	&t853_f12_FieldInfo,
	&t853_f13_FieldInfo,
	&t853_f14_FieldInfo,
	&t853_f15_FieldInfo,
	&t853_f16_FieldInfo,
	&t853_f17_FieldInfo,
	&t853_f18_FieldInfo,
	&t853_f19_FieldInfo,
	&t853_f20_FieldInfo,
	&t853_f21_FieldInfo,
	&t853_f22_FieldInfo,
	&t853_f23_FieldInfo,
	&t853_f24_FieldInfo,
	&t853_f25_FieldInfo,
	&t853_f26_FieldInfo,
	&t853_f27_FieldInfo,
	&t853_f28_FieldInfo,
	&t853_f29_FieldInfo,
	&t853_f30_FieldInfo,
	&t853_f31_FieldInfo,
	&t853_f32_FieldInfo,
	&t853_f33_FieldInfo,
	&t853_f34_FieldInfo,
	&t853_f35_FieldInfo,
	&t853_f36_FieldInfo,
	NULL
};
static const int32_t t853_f2_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f2_DefaultValue = 
{
	&t853_f2_FieldInfo, { (char*)&t853_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f3_DefaultValueData = 3;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f3_DefaultValue = 
{
	&t853_f3_FieldInfo, { (char*)&t853_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f4_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f4_DefaultValue = 
{
	&t853_f4_FieldInfo, { (char*)&t853_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f5_DefaultValueData = 5;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f5_DefaultValue = 
{
	&t853_f5_FieldInfo, { (char*)&t853_f5_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f6_DefaultValueData = 6;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f6_DefaultValue = 
{
	&t853_f6_FieldInfo, { (char*)&t853_f6_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f7_DefaultValueData = 7;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f7_DefaultValue = 
{
	&t853_f7_FieldInfo, { (char*)&t853_f7_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f8_DefaultValueData = 8;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f8_DefaultValue = 
{
	&t853_f8_FieldInfo, { (char*)&t853_f8_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f9_DefaultValueData = 9;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f9_DefaultValue = 
{
	&t853_f9_FieldInfo, { (char*)&t853_f9_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f10_DefaultValueData = 10;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f10_DefaultValue = 
{
	&t853_f10_FieldInfo, { (char*)&t853_f10_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f11_DefaultValueData = 11;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f11_DefaultValue = 
{
	&t853_f11_FieldInfo, { (char*)&t853_f11_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f12_DefaultValueData = 12;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f12_DefaultValue = 
{
	&t853_f12_FieldInfo, { (char*)&t853_f12_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f13_DefaultValueData = 15;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f13_DefaultValue = 
{
	&t853_f13_FieldInfo, { (char*)&t853_f13_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f14_DefaultValueData = 19;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f14_DefaultValue = 
{
	&t853_f14_FieldInfo, { (char*)&t853_f14_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f15_DefaultValueData = 20;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f15_DefaultValue = 
{
	&t853_f15_FieldInfo, { (char*)&t853_f15_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f16_DefaultValueData = 21;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f16_DefaultValue = 
{
	&t853_f16_FieldInfo, { (char*)&t853_f16_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f17_DefaultValueData = 22;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f17_DefaultValue = 
{
	&t853_f17_FieldInfo, { (char*)&t853_f17_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f18_DefaultValueData = 23;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f18_DefaultValue = 
{
	&t853_f18_FieldInfo, { (char*)&t853_f18_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f19_DefaultValueData = 25;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f19_DefaultValue = 
{
	&t853_f19_FieldInfo, { (char*)&t853_f19_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f20_DefaultValueData = 26;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f20_DefaultValue = 
{
	&t853_f20_FieldInfo, { (char*)&t853_f20_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f21_DefaultValueData = 27;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f21_DefaultValue = 
{
	&t853_f21_FieldInfo, { (char*)&t853_f21_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f22_DefaultValueData = 28;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f22_DefaultValue = 
{
	&t853_f22_FieldInfo, { (char*)&t853_f22_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f23_DefaultValueData = 29;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f23_DefaultValue = 
{
	&t853_f23_FieldInfo, { (char*)&t853_f23_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f24_DefaultValueData = 30;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f24_DefaultValue = 
{
	&t853_f24_FieldInfo, { (char*)&t853_f24_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f25_DefaultValueData = 31;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f25_DefaultValue = 
{
	&t853_f25_FieldInfo, { (char*)&t853_f25_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f26_DefaultValueData = 32;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f26_DefaultValue = 
{
	&t853_f26_FieldInfo, { (char*)&t853_f26_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f27_DefaultValueData = 34;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f27_DefaultValue = 
{
	&t853_f27_FieldInfo, { (char*)&t853_f27_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f28_DefaultValueData = 35;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f28_DefaultValue = 
{
	&t853_f28_FieldInfo, { (char*)&t853_f28_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f29_DefaultValueData = 36;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f29_DefaultValue = 
{
	&t853_f29_FieldInfo, { (char*)&t853_f29_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f30_DefaultValueData = 37;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f30_DefaultValue = 
{
	&t853_f30_FieldInfo, { (char*)&t853_f30_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f31_DefaultValueData = 38;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f31_DefaultValue = 
{
	&t853_f31_FieldInfo, { (char*)&t853_f31_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f32_DefaultValueData = 40;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f32_DefaultValue = 
{
	&t853_f32_FieldInfo, { (char*)&t853_f32_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f33_DefaultValueData = 42;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f33_DefaultValue = 
{
	&t853_f33_FieldInfo, { (char*)&t853_f33_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f34_DefaultValueData = 43;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f34_DefaultValue = 
{
	&t853_f34_FieldInfo, { (char*)&t853_f34_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f35_DefaultValueData = 44;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f35_DefaultValue = 
{
	&t853_f35_FieldInfo, { (char*)&t853_f35_DefaultValueData, &t134_0_0_0 }};
static const int32_t t853_f36_DefaultValueData = 45;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t853_f36_DefaultValue = 
{
	&t853_f36_FieldInfo, { (char*)&t853_f36_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t853_FDVs[] = 
{
	&t853_f2_DefaultValue,
	&t853_f3_DefaultValue,
	&t853_f4_DefaultValue,
	&t853_f5_DefaultValue,
	&t853_f6_DefaultValue,
	&t853_f7_DefaultValue,
	&t853_f8_DefaultValue,
	&t853_f9_DefaultValue,
	&t853_f10_DefaultValue,
	&t853_f11_DefaultValue,
	&t853_f12_DefaultValue,
	&t853_f13_DefaultValue,
	&t853_f14_DefaultValue,
	&t853_f15_DefaultValue,
	&t853_f16_DefaultValue,
	&t853_f17_DefaultValue,
	&t853_f18_DefaultValue,
	&t853_f19_DefaultValue,
	&t853_f20_DefaultValue,
	&t853_f21_DefaultValue,
	&t853_f22_DefaultValue,
	&t853_f23_DefaultValue,
	&t853_f24_DefaultValue,
	&t853_f25_DefaultValue,
	&t853_f26_DefaultValue,
	&t853_f27_DefaultValue,
	&t853_f28_DefaultValue,
	&t853_f29_DefaultValue,
	&t853_f30_DefaultValue,
	&t853_f31_DefaultValue,
	&t853_f32_DefaultValue,
	&t853_f33_DefaultValue,
	&t853_f34_DefaultValue,
	&t853_f35_DefaultValue,
	&t853_f36_DefaultValue,
	NULL
};
static MethodInfo* t853_MIs[] =
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
static MethodInfo* t853_VT[] =
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
static Il2CppInterfaceOffsetPair t853_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t853_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t853__CustomAttributeCache = {
1,
NULL,
&t853_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t853_0_0_0;
extern Il2CppType t853_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t853__CustomAttributeCache;
TypeInfo t853_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UnmanagedType", "System.Runtime.InteropServices", t853_MIs, NULL, t853_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t853_VT, &t853__CustomAttributeCache, &t134_TI, &t853_0_0_0, &t853_1_0_0, t853_IOs, NULL, NULL, t853_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t853)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 36, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1633_TI;



// Metadata Definition System.Runtime.InteropServices._Activator
static MethodInfo* t1633_MIs[] =
{
	NULL
};
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t1340_TI;
#include "t1340.h"
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t540_TI;
#include "t540.h"
#include "t540MD.h"
extern MethodInfo m2527_MI;
void t1633_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1340_TI)), &m5890_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("03973551-57A1-3900-A2B5-9083E3FF2943"), &m2527_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1633__CustomAttributeCache = {
5,
NULL,
&t1633_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1633_0_0_0;
extern Il2CppType t1633_1_0_0;
struct t1633;
extern TypeInfo t1633_TI;
extern CustomAttributesCache t1633__CustomAttributeCache;
TypeInfo t1633_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_Activator", "System.Runtime.InteropServices", t1633_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1633_TI, NULL, NULL, &t1633__CustomAttributeCache, &t1633_TI, &t1633_0_0_0, &t1633_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1610_TI;



// Metadata Definition System.Runtime.InteropServices._Assembly
static MethodInfo* t1610_MIs[] =
{
	NULL
};
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t836_TI;
#include "t836.h"
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1610_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("17156360-2F1A-384A-BC52-FDE93C215C5B"), &m2527_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 0, &m5876_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t836_TI)), &m5890_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1610__CustomAttributeCache = {
5,
NULL,
&t1610_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1610_0_0_0;
extern Il2CppType t1610_1_0_0;
struct t1610;
extern TypeInfo t1610_TI;
extern CustomAttributesCache t1610__CustomAttributeCache;
TypeInfo t1610_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_Assembly", "System.Runtime.InteropServices", t1610_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1610_TI, NULL, NULL, &t1610__CustomAttributeCache, &t1610_TI, &t1610_0_0_0, &t1610_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1609_TI;



// Metadata Definition System.Runtime.InteropServices._AssemblyBuilder
static MethodInfo* t1609_MIs[] =
{
	NULL
};
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t1039_TI;
#include "t1039.h"
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1609_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("BEBB2505-8B54-3443-AEAD-142A16DD9CC7"), &m2527_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1039_TI)), &m5890_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1609__CustomAttributeCache = {
5,
NULL,
&t1609_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1609_0_0_0;
extern Il2CppType t1609_1_0_0;
struct t1609;
extern TypeInfo t1609_TI;
extern CustomAttributesCache t1609__CustomAttributeCache;
TypeInfo t1609_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_AssemblyBuilder", "System.Runtime.InteropServices", t1609_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1609_TI, NULL, NULL, &t1609__CustomAttributeCache, &t1609_TI, &t1609_0_0_0, &t1609_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1624_TI;



// Metadata Definition System.Runtime.InteropServices._AssemblyName
static MethodInfo* t1624_MIs[] =
{
	NULL
};
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t1043_TI;
#include "t1043.h"
void t1624_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("B42B6AAC-317E-34D5-9FA9-093BB4160C50"), &m2527_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1043_TI)), &m5890_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1624__CustomAttributeCache = {
5,
NULL,
&t1624_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1624_0_0_0;
extern Il2CppType t1624_1_0_0;
struct t1624;
extern TypeInfo t1624_TI;
extern CustomAttributesCache t1624__CustomAttributeCache;
TypeInfo t1624_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_AssemblyName", "System.Runtime.InteropServices", t1624_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1624_TI, NULL, NULL, &t1624__CustomAttributeCache, &t1624_TI, &t1624_0_0_0, &t1624_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1611_TI;



// Metadata Definition System.Runtime.InteropServices._ConstructorBuilder
static MethodInfo* t1611_MIs[] =
{
	NULL
};
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t1044_TI;
#include "t1044.h"
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
void t1611_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1044_TI)), &m5890_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("ED3E4384-D7E2-3FA7-8FFD-8940D330519A"), &m2527_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1611__CustomAttributeCache = {
5,
NULL,
&t1611_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1611_0_0_0;
extern Il2CppType t1611_1_0_0;
struct t1611;
extern TypeInfo t1611_TI;
extern CustomAttributesCache t1611__CustomAttributeCache;
TypeInfo t1611_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_ConstructorBuilder", "System.Runtime.InteropServices", t1611_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1611_TI, NULL, NULL, &t1611__CustomAttributeCache, &t1611_TI, &t1611_0_0_0, &t1611_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1612_TI;



// Metadata Definition System.Runtime.InteropServices._ConstructorInfo
static MethodInfo* t1612_MIs[] =
{
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t754_TI;
#include "t754.h"
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
void t1612_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("E9A19478-9646-3679-9B10-8411AE1FD57D"), &m2527_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t754_TI)), &m5890_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1612__CustomAttributeCache = {
5,
NULL,
&t1612_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1612_0_0_0;
extern Il2CppType t1612_1_0_0;
struct t1612;
extern TypeInfo t1612_TI;
extern CustomAttributesCache t1612__CustomAttributeCache;
TypeInfo t1612_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_ConstructorInfo", "System.Runtime.InteropServices", t1612_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1612_TI, NULL, NULL, &t1612__CustomAttributeCache, &t1612_TI, &t1612_0_0_0, &t1612_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1614_TI;



// Metadata Definition System.Runtime.InteropServices._EnumBuilder
static MethodInfo* t1614_MIs[] =
{
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t1050_TI;
#include "t1050.h"
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
void t1614_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1050_TI)), &m5890_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("C7BD73DE-9F85-3290-88EE-090B8BDFE2DF"), &m2527_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1614__CustomAttributeCache = {
5,
NULL,
&t1614_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1614_0_0_0;
extern Il2CppType t1614_1_0_0;
struct t1614;
extern TypeInfo t1614_TI;
extern CustomAttributesCache t1614__CustomAttributeCache;
TypeInfo t1614_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_EnumBuilder", "System.Runtime.InteropServices", t1614_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1614_TI, NULL, NULL, &t1614__CustomAttributeCache, &t1614_TI, &t1614_0_0_0, &t1614_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1626_TI;



// Metadata Definition System.Runtime.InteropServices._EventInfo
static MethodInfo* t1626_MIs[] =
{
	NULL
};
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t838_TI;
#include "t838.h"
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1626_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("9DE59C64-D889-35A1-B897-587D74469E5B"), &m2527_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t838_TI)), &m5890_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1626__CustomAttributeCache = {
5,
NULL,
&t1626_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1626_0_0_0;
extern Il2CppType t1626_1_0_0;
struct t1626;
extern TypeInfo t1626_TI;
extern CustomAttributesCache t1626__CustomAttributeCache;
TypeInfo t1626_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_EventInfo", "System.Runtime.InteropServices", t1626_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1626_TI, NULL, NULL, &t1626__CustomAttributeCache, &t1626_TI, &t1626_0_0_0, &t1626_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1615_TI;



// Metadata Definition System.Runtime.InteropServices._FieldBuilder
static MethodInfo* t1615_MIs[] =
{
	NULL
};
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t1051_TI;
#include "t1051.h"
void t1615_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("CE1A3BF5-975E-30CC-97C9-1EF70F8F3993"), &m2527_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1051_TI)), &m5890_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1615__CustomAttributeCache = {
5,
NULL,
&t1615_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1615_0_0_0;
extern Il2CppType t1615_1_0_0;
struct t1615;
extern TypeInfo t1615_TI;
extern CustomAttributesCache t1615__CustomAttributeCache;
TypeInfo t1615_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_FieldBuilder", "System.Runtime.InteropServices", t1615_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1615_TI, NULL, NULL, &t1615__CustomAttributeCache, &t1615_TI, &t1615_0_0_0, &t1615_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1616_TI;



// Metadata Definition System.Runtime.InteropServices._FieldInfo
static MethodInfo* t1616_MIs[] =
{
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t839_TI;
#include "t839.h"
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
void t1616_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("8A7C1442-A9FB-366B-80D8-4939FFA6DBE0"), &m2527_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t839_TI)), &m5890_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1616__CustomAttributeCache = {
5,
NULL,
&t1616_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1616_0_0_0;
extern Il2CppType t1616_1_0_0;
struct t1616;
extern TypeInfo t1616_TI;
extern CustomAttributesCache t1616__CustomAttributeCache;
TypeInfo t1616_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_FieldInfo", "System.Runtime.InteropServices", t1616_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1616_TI, NULL, NULL, &t1616__CustomAttributeCache, &t1616_TI, &t1616_0_0_0, &t1616_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1613_TI;



// Metadata Definition System.Runtime.InteropServices._MethodBase
static MethodInfo* t1613_MIs[] =
{
	NULL
};
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t731_TI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
void t1613_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t731_TI)), &m5890_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("6240837A-707F-3181-8E98-A36AE086766B"), &m2527_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1613__CustomAttributeCache = {
5,
NULL,
&t1613_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1613_0_0_0;
extern Il2CppType t1613_1_0_0;
struct t1613;
extern TypeInfo t1613_TI;
extern CustomAttributesCache t1613__CustomAttributeCache;
TypeInfo t1613_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_MethodBase", "System.Runtime.InteropServices", t1613_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1613_TI, NULL, NULL, &t1613__CustomAttributeCache, &t1613_TI, &t1613_0_0_0, &t1613_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1617_TI;



// Metadata Definition System.Runtime.InteropServices._MethodBuilder
static MethodInfo* t1617_MIs[] =
{
	NULL
};
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t1055_TI;
#include "t1055.h"
void t1617_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("007D8A14-FDF3-363E-9A0B-FEC0618260A2"), &m2527_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1055_TI)), &m5890_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1617__CustomAttributeCache = {
5,
NULL,
&t1617_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1617_0_0_0;
extern Il2CppType t1617_1_0_0;
struct t1617;
extern TypeInfo t1617_TI;
extern CustomAttributesCache t1617__CustomAttributeCache;
TypeInfo t1617_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_MethodBuilder", "System.Runtime.InteropServices", t1617_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1617_TI, NULL, NULL, &t1617__CustomAttributeCache, &t1617_TI, &t1617_0_0_0, &t1617_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1618_TI;



// Metadata Definition System.Runtime.InteropServices._MethodInfo
static MethodInfo* t1618_MIs[] =
{
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t657_TI;
void t1618_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("FFCC1B5D-ECB8-38DD-9B01-3DC8ABC2AA5F"), &m2527_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t657_TI)), &m5890_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1618__CustomAttributeCache = {
5,
NULL,
&t1618_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1618_0_0_0;
extern Il2CppType t1618_1_0_0;
struct t1618;
extern TypeInfo t1618_TI;
extern CustomAttributesCache t1618__CustomAttributeCache;
TypeInfo t1618_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_MethodInfo", "System.Runtime.InteropServices", t1618_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1618_TI, NULL, NULL, &t1618__CustomAttributeCache, &t1618_TI, &t1618_0_0_0, &t1618_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1620_TI;



// Metadata Definition System.Runtime.InteropServices._Module
static MethodInfo* t1620_MIs[] =
{
	NULL
};
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t837_TI;
#include "t837.h"
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
void t1620_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t837_TI)), &m5890_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("D002E9BA-D9E3-3749-B1D3-D565A08B13E7"), &m2527_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1620__CustomAttributeCache = {
5,
NULL,
&t1620_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1620_0_0_0;
extern Il2CppType t1620_1_0_0;
struct t1620;
extern TypeInfo t1620_TI;
extern CustomAttributesCache t1620__CustomAttributeCache;
TypeInfo t1620_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_Module", "System.Runtime.InteropServices", t1620_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1620_TI, NULL, NULL, &t1620__CustomAttributeCache, &t1620_TI, &t1620_0_0_0, &t1620_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1619_TI;



// Metadata Definition System.Runtime.InteropServices._ModuleBuilder
static MethodInfo* t1619_MIs[] =
{
	NULL
};
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t1041_TI;
#include "t1041.h"
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
void t1619_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1041_TI)), &m5890_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("D05FFA9A-04AF-3519-8EE1-8D93AD73430B"), &m2527_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1619__CustomAttributeCache = {
5,
NULL,
&t1619_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1619_0_0_0;
extern Il2CppType t1619_1_0_0;
struct t1619;
extern TypeInfo t1619_TI;
extern CustomAttributesCache t1619__CustomAttributeCache;
TypeInfo t1619_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_ModuleBuilder", "System.Runtime.InteropServices", t1619_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1619_TI, NULL, NULL, &t1619__CustomAttributeCache, &t1619_TI, &t1619_0_0_0, &t1619_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1621_TI;



// Metadata Definition System.Runtime.InteropServices._ParameterBuilder
static MethodInfo* t1621_MIs[] =
{
	NULL
};
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t1047_TI;
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1621_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1047_TI)), &m5890_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("36329EBA-F97A-3565-BC07-0ED5C6EF19FC"), &m2527_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1621__CustomAttributeCache = {
5,
NULL,
&t1621_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1621_0_0_0;
extern Il2CppType t1621_1_0_0;
struct t1621;
extern TypeInfo t1621_TI;
extern CustomAttributesCache t1621__CustomAttributeCache;
TypeInfo t1621_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_ParameterBuilder", "System.Runtime.InteropServices", t1621_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1621_TI, NULL, NULL, &t1621__CustomAttributeCache, &t1621_TI, &t1621_0_0_0, &t1621_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1632_TI;



// Metadata Definition System.Runtime.InteropServices._ParameterInfo
static MethodInfo* t1632_MIs[] =
{
	NULL
};
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t732_TI;
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1632_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t732_TI)), &m5890_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("993634C4-E47A-32CC-BE08-85F567DC27D6"), &m2527_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1632__CustomAttributeCache = {
5,
NULL,
&t1632_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1632_0_0_0;
extern Il2CppType t1632_1_0_0;
struct t1632;
extern TypeInfo t1632_TI;
extern CustomAttributesCache t1632__CustomAttributeCache;
TypeInfo t1632_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_ParameterInfo", "System.Runtime.InteropServices", t1632_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1632_TI, NULL, NULL, &t1632__CustomAttributeCache, &t1632_TI, &t1632_0_0_0, &t1632_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1631_TI;



// Metadata Definition System.Runtime.InteropServices._PropertyInfo
static MethodInfo* t1631_MIs[] =
{
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t841_TI;
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
void t1631_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t841_TI)), &m5890_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("F59ED4E4-E68F-3218-BD77-061AA82824BF"), &m2527_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1631__CustomAttributeCache = {
5,
NULL,
&t1631_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1631_0_0_0;
extern Il2CppType t1631_1_0_0;
struct t1631;
extern TypeInfo t1631_TI;
extern CustomAttributesCache t1631__CustomAttributeCache;
TypeInfo t1631_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_PropertyInfo", "System.Runtime.InteropServices", t1631_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1631_TI, NULL, NULL, &t1631__CustomAttributeCache, &t1631_TI, &t1631_0_0_0, &t1631_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1634_TI;



// Metadata Definition System.Runtime.InteropServices._Thread
static MethodInfo* t1634_MIs[] =
{
	NULL
};
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t1332_TI;
#include "t1332.h"
void t1634_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("C281C7F1-4AA9-3517-961A-463CFED57E75"), &m2527_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1332_TI)), &m5890_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1634__CustomAttributeCache = {
5,
NULL,
&t1634_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1634_0_0_0;
extern Il2CppType t1634_1_0_0;
struct t1634;
extern TypeInfo t1634_TI;
extern CustomAttributesCache t1634__CustomAttributeCache;
TypeInfo t1634_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_Thread", "System.Runtime.InteropServices", t1634_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1634_TI, NULL, NULL, &t1634__CustomAttributeCache, &t1634_TI, &t1634_0_0_0, &t1634_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1622_TI;



// Metadata Definition System.Runtime.InteropServices._TypeBuilder
static MethodInfo* t1622_MIs[] =
{
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t1116_TI;
extern MethodInfo m5890_MI;
extern TypeInfo t1045_TI;
#include "t1045.h"
extern TypeInfo t540_TI;
extern MethodInfo m2527_MI;
extern TypeInfo t1113_TI;
extern MethodInfo m5876_MI;
void t1622_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1116 * tmp;
		tmp = (t1116 *)il2cpp_codegen_object_new (&t1116_TI);
		m5890(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1045_TI)), &m5890_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("7E5678EE-48B3-3F83-B076-C58543498A58"), &m2527_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1113 * tmp;
		tmp = (t1113 *)il2cpp_codegen_object_new (&t1113_TI);
		m5876(tmp, 1, &m5876_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1622__CustomAttributeCache = {
5,
NULL,
&t1622_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1622_0_0_0;
extern Il2CppType t1622_1_0_0;
struct t1622;
extern TypeInfo t1622_TI;
extern CustomAttributesCache t1622__CustomAttributeCache;
TypeInfo t1622_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_TypeBuilder", "System.Runtime.InteropServices", t1622_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1622_TI, NULL, NULL, &t1622__CustomAttributeCache, &t1622_TI, &t1622_0_0_0, &t1622_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t1118.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1118_TI;
#include "t1118MD.h"

#include "t1122.h"
#include "t1174.h"
#include "t1183.h"
#include "t1125.h"
#include "t1120.h"
#include "t931.h"
#include "t1128.h"
#include "t1121.h"
#include "t1123.h"
#include "t1130.h"
extern TypeInfo t1118_TI;
extern TypeInfo t1122_TI;
extern TypeInfo t1635_TI;
extern TypeInfo t1183_TI;
extern TypeInfo t1125_TI;
extern TypeInfo t1182_TI;
extern TypeInfo t1184_TI;
extern TypeInfo t131_TI;
extern TypeInfo t125_TI;
extern TypeInfo t1120_TI;
extern TypeInfo t1121_TI;
extern TypeInfo t123_TI;
extern TypeInfo t1119_TI;
extern TypeInfo t1123_TI;
extern TypeInfo t931_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1130_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1332_TI;
extern TypeInfo t78_TI;
extern TypeInfo t25_TI;
extern TypeInfo t1128_TI;
extern TypeInfo t1127_TI;
extern TypeInfo t167_TI;
extern TypeInfo t438_TI;
extern TypeInfo t158_TI;
extern TypeInfo t134_TI;
#include "t1122MD.h"
#include "t1183MD.h"
#include "t1125MD.h"
#include "t807MD.h"
#include "t1182MD.h"
#include "t1184MD.h"
#include "t1120MD.h"
#include "t1121MD.h"
#include "t1123MD.h"
#include "t931MD.h"
#include "t1130MD.h"
#include "t1332MD.h"
extern MethodInfo m5897_MI;
extern MethodInfo m6114_MI;
extern MethodInfo m5899_MI;
extern MethodInfo m3608_MI;
extern MethodInfo m6112_MI;
extern MethodInfo m6126_MI;
extern MethodInfo m4329_MI;
extern MethodInfo m6127_MI;
extern MethodInfo m5950_MI;
extern MethodInfo m5892_MI;
extern MethodInfo m5896_MI;
extern MethodInfo m5957_MI;
extern MethodInfo m5953_MI;
extern MethodInfo m5898_MI;
extern MethodInfo m4830_MI;
extern MethodInfo m4856_MI;
extern MethodInfo m386_MI;
extern MethodInfo m6930_MI;
extern MethodInfo m4855_MI;
extern MethodInfo m504_MI;
extern MethodInfo m8284_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m7966_MI;
extern MethodInfo m4842_MI;
extern MethodInfo m4858_MI;
extern MethodInfo m5959_MI;
extern MethodInfo m8285_MI;
extern MethodInfo m2234_MI;


extern MethodInfo m5892_MI;
 t25 * m5892 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5892_MI);
	{
		if ((((t1118_SFs*)InitializedTypeInfo(&t1118_TI)->static_fields)->f0))
		{
			goto IL_0011;
		}
	}
	{
		t1122 * L_0 = (t1122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1122_TI));
		m5897(L_0, &m5897_MI);
		((t1118_SFs*)InitializedTypeInfo(&t1118_TI)->static_fields)->f0 = L_0;
	}

IL_0011:
	{
		return (((t1118_SFs*)InitializedTypeInfo(&t1118_TI)->static_fields)->f0);
	}
}
extern MethodInfo m5893_MI;
 t25 * m5893 (t25 * __this, t131 * p0, t158* p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5893_MI);
	t27* V_0 = {0};
	t25 * V_1 = {0};
	t158* V_2 = {0};
	int32_t V_3 = 0;
	t1174 * V_4 = {0};
	{
		V_0 = (t27*)NULL;
		V_2 = p1;
		V_3 = 0;
		goto IL_0037;
	}

IL_0008:
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_3);
		V_1 = (*(t25 **)(t25 **)SZArrayLdElema(V_2, V_3));
		if (((t25 *)IsInst(V_1, InitializedTypeInfo(&t1635_TI))))
		{
			goto IL_001f;
		}
	}
	{
		t1183 * L_0 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m6114(L_0, (t27*) &_stringLiteral948, &m6114_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_001f:
	{
		if (!((t1125 *)IsInst(V_1, InitializedTypeInfo(&t1125_TI))))
		{
			goto IL_0033;
		}
	}
	{
		NullCheck(((t1125 *)Castclass(V_1, InitializedTypeInfo(&t1125_TI))));
		t27* L_1 = m5899(((t1125 *)Castclass(V_1, InitializedTypeInfo(&t1125_TI))), &m5899_MI);
		V_0 = L_1;
	}

IL_0033:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_0037:
	{
		NullCheck(V_2);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t122 *)V_2)->max_length))))))
		{
			goto IL_0008;
		}
	}
	{
		if (!V_0)
		{
			goto IL_004e;
		}
	}
	{
		t25 * L_2 = m3608(NULL, p0, V_0, p1, (t27*) &_stringLiteral949, &m3608_MI);
		return L_2;
	}

IL_004e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1182_TI));
		t1174 * L_3 = m6112(NULL, p0, &m6112_MI);
		V_4 = L_3;
		if (!V_4)
		{
			goto IL_0063;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t25 * L_4 = m6126(NULL, V_4, p1, &m6126_MI);
		return L_4;
	}

IL_0063:
	{
		NullCheck(p0);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4329_MI, p0);
		if (!L_5)
		{
			goto IL_0073;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t25 * L_6 = m6127(NULL, p0, p1, &m6127_MI);
		return L_6;
	}

IL_0073:
	{
		return NULL;
	}
}
extern MethodInfo m5894_MI;
 t1120 * m5894 (t25 * __this, t131 * p0, t27* p1, t158* p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5894_MI);
	t1120 * V_0 = {0};
	t25 * V_1 = {0};
	t931 * V_2 = {0};
	bool V_3 = false;
	t1128 * V_4 = {0};
	t25 * V_5 = {0};
	t25 * V_6 = {0};
	t158* V_7 = {0};
	t25 * V_8 = {0};
	t158* V_9 = {0};
	int32_t V_10 = 0;
	t25 * V_11 = {0};
	t25 * V_12 = {0};
	t25 * V_13 = {0};
	t25 * V_14 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t G_B19_0 = 0;
	{
		t1120 * L_0 = (t1120 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1120_TI));
		m5950(L_0, p0, &m5950_MI);
		V_0 = L_0;
		NullCheck(p0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4329_MI, p0);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		t25 * L_2 = m5892(NULL, &m5892_MI);
		t1121 * L_3 = (t1121 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1121_TI));
		m5896(L_3, p1, L_2, &m5896_MI);
		NullCheck(V_0);
		VirtActionInvoker1< t25 * >::Invoke(&m5957_MI, V_0, L_3);
		NullCheck(V_0);
		m5953(V_0, 0, &m5953_MI);
		return V_0;
	}

IL_0029:
	{
		t25 * L_4 = m5892(NULL, &m5892_MI);
		V_1 = L_4;
		t1123 * L_5 = (t1123 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1123_TI));
		m5898(L_5, V_1, &m5898_MI);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t931_TI));
		t931 * L_6 = (t931 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t931_TI));
		m4830(L_6, &m4830_MI);
		V_2 = L_6;
		if (!p2)
		{
			goto IL_0046;
		}
	}
	{
		NullCheck(V_2);
		VirtActionInvoker1< t25 * >::Invoke(&m4856_MI, V_2, (t25 *)(t25 *)p2);
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1130_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_7 = m386(NULL, p1, (((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f3), &m386_MI);
		V_3 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1332_TI));
		t1128 * L_8 = m6930(NULL, &m6930_MI);
		V_4 = L_8;
		if (!V_3)
		{
			goto IL_00a5;
		}
	}
	{
		NullCheck(V_2);
		t25 * L_9 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4855_MI, V_2);
		V_6 = L_9;
	}

IL_0064:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0084;
		}

IL_0066:
		{
			NullCheck(V_6);
			t25 * L_10 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m504_MI, V_6);
			V_5 = ((t25 *)Castclass(L_10, InitializedTypeInfo(&t1635_TI)));
			NullCheck(V_5);
			bool L_11 = (bool)InterfaceFuncInvoker2< bool, t1128 *, t25 * >::Invoke(&m8284_MI, V_5, V_4, V_0);
			if (L_11)
			{
				goto IL_0084;
			}
		}

IL_0080:
		{
			V_3 = 0;
			goto IL_008d;
		}

IL_0084:
		{
			NullCheck(V_6);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m506_MI, V_6);
			if (L_12)
			{
				goto IL_0066;
			}
		}

IL_008d:
		{
			// IL_008d: leave.s IL_00a5
			leaveInstructions[0] = 0xA5; // 1
			THROW_SENTINEL(IL_00a5);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_008f;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_008f;
	}

IL_008f:
	{ // begin finally (depth: 1)
		{
			V_13 = ((t25 *)IsInst(V_6, InitializedTypeInfo(&t167_TI)));
			if (V_13)
			{
				goto IL_009d;
			}
		}

IL_009c:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xA5:
					goto IL_00a5;
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

IL_009d:
		{
			NullCheck(V_13);
			InterfaceActionInvoker0::Invoke(&m507_MI, V_13);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xA5:
					goto IL_00a5;
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

IL_00a5:
	{
		NullCheck(p0);
		t158* L_13 = (t158*)VirtFuncInvoker1< t158*, bool >::Invoke(&m7966_MI, p0, 1);
		V_7 = L_13;
		V_9 = V_7;
		V_10 = 0;
		goto IL_00ec;
	}

IL_00b7:
	{
		NullCheck(V_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_9, V_10);
		V_8 = (*(t25 **)(t25 **)SZArrayLdElema(V_9, V_10));
		if (!((t25 *)IsInst(V_8, InitializedTypeInfo(&t1635_TI))))
		{
			goto IL_00e6;
		}
	}
	{
		if (!V_3)
		{
			goto IL_00db;
		}
	}
	{
		NullCheck(((t25 *)Castclass(V_8, InitializedTypeInfo(&t1635_TI))));
		bool L_14 = (bool)InterfaceFuncInvoker2< bool, t1128 *, t25 * >::Invoke(&m8284_MI, ((t25 *)Castclass(V_8, InitializedTypeInfo(&t1635_TI))), V_4, V_0);
		G_B19_0 = ((int32_t)(L_14));
		goto IL_00dc;
	}

IL_00db:
	{
		G_B19_0 = 0;
	}

IL_00dc:
	{
		V_3 = G_B19_0;
		NullCheck(V_2);
		VirtFuncInvoker1< int32_t, t25 * >::Invoke(&m4842_MI, V_2, V_8);
	}

IL_00e6:
	{
		V_10 = ((int32_t)(V_10+1));
	}

IL_00ec:
	{
		NullCheck(V_9);
		if ((((int32_t)V_10) < ((int32_t)(((int32_t)(((t122 *)V_9)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		if (V_3)
		{
			goto IL_0144;
		}
	}
	{
		NullCheck(V_2);
		t158* L_15 = (t158*)VirtFuncInvoker0< t158* >::Invoke(&m4858_MI, V_2);
		NullCheck(V_0);
		m5959(V_0, L_15, &m5959_MI);
		NullCheck(V_2);
		t25 * L_16 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4855_MI, V_2);
		V_12 = L_16;
	}

IL_010b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0123;
		}

IL_010d:
		{
			NullCheck(V_12);
			t25 * L_17 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m504_MI, V_12);
			V_11 = ((t25 *)Castclass(L_17, InitializedTypeInfo(&t1635_TI)));
			NullCheck(V_11);
			InterfaceActionInvoker1< t25 * >::Invoke(&m8285_MI, V_11, V_0);
		}

IL_0123:
		{
			NullCheck(V_12);
			bool L_18 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m506_MI, V_12);
			if (L_18)
			{
				goto IL_010d;
			}
		}

IL_012c:
		{
			// IL_012c: leave.s IL_0144
			leaveInstructions[0] = 0x144; // 1
			THROW_SENTINEL(IL_0144);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_012e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_012e;
	}

IL_012e:
	{ // begin finally (depth: 1)
		{
			V_14 = ((t25 *)IsInst(V_12, InitializedTypeInfo(&t167_TI)));
			if (V_14)
			{
				goto IL_013c;
			}
		}

IL_013b:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x144:
					goto IL_0144;
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

IL_013c:
		{
			NullCheck(V_14);
			InterfaceActionInvoker0::Invoke(&m507_MI, V_14);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x144:
					goto IL_0144;
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

IL_0144:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1130_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_19 = m2234(NULL, p1, (((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f3), &m2234_MI);
		if (!L_19)
		{
			goto IL_0159;
		}
	}
	{
		t1121 * L_20 = (t1121 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1121_TI));
		m5896(L_20, p1, V_1, &m5896_MI);
		V_1 = L_20;
	}

IL_0159:
	{
		NullCheck(V_0);
		VirtActionInvoker1< t25 * >::Invoke(&m5957_MI, V_0, V_1);
		NullCheck(V_0);
		m5953(V_0, V_3, &m5953_MI);
		return V_0;
	}
}
extern MethodInfo m5895_MI;
 t25 * m5895 (t25 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5895_MI);
	typedef t25 * (*m5895_ftn) (t131 *);
	static m5895_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m5895_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)");
	return _il2cpp_icall_func(p0);
}
// Metadata Definition System.Runtime.Remoting.Activation.ActivationServices
extern Il2CppType t1119_0_0_17;
FieldInfo t1118_f0_FieldInfo = 
{
	"_constructionActivator", &t1119_0_0_17, &t1118_TI, offsetof(t1118_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1118_FIs[] =
{
	&t1118_f0_FieldInfo,
	NULL
};
extern MethodInfo m5892_MI;
static PropertyInfo t1118____ConstructionActivator_PropertyInfo = 
{
	&t1118_TI, "ConstructionActivator", &m5892_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1118_PIs[] =
{
	&t1118____ConstructionActivator_PropertyInfo,
	NULL
};
extern TypeInfo t1118_TI;
extern Il2CppType t1119_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5892_MI = 
{
	"get_ConstructionActivator", (methodPointerType)&m5892, &t1118_TI, &t1119_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2193, 0, 255, 0, false, false, 2922, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t158_0_0_0;
static ParameterInfo t1118_m5893_ParameterInfos[] = 
{
	{"type", 0, 134221374, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"activationAttributes", 1, 134221375, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t1118_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5893_MI = 
{
	"CreateProxyFromAttributes", (methodPointerType)&m5893, &t1118_TI, &t25_0_0_0, RuntimeInvoker_t25_t25_t25, t1118_m5893_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2923, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t158_0_0_0;
static ParameterInfo t1118_m5894_ParameterInfos[] = 
{
	{"type", 0, 134221376, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"activationUrl", 1, 134221377, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"activationAttributes", 2, 134221378, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t1118_TI;
extern Il2CppType t1120_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5894_MI = 
{
	"CreateConstructionCall", (methodPointerType)&m5894, &t1118_TI, &t1120_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t1118_m5894_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 2924, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
static ParameterInfo t1118_m5895_ParameterInfos[] = 
{
	{"type", 0, 134221379, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1118_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5895_MI = 
{
	"AllocateUninitializedClassInstance", (methodPointerType)&m5895, &t1118_TI, &t25_0_0_0, RuntimeInvoker_t25_t25, t1118_m5895_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 1, false, false, 2925, NULL, (methodPointerType)NULL};
static MethodInfo* t1118_MIs[] =
{
	&m5892_MI,
	&m5893_MI,
	&m5894_MI,
	&m5895_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1118_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1118_0_0_0;
extern Il2CppType t1118_1_0_0;
extern TypeInfo t25_TI;
struct t1118;
extern TypeInfo t1118_TI;
TypeInfo t1118_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ActivationServices", "System.Runtime.Remoting.Activation", t1118_MIs, t1118_PIs, t1118_FIs, NULL, &t25_TI, NULL, NULL, &t1118_TI, NULL, t1118_VT, &EmptyCustomAttributesCache, &t1118_TI, &t1118_0_0_0, &t1118_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1118), 0, -1, sizeof(t1118_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 1, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1121_TI;

extern TypeInfo t1121_TI;
extern MethodInfo m452_MI;


extern MethodInfo m5896_MI;
 void m5896 (t1121 * __this, t27* p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5896_MI);
	{
		m452(__this, &m452_MI);
		__this->f0 = p0;
		__this->f1 = p1;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Activation.AppDomainLevelActivator
extern Il2CppType t27_0_0_1;
FieldInfo t1121_f0_FieldInfo = 
{
	"_activationUrl", &t27_0_0_1, &t1121_TI, offsetof(t1121, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1119_0_0_1;
FieldInfo t1121_f1_FieldInfo = 
{
	"_next", &t1119_0_0_1, &t1121_TI, offsetof(t1121, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1121_FIs[] =
{
	&t1121_f0_FieldInfo,
	&t1121_f1_FieldInfo,
	NULL
};
extern Il2CppType t27_0_0_0;
extern Il2CppType t1119_0_0_0;
static ParameterInfo t1121_m5896_ParameterInfos[] = 
{
	{"activationUrl", 0, 134221380, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"next", 1, 134221381, &EmptyCustomAttributesCache, &t1119_0_0_0},
};
extern TypeInfo t1121_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5896_MI = 
{
	".ctor", (methodPointerType)&m5896, &t1121_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1121_m5896_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2926, NULL, (methodPointerType)NULL};
static MethodInfo* t1121_MIs[] =
{
	&m5896_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1121_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t1119_TI;
static TypeInfo* t1121_ITIs[] = 
{
	&t1119_TI,
};
extern TypeInfo t1119_TI;
static Il2CppInterfaceOffsetPair t1121_IOs[] = 
{
	{ &t1119_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1121_0_0_0;
extern Il2CppType t1121_1_0_0;
extern TypeInfo t25_TI;
struct t1121;
extern TypeInfo t1121_TI;
TypeInfo t1121_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AppDomainLevelActivator", "System.Runtime.Remoting.Activation", t1121_MIs, NULL, t1121_FIs, NULL, &t25_TI, NULL, NULL, &t1121_TI, t1121_ITIs, t1121_VT, &EmptyCustomAttributesCache, &t1121_TI, &t1121_0_0_0, &t1121_1_0_0, t1121_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1121), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 0, 4, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1122_TI;

extern MethodInfo m452_MI;


extern MethodInfo m5897_MI;
 void m5897 (t1122 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5897_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Activation.ConstructionLevelActivator
extern TypeInfo t1122_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5897_MI = 
{
	".ctor", (methodPointerType)&m5897, &t1122_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2927, NULL, (methodPointerType)NULL};
static MethodInfo* t1122_MIs[] =
{
	&m5897_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1122_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t1119_TI;
static TypeInfo* t1122_ITIs[] = 
{
	&t1119_TI,
};
extern TypeInfo t1119_TI;
static Il2CppInterfaceOffsetPair t1122_IOs[] = 
{
	{ &t1119_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1122_0_0_0;
extern Il2CppType t1122_1_0_0;
extern TypeInfo t25_TI;
struct t1122;
extern TypeInfo t1122_TI;
TypeInfo t1122_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ConstructionLevelActivator", "System.Runtime.Remoting.Activation", t1122_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t1122_TI, t1122_ITIs, t1122_VT, &EmptyCustomAttributesCache, &t1122_TI, &t1122_0_0_0, &t1122_1_0_0, t1122_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1122), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1123_TI;

extern TypeInfo t1123_TI;
extern MethodInfo m452_MI;


extern MethodInfo m5898_MI;
 void m5898 (t1123 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5898_MI);
	{
		m452(__this, &m452_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Activation.ContextLevelActivator
extern Il2CppType t1119_0_0_1;
FieldInfo t1123_f0_FieldInfo = 
{
	"m_NextActivator", &t1119_0_0_1, &t1123_TI, offsetof(t1123, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1123_FIs[] =
{
	&t1123_f0_FieldInfo,
	NULL
};
extern Il2CppType t1119_0_0_0;
static ParameterInfo t1123_m5898_ParameterInfos[] = 
{
	{"next", 0, 134221382, &EmptyCustomAttributesCache, &t1119_0_0_0},
};
extern TypeInfo t1123_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5898_MI = 
{
	".ctor", (methodPointerType)&m5898, &t1123_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1123_m5898_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 2928, NULL, (methodPointerType)NULL};
static MethodInfo* t1123_MIs[] =
{
	&m5898_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1123_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t1119_TI;
static TypeInfo* t1123_ITIs[] = 
{
	&t1119_TI,
};
extern TypeInfo t1119_TI;
static Il2CppInterfaceOffsetPair t1123_IOs[] = 
{
	{ &t1119_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1123_0_0_0;
extern Il2CppType t1123_1_0_0;
extern TypeInfo t25_TI;
struct t1123;
extern TypeInfo t1123_TI;
TypeInfo t1123_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ContextLevelActivator", "System.Runtime.Remoting.Activation", t1123_MIs, NULL, t1123_FIs, NULL, &t25_TI, NULL, NULL, &t1123_TI, t1123_ITIs, t1123_VT, &EmptyCustomAttributesCache, &t1123_TI, &t1123_0_0_0, &t1123_1_0_0, t1123_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1123), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1119_TI;



// Metadata Definition System.Runtime.Remoting.Activation.IActivator
static MethodInfo* t1119_MIs[] =
{
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1119_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1119__CustomAttributeCache = {
1,
NULL,
&t1119_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1119_0_0_0;
extern Il2CppType t1119_1_0_0;
struct t1119;
extern TypeInfo t1119_TI;
extern CustomAttributesCache t1119__CustomAttributeCache;
TypeInfo t1119_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IActivator", "System.Runtime.Remoting.Activation", t1119_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1119_TI, NULL, NULL, &t1119__CustomAttributeCache, &t1119_TI, &t1119_0_0_0, &t1119_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1127_TI;



// Metadata Definition System.Runtime.Remoting.Activation.IConstructionCallMessage
extern MethodInfo m8286_MI;
static PropertyInfo t1127____ActivationType_PropertyInfo = 
{
	&t1127_TI, "ActivationType", &m8286_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8287_MI;
static PropertyInfo t1127____ActivationTypeName_PropertyInfo = 
{
	&t1127_TI, "ActivationTypeName", &m8287_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8288_MI;
extern MethodInfo m8289_MI;
static PropertyInfo t1127____Activator_PropertyInfo = 
{
	&t1127_TI, "Activator", &m8288_MI, &m8289_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8290_MI;
static PropertyInfo t1127____CallSiteActivationAttributes_PropertyInfo = 
{
	&t1127_TI, "CallSiteActivationAttributes", &m8290_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8291_MI;
static PropertyInfo t1127____ContextProperties_PropertyInfo = 
{
	&t1127_TI, "ContextProperties", &m8291_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1127_PIs[] =
{
	&t1127____ActivationType_PropertyInfo,
	&t1127____ActivationTypeName_PropertyInfo,
	&t1127____Activator_PropertyInfo,
	&t1127____CallSiteActivationAttributes_PropertyInfo,
	&t1127____ContextProperties_PropertyInfo,
	NULL
};
extern TypeInfo t1127_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8286_MI = 
{
	"get_ActivationType", NULL, &t1127_TI, &t131_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 2929, NULL, (methodPointerType)NULL};
extern TypeInfo t1127_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8287_MI = 
{
	"get_ActivationTypeName", NULL, &t1127_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, false, 2930, NULL, (methodPointerType)NULL};
extern TypeInfo t1127_TI;
extern Il2CppType t1119_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8288_MI = 
{
	"get_Activator", NULL, &t1127_TI, &t1119_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 2, 0, false, false, 2931, NULL, (methodPointerType)NULL};
extern Il2CppType t1119_0_0_0;
static ParameterInfo t1127_m8289_ParameterInfos[] = 
{
	{"value", 0, 134221383, &EmptyCustomAttributesCache, &t1119_0_0_0},
};
extern TypeInfo t1127_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8289_MI = 
{
	"set_Activator", NULL, &t1127_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1127_m8289_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, false, 2932, NULL, (methodPointerType)NULL};
extern TypeInfo t1127_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8290_MI = 
{
	"get_CallSiteActivationAttributes", NULL, &t1127_TI, &t158_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 4, 0, false, false, 2933, NULL, (methodPointerType)NULL};
extern TypeInfo t1127_TI;
extern Il2CppType t1132_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8291_MI = 
{
	"get_ContextProperties", NULL, &t1127_TI, &t1132_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 5, 0, false, false, 2934, NULL, (methodPointerType)NULL};
static MethodInfo* t1127_MIs[] =
{
	&m8286_MI,
	&m8287_MI,
	&m8288_MI,
	&m8289_MI,
	&m8290_MI,
	&m8291_MI,
	NULL
};
extern TypeInfo t1145_TI;
extern TypeInfo t1165_TI;
extern TypeInfo t1155_TI;
static TypeInfo* t1127_ITIs[] = 
{
	&t1145_TI,
	&t1165_TI,
	&t1155_TI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1127_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1127__CustomAttributeCache = {
1,
NULL,
&t1127_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1127_0_0_0;
extern Il2CppType t1127_1_0_0;
struct t1127;
extern TypeInfo t1127_TI;
extern CustomAttributesCache t1127__CustomAttributeCache;
TypeInfo t1127_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IConstructionCallMessage", "System.Runtime.Remoting.Activation", t1127_MIs, t1127_PIs, NULL, NULL, NULL, NULL, NULL, &t1127_TI, t1127_ITIs, NULL, &t1127__CustomAttributeCache, &t1127_TI, &t1127_0_0_0, &t1127_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 6, 5, 0, 0, 0, 0, 3, 0};
#include "t1124.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1124_TI;
#include "t1124MD.h"



// Metadata Definition System.Runtime.Remoting.Activation.RemoteActivator
static MethodInfo* t1124_MIs[] =
{
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1124_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t1119_TI;
static TypeInfo* t1124_ITIs[] = 
{
	&t1119_TI,
};
extern TypeInfo t1119_TI;
static Il2CppInterfaceOffsetPair t1124_IOs[] = 
{
	{ &t1119_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1124_0_0_0;
extern Il2CppType t1124_1_0_0;
extern TypeInfo t862_TI;
struct t1124;
extern TypeInfo t1124_TI;
TypeInfo t1124_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemoteActivator", "System.Runtime.Remoting.Activation", t1124_MIs, NULL, NULL, NULL, &t862_TI, NULL, NULL, &t1124_TI, t1124_ITIs, t1124_VT, &EmptyCustomAttributesCache, &t1124_TI, &t1124_0_0_0, &t1124_1_0_0, t1124_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1124), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1125_TI;

extern TypeInfo t1125_TI;
extern TypeInfo t27_TI;
extern TypeInfo t134_TI;
extern MethodInfo m5899_MI;
extern MethodInfo m386_MI;
extern MethodInfo m3364_MI;


extern MethodInfo m5899_MI;
 t27* m5899 (t1125 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5899_MI);
	{
		t27* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m5900_MI;
 bool m5900 (t1125 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5900_MI);
	{
		if (((t1125 *)IsInst(p0, InitializedTypeInfo(&t1125_TI))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(((t1125 *)Castclass(p0, InitializedTypeInfo(&t1125_TI))));
		t27* L_0 = m5899(((t1125 *)Castclass(p0, InitializedTypeInfo(&t1125_TI))), &m5899_MI);
		t27* L_1 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_2 = m386(NULL, L_0, L_1, &m386_MI);
		return L_2;
	}
}
extern MethodInfo m5901_MI;
 int32_t m5901 (t1125 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5901_MI);
	{
		t27* L_0 = (__this->f1);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3364_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m5902_MI;
 void m5902 (t1125 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5902_MI);
	{
		return;
	}
}
extern MethodInfo m5903_MI;
 bool m5903 (t1125 * __this, t1128 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5903_MI);
	{
		return 1;
	}
}
// Metadata Definition System.Runtime.Remoting.Activation.UrlAttribute
extern Il2CppType t27_0_0_1;
FieldInfo t1125_f1_FieldInfo = 
{
	"url", &t27_0_0_1, &t1125_TI, offsetof(t1125, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1125_FIs[] =
{
	&t1125_f1_FieldInfo,
	NULL
};
extern MethodInfo m5899_MI;
static PropertyInfo t1125____UrlValue_PropertyInfo = 
{
	&t1125_TI, "UrlValue", &m5899_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1125_PIs[] =
{
	&t1125____UrlValue_PropertyInfo,
	NULL
};
extern TypeInfo t1125_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5899_MI = 
{
	"get_UrlValue", (methodPointerType)&m5899, &t1125_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2935, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1125_m5900_ParameterInfos[] = 
{
	{"o", 0, 134221384, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1125_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5900_MI = 
{
	"Equals", (methodPointerType)&m5900, &t1125_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t1125_m5900_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 2936, NULL, (methodPointerType)NULL};
extern TypeInfo t1125_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5901_MI = 
{
	"GetHashCode", (methodPointerType)&m5901, &t1125_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 2937, NULL, (methodPointerType)NULL};
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1125_m5902_ParameterInfos[] = 
{
	{"ctorMsg", 0, 134221385, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern TypeInfo t1125_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1125__CustomAttributeCache_m5902;
MethodInfo m5902_MI = 
{
	"GetPropertiesForNewContext", (methodPointerType)&m5902, &t1125_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1125_m5902_ParameterInfos, &t1125__CustomAttributeCache_m5902, 198, 0, 8, 1, false, false, 2938, NULL, (methodPointerType)NULL};
extern Il2CppType t1128_0_0_0;
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1125_m5903_ParameterInfos[] = 
{
	{"ctx", 0, 134221386, &EmptyCustomAttributesCache, &t1128_0_0_0},
	{"msg", 1, 134221387, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern TypeInfo t1125_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1125__CustomAttributeCache_m5903;
MethodInfo m5903_MI = 
{
	"IsContextOK", (methodPointerType)&m5903, &t1125_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t1125_m5903_ParameterInfos, &t1125__CustomAttributeCache_m5903, 198, 0, 9, 2, false, false, 2939, NULL, (methodPointerType)NULL};
static MethodInfo* t1125_MIs[] =
{
	&m5899_MI,
	&m5900_MI,
	&m5901_MI,
	&m5902_MI,
	&m5903_MI,
	NULL
};
extern MethodInfo m5900_MI;
extern MethodInfo m352_MI;
extern MethodInfo m5901_MI;
extern MethodInfo m457_MI;
extern MethodInfo m5902_MI;
extern MethodInfo m5903_MI;
extern MethodInfo m5925_MI;
extern MethodInfo m5925_MI;
extern MethodInfo m5902_MI;
extern MethodInfo m5903_MI;
static MethodInfo* t1125_VT[] =
{
	&m5900_MI,
	&m352_MI,
	&m5901_MI,
	&m457_MI,
	&m5902_MI,
	&m5903_MI,
	&m5925_MI,
	&m5925_MI,
	&m5902_MI,
	&m5903_MI,
};
extern TypeInfo t1635_TI;
extern TypeInfo t1137_TI;
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t1125_IOs[] = 
{
	{ &t1635_TI, 4},
	{ &t1137_TI, 6},
	{ &t704_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1125_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1125_CustomAttributesCacheGenerator_m5902(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1125_CustomAttributesCacheGenerator_m5903(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1125__CustomAttributeCache = {
1,
NULL,
&t1125_CustomAttributesCacheGenerator
};
CustomAttributesCache t1125__CustomAttributeCache_m5902 = {
1,
NULL,
&t1125_CustomAttributesCacheGenerator_m5902
};
CustomAttributesCache t1125__CustomAttributeCache_m5903 = {
1,
NULL,
&t1125_CustomAttributesCacheGenerator_m5903
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1125_0_0_0;
extern Il2CppType t1125_1_0_0;
extern TypeInfo t1126_TI;
struct t1125;
extern TypeInfo t1125_TI;
extern CustomAttributesCache t1125__CustomAttributeCache;
extern CustomAttributesCache t1125__CustomAttributeCache_m5902;
extern CustomAttributesCache t1125__CustomAttributeCache_m5903;
TypeInfo t1125_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UrlAttribute", "System.Runtime.Remoting.Activation", t1125_MIs, t1125_PIs, t1125_FIs, NULL, &t1126_TI, NULL, NULL, &t1125_TI, NULL, t1125_VT, &t1125__CustomAttributeCache, &t1125_TI, &t1125_0_0_0, &t1125_1_0_0, t1125_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1125), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 5, 1, 1, 0, 0, 10, 0, 3};
#include "t1129.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1129_TI;
#include "t1129MD.h"

extern TypeInfo t1129_TI;
extern TypeInfo t1130_TI;
extern MethodInfo m452_MI;
extern MethodInfo m5909_MI;


extern MethodInfo m5904_MI;
 void m5904 (t1129 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5904_MI);
	{
		m452(__this, &m452_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1130_TI));
		t158* L_0 = m5909(NULL, &m5909_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m5905_MI;
 t158* m5905 (t1129 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5905_MI);
	{
		t158* L_0 = (__this->f0);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.ChannelInfo
extern Il2CppType t158_0_0_1;
FieldInfo t1129_f0_FieldInfo = 
{
	"channelData", &t158_0_0_1, &t1129_TI, offsetof(t1129, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1129_FIs[] =
{
	&t1129_f0_FieldInfo,
	NULL
};
extern MethodInfo m5905_MI;
static PropertyInfo t1129____ChannelData_PropertyInfo = 
{
	&t1129_TI, "ChannelData", &m5905_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1129_PIs[] =
{
	&t1129____ChannelData_PropertyInfo,
	NULL
};
extern TypeInfo t1129_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5904_MI = 
{
	".ctor", (methodPointerType)&m5904, &t1129_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2940, NULL, (methodPointerType)NULL};
extern TypeInfo t1129_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5905_MI = 
{
	"get_ChannelData", (methodPointerType)&m5905, &t1129_TI, &t158_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 2941, NULL, (methodPointerType)NULL};
static MethodInfo* t1129_MIs[] =
{
	&m5904_MI,
	&m5905_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m5905_MI;
static MethodInfo* t1129_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m5905_MI,
};
extern TypeInfo t1179_TI;
static TypeInfo* t1129_ITIs[] = 
{
	&t1179_TI,
};
extern TypeInfo t1179_TI;
static Il2CppInterfaceOffsetPair t1129_IOs[] = 
{
	{ &t1179_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1129_0_0_0;
extern Il2CppType t1129_1_0_0;
extern TypeInfo t25_TI;
struct t1129;
extern TypeInfo t1129_TI;
TypeInfo t1129_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ChannelInfo", "System.Runtime.Remoting", t1129_MIs, t1129_PIs, t1129_FIs, NULL, &t25_TI, NULL, NULL, &t1129_TI, t1129_ITIs, t1129_VT, &EmptyCustomAttributesCache, &t1129_TI, &t1129_0_0_0, &t1129_1_0_0, t1129_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1129), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 1, 1, 0, 0, 5, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1130_TI;

#include "t1131.h"
extern TypeInfo t931_TI;
extern TypeInfo t1130_TI;
extern TypeInfo t1131_TI;
extern TypeInfo t548_TI;
extern TypeInfo t27_TI;
extern TypeInfo t165_TI;
extern TypeInfo t1636_TI;
extern TypeInfo t1133_TI;
extern TypeInfo t1183_TI;
extern TypeInfo t123_TI;
extern TypeInfo t125_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t1637_TI;
extern TypeInfo t131_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t78_TI;
extern TypeInfo t167_TI;
extern TypeInfo t158_TI;
#include "t1131MD.h"
#include "t1329MD.h"
extern MethodInfo m4830_MI;
extern MethodInfo m5930_MI;
extern MethodInfo m5908_MI;
extern MethodInfo m489_MI;
extern MethodInfo m8292_MI;
extern MethodInfo m593_MI;
extern MethodInfo m6114_MI;
extern MethodInfo m8293_MI;
extern MethodInfo m4839_MI;
extern MethodInfo m6922_MI;
extern MethodInfo m4833_MI;
extern MethodInfo m386_MI;
extern MethodInfo m2234_MI;
extern MethodInfo m532_MI;
extern MethodInfo m8294_MI;
extern MethodInfo m4835_MI;
extern MethodInfo m4848_MI;
extern MethodInfo m4842_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m4368_MI;
extern MethodInfo m7836_MI;
extern MethodInfo m8295_MI;
extern MethodInfo m6923_MI;
extern MethodInfo m4855_MI;
extern MethodInfo m504_MI;
extern MethodInfo m8296_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m4858_MI;


extern MethodInfo m5906_MI;
 void m5906 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5906_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t931_TI));
		t931 * L_0 = (t931 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t931_TI));
		m4830(L_0, &m4830_MI);
		((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f0 = L_0;
		t931 * L_1 = (t931 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t931_TI));
		m4830(L_1, &m4830_MI);
		((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f1 = L_1;
		t1131 * L_2 = (t1131 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1131_TI));
		m5930(L_2, &m5930_MI);
		((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f2 = L_2;
		((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f3 = (t27*) &_stringLiteral950;
		t548* L_3 = ((t548*)SZArrayNew(InitializedTypeInfo(&t548_TI), 2));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, (t27*) &_stringLiteral951);
		*((t27**)(t27**)SZArrayLdElema(L_3, 0)) = (t27*)(t27*) &_stringLiteral951;
		t548* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, (t27*) &_stringLiteral952);
		*((t27**)(t27**)SZArrayLdElema(L_4, 1)) = (t27*)(t27*) &_stringLiteral952;
		((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f4 = (t25 *)L_4;
		return;
	}
}
extern MethodInfo m5907_MI;
 void m5907 (t25 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5907_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1130_TI));
		m5908(NULL, p0, 0, &m5908_MI);
		return;
	}
}
extern MethodInfo m5908_MI;
 void m5908 (t25 * __this, t25 * p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5908_MI);
	t25 * V_0 = {0};
	t25 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t25 * V_4 = {0};
	t25 * V_5 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral953, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if (!p1)
		{
			goto IL_0038;
		}
	}
	{
		V_1 = ((t25 *)IsInst(p0, InitializedTypeInfo(&t1636_TI)));
		if (V_1)
		{
			goto IL_0031;
		}
	}
	{
		NullCheck(p0);
		t27* L_1 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8292_MI, p0);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_2 = m593(NULL, (t27*) &_stringLiteral954, L_1, &m593_MI);
		t1183 * L_3 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m6114(L_3, L_2, &m6114_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0031:
	{
		NullCheck(V_1);
		InterfaceActionInvoker1< bool >::Invoke(&m8293_MI, V_1, 1);
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1130_TI));
		NullCheck((((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f0));
		t25 * L_4 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4839_MI, (((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f0));
		V_0 = L_4;
		m6922(NULL, V_0, &m6922_MI);
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			V_2 = (-1);
			V_3 = 0;
			goto IL_00bc;
		}

IL_004f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1130_TI));
			NullCheck((((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f0));
			t25 * L_5 = (t25 *)VirtFuncInvoker1< t25 *, int32_t >::Invoke(&m4833_MI, (((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f0), V_3);
			V_4 = ((t25 *)Castclass(L_5, InitializedTypeInfo(&t1133_TI)));
			NullCheck(V_4);
			t27* L_6 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8292_MI, V_4);
			NullCheck(p0);
			t27* L_7 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8292_MI, p0);
			IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
			bool L_8 = m386(NULL, L_6, L_7, &m386_MI);
			if (!L_8)
			{
				goto IL_00a3;
			}
		}

IL_0075:
		{
			NullCheck(p0);
			t27* L_9 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8292_MI, p0);
			IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
			bool L_10 = m2234(NULL, L_9, (((t27_SFs*)(&t27_TI)->static_fields)->f2), &m2234_MI);
			if (!L_10)
			{
				goto IL_00a3;
			}
		}

IL_0087:
		{
			NullCheck(V_4);
			t27* L_11 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8292_MI, V_4);
			IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
			t27* L_12 = m532(NULL, (t27*) &_stringLiteral955, L_11, (t27*) &_stringLiteral956, &m532_MI);
			t1183 * L_13 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
			m6114(L_13, L_12, &m6114_MI);
			il2cpp_codegen_raise_exception (L_13);
		}

IL_00a3:
		{
			NullCheck(V_4);
			int32_t L_14 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m8294_MI, V_4);
			NullCheck(p0);
			int32_t L_15 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m8294_MI, p0);
			if ((((int32_t)L_14) >= ((int32_t)L_15)))
			{
				goto IL_00b8;
			}
		}

IL_00b2:
		{
			if ((((uint32_t)V_2) != ((uint32_t)(-1))))
			{
				goto IL_00b8;
			}
		}

IL_00b6:
		{
			V_2 = V_3;
		}

IL_00b8:
		{
			V_3 = ((int32_t)(V_3+1));
		}

IL_00bc:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1130_TI));
			NullCheck((((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f0));
			int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4835_MI, (((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f0));
			if ((((int32_t)V_3) < ((int32_t)L_16)))
			{
				goto IL_004f;
			}
		}

IL_00c9:
		{
			if ((((int32_t)V_2) == ((int32_t)(-1))))
			{
				goto IL_00db;
			}
		}

IL_00cd:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1130_TI));
			NullCheck((((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f0));
			VirtActionInvoker2< int32_t, t25 * >::Invoke(&m4848_MI, (((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f0), V_2, p0);
			goto IL_00e7;
		}

IL_00db:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1130_TI));
			NullCheck((((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f0));
			VirtFuncInvoker1< int32_t, t25 * >::Invoke(&m4842_MI, (((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f0), p0);
		}

IL_00e7:
		{
			V_5 = ((t25 *)IsInst(p0, InitializedTypeInfo(&t1637_TI)));
			if (!V_5)
			{
				goto IL_0112;
			}
		}

IL_00f3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1130_TI));
			NullCheck(p0);
			t131 * L_17 = m1959(p0, &m1959_MI);
			NullCheck(L_17);
			t27* L_18 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m4368_MI, L_17);
			NullCheck((((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f4));
			bool L_19 = (bool)InterfaceFuncInvoker1< bool, t25 * >::Invoke(&m7836_MI, (((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f4), L_18);
			if (!L_19)
			{
				goto IL_0112;
			}
		}

IL_010a:
		{
			NullCheck(V_5);
			InterfaceActionInvoker1< t25 * >::Invoke(&m8295_MI, V_5, NULL);
		}

IL_0112:
		{
			// IL_0112: leave.s IL_011b
			leaveInstructions[0] = 0x11B; // 1
			THROW_SENTINEL(IL_011b);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0114;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0114;
	}

IL_0114:
	{ // begin finally (depth: 1)
		m6923(NULL, V_0, &m6923_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x11B:
				goto IL_011b;
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

IL_011b:
	{
		return;
	}
}
extern MethodInfo m5909_MI;
 t158* m5909 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5909_MI);
	t931 * V_0 = {0};
	t25 * V_1 = {0};
	t25 * V_2 = {0};
	t25 * V_3 = {0};
	t25 * V_4 = {0};
	t25 * V_5 = {0};
	t25 * V_6 = {0};
	int32_t leaveInstructions[2] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t931_TI));
		t931 * L_0 = (t931 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t931_TI));
		m4830(L_0, &m4830_MI);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1130_TI));
		NullCheck((((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f0));
		t25 * L_1 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4839_MI, (((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f0));
		V_1 = L_1;
		m6922(NULL, V_1, &m6922_MI);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1130_TI));
			NullCheck((((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f0));
			t25 * L_2 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4855_MI, (((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f0));
			V_3 = L_2;
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				goto IL_004d;
			}

IL_0024:
			{
				NullCheck(V_3);
				t25 * L_3 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m504_MI, V_3);
				V_2 = L_3;
				V_4 = ((t25 *)IsInst(V_2, InitializedTypeInfo(&t1637_TI)));
				if (!V_4)
				{
					goto IL_004d;
				}
			}

IL_0037:
			{
				NullCheck(V_4);
				t25 * L_4 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m8296_MI, V_4);
				V_5 = L_4;
				if (!V_5)
				{
					goto IL_004d;
				}
			}

IL_0044:
			{
				NullCheck(V_0);
				VirtFuncInvoker1< int32_t, t25 * >::Invoke(&m4842_MI, V_0, V_5);
			}

IL_004d:
			{
				NullCheck(V_3);
				bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m506_MI, V_3);
				if (L_5)
				{
					goto IL_0024;
				}
			}

IL_0055:
			{
				// IL_0055: leave.s IL_006c
				leaveInstructions[1] = 0x6C; // 2
				THROW_SENTINEL(IL_006c);
				// finally target depth: 2
			}
		} // end try (depth: 2)
		catch(Il2CppFinallySentinel& e)
		{
			goto IL_0057;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (t168 *)e.ex;
			goto IL_0057;
		}

IL_0057:
		{ // begin finally (depth: 2)
			{
				V_6 = ((t25 *)IsInst(V_3, InitializedTypeInfo(&t167_TI)));
				if (V_6)
				{
					goto IL_0064;
				}
			}

IL_0063:
			{
				// finally node depth: 2
				switch (leaveInstructions[1])
				{
					case 0x6C:
						goto IL_006c;
					default:
					{
						#if IL2CPP_DEBUG
						assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 2, __last_unhandled_exception has not been set");
						#endif
						t168 * _tmp_exception_local = __last_unhandled_exception;
						__last_unhandled_exception = 0;
						il2cpp_codegen_raise_exception (_tmp_exception_local);
					}
				}
			}

IL_0064:
			{
				NullCheck(V_6);
				InterfaceActionInvoker0::Invoke(&m507_MI, V_6);
				// finally node depth: 2
				switch (leaveInstructions[1])
				{
					case 0x6C:
						goto IL_006c;
					default:
					{
						#if IL2CPP_DEBUG
						assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 2, __last_unhandled_exception has not been set");
						#endif
						t168 * _tmp_exception_local = __last_unhandled_exception;
						__last_unhandled_exception = 0;
						il2cpp_codegen_raise_exception (_tmp_exception_local);
					}
				}
			}
		} // end finally (depth: 2)

IL_006c:
		{
			// IL_006c: leave.s IL_0075
			leaveInstructions[0] = 0x75; // 1
			THROW_SENTINEL(IL_0075);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_006e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_006e;
	}

IL_006e:
	{ // begin finally (depth: 1)
		m6923(NULL, V_1, &m6923_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x75:
				goto IL_0075;
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

IL_0075:
	{
		NullCheck(V_0);
		t158* L_6 = (t158*)VirtFuncInvoker0< t158* >::Invoke(&m4858_MI, V_0);
		return L_6;
	}
}
// Metadata Definition System.Runtime.Remoting.Channels.ChannelServices
extern Il2CppType t931_0_0_17;
FieldInfo t1130_f0_FieldInfo = 
{
	"registeredChannels", &t931_0_0_17, &t1130_TI, offsetof(t1130_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t931_0_0_17;
FieldInfo t1130_f1_FieldInfo = 
{
	"delayedClientChannels", &t931_0_0_17, &t1130_TI, offsetof(t1130_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1131_0_0_17;
FieldInfo t1130_f2_FieldInfo = 
{
	"_crossContextSink", &t1131_0_0_17, &t1130_TI, offsetof(t1130_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_19;
FieldInfo t1130_f3_FieldInfo = 
{
	"CrossContextUrl", &t27_0_0_19, &t1130_TI, offsetof(t1130_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1132_0_0_17;
FieldInfo t1130_f4_FieldInfo = 
{
	"oldStartModeTypes", &t1132_0_0_17, &t1130_TI, offsetof(t1130_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1130_FIs[] =
{
	&t1130_f0_FieldInfo,
	&t1130_f1_FieldInfo,
	&t1130_f2_FieldInfo,
	&t1130_f3_FieldInfo,
	&t1130_f4_FieldInfo,
	NULL
};
extern TypeInfo t1130_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5906_MI = 
{
	".cctor", (methodPointerType)&m5906, &t1130_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2942, NULL, (methodPointerType)NULL};
extern Il2CppType t1133_0_0_0;
static ParameterInfo t1130_m5907_ParameterInfos[] = 
{
	{"chnl", 0, 134221388, &EmptyCustomAttributesCache, &t1133_0_0_0},
};
extern TypeInfo t1130_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1130__CustomAttributeCache_m5907;
MethodInfo m5907_MI = 
{
	"RegisterChannel", (methodPointerType)&m5907, &t1130_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1130_m5907_ParameterInfos, &t1130__CustomAttributeCache_m5907, 150, 0, 255, 1, false, false, 2943, NULL, (methodPointerType)NULL};
extern Il2CppType t1133_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1130_m5908_ParameterInfos[] = 
{
	{"chnl", 0, 134221389, &EmptyCustomAttributesCache, &t1133_0_0_0},
	{"ensureSecurity", 1, 134221390, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1130_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m5908_MI = 
{
	"RegisterChannel", (methodPointerType)&m5908, &t1130_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t137, t1130_m5908_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2944, NULL, (methodPointerType)NULL};
extern TypeInfo t1130_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5909_MI = 
{
	"GetCurrentChannelInfo", (methodPointerType)&m5909, &t1130_TI, &t158_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 2945, NULL, (methodPointerType)NULL};
static MethodInfo* t1130_MIs[] =
{
	&m5906_MI,
	&m5907_MI,
	&m5908_MI,
	&m5909_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1130_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1130_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t454_TI;
#include "t454.h"
#include "t454MD.h"
extern MethodInfo m3359_MI;
void t1130_CustomAttributesCacheGenerator_m5907(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t454 * tmp;
		tmp = (t454 *)il2cpp_codegen_object_new (&t454_TI);
		m3359(tmp, il2cpp_codegen_string_new_wrapper("Use RegisterChannel(IChannel,Boolean)"), &m3359_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1130__CustomAttributeCache = {
1,
NULL,
&t1130_CustomAttributesCacheGenerator
};
CustomAttributesCache t1130__CustomAttributeCache_m5907 = {
1,
NULL,
&t1130_CustomAttributesCacheGenerator_m5907
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1130_0_0_0;
extern Il2CppType t1130_1_0_0;
extern TypeInfo t25_TI;
struct t1130;
extern TypeInfo t1130_TI;
extern CustomAttributesCache t1130__CustomAttributeCache;
extern CustomAttributesCache t1130__CustomAttributeCache_m5907;
TypeInfo t1130_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ChannelServices", "System.Runtime.Remoting.Channels", t1130_MIs, NULL, t1130_FIs, NULL, &t25_TI, NULL, NULL, &t1130_TI, NULL, t1130_VT, &t1130__CustomAttributeCache, &t1130_TI, &t1130_0_0_0, &t1130_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1130), 0, -1, sizeof(t1130_SFs), 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 4, 0, 5, 0, 0, 4, 0, 0};
#include "t1134.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1134_TI;
#include "t1134MD.h"

extern TypeInfo t134_TI;
extern TypeInfo t1134_TI;
extern TypeInfo t1182_TI;
extern MethodInfo m452_MI;
extern MethodInfo m6111_MI;


extern MethodInfo m5910_MI;
 void m5910 (t1134 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5910_MI);
	{
		m452(__this, &m452_MI);
		int32_t L_0 = 0;
		t25 * L_1 = Box(InitializedTypeInfo(&t134_TI), &L_0);
		__this->f0 = L_1;
		__this->f1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1182_TI));
		t27* L_2 = m6111(NULL, &m6111_MI);
		__this->f2 = L_2;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Channels.CrossAppDomainData
extern Il2CppType t25_0_0_1;
FieldInfo t1134_f0_FieldInfo = 
{
	"_ContextID", &t25_0_0_1, &t1134_TI, offsetof(t1134, f0), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t1134_f1_FieldInfo = 
{
	"_DomainID", &t134_0_0_1, &t1134_TI, offsetof(t1134, f1), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
FieldInfo t1134_f2_FieldInfo = 
{
	"_processGuid", &t27_0_0_1, &t1134_TI, offsetof(t1134, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1134_FIs[] =
{
	&t1134_f0_FieldInfo,
	&t1134_f1_FieldInfo,
	&t1134_f2_FieldInfo,
	NULL
};
extern Il2CppType t134_0_0_0;
static ParameterInfo t1134_m5910_ParameterInfos[] = 
{
	{"domainId", 0, 134221391, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1134_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5910_MI = 
{
	".ctor", (methodPointerType)&m5910, &t1134_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t1134_m5910_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2946, NULL, (methodPointerType)NULL};
static MethodInfo* t1134_MIs[] =
{
	&m5910_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1134_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1134_0_0_0;
extern Il2CppType t1134_1_0_0;
extern TypeInfo t25_TI;
struct t1134;
extern TypeInfo t1134_TI;
TypeInfo t1134_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CrossAppDomainData", "System.Runtime.Remoting.Channels", t1134_MIs, NULL, t1134_FIs, NULL, &t25_TI, NULL, NULL, &t1134_TI, NULL, t1134_VT, &EmptyCustomAttributesCache, &t1134_TI, &t1134_0_0_0, &t1134_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1134), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 3, 0, 0, 4, 0, 0};
#include "t1135.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1135_TI;
#include "t1135MD.h"

extern TypeInfo t1332_TI;
extern TypeInfo t1134_TI;
extern TypeInfo t25_TI;
extern TypeInfo t1135_TI;
extern TypeInfo t1130_TI;
extern MethodInfo m6933_MI;
extern MethodInfo m5910_MI;
extern MethodInfo m452_MI;
extern MethodInfo m6922_MI;
extern MethodInfo m5911_MI;
extern MethodInfo m5907_MI;
extern MethodInfo m6923_MI;


extern MethodInfo m5911_MI;
 void m5911 (t1135 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5911_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m5912_MI;
 void m5912 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5912_MI);
	{
		t25 * L_0 = (t25 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t25_TI));
		m452(L_0, &m452_MI);
		((t1135_SFs*)InitializedTypeInfo(&t1135_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m5913_MI;
 void m5913 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5913_MI);
	t25 * V_0 = {0};
	t1135 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1135_TI));
		V_0 = (((t1135_SFs*)InitializedTypeInfo(&t1135_TI)->static_fields)->f0);
		m6922(NULL, V_0, &m6922_MI);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1135_TI));
		t1135 * L_0 = (t1135 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1135_TI));
		m5911(L_0, &m5911_MI);
		V_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1130_TI));
		m5907(NULL, V_1, &m5907_MI);
		// IL_0018: leave.s IL_0021
		leaveInstructions[0] = 0x21; // 1
		THROW_SENTINEL(IL_0021);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_001a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_001a;
	}

IL_001a:
	{ // begin finally (depth: 1)
		m6923(NULL, V_0, &m6923_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x21:
				goto IL_0021;
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

IL_0021:
	{
		return;
	}
}
extern MethodInfo m5914_MI;
 t27* m5914 (t1135 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5914_MI);
	{
		return (t27*) &_stringLiteral957;
	}
}
extern MethodInfo m5915_MI;
 int32_t m5915 (t1135 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5915_MI);
	{
		return ((int32_t)100);
	}
}
extern MethodInfo m5916_MI;
 t25 * m5916 (t1135 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5916_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1332_TI));
		int32_t L_0 = m6933(NULL, &m6933_MI);
		t1134 * L_1 = (t1134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1134_TI));
		m5910(L_1, L_0, &m5910_MI);
		return L_1;
	}
}
extern MethodInfo m5917_MI;
 void m5917 (t1135 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5917_MI);
	{
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Channels.CrossAppDomainChannel
extern Il2CppType t25_0_0_17;
FieldInfo t1135_f0_FieldInfo = 
{
	"s_lock", &t25_0_0_17, &t1135_TI, offsetof(t1135_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1135_FIs[] =
{
	&t1135_f0_FieldInfo,
	NULL
};
extern MethodInfo m5914_MI;
static PropertyInfo t1135____ChannelName_PropertyInfo = 
{
	&t1135_TI, "ChannelName", &m5914_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5915_MI;
static PropertyInfo t1135____ChannelPriority_PropertyInfo = 
{
	&t1135_TI, "ChannelPriority", &m5915_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5916_MI;
static PropertyInfo t1135____ChannelData_PropertyInfo = 
{
	&t1135_TI, "ChannelData", &m5916_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1135_PIs[] =
{
	&t1135____ChannelName_PropertyInfo,
	&t1135____ChannelPriority_PropertyInfo,
	&t1135____ChannelData_PropertyInfo,
	NULL
};
extern TypeInfo t1135_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5911_MI = 
{
	".ctor", (methodPointerType)&m5911, &t1135_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2947, NULL, (methodPointerType)NULL};
extern TypeInfo t1135_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5912_MI = 
{
	".cctor", (methodPointerType)&m5912, &t1135_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2948, NULL, (methodPointerType)NULL};
extern TypeInfo t1135_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5913_MI = 
{
	"RegisterCrossAppDomainChannel", (methodPointerType)&m5913, &t1135_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 2949, NULL, (methodPointerType)NULL};
extern TypeInfo t1135_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5914_MI = 
{
	"get_ChannelName", (methodPointerType)&m5914, &t1135_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 2950, NULL, (methodPointerType)NULL};
extern TypeInfo t1135_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5915_MI = 
{
	"get_ChannelPriority", (methodPointerType)&m5915, &t1135_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 2951, NULL, (methodPointerType)NULL};
extern TypeInfo t1135_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5916_MI = 
{
	"get_ChannelData", (methodPointerType)&m5916, &t1135_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2502, 0, 10, 0, false, false, 2952, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1135_m5917_ParameterInfos[] = 
{
	{"data", 0, 134221392, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1135_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5917_MI = 
{
	"StartListening", (methodPointerType)&m5917, &t1135_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1135_m5917_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 1, false, false, 2953, NULL, (methodPointerType)NULL};
static MethodInfo* t1135_MIs[] =
{
	&m5911_MI,
	&m5912_MI,
	&m5913_MI,
	&m5914_MI,
	&m5915_MI,
	&m5916_MI,
	&m5917_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m5914_MI;
extern MethodInfo m5915_MI;
extern MethodInfo m5916_MI;
extern MethodInfo m5917_MI;
extern MethodInfo m5914_MI;
extern MethodInfo m5915_MI;
extern MethodInfo m5916_MI;
extern MethodInfo m5917_MI;
static MethodInfo* t1135_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m5914_MI,
	&m5915_MI,
	&m5916_MI,
	&m5917_MI,
	&m5914_MI,
	&m5915_MI,
	&m5916_MI,
	&m5917_MI,
};
extern TypeInfo t1133_TI;
extern TypeInfo t1637_TI;
extern TypeInfo t1638_TI;
static TypeInfo* t1135_ITIs[] = 
{
	&t1133_TI,
	&t1637_TI,
	&t1638_TI,
};
extern TypeInfo t1133_TI;
extern TypeInfo t1637_TI;
extern TypeInfo t1638_TI;
static Il2CppInterfaceOffsetPair t1135_IOs[] = 
{
	{ &t1133_TI, 4},
	{ &t1637_TI, 6},
	{ &t1638_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1135_0_0_0;
extern Il2CppType t1135_1_0_0;
extern TypeInfo t25_TI;
struct t1135;
extern TypeInfo t1135_TI;
TypeInfo t1135_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CrossAppDomainChannel", "System.Runtime.Remoting.Channels", t1135_MIs, t1135_PIs, t1135_FIs, NULL, &t25_TI, NULL, NULL, &t1135_TI, t1135_ITIs, t1135_VT, &EmptyCustomAttributesCache, &t1135_TI, &t1135_0_0_0, &t1135_1_0_0, t1135_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1135), 0, -1, sizeof(t1135_SFs), 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 7, 3, 1, 0, 0, 12, 3, 3};
#include "t1136.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1136_TI;
#include "t1136MD.h"

#include "t972.h"
extern TypeInfo t1136_TI;
extern TypeInfo t972_TI;
extern TypeInfo t131_TI;
extern TypeInfo t657_TI;
extern TypeInfo t27_TI;
extern TypeInfo t725_TI;
#include "t972MD.h"
extern Il2CppType t1136_0_0_0;
extern MethodInfo m4900_MI;
extern MethodInfo m484_MI;
extern MethodInfo m4356_MI;


extern MethodInfo m5918_MI;
 void m5918 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5918_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t972_TI));
		t972 * L_0 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_0, &m4900_MI);
		((t1136_SFs*)InitializedTypeInfo(&t1136_TI)->static_fields)->f0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t1136_0_0_0), &m484_MI);
		NullCheck(L_1);
		t657 * L_2 = (t657 *)VirtFuncInvoker2< t657 *, t27*, int32_t >::Invoke(&m4356_MI, L_1, (t27*) &_stringLiteral958, ((int32_t)40));
		((t1136_SFs*)InitializedTypeInfo(&t1136_TI)->static_fields)->f1 = L_2;
		return;
	}
}
extern MethodInfo m5919_MI;
 int32_t m5919 (t1136 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5919_MI);
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.Channels.CrossAppDomainSink
extern Il2CppType t972_0_0_17;
FieldInfo t1136_f0_FieldInfo = 
{
	"s_sinks", &t972_0_0_17, &t1136_TI, offsetof(t1136_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t657_0_0_17;
FieldInfo t1136_f1_FieldInfo = 
{
	"processMessageMethod", &t657_0_0_17, &t1136_TI, offsetof(t1136_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t1136_f2_FieldInfo = 
{
	"_domainID", &t134_0_0_1, &t1136_TI, offsetof(t1136, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1136_FIs[] =
{
	&t1136_f0_FieldInfo,
	&t1136_f1_FieldInfo,
	&t1136_f2_FieldInfo,
	NULL
};
extern MethodInfo m5919_MI;
static PropertyInfo t1136____TargetDomainId_PropertyInfo = 
{
	&t1136_TI, "TargetDomainId", &m5919_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1136_PIs[] =
{
	&t1136____TargetDomainId_PropertyInfo,
	NULL
};
extern TypeInfo t1136_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5918_MI = 
{
	".cctor", (methodPointerType)&m5918, &t1136_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2954, NULL, (methodPointerType)NULL};
extern TypeInfo t1136_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5919_MI = 
{
	"get_TargetDomainId", (methodPointerType)&m5919, &t1136_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2955, NULL, (methodPointerType)NULL};
static MethodInfo* t1136_MIs[] =
{
	&m5918_MI,
	&m5919_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1136_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t809_TI;
static TypeInfo* t1136_ITIs[] = 
{
	&t809_TI,
};
extern TypeInfo t809_TI;
static Il2CppInterfaceOffsetPair t1136_IOs[] = 
{
	{ &t809_TI, 4},
};
extern TypeInfo t867_TI;
extern MethodInfo m4422_MI;
void t1136_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t867 * tmp;
		tmp = (t867 *)il2cpp_codegen_object_new (&t867_TI);
		m4422(tmp, il2cpp_codegen_string_new_wrapper("Handle domain unloading?"), &m4422_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1136__CustomAttributeCache = {
1,
NULL,
&t1136_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1136_0_0_0;
extern Il2CppType t1136_1_0_0;
extern TypeInfo t25_TI;
struct t1136;
extern TypeInfo t1136_TI;
extern CustomAttributesCache t1136__CustomAttributeCache;
TypeInfo t1136_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CrossAppDomainSink", "System.Runtime.Remoting.Channels", t1136_MIs, t1136_PIs, t1136_FIs, NULL, &t25_TI, NULL, NULL, &t1136_TI, t1136_ITIs, t1136_VT, &t1136__CustomAttributeCache, &t1136_TI, &t1136_0_0_0, &t1136_1_0_0, t1136_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1136), 0, -1, sizeof(t1136_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 2, 1, 3, 0, 0, 4, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1133_TI;



// Metadata Definition System.Runtime.Remoting.Channels.IChannel
extern MethodInfo m8292_MI;
static PropertyInfo t1133____ChannelName_PropertyInfo = 
{
	&t1133_TI, "ChannelName", &m8292_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8294_MI;
static PropertyInfo t1133____ChannelPriority_PropertyInfo = 
{
	&t1133_TI, "ChannelPriority", &m8294_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1133_PIs[] =
{
	&t1133____ChannelName_PropertyInfo,
	&t1133____ChannelPriority_PropertyInfo,
	NULL
};
extern TypeInfo t1133_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8292_MI = 
{
	"get_ChannelName", NULL, &t1133_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 2956, NULL, (methodPointerType)NULL};
extern TypeInfo t1133_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m8294_MI = 
{
	"get_ChannelPriority", NULL, &t1133_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, false, 2957, NULL, (methodPointerType)NULL};
static MethodInfo* t1133_MIs[] =
{
	&m8292_MI,
	&m8294_MI,
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1133_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1133__CustomAttributeCache = {
1,
NULL,
&t1133_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1133_0_0_0;
extern Il2CppType t1133_1_0_0;
struct t1133;
extern TypeInfo t1133_TI;
extern CustomAttributesCache t1133__CustomAttributeCache;
TypeInfo t1133_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IChannel", "System.Runtime.Remoting.Channels", t1133_MIs, t1133_PIs, NULL, NULL, NULL, NULL, NULL, &t1133_TI, NULL, NULL, &t1133__CustomAttributeCache, &t1133_TI, &t1133_0_0_0, &t1133_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 2, 2, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1637_TI;



// Metadata Definition System.Runtime.Remoting.Channels.IChannelReceiver
extern MethodInfo m8296_MI;
static PropertyInfo t1637____ChannelData_PropertyInfo = 
{
	&t1637_TI, "ChannelData", &m8296_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1637_PIs[] =
{
	&t1637____ChannelData_PropertyInfo,
	NULL
};
extern TypeInfo t1637_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8296_MI = 
{
	"get_ChannelData", NULL, &t1637_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 2958, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1637_m8295_ParameterInfos[] = 
{
	{"data", 0, 134221393, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1637_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8295_MI = 
{
	"StartListening", NULL, &t1637_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1637_m8295_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, false, 2959, NULL, (methodPointerType)NULL};
static MethodInfo* t1637_MIs[] =
{
	&m8296_MI,
	&m8295_MI,
	NULL
};
extern TypeInfo t1133_TI;
static TypeInfo* t1637_ITIs[] = 
{
	&t1133_TI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1637_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1637__CustomAttributeCache = {
1,
NULL,
&t1637_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1637_0_0_0;
extern Il2CppType t1637_1_0_0;
struct t1637;
extern TypeInfo t1637_TI;
extern CustomAttributesCache t1637__CustomAttributeCache;
TypeInfo t1637_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IChannelReceiver", "System.Runtime.Remoting.Channels", t1637_MIs, t1637_PIs, NULL, NULL, NULL, NULL, NULL, &t1637_TI, t1637_ITIs, NULL, &t1637__CustomAttributeCache, &t1637_TI, &t1637_0_0_0, &t1637_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 2, 1, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1638_TI;



// Metadata Definition System.Runtime.Remoting.Channels.IChannelSender
static MethodInfo* t1638_MIs[] =
{
	NULL
};
extern TypeInfo t1133_TI;
static TypeInfo* t1638_ITIs[] = 
{
	&t1133_TI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1638_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1638__CustomAttributeCache = {
1,
NULL,
&t1638_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1638_0_0_0;
extern Il2CppType t1638_1_0_0;
struct t1638;
extern TypeInfo t1638_TI;
extern CustomAttributesCache t1638__CustomAttributeCache;
TypeInfo t1638_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IChannelSender", "System.Runtime.Remoting.Channels", t1638_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1638_TI, t1638_ITIs, NULL, &t1638__CustomAttributeCache, &t1638_TI, &t1638_0_0_0, &t1638_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1636_TI;



// Metadata Definition System.Runtime.Remoting.Channels.ISecurableChannel
extern MethodInfo m8293_MI;
static PropertyInfo t1636____IsSecured_PropertyInfo = 
{
	&t1636_TI, "IsSecured", NULL, &m8293_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1636_PIs[] =
{
	&t1636____IsSecured_PropertyInfo,
	NULL
};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1636_m8293_ParameterInfos[] = 
{
	{"value", 0, 134221394, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1636_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m8293_MI = 
{
	"set_IsSecured", NULL, &t1636_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t1636_m8293_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 0, 1, false, false, 2960, NULL, (methodPointerType)NULL};
static MethodInfo* t1636_MIs[] =
{
	&m8293_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1636_0_0_0;
extern Il2CppType t1636_1_0_0;
struct t1636;
extern TypeInfo t1636_TI;
TypeInfo t1636_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISecurableChannel", "System.Runtime.Remoting.Channels", t1636_MIs, t1636_PIs, NULL, NULL, NULL, NULL, NULL, &t1636_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1636_TI, &t1636_0_0_0, &t1636_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1128_TI;
#include "t1128MD.h"

extern TypeInfo t972_TI;
extern TypeInfo t1128_TI;
extern TypeInfo t25_TI;
extern TypeInfo t123_TI;
extern TypeInfo t931_TI;
extern TypeInfo t78_TI;
extern TypeInfo t1137_TI;
extern TypeInfo t27_TI;
extern TypeInfo t125_TI;
extern TypeInfo t167_TI;
extern TypeInfo t134_TI;
#include "t1341MD.h"
extern MethodInfo m6981_MI;
extern MethodInfo m4900_MI;
extern MethodInfo m352_MI;
extern MethodInfo m4855_MI;
extern MethodInfo m504_MI;
extern MethodInfo m8297_MI;
extern MethodInfo m386_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m1867_MI;


extern MethodInfo m5920_MI;
 void m5920 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5920_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t972_TI));
		t972 * L_0 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_0, &m4900_MI);
		((t1128_SFs*)InitializedTypeInfo(&t1128_TI)->static_fields)->f2 = L_0;
		return;
	}
}
extern MethodInfo m5921_MI;
 void m5921 (t1128 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5921_MI);
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		// IL_0000: leave.s IL_0009
		leaveInstructions[0] = 0x9; // 1
		THROW_SENTINEL(IL_0009);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0002;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0002;
	}

IL_0002:
	{ // begin finally (depth: 1)
		m352(__this, &m352_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x9:
				goto IL_0009;
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

IL_0009:
	{
		return;
	}
}
extern MethodInfo m5922_MI;
 t1128 * m5922 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5922_MI);
	{
		t1128 * L_0 = m6981(NULL, &m6981_MI);
		return L_0;
	}
}
extern MethodInfo m5923_MI;
 t25 * m5923 (t1128 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5923_MI);
	t25 * V_0 = {0};
	t25 * V_1 = {0};
	t25 * V_2 = {0};
	t25 * V_3 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t931 * L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t25 *)NULL;
	}

IL_000a:
	{
		t931 * L_1 = (__this->f1);
		NullCheck(L_1);
		t25 * L_2 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4855_MI, L_1);
		V_1 = L_2;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0018:
		{
			NullCheck(V_1);
			t25 * L_3 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m504_MI, V_1);
			V_0 = ((t25 *)Castclass(L_3, InitializedTypeInfo(&t1137_TI)));
			NullCheck(V_0);
			t27* L_4 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8297_MI, V_0);
			IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
			bool L_5 = m386(NULL, L_4, p0, &m386_MI);
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_0032:
		{
			V_2 = V_0;
			// IL_0034: leave.s IL_0054
			leaveInstructions[0] = 0x54; // 1
			THROW_SENTINEL(IL_0054);
			// finally target depth: 1
		}

IL_0036:
		{
			NullCheck(V_1);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m506_MI, V_1);
			if (L_6)
			{
				goto IL_0018;
			}
		}

IL_003e:
		{
			// IL_003e: leave.s IL_0052
			leaveInstructions[0] = 0x52; // 1
			THROW_SENTINEL(IL_0052);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0040;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0040;
	}

IL_0040:
	{ // begin finally (depth: 1)
		{
			V_3 = ((t25 *)IsInst(V_1, InitializedTypeInfo(&t167_TI)));
			if (V_3)
			{
				goto IL_004b;
			}
		}

IL_004a:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x54:
					goto IL_0054;
				case 0x52:
					goto IL_0052;
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

IL_004b:
		{
			NullCheck(V_3);
			InterfaceActionInvoker0::Invoke(&m507_MI, V_3);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x54:
					goto IL_0054;
				case 0x52:
					goto IL_0052;
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

IL_0052:
	{
		return (t25 *)NULL;
	}

IL_0054:
	{
		return V_2;
	}
}
extern MethodInfo m5924_MI;
 t27* m5924 (t1128 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5924_MI);
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = L_0;
		t25 * L_2 = Box(InitializedTypeInfo(&t134_TI), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_3 = m1867(NULL, (t27*) &_stringLiteral959, L_2, &m1867_MI);
		return L_3;
	}
}
// Metadata Definition System.Runtime.Remoting.Contexts.Context
extern Il2CppType t134_0_0_1;
FieldInfo t1128_f0_FieldInfo = 
{
	"context_id", &t134_0_0_1, &t1128_TI, offsetof(t1128, f0), &EmptyCustomAttributesCache};
extern Il2CppType t931_0_0_1;
FieldInfo t1128_f1_FieldInfo = 
{
	"context_properties", &t931_0_0_1, &t1128_TI, offsetof(t1128, f1), &EmptyCustomAttributesCache};
extern Il2CppType t972_0_0_17;
FieldInfo t1128_f2_FieldInfo = 
{
	"namedSlots", &t972_0_0_17, &t1128_TI, offsetof(t1128_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1128_FIs[] =
{
	&t1128_f0_FieldInfo,
	&t1128_f1_FieldInfo,
	&t1128_f2_FieldInfo,
	NULL
};
extern MethodInfo m5922_MI;
static PropertyInfo t1128____DefaultContext_PropertyInfo = 
{
	&t1128_TI, "DefaultContext", &m5922_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1128_PIs[] =
{
	&t1128____DefaultContext_PropertyInfo,
	NULL
};
extern TypeInfo t1128_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5920_MI = 
{
	".cctor", (methodPointerType)&m5920, &t1128_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 2961, NULL, (methodPointerType)NULL};
extern TypeInfo t1128_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5921_MI = 
{
	"Finalize", (methodPointerType)&m5921, &t1128_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 2962, NULL, (methodPointerType)NULL};
extern TypeInfo t1128_TI;
extern Il2CppType t1128_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5922_MI = 
{
	"get_DefaultContext", (methodPointerType)&m5922, &t1128_TI, &t1128_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 2963, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1128_m5923_ParameterInfos[] = 
{
	{"name", 0, 134221395, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1128_TI;
extern Il2CppType t1137_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5923_MI = 
{
	"GetProperty", (methodPointerType)&m5923, &t1128_TI, &t1137_0_0_0, RuntimeInvoker_t25_t25, t1128_m5923_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 4, 1, false, false, 2964, NULL, (methodPointerType)NULL};
extern TypeInfo t1128_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5924_MI = 
{
	"ToString", (methodPointerType)&m5924, &t1128_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 2965, NULL, (methodPointerType)NULL};
static MethodInfo* t1128_MIs[] =
{
	&m5920_MI,
	&m5921_MI,
	&m5922_MI,
	&m5923_MI,
	&m5924_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m5921_MI;
extern MethodInfo m456_MI;
extern MethodInfo m5924_MI;
extern MethodInfo m5923_MI;
static MethodInfo* t1128_VT[] =
{
	&m455_MI,
	&m5921_MI,
	&m456_MI,
	&m5924_MI,
	&m5923_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1128_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1128__CustomAttributeCache = {
1,
NULL,
&t1128_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1128_0_0_0;
extern Il2CppType t1128_1_0_0;
extern TypeInfo t25_TI;
struct t1128;
extern TypeInfo t1128_TI;
extern CustomAttributesCache t1128__CustomAttributeCache;
TypeInfo t1128_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Context", "System.Runtime.Remoting.Contexts", t1128_MIs, t1128_PIs, t1128_FIs, NULL, &t25_TI, NULL, NULL, &t1128_TI, NULL, t1128_VT, &t1128__CustomAttributeCache, &t1128_TI, &t1128_0_0_0, &t1128_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1128), 0, -1, sizeof(t1128_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, true, true, false, false, 5, 1, 3, 0, 0, 5, 0, 0};
#include "t1126.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1126_TI;
#include "t1126MD.h"

extern TypeInfo t1126_TI;
extern TypeInfo t27_TI;
extern TypeInfo t134_TI;
extern TypeInfo t165_TI;
extern TypeInfo t1127_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t25_TI;
extern TypeInfo t131_TI;
extern TypeInfo t125_TI;
extern TypeInfo t1128_TI;
extern TypeInfo t1137_TI;
extern MethodInfo m2234_MI;
extern MethodInfo m3364_MI;
extern MethodInfo m489_MI;
extern MethodInfo m8291_MI;
extern MethodInfo m7927_MI;
extern MethodInfo m8286_MI;
extern MethodInfo m4329_MI;
extern MethodInfo m5923_MI;


extern MethodInfo m5925_MI;
 t27* m5925 (t1126 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5925_MI);
	{
		t27* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m5926_MI;
 bool m5926 (t1126 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5926_MI);
	t1126 * V_0 = {0};
	{
		if (p0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		if (((t1126 *)IsInst(p0, InitializedTypeInfo(&t1126_TI))))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		V_0 = ((t1126 *)Castclass(p0, InitializedTypeInfo(&t1126_TI)));
		NullCheck(V_0);
		t27* L_0 = (V_0->f0);
		t27* L_1 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_2 = m2234(NULL, L_0, L_1, &m2234_MI);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		return 1;
	}
}
extern MethodInfo m5927_MI;
 int32_t m5927 (t1126 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5927_MI);
	{
		t27* L_0 = (__this->f0);
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
		t27* L_1 = (__this->f0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3364_MI, L_1);
		return L_2;
	}
}
extern MethodInfo m5928_MI;
 void m5928 (t1126 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5928_MI);
	t25 * V_0 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral960, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		NullCheck(p0);
		t25 * L_1 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m8291_MI, p0);
		V_0 = L_1;
		NullCheck(V_0);
		InterfaceFuncInvoker1< int32_t, t25 * >::Invoke(&m7927_MI, V_0, __this);
		return;
	}
}
extern MethodInfo m5929_MI;
 bool m5929 (t1126 * __this, t1128 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5929_MI);
	t25 * V_0 = {0};
	{
		if (p1)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral960, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if (p0)
		{
			goto IL_001c;
		}
	}
	{
		t165 * L_1 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_1, (t27*) &_stringLiteral961, &m489_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001c:
	{
		NullCheck(p1);
		t131 * L_2 = (t131 *)InterfaceFuncInvoker0< t131 * >::Invoke(&m8286_MI, p1);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4329_MI, L_2);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		t27* L_4 = (__this->f0);
		NullCheck(p0);
		t25 * L_5 = (t25 *)VirtFuncInvoker1< t25 *, t27* >::Invoke(&m5923_MI, p0, L_4);
		V_0 = L_5;
		if (V_0)
		{
			goto IL_003d;
		}
	}
	{
		return 0;
	}

IL_003d:
	{
		if ((((t1126 *)__this) == ((t25 *)V_0)))
		{
			goto IL_0043;
		}
	}
	{
		return 0;
	}

IL_0043:
	{
		return 1;
	}
}
// Metadata Definition System.Runtime.Remoting.Contexts.ContextAttribute
extern Il2CppType t27_0_0_4;
FieldInfo t1126_f0_FieldInfo = 
{
	"AttributeName", &t27_0_0_4, &t1126_TI, offsetof(t1126, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1126_FIs[] =
{
	&t1126_f0_FieldInfo,
	NULL
};
extern MethodInfo m5925_MI;
static PropertyInfo t1126____Name_PropertyInfo = 
{
	&t1126_TI, "Name", &m5925_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1126_PIs[] =
{
	&t1126____Name_PropertyInfo,
	NULL
};
extern TypeInfo t1126_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5925_MI = 
{
	"get_Name", (methodPointerType)&m5925, &t1126_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2502, 0, 7, 0, false, false, 2966, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1126_m5926_ParameterInfos[] = 
{
	{"o", 0, 134221396, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1126_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5926_MI = 
{
	"Equals", (methodPointerType)&m5926, &t1126_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t1126_m5926_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 2967, NULL, (methodPointerType)NULL};
extern TypeInfo t1126_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m5927_MI = 
{
	"GetHashCode", (methodPointerType)&m5927, &t1126_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 2968, NULL, (methodPointerType)NULL};
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1126_m5928_ParameterInfos[] = 
{
	{"ctorMsg", 0, 134221397, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern TypeInfo t1126_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5928_MI = 
{
	"GetPropertiesForNewContext", (methodPointerType)&m5928, &t1126_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1126_m5928_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 1, false, false, 2969, NULL, (methodPointerType)NULL};
extern Il2CppType t1128_0_0_0;
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1126_m5929_ParameterInfos[] = 
{
	{"ctx", 0, 134221398, &EmptyCustomAttributesCache, &t1128_0_0_0},
	{"ctorMsg", 1, 134221399, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern TypeInfo t1126_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5929_MI = 
{
	"IsContextOK", (methodPointerType)&m5929, &t1126_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t1126_m5929_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 2, false, false, 2970, NULL, (methodPointerType)NULL};
static MethodInfo* t1126_MIs[] =
{
	&m5925_MI,
	&m5926_MI,
	&m5927_MI,
	&m5928_MI,
	&m5929_MI,
	NULL
};
extern MethodInfo m5926_MI;
extern MethodInfo m352_MI;
extern MethodInfo m5927_MI;
extern MethodInfo m457_MI;
extern MethodInfo m5928_MI;
extern MethodInfo m5929_MI;
extern MethodInfo m5925_MI;
extern MethodInfo m5925_MI;
extern MethodInfo m5928_MI;
extern MethodInfo m5929_MI;
static MethodInfo* t1126_VT[] =
{
	&m5926_MI,
	&m352_MI,
	&m5927_MI,
	&m457_MI,
	&m5928_MI,
	&m5929_MI,
	&m5925_MI,
	&m5925_MI,
	&m5928_MI,
	&m5929_MI,
};
extern TypeInfo t1635_TI;
extern TypeInfo t1137_TI;
static TypeInfo* t1126_ITIs[] = 
{
	&t1635_TI,
	&t1137_TI,
};
extern TypeInfo t704_TI;
extern TypeInfo t1635_TI;
extern TypeInfo t1137_TI;
static Il2CppInterfaceOffsetPair t1126_IOs[] = 
{
	{ &t704_TI, 4},
	{ &t1635_TI, 4},
	{ &t1137_TI, 6},
};
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1126_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 4, &m3439_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1126__CustomAttributeCache = {
2,
NULL,
&t1126_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1126_0_0_0;
extern Il2CppType t1126_1_0_0;
extern TypeInfo t591_TI;
struct t1126;
extern TypeInfo t1126_TI;
extern CustomAttributesCache t1126__CustomAttributeCache;
TypeInfo t1126_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ContextAttribute", "System.Runtime.Remoting.Contexts", t1126_MIs, t1126_PIs, t1126_FIs, NULL, &t591_TI, NULL, NULL, &t1126_TI, t1126_ITIs, t1126_VT, &t1126__CustomAttributeCache, &t1126_TI, &t1126_0_0_0, &t1126_1_0_0, t1126_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1126), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 5, 1, 1, 0, 0, 10, 2, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1131_TI;

extern MethodInfo m452_MI;


extern MethodInfo m5930_MI;
 void m5930 (t1131 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5930_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Contexts.CrossContextChannel
extern TypeInfo t1131_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5930_MI = 
{
	".ctor", (methodPointerType)&m5930, &t1131_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 2971, NULL, (methodPointerType)NULL};
static MethodInfo* t1131_MIs[] =
{
	&m5930_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1131_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t809_TI;
static TypeInfo* t1131_ITIs[] = 
{
	&t809_TI,
};
extern TypeInfo t809_TI;
static Il2CppInterfaceOffsetPair t1131_IOs[] = 
{
	{ &t809_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1131_0_0_0;
extern Il2CppType t1131_1_0_0;
extern TypeInfo t25_TI;
struct t1131;
extern TypeInfo t1131_TI;
TypeInfo t1131_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CrossContextChannel", "System.Runtime.Remoting.Contexts", t1131_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t1131_TI, t1131_ITIs, t1131_VT, &EmptyCustomAttributesCache, &t1131_TI, &t1131_0_0_0, &t1131_1_0_0, t1131_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1131), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1635_TI;



// Metadata Definition System.Runtime.Remoting.Contexts.IContextAttribute
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1635_m8285_ParameterInfos[] = 
{
	{"msg", 0, 134221400, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern TypeInfo t1635_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8285_MI = 
{
	"GetPropertiesForNewContext", NULL, &t1635_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1635_m8285_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 2972, NULL, (methodPointerType)NULL};
extern Il2CppType t1128_0_0_0;
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1635_m8284_ParameterInfos[] = 
{
	{"ctx", 0, 134221401, &EmptyCustomAttributesCache, &t1128_0_0_0},
	{"msg", 1, 134221402, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern TypeInfo t1635_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8284_MI = 
{
	"IsContextOK", NULL, &t1635_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t1635_m8284_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, false, 2973, NULL, (methodPointerType)NULL};
static MethodInfo* t1635_MIs[] =
{
	&m8285_MI,
	&m8284_MI,
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1635_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1635__CustomAttributeCache = {
1,
NULL,
&t1635_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1635_0_0_0;
extern Il2CppType t1635_1_0_0;
struct t1635;
extern TypeInfo t1635_TI;
extern CustomAttributesCache t1635__CustomAttributeCache;
TypeInfo t1635_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IContextAttribute", "System.Runtime.Remoting.Contexts", t1635_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1635_TI, NULL, NULL, &t1635__CustomAttributeCache, &t1635_TI, &t1635_0_0_0, &t1635_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1137_TI;



// Metadata Definition System.Runtime.Remoting.Contexts.IContextProperty
extern MethodInfo m8297_MI;
static PropertyInfo t1137____Name_PropertyInfo = 
{
	&t1137_TI, "Name", &m8297_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1137_PIs[] =
{
	&t1137____Name_PropertyInfo,
	NULL
};
extern TypeInfo t1137_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8297_MI = 
{
	"get_Name", NULL, &t1137_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 2974, NULL, (methodPointerType)NULL};
static MethodInfo* t1137_MIs[] =
{
	&m8297_MI,
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1137_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1137__CustomAttributeCache = {
1,
NULL,
&t1137_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1137_0_0_0;
extern Il2CppType t1137_1_0_0;
struct t1137;
extern TypeInfo t1137_TI;
extern CustomAttributesCache t1137__CustomAttributeCache;
TypeInfo t1137_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IContextProperty", "System.Runtime.Remoting.Contexts", t1137_MIs, t1137_PIs, NULL, NULL, NULL, NULL, NULL, &t1137_TI, NULL, NULL, &t1137__CustomAttributeCache, &t1137_TI, &t1137_0_0_0, &t1137_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#include "t1138.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1138_TI;
#include "t1138MD.h"



// Metadata Definition System.Runtime.Remoting.Messaging.ArgInfoType
extern Il2CppType t462_0_0_1542;
FieldInfo t1138_f1_FieldInfo = 
{
	"value__", &t462_0_0_1542, &t1138_TI, offsetof(t1138, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1138_0_0_32854;
FieldInfo t1138_f2_FieldInfo = 
{
	"In", &t1138_0_0_32854, &t1138_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1138_0_0_32854;
FieldInfo t1138_f3_FieldInfo = 
{
	"Out", &t1138_0_0_32854, &t1138_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1138_FIs[] =
{
	&t1138_f1_FieldInfo,
	&t1138_f2_FieldInfo,
	&t1138_f3_FieldInfo,
	NULL
};
static const uint8_t t1138_f2_DefaultValueData = 0;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1138_f2_DefaultValue = 
{
	&t1138_f2_FieldInfo, { (char*)&t1138_f2_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1138_f3_DefaultValueData = 1;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1138_f3_DefaultValue = 
{
	&t1138_f3_FieldInfo, { (char*)&t1138_f3_DefaultValueData, &t462_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1138_FDVs[] = 
{
	&t1138_f2_DefaultValue,
	&t1138_f3_DefaultValue,
	NULL
};
static MethodInfo* t1138_MIs[] =
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
static MethodInfo* t1138_VT[] =
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
static Il2CppInterfaceOffsetPair t1138_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1138_0_0_0;
extern Il2CppType t1138_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t462_TI;
extern TypeInfo t462_TI;
TypeInfo t1138_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ArgInfoType", "System.Runtime.Remoting.Messaging", t1138_MIs, NULL, t1138_FIs, NULL, &t15_TI, NULL, NULL, &t462_TI, NULL, t1138_VT, &EmptyCustomAttributesCache, &t462_TI, &t1138_0_0_0, &t1138_1_0_0, t1138_IOs, NULL, NULL, t1138_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1138)+ sizeof (Il2CppObject), sizeof (uint8_t), sizeof(uint8_t), 0, 0, -1, 256, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t1139.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1139_TI;
#include "t1139MD.h"

extern TypeInfo t1139_TI;
extern TypeInfo t731_TI;
extern TypeInfo t733_TI;
extern TypeInfo t732_TI;
extern TypeInfo t822_TI;
extern TypeInfo t134_TI;
extern TypeInfo t131_TI;
extern TypeInfo t125_TI;
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern MethodInfo m452_MI;
extern MethodInfo m3463_MI;
extern MethodInfo m3464_MI;
extern MethodInfo m4327_MI;
extern MethodInfo m5834_MI;


extern MethodInfo m5931_MI;
 void m5931 (t1139 * __this, t731 * p0, uint8_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5931_MI);
	t733* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		m452(__this, &m452_MI);
		__this->f2 = p0;
		t731 * L_0 = (__this->f2);
		NullCheck(L_0);
		t733* L_1 = (t733*)VirtFuncInvoker0< t733* >::Invoke(&m3463_MI, L_0);
		V_0 = L_1;
		NullCheck(V_0);
		__this->f0 = ((t822*)SZArrayNew(InitializedTypeInfo(&t822_TI), (((int32_t)(((t122 *)V_0)->max_length)))));
		__this->f1 = 0;
		if (p1)
		{
			goto IL_0069;
		}
	}
	{
		V_1 = 0;
		goto IL_0061;
	}

IL_0035:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		NullCheck((*(t732 **)(t732 **)SZArrayLdElema(V_0, V_1)));
		t131 * L_2 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3464_MI, (*(t732 **)(t732 **)SZArrayLdElema(V_0, V_1)));
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4327_MI, L_2);
		if (L_3)
		{
			goto IL_005d;
		}
	}
	{
		t822* L_4 = (__this->f0);
		int32_t L_5 = (__this->f1);
		int32_t L_6 = L_5;
		V_3 = L_6;
		__this->f1 = ((int32_t)(L_6+1));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, V_3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, V_3)) = (int32_t)V_1;
	}

IL_005d:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0061:
	{
		NullCheck(V_0);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t122 *)V_0)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00a9;
	}

IL_0069:
	{
		V_2 = 0;
		goto IL_00a3;
	}

IL_006d:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_2);
		NullCheck((*(t732 **)(t732 **)SZArrayLdElema(V_0, V_2)));
		t131 * L_7 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3464_MI, (*(t732 **)(t732 **)SZArrayLdElema(V_0, V_2)));
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4327_MI, L_7);
		if (L_8)
		{
			goto IL_0086;
		}
	}
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_2);
		NullCheck((*(t732 **)(t732 **)SZArrayLdElema(V_0, V_2)));
		bool L_9 = m5834((*(t732 **)(t732 **)SZArrayLdElema(V_0, V_2)), &m5834_MI);
		if (!L_9)
		{
			goto IL_009f;
		}
	}

IL_0086:
	{
		t822* L_10 = (__this->f0);
		int32_t L_11 = (__this->f1);
		int32_t L_12 = L_11;
		V_3 = L_12;
		__this->f1 = ((int32_t)(L_12+1));
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, V_3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, V_3)) = (int32_t)V_2;
	}

IL_009f:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_00a3:
	{
		NullCheck(V_0);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t122 *)V_0)->max_length))))))
		{
			goto IL_006d;
		}
	}

IL_00a9:
	{
		return;
	}
}
extern MethodInfo m5932_MI;
 t158* m5932 (t1139 * __this, t158* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5932_MI);
	t158* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f1);
		V_0 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), L_0));
		V_1 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		t822* L_1 = (__this->f0);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, V_1);
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1)));
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		ArrayElementTypeCheck (V_0, (*(t25 **)(t25 **)SZArrayLdElema(p0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1)))));
		*((t25 **)(t25 **)SZArrayLdElema(V_0, V_1)) = (t25 *)(*(t25 **)(t25 **)SZArrayLdElema(p0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1))));
		V_1 = ((int32_t)(V_1+1));
	}

IL_0021:
	{
		int32_t L_2 = (__this->f1);
		if ((((int32_t)V_1) < ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		return V_0;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.ArgInfo
extern Il2CppType t822_0_0_1;
FieldInfo t1139_f0_FieldInfo = 
{
	"_paramMap", &t822_0_0_1, &t1139_TI, offsetof(t1139, f0), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t1139_f1_FieldInfo = 
{
	"_inoutArgCount", &t134_0_0_1, &t1139_TI, offsetof(t1139, f1), &EmptyCustomAttributesCache};
extern Il2CppType t731_0_0_1;
FieldInfo t1139_f2_FieldInfo = 
{
	"_method", &t731_0_0_1, &t1139_TI, offsetof(t1139, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1139_FIs[] =
{
	&t1139_f0_FieldInfo,
	&t1139_f1_FieldInfo,
	&t1139_f2_FieldInfo,
	NULL
};
extern Il2CppType t731_0_0_0;
extern Il2CppType t1138_0_0_0;
static ParameterInfo t1139_m5931_ParameterInfos[] = 
{
	{"method", 0, 134221403, &EmptyCustomAttributesCache, &t731_0_0_0},
	{"type", 1, 134221404, &EmptyCustomAttributesCache, &t1138_0_0_0},
};
extern TypeInfo t1139_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t462 (MethodInfo* method, void* obj, void** args);
MethodInfo m5931_MI = 
{
	".ctor", (methodPointerType)&m5931, &t1139_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t462, t1139_m5931_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 2975, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t1139_m5932_ParameterInfos[] = 
{
	{"args", 0, 134221405, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t1139_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5932_MI = 
{
	"GetInOutArgs", (methodPointerType)&m5932, &t1139_TI, &t158_0_0_0, RuntimeInvoker_t25_t25, t1139_m5932_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 2976, NULL, (methodPointerType)NULL};
static MethodInfo* t1139_MIs[] =
{
	&m5931_MI,
	&m5932_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1139_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1139_0_0_0;
extern Il2CppType t1139_1_0_0;
extern TypeInfo t25_TI;
struct t1139;
extern TypeInfo t1139_TI;
TypeInfo t1139_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ArgInfo", "System.Runtime.Remoting.Messaging", t1139_MIs, NULL, t1139_FIs, NULL, &t25_TI, NULL, NULL, &t1139_TI, NULL, t1139_VT, &EmptyCustomAttributesCache, &t1139_TI, &t1139_0_0_0, &t1139_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1139), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 3, 0, 0, 4, 0, 0};
#include "t1140.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1140_TI;
#include "t1140MD.h"

#include "t1141.h"
#include "t1023.h"
#include "t1143.h"
#include "t219.h"
extern TypeInfo t1140_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t177_TI;
extern TypeInfo t1141_TI;
extern TypeInfo t125_TI;
extern TypeInfo t219_TI;
extern TypeInfo t123_TI;
extern TypeInfo t218_TI;
#include "t1023MD.h"
#include "t1141MD.h"
#include "t1327MD.h"
#include "t219MD.h"
extern MethodInfo m6922_MI;
extern MethodInfo m6921_MI;
extern MethodInfo m6923_MI;
extern MethodInfo m452_MI;
extern MethodInfo m566_MI;
extern MethodInfo m5935_MI;
extern MethodInfo m6957_MI;
extern MethodInfo m6916_MI;
extern MethodInfo m4408_MI;


extern MethodInfo m5933_MI;
 void m5933 (t1140 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5933_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m5934_MI;
 t25 * m5934 (t1140 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5934_MI);
	{
		t25 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m5935_MI;
 t1141 * m5935 (t1140 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5935_MI);
	t1140 * V_0 = {0};
	t1141 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		V_0 = __this;
		m6922(NULL, V_0, &m6922_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1141 * L_0 = (__this->f1);
			if (L_0)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_1 = (__this->f6);
			t1023 * L_2 = (t1023 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1023_TI));
			m6921(L_2, L_1, &m6921_MI);
			__this->f1 = L_2;
		}

IL_0021:
		{
			t1141 * L_3 = (__this->f1);
			V_1 = L_3;
			// IL_0028: leave.s IL_0033
			leaveInstructions[0] = 0x33; // 1
			THROW_SENTINEL(IL_0033);
			// finally target depth: 1
		}

IL_002a:
		{
			// IL_002a: leave.s IL_0033
			leaveInstructions[0] = 0x33; // 1
			THROW_SENTINEL(IL_0033);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_002c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_002c;
	}

IL_002c:
	{ // begin finally (depth: 1)
		m6923(NULL, V_0, &m6923_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x33:
				goto IL_0033;
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

IL_0033:
	{
		return V_1;
	}
}
extern MethodInfo m5936_MI;
 bool m5936 (t1140 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5936_MI);
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m5937_MI;
 bool m5937 (t1140 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5937_MI);
	{
		bool L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m5938_MI;
 bool m5938 (t1140 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5938_MI);
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m5939_MI;
 void m5939 (t1140 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5939_MI);
	{
		__this->f7 = p0;
		return;
	}
}
extern MethodInfo m5940_MI;
 t25 * m5940 (t1140 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5940_MI);
	{
		t25 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m5941_MI;
 t25 * m5941 (t1140 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5941_MI);
	{
		return (t25 *)NULL;
	}
}
extern MethodInfo m5942_MI;
 t25 * m5942 (t1140 * __this, t25 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5942_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m566(L_0, &m566_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m5943_MI;
 t25 * m5943 (t1140 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5943_MI);
	{
		t25 * L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m5944_MI;
 void m5944 (t1140 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5944_MI);
	{
		__this->f12 = p0;
		return;
	}
}
extern MethodInfo m5945_MI;
 void m5945 (t1140 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5945_MI);
	{
		__this->f5 = p0;
		return;
	}
}
extern MethodInfo m5946_MI;
 t25 * m5946 (t1140 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5946_MI);
	t1140 * V_0 = {0};
	t25 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		V_0 = __this;
		m6922(NULL, V_0, &m6922_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = (__this->f6);
			if (!L_0)
			{
				goto IL_0019;
			}
		}

IL_0010:
		{
			t25 * L_1 = (__this->f13);
			V_1 = L_1;
			// IL_0017: leave.s IL_0035
			leaveInstructions[0] = 0x35; // 1
			THROW_SENTINEL(IL_0035);
			// finally target depth: 1
		}

IL_0019:
		{
			// IL_0019: leave.s IL_0022
			leaveInstructions[0] = 0x22; // 1
			THROW_SENTINEL(IL_0022);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_001b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_001b;
	}

IL_001b:
	{ // begin finally (depth: 1)
		m6923(NULL, V_0, &m6923_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x35:
				goto IL_0035;
			case 0x22:
				goto IL_0022;
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

IL_0022:
	{
		t1141 * L_2 = (t1141 *)VirtFuncInvoker0< t1141 * >::Invoke(&m5935_MI, __this);
		NullCheck(L_2);
		VirtFuncInvoker0< bool >::Invoke(&m6957_MI, L_2);
		t25 * L_3 = (__this->f13);
		return L_3;
	}

IL_0035:
	{
		return V_1;
	}
}
extern MethodInfo m5947_MI;
 t25 * m5947 (t1140 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5947_MI);
	t1140 * V_0 = {0};
	t219 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		__this->f13 = p0;
		V_0 = __this;
		m6922(NULL, V_0, &m6922_MI);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			__this->f6 = 1;
			t1141 * L_0 = (__this->f1);
			if (!L_0)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			t1141 * L_1 = (t1141 *)VirtFuncInvoker0< t1141 * >::Invoke(&m5935_MI, __this);
			NullCheck(((t1023 *)Castclass(L_1, InitializedTypeInfo(&t1023_TI))));
			m6916(((t1023 *)Castclass(L_1, InitializedTypeInfo(&t1023_TI))), &m6916_MI);
		}

IL_002f:
		{
			// IL_002f: leave.s IL_0038
			leaveInstructions[0] = 0x38; // 1
			THROW_SENTINEL(IL_0038);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0031;
	}

IL_0031:
	{ // begin finally (depth: 1)
		m6923(NULL, V_0, &m6923_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x38:
				goto IL_0038;
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

IL_0038:
	{
		t25 * L_2 = (__this->f8);
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		t25 * L_3 = (__this->f8);
		V_1 = ((t219 *)Castclass(L_3, InitializedTypeInfo(&t219_TI)));
		NullCheck(V_1);
		VirtActionInvoker1< t25 * >::Invoke(&m4408_MI, V_1, __this);
	}

IL_0053:
	{
		return (t25 *)NULL;
	}
}
extern MethodInfo m5948_MI;
 t1143 * m5948 (t1140 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5948_MI);
	{
		t1143 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m5949_MI;
 void m5949 (t1140 * __this, t1143 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5949_MI);
	{
		__this->f11 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.AsyncResult
extern Il2CppType t25_0_0_1;
FieldInfo t1140_f0_FieldInfo = 
{
	"async_state", &t25_0_0_1, &t1140_TI, offsetof(t1140, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1141_0_0_1;
FieldInfo t1140_f1_FieldInfo = 
{
	"handle", &t1141_0_0_1, &t1140_TI, offsetof(t1140, f1), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_1;
FieldInfo t1140_f2_FieldInfo = 
{
	"async_delegate", &t25_0_0_1, &t1140_TI, offsetof(t1140, f2), &EmptyCustomAttributesCache};
extern Il2CppType t61_0_0_1;
FieldInfo t1140_f3_FieldInfo = 
{
	"data", &t61_0_0_1, &t1140_TI, offsetof(t1140, f3), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_1;
FieldInfo t1140_f4_FieldInfo = 
{
	"object_data", &t25_0_0_1, &t1140_TI, offsetof(t1140, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1140_f5_FieldInfo = 
{
	"sync_completed", &t125_0_0_1, &t1140_TI, offsetof(t1140, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1140_f6_FieldInfo = 
{
	"completed", &t125_0_0_1, &t1140_TI, offsetof(t1140, f6), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1140_f7_FieldInfo = 
{
	"endinvoke_called", &t125_0_0_1, &t1140_TI, offsetof(t1140, f7), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_1;
FieldInfo t1140_f8_FieldInfo = 
{
	"async_callback", &t25_0_0_1, &t1140_TI, offsetof(t1140, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1142_0_0_1;
FieldInfo t1140_f9_FieldInfo = 
{
	"current", &t1142_0_0_1, &t1140_TI, offsetof(t1140, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1142_0_0_1;
FieldInfo t1140_f10_FieldInfo = 
{
	"original", &t1142_0_0_1, &t1140_TI, offsetof(t1140, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1143_0_0_1;
FieldInfo t1140_f11_FieldInfo = 
{
	"call_message", &t1143_0_0_1, &t1140_TI, offsetof(t1140, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1144_0_0_1;
FieldInfo t1140_f12_FieldInfo = 
{
	"message_ctrl", &t1144_0_0_1, &t1140_TI, offsetof(t1140, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1145_0_0_1;
FieldInfo t1140_f13_FieldInfo = 
{
	"reply_message", &t1145_0_0_1, &t1140_TI, offsetof(t1140, f13), &EmptyCustomAttributesCache};
static FieldInfo* t1140_FIs[] =
{
	&t1140_f0_FieldInfo,
	&t1140_f1_FieldInfo,
	&t1140_f2_FieldInfo,
	&t1140_f3_FieldInfo,
	&t1140_f4_FieldInfo,
	&t1140_f5_FieldInfo,
	&t1140_f6_FieldInfo,
	&t1140_f7_FieldInfo,
	&t1140_f8_FieldInfo,
	&t1140_f9_FieldInfo,
	&t1140_f10_FieldInfo,
	&t1140_f11_FieldInfo,
	&t1140_f12_FieldInfo,
	&t1140_f13_FieldInfo,
	NULL
};
extern MethodInfo m5934_MI;
static PropertyInfo t1140____AsyncState_PropertyInfo = 
{
	&t1140_TI, "AsyncState", &m5934_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5935_MI;
static PropertyInfo t1140____AsyncWaitHandle_PropertyInfo = 
{
	&t1140_TI, "AsyncWaitHandle", &m5935_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5936_MI;
static PropertyInfo t1140____CompletedSynchronously_PropertyInfo = 
{
	&t1140_TI, "CompletedSynchronously", &m5936_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5937_MI;
static PropertyInfo t1140____IsCompleted_PropertyInfo = 
{
	&t1140_TI, "IsCompleted", &m5937_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5938_MI;
extern MethodInfo m5939_MI;
static PropertyInfo t1140____EndInvokeCalled_PropertyInfo = 
{
	&t1140_TI, "EndInvokeCalled", &m5938_MI, &m5939_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5940_MI;
static PropertyInfo t1140____AsyncDelegate_PropertyInfo = 
{
	&t1140_TI, "AsyncDelegate", &m5940_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5941_MI;
static PropertyInfo t1140____NextSink_PropertyInfo = 
{
	&t1140_TI, "NextSink", &m5941_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5948_MI;
extern MethodInfo m5949_MI;
static PropertyInfo t1140____CallMessage_PropertyInfo = 
{
	&t1140_TI, "CallMessage", &m5948_MI, &m5949_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1140_PIs[] =
{
	&t1140____AsyncState_PropertyInfo,
	&t1140____AsyncWaitHandle_PropertyInfo,
	&t1140____CompletedSynchronously_PropertyInfo,
	&t1140____IsCompleted_PropertyInfo,
	&t1140____EndInvokeCalled_PropertyInfo,
	&t1140____AsyncDelegate_PropertyInfo,
	&t1140____NextSink_PropertyInfo,
	&t1140____CallMessage_PropertyInfo,
	NULL
};
extern TypeInfo t1140_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5933_MI = 
{
	".ctor", (methodPointerType)&m5933, &t1140_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 2977, NULL, (methodPointerType)NULL};
extern TypeInfo t1140_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5934_MI = 
{
	"get_AsyncState", (methodPointerType)&m5934, &t1140_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2502, 0, 4, 0, false, false, 2978, NULL, (methodPointerType)NULL};
extern TypeInfo t1140_TI;
extern Il2CppType t1141_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5935_MI = 
{
	"get_AsyncWaitHandle", (methodPointerType)&m5935, &t1140_TI, &t1141_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2502, 0, 5, 0, false, false, 2979, NULL, (methodPointerType)NULL};
extern TypeInfo t1140_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5936_MI = 
{
	"get_CompletedSynchronously", (methodPointerType)&m5936, &t1140_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 2980, NULL, (methodPointerType)NULL};
extern TypeInfo t1140_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5937_MI = 
{
	"get_IsCompleted", (methodPointerType)&m5937, &t1140_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2502, 0, 7, 0, false, false, 2981, NULL, (methodPointerType)NULL};
extern TypeInfo t1140_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m5938_MI = 
{
	"get_EndInvokeCalled", (methodPointerType)&m5938, &t1140_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 2982, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1140_m5939_ParameterInfos[] = 
{
	{"value", 0, 134221406, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1140_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m5939_MI = 
{
	"set_EndInvokeCalled", (methodPointerType)&m5939, &t1140_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t1140_m5939_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 2983, NULL, (methodPointerType)NULL};
extern TypeInfo t1140_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5940_MI = 
{
	"get_AsyncDelegate", (methodPointerType)&m5940, &t1140_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 2984, NULL, (methodPointerType)NULL};
extern TypeInfo t1140_TI;
extern Il2CppType t809_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5941_MI = 
{
	"get_NextSink", (methodPointerType)&m5941, &t1140_TI, &t809_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, false, 2985, NULL, (methodPointerType)NULL};
extern Il2CppType t1145_0_0_0;
extern Il2CppType t809_0_0_0;
static ParameterInfo t1140_m5942_ParameterInfos[] = 
{
	{"msg", 0, 134221407, &EmptyCustomAttributesCache, &t1145_0_0_0},
	{"replySink", 1, 134221408, &EmptyCustomAttributesCache, &t809_0_0_0},
};
extern TypeInfo t1140_TI;
extern Il2CppType t1144_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5942_MI = 
{
	"AsyncProcessMessage", (methodPointerType)&m5942, &t1140_TI, &t1144_0_0_0, RuntimeInvoker_t25_t25_t25, t1140_m5942_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 2, false, false, 2986, NULL, (methodPointerType)NULL};
extern TypeInfo t1140_TI;
extern Il2CppType t1145_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5943_MI = 
{
	"GetReplyMessage", (methodPointerType)&m5943, &t1140_TI, &t1145_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 454, 0, 11, 0, false, false, 2987, NULL, (methodPointerType)NULL};
extern Il2CppType t1144_0_0_0;
static ParameterInfo t1140_m5944_ParameterInfos[] = 
{
	{"mc", 0, 134221409, &EmptyCustomAttributesCache, &t1144_0_0_0},
};
extern TypeInfo t1140_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5944_MI = 
{
	"SetMessageCtrl", (methodPointerType)&m5944, &t1140_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1140_m5944_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 12, 1, false, false, 2988, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1140_m5945_ParameterInfos[] = 
{
	{"completed", 0, 134221410, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1140_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m5945_MI = 
{
	"SetCompletedSynchronously", (methodPointerType)&m5945, &t1140_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t1140_m5945_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 2989, NULL, (methodPointerType)NULL};
extern TypeInfo t1140_TI;
extern Il2CppType t1145_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5946_MI = 
{
	"EndInvoke", (methodPointerType)&m5946, &t1140_TI, &t1145_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 2990, NULL, (methodPointerType)NULL};
extern Il2CppType t1145_0_0_0;
static ParameterInfo t1140_m5947_ParameterInfos[] = 
{
	{"msg", 0, 134221411, &EmptyCustomAttributesCache, &t1145_0_0_0},
};
extern TypeInfo t1140_TI;
extern Il2CppType t1145_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5947_MI = 
{
	"SyncProcessMessage", (methodPointerType)&m5947, &t1140_TI, &t1145_0_0_0, RuntimeInvoker_t25_t25, t1140_m5947_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 1, false, false, 2991, NULL, (methodPointerType)NULL};
extern TypeInfo t1140_TI;
extern Il2CppType t1143_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5948_MI = 
{
	"get_CallMessage", (methodPointerType)&m5948, &t1140_TI, &t1143_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 2992, NULL, (methodPointerType)NULL};
extern Il2CppType t1143_0_0_0;
static ParameterInfo t1140_m5949_ParameterInfos[] = 
{
	{"value", 0, 134221412, &EmptyCustomAttributesCache, &t1143_0_0_0},
};
extern TypeInfo t1140_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5949_MI = 
{
	"set_CallMessage", (methodPointerType)&m5949, &t1140_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1140_m5949_ParameterInfos, &EmptyCustomAttributesCache, 2179, 0, 255, 1, false, false, 2993, NULL, (methodPointerType)NULL};
static MethodInfo* t1140_MIs[] =
{
	&m5933_MI,
	&m5934_MI,
	&m5935_MI,
	&m5936_MI,
	&m5937_MI,
	&m5938_MI,
	&m5939_MI,
	&m5940_MI,
	&m5941_MI,
	&m5942_MI,
	&m5943_MI,
	&m5944_MI,
	&m5945_MI,
	&m5946_MI,
	&m5947_MI,
	&m5948_MI,
	&m5949_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m5934_MI;
extern MethodInfo m5935_MI;
extern MethodInfo m5936_MI;
extern MethodInfo m5937_MI;
extern MethodInfo m5940_MI;
extern MethodInfo m5941_MI;
extern MethodInfo m5942_MI;
extern MethodInfo m5943_MI;
extern MethodInfo m5944_MI;
extern MethodInfo m5947_MI;
static MethodInfo* t1140_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m5934_MI,
	&m5935_MI,
	&m5936_MI,
	&m5937_MI,
	&m5940_MI,
	&m5941_MI,
	&m5942_MI,
	&m5943_MI,
	&m5944_MI,
	&m5947_MI,
};
extern TypeInfo t218_TI;
extern TypeInfo t809_TI;
static TypeInfo* t1140_ITIs[] = 
{
	&t218_TI,
	&t809_TI,
};
extern TypeInfo t218_TI;
extern TypeInfo t809_TI;
static Il2CppInterfaceOffsetPair t1140_IOs[] = 
{
	{ &t218_TI, 4},
	{ &t809_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1140_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1140__CustomAttributeCache = {
1,
NULL,
&t1140_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1140_0_0_0;
extern Il2CppType t1140_1_0_0;
extern TypeInfo t25_TI;
struct t1140;
extern TypeInfo t1140_TI;
extern CustomAttributesCache t1140__CustomAttributeCache;
TypeInfo t1140_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsyncResult", "System.Runtime.Remoting.Messaging", t1140_MIs, t1140_PIs, t1140_FIs, NULL, &t25_TI, NULL, NULL, &t1140_TI, t1140_ITIs, t1140_VT, &t1140__CustomAttributeCache, &t1140_TI, &t1140_0_0_0, &t1140_1_0_0, t1140_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1140), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 17, 8, 14, 0, 0, 14, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1120_TI;

#include "t1146.h"
#include "t1147.h"
#include "t586.h"
extern TypeInfo t1120_TI;
extern TypeInfo t131_TI;
extern TypeInfo t931_TI;
extern TypeInfo t1146_TI;
extern TypeInfo t846_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1147_TI;
extern TypeInfo t586_TI;
extern TypeInfo t123_TI;
extern TypeInfo t134_TI;
extern TypeInfo t125_TI;
extern TypeInfo t1119_TI;
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t823_TI;
extern TypeInfo t824_TI;
extern TypeInfo t759_TI;
#include "t1146MD.h"
#include "t1147MD.h"
#include "t1148MD.h"
#include "t586MD.h"
extern MethodInfo m4346_MI;
extern MethodInfo m4830_MI;
extern MethodInfo m5989_MI;
extern MethodInfo m5980_MI;
extern MethodInfo m3518_MI;
extern MethodInfo m5979_MI;
extern MethodInfo m5964_MI;
extern MethodInfo m6010_MI;
extern MethodInfo m7976_MI;
extern MethodInfo m7977_MI;
extern MethodInfo m7978_MI;
extern MethodInfo m5982_MI;
extern MethodInfo m5983_MI;
extern MethodInfo m7919_MI;
extern MethodInfo m6271_MI;


extern MethodInfo m5950_MI;
 void m5950 (t1120 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5950_MI);
	{
		m5980(__this, &m5980_MI);
		__this->f14 = p0;
		NullCheck(p0);
		t27* L_0 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, p0);
		__this->f15 = L_0;
		__this->f16 = 1;
		return;
	}
}
extern MethodInfo m5951_MI;
 void m5951 (t1120 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5951_MI);
	{
		m5979(__this, p0, p1, &m5979_MI);
		return;
	}
}
extern MethodInfo m5952_MI;
 void m5952 (t1120 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5952_MI);
	t1147 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1147_TI));
		t1147 * L_0 = (t1147 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1147_TI));
		m5964(L_0, __this, &m5964_MI);
		V_0 = L_0;
		__this->f8 = V_0;
		NullCheck(V_0);
		t25 * L_1 = m6010(V_0, &m6010_MI);
		__this->f9 = L_1;
		return;
	}
}
extern MethodInfo m5953_MI;
 void m5953 (t1120 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5953_MI);
	{
		__this->f16 = p0;
		return;
	}
}
extern MethodInfo m5954_MI;
 t131 * m5954 (t1120 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5954_MI);
	{
		t131 * L_0 = (__this->f14);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t27* L_1 = (__this->f15);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_2 = m4346(NULL, L_1, &m4346_MI);
		__this->f14 = L_2;
	}

IL_0019:
	{
		t131 * L_3 = (__this->f14);
		return L_3;
	}
}
extern MethodInfo m5955_MI;
 t27* m5955 (t1120 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5955_MI);
	{
		t27* L_0 = (__this->f15);
		return L_0;
	}
}
extern MethodInfo m5956_MI;
 t25 * m5956 (t1120 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5956_MI);
	{
		t25 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m5957_MI;
 void m5957 (t1120 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5957_MI);
	{
		__this->f11 = p0;
		return;
	}
}
extern MethodInfo m5958_MI;
 t158* m5958 (t1120 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5958_MI);
	{
		t158* L_0 = (__this->f12);
		return L_0;
	}
}
extern MethodInfo m5959_MI;
 void m5959 (t1120 * __this, t158* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5959_MI);
	{
		__this->f12 = p0;
		return;
	}
}
extern MethodInfo m5960_MI;
 t25 * m5960 (t1120 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5960_MI);
	{
		t25 * L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t931_TI));
		t931 * L_1 = (t931 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t931_TI));
		m4830(L_1, &m4830_MI);
		__this->f13 = L_1;
	}

IL_0013:
	{
		t25 * L_2 = (__this->f13);
		return L_2;
	}
}
extern MethodInfo m5961_MI;
 void m5961 (t1120 * __this, t27* p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5961_MI);
	t27* V_0 = {0};
	t586 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = p0;
		if (!V_0)
		{
			goto IL_00c4;
		}
	}
	{
		if ((((t1120_SFs*)InitializedTypeInfo(&t1120_TI)->static_fields)->f17))
		{
			goto IL_0058;
		}
	}
	{
		t586 * L_0 = (t586 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t586_TI));
		m7976(L_0, 5, &m7976_MI);
		V_1 = L_0;
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral962, 0);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral963, 1);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral964, 2);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral965, 3);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral966, 4);
		((t1120_SFs*)InitializedTypeInfo(&t1120_TI)->static_fields)->f17 = V_1;
	}

IL_0058:
	{
		NullCheck((((t1120_SFs*)InitializedTypeInfo(&t1120_TI)->static_fields)->f17));
		bool L_1 = (bool)VirtFuncInvoker2< bool, t27*, int32_t* >::Invoke(&m7978_MI, (((t1120_SFs*)InitializedTypeInfo(&t1120_TI)->static_fields)->f17), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_00c4;
		}
	}
	{
		if (V_2 == 0)
		{
			goto IL_0083;
		}
		if (V_2 == 1)
		{
			goto IL_0090;
		}
		if (V_2 == 2)
		{
			goto IL_009d;
		}
		if (V_2 == 3)
		{
			goto IL_00aa;
		}
		if (V_2 == 4)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00c4;
	}

IL_0083:
	{
		__this->f11 = ((t25 *)Castclass(p1, InitializedTypeInfo(&t1119_TI)));
		return;
	}

IL_0090:
	{
		__this->f12 = ((t158*)Castclass(p1, InitializedTypeInfo(&t158_TI)));
		return;
	}

IL_009d:
	{
		__this->f14 = ((t131 *)Castclass(p1, InitializedTypeInfo(&t131_TI)));
		return;
	}

IL_00aa:
	{
		__this->f13 = ((t25 *)Castclass(p1, InitializedTypeInfo(&t1132_TI)));
		return;
	}

IL_00b7:
	{
		__this->f15 = ((t27*)Castclass(p1, (&t27_TI)));
		return;
	}

IL_00c4:
	{
		m5982(__this, p0, p1, &m5982_MI);
		return;
	}
}
extern MethodInfo m5962_MI;
 void m5962 (t1120 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5962_MI);
	t25 * V_0 = {0};
	{
		m5983(__this, p0, p1, &m5983_MI);
		t25 * L_0 = (__this->f13);
		V_0 = L_0;
		if (!V_0)
		{
			goto IL_001c;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m7919_MI, V_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		V_0 = (t25 *)NULL;
	}

IL_001c:
	{
		t25 * L_2 = (__this->f11);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral962, L_2, &m6271_MI);
		t158* L_3 = (__this->f12);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral963, (t25 *)(t25 *)L_3, &m6271_MI);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral964, NULL, &m6271_MI);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral965, V_0, &m6271_MI);
		t27* L_4 = (__this->f15);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral966, L_4, &m6271_MI);
		return;
	}
}
extern MethodInfo m5963_MI;
 t25 * m5963 (t1120 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5963_MI);
	{
		t25 * L_0 = m5989(__this, &m5989_MI);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.ConstructionCall
extern Il2CppType t1119_0_0_1;
FieldInfo t1120_f11_FieldInfo = 
{
	"_activator", &t1119_0_0_1, &t1120_TI, offsetof(t1120, f11), &EmptyCustomAttributesCache};
extern Il2CppType t158_0_0_1;
FieldInfo t1120_f12_FieldInfo = 
{
	"_activationAttributes", &t158_0_0_1, &t1120_TI, offsetof(t1120, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1132_0_0_1;
FieldInfo t1120_f13_FieldInfo = 
{
	"_contextProperties", &t1132_0_0_1, &t1120_TI, offsetof(t1120, f13), &EmptyCustomAttributesCache};
extern Il2CppType t131_0_0_1;
FieldInfo t1120_f14_FieldInfo = 
{
	"_activationType", &t131_0_0_1, &t1120_TI, offsetof(t1120, f14), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
FieldInfo t1120_f15_FieldInfo = 
{
	"_activationTypeName", &t27_0_0_1, &t1120_TI, offsetof(t1120, f15), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1120_f16_FieldInfo = 
{
	"_isContextOk", &t125_0_0_1, &t1120_TI, offsetof(t1120, f16), &EmptyCustomAttributesCache};
extern Il2CppType t586_0_0_17;
extern CustomAttributesCache t1120__CustomAttributeCache_U3CU3Ef__switch$map20;
FieldInfo t1120_f17_FieldInfo = 
{
	"<>f__switch$map20", &t586_0_0_17, &t1120_TI, offsetof(t1120_SFs, f17), &t1120__CustomAttributeCache_U3CU3Ef__switch$map20};
static FieldInfo* t1120_FIs[] =
{
	&t1120_f11_FieldInfo,
	&t1120_f12_FieldInfo,
	&t1120_f13_FieldInfo,
	&t1120_f14_FieldInfo,
	&t1120_f15_FieldInfo,
	&t1120_f16_FieldInfo,
	&t1120_f17_FieldInfo,
	NULL
};
extern MethodInfo m5953_MI;
static PropertyInfo t1120____IsContextOk_PropertyInfo = 
{
	&t1120_TI, "IsContextOk", NULL, &m5953_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5954_MI;
static PropertyInfo t1120____ActivationType_PropertyInfo = 
{
	&t1120_TI, "ActivationType", &m5954_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5955_MI;
static PropertyInfo t1120____ActivationTypeName_PropertyInfo = 
{
	&t1120_TI, "ActivationTypeName", &m5955_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5956_MI;
extern MethodInfo m5957_MI;
static PropertyInfo t1120____Activator_PropertyInfo = 
{
	&t1120_TI, "Activator", &m5956_MI, &m5957_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5958_MI;
static PropertyInfo t1120____CallSiteActivationAttributes_PropertyInfo = 
{
	&t1120_TI, "CallSiteActivationAttributes", &m5958_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5960_MI;
static PropertyInfo t1120____ContextProperties_PropertyInfo = 
{
	&t1120_TI, "ContextProperties", &m5960_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5963_MI;
static PropertyInfo t1120____Properties_PropertyInfo = 
{
	&t1120_TI, "Properties", &m5963_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1120_PIs[] =
{
	&t1120____IsContextOk_PropertyInfo,
	&t1120____ActivationType_PropertyInfo,
	&t1120____ActivationTypeName_PropertyInfo,
	&t1120____Activator_PropertyInfo,
	&t1120____CallSiteActivationAttributes_PropertyInfo,
	&t1120____ContextProperties_PropertyInfo,
	&t1120____Properties_PropertyInfo,
	NULL
};
extern Il2CppType t131_0_0_0;
static ParameterInfo t1120_m5950_ParameterInfos[] = 
{
	{"type", 0, 134221413, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1120_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5950_MI = 
{
	".ctor", (methodPointerType)&m5950, &t1120_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1120_m5950_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 2994, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1120_m5951_ParameterInfos[] = 
{
	{"info", 0, 134221414, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221415, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1120_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m5951_MI = 
{
	".ctor", (methodPointerType)&m5951, &t1120_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1120_m5951_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 2995, NULL, (methodPointerType)NULL};
extern TypeInfo t1120_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5952_MI = 
{
	"InitDictionary", (methodPointerType)&m5952, &t1120_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 195, 0, 16, 0, false, false, 2996, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1120_m5953_ParameterInfos[] = 
{
	{"value", 0, 134221416, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1120_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m5953_MI = 
{
	"set_IsContextOk", (methodPointerType)&m5953, &t1120_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t1120_m5953_ParameterInfos, &EmptyCustomAttributesCache, 2179, 0, 255, 1, false, false, 2997, NULL, (methodPointerType)NULL};
extern TypeInfo t1120_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5954_MI = 
{
	"get_ActivationType", (methodPointerType)&m5954, &t1120_TI, &t131_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 19, 0, false, false, 2998, NULL, (methodPointerType)NULL};
extern TypeInfo t1120_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5955_MI = 
{
	"get_ActivationTypeName", (methodPointerType)&m5955, &t1120_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, false, 2999, NULL, (methodPointerType)NULL};
extern TypeInfo t1120_TI;
extern Il2CppType t1119_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5956_MI = 
{
	"get_Activator", (methodPointerType)&m5956, &t1120_TI, &t1119_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 21, 0, false, false, 3000, NULL, (methodPointerType)NULL};
extern Il2CppType t1119_0_0_0;
static ParameterInfo t1120_m5957_ParameterInfos[] = 
{
	{"value", 0, 134221417, &EmptyCustomAttributesCache, &t1119_0_0_0},
};
extern TypeInfo t1120_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5957_MI = 
{
	"set_Activator", (methodPointerType)&m5957, &t1120_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1120_m5957_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 1, false, false, 3001, NULL, (methodPointerType)NULL};
extern TypeInfo t1120_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5958_MI = 
{
	"get_CallSiteActivationAttributes", (methodPointerType)&m5958, &t1120_TI, &t158_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 23, 0, false, false, 3002, NULL, (methodPointerType)NULL};
extern Il2CppType t158_0_0_0;
static ParameterInfo t1120_m5959_ParameterInfos[] = 
{
	{"attributes", 0, 134221418, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t1120_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5959_MI = 
{
	"SetActivationAttributes", (methodPointerType)&m5959, &t1120_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1120_m5959_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 3003, NULL, (methodPointerType)NULL};
extern TypeInfo t1120_TI;
extern Il2CppType t1132_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5960_MI = 
{
	"get_ContextProperties", (methodPointerType)&m5960, &t1120_TI, &t1132_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 24, 0, false, false, 3004, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t1120_m5961_ParameterInfos[] = 
{
	{"key", 0, 134221419, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134221420, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1120_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5961_MI = 
{
	"InitMethodProperty", (methodPointerType)&m5961, &t1120_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1120_m5961_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 13, 2, false, false, 3005, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1120_m5962_ParameterInfos[] = 
{
	{"info", 0, 134221421, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221422, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1120_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m5962_MI = 
{
	"GetObjectData", (methodPointerType)&m5962, &t1120_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1120_m5962_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 14, 2, false, false, 3006, NULL, (methodPointerType)NULL};
extern TypeInfo t1120_TI;
extern Il2CppType t846_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5963_MI = 
{
	"get_Properties", (methodPointerType)&m5963, &t1120_TI, &t846_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 3007, NULL, (methodPointerType)NULL};
static MethodInfo* t1120_MIs[] =
{
	&m5950_MI,
	&m5951_MI,
	&m5952_MI,
	&m5953_MI,
	&m5954_MI,
	&m5955_MI,
	&m5956_MI,
	&m5957_MI,
	&m5958_MI,
	&m5959_MI,
	&m5960_MI,
	&m5961_MI,
	&m5962_MI,
	&m5963_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m5962_MI;
extern MethodInfo m5981_MI;
extern MethodInfo m5984_MI;
extern MethodInfo m5985_MI;
extern MethodInfo m5986_MI;
extern MethodInfo m5987_MI;
extern MethodInfo m5988_MI;
extern MethodInfo m5991_MI;
extern MethodInfo m5992_MI;
extern MethodInfo m5961_MI;
extern MethodInfo m5962_MI;
extern MethodInfo m5963_MI;
extern MethodInfo m5952_MI;
extern MethodInfo m5993_MI;
extern MethodInfo m5994_MI;
extern MethodInfo m5954_MI;
extern MethodInfo m5955_MI;
extern MethodInfo m5956_MI;
extern MethodInfo m5957_MI;
extern MethodInfo m5958_MI;
extern MethodInfo m5960_MI;
static MethodInfo* t1120_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m5962_MI,
	&m5981_MI,
	&m5984_MI,
	&m5985_MI,
	&m5986_MI,
	&m5987_MI,
	&m5988_MI,
	&m5991_MI,
	&m5992_MI,
	&m5961_MI,
	&m5962_MI,
	&m5963_MI,
	&m5952_MI,
	&m5993_MI,
	&m5994_MI,
	&m5954_MI,
	&m5955_MI,
	&m5956_MI,
	&m5957_MI,
	&m5958_MI,
	&m5960_MI,
};
extern TypeInfo t1127_TI;
extern TypeInfo t1145_TI;
extern TypeInfo t1165_TI;
extern TypeInfo t1155_TI;
static TypeInfo* t1120_ITIs[] = 
{
	&t1127_TI,
	&t1145_TI,
	&t1165_TI,
	&t1155_TI,
};
extern TypeInfo t485_TI;
extern TypeInfo t1639_TI;
extern TypeInfo t1145_TI;
extern TypeInfo t1165_TI;
extern TypeInfo t1155_TI;
extern TypeInfo t1640_TI;
extern TypeInfo t1127_TI;
static Il2CppInterfaceOffsetPair t1120_IOs[] = 
{
	{ &t485_TI, 4},
	{ &t1639_TI, 5},
	{ &t1145_TI, 6},
	{ &t1165_TI, 6},
	{ &t1155_TI, 6},
	{ &t1640_TI, 13},
	{ &t1127_TI, 19},
};
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1120_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
#include "t152.h"
#include "t152MD.h"
extern MethodInfo m475_MI;
void t1120_CustomAttributesCacheGenerator_U3CU3Ef__switch$map20(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1120__CustomAttributeCache = {
2,
NULL,
&t1120_CustomAttributesCacheGenerator
};
CustomAttributesCache t1120__CustomAttributeCache_U3CU3Ef__switch$map20 = {
1,
NULL,
&t1120_CustomAttributesCacheGenerator_U3CU3Ef__switch$map20
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1120_0_0_0;
extern Il2CppType t1120_1_0_0;
extern TypeInfo t1146_TI;
struct t1120;
extern TypeInfo t1120_TI;
extern CustomAttributesCache t1120__CustomAttributeCache;
extern CustomAttributesCache t1120__CustomAttributeCache_U3CU3Ef__switch$map20;
TypeInfo t1120_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ConstructionCall", "System.Runtime.Remoting.Messaging", t1120_MIs, t1120_PIs, t1120_FIs, NULL, &t1146_TI, NULL, NULL, &t1120_TI, t1120_ITIs, t1120_VT, &t1120__CustomAttributeCache, &t1120_TI, &t1120_0_0_0, &t1120_1_0_0, t1120_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1120), 0, -1, sizeof(t1120_SFs), 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 14, 7, 7, 0, 0, 25, 4, 7};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1147_TI;

#include "t1148.h"
extern TypeInfo t1147_TI;
extern TypeInfo t548_TI;
extern TypeInfo t27_TI;
extern TypeInfo t586_TI;
extern TypeInfo t123_TI;
extern TypeInfo t134_TI;
extern TypeInfo t125_TI;
extern TypeInfo t1148_TI;
extern TypeInfo t1127_TI;
extern TypeInfo t1119_TI;
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t131_TI;
extern TypeInfo t1132_TI;
extern TypeInfo t445_TI;
extern MethodInfo m6006_MI;
extern MethodInfo m6008_MI;
extern MethodInfo m7976_MI;
extern MethodInfo m7977_MI;
extern MethodInfo m7978_MI;
extern MethodInfo m8288_MI;
extern MethodInfo m8290_MI;
extern MethodInfo m8286_MI;
extern MethodInfo m8291_MI;
extern MethodInfo m8287_MI;
extern MethodInfo m6013_MI;
extern MethodInfo m8289_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m6014_MI;


extern MethodInfo m5964_MI;
 void m5964 (t1147 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5964_MI);
	{
		m6006(__this, p0, &m6006_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1147_TI));
		m6008(__this, (((t1147_SFs*)InitializedTypeInfo(&t1147_TI)->static_fields)->f6), &m6008_MI);
		return;
	}
}
extern MethodInfo m5965_MI;
 void m5965 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5965_MI);
	{
		t548* L_0 = ((t548*)SZArrayNew(InitializedTypeInfo(&t548_TI), ((int32_t)11)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (t27*) &_stringLiteral967);
		*((t27**)(t27**)SZArrayLdElema(L_0, 0)) = (t27*)(t27*) &_stringLiteral967;
		t548* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (t27*) &_stringLiteral968);
		*((t27**)(t27**)SZArrayLdElema(L_1, 1)) = (t27*)(t27*) &_stringLiteral968;
		t548* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (t27*) &_stringLiteral969);
		*((t27**)(t27**)SZArrayLdElema(L_2, 2)) = (t27*)(t27*) &_stringLiteral969;
		t548* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (t27*) &_stringLiteral970);
		*((t27**)(t27**)SZArrayLdElema(L_3, 3)) = (t27*)(t27*) &_stringLiteral970;
		t548* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (t27*) &_stringLiteral971);
		*((t27**)(t27**)SZArrayLdElema(L_4, 4)) = (t27*)(t27*) &_stringLiteral971;
		t548* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (t27*) &_stringLiteral972);
		*((t27**)(t27**)SZArrayLdElema(L_5, 5)) = (t27*)(t27*) &_stringLiteral972;
		t548* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, (t27*) &_stringLiteral963);
		*((t27**)(t27**)SZArrayLdElema(L_6, 6)) = (t27*)(t27*) &_stringLiteral963;
		t548* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 7);
		ArrayElementTypeCheck (L_7, (t27*) &_stringLiteral964);
		*((t27**)(t27**)SZArrayLdElema(L_7, 7)) = (t27*)(t27*) &_stringLiteral964;
		t548* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 8);
		ArrayElementTypeCheck (L_8, (t27*) &_stringLiteral965);
		*((t27**)(t27**)SZArrayLdElema(L_8, 8)) = (t27*)(t27*) &_stringLiteral965;
		t548* L_9 = L_8;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)9));
		ArrayElementTypeCheck (L_9, (t27*) &_stringLiteral962);
		*((t27**)(t27**)SZArrayLdElema(L_9, ((int32_t)9))) = (t27*)(t27*) &_stringLiteral962;
		t548* L_10 = L_9;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)10));
		ArrayElementTypeCheck (L_10, (t27*) &_stringLiteral966);
		*((t27**)(t27**)SZArrayLdElema(L_10, ((int32_t)10))) = (t27*)(t27*) &_stringLiteral966;
		((t1147_SFs*)InitializedTypeInfo(&t1147_TI)->static_fields)->f6 = L_10;
		return;
	}
}
extern MethodInfo m5966_MI;
 t25 * m5966 (t1147 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5966_MI);
	t27* V_0 = {0};
	t586 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = p0;
		if (!V_0)
		{
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1147_TI));
		if ((((t1147_SFs*)InitializedTypeInfo(&t1147_TI)->static_fields)->f7))
		{
			goto IL_0058;
		}
	}
	{
		t586 * L_0 = (t586 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t586_TI));
		m7976(L_0, 5, &m7976_MI);
		V_1 = L_0;
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral962, 0);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral963, 1);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral964, 2);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral965, 3);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral966, 4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1147_TI));
		((t1147_SFs*)InitializedTypeInfo(&t1147_TI)->static_fields)->f7 = V_1;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1147_TI));
		NullCheck((((t1147_SFs*)InitializedTypeInfo(&t1147_TI)->static_fields)->f7));
		bool L_1 = (bool)VirtFuncInvoker2< bool, t27*, int32_t* >::Invoke(&m7978_MI, (((t1147_SFs*)InitializedTypeInfo(&t1147_TI)->static_fields)->f7), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_00d8;
		}
	}
	{
		if (V_2 == 0)
		{
			goto IL_0083;
		}
		if (V_2 == 1)
		{
			goto IL_0094;
		}
		if (V_2 == 2)
		{
			goto IL_00a5;
		}
		if (V_2 == 3)
		{
			goto IL_00b6;
		}
		if (V_2 == 4)
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_00d8;
	}

IL_0083:
	{
		t25 * L_2 = (__this->f1);
		NullCheck(((t25 *)Castclass(L_2, InitializedTypeInfo(&t1127_TI))));
		t25 * L_3 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m8288_MI, ((t25 *)Castclass(L_2, InitializedTypeInfo(&t1127_TI))));
		return L_3;
	}

IL_0094:
	{
		t25 * L_4 = (__this->f1);
		NullCheck(((t25 *)Castclass(L_4, InitializedTypeInfo(&t1127_TI))));
		t158* L_5 = (t158*)InterfaceFuncInvoker0< t158* >::Invoke(&m8290_MI, ((t25 *)Castclass(L_4, InitializedTypeInfo(&t1127_TI))));
		return (t25 *)L_5;
	}

IL_00a5:
	{
		t25 * L_6 = (__this->f1);
		NullCheck(((t25 *)Castclass(L_6, InitializedTypeInfo(&t1127_TI))));
		t131 * L_7 = (t131 *)InterfaceFuncInvoker0< t131 * >::Invoke(&m8286_MI, ((t25 *)Castclass(L_6, InitializedTypeInfo(&t1127_TI))));
		return L_7;
	}

IL_00b6:
	{
		t25 * L_8 = (__this->f1);
		NullCheck(((t25 *)Castclass(L_8, InitializedTypeInfo(&t1127_TI))));
		t25 * L_9 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m8291_MI, ((t25 *)Castclass(L_8, InitializedTypeInfo(&t1127_TI))));
		return L_9;
	}

IL_00c7:
	{
		t25 * L_10 = (__this->f1);
		NullCheck(((t25 *)Castclass(L_10, InitializedTypeInfo(&t1127_TI))));
		t27* L_11 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8287_MI, ((t25 *)Castclass(L_10, InitializedTypeInfo(&t1127_TI))));
		return L_11;
	}

IL_00d8:
	{
		t25 * L_12 = m6013(__this, p0, &m6013_MI);
		return L_12;
	}
}
extern MethodInfo m5967_MI;
 void m5967 (t1147 * __this, t27* p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5967_MI);
	t27* V_0 = {0};
	t586 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = p0;
		if (!V_0)
		{
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1147_TI));
		if ((((t1147_SFs*)InitializedTypeInfo(&t1147_TI)->static_fields)->f8))
		{
			goto IL_0058;
		}
	}
	{
		t586 * L_0 = (t586 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t586_TI));
		m7976(L_0, 5, &m7976_MI);
		V_1 = L_0;
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral962, 0);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral963, 1);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral964, 1);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral965, 1);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral966, 1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1147_TI));
		((t1147_SFs*)InitializedTypeInfo(&t1147_TI)->static_fields)->f8 = V_1;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1147_TI));
		NullCheck((((t1147_SFs*)InitializedTypeInfo(&t1147_TI)->static_fields)->f8));
		bool L_1 = (bool)VirtFuncInvoker2< bool, t27*, int32_t* >::Invoke(&m7978_MI, (((t1147_SFs*)InitializedTypeInfo(&t1147_TI)->static_fields)->f8), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_0093;
		}
	}
	{
		if (!V_2)
		{
			goto IL_0070;
		}
	}
	{
		if ((((int32_t)V_2) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0093;
	}

IL_0070:
	{
		t25 * L_2 = (__this->f1);
		NullCheck(((t25 *)Castclass(L_2, InitializedTypeInfo(&t1127_TI))));
		InterfaceActionInvoker1< t25 * >::Invoke(&m8289_MI, ((t25 *)Castclass(L_2, InitializedTypeInfo(&t1127_TI))), ((t25 *)Castclass(p1, InitializedTypeInfo(&t1119_TI))));
		goto IL_009d;
	}

IL_0088:
	{
		t445 * L_3 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m2409(L_3, (t27*) &_stringLiteral973, &m2409_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0093:
	{
		m6014(__this, p0, p1, &m6014_MI);
		goto IL_009d;
	}

IL_009d:
	{
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.ConstructionCallDictionary
extern Il2CppType t548_0_0_22;
FieldInfo t1147_f6_FieldInfo = 
{
	"InternalKeys", &t548_0_0_22, &t1147_TI, offsetof(t1147_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t586_0_0_17;
extern CustomAttributesCache t1147__CustomAttributeCache_U3CU3Ef__switch$map23;
FieldInfo t1147_f7_FieldInfo = 
{
	"<>f__switch$map23", &t586_0_0_17, &t1147_TI, offsetof(t1147_SFs, f7), &t1147__CustomAttributeCache_U3CU3Ef__switch$map23};
extern Il2CppType t586_0_0_17;
extern CustomAttributesCache t1147__CustomAttributeCache_U3CU3Ef__switch$map24;
FieldInfo t1147_f8_FieldInfo = 
{
	"<>f__switch$map24", &t586_0_0_17, &t1147_TI, offsetof(t1147_SFs, f8), &t1147__CustomAttributeCache_U3CU3Ef__switch$map24};
static FieldInfo* t1147_FIs[] =
{
	&t1147_f6_FieldInfo,
	&t1147_f7_FieldInfo,
	&t1147_f8_FieldInfo,
	NULL
};
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1147_m5964_ParameterInfos[] = 
{
	{"message", 0, 134221423, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern TypeInfo t1147_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5964_MI = 
{
	".ctor", (methodPointerType)&m5964, &t1147_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1147_m5964_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3008, NULL, (methodPointerType)NULL};
extern TypeInfo t1147_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5965_MI = 
{
	".cctor", (methodPointerType)&m5965, &t1147_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3009, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1147_m5966_ParameterInfos[] = 
{
	{"key", 0, 134221424, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1147_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5966_MI = 
{
	"GetMethodProperty", (methodPointerType)&m5966, &t1147_TI, &t25_0_0_0, RuntimeInvoker_t25_t25, t1147_m5966_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 12, 1, false, false, 3010, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t1147_m5967_ParameterInfos[] = 
{
	{"key", 0, 134221425, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134221426, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1147_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5967_MI = 
{
	"SetMethodProperty", (methodPointerType)&m5967, &t1147_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1147_m5967_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 13, 2, false, false, 3011, NULL, (methodPointerType)NULL};
static MethodInfo* t1147_MIs[] =
{
	&m5964_MI,
	&m5965_MI,
	&m5966_MI,
	&m5967_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6007_MI;
extern MethodInfo m6017_MI;
extern MethodInfo m6018_MI;
extern MethodInfo m6019_MI;
extern MethodInfo m6020_MI;
extern MethodInfo m6012_MI;
extern MethodInfo m6021_MI;
extern MethodInfo m6009_MI;
extern MethodInfo m5966_MI;
extern MethodInfo m5967_MI;
extern MethodInfo m6015_MI;
extern MethodInfo m6016_MI;
static MethodInfo* t1147_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6007_MI,
	&m6017_MI,
	&m6018_MI,
	&m6019_MI,
	&m6020_MI,
	&m6012_MI,
	&m6021_MI,
	&m6009_MI,
	&m5966_MI,
	&m5967_MI,
	&m6015_MI,
	&m6016_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t846_TI;
static Il2CppInterfaceOffsetPair t1147_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t846_TI, 9},
};
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t1147_CustomAttributesCacheGenerator_U3CU3Ef__switch$map23(CustomAttributesCache* cache)
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
void t1147_CustomAttributesCacheGenerator_U3CU3Ef__switch$map24(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1147__CustomAttributeCache_U3CU3Ef__switch$map23 = {
1,
NULL,
&t1147_CustomAttributesCacheGenerator_U3CU3Ef__switch$map23
};
CustomAttributesCache t1147__CustomAttributeCache_U3CU3Ef__switch$map24 = {
1,
NULL,
&t1147_CustomAttributesCacheGenerator_U3CU3Ef__switch$map24
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1147_0_0_0;
extern Il2CppType t1147_1_0_0;
extern TypeInfo t1148_TI;
struct t1147;
extern TypeInfo t1147_TI;
extern CustomAttributesCache t1147__CustomAttributeCache_U3CU3Ef__switch$map23;
extern CustomAttributesCache t1147__CustomAttributeCache_U3CU3Ef__switch$map24;
TypeInfo t1147_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ConstructionCallDictionary", "System.Runtime.Remoting.Messaging", t1147_MIs, NULL, t1147_FIs, NULL, &t1148_TI, NULL, NULL, &t1147_TI, NULL, t1147_VT, &EmptyCustomAttributesCache, &t1147_TI, &t1147_0_0_0, &t1147_1_0_0, t1147_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1147), 0, -1, sizeof(t1147_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 4, 0, 3, 0, 0, 16, 0, 3};
#include "t1149.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1149_TI;
#include "t1149MD.h"

extern TypeInfo t1149_TI;
extern MethodInfo m452_MI;
extern MethodInfo m5968_MI;


extern MethodInfo m5968_MI;
 void m5968 (t1149 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5968_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m5969_MI;
 void m5969 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5969_MI);
	{
		t1149 * L_0 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5968(L_0, &m5968_MI);
		((t1149_SFs*)InitializedTypeInfo(&t1149_TI)->static_fields)->f0 = L_0;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
extern Il2CppType t1149_0_0_22;
FieldInfo t1149_f0_FieldInfo = 
{
	"Instance", &t1149_0_0_22, &t1149_TI, offsetof(t1149_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1149_FIs[] =
{
	&t1149_f0_FieldInfo,
	NULL
};
extern TypeInfo t1149_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5968_MI = 
{
	".ctor", (methodPointerType)&m5968, &t1149_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3012, NULL, (methodPointerType)NULL};
extern TypeInfo t1149_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5969_MI = 
{
	".cctor", (methodPointerType)&m5969, &t1149_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3013, NULL, (methodPointerType)NULL};
static MethodInfo* t1149_MIs[] =
{
	&m5968_MI,
	&m5969_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1149_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t809_TI;
static TypeInfo* t1149_ITIs[] = 
{
	&t809_TI,
};
extern TypeInfo t809_TI;
static Il2CppInterfaceOffsetPair t1149_IOs[] = 
{
	{ &t809_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1149_0_0_0;
extern Il2CppType t1149_1_0_0;
extern TypeInfo t25_TI;
struct t1149;
extern TypeInfo t1149_TI;
TypeInfo t1149_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EnvoyTerminatorSink", "System.Runtime.Remoting.Messaging", t1149_MIs, NULL, t1149_FIs, NULL, &t25_TI, NULL, NULL, &t1149_TI, t1149_ITIs, t1149_VT, &EmptyCustomAttributesCache, &t1149_TI, &t1149_0_0_0, &t1149_1_0_0, t1149_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1149), 0, -1, sizeof(t1149_SFs), 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 2, 0, 1, 0, 0, 4, 1, 1};
#include "t1150.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1150_TI;
#include "t1150MD.h"

extern TypeInfo t1150_TI;
extern MethodInfo m5971_MI;
extern MethodInfo m5972_MI;
extern MethodInfo m452_MI;


extern MethodInfo m5970_MI;
 void m5970 (t1150 * __this, t27* p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5970_MI);
	{
		m5971(__this, p0, p1, 1, &m5971_MI);
		return;
	}
}
extern MethodInfo m5971_MI;
 void m5971 (t1150 * __this, t27* p0, t25 * p1, bool p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5971_MI);
	{
		m5972(__this, p0, p1, p2, (t27*)NULL, &m5972_MI);
		return;
	}
}
extern MethodInfo m5972_MI;
 void m5972 (t1150 * __this, t27* p0, t25 * p1, bool p2, t27* p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5972_MI);
	{
		m452(__this, &m452_MI);
		__this->f2 = p0;
		__this->f3 = p1;
		__this->f1 = p2;
		__this->f0 = p3;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.Header
extern Il2CppType t27_0_0_6;
FieldInfo t1150_f0_FieldInfo = 
{
	"HeaderNamespace", &t27_0_0_6, &t1150_TI, offsetof(t1150, f0), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1150_f1_FieldInfo = 
{
	"MustUnderstand", &t125_0_0_6, &t1150_TI, offsetof(t1150, f1), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_6;
FieldInfo t1150_f2_FieldInfo = 
{
	"Name", &t27_0_0_6, &t1150_TI, offsetof(t1150, f2), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_6;
FieldInfo t1150_f3_FieldInfo = 
{
	"Value", &t25_0_0_6, &t1150_TI, offsetof(t1150, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1150_FIs[] =
{
	&t1150_f0_FieldInfo,
	&t1150_f1_FieldInfo,
	&t1150_f2_FieldInfo,
	&t1150_f3_FieldInfo,
	NULL
};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t1150_m5970_ParameterInfos[] = 
{
	{"_Name", 0, 134221427, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"_Value", 1, 134221428, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1150_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5970_MI = 
{
	".ctor", (methodPointerType)&m5970, &t1150_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1150_m5970_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3014, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1150_m5971_ParameterInfos[] = 
{
	{"_Name", 0, 134221429, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"_Value", 1, 134221430, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"_MustUnderstand", 2, 134221431, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1150_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m5971_MI = 
{
	".ctor", (methodPointerType)&m5971, &t1150_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t137, t1150_m5971_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 3015, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t27_0_0_0;
static ParameterInfo t1150_m5972_ParameterInfos[] = 
{
	{"_Name", 0, 134221432, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"_Value", 1, 134221433, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"_MustUnderstand", 2, 134221434, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"_HeaderNamespace", 3, 134221435, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1150_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t137_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5972_MI = 
{
	".ctor", (methodPointerType)&m5972, &t1150_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t137_t25, t1150_m5972_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 3016, NULL, (methodPointerType)NULL};
static MethodInfo* t1150_MIs[] =
{
	&m5970_MI,
	&m5971_MI,
	&m5972_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1150_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1150_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1150__CustomAttributeCache = {
1,
NULL,
&t1150_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1150_0_0_0;
extern Il2CppType t1150_1_0_0;
extern TypeInfo t25_TI;
struct t1150;
extern TypeInfo t1150_TI;
extern CustomAttributesCache t1150__CustomAttributeCache;
TypeInfo t1150_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Header", "System.Runtime.Remoting.Messaging", t1150_MIs, NULL, t1150_FIs, NULL, &t25_TI, NULL, NULL, &t1150_TI, NULL, t1150_VT, &t1150__CustomAttributeCache, &t1150_TI, &t1150_0_0_0, &t1150_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1150), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 4, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1639_TI;



// Metadata Definition System.Runtime.Remoting.Messaging.IInternalMessage
extern MethodInfo m8298_MI;
static PropertyInfo t1639____Uri_PropertyInfo = 
{
	&t1639_TI, "Uri", NULL, &m8298_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1639_PIs[] =
{
	&t1639____Uri_PropertyInfo,
	NULL
};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1639_m8298_ParameterInfos[] = 
{
	{"value", 0, 134221436, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1639_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8298_MI = 
{
	"set_Uri", NULL, &t1639_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1639_m8298_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 0, 1, false, false, 3017, NULL, (methodPointerType)NULL};
static MethodInfo* t1639_MIs[] =
{
	&m8298_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1639_0_0_0;
extern Il2CppType t1639_1_0_0;
struct t1639;
extern TypeInfo t1639_TI;
TypeInfo t1639_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IInternalMessage", "System.Runtime.Remoting.Messaging", t1639_MIs, t1639_PIs, NULL, NULL, NULL, NULL, NULL, &t1639_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1639_TI, &t1639_0_0_0, &t1639_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 160, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1145_TI;



// Metadata Definition System.Runtime.Remoting.Messaging.IMessage
static MethodInfo* t1145_MIs[] =
{
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1145_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1145__CustomAttributeCache = {
1,
NULL,
&t1145_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1145_0_0_0;
extern Il2CppType t1145_1_0_0;
struct t1145;
extern TypeInfo t1145_TI;
extern CustomAttributesCache t1145__CustomAttributeCache;
TypeInfo t1145_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IMessage", "System.Runtime.Remoting.Messaging", t1145_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1145_TI, NULL, NULL, &t1145__CustomAttributeCache, &t1145_TI, &t1145_0_0_0, &t1145_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1144_TI;



// Metadata Definition System.Runtime.Remoting.Messaging.IMessageCtrl
static MethodInfo* t1144_MIs[] =
{
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1144_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1144__CustomAttributeCache = {
1,
NULL,
&t1144_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1144_0_0_0;
extern Il2CppType t1144_1_0_0;
struct t1144;
extern TypeInfo t1144_TI;
extern CustomAttributesCache t1144__CustomAttributeCache;
TypeInfo t1144_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IMessageCtrl", "System.Runtime.Remoting.Messaging", t1144_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1144_TI, NULL, NULL, &t1144__CustomAttributeCache, &t1144_TI, &t1144_0_0_0, &t1144_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t809_TI;



// Metadata Definition System.Runtime.Remoting.Messaging.IMessageSink
static MethodInfo* t809_MIs[] =
{
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t809_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t809__CustomAttributeCache = {
1,
NULL,
&t809_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t809_0_0_0;
extern Il2CppType t809_1_0_0;
struct t809;
extern TypeInfo t809_TI;
extern CustomAttributesCache t809__CustomAttributeCache;
TypeInfo t809_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IMessageSink", "System.Runtime.Remoting.Messaging", t809_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t809_TI, NULL, NULL, &t809__CustomAttributeCache, &t809_TI, &t809_0_0_0, &t809_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1165_TI;



// Metadata Definition System.Runtime.Remoting.Messaging.IMethodCallMessage
static MethodInfo* t1165_MIs[] =
{
	NULL
};
extern TypeInfo t1145_TI;
extern TypeInfo t1155_TI;
static TypeInfo* t1165_ITIs[] = 
{
	&t1145_TI,
	&t1155_TI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1165_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1165__CustomAttributeCache = {
1,
NULL,
&t1165_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1165_0_0_0;
extern Il2CppType t1165_1_0_0;
struct t1165;
extern TypeInfo t1165_TI;
extern CustomAttributesCache t1165__CustomAttributeCache;
TypeInfo t1165_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IMethodCallMessage", "System.Runtime.Remoting.Messaging", t1165_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1165_TI, t1165_ITIs, NULL, &t1165__CustomAttributeCache, &t1165_TI, &t1165_0_0_0, &t1165_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1155_TI;

#include "t1151.h"


// Metadata Definition System.Runtime.Remoting.Messaging.IMethodMessage
extern MethodInfo m8299_MI;
static PropertyInfo t1155____Args_PropertyInfo = 
{
	&t1155_TI, "Args", &m8299_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8300_MI;
static PropertyInfo t1155____LogicalCallContext_PropertyInfo = 
{
	&t1155_TI, "LogicalCallContext", &m8300_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8301_MI;
static PropertyInfo t1155____MethodBase_PropertyInfo = 
{
	&t1155_TI, "MethodBase", &m8301_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8302_MI;
static PropertyInfo t1155____MethodName_PropertyInfo = 
{
	&t1155_TI, "MethodName", &m8302_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8303_MI;
static PropertyInfo t1155____MethodSignature_PropertyInfo = 
{
	&t1155_TI, "MethodSignature", &m8303_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8304_MI;
static PropertyInfo t1155____TypeName_PropertyInfo = 
{
	&t1155_TI, "TypeName", &m8304_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8305_MI;
static PropertyInfo t1155____Uri_PropertyInfo = 
{
	&t1155_TI, "Uri", &m8305_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1155_PIs[] =
{
	&t1155____Args_PropertyInfo,
	&t1155____LogicalCallContext_PropertyInfo,
	&t1155____MethodBase_PropertyInfo,
	&t1155____MethodName_PropertyInfo,
	&t1155____MethodSignature_PropertyInfo,
	&t1155____TypeName_PropertyInfo,
	&t1155____Uri_PropertyInfo,
	NULL
};
extern TypeInfo t1155_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8299_MI = 
{
	"get_Args", NULL, &t1155_TI, &t158_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3018, NULL, (methodPointerType)NULL};
extern TypeInfo t1155_TI;
extern Il2CppType t1151_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8300_MI = 
{
	"get_LogicalCallContext", NULL, &t1155_TI, &t1151_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, false, 3019, NULL, (methodPointerType)NULL};
extern TypeInfo t1155_TI;
extern Il2CppType t731_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8301_MI = 
{
	"get_MethodBase", NULL, &t1155_TI, &t731_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 2, 0, false, false, 3020, NULL, (methodPointerType)NULL};
extern TypeInfo t1155_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8302_MI = 
{
	"get_MethodName", NULL, &t1155_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 3, 0, false, false, 3021, NULL, (methodPointerType)NULL};
extern TypeInfo t1155_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8303_MI = 
{
	"get_MethodSignature", NULL, &t1155_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 4, 0, false, false, 3022, NULL, (methodPointerType)NULL};
extern TypeInfo t1155_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8304_MI = 
{
	"get_TypeName", NULL, &t1155_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 5, 0, false, false, 3023, NULL, (methodPointerType)NULL};
extern TypeInfo t1155_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8305_MI = 
{
	"get_Uri", NULL, &t1155_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 6, 0, false, false, 3024, NULL, (methodPointerType)NULL};
static MethodInfo* t1155_MIs[] =
{
	&m8299_MI,
	&m8300_MI,
	&m8301_MI,
	&m8302_MI,
	&m8303_MI,
	&m8304_MI,
	&m8305_MI,
	NULL
};
extern TypeInfo t1145_TI;
static TypeInfo* t1155_ITIs[] = 
{
	&t1145_TI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1155_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1155__CustomAttributeCache = {
1,
NULL,
&t1155_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1155_0_0_0;
extern Il2CppType t1155_1_0_0;
struct t1155;
extern TypeInfo t1155_TI;
extern CustomAttributesCache t1155__CustomAttributeCache;
TypeInfo t1155_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IMethodMessage", "System.Runtime.Remoting.Messaging", t1155_MIs, t1155_PIs, NULL, NULL, NULL, NULL, NULL, &t1155_TI, t1155_ITIs, NULL, &t1155__CustomAttributeCache, &t1155_TI, &t1155_0_0_0, &t1155_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 7, 7, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1158_TI;



// Metadata Definition System.Runtime.Remoting.Messaging.IMethodReturnMessage
extern MethodInfo m8306_MI;
static PropertyInfo t1158____Exception_PropertyInfo = 
{
	&t1158_TI, "Exception", &m8306_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8307_MI;
static PropertyInfo t1158____OutArgs_PropertyInfo = 
{
	&t1158_TI, "OutArgs", &m8307_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m8308_MI;
static PropertyInfo t1158____ReturnValue_PropertyInfo = 
{
	&t1158_TI, "ReturnValue", &m8308_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1158_PIs[] =
{
	&t1158____Exception_PropertyInfo,
	&t1158____OutArgs_PropertyInfo,
	&t1158____ReturnValue_PropertyInfo,
	NULL
};
extern TypeInfo t1158_TI;
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8306_MI = 
{
	"get_Exception", NULL, &t1158_TI, &t168_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3025, NULL, (methodPointerType)NULL};
extern TypeInfo t1158_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8307_MI = 
{
	"get_OutArgs", NULL, &t1158_TI, &t158_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, false, 3026, NULL, (methodPointerType)NULL};
extern TypeInfo t1158_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8308_MI = 
{
	"get_ReturnValue", NULL, &t1158_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 2, 0, false, false, 3027, NULL, (methodPointerType)NULL};
static MethodInfo* t1158_MIs[] =
{
	&m8306_MI,
	&m8307_MI,
	&m8308_MI,
	NULL
};
extern TypeInfo t1145_TI;
extern TypeInfo t1155_TI;
static TypeInfo* t1158_ITIs[] = 
{
	&t1145_TI,
	&t1155_TI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1158_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1158__CustomAttributeCache = {
1,
NULL,
&t1158_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1158_0_0_0;
extern Il2CppType t1158_1_0_0;
struct t1158;
extern TypeInfo t1158_TI;
extern CustomAttributesCache t1158__CustomAttributeCache;
TypeInfo t1158_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IMethodReturnMessage", "System.Runtime.Remoting.Messaging", t1158_MIs, t1158_PIs, NULL, NULL, NULL, NULL, NULL, &t1158_TI, t1158_ITIs, NULL, &t1158__CustomAttributeCache, &t1158_TI, &t1158_0_0_0, &t1158_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 3, 3, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1641_TI;



// Metadata Definition System.Runtime.Remoting.Messaging.IRemotingFormatter
static MethodInfo* t1641_MIs[] =
{
	NULL
};
extern TypeInfo t1642_TI;
static TypeInfo* t1641_ITIs[] = 
{
	&t1642_TI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1641_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1641__CustomAttributeCache = {
1,
NULL,
&t1641_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1641_0_0_0;
extern Il2CppType t1641_1_0_0;
struct t1641;
extern TypeInfo t1641_TI;
extern CustomAttributesCache t1641__CustomAttributeCache;
TypeInfo t1641_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IRemotingFormatter", "System.Runtime.Remoting.Messaging", t1641_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1641_TI, t1641_ITIs, NULL, &t1641__CustomAttributeCache, &t1641_TI, &t1641_0_0_0, &t1641_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1640_TI;



// Metadata Definition System.Runtime.Remoting.Messaging.ISerializationRootObject
static MethodInfo* t1640_MIs[] =
{
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1640_0_0_0;
extern Il2CppType t1640_1_0_0;
struct t1640;
extern TypeInfo t1640_TI;
TypeInfo t1640_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISerializationRootObject", "System.Runtime.Remoting.Messaging", t1640_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1640_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1640_TI, &t1640_0_0_0, &t1640_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 160, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
