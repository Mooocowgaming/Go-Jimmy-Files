#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1151.h"
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
extern TypeInfo t1151_TI;
#include "t1151MD.h"

#include "t123.h"
#include "t1152.h"
#include "t823.h"
#include "t824.h"
#include "t1222.h"
#include "t1225.h"
#include "t27.h"
#include "t125.h"
#include "t25.h"
#include "t944.h"
#include "t972.h"
extern TypeInfo t1152_TI;
extern TypeInfo t1151_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1225_TI;
extern TypeInfo t125_TI;
extern TypeInfo t972_TI;
extern TypeInfo t950_TI;
extern TypeInfo t78_TI;
extern TypeInfo t25_TI;
extern TypeInfo t944_TI;
extern TypeInfo t167_TI;
extern TypeInfo t123_TI;
#include "t1152MD.h"
#include "t25MD.h"
#include "t823MD.h"
#include "t1225MD.h"
#include "t1222MD.h"
#include "t27MD.h"
#include "t972MD.h"
#include "t944MD.h"
extern MethodInfo m5977_MI;
extern MethodInfo m452_MI;
extern MethodInfo m6263_MI;
extern MethodInfo m6279_MI;
extern MethodInfo m6254_MI;
extern MethodInfo m386_MI;
extern MethodInfo m6255_MI;
extern MethodInfo m5976_MI;
extern MethodInfo m6282_MI;
extern MethodInfo m6271_MI;
extern MethodInfo m4919_MI;
extern MethodInfo m504_MI;
extern MethodInfo m4878_MI;
extern MethodInfo m4879_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m4900_MI;
extern MethodInfo m4915_MI;

#include "t122.h"

extern MethodInfo m5973_MI;
 void m5973 (t1151 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5973_MI);
	{
		t1152 * L_0 = (t1152 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1152_TI));
		m5977(L_0, &m5977_MI);
		__this->f1 = L_0;
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m5974_MI;
 void m5974 (t1151 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5974_MI);
	t1222  V_0 = {0};
	t1225 * V_1 = {0};
	{
		t1152 * L_0 = (t1152 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1152_TI));
		m5977(L_0, &m5977_MI);
		__this->f1 = L_0;
		m452(__this, &m452_MI);
		NullCheck(p0);
		t1225 * L_1 = m6263(p0, &m6263_MI);
		V_1 = L_1;
		goto IL_005c;
	}

IL_001a:
	{
		NullCheck(V_1);
		t1222  L_2 = m6279(V_1, &m6279_MI);
		V_0 = L_2;
		t27* L_3 = m6254((&V_0), &m6254_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_4 = m386(NULL, L_3, (t27*) &_stringLiteral974, &m386_MI);
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		t25 * L_5 = m6255((&V_0), &m6255_MI);
		__this->f1 = ((t1152 *)Castclass(L_5, InitializedTypeInfo(&t1152_TI)));
		goto IL_005c;
	}

IL_0048:
	{
		t27* L_6 = m6254((&V_0), &m6254_MI);
		t25 * L_7 = m6255((&V_0), &m6255_MI);
		m5976(__this, L_6, L_7, &m5976_MI);
	}

IL_005c:
	{
		NullCheck(V_1);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6282_MI, V_1);
		if (L_8)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
extern MethodInfo m5975_MI;
 void m5975 (t1151 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5975_MI);
	t944  V_0 = {0};
	t25 * V_1 = {0};
	t25 * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t1152 * L_0 = (__this->f1);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral974, L_0, &m6271_MI);
		t972 * L_1 = (__this->f0);
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		t972 * L_2 = (__this->f0);
		NullCheck(L_2);
		t25 * L_3 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4919_MI, L_2);
		V_1 = L_3;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004c;
		}

IL_0027:
		{
			NullCheck(V_1);
			t25 * L_4 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m504_MI, V_1);
			V_0 = ((*(t944 *)((t944 *)UnBox (L_4, InitializedTypeInfo(&t944_TI)))));
			t25 * L_5 = m4878((&V_0), &m4878_MI);
			t25 * L_6 = m4879((&V_0), &m4879_MI);
			NullCheck(p0);
			m6271(p0, ((t27*)Castclass(L_5, (&t27_TI))), L_6, &m6271_MI);
		}

IL_004c:
		{
			NullCheck(V_1);
			bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m506_MI, V_1);
			if (L_7)
			{
				goto IL_0027;
			}
		}

IL_0054:
		{
			// IL_0054: leave.s IL_0068
			leaveInstructions[0] = 0x68; // 1
			THROW_SENTINEL(IL_0068);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0056;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0056;
	}

IL_0056:
	{ // begin finally (depth: 1)
		{
			V_2 = ((t25 *)IsInst(V_1, InitializedTypeInfo(&t167_TI)));
			if (V_2)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x68:
					goto IL_0068;
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

IL_0061:
		{
			NullCheck(V_2);
			InterfaceActionInvoker0::Invoke(&m507_MI, V_2);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x68:
					goto IL_0068;
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

IL_0068:
	{
		return;
	}
}
extern MethodInfo m5976_MI;
 void m5976 (t1151 * __this, t27* p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5976_MI);
	{
		t972 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t972_TI));
		t972 * L_1 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_1, &m4900_MI);
		__this->f0 = L_1;
	}

IL_0013:
	{
		t972 * L_2 = (__this->f0);
		NullCheck(L_2);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4915_MI, L_2, p0, p1);
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.LogicalCallContext
extern Il2CppType t972_0_0_1;
FieldInfo t1151_f0_FieldInfo = 
{
	"_data", &t972_0_0_1, &t1151_TI, offsetof(t1151, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1152_0_0_1;
FieldInfo t1151_f1_FieldInfo = 
{
	"_remotingData", &t1152_0_0_1, &t1151_TI, offsetof(t1151, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1151_FIs[] =
{
	&t1151_f0_FieldInfo,
	&t1151_f1_FieldInfo,
	NULL
};
extern TypeInfo t1151_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5973_MI = 
{
	".ctor", (methodPointerType)&m5973, &t1151_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 3028, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1151_m5974_ParameterInfos[] = 
{
	{"info", 0, 134221437, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221438, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1151_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m5974_MI = 
{
	".ctor", (methodPointerType)&m5974, &t1151_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1151_m5974_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 3029, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1151_m5975_ParameterInfos[] = 
{
	{"info", 0, 134221439, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221440, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1151_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m5975_MI = 
{
	"GetObjectData", (methodPointerType)&m5975, &t1151_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1151_m5975_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 2, false, false, 3030, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t1151_m5976_ParameterInfos[] = 
{
	{"name", 0, 134221441, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"data", 1, 134221442, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1151_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5976_MI = 
{
	"SetData", (methodPointerType)&m5976, &t1151_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1151_m5976_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3031, NULL, (methodPointerType)NULL};
static MethodInfo* t1151_MIs[] =
{
	&m5973_MI,
	&m5974_MI,
	&m5975_MI,
	&m5976_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m5975_MI;
static MethodInfo* t1151_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m5975_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static TypeInfo* t1151_ITIs[] = 
{
	&t484_TI,
	&t485_TI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t1151_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern TypeInfo t541_TI;
#include "t541.h"
#include "t541MD.h"
extern MethodInfo m2528_MI;
void t1151_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1151__CustomAttributeCache = {
1,
NULL,
&t1151_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1151_0_0_0;
extern Il2CppType t1151_1_0_0;
extern TypeInfo t25_TI;
struct t1151;
extern TypeInfo t1151_TI;
extern CustomAttributesCache t1151__CustomAttributeCache;
TypeInfo t1151_TI = 
{
	&g_mscorlib_dll_Image, NULL, "LogicalCallContext", "System.Runtime.Remoting.Messaging", t1151_MIs, NULL, t1151_FIs, NULL, &t25_TI, NULL, NULL, &t1151_TI, t1151_ITIs, t1151_VT, &t1151__CustomAttributeCache, &t1151_TI, &t1151_0_0_0, &t1151_1_0_0, t1151_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1151), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 2, 0, 0, 5, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1152_TI;

extern MethodInfo m452_MI;


extern MethodInfo m5977_MI;
 void m5977 (t1152 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5977_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.CallContextRemotingData
extern TypeInfo t1152_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5977_MI = 
{
	".ctor", (methodPointerType)&m5977, &t1152_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3032, NULL, (methodPointerType)NULL};
static MethodInfo* t1152_MIs[] =
{
	&m5977_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1152_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t484_TI;
static TypeInfo* t1152_ITIs[] = 
{
	&t484_TI,
};
extern TypeInfo t484_TI;
static Il2CppInterfaceOffsetPair t1152_IOs[] = 
{
	{ &t484_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1152_0_0_0;
extern Il2CppType t1152_1_0_0;
extern TypeInfo t25_TI;
struct t1152;
extern TypeInfo t1152_TI;
TypeInfo t1152_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CallContextRemotingData", "System.Runtime.Remoting.Messaging", t1152_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t1152_TI, t1152_ITIs, t1152_VT, &EmptyCustomAttributesCache, &t1152_TI, &t1152_0_0_0, &t1152_1_0_0, t1152_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1152), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 1, 1};
#include "t1146.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1146_TI;
#include "t1146MD.h"

#include "mscorlib_ArrayTypes.h"
#include "t731.h"
#include "t438.h"
#include "t732.h"
#include "t134.h"
#include "t131.h"
#include "t1150.h"
#include "t586.h"
#include "t1154.h"
#include "t1183.h"
#include "t657.h"
#include "t344.h"
extern TypeInfo t1146_TI;
extern TypeInfo t123_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1151_TI;
extern TypeInfo t438_TI;
extern TypeInfo t731_TI;
extern TypeInfo t733_TI;
extern TypeInfo t732_TI;
extern TypeInfo t637_TI;
extern TypeInfo t131_TI;
extern TypeInfo t1150_TI;
extern TypeInfo t25_TI;
extern TypeInfo t1225_TI;
extern TypeInfo t125_TI;
extern TypeInfo t586_TI;
extern TypeInfo t134_TI;
extern TypeInfo t158_TI;
extern TypeInfo t846_TI;
extern TypeInfo t950_TI;
extern TypeInfo t78_TI;
extern TypeInfo t944_TI;
extern TypeInfo t167_TI;
extern TypeInfo t1154_TI;
extern TypeInfo t1184_TI;
extern TypeInfo t1183_TI;
extern TypeInfo t548_TI;
extern TypeInfo t657_TI;
#include "t438MD.h"
#include "t731MD.h"
#include "t732MD.h"
#include "t131MD.h"
#include "t586MD.h"
#include "t1154MD.h"
#include "t1148MD.h"
#include "t1184MD.h"
#include "t1183MD.h"
#include "t657MD.h"
extern MethodInfo m5993_MI;
extern MethodInfo m5973_MI;
extern MethodInfo m5995_MI;
extern MethodInfo m3448_MI;
extern MethodInfo m3463_MI;
extern MethodInfo m3464_MI;
extern MethodInfo m5990_MI;
extern MethodInfo m3461_MI;
extern MethodInfo m3518_MI;
extern MethodInfo m5986_MI;
extern MethodInfo m5692_MI;
extern MethodInfo m452_MI;
extern MethodInfo m5994_MI;
extern MethodInfo m5982_MI;
extern MethodInfo m6263_MI;
extern MethodInfo m6279_MI;
extern MethodInfo m6254_MI;
extern MethodInfo m6255_MI;
extern MethodInfo m6282_MI;
extern MethodInfo m7976_MI;
extern MethodInfo m7977_MI;
extern MethodInfo m7978_MI;
extern MethodInfo m5989_MI;
extern MethodInfo m8237_MI;
extern MethodInfo m6271_MI;
extern MethodInfo m8238_MI;
extern MethodInfo m504_MI;
extern MethodInfo m4878_MI;
extern MethodInfo m4879_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m5999_MI;
extern MethodInfo m6010_MI;
extern MethodInfo m6119_MI;
extern MethodInfo m532_MI;
extern MethodInfo m3450_MI;
extern MethodInfo m6114_MI;
extern MethodInfo m5996_MI;
extern MethodInfo m3520_MI;
extern MethodInfo m3945_MI;
extern MethodInfo m6124_MI;
extern MethodInfo m1927_MI;
extern MethodInfo m4332_MI;
extern MethodInfo m6117_MI;
extern MethodInfo m6123_MI;
extern MethodInfo m5991_MI;
extern MethodInfo m5695_MI;
extern MethodInfo m5693_MI;
extern MethodInfo m5998_MI;
extern MethodInfo m5699_MI;
extern MethodInfo m5997_MI;
extern MethodInfo m386_MI;
extern MethodInfo m3432_MI;
extern MethodInfo m7960_MI;
extern MethodInfo m3453_MI;
extern MethodInfo m3925_MI;
extern MethodInfo m2236_MI;
extern MethodInfo m3449_MI;


extern MethodInfo m5978_MI;
 void m5978 (t1146 * __this, t1153* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5978_MI);
	t1150 * V_0 = {0};
	t1153* V_1 = {0};
	int32_t V_2 = 0;
	{
		m452(__this, &m452_MI);
		VirtActionInvoker0::Invoke(&m5994_MI, __this);
		if (!p0)
		{
			goto IL_0014;
		}
	}
	{
		NullCheck(p0);
		if ((((int32_t)(((t122 *)p0)->max_length))))
		{
			goto IL_0015;
		}
	}

IL_0014:
	{
		return;
	}

IL_0015:
	{
		V_1 = p0;
		V_2 = 0;
		goto IL_0035;
	}

IL_001b:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		V_0 = (*(t1150 **)(t1150 **)SZArrayLdElema(V_1, V_2));
		NullCheck(V_0);
		t27* L_0 = (V_0->f2);
		NullCheck(V_0);
		t25 * L_1 = (V_0->f3);
		VirtActionInvoker2< t27*, t25 * >::Invoke(&m5982_MI, __this, L_0, L_1);
		V_2 = ((int32_t)(V_2+1));
	}

IL_0035:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t122 *)V_1)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		m5995(__this, &m5995_MI);
		return;
	}
}
extern MethodInfo m5979_MI;
 void m5979 (t1146 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5979_MI);
	t1222  V_0 = {0};
	t1225 * V_1 = {0};
	{
		m452(__this, &m452_MI);
		VirtActionInvoker0::Invoke(&m5994_MI, __this);
		NullCheck(p0);
		t1225 * L_0 = m6263(p0, &m6263_MI);
		V_1 = L_0;
		goto IL_0030;
	}

IL_0015:
	{
		NullCheck(V_1);
		t1222  L_1 = m6279(V_1, &m6279_MI);
		V_0 = L_1;
		t27* L_2 = m6254((&V_0), &m6254_MI);
		t25 * L_3 = m6255((&V_0), &m6255_MI);
		VirtActionInvoker2< t27*, t25 * >::Invoke(&m5982_MI, __this, L_2, L_3);
	}

IL_0030:
	{
		NullCheck(V_1);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6282_MI, V_1);
		if (L_4)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
extern MethodInfo m5980_MI;
 void m5980 (t1146 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5980_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m5981_MI;
 void m5981 (t1146 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5981_MI);
	{
		VirtActionInvoker1< t27* >::Invoke(&m5993_MI, __this, p0);
		return;
	}
}
extern MethodInfo m5982_MI;
 void m5982 (t1146 * __this, t27* p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5982_MI);
	t27* V_0 = {0};
	t586 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = p0;
		if (!V_0)
		{
			goto IL_0101;
		}
	}
	{
		if ((((t1146_SFs*)InitializedTypeInfo(&t1146_TI)->static_fields)->f10))
		{
			goto IL_0070;
		}
	}
	{
		t586 * L_0 = (t586 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t586_TI));
		m7976(L_0, 7, &m7976_MI);
		V_1 = L_0;
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral969, 0);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral968, 1);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral970, 2);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral971, 3);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral972, 4);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral967, 5);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral975, 6);
		((t1146_SFs*)InitializedTypeInfo(&t1146_TI)->static_fields)->f10 = V_1;
	}

IL_0070:
	{
		NullCheck((((t1146_SFs*)InitializedTypeInfo(&t1146_TI)->static_fields)->f10));
		bool L_1 = (bool)VirtFuncInvoker2< bool, t27*, int32_t* >::Invoke(&m7978_MI, (((t1146_SFs*)InitializedTypeInfo(&t1146_TI)->static_fields)->f10), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_0101;
		}
	}
	{
		if (V_2 == 0)
		{
			goto IL_00a6;
		}
		if (V_2 == 1)
		{
			goto IL_00b3;
		}
		if (V_2 == 2)
		{
			goto IL_00c0;
		}
		if (V_2 == 3)
		{
			goto IL_00cd;
		}
		if (V_2 == 4)
		{
			goto IL_00da;
		}
		if (V_2 == 5)
		{
			goto IL_00e7;
		}
		if (V_2 == 6)
		{
			goto IL_00f4;
		}
	}
	{
		goto IL_0101;
	}

IL_00a6:
	{
		__this->f1 = ((t27*)Castclass(p1, (&t27_TI)));
		return;
	}

IL_00b3:
	{
		__this->f2 = ((t27*)Castclass(p1, (&t27_TI)));
		return;
	}

IL_00c0:
	{
		__this->f4 = ((t637*)Castclass(p1, InitializedTypeInfo(&t637_TI)));
		return;
	}

IL_00cd:
	{
		__this->f3 = ((t158*)Castclass(p1, InitializedTypeInfo(&t158_TI)));
		return;
	}

IL_00da:
	{
		__this->f6 = ((t1151 *)Castclass(p1, InitializedTypeInfo(&t1151_TI)));
		return;
	}

IL_00e7:
	{
		__this->f0 = ((t27*)Castclass(p1, (&t27_TI)));
		return;
	}

IL_00f4:
	{
		__this->f7 = ((t637*)Castclass(p1, InitializedTypeInfo(&t637_TI)));
		return;
	}

IL_0101:
	{
		t25 * L_2 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m5989_MI, __this);
		NullCheck(L_2);
		InterfaceActionInvoker2< t25 *, t25 * >::Invoke(&m8237_MI, L_2, p0, p1);
		return;
	}
}
extern MethodInfo m5983_MI;
 void m5983 (t1146 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5983_MI);
	t944  V_0 = {0};
	t25 * V_1 = {0};
	t25 * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t27* L_0 = (__this->f1);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral969, L_0, &m6271_MI);
		t27* L_1 = (__this->f2);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral968, L_1, &m6271_MI);
		t637* L_2 = (__this->f4);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral970, (t25 *)(t25 *)L_2, &m6271_MI);
		t158* L_3 = (__this->f3);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral971, (t25 *)(t25 *)L_3, &m6271_MI);
		t1151 * L_4 = (__this->f6);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral972, L_4, &m6271_MI);
		t27* L_5 = (__this->f0);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral967, L_5, &m6271_MI);
		t637* L_6 = (__this->f7);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral975, (t25 *)(t25 *)L_6, &m6271_MI);
		t25 * L_7 = (__this->f9);
		if (!L_7)
		{
			goto IL_00ce;
		}
	}
	{
		t25 * L_8 = (__this->f9);
		NullCheck(L_8);
		t25 * L_9 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m8238_MI, L_8);
		V_1 = L_9;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b2;
		}

IL_008d:
		{
			NullCheck(V_1);
			t25 * L_10 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m504_MI, V_1);
			V_0 = ((*(t944 *)((t944 *)UnBox (L_10, InitializedTypeInfo(&t944_TI)))));
			t25 * L_11 = m4878((&V_0), &m4878_MI);
			t25 * L_12 = m4879((&V_0), &m4879_MI);
			NullCheck(p0);
			m6271(p0, ((t27*)Castclass(L_11, (&t27_TI))), L_12, &m6271_MI);
		}

IL_00b2:
		{
			NullCheck(V_1);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m506_MI, V_1);
			if (L_13)
			{
				goto IL_008d;
			}
		}

IL_00ba:
		{
			// IL_00ba: leave.s IL_00ce
			leaveInstructions[0] = 0xCE; // 1
			THROW_SENTINEL(IL_00ce);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_00bc;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_00bc;
	}

IL_00bc:
	{ // begin finally (depth: 1)
		{
			V_2 = ((t25 *)IsInst(V_1, InitializedTypeInfo(&t167_TI)));
			if (V_2)
			{
				goto IL_00c7;
			}
		}

IL_00c6:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xCE:
					goto IL_00ce;
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

IL_00c7:
		{
			NullCheck(V_2);
			InterfaceActionInvoker0::Invoke(&m507_MI, V_2);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xCE:
					goto IL_00ce;
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

IL_00ce:
	{
		return;
	}
}
extern MethodInfo m5984_MI;
 t158* m5984 (t1146 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5984_MI);
	{
		t158* L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m5985_MI;
 t1151 * m5985 (t1146 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5985_MI);
	{
		t1151 * L_0 = (__this->f6);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1151 * L_1 = (t1151 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1151_TI));
		m5973(L_1, &m5973_MI);
		__this->f6 = L_1;
	}

IL_0013:
	{
		t1151 * L_2 = (__this->f6);
		return L_2;
	}
}
extern MethodInfo m5986_MI;
 t731 * m5986 (t1146 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5986_MI);
	{
		t731 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		m5995(__this, &m5995_MI);
	}

IL_000e:
	{
		t731 * L_1 = (__this->f5);
		return L_1;
	}
}
extern MethodInfo m5987_MI;
 t27* m5987 (t1146 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5987_MI);
	{
		t27* L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t731 * L_1 = (__this->f5);
		NullCheck(L_1);
		t27* L_2 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3448_MI, L_1);
		__this->f2 = L_2;
	}

IL_0019:
	{
		t27* L_3 = (__this->f2);
		return L_3;
	}
}
extern MethodInfo m5988_MI;
 t25 * m5988 (t1146 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5988_MI);
	t733* V_0 = {0};
	int32_t V_1 = 0;
	{
		t637* L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		t731 * L_1 = (__this->f5);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		t731 * L_2 = (__this->f5);
		NullCheck(L_2);
		t733* L_3 = (t733*)VirtFuncInvoker0< t733* >::Invoke(&m3463_MI, L_2);
		V_0 = L_3;
		NullCheck(V_0);
		__this->f4 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), (((int32_t)(((t122 *)V_0)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		t637* L_4 = (__this->f4);
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		NullCheck((*(t732 **)(t732 **)SZArrayLdElema(V_0, V_1)));
		t131 * L_5 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3464_MI, (*(t732 **)(t732 **)SZArrayLdElema(V_0, V_1)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, V_1);
		ArrayElementTypeCheck (L_4, L_5);
		*((t131 **)(t131 **)SZArrayLdElema(L_4, V_1)) = (t131 *)L_5;
		V_1 = ((int32_t)(V_1+1));
	}

IL_0042:
	{
		NullCheck(V_0);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t122 *)V_0)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		t637* L_6 = (__this->f4);
		return (t25 *)L_6;
	}
}
extern MethodInfo m5989_MI;
 t25 * m5989 (t1146 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5989_MI);
	{
		t25 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(&m5990_MI, __this);
	}

IL_000e:
	{
		t25 * L_1 = (__this->f8);
		return L_1;
	}
}
extern MethodInfo m5990_MI;
 void m5990 (t1146 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5990_MI);
	t1154 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1154_TI));
		t1154 * L_0 = (t1154 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1154_TI));
		m5999(L_0, __this, &m5999_MI);
		V_0 = L_0;
		__this->f8 = V_0;
		NullCheck(V_0);
		t25 * L_1 = m6010(V_0, &m6010_MI);
		__this->f9 = L_1;
		return;
	}
}
extern MethodInfo m5991_MI;
 t27* m5991 (t1146 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5991_MI);
	{
		t27* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t731 * L_1 = (__this->f5);
		NullCheck(L_1);
		t131 * L_2 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3461_MI, L_1);
		NullCheck(L_2);
		t27* L_3 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, L_2);
		__this->f1 = L_3;
	}

IL_001e:
	{
		t27* L_4 = (__this->f1);
		return L_4;
	}
}
extern MethodInfo m5992_MI;
 t27* m5992 (t1146 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5992_MI);
	{
		t27* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m5993_MI;
 void m5993 (t1146 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5993_MI);
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m5994_MI;
 void m5994 (t1146 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5994_MI);
	{
		return;
	}
}
extern MethodInfo m5995_MI;
 void m5995 (t1146 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5995_MI);
	t131 * V_0 = {0};
	t27* V_1 = {0};
	t131 * V_2 = {0};
	t27* G_B5_0 = {0};
	{
		t27* L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_0153;
		}
	}
	{
		t27* L_1 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t131 * L_2 = m6119(NULL, L_1, &m6119_MI);
		V_0 = L_2;
		if (V_0)
		{
			goto IL_005b;
		}
	}
	{
		t27* L_3 = (__this->f1);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		t27* L_4 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_5 = m532(NULL, (t27*) &_stringLiteral81, L_4, (t27*) &_stringLiteral82, &m532_MI);
		G_B5_0 = L_5;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		G_B5_0 = (((t27_SFs*)(&t27_TI)->static_fields)->f2);
	}

IL_003e:
	{
		V_1 = G_B5_0;
		t27* L_6 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_7 = m3450(NULL, (t27*) &_stringLiteral976, V_1, (t27*) &_stringLiteral977, L_6, &m3450_MI);
		t1183 * L_8 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m6114(L_8, L_7, &m6114_MI);
		il2cpp_codegen_raise_exception (L_8);
	}

IL_005b:
	{
		t27* L_9 = (__this->f1);
		t131 * L_10 = m5996(__this, L_9, V_0, &m5996_MI);
		V_2 = L_10;
		if (V_2)
		{
			goto IL_00a7;
		}
	}
	{
		t548* L_11 = ((t548*)SZArrayNew(InitializedTypeInfo(&t548_TI), 5));
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, (t27*) &_stringLiteral978);
		*((t27**)(t27**)SZArrayLdElema(L_11, 0)) = (t27*)(t27*) &_stringLiteral978;
		t548* L_12 = L_11;
		t27* L_13 = (__this->f1);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		ArrayElementTypeCheck (L_12, L_13);
		*((t27**)(t27**)SZArrayLdElema(L_12, 1)) = (t27*)L_13;
		t548* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
		ArrayElementTypeCheck (L_14, (t27*) &_stringLiteral979);
		*((t27**)(t27**)SZArrayLdElema(L_14, 2)) = (t27*)(t27*) &_stringLiteral979;
		t548* L_15 = L_14;
		NullCheck(V_0);
		t27* L_16 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, V_0);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 3);
		ArrayElementTypeCheck (L_15, L_16);
		*((t27**)(t27**)SZArrayLdElema(L_15, 3)) = (t27*)L_16;
		t548* L_17 = L_15;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 4);
		ArrayElementTypeCheck (L_17, (t27*) &_stringLiteral75);
		*((t27**)(t27**)SZArrayLdElema(L_17, 4)) = (t27*)(t27*) &_stringLiteral75;
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_18 = m3945(NULL, L_17, &m3945_MI);
		t1183 * L_19 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m6114(L_19, L_18, &m6114_MI);
		il2cpp_codegen_raise_exception (L_19);
	}

IL_00a7:
	{
		t27* L_20 = (__this->f2);
		t637* L_21 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t731 * L_22 = m6124(NULL, V_2, L_20, L_21, &m6124_MI);
		__this->f5 = L_22;
		t731 * L_23 = (__this->f5);
		if (L_23)
		{
			goto IL_00f5;
		}
	}
	{
		t158* L_24 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), 4));
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		ArrayElementTypeCheck (L_24, (t27*) &_stringLiteral980);
		*((t25 **)(t25 **)SZArrayLdElema(L_24, 0)) = (t25 *)(t27*) &_stringLiteral980;
		t158* L_25 = L_24;
		t27* L_26 = (__this->f2);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 1);
		ArrayElementTypeCheck (L_25, L_26);
		*((t25 **)(t25 **)SZArrayLdElema(L_25, 1)) = (t25 *)L_26;
		t158* L_27 = L_25;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 2);
		ArrayElementTypeCheck (L_27, (t27*) &_stringLiteral981);
		*((t25 **)(t25 **)SZArrayLdElema(L_27, 2)) = (t25 *)(t27*) &_stringLiteral981;
		t158* L_28 = L_27;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 3);
		ArrayElementTypeCheck (L_28, V_2);
		*((t25 **)(t25 **)SZArrayLdElema(L_28, 3)) = (t25 *)V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_29 = m1927(NULL, L_28, &m1927_MI);
		t1183 * L_30 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m6114(L_30, L_29, &m6114_MI);
		il2cpp_codegen_raise_exception (L_30);
	}

IL_00f5:
	{
		if ((((t131 *)V_2) == ((t131 *)V_0)))
		{
			goto IL_0151;
		}
	}
	{
		NullCheck(V_2);
		bool L_31 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4332_MI, V_2);
		if (!L_31)
		{
			goto IL_0151;
		}
	}
	{
		NullCheck(V_0);
		bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4332_MI, V_0);
		if (L_32)
		{
			goto IL_0151;
		}
	}
	{
		t731 * L_33 = (__this->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t731 * L_34 = m6117(NULL, V_0, L_33, &m6117_MI);
		__this->f5 = L_34;
		t731 * L_35 = (__this->f5);
		if (L_35)
		{
			goto IL_0151;
		}
	}
	{
		t158* L_36 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), 4));
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 0);
		ArrayElementTypeCheck (L_36, (t27*) &_stringLiteral980);
		*((t25 **)(t25 **)SZArrayLdElema(L_36, 0)) = (t25 *)(t27*) &_stringLiteral980;
		t158* L_37 = L_36;
		t27* L_38 = (__this->f2);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 1);
		ArrayElementTypeCheck (L_37, L_38);
		*((t25 **)(t25 **)SZArrayLdElema(L_37, 1)) = (t25 *)L_38;
		t158* L_39 = L_37;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 2);
		ArrayElementTypeCheck (L_39, (t27*) &_stringLiteral981);
		*((t25 **)(t25 **)SZArrayLdElema(L_39, 2)) = (t25 *)(t27*) &_stringLiteral981;
		t158* L_40 = L_39;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 3);
		ArrayElementTypeCheck (L_40, V_0);
		*((t25 **)(t25 **)SZArrayLdElema(L_40, 3)) = (t25 *)V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_41 = m1927(NULL, L_40, &m1927_MI);
		t1183 * L_42 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m6114(L_42, L_41, &m6114_MI);
		il2cpp_codegen_raise_exception (L_42);
	}

IL_0151:
	{
		goto IL_0188;
	}

IL_0153:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t731 * L_43 = m6123(NULL, __this, &m6123_MI);
		__this->f5 = L_43;
		t731 * L_44 = (__this->f5);
		if (L_44)
		{
			goto IL_0188;
		}
	}
	{
		t27* L_45 = (__this->f2);
		t27* L_46 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5991_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_47 = m3450(NULL, (t27*) &_stringLiteral980, L_45, (t27*) &_stringLiteral981, L_46, &m3450_MI);
		t1183 * L_48 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m6114(L_48, L_47, &m6114_MI);
		il2cpp_codegen_raise_exception (L_48);
	}

IL_0188:
	{
		t731 * L_49 = (__this->f5);
		NullCheck(L_49);
		bool L_50 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5695_MI, L_49);
		if (!L_50)
		{
			goto IL_01d1;
		}
	}
	{
		t731 * L_51 = (__this->f5);
		NullCheck(L_51);
		bool L_52 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5693_MI, L_51);
		if (!L_52)
		{
			goto IL_01d1;
		}
	}
	{
		t637* L_53 = m5998(__this, &m5998_MI);
		if (L_53)
		{
			goto IL_01b5;
		}
	}
	{
		t1183 * L_54 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m6114(L_54, (t27*) &_stringLiteral982, &m6114_MI);
		il2cpp_codegen_raise_exception (L_54);
	}

IL_01b5:
	{
		t731 * L_55 = (__this->f5);
		t637* L_56 = m5998(__this, &m5998_MI);
		NullCheck(((t657 *)Castclass(L_55, InitializedTypeInfo(&t657_TI))));
		t657 * L_57 = (t657 *)VirtFuncInvoker1< t657 *, t637* >::Invoke(&m5699_MI, ((t657 *)Castclass(L_55, InitializedTypeInfo(&t657_TI))), L_56);
		__this->f5 = L_57;
	}

IL_01d1:
	{
		return;
	}
}
extern MethodInfo m5996_MI;
 t131 * m5996 (t1146 * __this, t27* p0, t131 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5996_MI);
	t131 * V_0 = {0};
	t637* V_1 = {0};
	t131 * V_2 = {0};
	t637* V_3 = {0};
	int32_t V_4 = 0;
	{
		t27* L_0 = m5997(NULL, p0, &m5997_MI);
		p0 = L_0;
		NullCheck(p1);
		t27* L_1 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, p1);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_2 = m386(NULL, p0, L_1, &m386_MI);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		return p1;
	}

IL_001a:
	{
		NullCheck(p1);
		t131 * L_3 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3432_MI, p1);
		V_0 = L_3;
		goto IL_003a;
	}

IL_0023:
	{
		NullCheck(V_0);
		t27* L_4 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, V_0);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_5 = m386(NULL, p0, L_4, &m386_MI);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		return V_0;
	}

IL_0033:
	{
		NullCheck(V_0);
		t131 * L_6 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3432_MI, V_0);
		V_0 = L_6;
	}

IL_003a:
	{
		if (V_0)
		{
			goto IL_0023;
		}
	}
	{
		NullCheck(p1);
		t637* L_7 = (t637*)VirtFuncInvoker0< t637* >::Invoke(&m7960_MI, p1);
		V_1 = L_7;
		V_3 = V_1;
		V_4 = 0;
		goto IL_0066;
	}

IL_004b:
	{
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, V_4);
		V_2 = (*(t131 **)(t131 **)SZArrayLdElema(V_3, V_4));
		NullCheck(V_2);
		t27* L_8 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, V_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_9 = m386(NULL, p0, L_8, &m386_MI);
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		return V_2;
	}

IL_0060:
	{
		V_4 = ((int32_t)(V_4+1));
	}

IL_0066:
	{
		NullCheck(V_3);
		if ((((int32_t)V_4) < ((int32_t)(((int32_t)(((t122 *)V_3)->max_length))))))
		{
			goto IL_004b;
		}
	}
	{
		return (t131 *)NULL;
	}
}
extern MethodInfo m5997_MI;
 t27* m5997 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5997_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	t27* G_B2_1 = {0};
	int32_t G_B1_0 = 0;
	t27* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	t27* G_B3_2 = {0};
	{
		NullCheck(p0);
		int32_t L_0 = m3453(p0, (t27*) &_stringLiteral983, &m3453_MI);
		V_0 = L_0;
		G_B1_0 = ((int32_t)44);
		G_B1_1 = p0;
		if ((((uint32_t)V_0) != ((uint32_t)(-1))))
		{
			G_B2_0 = ((int32_t)44);
			G_B2_1 = p0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0019;
	}

IL_0016:
	{
		G_B3_0 = ((int32_t)(V_0+2));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0019:
	{
		NullCheck(G_B3_2);
		int32_t L_1 = m3925(G_B3_2, G_B3_1, G_B3_0, &m3925_MI);
		V_1 = L_1;
		if ((((int32_t)V_1) == ((int32_t)(-1))))
		{
			goto IL_0034;
		}
	}
	{
		NullCheck(p0);
		t27* L_2 = m2236(p0, 0, V_1, &m2236_MI);
		NullCheck(L_2);
		t27* L_3 = m3449(L_2, &m3449_MI);
		p0 = L_3;
	}

IL_0034:
	{
		return p0;
	}
}
extern MethodInfo m5998_MI;
 t637* m5998 (t1146 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5998_MI);
	t637* V_0 = {0};
	{
		t637* L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t637* L_1 = (__this->f7);
		return L_1;
	}

IL_000f:
	{
		t731 * L_2 = (t731 *)VirtFuncInvoker0< t731 * >::Invoke(&m5986_MI, __this);
		NullCheck(L_2);
		t637* L_3 = (t637*)VirtFuncInvoker0< t637* >::Invoke(&m5692_MI, L_2);
		t637* L_4 = L_3;
		V_0 = L_4;
		__this->f7 = L_4;
		return V_0;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.MethodCall
extern Il2CppType t27_0_0_1;
FieldInfo t1146_f0_FieldInfo = 
{
	"_uri", &t27_0_0_1, &t1146_TI, offsetof(t1146, f0), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
FieldInfo t1146_f1_FieldInfo = 
{
	"_typeName", &t27_0_0_1, &t1146_TI, offsetof(t1146, f1), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
FieldInfo t1146_f2_FieldInfo = 
{
	"_methodName", &t27_0_0_1, &t1146_TI, offsetof(t1146, f2), &EmptyCustomAttributesCache};
extern Il2CppType t158_0_0_1;
FieldInfo t1146_f3_FieldInfo = 
{
	"_args", &t158_0_0_1, &t1146_TI, offsetof(t1146, f3), &EmptyCustomAttributesCache};
extern Il2CppType t637_0_0_1;
FieldInfo t1146_f4_FieldInfo = 
{
	"_methodSignature", &t637_0_0_1, &t1146_TI, offsetof(t1146, f4), &EmptyCustomAttributesCache};
extern Il2CppType t731_0_0_1;
FieldInfo t1146_f5_FieldInfo = 
{
	"_methodBase", &t731_0_0_1, &t1146_TI, offsetof(t1146, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1151_0_0_1;
FieldInfo t1146_f6_FieldInfo = 
{
	"_callContext", &t1151_0_0_1, &t1146_TI, offsetof(t1146, f6), &EmptyCustomAttributesCache};
extern Il2CppType t637_0_0_1;
FieldInfo t1146_f7_FieldInfo = 
{
	"_genericArguments", &t637_0_0_1, &t1146_TI, offsetof(t1146, f7), &EmptyCustomAttributesCache};
extern Il2CppType t846_0_0_4;
FieldInfo t1146_f8_FieldInfo = 
{
	"ExternalProperties", &t846_0_0_4, &t1146_TI, offsetof(t1146, f8), &EmptyCustomAttributesCache};
extern Il2CppType t846_0_0_4;
FieldInfo t1146_f9_FieldInfo = 
{
	"InternalProperties", &t846_0_0_4, &t1146_TI, offsetof(t1146, f9), &EmptyCustomAttributesCache};
extern Il2CppType t586_0_0_17;
extern CustomAttributesCache t1146__CustomAttributeCache_U3CU3Ef__switch$map1F;
FieldInfo t1146_f10_FieldInfo = 
{
	"<>f__switch$map1F", &t586_0_0_17, &t1146_TI, offsetof(t1146_SFs, f10), &t1146__CustomAttributeCache_U3CU3Ef__switch$map1F};
static FieldInfo* t1146_FIs[] =
{
	&t1146_f0_FieldInfo,
	&t1146_f1_FieldInfo,
	&t1146_f2_FieldInfo,
	&t1146_f3_FieldInfo,
	&t1146_f4_FieldInfo,
	&t1146_f5_FieldInfo,
	&t1146_f6_FieldInfo,
	&t1146_f7_FieldInfo,
	&t1146_f8_FieldInfo,
	&t1146_f9_FieldInfo,
	&t1146_f10_FieldInfo,
	NULL
};
extern MethodInfo m5981_MI;
static PropertyInfo t1146____System_Runtime_Remoting_Messaging_IInternalMessage_Uri_PropertyInfo = 
{
	&t1146_TI, "System.Runtime.Remoting.Messaging.IInternalMessage.Uri", NULL, &m5981_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5984_MI;
static PropertyInfo t1146____Args_PropertyInfo = 
{
	&t1146_TI, "Args", &m5984_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5985_MI;
static PropertyInfo t1146____LogicalCallContext_PropertyInfo = 
{
	&t1146_TI, "LogicalCallContext", &m5985_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5986_MI;
static PropertyInfo t1146____MethodBase_PropertyInfo = 
{
	&t1146_TI, "MethodBase", &m5986_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5987_MI;
static PropertyInfo t1146____MethodName_PropertyInfo = 
{
	&t1146_TI, "MethodName", &m5987_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5988_MI;
static PropertyInfo t1146____MethodSignature_PropertyInfo = 
{
	&t1146_TI, "MethodSignature", &m5988_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5989_MI;
static PropertyInfo t1146____Properties_PropertyInfo = 
{
	&t1146_TI, "Properties", &m5989_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5991_MI;
static PropertyInfo t1146____TypeName_PropertyInfo = 
{
	&t1146_TI, "TypeName", &m5991_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5992_MI;
extern MethodInfo m5993_MI;
static PropertyInfo t1146____Uri_PropertyInfo = 
{
	&t1146_TI, "Uri", &m5992_MI, &m5993_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m5998_MI;
static PropertyInfo t1146____GenericArguments_PropertyInfo = 
{
	&t1146_TI, "GenericArguments", &m5998_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1146_PIs[] =
{
	&t1146____System_Runtime_Remoting_Messaging_IInternalMessage_Uri_PropertyInfo,
	&t1146____Args_PropertyInfo,
	&t1146____LogicalCallContext_PropertyInfo,
	&t1146____MethodBase_PropertyInfo,
	&t1146____MethodName_PropertyInfo,
	&t1146____MethodSignature_PropertyInfo,
	&t1146____Properties_PropertyInfo,
	&t1146____TypeName_PropertyInfo,
	&t1146____Uri_PropertyInfo,
	&t1146____GenericArguments_PropertyInfo,
	NULL
};
extern Il2CppType t1153_0_0_0;
static ParameterInfo t1146_m5978_ParameterInfos[] = 
{
	{"h1", 0, 134221443, &EmptyCustomAttributesCache, &t1153_0_0_0},
};
extern TypeInfo t1146_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5978_MI = 
{
	".ctor", (methodPointerType)&m5978, &t1146_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1146_m5978_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3033, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1146_m5979_ParameterInfos[] = 
{
	{"info", 0, 134221444, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221445, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1146_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m5979_MI = 
{
	".ctor", (methodPointerType)&m5979, &t1146_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1146_m5979_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 3034, NULL, (methodPointerType)NULL};
extern TypeInfo t1146_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5980_MI = 
{
	".ctor", (methodPointerType)&m5980, &t1146_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 3035, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1146_m5981_ParameterInfos[] = 
{
	{"value", 0, 134221446, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1146_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5981_MI = 
{
	"System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri", (methodPointerType)&m5981, &t1146_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1146_m5981_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 5, 1, false, false, 3036, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t1146_m5982_ParameterInfos[] = 
{
	{"key", 0, 134221447, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134221448, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1146_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5982_MI = 
{
	"InitMethodProperty", (methodPointerType)&m5982, &t1146_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1146_m5982_ParameterInfos, &EmptyCustomAttributesCache, 451, 0, 13, 2, false, false, 3037, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1146_m5983_ParameterInfos[] = 
{
	{"info", 0, 134221449, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221450, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1146_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m5983_MI = 
{
	"GetObjectData", (methodPointerType)&m5983, &t1146_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1146_m5983_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 2, false, false, 3038, NULL, (methodPointerType)NULL};
extern TypeInfo t1146_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5984_MI = 
{
	"get_Args", (methodPointerType)&m5984, &t1146_TI, &t158_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 3039, NULL, (methodPointerType)NULL};
extern TypeInfo t1146_TI;
extern Il2CppType t1151_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5985_MI = 
{
	"get_LogicalCallContext", (methodPointerType)&m5985, &t1146_TI, &t1151_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 3040, NULL, (methodPointerType)NULL};
extern TypeInfo t1146_TI;
extern Il2CppType t731_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5986_MI = 
{
	"get_MethodBase", (methodPointerType)&m5986, &t1146_TI, &t731_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, false, 3041, NULL, (methodPointerType)NULL};
extern TypeInfo t1146_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5987_MI = 
{
	"get_MethodName", (methodPointerType)&m5987, &t1146_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, false, 3042, NULL, (methodPointerType)NULL};
extern TypeInfo t1146_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5988_MI = 
{
	"get_MethodSignature", (methodPointerType)&m5988, &t1146_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, false, 3043, NULL, (methodPointerType)NULL};
extern TypeInfo t1146_TI;
extern Il2CppType t846_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5989_MI = 
{
	"get_Properties", (methodPointerType)&m5989, &t1146_TI, &t846_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2502, 0, 15, 0, false, false, 3044, NULL, (methodPointerType)NULL};
extern TypeInfo t1146_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5990_MI = 
{
	"InitDictionary", (methodPointerType)&m5990, &t1146_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 451, 0, 16, 0, false, false, 3045, NULL, (methodPointerType)NULL};
extern TypeInfo t1146_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5991_MI = 
{
	"get_TypeName", (methodPointerType)&m5991, &t1146_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 11, 0, false, false, 3046, NULL, (methodPointerType)NULL};
extern TypeInfo t1146_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5992_MI = 
{
	"get_Uri", (methodPointerType)&m5992, &t1146_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 12, 0, false, false, 3047, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1146_m5993_ParameterInfos[] = 
{
	{"value", 0, 134221451, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1146_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5993_MI = 
{
	"set_Uri", (methodPointerType)&m5993, &t1146_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1146_m5993_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 17, 1, false, false, 3048, NULL, (methodPointerType)NULL};
extern TypeInfo t1146_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5994_MI = 
{
	"Init", (methodPointerType)&m5994, &t1146_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 454, 0, 18, 0, false, false, 3049, NULL, (methodPointerType)NULL};
extern TypeInfo t1146_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m5995_MI = 
{
	"ResolveMethod", (methodPointerType)&m5995, &t1146_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3050, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t131_0_0_0;
static ParameterInfo t1146_m5996_ParameterInfos[] = 
{
	{"clientType", 0, 134221452, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"serverType", 1, 134221453, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1146_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5996_MI = 
{
	"CastTo", (methodPointerType)&m5996, &t1146_TI, &t131_0_0_0, RuntimeInvoker_t25_t25_t25, t1146_m5996_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 3051, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1146_m5997_ParameterInfos[] = 
{
	{"aqname", 0, 134221454, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1146_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5997_MI = 
{
	"GetTypeNameFromAssemblyQualifiedName", (methodPointerType)&m5997, &t1146_TI, &t27_0_0_0, RuntimeInvoker_t25_t25, t1146_m5997_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 3052, NULL, (methodPointerType)NULL};
extern TypeInfo t1146_TI;
extern Il2CppType t637_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5998_MI = 
{
	"get_GenericArguments", (methodPointerType)&m5998, &t1146_TI, &t637_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2177, 0, 255, 0, false, false, 3053, NULL, (methodPointerType)NULL};
static MethodInfo* t1146_MIs[] =
{
	&m5978_MI,
	&m5979_MI,
	&m5980_MI,
	&m5981_MI,
	&m5982_MI,
	&m5983_MI,
	&m5984_MI,
	&m5985_MI,
	&m5986_MI,
	&m5987_MI,
	&m5988_MI,
	&m5989_MI,
	&m5990_MI,
	&m5991_MI,
	&m5992_MI,
	&m5993_MI,
	&m5994_MI,
	&m5995_MI,
	&m5996_MI,
	&m5997_MI,
	&m5998_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m5983_MI;
extern MethodInfo m5981_MI;
extern MethodInfo m5984_MI;
extern MethodInfo m5985_MI;
extern MethodInfo m5986_MI;
extern MethodInfo m5987_MI;
extern MethodInfo m5988_MI;
extern MethodInfo m5991_MI;
extern MethodInfo m5992_MI;
extern MethodInfo m5982_MI;
extern MethodInfo m5983_MI;
extern MethodInfo m5989_MI;
extern MethodInfo m5990_MI;
extern MethodInfo m5993_MI;
extern MethodInfo m5994_MI;
static MethodInfo* t1146_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m5983_MI,
	&m5981_MI,
	&m5984_MI,
	&m5985_MI,
	&m5986_MI,
	&m5987_MI,
	&m5988_MI,
	&m5991_MI,
	&m5992_MI,
	&m5982_MI,
	&m5983_MI,
	&m5989_MI,
	&m5990_MI,
	&m5993_MI,
	&m5994_MI,
};
extern TypeInfo t485_TI;
extern TypeInfo t1639_TI;
extern TypeInfo t1145_TI;
extern TypeInfo t1165_TI;
extern TypeInfo t1155_TI;
extern TypeInfo t1640_TI;
static TypeInfo* t1146_ITIs[] = 
{
	&t485_TI,
	&t1639_TI,
	&t1145_TI,
	&t1165_TI,
	&t1155_TI,
	&t1640_TI,
};
extern TypeInfo t485_TI;
extern TypeInfo t1639_TI;
extern TypeInfo t1145_TI;
extern TypeInfo t1165_TI;
extern TypeInfo t1155_TI;
extern TypeInfo t1640_TI;
static Il2CppInterfaceOffsetPair t1146_IOs[] = 
{
	{ &t485_TI, 4},
	{ &t1639_TI, 5},
	{ &t1145_TI, 6},
	{ &t1165_TI, 6},
	{ &t1155_TI, 6},
	{ &t1640_TI, 13},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t789_TI;
#include "t789.h"
#include "t789MD.h"
extern MethodInfo m3582_MI;
void t1146_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo t152_TI;
#include "t152.h"
#include "t152MD.h"
extern MethodInfo m475_MI;
void t1146_CustomAttributesCacheGenerator_U3CU3Ef__switch$map1F(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1146__CustomAttributeCache = {
2,
NULL,
&t1146_CustomAttributesCacheGenerator
};
CustomAttributesCache t1146__CustomAttributeCache_U3CU3Ef__switch$map1F = {
1,
NULL,
&t1146_CustomAttributesCacheGenerator_U3CU3Ef__switch$map1F
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1146_0_0_0;
extern Il2CppType t1146_1_0_0;
extern TypeInfo t25_TI;
struct t1146;
extern TypeInfo t1146_TI;
extern CustomAttributesCache t1146__CustomAttributeCache;
extern CustomAttributesCache t1146__CustomAttributeCache_U3CU3Ef__switch$map1F;
TypeInfo t1146_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodCall", "System.Runtime.Remoting.Messaging", t1146_MIs, t1146_PIs, t1146_FIs, NULL, &t25_TI, NULL, NULL, &t1146_TI, t1146_ITIs, t1146_VT, &t1146__CustomAttributeCache, &t1146_TI, &t1146_0_0_0, &t1146_1_0_0, t1146_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1146), 0, -1, sizeof(t1146_SFs), 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 21, 10, 11, 0, 0, 19, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1154_TI;

extern TypeInfo t1154_TI;
extern TypeInfo t548_TI;
extern TypeInfo t27_TI;
extern MethodInfo m6006_MI;
extern MethodInfo m6008_MI;


extern MethodInfo m5999_MI;
 void m5999 (t1154 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m5999_MI);
	{
		m6006(__this, p0, &m6006_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1154_TI));
		m6008(__this, (((t1154_SFs*)InitializedTypeInfo(&t1154_TI)->static_fields)->f6), &m6008_MI);
		return;
	}
}
extern MethodInfo m6000_MI;
 void m6000 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6000_MI);
	{
		t548* L_0 = ((t548*)SZArrayNew(InitializedTypeInfo(&t548_TI), 6));
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
		((t1154_SFs*)InitializedTypeInfo(&t1154_TI)->static_fields)->f6 = L_5;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.MethodCallDictionary
extern Il2CppType t548_0_0_22;
FieldInfo t1154_f6_FieldInfo = 
{
	"InternalKeys", &t548_0_0_22, &t1154_TI, offsetof(t1154_SFs, f6), &EmptyCustomAttributesCache};
static FieldInfo* t1154_FIs[] =
{
	&t1154_f6_FieldInfo,
	NULL
};
extern Il2CppType t1155_0_0_0;
static ParameterInfo t1154_m5999_ParameterInfos[] = 
{
	{"message", 0, 134221455, &EmptyCustomAttributesCache, &t1155_0_0_0},
};
extern TypeInfo t1154_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m5999_MI = 
{
	".ctor", (methodPointerType)&m5999, &t1154_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1154_m5999_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3054, NULL, (methodPointerType)NULL};
extern TypeInfo t1154_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6000_MI = 
{
	".cctor", (methodPointerType)&m6000, &t1154_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3055, NULL, (methodPointerType)NULL};
static MethodInfo* t1154_MIs[] =
{
	&m5999_MI,
	&m6000_MI,
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
extern MethodInfo m6013_MI;
extern MethodInfo m6014_MI;
extern MethodInfo m6015_MI;
extern MethodInfo m6016_MI;
static MethodInfo* t1154_VT[] =
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
	&m6013_MI,
	&m6014_MI,
	&m6015_MI,
	&m6016_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t846_TI;
static Il2CppInterfaceOffsetPair t1154_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t846_TI, 9},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1154_0_0_0;
extern Il2CppType t1154_1_0_0;
extern TypeInfo t1148_TI;
struct t1154;
extern TypeInfo t1154_TI;
TypeInfo t1154_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodCallDictionary", "System.Runtime.Remoting.Messaging", t1154_MIs, NULL, t1154_FIs, NULL, &t1148_TI, NULL, NULL, &t1154_TI, NULL, t1154_VT, &EmptyCustomAttributesCache, &t1154_TI, &t1154_0_0_0, &t1154_1_0_0, t1154_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1154), 0, -1, sizeof(t1154_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 2, 0, 1, 0, 0, 16, 0, 3};
#include "t1156.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1156_TI;
#include "t1156MD.h"

#include "t1148.h"
#include "t1387.h"
extern TypeInfo t1156_TI;
extern TypeInfo t944_TI;
extern TypeInfo t1148_TI;
extern TypeInfo t25_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1387_TI;
extern TypeInfo t950_TI;
extern TypeInfo t846_TI;
extern TypeInfo t78_TI;
extern TypeInfo t125_TI;
#include "t1387MD.h"
extern MethodInfo m6004_MI;
extern MethodInfo m4879_MI;
extern MethodInfo m6013_MI;
extern MethodInfo m4877_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m8233_MI;
extern MethodInfo m4878_MI;
extern MethodInfo m452_MI;
extern MethodInfo m8238_MI;
extern MethodInfo m8239_MI;
extern MethodInfo m6011_MI;
extern MethodInfo m506_MI;


extern MethodInfo m6001_MI;
 void m6001 (t1156 * __this, t1148 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6001_MI);
	t25 * V_0 = {0};
	t1156 * G_B2_0 = {0};
	t1156 * G_B1_0 = {0};
	t25 * G_B3_0 = {0};
	t1156 * G_B3_1 = {0};
	{
		m452(__this, &m452_MI);
		__this->f0 = p0;
		t1148 * L_0 = (__this->f0);
		NullCheck(L_0);
		t25 * L_1 = (L_0->f0);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		t1148 * L_2 = (__this->f0);
		NullCheck(L_2);
		t25 * L_3 = (L_2->f0);
		NullCheck(L_3);
		t25 * L_4 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m8238_MI, L_3);
		V_0 = L_4;
		G_B3_0 = V_0;
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = ((t25 *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		NullCheck(G_B3_1);
		G_B3_1->f1 = G_B3_0;
		__this->f2 = (-1);
		return;
	}
}
extern MethodInfo m6002_MI;
 t25 * m6002 (t1156 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6002_MI);
	t944  V_0 = {0};
	{
		t944  L_0 = (t944 )VirtFuncInvoker0< t944  >::Invoke(&m6004_MI, __this);
		V_0 = L_0;
		t25 * L_1 = m4879((&V_0), &m4879_MI);
		return L_1;
	}
}
extern MethodInfo m6003_MI;
 bool m6003 (t1156 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6003_MI);
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)-2))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		__this->f2 = ((int32_t)(L_1+1));
		int32_t L_2 = (__this->f2);
		t1148 * L_3 = (__this->f0);
		NullCheck(L_3);
		t548* L_4 = (L_3->f2);
		NullCheck(L_4);
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)(((t122 *)L_4)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return 1;
	}

IL_002f:
	{
		__this->f2 = ((int32_t)-2);
	}

IL_0037:
	{
		t25 * L_5 = (__this->f1);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		goto IL_0062;
	}

IL_0043:
	{
		t1148 * L_6 = (__this->f0);
		t25 * L_7 = (__this->f1);
		NullCheck(L_7);
		t25 * L_8 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m8239_MI, L_7);
		NullCheck(L_6);
		bool L_9 = m6011(L_6, ((t27*)Castclass(L_8, (&t27_TI))), &m6011_MI);
		if (L_9)
		{
			goto IL_0062;
		}
	}
	{
		return 1;
	}

IL_0062:
	{
		t25 * L_10 = (__this->f1);
		NullCheck(L_10);
		bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m506_MI, L_10);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m6004_MI;
 t944  m6004 (t1156 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6004_MI);
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		t1148 * L_1 = (__this->f0);
		NullCheck(L_1);
		t548* L_2 = (L_1->f2);
		int32_t L_3 = (__this->f2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		t1148 * L_4 = (__this->f0);
		t1148 * L_5 = (__this->f0);
		NullCheck(L_5);
		t548* L_6 = (L_5->f2);
		int32_t L_7 = (__this->f2);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		NullCheck(L_4);
		t25 * L_8 = (t25 *)VirtFuncInvoker1< t25 *, t27* >::Invoke(&m6013_MI, L_4, (*(t27**)(t27**)SZArrayLdElema(L_6, L_7)));
		t944  L_9 = {0};
		m4877(&L_9, (*(t27**)(t27**)SZArrayLdElema(L_2, L_3)), L_8, &m4877_MI);
		return L_9;
	}

IL_003e:
	{
		int32_t L_10 = (__this->f2);
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_004f;
		}
	}
	{
		t25 * L_11 = (__this->f1);
		if (L_11)
		{
			goto IL_005a;
		}
	}

IL_004f:
	{
		t1387 * L_12 = (t1387 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1387_TI));
		m7431(L_12, (t27*) &_stringLiteral986, &m7431_MI);
		il2cpp_codegen_raise_exception (L_12);
	}

IL_005a:
	{
		t25 * L_13 = (__this->f1);
		NullCheck(L_13);
		t944  L_14 = (t944 )InterfaceFuncInvoker0< t944  >::Invoke(&m8233_MI, L_13);
		return L_14;
	}
}
extern MethodInfo m6005_MI;
 t25 * m6005 (t1156 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6005_MI);
	t944  V_0 = {0};
	{
		t944  L_0 = (t944 )VirtFuncInvoker0< t944  >::Invoke(&m6004_MI, __this);
		V_0 = L_0;
		t25 * L_1 = m4878((&V_0), &m4878_MI);
		return L_1;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
extern Il2CppType t1148_0_0_1;
FieldInfo t1156_f0_FieldInfo = 
{
	"_methodDictionary", &t1148_0_0_1, &t1156_TI, offsetof(t1156, f0), &EmptyCustomAttributesCache};
extern Il2CppType t950_0_0_1;
FieldInfo t1156_f1_FieldInfo = 
{
	"_hashtableEnum", &t950_0_0_1, &t1156_TI, offsetof(t1156, f1), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t1156_f2_FieldInfo = 
{
	"_posMethod", &t134_0_0_1, &t1156_TI, offsetof(t1156, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1156_FIs[] =
{
	&t1156_f0_FieldInfo,
	&t1156_f1_FieldInfo,
	&t1156_f2_FieldInfo,
	NULL
};
extern MethodInfo m6002_MI;
static PropertyInfo t1156____Current_PropertyInfo = 
{
	&t1156_TI, "Current", &m6002_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6004_MI;
static PropertyInfo t1156____Entry_PropertyInfo = 
{
	&t1156_TI, "Entry", &m6004_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6005_MI;
static PropertyInfo t1156____Key_PropertyInfo = 
{
	&t1156_TI, "Key", &m6005_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1156_PIs[] =
{
	&t1156____Current_PropertyInfo,
	&t1156____Entry_PropertyInfo,
	&t1156____Key_PropertyInfo,
	NULL
};
extern Il2CppType t1148_0_0_0;
static ParameterInfo t1156_m6001_ParameterInfos[] = 
{
	{"methodDictionary", 0, 134221468, &EmptyCustomAttributesCache, &t1148_0_0_0},
};
extern TypeInfo t1156_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6001_MI = 
{
	".ctor", (methodPointerType)&m6001, &t1156_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1156_m6001_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3072, NULL, (methodPointerType)NULL};
extern TypeInfo t1156_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6002_MI = 
{
	"get_Current", (methodPointerType)&m6002, &t1156_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 3073, NULL, (methodPointerType)NULL};
extern TypeInfo t1156_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6003_MI = 
{
	"MoveNext", (methodPointerType)&m6003, &t1156_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 3074, NULL, (methodPointerType)NULL};
extern TypeInfo t1156_TI;
extern Il2CppType t944_0_0_0;
extern void* RuntimeInvoker_t944 (MethodInfo* method, void* obj, void** args);
MethodInfo m6004_MI = 
{
	"get_Entry", (methodPointerType)&m6004, &t1156_TI, &t944_0_0_0, RuntimeInvoker_t944, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 3075, NULL, (methodPointerType)NULL};
extern TypeInfo t1156_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6005_MI = 
{
	"get_Key", (methodPointerType)&m6005, &t1156_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 3076, NULL, (methodPointerType)NULL};
static MethodInfo* t1156_MIs[] =
{
	&m6001_MI,
	&m6002_MI,
	&m6003_MI,
	&m6004_MI,
	&m6005_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6002_MI;
extern MethodInfo m6003_MI;
extern MethodInfo m6004_MI;
extern MethodInfo m6005_MI;
static MethodInfo* t1156_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6002_MI,
	&m6003_MI,
	&m6004_MI,
	&m6005_MI,
};
extern TypeInfo t78_TI;
extern TypeInfo t950_TI;
static TypeInfo* t1156_ITIs[] = 
{
	&t78_TI,
	&t950_TI,
};
extern TypeInfo t78_TI;
extern TypeInfo t950_TI;
static Il2CppInterfaceOffsetPair t1156_IOs[] = 
{
	{ &t78_TI, 4},
	{ &t950_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1156_0_0_0;
extern Il2CppType t1156_1_0_0;
extern TypeInfo t25_TI;
struct t1156;
extern TypeInfo t1156_TI;
extern TypeInfo t1148_TI;
TypeInfo t1156_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DictionaryEnumerator", "", t1156_MIs, t1156_PIs, t1156_FIs, NULL, &t25_TI, NULL, &t1148_TI, &t1156_TI, t1156_ITIs, t1156_VT, &EmptyCustomAttributesCache, &t1156_TI, &t1156_0_0_0, &t1156_1_0_0, t1156_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1156), 0, -1, 0, 0, -1, 1048579, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 5, 3, 3, 0, 0, 8, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1148_TI;

#include "t931.h"
#include "t445.h"
extern TypeInfo t1148_TI;
extern TypeInfo t123_TI;
extern TypeInfo t25_TI;
extern TypeInfo t931_TI;
extern TypeInfo t27_TI;
extern TypeInfo t134_TI;
extern TypeInfo t846_TI;
extern TypeInfo t950_TI;
extern TypeInfo t78_TI;
extern TypeInfo t944_TI;
extern TypeInfo t125_TI;
extern TypeInfo t167_TI;
extern TypeInfo t759_TI;
extern TypeInfo t1156_TI;
extern TypeInfo t972_TI;
extern TypeInfo t586_TI;
extern TypeInfo t1155_TI;
extern TypeInfo t1151_TI;
extern TypeInfo t158_TI;
extern TypeInfo t1158_TI;
extern TypeInfo t445_TI;
extern TypeInfo t1639_TI;
extern TypeInfo t122_TI;
#include "t931MD.h"
#include "t445MD.h"
extern MethodInfo m6016_MI;
extern MethodInfo m4830_MI;
extern MethodInfo m6013_MI;
extern MethodInfo m4842_MI;
extern MethodInfo m8238_MI;
extern MethodInfo m504_MI;
extern MethodInfo m4878_MI;
extern MethodInfo m6011_MI;
extern MethodInfo m4879_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m7919_MI;
extern MethodInfo m452_MI;
extern MethodInfo m6001_MI;
extern MethodInfo m4900_MI;
extern MethodInfo m6009_MI;
extern MethodInfo m386_MI;
extern MethodInfo m7976_MI;
extern MethodInfo m7977_MI;
extern MethodInfo m7978_MI;
extern MethodInfo m8305_MI;
extern MethodInfo m8302_MI;
extern MethodInfo m8304_MI;
extern MethodInfo m8303_MI;
extern MethodInfo m8300_MI;
extern MethodInfo m8299_MI;
extern MethodInfo m8307_MI;
extern MethodInfo m8308_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m8298_MI;
extern MethodInfo m6014_MI;
extern MethodInfo m8237_MI;
extern MethodInfo m6015_MI;
extern MethodInfo m7922_MI;


extern MethodInfo m6006_MI;
 void m6006 (t1148 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6006_MI);
	{
		m452(__this, &m452_MI);
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m6007_MI;
 t25 * m6007 (t1148 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6007_MI);
	{
		t1156 * L_0 = (t1156 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1156_TI));
		m6001(L_0, __this, &m6001_MI);
		return L_0;
	}
}
extern MethodInfo m6008_MI;
 void m6008 (t1148 * __this, t548* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6008_MI);
	{
		__this->f2 = p0;
		return;
	}
}
extern MethodInfo m6009_MI;
 t25 * m6009 (t1148 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6009_MI);
	{
		__this->f3 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t972_TI));
		t972 * L_0 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_0, &m4900_MI);
		return L_0;
	}
}
extern MethodInfo m6010_MI;
 t25 * m6010 (t1148 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6010_MI);
	{
		t25 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t25 * L_1 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m6009_MI, __this);
		__this->f0 = L_1;
	}

IL_0014:
	{
		t25 * L_2 = (__this->f0);
		return L_2;
	}
}
extern MethodInfo m6011_MI;
 bool m6011 (t1148 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6011_MI);
	t27* V_0 = {0};
	t548* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		t548* L_1 = (__this->f2);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0028;
	}

IL_0015:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		V_0 = (*(t27**)(t27**)SZArrayLdElema(V_1, V_2));
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_2 = m386(NULL, p0, V_0, &m386_MI);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0028:
	{
		NullCheck(V_1);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t122 *)V_1)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m6012_MI;
 void m6012 (t1148 * __this, t25 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6012_MI);
	{
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m6016_MI, __this, p0, p1);
		return;
	}
}
extern MethodInfo m6013_MI;
 t25 * m6013 (t1148 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6013_MI);
	t27* V_0 = {0};
	t586 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = p0;
		if (!V_0)
		{
			goto IL_0120;
		}
	}
	{
		if ((((t1148_SFs*)InitializedTypeInfo(&t1148_TI)->static_fields)->f4))
		{
			goto IL_007c;
		}
	}
	{
		t586 * L_0 = (t586 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t586_TI));
		m7976(L_0, 8, &m7976_MI);
		V_1 = L_0;
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral967, 0);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral968, 1);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral969, 2);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral970, 3);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral972, 4);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral971, 5);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral984, 6);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral985, 7);
		((t1148_SFs*)InitializedTypeInfo(&t1148_TI)->static_fields)->f4 = V_1;
	}

IL_007c:
	{
		NullCheck((((t1148_SFs*)InitializedTypeInfo(&t1148_TI)->static_fields)->f4));
		bool L_1 = (bool)VirtFuncInvoker2< bool, t27*, int32_t* >::Invoke(&m7978_MI, (((t1148_SFs*)InitializedTypeInfo(&t1148_TI)->static_fields)->f4), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_0120;
		}
	}
	{
		if (V_2 == 0)
		{
			goto IL_00b6;
		}
		if (V_2 == 1)
		{
			goto IL_00c2;
		}
		if (V_2 == 2)
		{
			goto IL_00ce;
		}
		if (V_2 == 3)
		{
			goto IL_00da;
		}
		if (V_2 == 4)
		{
			goto IL_00e6;
		}
		if (V_2 == 5)
		{
			goto IL_00f2;
		}
		if (V_2 == 6)
		{
			goto IL_00fe;
		}
		if (V_2 == 7)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_0120;
	}

IL_00b6:
	{
		t25 * L_2 = (__this->f1);
		NullCheck(L_2);
		t27* L_3 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8305_MI, L_2);
		return L_3;
	}

IL_00c2:
	{
		t25 * L_4 = (__this->f1);
		NullCheck(L_4);
		t27* L_5 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8302_MI, L_4);
		return L_5;
	}

IL_00ce:
	{
		t25 * L_6 = (__this->f1);
		NullCheck(L_6);
		t27* L_7 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8304_MI, L_6);
		return L_7;
	}

IL_00da:
	{
		t25 * L_8 = (__this->f1);
		NullCheck(L_8);
		t25 * L_9 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m8303_MI, L_8);
		return L_9;
	}

IL_00e6:
	{
		t25 * L_10 = (__this->f1);
		NullCheck(L_10);
		t1151 * L_11 = (t1151 *)InterfaceFuncInvoker0< t1151 * >::Invoke(&m8300_MI, L_10);
		return L_11;
	}

IL_00f2:
	{
		t25 * L_12 = (__this->f1);
		NullCheck(L_12);
		t158* L_13 = (t158*)InterfaceFuncInvoker0< t158* >::Invoke(&m8299_MI, L_12);
		return (t25 *)L_13;
	}

IL_00fe:
	{
		t25 * L_14 = (__this->f1);
		NullCheck(((t25 *)Castclass(L_14, InitializedTypeInfo(&t1158_TI))));
		t158* L_15 = (t158*)InterfaceFuncInvoker0< t158* >::Invoke(&m8307_MI, ((t25 *)Castclass(L_14, InitializedTypeInfo(&t1158_TI))));
		return (t25 *)L_15;
	}

IL_010f:
	{
		t25 * L_16 = (__this->f1);
		NullCheck(((t25 *)Castclass(L_16, InitializedTypeInfo(&t1158_TI))));
		t25 * L_17 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m8308_MI, ((t25 *)Castclass(L_16, InitializedTypeInfo(&t1158_TI))));
		return L_17;
	}

IL_0120:
	{
		return NULL;
	}
}
extern MethodInfo m6014_MI;
 void m6014 (t1148 * __this, t27* p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6014_MI);
	t27* V_0 = {0};
	t586 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = p0;
		if (!V_0)
		{
			goto IL_00c2;
		}
	}
	{
		if ((((t1148_SFs*)InitializedTypeInfo(&t1148_TI)->static_fields)->f5))
		{
			goto IL_007c;
		}
	}
	{
		t586 * L_0 = (t586 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t586_TI));
		m7976(L_0, 8, &m7976_MI);
		V_1 = L_0;
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral972, 0);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral984, 0);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral985, 0);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral968, 1);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral969, 1);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral970, 1);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral971, 1);
		NullCheck(V_1);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_1, (t27*) &_stringLiteral967, 2);
		((t1148_SFs*)InitializedTypeInfo(&t1148_TI)->static_fields)->f5 = V_1;
	}

IL_007c:
	{
		NullCheck((((t1148_SFs*)InitializedTypeInfo(&t1148_TI)->static_fields)->f5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, t27*, int32_t* >::Invoke(&m7978_MI, (((t1148_SFs*)InitializedTypeInfo(&t1148_TI)->static_fields)->f5), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_00c2;
		}
	}
	{
		if (V_2 == 0)
		{
			goto IL_009f;
		}
		if (V_2 == 1)
		{
			goto IL_00a0;
		}
		if (V_2 == 2)
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00c2;
	}

IL_009f:
	{
		return;
	}

IL_00a0:
	{
		t445 * L_2 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m2409(L_2, (t27*) &_stringLiteral973, &m2409_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_00ab:
	{
		t25 * L_3 = (__this->f1);
		NullCheck(((t25 *)Castclass(L_3, InitializedTypeInfo(&t1639_TI))));
		InterfaceActionInvoker1< t27* >::Invoke(&m8298_MI, ((t25 *)Castclass(L_3, InitializedTypeInfo(&t1639_TI))), ((t27*)Castclass(p1, (&t27_TI))));
		return;
	}

IL_00c2:
	{
		return;
	}
}
extern MethodInfo m6015_MI;
 t25 * m6015 (t1148 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6015_MI);
	t931 * V_0 = {0};
	int32_t V_1 = 0;
	t944  V_2 = {0};
	t25 * V_3 = {0};
	t25 * V_4 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t931_TI));
		t931 * L_0 = (t931 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t931_TI));
		m4830(L_0, &m4830_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000a:
	{
		t548* L_1 = (__this->f2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, V_1);
		t25 * L_2 = (t25 *)VirtFuncInvoker1< t25 *, t27* >::Invoke(&m6013_MI, __this, (*(t27**)(t27**)SZArrayLdElema(L_1, V_1)));
		NullCheck(V_0);
		VirtFuncInvoker1< int32_t, t25 * >::Invoke(&m4842_MI, V_0, L_2);
		V_1 = ((int32_t)(V_1+1));
	}

IL_0023:
	{
		t548* L_3 = (__this->f2);
		NullCheck(L_3);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t122 *)L_3)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		t25 * L_4 = (__this->f0);
		if (!L_4)
		{
			goto IL_0091;
		}
	}
	{
		t25 * L_5 = (__this->f0);
		NullCheck(L_5);
		t25 * L_6 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m8238_MI, L_5);
		V_3 = L_6;
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_0044:
		{
			NullCheck(V_3);
			t25 * L_7 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m504_MI, V_3);
			V_2 = ((*(t944 *)((t944 *)UnBox (L_7, InitializedTypeInfo(&t944_TI)))));
			t25 * L_8 = m4878((&V_2), &m4878_MI);
			bool L_9 = m6011(__this, ((t27*)Castclass(L_8, (&t27_TI))), &m6011_MI);
			if (L_9)
			{
				goto IL_0072;
			}
		}

IL_0064:
		{
			t25 * L_10 = m4879((&V_2), &m4879_MI);
			NullCheck(V_0);
			VirtFuncInvoker1< int32_t, t25 * >::Invoke(&m4842_MI, V_0, L_10);
		}

IL_0072:
		{
			NullCheck(V_3);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m506_MI, V_3);
			if (L_11)
			{
				goto IL_0044;
			}
		}

IL_007a:
		{
			// IL_007a: leave.s IL_0091
			leaveInstructions[0] = 0x91; // 1
			THROW_SENTINEL(IL_0091);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_007c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_007c;
	}

IL_007c:
	{ // begin finally (depth: 1)
		{
			V_4 = ((t25 *)IsInst(V_3, InitializedTypeInfo(&t167_TI)));
			if (V_4)
			{
				goto IL_0089;
			}
		}

IL_0088:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x91:
					goto IL_0091;
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

IL_0089:
		{
			NullCheck(V_4);
			InterfaceActionInvoker0::Invoke(&m507_MI, V_4);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x91:
					goto IL_0091;
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

IL_0091:
	{
		return V_0;
	}
}
extern MethodInfo m6016_MI;
 void m6016 (t1148 * __this, t25 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6016_MI);
	t27* V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = ((t27*)Castclass(p0, (&t27_TI)));
		V_1 = 0;
		goto IL_0028;
	}

IL_000b:
	{
		t548* L_0 = (__this->f2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, V_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_1 = m386(NULL, (*(t27**)(t27**)SZArrayLdElema(L_0, V_1)), V_0, &m386_MI);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		VirtActionInvoker2< t27*, t25 * >::Invoke(&m6014_MI, __this, V_0, p1);
		return;
	}

IL_0024:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0028:
	{
		t548* L_2 = (__this->f2);
		NullCheck(L_2);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t122 *)L_2)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		t25 * L_3 = (__this->f0);
		if (L_3)
		{
			goto IL_0047;
		}
	}
	{
		t25 * L_4 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m6009_MI, __this);
		__this->f0 = L_4;
	}

IL_0047:
	{
		t25 * L_5 = (__this->f0);
		NullCheck(L_5);
		InterfaceActionInvoker2< t25 *, t25 * >::Invoke(&m8237_MI, L_5, p0, p1);
		return;
	}
}
extern MethodInfo m6017_MI;
 int32_t m6017 (t1148 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6017_MI);
	{
		t25 * L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		t25 * L_1 = (__this->f0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m7919_MI, L_1);
		t548* L_3 = (__this->f2);
		NullCheck(L_3);
		return ((int32_t)(L_2+(((int32_t)(((t122 *)L_3)->max_length)))));
	}

IL_001d:
	{
		t548* L_4 = (__this->f2);
		NullCheck(L_4);
		return (((int32_t)(((t122 *)L_4)->max_length)));
	}
}
extern MethodInfo m6018_MI;
 bool m6018 (t1148 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6018_MI);
	{
		return 0;
	}
}
extern MethodInfo m6019_MI;
 t25 * m6019 (t1148 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6019_MI);
	{
		return __this;
	}
}
extern MethodInfo m6020_MI;
 void m6020 (t1148 * __this, t122 * p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6020_MI);
	{
		t25 * L_0 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m6015_MI, __this);
		NullCheck(L_0);
		InterfaceActionInvoker2< t122 *, int32_t >::Invoke(&m7922_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m6021_MI;
 t25 * m6021 (t1148 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6021_MI);
	{
		t1156 * L_0 = (t1156 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1156_TI));
		m6001(L_0, __this, &m6001_MI);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.MethodDictionary
extern Il2CppType t846_0_0_1;
FieldInfo t1148_f0_FieldInfo = 
{
	"_internalProperties", &t846_0_0_1, &t1148_TI, offsetof(t1148, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1155_0_0_4;
FieldInfo t1148_f1_FieldInfo = 
{
	"_message", &t1155_0_0_4, &t1148_TI, offsetof(t1148, f1), &EmptyCustomAttributesCache};
extern Il2CppType t548_0_0_1;
FieldInfo t1148_f2_FieldInfo = 
{
	"_methodKeys", &t548_0_0_1, &t1148_TI, offsetof(t1148, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1148_f3_FieldInfo = 
{
	"_ownProperties", &t125_0_0_1, &t1148_TI, offsetof(t1148, f3), &EmptyCustomAttributesCache};
extern Il2CppType t586_0_0_17;
extern CustomAttributesCache t1148__CustomAttributeCache_U3CU3Ef__switch$map21;
FieldInfo t1148_f4_FieldInfo = 
{
	"<>f__switch$map21", &t586_0_0_17, &t1148_TI, offsetof(t1148_SFs, f4), &t1148__CustomAttributeCache_U3CU3Ef__switch$map21};
extern Il2CppType t586_0_0_17;
extern CustomAttributesCache t1148__CustomAttributeCache_U3CU3Ef__switch$map22;
FieldInfo t1148_f5_FieldInfo = 
{
	"<>f__switch$map22", &t586_0_0_17, &t1148_TI, offsetof(t1148_SFs, f5), &t1148__CustomAttributeCache_U3CU3Ef__switch$map22};
static FieldInfo* t1148_FIs[] =
{
	&t1148_f0_FieldInfo,
	&t1148_f1_FieldInfo,
	&t1148_f2_FieldInfo,
	&t1148_f3_FieldInfo,
	&t1148_f4_FieldInfo,
	&t1148_f5_FieldInfo,
	NULL
};
extern MethodInfo m6008_MI;
static PropertyInfo t1148____MethodKeys_PropertyInfo = 
{
	&t1148_TI, "MethodKeys", NULL, &m6008_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6012_MI;
static PropertyInfo t1148____Item_PropertyInfo = 
{
	&t1148_TI, "Item", NULL, &m6012_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6015_MI;
static PropertyInfo t1148____Values_PropertyInfo = 
{
	&t1148_TI, "Values", &m6015_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6017_MI;
static PropertyInfo t1148____Count_PropertyInfo = 
{
	&t1148_TI, "Count", &m6017_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6018_MI;
static PropertyInfo t1148____IsSynchronized_PropertyInfo = 
{
	&t1148_TI, "IsSynchronized", &m6018_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6019_MI;
static PropertyInfo t1148____SyncRoot_PropertyInfo = 
{
	&t1148_TI, "SyncRoot", &m6019_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1148_PIs[] =
{
	&t1148____MethodKeys_PropertyInfo,
	&t1148____Item_PropertyInfo,
	&t1148____Values_PropertyInfo,
	&t1148____Count_PropertyInfo,
	&t1148____IsSynchronized_PropertyInfo,
	&t1148____SyncRoot_PropertyInfo,
	NULL
};
extern Il2CppType t1155_0_0_0;
static ParameterInfo t1148_m6006_ParameterInfos[] = 
{
	{"message", 0, 134221456, &EmptyCustomAttributesCache, &t1155_0_0_0},
};
extern TypeInfo t1148_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6006_MI = 
{
	".ctor", (methodPointerType)&m6006, &t1148_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1148_m6006_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3056, NULL, (methodPointerType)NULL};
extern TypeInfo t1148_TI;
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6007_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m6007, &t1148_TI, &t78_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 3057, NULL, (methodPointerType)NULL};
extern Il2CppType t548_0_0_0;
static ParameterInfo t1148_m6008_ParameterInfos[] = 
{
	{"value", 0, 134221457, &EmptyCustomAttributesCache, &t548_0_0_0},
};
extern TypeInfo t1148_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6008_MI = 
{
	"set_MethodKeys", (methodPointerType)&m6008, &t1148_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1148_m6008_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3058, NULL, (methodPointerType)NULL};
extern TypeInfo t1148_TI;
extern Il2CppType t846_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6009_MI = 
{
	"AllocInternalProperties", (methodPointerType)&m6009, &t1148_TI, &t846_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 452, 0, 11, 0, false, false, 3059, NULL, (methodPointerType)NULL};
extern TypeInfo t1148_TI;
extern Il2CppType t846_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6010_MI = 
{
	"GetInternalProperties", (methodPointerType)&m6010, &t1148_TI, &t846_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3060, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1148_m6011_ParameterInfos[] = 
{
	{"key", 0, 134221458, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1148_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6011_MI = 
{
	"IsOverridenKey", (methodPointerType)&m6011, &t1148_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t1148_m6011_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3061, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t1148_m6012_ParameterInfos[] = 
{
	{"key", 0, 134221459, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"value", 1, 134221460, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1148_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6012_MI = 
{
	"set_Item", (methodPointerType)&m6012, &t1148_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1148_m6012_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 9, 2, false, false, 3062, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1148_m6013_ParameterInfos[] = 
{
	{"key", 0, 134221461, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1148_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6013_MI = 
{
	"GetMethodProperty", (methodPointerType)&m6013, &t1148_TI, &t25_0_0_0, RuntimeInvoker_t25_t25, t1148_m6013_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 12, 1, false, false, 3063, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t1148_m6014_ParameterInfos[] = 
{
	{"key", 0, 134221462, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134221463, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1148_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6014_MI = 
{
	"SetMethodProperty", (methodPointerType)&m6014, &t1148_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1148_m6014_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 13, 2, false, false, 3064, NULL, (methodPointerType)NULL};
extern TypeInfo t1148_TI;
extern Il2CppType t759_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6015_MI = 
{
	"get_Values", (methodPointerType)&m6015, &t1148_TI, &t759_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 14, 0, false, false, 3065, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t1148_m6016_ParameterInfos[] = 
{
	{"key", 0, 134221464, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"value", 1, 134221465, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1148_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6016_MI = 
{
	"Add", (methodPointerType)&m6016, &t1148_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1148_m6016_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 15, 2, false, false, 3066, NULL, (methodPointerType)NULL};
extern TypeInfo t1148_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6017_MI = 
{
	"get_Count", (methodPointerType)&m6017, &t1148_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 3067, NULL, (methodPointerType)NULL};
extern TypeInfo t1148_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6018_MI = 
{
	"get_IsSynchronized", (methodPointerType)&m6018, &t1148_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 3068, NULL, (methodPointerType)NULL};
extern TypeInfo t1148_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6019_MI = 
{
	"get_SyncRoot", (methodPointerType)&m6019, &t1148_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 3069, NULL, (methodPointerType)NULL};
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t1148_m6020_ParameterInfos[] = 
{
	{"array", 0, 134221466, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"index", 1, 134221467, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1148_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6020_MI = 
{
	"CopyTo", (methodPointerType)&m6020, &t1148_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t1148_m6020_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 8, 2, false, false, 3070, NULL, (methodPointerType)NULL};
extern TypeInfo t1148_TI;
extern Il2CppType t950_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6021_MI = 
{
	"GetEnumerator", (methodPointerType)&m6021, &t1148_TI, &t950_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 486, 0, 10, 0, false, false, 3071, NULL, (methodPointerType)NULL};
static MethodInfo* t1148_MIs[] =
{
	&m6006_MI,
	&m6007_MI,
	&m6008_MI,
	&m6009_MI,
	&m6010_MI,
	&m6011_MI,
	&m6012_MI,
	&m6013_MI,
	&m6014_MI,
	&m6015_MI,
	&m6016_MI,
	&m6017_MI,
	&m6018_MI,
	&m6019_MI,
	&m6020_MI,
	&m6021_MI,
	NULL
};
extern TypeInfo t1156_TI;
static TypeInfo* t1148_TI__nestedTypes[2] =
{
	&t1156_TI,
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
extern MethodInfo m6013_MI;
extern MethodInfo m6014_MI;
extern MethodInfo m6015_MI;
extern MethodInfo m6016_MI;
static MethodInfo* t1148_VT[] =
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
	&m6013_MI,
	&m6014_MI,
	&m6015_MI,
	&m6016_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t846_TI;
static TypeInfo* t1148_ITIs[] = 
{
	&t703_TI,
	&t759_TI,
	&t846_TI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t846_TI;
static Il2CppInterfaceOffsetPair t1148_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t846_TI, 9},
};
extern TypeInfo t530_TI;
#include "t530.h"
#include "t530MD.h"
extern MethodInfo m2499_MI;
void t1148_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t530 * tmp;
		tmp = (t530 *)il2cpp_codegen_object_new (&t530_TI);
		m2499(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m2499_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t1148_CustomAttributesCacheGenerator_U3CU3Ef__switch$map21(CustomAttributesCache* cache)
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
void t1148_CustomAttributesCacheGenerator_U3CU3Ef__switch$map22(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1148__CustomAttributeCache = {
1,
NULL,
&t1148_CustomAttributesCacheGenerator
};
CustomAttributesCache t1148__CustomAttributeCache_U3CU3Ef__switch$map21 = {
1,
NULL,
&t1148_CustomAttributesCacheGenerator_U3CU3Ef__switch$map21
};
CustomAttributesCache t1148__CustomAttributeCache_U3CU3Ef__switch$map22 = {
1,
NULL,
&t1148_CustomAttributesCacheGenerator_U3CU3Ef__switch$map22
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1148_0_0_0;
extern Il2CppType t1148_1_0_0;
extern TypeInfo t25_TI;
struct t1148;
extern TypeInfo t1148_TI;
extern CustomAttributesCache t1148__CustomAttributeCache;
extern CustomAttributesCache t1148__CustomAttributeCache_U3CU3Ef__switch$map21;
extern CustomAttributesCache t1148__CustomAttributeCache_U3CU3Ef__switch$map22;
TypeInfo t1148_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodDictionary", "System.Runtime.Remoting.Messaging", t1148_MIs, t1148_PIs, t1148_FIs, NULL, &t25_TI, t1148_TI__nestedTypes, NULL, &t1148_TI, t1148_ITIs, t1148_VT, &t1148__CustomAttributeCache, &t1148_TI, &t1148_0_0_0, &t1148_1_0_0, t1148_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1148), 0, -1, sizeof(t1148_SFs), 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 16, 6, 6, 0, 1, 16, 3, 3};
#include "t1157.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1157_TI;
#include "t1157MD.h"

#include "t168.h"
extern TypeInfo t1158_TI;
extern TypeInfo t168_TI;
extern TypeInfo t1157_TI;
extern TypeInfo t548_TI;
extern TypeInfo t27_TI;
extern MethodInfo m6006_MI;
extern MethodInfo m8306_MI;
extern MethodInfo m6008_MI;


extern MethodInfo m6022_MI;
 void m6022 (t1157 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6022_MI);
	{
		m6006(__this, p0, &m6006_MI);
		NullCheck(p0);
		t168 * L_0 = (t168 *)InterfaceFuncInvoker0< t168 * >::Invoke(&m8306_MI, p0);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1157_TI));
		m6008(__this, (((t1157_SFs*)InitializedTypeInfo(&t1157_TI)->static_fields)->f6), &m6008_MI);
		goto IL_0027;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1157_TI));
		m6008(__this, (((t1157_SFs*)InitializedTypeInfo(&t1157_TI)->static_fields)->f7), &m6008_MI);
	}

IL_0027:
	{
		return;
	}
}
extern MethodInfo m6023_MI;
 void m6023 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6023_MI);
	{
		t548* L_0 = ((t548*)SZArrayNew(InitializedTypeInfo(&t548_TI), 7));
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
		ArrayElementTypeCheck (L_4, (t27*) &_stringLiteral984);
		*((t27**)(t27**)SZArrayLdElema(L_4, 4)) = (t27*)(t27*) &_stringLiteral984;
		t548* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (t27*) &_stringLiteral985);
		*((t27**)(t27**)SZArrayLdElema(L_5, 5)) = (t27*)(t27*) &_stringLiteral985;
		t548* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, (t27*) &_stringLiteral972);
		*((t27**)(t27**)SZArrayLdElema(L_6, 6)) = (t27*)(t27*) &_stringLiteral972;
		((t1157_SFs*)InitializedTypeInfo(&t1157_TI)->static_fields)->f6 = L_6;
		t548* L_7 = ((t548*)SZArrayNew(InitializedTypeInfo(&t548_TI), 1));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, (t27*) &_stringLiteral972);
		*((t27**)(t27**)SZArrayLdElema(L_7, 0)) = (t27*)(t27*) &_stringLiteral972;
		((t1157_SFs*)InitializedTypeInfo(&t1157_TI)->static_fields)->f7 = L_7;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.MethodReturnDictionary
extern Il2CppType t548_0_0_22;
FieldInfo t1157_f6_FieldInfo = 
{
	"InternalReturnKeys", &t548_0_0_22, &t1157_TI, offsetof(t1157_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t548_0_0_22;
FieldInfo t1157_f7_FieldInfo = 
{
	"InternalExceptionKeys", &t548_0_0_22, &t1157_TI, offsetof(t1157_SFs, f7), &EmptyCustomAttributesCache};
static FieldInfo* t1157_FIs[] =
{
	&t1157_f6_FieldInfo,
	&t1157_f7_FieldInfo,
	NULL
};
extern Il2CppType t1158_0_0_0;
static ParameterInfo t1157_m6022_ParameterInfos[] = 
{
	{"message", 0, 134221469, &EmptyCustomAttributesCache, &t1158_0_0_0},
};
extern TypeInfo t1157_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6022_MI = 
{
	".ctor", (methodPointerType)&m6022, &t1157_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1157_m6022_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3077, NULL, (methodPointerType)NULL};
extern TypeInfo t1157_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6023_MI = 
{
	".cctor", (methodPointerType)&m6023, &t1157_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3078, NULL, (methodPointerType)NULL};
static MethodInfo* t1157_MIs[] =
{
	&m6022_MI,
	&m6023_MI,
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
extern MethodInfo m6013_MI;
extern MethodInfo m6014_MI;
extern MethodInfo m6015_MI;
extern MethodInfo m6016_MI;
static MethodInfo* t1157_VT[] =
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
	&m6013_MI,
	&m6014_MI,
	&m6015_MI,
	&m6016_MI,
};
extern TypeInfo t703_TI;
extern TypeInfo t759_TI;
extern TypeInfo t846_TI;
static Il2CppInterfaceOffsetPair t1157_IOs[] = 
{
	{ &t703_TI, 4},
	{ &t759_TI, 5},
	{ &t846_TI, 9},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1157_0_0_0;
extern Il2CppType t1157_1_0_0;
extern TypeInfo t1148_TI;
struct t1157;
extern TypeInfo t1157_TI;
TypeInfo t1157_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodReturnDictionary", "System.Runtime.Remoting.Messaging", t1157_MIs, NULL, t1157_FIs, NULL, &t1148_TI, NULL, NULL, &t1157_TI, NULL, t1157_VT, &EmptyCustomAttributesCache, &t1157_TI, &t1157_0_0_0, &t1157_1_0_0, t1157_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1157), 0, -1, sizeof(t1157_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 2, 0, 2, 0, 0, 16, 0, 3};
#include "t1143.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1143_TI;
#include "t1143MD.h"

#include "t1082.h"
#include "t462.h"
extern TypeInfo t1143_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1082_TI;
extern TypeInfo t733_TI;
extern TypeInfo t732_TI;
extern TypeInfo t637_TI;
extern TypeInfo t131_TI;
extern TypeInfo t134_TI;
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
#include "t1082MD.h"
extern MethodInfo m5775_MI;
extern MethodInfo m5767_MI;
extern MethodInfo m3464_MI;
extern MethodInfo m5774_MI;
extern MethodInfo m3518_MI;
extern MethodInfo m6033_MI;


extern MethodInfo m6024_MI;
 t158* m6024 (t1143 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6024_MI);
	{
		t158* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m6025_MI;
 t1151 * m6025 (t1143 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6025_MI);
	{
		t1151 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m6026_MI;
 t731 * m6026 (t1143 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6026_MI);
	{
		t1082 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m6027_MI;
 t27* m6027 (t1143 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6027_MI);
	{
		t1082 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		return (((t27_SFs*)(&t27_TI)->static_fields)->f2);
	}

IL_000e:
	{
		t1082 * L_1 = (__this->f0);
		NullCheck(L_1);
		t27* L_2 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5775_MI, L_1);
		return L_2;
	}
}
extern MethodInfo m6028_MI;
 t25 * m6028 (t1143 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6028_MI);
	t733* V_0 = {0};
	int32_t V_1 = 0;
	{
		t637* L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		t1082 * L_1 = (__this->f0);
		NullCheck(L_1);
		t733* L_2 = (t733*)VirtFuncInvoker0< t733* >::Invoke(&m5767_MI, L_1);
		V_0 = L_2;
		NullCheck(V_0);
		__this->f7 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), (((int32_t)(((t122 *)V_0)->max_length)))));
		V_1 = 0;
		goto IL_003a;
	}

IL_0026:
	{
		t637* L_3 = (__this->f7);
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		NullCheck((*(t732 **)(t732 **)SZArrayLdElema(V_0, V_1)));
		t131 * L_4 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3464_MI, (*(t732 **)(t732 **)SZArrayLdElema(V_0, V_1)));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, V_1);
		ArrayElementTypeCheck (L_3, L_4);
		*((t131 **)(t131 **)SZArrayLdElema(L_3, V_1)) = (t131 *)L_4;
		V_1 = ((int32_t)(V_1+1));
	}

IL_003a:
	{
		NullCheck(V_0);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t122 *)V_0)->max_length))))))
		{
			goto IL_0026;
		}
	}

IL_0040:
	{
		t637* L_5 = (__this->f7);
		return (t25 *)L_5;
	}
}
extern MethodInfo m6029_MI;
 t27* m6029 (t1143 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6029_MI);
	{
		t1082 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		return (((t27_SFs*)(&t27_TI)->static_fields)->f2);
	}

IL_000e:
	{
		t1082 * L_1 = (__this->f0);
		NullCheck(L_1);
		t131 * L_2 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m5774_MI, L_1);
		NullCheck(L_2);
		t27* L_3 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m6030_MI;
 t27* m6030 (t1143 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6030_MI);
	{
		t27* L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m6031_MI;
 void m6031 (t1143 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6031_MI);
	{
		__this->f6 = p0;
		return;
	}
}
extern MethodInfo m6032_MI;
 t168 * m6032 (t1143 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6032_MI);
	{
		t168 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m6033_MI;
 int32_t m6033 (t1143 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6033_MI);
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	t876* V_2 = {0};
	int32_t V_3 = 0;
	{
		t158* L_0 = (__this->f1);
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
		V_0 = 0;
		t876* L_1 = (__this->f2);
		V_2 = L_1;
		V_3 = 0;
		goto IL_0028;
	}

IL_0017:
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_3);
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(V_2, V_3));
		if (!((uint8_t)(V_1&2)))
		{
			goto IL_0024;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0024:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_0028:
	{
		NullCheck(V_2);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t122 *)V_2)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		return V_0;
	}
}
extern MethodInfo m6034_MI;
 t158* m6034 (t1143 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6034_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t158* V_3 = {0};
	uint8_t V_4 = 0x0;
	t876* V_5 = {0};
	int32_t V_6 = 0;
	{
		t158* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t158*)NULL;
	}

IL_000a:
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m6033_MI, __this);
		V_2 = L_1;
		V_3 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), V_2));
		int32_t L_2 = 0;
		V_1 = L_2;
		V_0 = L_2;
		t876* L_3 = (__this->f2);
		V_5 = L_3;
		V_6 = 0;
		goto IL_004f;
	}

IL_0029:
	{
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, V_6);
		V_4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(V_5, V_6));
		if (!((uint8_t)(V_4&2)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_4 = V_1;
		V_1 = ((int32_t)(L_4+1));
		t158* L_5 = (__this->f1);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, V_0);
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, L_4);
		ArrayElementTypeCheck (V_3, (*(t25 **)(t25 **)SZArrayLdElema(L_5, V_0)));
		*((t25 **)(t25 **)SZArrayLdElema(V_3, L_4)) = (t25 *)(*(t25 **)(t25 **)SZArrayLdElema(L_5, V_0));
	}

IL_0045:
	{
		V_0 = ((int32_t)(V_0+1));
		V_6 = ((int32_t)(V_6+1));
	}

IL_004f:
	{
		NullCheck(V_5);
		if ((((int32_t)V_6) < ((int32_t)(((int32_t)(((t122 *)V_5)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		return V_3;
	}
}
extern MethodInfo m6035_MI;
 t25 * m6035 (t1143 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6035_MI);
	{
		t25 * L_0 = (__this->f4);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.MonoMethodMessage
extern Il2CppType t1082_0_0_1;
FieldInfo t1143_f0_FieldInfo = 
{
	"method", &t1082_0_0_1, &t1143_TI, offsetof(t1143, f0), &EmptyCustomAttributesCache};
extern Il2CppType t158_0_0_1;
FieldInfo t1143_f1_FieldInfo = 
{
	"args", &t158_0_0_1, &t1143_TI, offsetof(t1143, f1), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_1;
FieldInfo t1143_f2_FieldInfo = 
{
	"arg_types", &t876_0_0_1, &t1143_TI, offsetof(t1143, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1151_0_0_6;
FieldInfo t1143_f3_FieldInfo = 
{
	"ctx", &t1151_0_0_6, &t1143_TI, offsetof(t1143, f3), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_6;
FieldInfo t1143_f4_FieldInfo = 
{
	"rval", &t25_0_0_6, &t1143_TI, offsetof(t1143, f4), &EmptyCustomAttributesCache};
extern Il2CppType t168_0_0_6;
FieldInfo t1143_f5_FieldInfo = 
{
	"exc", &t168_0_0_6, &t1143_TI, offsetof(t1143, f5), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
FieldInfo t1143_f6_FieldInfo = 
{
	"uri", &t27_0_0_1, &t1143_TI, offsetof(t1143, f6), &EmptyCustomAttributesCache};
extern Il2CppType t637_0_0_1;
FieldInfo t1143_f7_FieldInfo = 
{
	"methodSignature", &t637_0_0_1, &t1143_TI, offsetof(t1143, f7), &EmptyCustomAttributesCache};
static FieldInfo* t1143_FIs[] =
{
	&t1143_f0_FieldInfo,
	&t1143_f1_FieldInfo,
	&t1143_f2_FieldInfo,
	&t1143_f3_FieldInfo,
	&t1143_f4_FieldInfo,
	&t1143_f5_FieldInfo,
	&t1143_f6_FieldInfo,
	&t1143_f7_FieldInfo,
	NULL
};
extern MethodInfo m6024_MI;
static PropertyInfo t1143____Args_PropertyInfo = 
{
	&t1143_TI, "Args", &m6024_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6025_MI;
static PropertyInfo t1143____LogicalCallContext_PropertyInfo = 
{
	&t1143_TI, "LogicalCallContext", &m6025_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6026_MI;
static PropertyInfo t1143____MethodBase_PropertyInfo = 
{
	&t1143_TI, "MethodBase", &m6026_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6027_MI;
static PropertyInfo t1143____MethodName_PropertyInfo = 
{
	&t1143_TI, "MethodName", &m6027_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6028_MI;
static PropertyInfo t1143____MethodSignature_PropertyInfo = 
{
	&t1143_TI, "MethodSignature", &m6028_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6029_MI;
static PropertyInfo t1143____TypeName_PropertyInfo = 
{
	&t1143_TI, "TypeName", &m6029_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6030_MI;
extern MethodInfo m6031_MI;
static PropertyInfo t1143____Uri_PropertyInfo = 
{
	&t1143_TI, "Uri", &m6030_MI, &m6031_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6032_MI;
static PropertyInfo t1143____Exception_PropertyInfo = 
{
	&t1143_TI, "Exception", &m6032_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6033_MI;
static PropertyInfo t1143____OutArgCount_PropertyInfo = 
{
	&t1143_TI, "OutArgCount", &m6033_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6034_MI;
static PropertyInfo t1143____OutArgs_PropertyInfo = 
{
	&t1143_TI, "OutArgs", &m6034_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6035_MI;
static PropertyInfo t1143____ReturnValue_PropertyInfo = 
{
	&t1143_TI, "ReturnValue", &m6035_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1143_PIs[] =
{
	&t1143____Args_PropertyInfo,
	&t1143____LogicalCallContext_PropertyInfo,
	&t1143____MethodBase_PropertyInfo,
	&t1143____MethodName_PropertyInfo,
	&t1143____MethodSignature_PropertyInfo,
	&t1143____TypeName_PropertyInfo,
	&t1143____Uri_PropertyInfo,
	&t1143____Exception_PropertyInfo,
	&t1143____OutArgCount_PropertyInfo,
	&t1143____OutArgs_PropertyInfo,
	&t1143____ReturnValue_PropertyInfo,
	NULL
};
extern TypeInfo t1143_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6024_MI = 
{
	"get_Args", (methodPointerType)&m6024, &t1143_TI, &t158_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 3079, NULL, (methodPointerType)NULL};
extern TypeInfo t1143_TI;
extern Il2CppType t1151_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6025_MI = 
{
	"get_LogicalCallContext", (methodPointerType)&m6025, &t1143_TI, &t1151_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 3080, NULL, (methodPointerType)NULL};
extern TypeInfo t1143_TI;
extern Il2CppType t731_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6026_MI = 
{
	"get_MethodBase", (methodPointerType)&m6026, &t1143_TI, &t731_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 3081, NULL, (methodPointerType)NULL};
extern TypeInfo t1143_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6027_MI = 
{
	"get_MethodName", (methodPointerType)&m6027, &t1143_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, false, 3082, NULL, (methodPointerType)NULL};
extern TypeInfo t1143_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6028_MI = 
{
	"get_MethodSignature", (methodPointerType)&m6028, &t1143_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, false, 3083, NULL, (methodPointerType)NULL};
extern TypeInfo t1143_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6029_MI = 
{
	"get_TypeName", (methodPointerType)&m6029, &t1143_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, false, 3084, NULL, (methodPointerType)NULL};
extern TypeInfo t1143_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6030_MI = 
{
	"get_Uri", (methodPointerType)&m6030, &t1143_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 11, 0, false, false, 3085, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1143_m6031_ParameterInfos[] = 
{
	{"value", 0, 134221470, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1143_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6031_MI = 
{
	"set_Uri", (methodPointerType)&m6031, &t1143_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1143_m6031_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 4, 1, false, false, 3086, NULL, (methodPointerType)NULL};
extern TypeInfo t1143_TI;
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6032_MI = 
{
	"get_Exception", (methodPointerType)&m6032, &t1143_TI, &t168_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 12, 0, false, false, 3087, NULL, (methodPointerType)NULL};
extern TypeInfo t1143_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6033_MI = 
{
	"get_OutArgCount", (methodPointerType)&m6033, &t1143_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2534, 0, 15, 0, false, false, 3088, NULL, (methodPointerType)NULL};
extern TypeInfo t1143_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6034_MI = 
{
	"get_OutArgs", (methodPointerType)&m6034, &t1143_TI, &t158_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 13, 0, false, false, 3089, NULL, (methodPointerType)NULL};
extern TypeInfo t1143_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6035_MI = 
{
	"get_ReturnValue", (methodPointerType)&m6035, &t1143_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 14, 0, false, false, 3090, NULL, (methodPointerType)NULL};
static MethodInfo* t1143_MIs[] =
{
	&m6024_MI,
	&m6025_MI,
	&m6026_MI,
	&m6027_MI,
	&m6028_MI,
	&m6029_MI,
	&m6030_MI,
	&m6031_MI,
	&m6032_MI,
	&m6033_MI,
	&m6034_MI,
	&m6035_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6031_MI;
extern MethodInfo m6024_MI;
extern MethodInfo m6025_MI;
extern MethodInfo m6026_MI;
extern MethodInfo m6027_MI;
extern MethodInfo m6028_MI;
extern MethodInfo m6029_MI;
extern MethodInfo m6030_MI;
extern MethodInfo m6032_MI;
extern MethodInfo m6034_MI;
extern MethodInfo m6035_MI;
extern MethodInfo m6033_MI;
static MethodInfo* t1143_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6031_MI,
	&m6024_MI,
	&m6025_MI,
	&m6026_MI,
	&m6027_MI,
	&m6028_MI,
	&m6029_MI,
	&m6030_MI,
	&m6032_MI,
	&m6034_MI,
	&m6035_MI,
	&m6033_MI,
};
extern TypeInfo t1639_TI;
extern TypeInfo t1145_TI;
extern TypeInfo t1165_TI;
extern TypeInfo t1155_TI;
extern TypeInfo t1158_TI;
static TypeInfo* t1143_ITIs[] = 
{
	&t1639_TI,
	&t1145_TI,
	&t1165_TI,
	&t1155_TI,
	&t1158_TI,
};
extern TypeInfo t1639_TI;
extern TypeInfo t1145_TI;
extern TypeInfo t1165_TI;
extern TypeInfo t1155_TI;
extern TypeInfo t1158_TI;
static Il2CppInterfaceOffsetPair t1143_IOs[] = 
{
	{ &t1639_TI, 4},
	{ &t1145_TI, 5},
	{ &t1165_TI, 5},
	{ &t1155_TI, 5},
	{ &t1158_TI, 12},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1143_0_0_0;
extern Il2CppType t1143_1_0_0;
extern TypeInfo t25_TI;
struct t1143;
extern TypeInfo t1143_TI;
TypeInfo t1143_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoMethodMessage", "System.Runtime.Remoting.Messaging", t1143_MIs, t1143_PIs, t1143_FIs, NULL, &t25_TI, NULL, NULL, &t1143_TI, t1143_ITIs, t1143_VT, &EmptyCustomAttributesCache, &t1143_TI, &t1143_0_0_0, &t1143_1_0_0, t1143_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1143), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 12, 11, 8, 0, 0, 16, 5, 5};
#include "t1159.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1159_TI;
#include "t1159MD.h"

#include "t177.h"
extern TypeInfo t177_TI;
#include "t177MD.h"
extern MethodInfo m452_MI;
extern MethodInfo m566_MI;


extern MethodInfo m6036_MI;
 void m6036 (t1159 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6036_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m6037_MI;
 t25 * m6037 (t1159 * __this, t25 * p0, t823 * p1, t824  p2, t25 * p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6037_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m566(L_0, &m566_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.RemotingSurrogate
extern TypeInfo t1159_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6036_MI = 
{
	".ctor", (methodPointerType)&m6036, &t1159_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3091, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
extern Il2CppType t1160_0_0_0;
static ParameterInfo t1159_m6037_ParameterInfos[] = 
{
	{"obj", 0, 134221471, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"si", 1, 134221472, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"sc", 2, 134221473, &EmptyCustomAttributesCache, &t824_0_0_0},
	{"selector", 3, 134221474, &EmptyCustomAttributesCache, &t1160_0_0_0},
};
extern TypeInfo t1159_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t824_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6037_MI = 
{
	"SetObjectData", (methodPointerType)&m6037, &t1159_TI, &t25_0_0_0, RuntimeInvoker_t25_t25_t25_t824_t25, t1159_m6037_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 4, false, false, 3092, NULL, (methodPointerType)NULL};
static MethodInfo* t1159_MIs[] =
{
	&m6036_MI,
	&m6037_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6037_MI;
extern MethodInfo m6037_MI;
static MethodInfo* t1159_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6037_MI,
	&m6037_MI,
};
extern TypeInfo t1163_TI;
static TypeInfo* t1159_ITIs[] = 
{
	&t1163_TI,
};
extern TypeInfo t1163_TI;
static Il2CppInterfaceOffsetPair t1159_IOs[] = 
{
	{ &t1163_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1159_0_0_0;
extern Il2CppType t1159_1_0_0;
extern TypeInfo t25_TI;
struct t1159;
extern TypeInfo t1159_TI;
TypeInfo t1159_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingSurrogate", "System.Runtime.Remoting.Messaging", t1159_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t1159_TI, t1159_ITIs, t1159_VT, &EmptyCustomAttributesCache, &t1159_TI, &t1159_0_0_0, &t1159_1_0_0, t1159_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1159), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 6, 1, 1};
#include "t1161.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1161_TI;
#include "t1161MD.h"

extern TypeInfo t177_TI;
extern MethodInfo m452_MI;
extern MethodInfo m7533_MI;


extern MethodInfo m6038_MI;
 void m6038 (t1161 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6038_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m6039_MI;
 t25 * m6039 (t1161 * __this, t25 * p0, t823 * p1, t824  p2, t25 * p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6039_MI);
	{
		t177 * L_0 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m7533(L_0, (t27*) &_stringLiteral987, &m7533_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.ObjRefSurrogate
extern TypeInfo t1161_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6038_MI = 
{
	".ctor", (methodPointerType)&m6038, &t1161_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3093, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
extern Il2CppType t1160_0_0_0;
static ParameterInfo t1161_m6039_ParameterInfos[] = 
{
	{"obj", 0, 134221475, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"si", 1, 134221476, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"sc", 2, 134221477, &EmptyCustomAttributesCache, &t824_0_0_0},
	{"selector", 3, 134221478, &EmptyCustomAttributesCache, &t1160_0_0_0},
};
extern TypeInfo t1161_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t824_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6039_MI = 
{
	"SetObjectData", (methodPointerType)&m6039, &t1161_TI, &t25_0_0_0, RuntimeInvoker_t25_t25_t25_t824_t25, t1161_m6039_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 4, false, false, 3094, NULL, (methodPointerType)NULL};
static MethodInfo* t1161_MIs[] =
{
	&m6038_MI,
	&m6039_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6039_MI;
extern MethodInfo m6039_MI;
static MethodInfo* t1161_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6039_MI,
	&m6039_MI,
};
extern TypeInfo t1163_TI;
static TypeInfo* t1161_ITIs[] = 
{
	&t1163_TI,
};
extern TypeInfo t1163_TI;
static Il2CppInterfaceOffsetPair t1161_IOs[] = 
{
	{ &t1163_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1161_0_0_0;
extern Il2CppType t1161_1_0_0;
extern TypeInfo t25_TI;
struct t1161;
extern TypeInfo t1161_TI;
TypeInfo t1161_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjRefSurrogate", "System.Runtime.Remoting.Messaging", t1161_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t1161_TI, t1161_ITIs, t1161_VT, &EmptyCustomAttributesCache, &t1161_TI, &t1161_0_0_0, &t1161_1_0_0, t1161_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1161), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 6, 1, 1};
#include "t1162.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1162_TI;
#include "t1162MD.h"

#include "t1168.h"
#include "t132.h"
extern TypeInfo t1168_TI;
extern TypeInfo t131_TI;
extern TypeInfo t1162_TI;
extern TypeInfo t1161_TI;
extern TypeInfo t1159_TI;
extern TypeInfo t125_TI;
extern TypeInfo t1160_TI;
extern TypeInfo t1163_TI;
extern TypeInfo t824_TI;
extern Il2CppType t1168_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m6038_MI;
extern MethodInfo m6036_MI;
extern MethodInfo m4333_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m8309_MI;


extern MethodInfo m6040_MI;
 void m6040 (t1162 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6040_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m6041_MI;
 void m6041 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6041_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t1168_0_0_0), &m484_MI);
		((t1162_SFs*)InitializedTypeInfo(&t1162_TI)->static_fields)->f0 = L_0;
		t1161 * L_1 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m6038(L_1, &m6038_MI);
		((t1162_SFs*)InitializedTypeInfo(&t1162_TI)->static_fields)->f1 = L_1;
		t1159 * L_2 = (t1159 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1159_TI));
		m6036(L_2, &m6036_MI);
		((t1162_SFs*)InitializedTypeInfo(&t1162_TI)->static_fields)->f2 = L_2;
		return;
	}
}
extern MethodInfo m6042_MI;
 t25 * m6042 (t1162 * __this, t131 * p0, t824  p1, t25 ** p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6042_MI);
	{
		NullCheck(p0);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4333_MI, p0);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		*((t25 **)(p2)) = (t25 *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1162_TI));
		return (((t1162_SFs*)InitializedTypeInfo(&t1162_TI)->static_fields)->f2);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1162_TI));
		NullCheck((((t1162_SFs*)InitializedTypeInfo(&t1162_TI)->static_fields)->f0));
		bool L_1 = (bool)VirtFuncInvoker1< bool, t131 * >::Invoke(&m3503_MI, (((t1162_SFs*)InitializedTypeInfo(&t1162_TI)->static_fields)->f0), p0);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		*((t25 **)(p2)) = (t25 *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1162_TI));
		return (((t1162_SFs*)InitializedTypeInfo(&t1162_TI)->static_fields)->f1);
	}

IL_0027:
	{
		t25 * L_2 = (__this->f3);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		t25 * L_3 = (__this->f3);
		NullCheck(L_3);
		t25 * L_4 = (t25 *)InterfaceFuncInvoker3< t25 *, t131 *, t824 , t25 ** >::Invoke(&m8309_MI, L_3, p0, p1, p2);
		return L_4;
	}

IL_003e:
	{
		*((t25 **)(p2)) = (t25 *)NULL;
		return (t25 *)NULL;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
extern Il2CppType t131_0_0_17;
FieldInfo t1162_f0_FieldInfo = 
{
	"s_cachedTypeObjRef", &t131_0_0_17, &t1162_TI, offsetof(t1162_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1161_0_0_17;
FieldInfo t1162_f1_FieldInfo = 
{
	"_objRefSurrogate", &t1161_0_0_17, &t1162_TI, offsetof(t1162_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1159_0_0_17;
FieldInfo t1162_f2_FieldInfo = 
{
	"_objRemotingSurrogate", &t1159_0_0_17, &t1162_TI, offsetof(t1162_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1160_0_0_1;
FieldInfo t1162_f3_FieldInfo = 
{
	"_next", &t1160_0_0_1, &t1162_TI, offsetof(t1162, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1162_FIs[] =
{
	&t1162_f0_FieldInfo,
	&t1162_f1_FieldInfo,
	&t1162_f2_FieldInfo,
	&t1162_f3_FieldInfo,
	NULL
};
extern TypeInfo t1162_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6040_MI = 
{
	".ctor", (methodPointerType)&m6040, &t1162_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3095, NULL, (methodPointerType)NULL};
extern TypeInfo t1162_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6041_MI = 
{
	".cctor", (methodPointerType)&m6041, &t1162_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3096, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t824_0_0_0;
extern Il2CppType t1160_1_0_0;
static ParameterInfo t1162_m6042_ParameterInfos[] = 
{
	{"type", 0, 134221479, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"context", 1, 134221480, &EmptyCustomAttributesCache, &t824_0_0_0},
	{"ssout", 2, 134221481, &EmptyCustomAttributesCache, &t1160_1_0_0},
};
extern TypeInfo t1162_TI;
extern Il2CppType t1163_0_0_0;
extern void* RuntimeInvoker_t25_t25_t824_t1643 (MethodInfo* method, void* obj, void** args);
MethodInfo m6042_MI = 
{
	"GetSurrogate", (methodPointerType)&m6042, &t1162_TI, &t1163_0_0_0, RuntimeInvoker_t25_t25_t824_t1643, t1162_m6042_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 3, false, false, 3097, NULL, (methodPointerType)NULL};
static MethodInfo* t1162_MIs[] =
{
	&m6040_MI,
	&m6041_MI,
	&m6042_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6042_MI;
extern MethodInfo m6042_MI;
static MethodInfo* t1162_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6042_MI,
	&m6042_MI,
};
extern TypeInfo t1160_TI;
static TypeInfo* t1162_ITIs[] = 
{
	&t1160_TI,
};
extern TypeInfo t1160_TI;
static Il2CppInterfaceOffsetPair t1162_IOs[] = 
{
	{ &t1160_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1162_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1162__CustomAttributeCache = {
1,
NULL,
&t1162_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1162_0_0_0;
extern Il2CppType t1162_1_0_0;
extern TypeInfo t25_TI;
struct t1162;
extern TypeInfo t1162_TI;
extern CustomAttributesCache t1162__CustomAttributeCache;
TypeInfo t1162_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingSurrogateSelector", "System.Runtime.Remoting.Messaging", t1162_MIs, NULL, t1162_FIs, NULL, &t25_TI, NULL, NULL, &t1162_TI, t1162_ITIs, t1162_VT, &t1162__CustomAttributeCache, &t1162_TI, &t1162_0_0_0, &t1162_1_0_0, t1162_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1162), 0, -1, sizeof(t1162_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 3, 0, 4, 0, 0, 6, 1, 1};
#include "t1164.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1164_TI;
#include "t1164MD.h"

#include "t1139.h"
#include "t1138.h"
extern TypeInfo t1164_TI;
extern TypeInfo t123_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1151_TI;
extern TypeInfo t438_TI;
extern TypeInfo t731_TI;
extern TypeInfo t733_TI;
extern TypeInfo t732_TI;
extern TypeInfo t637_TI;
extern TypeInfo t131_TI;
extern TypeInfo t1157_TI;
extern TypeInfo t1139_TI;
extern TypeInfo t1155_TI;
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
#include "t1139MD.h"
extern MethodInfo m6054_MI;
extern MethodInfo m5973_MI;
extern MethodInfo m3448_MI;
extern MethodInfo m3463_MI;
extern MethodInfo m3464_MI;
extern MethodInfo m6022_MI;
extern MethodInfo m3461_MI;
extern MethodInfo m3518_MI;
extern MethodInfo m6048_MI;
extern MethodInfo m5931_MI;
extern MethodInfo m5932_MI;
extern MethodInfo m452_MI;
extern MethodInfo m8305_MI;
extern MethodInfo m8301_MI;
extern MethodInfo m8300_MI;


extern MethodInfo m6043_MI;
 void m6043 (t1164 * __this, t25 * p0, t158* p1, int32_t p2, t1151 * p3, t25 * p4, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6043_MI);
	{
		m452(__this, &m452_MI);
		__this->f4 = p0;
		__this->f1 = p1;
		__this->f2 = p2;
		__this->f3 = p3;
		if (!p4)
		{
			goto IL_0041;
		}
	}
	{
		NullCheck(p4);
		t27* L_0 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8305_MI, p4);
		__this->f5 = L_0;
		NullCheck(p4);
		t731 * L_1 = (t731 *)InterfaceFuncInvoker0< t731 * >::Invoke(&m8301_MI, p4);
		__this->f7 = L_1;
	}

IL_0041:
	{
		t158* L_2 = (__this->f1);
		if (L_2)
		{
			goto IL_0055;
		}
	}
	{
		__this->f1 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), p2));
	}

IL_0055:
	{
		return;
	}
}
extern MethodInfo m6044_MI;
 void m6044 (t1164 * __this, t168 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6044_MI);
	{
		m452(__this, &m452_MI);
		__this->f6 = p0;
		if (!p1)
		{
			goto IL_0028;
		}
	}
	{
		NullCheck(p1);
		t731 * L_0 = (t731 *)InterfaceFuncInvoker0< t731 * >::Invoke(&m8301_MI, p1);
		__this->f7 = L_0;
		NullCheck(p1);
		t1151 * L_1 = (t1151 *)InterfaceFuncInvoker0< t1151 * >::Invoke(&m8300_MI, p1);
		__this->f3 = L_1;
	}

IL_0028:
	{
		__this->f1 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), 0));
		return;
	}
}
extern MethodInfo m6045_MI;
 void m6045 (t1164 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6045_MI);
	{
		VirtActionInvoker1< t27* >::Invoke(&m6054_MI, __this, p0);
		return;
	}
}
extern MethodInfo m6046_MI;
 t158* m6046 (t1164 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6046_MI);
	{
		t158* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m6047_MI;
 t1151 * m6047 (t1164 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6047_MI);
	{
		t1151 * L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1151 * L_1 = (t1151 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1151_TI));
		m5973(L_1, &m5973_MI);
		__this->f3 = L_1;
	}

IL_0013:
	{
		t1151 * L_2 = (__this->f3);
		return L_2;
	}
}
extern MethodInfo m6048_MI;
 t731 * m6048 (t1164 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6048_MI);
	{
		t731 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m6049_MI;
 t27* m6049 (t1164 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6049_MI);
	{
		t731 * L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		t27* L_1 = (__this->f8);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		t731 * L_2 = (__this->f7);
		NullCheck(L_2);
		t27* L_3 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3448_MI, L_2);
		__this->f8 = L_3;
	}

IL_0021:
	{
		t27* L_4 = (__this->f8);
		return L_4;
	}
}
extern MethodInfo m6050_MI;
 t25 * m6050 (t1164 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6050_MI);
	t733* V_0 = {0};
	int32_t V_1 = 0;
	{
		t731 * L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		t637* L_1 = (__this->f9);
		if (L_1)
		{
			goto IL_0048;
		}
	}
	{
		t731 * L_2 = (__this->f7);
		NullCheck(L_2);
		t733* L_3 = (t733*)VirtFuncInvoker0< t733* >::Invoke(&m3463_MI, L_2);
		V_0 = L_3;
		NullCheck(V_0);
		__this->f9 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), (((int32_t)(((t122 *)V_0)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		t637* L_4 = (__this->f9);
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		NullCheck((*(t732 **)(t732 **)SZArrayLdElema(V_0, V_1)));
		t131 * L_5 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3464_MI, (*(t732 **)(t732 **)SZArrayLdElema(V_0, V_1)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, V_1);
		ArrayElementTypeCheck (L_4, L_5);
		*((t131 **)(t131 **)SZArrayLdElema(L_4, V_1)) = (t131 *)L_5;
		V_1 = ((int32_t)(V_1+1));
	}

IL_0042:
	{
		NullCheck(V_0);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t122 *)V_0)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		t637* L_6 = (__this->f9);
		return (t25 *)L_6;
	}
}
extern MethodInfo m6051_MI;
 t25 * m6051 (t1164 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6051_MI);
	{
		t1157 * L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1157_TI));
		t1157 * L_1 = (t1157 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1157_TI));
		m6022(L_1, __this, &m6022_MI);
		__this->f11 = L_1;
	}

IL_0014:
	{
		t1157 * L_2 = (__this->f11);
		return L_2;
	}
}
extern MethodInfo m6052_MI;
 t27* m6052 (t1164 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6052_MI);
	{
		t731 * L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		t27* L_1 = (__this->f10);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		t731 * L_2 = (__this->f7);
		NullCheck(L_2);
		t131 * L_3 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3461_MI, L_2);
		NullCheck(L_3);
		t27* L_4 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, L_3);
		__this->f10 = L_4;
	}

IL_0026:
	{
		t27* L_5 = (__this->f10);
		return L_5;
	}
}
extern MethodInfo m6053_MI;
 t27* m6053 (t1164 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6053_MI);
	{
		t27* L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m6054_MI;
 void m6054 (t1164 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6054_MI);
	{
		__this->f5 = p0;
		return;
	}
}
extern MethodInfo m6055_MI;
 t168 * m6055 (t1164 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6055_MI);
	{
		t168 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m6056_MI;
 t158* m6056 (t1164 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6056_MI);
	{
		t158* L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		t158* L_1 = (__this->f1);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		t1139 * L_2 = (__this->f12);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		t731 * L_3 = (t731 *)VirtFuncInvoker0< t731 * >::Invoke(&m6048_MI, __this);
		t1139 * L_4 = (t1139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1139_TI));
		m5931(L_4, L_3, 1, &m5931_MI);
		__this->f12 = L_4;
	}

IL_002a:
	{
		t1139 * L_5 = (__this->f12);
		t158* L_6 = (__this->f1);
		NullCheck(L_5);
		t158* L_7 = m5932(L_5, L_6, &m5932_MI);
		__this->f0 = L_7;
	}

IL_0041:
	{
		t158* L_8 = (__this->f0);
		return L_8;
	}
}
extern MethodInfo m6057_MI;
 t25 * m6057 (t1164 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6057_MI);
	{
		t25 * L_0 = (__this->f4);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.ReturnMessage
extern Il2CppType t158_0_0_1;
FieldInfo t1164_f0_FieldInfo = 
{
	"_outArgs", &t158_0_0_1, &t1164_TI, offsetof(t1164, f0), &EmptyCustomAttributesCache};
extern Il2CppType t158_0_0_1;
FieldInfo t1164_f1_FieldInfo = 
{
	"_args", &t158_0_0_1, &t1164_TI, offsetof(t1164, f1), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t1164_f2_FieldInfo = 
{
	"_outArgsCount", &t134_0_0_1, &t1164_TI, offsetof(t1164, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1151_0_0_1;
FieldInfo t1164_f3_FieldInfo = 
{
	"_callCtx", &t1151_0_0_1, &t1164_TI, offsetof(t1164, f3), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_1;
FieldInfo t1164_f4_FieldInfo = 
{
	"_returnValue", &t25_0_0_1, &t1164_TI, offsetof(t1164, f4), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
FieldInfo t1164_f5_FieldInfo = 
{
	"_uri", &t27_0_0_1, &t1164_TI, offsetof(t1164, f5), &EmptyCustomAttributesCache};
extern Il2CppType t168_0_0_1;
FieldInfo t1164_f6_FieldInfo = 
{
	"_exception", &t168_0_0_1, &t1164_TI, offsetof(t1164, f6), &EmptyCustomAttributesCache};
extern Il2CppType t731_0_0_1;
FieldInfo t1164_f7_FieldInfo = 
{
	"_methodBase", &t731_0_0_1, &t1164_TI, offsetof(t1164, f7), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
FieldInfo t1164_f8_FieldInfo = 
{
	"_methodName", &t27_0_0_1, &t1164_TI, offsetof(t1164, f8), &EmptyCustomAttributesCache};
extern Il2CppType t637_0_0_1;
FieldInfo t1164_f9_FieldInfo = 
{
	"_methodSignature", &t637_0_0_1, &t1164_TI, offsetof(t1164, f9), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
FieldInfo t1164_f10_FieldInfo = 
{
	"_typeName", &t27_0_0_1, &t1164_TI, offsetof(t1164, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1157_0_0_1;
FieldInfo t1164_f11_FieldInfo = 
{
	"_properties", &t1157_0_0_1, &t1164_TI, offsetof(t1164, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1139_0_0_1;
FieldInfo t1164_f12_FieldInfo = 
{
	"_inArgInfo", &t1139_0_0_1, &t1164_TI, offsetof(t1164, f12), &EmptyCustomAttributesCache};
static FieldInfo* t1164_FIs[] =
{
	&t1164_f0_FieldInfo,
	&t1164_f1_FieldInfo,
	&t1164_f2_FieldInfo,
	&t1164_f3_FieldInfo,
	&t1164_f4_FieldInfo,
	&t1164_f5_FieldInfo,
	&t1164_f6_FieldInfo,
	&t1164_f7_FieldInfo,
	&t1164_f8_FieldInfo,
	&t1164_f9_FieldInfo,
	&t1164_f10_FieldInfo,
	&t1164_f11_FieldInfo,
	&t1164_f12_FieldInfo,
	NULL
};
extern MethodInfo m6045_MI;
static PropertyInfo t1164____System_Runtime_Remoting_Messaging_IInternalMessage_Uri_PropertyInfo = 
{
	&t1164_TI, "System.Runtime.Remoting.Messaging.IInternalMessage.Uri", NULL, &m6045_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6046_MI;
static PropertyInfo t1164____Args_PropertyInfo = 
{
	&t1164_TI, "Args", &m6046_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6047_MI;
static PropertyInfo t1164____LogicalCallContext_PropertyInfo = 
{
	&t1164_TI, "LogicalCallContext", &m6047_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6048_MI;
static PropertyInfo t1164____MethodBase_PropertyInfo = 
{
	&t1164_TI, "MethodBase", &m6048_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6049_MI;
static PropertyInfo t1164____MethodName_PropertyInfo = 
{
	&t1164_TI, "MethodName", &m6049_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6050_MI;
static PropertyInfo t1164____MethodSignature_PropertyInfo = 
{
	&t1164_TI, "MethodSignature", &m6050_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6051_MI;
static PropertyInfo t1164____Properties_PropertyInfo = 
{
	&t1164_TI, "Properties", &m6051_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6052_MI;
static PropertyInfo t1164____TypeName_PropertyInfo = 
{
	&t1164_TI, "TypeName", &m6052_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6053_MI;
extern MethodInfo m6054_MI;
static PropertyInfo t1164____Uri_PropertyInfo = 
{
	&t1164_TI, "Uri", &m6053_MI, &m6054_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6055_MI;
static PropertyInfo t1164____Exception_PropertyInfo = 
{
	&t1164_TI, "Exception", &m6055_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6056_MI;
static PropertyInfo t1164____OutArgs_PropertyInfo = 
{
	&t1164_TI, "OutArgs", &m6056_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6057_MI;
static PropertyInfo t1164____ReturnValue_PropertyInfo = 
{
	&t1164_TI, "ReturnValue", &m6057_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1164_PIs[] =
{
	&t1164____System_Runtime_Remoting_Messaging_IInternalMessage_Uri_PropertyInfo,
	&t1164____Args_PropertyInfo,
	&t1164____LogicalCallContext_PropertyInfo,
	&t1164____MethodBase_PropertyInfo,
	&t1164____MethodName_PropertyInfo,
	&t1164____MethodSignature_PropertyInfo,
	&t1164____Properties_PropertyInfo,
	&t1164____TypeName_PropertyInfo,
	&t1164____Uri_PropertyInfo,
	&t1164____Exception_PropertyInfo,
	&t1164____OutArgs_PropertyInfo,
	&t1164____ReturnValue_PropertyInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t1151_0_0_0;
extern Il2CppType t1165_0_0_0;
static ParameterInfo t1164_m6043_ParameterInfos[] = 
{
	{"ret", 0, 134221482, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"outArgs", 1, 134221483, &EmptyCustomAttributesCache, &t158_0_0_0},
	{"outArgsCount", 2, 134221484, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"callCtx", 3, 134221485, &EmptyCustomAttributesCache, &t1151_0_0_0},
	{"mcm", 4, 134221486, &EmptyCustomAttributesCache, &t1165_0_0_0},
};
extern TypeInfo t1164_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6043_MI = 
{
	".ctor", (methodPointerType)&m6043, &t1164_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t134_t25_t25, t1164_m6043_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 5, false, false, 3098, NULL, (methodPointerType)NULL};
extern Il2CppType t168_0_0_0;
extern Il2CppType t1165_0_0_0;
static ParameterInfo t1164_m6044_ParameterInfos[] = 
{
	{"e", 0, 134221487, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"mcm", 1, 134221488, &EmptyCustomAttributesCache, &t1165_0_0_0},
};
extern TypeInfo t1164_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6044_MI = 
{
	".ctor", (methodPointerType)&m6044, &t1164_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1164_m6044_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3099, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1164_m6045_ParameterInfos[] = 
{
	{"value", 0, 134221489, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1164_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6045_MI = 
{
	"System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri", (methodPointerType)&m6045, &t1164_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1164_m6045_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 4, 1, false, false, 3100, NULL, (methodPointerType)NULL};
extern TypeInfo t1164_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6046_MI = 
{
	"get_Args", (methodPointerType)&m6046, &t1164_TI, &t158_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 3101, NULL, (methodPointerType)NULL};
extern TypeInfo t1164_TI;
extern Il2CppType t1151_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6047_MI = 
{
	"get_LogicalCallContext", (methodPointerType)&m6047, &t1164_TI, &t1151_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 3102, NULL, (methodPointerType)NULL};
extern TypeInfo t1164_TI;
extern Il2CppType t731_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6048_MI = 
{
	"get_MethodBase", (methodPointerType)&m6048, &t1164_TI, &t731_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 3103, NULL, (methodPointerType)NULL};
extern TypeInfo t1164_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6049_MI = 
{
	"get_MethodName", (methodPointerType)&m6049, &t1164_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, false, 3104, NULL, (methodPointerType)NULL};
extern TypeInfo t1164_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6050_MI = 
{
	"get_MethodSignature", (methodPointerType)&m6050, &t1164_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, false, 3105, NULL, (methodPointerType)NULL};
extern TypeInfo t1164_TI;
extern Il2CppType t846_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6051_MI = 
{
	"get_Properties", (methodPointerType)&m6051, &t1164_TI, &t846_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2502, 0, 15, 0, false, false, 3106, NULL, (methodPointerType)NULL};
extern TypeInfo t1164_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6052_MI = 
{
	"get_TypeName", (methodPointerType)&m6052, &t1164_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, false, 3107, NULL, (methodPointerType)NULL};
extern TypeInfo t1164_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6053_MI = 
{
	"get_Uri", (methodPointerType)&m6053, &t1164_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 11, 0, false, false, 3108, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1164_m6054_ParameterInfos[] = 
{
	{"value", 0, 134221490, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1164_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6054_MI = 
{
	"set_Uri", (methodPointerType)&m6054, &t1164_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1164_m6054_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 16, 1, false, false, 3109, NULL, (methodPointerType)NULL};
extern TypeInfo t1164_TI;
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6055_MI = 
{
	"get_Exception", (methodPointerType)&m6055, &t1164_TI, &t168_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 12, 0, false, false, 3110, NULL, (methodPointerType)NULL};
extern TypeInfo t1164_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6056_MI = 
{
	"get_OutArgs", (methodPointerType)&m6056, &t1164_TI, &t158_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 13, 0, false, false, 3111, NULL, (methodPointerType)NULL};
extern TypeInfo t1164_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6057_MI = 
{
	"get_ReturnValue", (methodPointerType)&m6057, &t1164_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2502, 0, 17, 0, false, false, 3112, NULL, (methodPointerType)NULL};
static MethodInfo* t1164_MIs[] =
{
	&m6043_MI,
	&m6044_MI,
	&m6045_MI,
	&m6046_MI,
	&m6047_MI,
	&m6048_MI,
	&m6049_MI,
	&m6050_MI,
	&m6051_MI,
	&m6052_MI,
	&m6053_MI,
	&m6054_MI,
	&m6055_MI,
	&m6056_MI,
	&m6057_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6045_MI;
extern MethodInfo m6046_MI;
extern MethodInfo m6047_MI;
extern MethodInfo m6048_MI;
extern MethodInfo m6049_MI;
extern MethodInfo m6050_MI;
extern MethodInfo m6052_MI;
extern MethodInfo m6053_MI;
extern MethodInfo m6055_MI;
extern MethodInfo m6056_MI;
extern MethodInfo m6057_MI;
extern MethodInfo m6051_MI;
extern MethodInfo m6054_MI;
extern MethodInfo m6057_MI;
static MethodInfo* t1164_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6045_MI,
	&m6046_MI,
	&m6047_MI,
	&m6048_MI,
	&m6049_MI,
	&m6050_MI,
	&m6052_MI,
	&m6053_MI,
	&m6055_MI,
	&m6056_MI,
	&m6057_MI,
	&m6051_MI,
	&m6054_MI,
	&m6057_MI,
};
extern TypeInfo t1639_TI;
extern TypeInfo t1145_TI;
extern TypeInfo t1155_TI;
extern TypeInfo t1158_TI;
static TypeInfo* t1164_ITIs[] = 
{
	&t1639_TI,
	&t1145_TI,
	&t1155_TI,
	&t1158_TI,
};
extern TypeInfo t1639_TI;
extern TypeInfo t1145_TI;
extern TypeInfo t1155_TI;
extern TypeInfo t1158_TI;
static Il2CppInterfaceOffsetPair t1164_IOs[] = 
{
	{ &t1639_TI, 4},
	{ &t1145_TI, 5},
	{ &t1155_TI, 5},
	{ &t1158_TI, 12},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1164_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1164__CustomAttributeCache = {
1,
NULL,
&t1164_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1164_0_0_0;
extern Il2CppType t1164_1_0_0;
extern TypeInfo t25_TI;
struct t1164;
extern TypeInfo t1164_TI;
extern CustomAttributesCache t1164__CustomAttributeCache;
TypeInfo t1164_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReturnMessage", "System.Runtime.Remoting.Messaging", t1164_MIs, t1164_PIs, t1164_FIs, NULL, &t25_TI, NULL, NULL, &t1164_TI, t1164_ITIs, t1164_VT, &t1164__CustomAttributeCache, &t1164_TI, &t1164_0_0_0, &t1164_1_0_0, t1164_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1164), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 15, 12, 13, 0, 0, 18, 4, 4};
#include "t1166.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1166_TI;
#include "t1166MD.h"

#include "t862.h"
#include "t1172.h"
#include "t1130.h"
#include "t1167.h"
#include "t1128.h"
extern TypeInfo t1130_TI;
extern TypeInfo t1172_TI;
extern TypeInfo t1167_TI;
extern TypeInfo t25_TI;
extern TypeInfo t862_TI;
extern TypeInfo t1184_TI;
#include "t1130MD.h"
#include "t1172MD.h"
#include "t1167MD.h"
extern MethodInfo m6071_MI;
extern MethodInfo m6068_MI;
extern MethodInfo m6133_MI;
extern MethodInfo m6122_MI;


extern MethodInfo m6058_MI;
 t862 * m6058 (t1166 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6058_MI);
	t1172 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1130_TI));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1172_TI));
		t1172 * L_0 = (t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1172_TI));
		m6071(L_0, p0, (((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f3), (t158*)(t158*)NULL, &m6071_MI);
		V_0 = L_0;
		NullCheck(V_0);
		t25 * L_1 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m6068_MI, V_0);
		return ((t862 *)Castclass(L_1, InitializedTypeInfo(&t862_TI)));
	}
}
extern MethodInfo m6059_MI;
 t1167 * m6059 (t1166 * __this, t1168 * p0, t131 * p1, t25 * p2, t1128 * p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6059_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t25 * L_0 = m6133(NULL, p0, p1, &m6133_MI);
		t1167 * L_1 = m6122(NULL, L_0, &m6122_MI);
		return L_1;
	}
}
extern MethodInfo m6060_MI;
 void m6060 (t1166 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6060_MI);
	{
		return;
	}
}
extern MethodInfo m6061_MI;
 bool m6061 (t1166 * __this, t1128 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6061_MI);
	{
		return 1;
	}
}
// Metadata Definition System.Runtime.Remoting.Proxies.ProxyAttribute
extern Il2CppType t131_0_0_0;
static ParameterInfo t1166_m6058_ParameterInfos[] = 
{
	{"serverType", 0, 134221491, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1166_TI;
extern Il2CppType t862_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6058_MI = 
{
	"CreateInstance", (methodPointerType)&m6058, &t1166_TI, &t862_0_0_0, RuntimeInvoker_t25_t25, t1166_m6058_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 1, false, false, 3113, NULL, (methodPointerType)NULL};
extern Il2CppType t1168_0_0_0;
extern Il2CppType t131_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t1128_0_0_0;
static ParameterInfo t1166_m6059_ParameterInfos[] = 
{
	{"objRef", 0, 134221492, &EmptyCustomAttributesCache, &t1168_0_0_0},
	{"serverType", 1, 134221493, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"serverObject", 2, 134221494, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"serverContext", 3, 134221495, &EmptyCustomAttributesCache, &t1128_0_0_0},
};
extern TypeInfo t1166_TI;
extern Il2CppType t1167_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6059_MI = 
{
	"CreateProxy", (methodPointerType)&m6059, &t1166_TI, &t1167_0_0_0, RuntimeInvoker_t25_t25_t25_t25_t25, t1166_m6059_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 4, false, false, 3114, NULL, (methodPointerType)NULL};
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1166_m6060_ParameterInfos[] = 
{
	{"msg", 0, 134221496, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern TypeInfo t1166_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1166__CustomAttributeCache_m6060;
MethodInfo m6060_MI = 
{
	"GetPropertiesForNewContext", (methodPointerType)&m6060, &t1166_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1166_m6060_ParameterInfos, &t1166__CustomAttributeCache_m6060, 486, 0, 4, 1, false, false, 3115, NULL, (methodPointerType)NULL};
extern Il2CppType t1128_0_0_0;
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1166_m6061_ParameterInfos[] = 
{
	{"ctx", 0, 134221497, &EmptyCustomAttributesCache, &t1128_0_0_0},
	{"msg", 1, 134221498, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern TypeInfo t1166_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1166__CustomAttributeCache_m6061;
MethodInfo m6061_MI = 
{
	"IsContextOK", (methodPointerType)&m6061, &t1166_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25, t1166_m6061_ParameterInfos, &t1166__CustomAttributeCache_m6061, 486, 0, 5, 2, false, false, 3116, NULL, (methodPointerType)NULL};
static MethodInfo* t1166_MIs[] =
{
	&m6058_MI,
	&m6059_MI,
	&m6060_MI,
	&m6061_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6060_MI;
extern MethodInfo m6061_MI;
extern MethodInfo m6058_MI;
extern MethodInfo m6059_MI;
static MethodInfo* t1166_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
	&m6060_MI,
	&m6061_MI,
	&m6058_MI,
	&m6059_MI,
};
extern TypeInfo t1635_TI;
static TypeInfo* t1166_ITIs[] = 
{
	&t1635_TI,
};
extern TypeInfo t704_TI;
extern TypeInfo t1635_TI;
static Il2CppInterfaceOffsetPair t1166_IOs[] = 
{
	{ &t704_TI, 4},
	{ &t1635_TI, 4},
};
extern TypeInfo t724_TI;
#include "t724.h"
#include "t724MD.h"
extern MethodInfo m3439_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1166_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1166_CustomAttributesCacheGenerator_m6060(CustomAttributesCache* cache)
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
void t1166_CustomAttributesCacheGenerator_m6061(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1166__CustomAttributeCache = {
2,
NULL,
&t1166_CustomAttributesCacheGenerator
};
CustomAttributesCache t1166__CustomAttributeCache_m6060 = {
1,
NULL,
&t1166_CustomAttributesCacheGenerator_m6060
};
CustomAttributesCache t1166__CustomAttributeCache_m6061 = {
1,
NULL,
&t1166_CustomAttributesCacheGenerator_m6061
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1166_0_0_0;
extern Il2CppType t1166_1_0_0;
extern TypeInfo t591_TI;
struct t1166;
extern TypeInfo t1166_TI;
extern CustomAttributesCache t1166__CustomAttributeCache;
extern CustomAttributesCache t1166__CustomAttributeCache_m6060;
extern CustomAttributesCache t1166__CustomAttributeCache_m6061;
TypeInfo t1166_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ProxyAttribute", "System.Runtime.Remoting.Proxies", t1166_MIs, NULL, NULL, NULL, &t591_TI, NULL, NULL, &t1166_TI, t1166_ITIs, t1166_VT, &t1166__CustomAttributeCache, &t1166_TI, &t1166_0_0_0, &t1166_1_0_0, t1166_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1166), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 8, 1, 2};
#include "t1169.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1169_TI;
#include "t1169MD.h"



// Metadata Definition System.Runtime.Remoting.Proxies.TransparentProxy
extern Il2CppType t1167_0_0_6;
FieldInfo t1169_f0_FieldInfo = 
{
	"_rp", &t1167_0_0_6, &t1169_TI, offsetof(t1169, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1169_FIs[] =
{
	&t1169_f0_FieldInfo,
	NULL
};
static MethodInfo* t1169_MIs[] =
{
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1169_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1169_0_0_0;
extern Il2CppType t1169_1_0_0;
extern TypeInfo t25_TI;
struct t1169;
extern TypeInfo t1169_TI;
TypeInfo t1169_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TransparentProxy", "System.Runtime.Remoting.Proxies", t1169_MIs, NULL, t1169_FIs, NULL, &t25_TI, NULL, NULL, &t1169_TI, NULL, t1169_VT, &EmptyCustomAttributesCache, &t1169_TI, &t1169_0_0_0, &t1169_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1169), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1167_TI;

#include "t61.h"
#include "t1171.h"
#include "t1170.h"
extern TypeInfo t61_TI;
extern TypeInfo t1167_TI;
extern TypeInfo t131_TI;
extern TypeInfo t125_TI;
extern TypeInfo t445_TI;
extern TypeInfo t177_TI;
extern TypeInfo t862_TI;
extern TypeInfo t1180_TI;
extern TypeInfo t27_TI;
extern TypeInfo t25_TI;
#include "t61MD.h"
extern Il2CppType t862_0_0_0;
extern MethodInfo m6064_MI;
extern MethodInfo m452_MI;
extern MethodInfo m4333_MI;
extern MethodInfo m4332_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m3410_MI;
extern MethodInfo m7533_MI;
extern MethodInfo m484_MI;
extern MethodInfo m6065_MI;
extern MethodInfo m8310_MI;
extern MethodInfo m3518_MI;
extern MethodInfo m386_MI;
extern MethodInfo m6067_MI;


extern MethodInfo m6062_MI;
 void m6062 (t1167 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6062_MI);
	{
		m6064(__this, p0, (((t61_SFs*)InitializedTypeInfo(&t61_TI)->static_fields)->f1), NULL, &m6064_MI);
		return;
	}
}
extern MethodInfo m6063_MI;
 void m6063 (t1167 * __this, t131 * p0, t1171 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6063_MI);
	{
		m6064(__this, p0, (((t61_SFs*)InitializedTypeInfo(&t61_TI)->static_fields)->f1), NULL, &m6064_MI);
		__this->f3 = p1;
		return;
	}
}
extern MethodInfo m6064_MI;
 void m6064 (t1167 * __this, t131 * p0, t61 p1, t25 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6064_MI);
	{
		__this->f1 = (-1);
		m452(__this, &m452_MI);
		NullCheck(p0);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4333_MI, p0);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		NullCheck(p0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4332_MI, p0);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		t445 * L_2 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m2409(L_2, (t27*) &_stringLiteral988, &m2409_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0028:
	{
		__this->f0 = p0;
		bool L_3 = m3410(NULL, p1, (((t61_SFs*)InitializedTypeInfo(&t61_TI)->static_fields)->f1), &m3410_MI);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		t177 * L_4 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m7533(L_4, (t27*) &_stringLiteral989, &m7533_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_0047:
	{
		return;
	}
}
extern MethodInfo m6065_MI;
 t131 * m6065 (t25 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6065_MI);
	typedef t131 * (*m6065_ftn) (t25 *);
	static m6065_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m6065_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m6066_MI;
 t131 * m6066 (t1167 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6066_MI);
	{
		t25 * L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		t131 * L_1 = (__this->f0);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4332_MI, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_3 = m484(NULL, LoadTypeToken(&t862_0_0_0), &m484_MI);
		return L_3;
	}

IL_0020:
	{
		t131 * L_4 = (__this->f0);
		return L_4;
	}

IL_0027:
	{
		t25 * L_5 = (__this->f4);
		t131 * L_6 = m6065(NULL, L_5, &m6065_MI);
		return L_6;
	}
}
extern MethodInfo m6067_MI;
 t25 * m6067 (t1167 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6067_MI);
	typedef t25 * (*m6067_ftn) (t1167 *, t27*);
	static m6067_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m6067_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m6068_MI;
 t25 * m6068 (t1167 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6068_MI);
	t27* V_0 = {0};
	t25 * V_1 = {0};
	{
		t25 * L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_005a;
		}
	}
	{
		V_1 = ((t25 *)IsInst(__this, InitializedTypeInfo(&t1180_TI)));
		if (!V_1)
		{
			goto IL_0041;
		}
	}
	{
		NullCheck(V_1);
		t27* L_1 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8310_MI, V_1);
		V_0 = L_1;
		if (!V_0)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_2 = m484(NULL, LoadTypeToken(&t862_0_0_0), &m484_MI);
		NullCheck(L_2);
		t27* L_3 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_4 = m386(NULL, V_0, L_3, &m386_MI);
		if (!L_4)
		{
			goto IL_003f;
		}
	}

IL_0033:
	{
		t131 * L_5 = (__this->f0);
		NullCheck(L_5);
		t27* L_6 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, L_5);
		V_0 = L_6;
	}

IL_003f:
	{
		goto IL_004d;
	}

IL_0041:
	{
		t131 * L_7 = (__this->f0);
		NullCheck(L_7);
		t27* L_8 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, L_7);
		V_0 = L_8;
	}

IL_004d:
	{
		t25 * L_9 = (t25 *)VirtFuncInvoker1< t25 *, t27* >::Invoke(&m6067_MI, __this, V_0);
		__this->f4 = L_9;
	}

IL_005a:
	{
		t25 * L_10 = (__this->f4);
		return L_10;
	}
}
extern MethodInfo m6069_MI;
 void m6069 (t1167 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6069_MI);
	{
		__this->f1 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Proxies.RealProxy
extern Il2CppType t131_0_0_1;
FieldInfo t1167_f0_FieldInfo = 
{
	"class_to_proxy", &t131_0_0_1, &t1167_TI, offsetof(t1167, f0), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t1167_f1_FieldInfo = 
{
	"_targetDomainId", &t134_0_0_1, &t1167_TI, offsetof(t1167, f1), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_3;
FieldInfo t1167_f2_FieldInfo = 
{
	"_targetUri", &t27_0_0_3, &t1167_TI, offsetof(t1167, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1170_0_0_3;
FieldInfo t1167_f3_FieldInfo = 
{
	"_objectIdentity", &t1170_0_0_3, &t1167_TI, offsetof(t1167, f3), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_1;
FieldInfo t1167_f4_FieldInfo = 
{
	"_objTP", &t25_0_0_1, &t1167_TI, offsetof(t1167, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1167_FIs[] =
{
	&t1167_f0_FieldInfo,
	&t1167_f1_FieldInfo,
	&t1167_f2_FieldInfo,
	&t1167_f3_FieldInfo,
	&t1167_f4_FieldInfo,
	NULL
};
extern Il2CppType t131_0_0_0;
static ParameterInfo t1167_m6062_ParameterInfos[] = 
{
	{"classToProxy", 0, 134221499, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1167_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6062_MI = 
{
	".ctor", (methodPointerType)&m6062, &t1167_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1167_m6062_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 1, false, false, 3117, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t1171_0_0_0;
static ParameterInfo t1167_m6063_ParameterInfos[] = 
{
	{"classToProxy", 0, 134221500, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"identity", 1, 134221501, &EmptyCustomAttributesCache, &t1171_0_0_0},
};
extern TypeInfo t1167_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6063_MI = 
{
	".ctor", (methodPointerType)&m6063, &t1167_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1167_m6063_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 3118, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t61_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t1167_m6064_ParameterInfos[] = 
{
	{"classToProxy", 0, 134221502, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"stub", 1, 134221503, &EmptyCustomAttributesCache, &t61_0_0_0},
	{"stubData", 2, 134221504, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1167_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6064_MI = 
{
	".ctor", (methodPointerType)&m6064, &t1167_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61_t25, t1167_m6064_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 3, false, false, 3119, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1167_m6065_ParameterInfos[] = 
{
	{"transparentProxy", 0, 134221505, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1167_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6065_MI = 
{
	"InternalGetProxyType", (methodPointerType)&m6065, &t1167_TI, &t131_0_0_0, RuntimeInvoker_t25_t25, t1167_m6065_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 3120, NULL, (methodPointerType)NULL};
extern TypeInfo t1167_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6066_MI = 
{
	"GetProxiedType", (methodPointerType)&m6066, &t1167_TI, &t131_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3121, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1167_m6067_ParameterInfos[] = 
{
	{"className", 0, 134221506, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1167_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6067_MI = 
{
	"InternalGetTransparentProxy", (methodPointerType)&m6067, &t1167_TI, &t25_0_0_0, RuntimeInvoker_t25_t25, t1167_m6067_ParameterInfos, &EmptyCustomAttributesCache, 451, 4096, 4, 1, false, false, 3122, NULL, (methodPointerType)NULL};
extern TypeInfo t1167_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6068_MI = 
{
	"GetTransparentProxy", (methodPointerType)&m6068, &t1167_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 454, 0, 5, 0, false, false, 3123, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t1167_m6069_ParameterInfos[] = 
{
	{"domainId", 0, 134221507, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1167_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6069_MI = 
{
	"SetTargetDomain", (methodPointerType)&m6069, &t1167_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t1167_m6069_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 3124, NULL, (methodPointerType)NULL};
static MethodInfo* t1167_MIs[] =
{
	&m6062_MI,
	&m6063_MI,
	&m6064_MI,
	&m6065_MI,
	&m6066_MI,
	&m6067_MI,
	&m6068_MI,
	&m6069_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6067_MI;
extern MethodInfo m6068_MI;
static MethodInfo* t1167_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6067_MI,
	&m6068_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1167_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1167__CustomAttributeCache = {
1,
NULL,
&t1167_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1167_0_0_0;
extern Il2CppType t1167_1_0_0;
extern TypeInfo t25_TI;
struct t1167;
extern TypeInfo t1167_TI;
extern CustomAttributesCache t1167__CustomAttributeCache;
TypeInfo t1167_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RealProxy", "System.Runtime.Remoting.Proxies", t1167_MIs, NULL, t1167_FIs, NULL, &t25_TI, NULL, NULL, &t1167_TI, NULL, t1167_VT, &t1167__CustomAttributeCache, &t1167_TI, &t1167_0_0_0, &t1167_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1167), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 8, 0, 5, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1172_TI;

#include "t1120.h"
#include "t1187.h"
extern TypeInfo t1167_TI;
extern TypeInfo t1171_TI;
extern TypeInfo t1170_TI;
extern TypeInfo t1168_TI;
extern TypeInfo t131_TI;
extern TypeInfo t1180_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1172_TI;
extern TypeInfo t25_TI;
extern TypeInfo t657_TI;
extern TypeInfo t1187_TI;
extern TypeInfo t1184_TI;
extern TypeInfo t123_TI;
#include "t1170MD.h"
#include "t1168MD.h"
#include "t1171MD.h"
#include "t1118MD.h"
extern Il2CppType t25_0_0_0;
extern MethodInfo m8311_MI;
extern MethodInfo m6101_MI;
extern MethodInfo m8310_MI;
extern MethodInfo m6066_MI;
extern MethodInfo m3518_MI;
extern MethodInfo m6063_MI;
extern MethodInfo m6084_MI;
extern MethodInfo m6093_MI;
extern MethodInfo m6062_MI;
extern MethodInfo m5894_MI;
extern MethodInfo m484_MI;
extern MethodInfo m4355_MI;
extern MethodInfo m6136_MI;
extern MethodInfo m352_MI;


extern MethodInfo m6070_MI;
 void m6070 (t1172 * __this, t131 * p0, t1171 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6070_MI);
	{
		m6063(__this, p0, p1, &m6063_MI);
		NullCheck(p1);
		t25 * L_0 = m6084(p1, &m6084_MI);
		__this->f7 = L_0;
		__this->f8 = 0;
		NullCheck(p1);
		t27* L_1 = m6093(p1, &m6093_MI);
		__this->f2 = L_1;
		return;
	}
}
extern MethodInfo m6071_MI;
 void m6071 (t1172 * __this, t131 * p0, t27* p1, t158* p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6071_MI);
	{
		m6062(__this, p0, &m6062_MI);
		__this->f8 = 0;
		t1120 * L_0 = m5894(NULL, p0, p1, p2, &m5894_MI);
		__this->f9 = L_0;
		return;
	}
}
extern MethodInfo m6072_MI;
 void m6072 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6072_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t25_0_0_0), &m484_MI);
		NullCheck(L_0);
		t657 * L_1 = (t657 *)VirtFuncInvoker1< t657 *, t27* >::Invoke(&m4355_MI, L_0, (t27*) &_stringLiteral990);
		((t1172_SFs*)InitializedTypeInfo(&t1172_TI)->static_fields)->f5 = L_1;
		t131 * L_2 = m484(NULL, LoadTypeToken(&t25_0_0_0), &m484_MI);
		NullCheck(L_2);
		t657 * L_3 = (t657 *)VirtFuncInvoker1< t657 *, t27* >::Invoke(&m4355_MI, L_2, (t27*) &_stringLiteral991);
		((t1172_SFs*)InitializedTypeInfo(&t1172_TI)->static_fields)->f6 = L_3;
		return;
	}
}
extern MethodInfo m6073_MI;
 t27* m6073 (t1172 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6073_MI);
	t1168 * V_0 = {0};
	{
		t1170 * L_0 = (__this->f3);
		if (!((t1171 *)IsInst(L_0, InitializedTypeInfo(&t1171_TI))))
		{
			goto IL_002e;
		}
	}
	{
		t1170 * L_1 = (__this->f3);
		NullCheck(L_1);
		t1168 * L_2 = (t1168 *)VirtFuncInvoker1< t1168 *, t131 * >::Invoke(&m8311_MI, L_1, (t131 *)NULL);
		V_0 = L_2;
		NullCheck(V_0);
		t25 * L_3 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m6101_MI, V_0);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		NullCheck(V_0);
		t25 * L_4 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m6101_MI, V_0);
		NullCheck(L_4);
		t27* L_5 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8310_MI, L_4);
		return L_5;
	}

IL_002e:
	{
		t131 * L_6 = m6066(__this, &m6066_MI);
		NullCheck(L_6);
		t27* L_7 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, L_6);
		return L_7;
	}
}
extern MethodInfo m6074_MI;
 void m6074 (t1172 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6074_MI);
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_0 = (__this->f3);
			if (!L_0)
			{
				goto IL_0020;
			}
		}

IL_0008:
		{
			t1170 * L_1 = (__this->f3);
			if (((t1187 *)IsInst(L_1, InitializedTypeInfo(&t1187_TI))))
			{
				goto IL_0020;
			}
		}

IL_0015:
		{
			t1170 * L_2 = (__this->f3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
			m6136(NULL, L_2, &m6136_MI);
		}

IL_0020:
		{
			// IL_0020: leave.s IL_0029
			leaveInstructions[0] = 0x29; // 1
			THROW_SENTINEL(IL_0029);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0022;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0022;
	}

IL_0022:
	{ // begin finally (depth: 1)
		m352(__this, &m352_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x29:
				goto IL_0029;
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

IL_0029:
	{
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Proxies.RemotingProxy
extern Il2CppType t657_0_0_17;
FieldInfo t1172_f5_FieldInfo = 
{
	"_cache_GetTypeMethod", &t657_0_0_17, &t1172_TI, offsetof(t1172_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t657_0_0_17;
FieldInfo t1172_f6_FieldInfo = 
{
	"_cache_GetHashCodeMethod", &t657_0_0_17, &t1172_TI, offsetof(t1172_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t809_0_0_1;
FieldInfo t1172_f7_FieldInfo = 
{
	"_sink", &t809_0_0_1, &t1172_TI, offsetof(t1172, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1172_f8_FieldInfo = 
{
	"_hasEnvoySink", &t125_0_0_1, &t1172_TI, offsetof(t1172, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1120_0_0_1;
FieldInfo t1172_f9_FieldInfo = 
{
	"_ctorCall", &t1120_0_0_1, &t1172_TI, offsetof(t1172, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1172_FIs[] =
{
	&t1172_f5_FieldInfo,
	&t1172_f6_FieldInfo,
	&t1172_f7_FieldInfo,
	&t1172_f8_FieldInfo,
	&t1172_f9_FieldInfo,
	NULL
};
extern MethodInfo m6073_MI;
static PropertyInfo t1172____TypeName_PropertyInfo = 
{
	&t1172_TI, "TypeName", &m6073_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1172_PIs[] =
{
	&t1172____TypeName_PropertyInfo,
	NULL
};
extern Il2CppType t131_0_0_0;
extern Il2CppType t1171_0_0_0;
static ParameterInfo t1172_m6070_ParameterInfos[] = 
{
	{"type", 0, 134221508, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"identity", 1, 134221509, &EmptyCustomAttributesCache, &t1171_0_0_0},
};
extern TypeInfo t1172_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6070_MI = 
{
	".ctor", (methodPointerType)&m6070, &t1172_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1172_m6070_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 3125, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t158_0_0_0;
static ParameterInfo t1172_m6071_ParameterInfos[] = 
{
	{"type", 0, 134221510, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"activationUrl", 1, 134221511, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"activationAttributes", 2, 134221512, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t1172_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6071_MI = 
{
	".ctor", (methodPointerType)&m6071, &t1172_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t1172_m6071_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 3, false, false, 3126, NULL, (methodPointerType)NULL};
extern TypeInfo t1172_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6072_MI = 
{
	".cctor", (methodPointerType)&m6072, &t1172_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3127, NULL, (methodPointerType)NULL};
extern TypeInfo t1172_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6073_MI = 
{
	"get_TypeName", (methodPointerType)&m6073, &t1172_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 3128, NULL, (methodPointerType)NULL};
extern TypeInfo t1172_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6074_MI = 
{
	"Finalize", (methodPointerType)&m6074, &t1172_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 3129, NULL, (methodPointerType)NULL};
static MethodInfo* t1172_MIs[] =
{
	&m6070_MI,
	&m6071_MI,
	&m6072_MI,
	&m6073_MI,
	&m6074_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m6074_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6067_MI;
extern MethodInfo m6068_MI;
extern MethodInfo m6073_MI;
static MethodInfo* t1172_VT[] =
{
	&m455_MI,
	&m6074_MI,
	&m456_MI,
	&m457_MI,
	&m6067_MI,
	&m6068_MI,
	&m6073_MI,
};
extern TypeInfo t1180_TI;
static TypeInfo* t1172_ITIs[] = 
{
	&t1180_TI,
};
extern TypeInfo t1180_TI;
static Il2CppInterfaceOffsetPair t1172_IOs[] = 
{
	{ &t1180_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1172_0_0_0;
extern Il2CppType t1172_1_0_0;
extern TypeInfo t1167_TI;
struct t1172;
extern TypeInfo t1172_TI;
TypeInfo t1172_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingProxy", "System.Runtime.Remoting.Proxies", t1172_MIs, t1172_PIs, t1172_FIs, NULL, &t1167_TI, NULL, NULL, &t1172_TI, t1172_ITIs, t1172_VT, &EmptyCustomAttributesCache, &t1172_TI, &t1172_0_0_0, &t1172_1_0_0, t1172_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1172), 0, -1, sizeof(t1172_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, true, true, false, false, 5, 1, 5, 0, 0, 7, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1644_TI;



// Metadata Definition System.Runtime.Remoting.Services.ITrackingHandler
extern Il2CppType t25_0_0_0;
extern Il2CppType t1168_0_0_0;
static ParameterInfo t1644_m8312_ParameterInfos[] = 
{
	{"obj", 0, 134221513, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"or", 1, 134221514, &EmptyCustomAttributesCache, &t1168_0_0_0},
};
extern TypeInfo t1644_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8312_MI = 
{
	"UnmarshaledObject", NULL, &t1644_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1644_m8312_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, false, 3130, NULL, (methodPointerType)NULL};
static MethodInfo* t1644_MIs[] =
{
	&m8312_MI,
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1644_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1644__CustomAttributeCache = {
1,
NULL,
&t1644_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1644_0_0_0;
extern Il2CppType t1644_1_0_0;
struct t1644;
extern TypeInfo t1644_TI;
extern CustomAttributesCache t1644__CustomAttributeCache;
TypeInfo t1644_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ITrackingHandler", "System.Runtime.Remoting.Services", t1644_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1644_TI, NULL, NULL, &t1644__CustomAttributeCache, &t1644_TI, &t1644_0_0_0, &t1644_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1173.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1173_TI;
#include "t1173MD.h"

extern TypeInfo t931_TI;
extern TypeInfo t1173_TI;
extern TypeInfo t25_TI;
extern TypeInfo t134_TI;
extern TypeInfo t1644_TI;
extern TypeInfo t131_TI;
extern TypeInfo t122_TI;
extern TypeInfo t1645_TI;
extern TypeInfo t123_TI;
extern TypeInfo t1168_TI;
#include "t1329MD.h"
extern Il2CppType t1644_0_0_0;
extern MethodInfo m4830_MI;
extern MethodInfo m4839_MI;
extern MethodInfo m6922_MI;
extern MethodInfo m4835_MI;
extern MethodInfo m484_MI;
extern MethodInfo m4859_MI;
extern MethodInfo m6923_MI;
extern MethodInfo m8312_MI;


extern MethodInfo m6075_MI;
 void m6075 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6075_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t931_TI));
		t931 * L_0 = (t931 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t931_TI));
		m4830(L_0, &m4830_MI);
		((t1173_SFs*)InitializedTypeInfo(&t1173_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m6076_MI;
 void m6076 (t25 * __this, t25 * p0, t1168 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6076_MI);
	t1645* V_0 = {0};
	t25 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1173_TI));
		NullCheck((((t1173_SFs*)InitializedTypeInfo(&t1173_TI)->static_fields)->f0));
		t25 * L_0 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4839_MI, (((t1173_SFs*)InitializedTypeInfo(&t1173_TI)->static_fields)->f0));
		V_1 = L_0;
		m6922(NULL, V_1, &m6922_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1173_TI));
			NullCheck((((t1173_SFs*)InitializedTypeInfo(&t1173_TI)->static_fields)->f0));
			int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4835_MI, (((t1173_SFs*)InitializedTypeInfo(&t1173_TI)->static_fields)->f0));
			if (L_1)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			// IL_001d: leave.s IL_005a
			leaveInstructions[0] = 0x5A; // 1
			THROW_SENTINEL(IL_005a);
			// finally target depth: 1
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1173_TI));
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
			t131 * L_2 = m484(NULL, LoadTypeToken(&t1644_0_0_0), &m484_MI);
			NullCheck((((t1173_SFs*)InitializedTypeInfo(&t1173_TI)->static_fields)->f0));
			t122 * L_3 = (t122 *)VirtFuncInvoker1< t122 *, t131 * >::Invoke(&m4859_MI, (((t1173_SFs*)InitializedTypeInfo(&t1173_TI)->static_fields)->f0), L_2);
			V_0 = ((t1645*)Castclass(L_3, InitializedTypeInfo(&t1645_TI)));
			// IL_0039: leave.s IL_0042
			leaveInstructions[0] = 0x42; // 1
			THROW_SENTINEL(IL_0042);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_003b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_003b;
	}

IL_003b:
	{ // begin finally (depth: 1)
		m6923(NULL, V_1, &m6923_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x5A:
				goto IL_005a;
			case 0x42:
				goto IL_0042;
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

IL_0042:
	{
		V_2 = 0;
		goto IL_0054;
	}

IL_0046:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_2);
		NullCheck((*(t25 **)(t25 **)SZArrayLdElema(V_0, V_2)));
		InterfaceActionInvoker2< t25 *, t1168 * >::Invoke(&m8312_MI, (*(t25 **)(t25 **)SZArrayLdElema(V_0, V_2)), p0, p1);
		V_2 = ((int32_t)(V_2+1));
	}

IL_0054:
	{
		NullCheck(V_0);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t122 *)V_0)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_005a:
	{
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Services.TrackingServices
extern Il2CppType t931_0_0_17;
FieldInfo t1173_f0_FieldInfo = 
{
	"_handlers", &t931_0_0_17, &t1173_TI, offsetof(t1173_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1173_FIs[] =
{
	&t1173_f0_FieldInfo,
	NULL
};
extern TypeInfo t1173_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6075_MI = 
{
	".cctor", (methodPointerType)&m6075, &t1173_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3131, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t1168_0_0_0;
static ParameterInfo t1173_m6076_ParameterInfos[] = 
{
	{"obj", 0, 134221515, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"or", 1, 134221516, &EmptyCustomAttributesCache, &t1168_0_0_0},
};
extern TypeInfo t1173_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6076_MI = 
{
	"NotifyUnmarshaledObject", (methodPointerType)&m6076, &t1173_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1173_m6076_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 3132, NULL, (methodPointerType)NULL};
static MethodInfo* t1173_MIs[] =
{
	&m6075_MI,
	&m6076_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1173_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1173_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1173__CustomAttributeCache = {
1,
NULL,
&t1173_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1173_0_0_0;
extern Il2CppType t1173_1_0_0;
extern TypeInfo t25_TI;
struct t1173;
extern TypeInfo t1173_TI;
extern CustomAttributesCache t1173__CustomAttributeCache;
TypeInfo t1173_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TrackingServices", "System.Runtime.Remoting.Services", t1173_MIs, NULL, t1173_FIs, NULL, &t25_TI, NULL, NULL, &t1173_TI, NULL, t1173_VT, &t1173__CustomAttributeCache, &t1173_TI, &t1173_0_0_0, &t1173_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1173), 0, -1, sizeof(t1173_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 2, 0, 1, 0, 0, 4, 0, 0};
#include "t1174.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1174_TI;
#include "t1174MD.h"

extern TypeInfo t1174_TI;
extern TypeInfo t27_TI;
#include "t1175MD.h"
extern MethodInfo m6145_MI;
extern MethodInfo m6144_MI;
extern MethodInfo m6077_MI;
extern MethodInfo m532_MI;


extern MethodInfo m6077_MI;
 t27* m6077 (t1174 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6077_MI);
	{
		t27* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m6078_MI;
 t1176* m6078 (t1174 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6078_MI);
	{
		return (t1176*)NULL;
	}
}
extern MethodInfo m6079_MI;
 t131 * m6079 (t1174 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6079_MI);
	{
		t131 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m6080_MI;
 t27* m6080 (t1174 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6080_MI);
	{
		t27* L_0 = m6145(__this, &m6145_MI);
		t27* L_1 = m6144(__this, &m6144_MI);
		t27* L_2 = m6077(__this, &m6077_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_3 = m532(NULL, L_0, L_1, L_2, &m532_MI);
		return L_3;
	}
}
// Metadata Definition System.Runtime.Remoting.ActivatedClientTypeEntry
extern Il2CppType t27_0_0_1;
FieldInfo t1174_f2_FieldInfo = 
{
	"applicationUrl", &t27_0_0_1, &t1174_TI, offsetof(t1174, f2), &EmptyCustomAttributesCache};
extern Il2CppType t131_0_0_1;
FieldInfo t1174_f3_FieldInfo = 
{
	"obj_type", &t131_0_0_1, &t1174_TI, offsetof(t1174, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1174_FIs[] =
{
	&t1174_f2_FieldInfo,
	&t1174_f3_FieldInfo,
	NULL
};
extern MethodInfo m6077_MI;
static PropertyInfo t1174____ApplicationUrl_PropertyInfo = 
{
	&t1174_TI, "ApplicationUrl", &m6077_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6078_MI;
static PropertyInfo t1174____ContextAttributes_PropertyInfo = 
{
	&t1174_TI, "ContextAttributes", &m6078_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6079_MI;
static PropertyInfo t1174____ObjectType_PropertyInfo = 
{
	&t1174_TI, "ObjectType", &m6079_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1174_PIs[] =
{
	&t1174____ApplicationUrl_PropertyInfo,
	&t1174____ContextAttributes_PropertyInfo,
	&t1174____ObjectType_PropertyInfo,
	NULL
};
extern TypeInfo t1174_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6077_MI = 
{
	"get_ApplicationUrl", (methodPointerType)&m6077, &t1174_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3133, NULL, (methodPointerType)NULL};
extern TypeInfo t1174_TI;
extern Il2CppType t1176_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6078_MI = 
{
	"get_ContextAttributes", (methodPointerType)&m6078, &t1174_TI, &t1176_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3134, NULL, (methodPointerType)NULL};
extern TypeInfo t1174_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6079_MI = 
{
	"get_ObjectType", (methodPointerType)&m6079, &t1174_TI, &t131_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3135, NULL, (methodPointerType)NULL};
extern TypeInfo t1174_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6080_MI = 
{
	"ToString", (methodPointerType)&m6080, &t1174_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3136, NULL, (methodPointerType)NULL};
static MethodInfo* t1174_MIs[] =
{
	&m6077_MI,
	&m6078_MI,
	&m6079_MI,
	&m6080_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m6080_MI;
static MethodInfo* t1174_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m6080_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1174_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1174__CustomAttributeCache = {
1,
NULL,
&t1174_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1174_0_0_0;
extern Il2CppType t1174_1_0_0;
extern TypeInfo t1175_TI;
struct t1174;
extern TypeInfo t1174_TI;
extern CustomAttributesCache t1174__CustomAttributeCache;
TypeInfo t1174_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ActivatedClientTypeEntry", "System.Runtime.Remoting", t1174_MIs, t1174_PIs, t1174_FIs, NULL, &t1175_TI, NULL, NULL, &t1174_TI, NULL, t1174_VT, &t1174__CustomAttributeCache, &t1174_TI, &t1174_0_0_0, &t1174_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1174), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 3, 2, 0, 0, 4, 0, 0};
#include "t1177.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1177_TI;
#include "t1177MD.h"

extern TypeInfo t1177_TI;
extern MethodInfo m452_MI;


extern MethodInfo m6081_MI;
 void m6081 (t1177 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6081_MI);
	{
		m452(__this, &m452_MI);
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m6082_MI;
 t25 * m6082 (t1177 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6082_MI);
	{
		t25 * L_0 = (__this->f0);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.EnvoyInfo
extern Il2CppType t809_0_0_1;
FieldInfo t1177_f0_FieldInfo = 
{
	"envoySinks", &t809_0_0_1, &t1177_TI, offsetof(t1177, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1177_FIs[] =
{
	&t1177_f0_FieldInfo,
	NULL
};
extern MethodInfo m6082_MI;
static PropertyInfo t1177____EnvoySinks_PropertyInfo = 
{
	&t1177_TI, "EnvoySinks", &m6082_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1177_PIs[] =
{
	&t1177____EnvoySinks_PropertyInfo,
	NULL
};
extern Il2CppType t809_0_0_0;
static ParameterInfo t1177_m6081_ParameterInfos[] = 
{
	{"sinks", 0, 134221517, &EmptyCustomAttributesCache, &t809_0_0_0},
};
extern TypeInfo t1177_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6081_MI = 
{
	".ctor", (methodPointerType)&m6081, &t1177_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1177_m6081_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3137, NULL, (methodPointerType)NULL};
extern TypeInfo t1177_TI;
extern Il2CppType t809_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6082_MI = 
{
	"get_EnvoySinks", (methodPointerType)&m6082, &t1177_TI, &t809_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 3138, NULL, (methodPointerType)NULL};
static MethodInfo* t1177_MIs[] =
{
	&m6081_MI,
	&m6082_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6082_MI;
static MethodInfo* t1177_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6082_MI,
};
extern TypeInfo t1181_TI;
static TypeInfo* t1177_ITIs[] = 
{
	&t1181_TI,
};
extern TypeInfo t1181_TI;
static Il2CppInterfaceOffsetPair t1177_IOs[] = 
{
	{ &t1181_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1177_0_0_0;
extern Il2CppType t1177_1_0_0;
extern TypeInfo t25_TI;
struct t1177;
extern TypeInfo t1177_TI;
TypeInfo t1177_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EnvoyInfo", "System.Runtime.Remoting", t1177_MIs, t1177_PIs, t1177_FIs, NULL, &t25_TI, NULL, NULL, &t1177_TI, t1177_ITIs, t1177_VT, &EmptyCustomAttributesCache, &t1177_TI, &t1177_0_0_0, &t1177_1_0_0, t1177_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1177), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 1, 1, 0, 0, 5, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1179_TI;



// Metadata Definition System.Runtime.Remoting.IChannelInfo
extern MethodInfo m8313_MI;
static PropertyInfo t1179____ChannelData_PropertyInfo = 
{
	&t1179_TI, "ChannelData", &m8313_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1179_PIs[] =
{
	&t1179____ChannelData_PropertyInfo,
	NULL
};
extern TypeInfo t1179_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8313_MI = 
{
	"get_ChannelData", NULL, &t1179_TI, &t158_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3139, NULL, (methodPointerType)NULL};
static MethodInfo* t1179_MIs[] =
{
	&m8313_MI,
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1179_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1179__CustomAttributeCache = {
1,
NULL,
&t1179_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1179_0_0_0;
extern Il2CppType t1179_1_0_0;
struct t1179;
extern TypeInfo t1179_TI;
extern CustomAttributesCache t1179__CustomAttributeCache;
TypeInfo t1179_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IChannelInfo", "System.Runtime.Remoting", t1179_MIs, t1179_PIs, NULL, NULL, NULL, NULL, NULL, &t1179_TI, NULL, NULL, &t1179__CustomAttributeCache, &t1179_TI, &t1179_0_0_0, &t1179_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1181_TI;



// Metadata Definition System.Runtime.Remoting.IEnvoyInfo
extern MethodInfo m8314_MI;
static PropertyInfo t1181____EnvoySinks_PropertyInfo = 
{
	&t1181_TI, "EnvoySinks", &m8314_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1181_PIs[] =
{
	&t1181____EnvoySinks_PropertyInfo,
	NULL
};
extern TypeInfo t1181_TI;
extern Il2CppType t809_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8314_MI = 
{
	"get_EnvoySinks", NULL, &t1181_TI, &t809_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3140, NULL, (methodPointerType)NULL};
static MethodInfo* t1181_MIs[] =
{
	&m8314_MI,
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1181_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1181__CustomAttributeCache = {
1,
NULL,
&t1181_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1181_0_0_0;
extern Il2CppType t1181_1_0_0;
struct t1181;
extern TypeInfo t1181_TI;
extern CustomAttributesCache t1181__CustomAttributeCache;
TypeInfo t1181_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnvoyInfo", "System.Runtime.Remoting", t1181_MIs, t1181_PIs, NULL, NULL, NULL, NULL, NULL, &t1181_TI, NULL, NULL, &t1181__CustomAttributeCache, &t1181_TI, &t1181_0_0_0, &t1181_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1180_TI;



// Metadata Definition System.Runtime.Remoting.IRemotingTypeInfo
extern MethodInfo m8310_MI;
static PropertyInfo t1180____TypeName_PropertyInfo = 
{
	&t1180_TI, "TypeName", &m8310_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1180_PIs[] =
{
	&t1180____TypeName_PropertyInfo,
	NULL
};
extern TypeInfo t1180_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8310_MI = 
{
	"get_TypeName", NULL, &t1180_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3141, NULL, (methodPointerType)NULL};
static MethodInfo* t1180_MIs[] =
{
	&m8310_MI,
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1180_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1180__CustomAttributeCache = {
1,
NULL,
&t1180_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1180_0_0_0;
extern Il2CppType t1180_1_0_0;
struct t1180;
extern TypeInfo t1180_TI;
extern CustomAttributesCache t1180__CustomAttributeCache;
TypeInfo t1180_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IRemotingTypeInfo", "System.Runtime.Remoting", t1180_MIs, t1180_PIs, NULL, NULL, NULL, NULL, NULL, &t1180_TI, NULL, NULL, &t1180__CustomAttributeCache, &t1180_TI, &t1180_0_0_0, &t1180_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1170_TI;

extern TypeInfo t1170_TI;
extern MethodInfo m452_MI;


extern MethodInfo m6083_MI;
 void m6083 (t1170 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6083_MI);
	{
		m452(__this, &m452_MI);
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m6084_MI;
 t25 * m6084 (t1170 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6084_MI);
	{
		t25 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m6085_MI;
 void m6085 (t1170 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6085_MI);
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m6086_MI;
 t27* m6086 (t1170 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6086_MI);
	{
		t27* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m6087_MI;
 bool m6087 (t1170 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6087_MI);
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m6088_MI;
 void m6088 (t1170 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6088_MI);
	{
		__this->f4 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Identity
extern Il2CppType t27_0_0_4;
FieldInfo t1170_f0_FieldInfo = 
{
	"_objectUri", &t27_0_0_4, &t1170_TI, offsetof(t1170, f0), &EmptyCustomAttributesCache};
extern Il2CppType t809_0_0_4;
FieldInfo t1170_f1_FieldInfo = 
{
	"_channelSink", &t809_0_0_4, &t1170_TI, offsetof(t1170, f1), &EmptyCustomAttributesCache};
extern Il2CppType t809_0_0_4;
FieldInfo t1170_f2_FieldInfo = 
{
	"_envoySink", &t809_0_0_4, &t1170_TI, offsetof(t1170, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1168_0_0_4;
FieldInfo t1170_f3_FieldInfo = 
{
	"_objRef", &t1168_0_0_4, &t1170_TI, offsetof(t1170, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1170_f4_FieldInfo = 
{
	"_disposed", &t125_0_0_1, &t1170_TI, offsetof(t1170, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1170_FIs[] =
{
	&t1170_f0_FieldInfo,
	&t1170_f1_FieldInfo,
	&t1170_f2_FieldInfo,
	&t1170_f3_FieldInfo,
	&t1170_f4_FieldInfo,
	NULL
};
extern MethodInfo m6084_MI;
extern MethodInfo m6085_MI;
static PropertyInfo t1170____ChannelSink_PropertyInfo = 
{
	&t1170_TI, "ChannelSink", &m6084_MI, &m6085_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6086_MI;
static PropertyInfo t1170____ObjectUri_PropertyInfo = 
{
	&t1170_TI, "ObjectUri", &m6086_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6087_MI;
extern MethodInfo m6088_MI;
static PropertyInfo t1170____Disposed_PropertyInfo = 
{
	&t1170_TI, "Disposed", &m6087_MI, &m6088_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1170_PIs[] =
{
	&t1170____ChannelSink_PropertyInfo,
	&t1170____ObjectUri_PropertyInfo,
	&t1170____Disposed_PropertyInfo,
	NULL
};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1170_m6083_ParameterInfos[] = 
{
	{"objectUri", 0, 134221518, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1170_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6083_MI = 
{
	".ctor", (methodPointerType)&m6083, &t1170_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1170_m6083_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3142, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
static ParameterInfo t1170_m8311_ParameterInfos[] = 
{
	{"requestedType", 0, 134221519, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1170_TI;
extern Il2CppType t1168_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8311_MI = 
{
	"CreateObjRef", NULL, &t1170_TI, &t1168_0_0_0, RuntimeInvoker_t25_t25, t1170_m8311_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 3143, NULL, (methodPointerType)NULL};
extern TypeInfo t1170_TI;
extern Il2CppType t809_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6084_MI = 
{
	"get_ChannelSink", (methodPointerType)&m6084, &t1170_TI, &t809_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3144, NULL, (methodPointerType)NULL};
extern Il2CppType t809_0_0_0;
static ParameterInfo t1170_m6085_ParameterInfos[] = 
{
	{"value", 0, 134221520, &EmptyCustomAttributesCache, &t809_0_0_0},
};
extern TypeInfo t1170_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6085_MI = 
{
	"set_ChannelSink", (methodPointerType)&m6085, &t1170_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1170_m6085_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3145, NULL, (methodPointerType)NULL};
extern TypeInfo t1170_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6086_MI = 
{
	"get_ObjectUri", (methodPointerType)&m6086, &t1170_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3146, NULL, (methodPointerType)NULL};
extern TypeInfo t1170_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6087_MI = 
{
	"get_Disposed", (methodPointerType)&m6087, &t1170_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3147, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1170_m6088_ParameterInfos[] = 
{
	{"value", 0, 134221521, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1170_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m6088_MI = 
{
	"set_Disposed", (methodPointerType)&m6088, &t1170_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t1170_m6088_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3148, NULL, (methodPointerType)NULL};
static MethodInfo* t1170_MIs[] =
{
	&m6083_MI,
	&m8311_MI,
	&m6084_MI,
	&m6085_MI,
	&m6086_MI,
	&m6087_MI,
	&m6088_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1170_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	NULL,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1170_0_0_0;
extern Il2CppType t1170_1_0_0;
extern TypeInfo t25_TI;
struct t1170;
extern TypeInfo t1170_TI;
TypeInfo t1170_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Identity", "System.Runtime.Remoting", t1170_MIs, t1170_PIs, t1170_FIs, NULL, &t25_TI, NULL, NULL, &t1170_TI, NULL, t1170_VT, &EmptyCustomAttributesCache, &t1170_TI, &t1170_0_0_0, &t1170_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1170), 0, -1, 0, 0, -1, 1048704, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 7, 3, 5, 0, 0, 5, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1171_TI;

#include "t1178.h"
extern TypeInfo t1171_TI;
extern TypeInfo t1178_TI;
extern TypeInfo t25_TI;
extern TypeInfo t862_TI;
extern TypeInfo t1170_TI;
extern TypeInfo t1168_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1181_TI;
extern TypeInfo t809_TI;
#include "t1178MD.h"
extern MethodInfo m7768_MI;
extern MethodInfo m7764_MI;
extern MethodInfo m6103_MI;
extern MethodInfo m6083_MI;
extern MethodInfo m6099_MI;
extern MethodInfo m8314_MI;


extern MethodInfo m6089_MI;
 void m6089 (t1171 * __this, t27* p0, t1168 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6089_MI);
	t25 * V_0 = {0};
	t1171 * G_B2_0 = {0};
	t1171 * G_B1_0 = {0};
	t25 * G_B3_0 = {0};
	t1171 * G_B3_1 = {0};
	{
		m6083(__this, p0, &m6083_MI);
		__this->f3 = p1;
		t1168 * L_0 = (__this->f3);
		NullCheck(L_0);
		t25 * L_1 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m6099_MI, L_0);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0030;
		}
	}
	{
		t1168 * L_2 = (__this->f3);
		NullCheck(L_2);
		t25 * L_3 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m6099_MI, L_2);
		NullCheck(L_3);
		t25 * L_4 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m8314_MI, L_3);
		V_0 = L_4;
		G_B3_0 = V_0;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = ((t25 *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		G_B3_1->f2 = G_B3_0;
		return;
	}
}
extern MethodInfo m6090_MI;
 t862 * m6090 (t1171 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6090_MI);
	{
		t1178 * L_0 = (__this->f5);
		NullCheck(L_0);
		t25 * L_1 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m7768_MI, L_0);
		return ((t862 *)Castclass(L_1, InitializedTypeInfo(&t862_TI)));
	}
}
extern MethodInfo m6091_MI;
 void m6091 (t1171 * __this, t862 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6091_MI);
	{
		t1178 * L_0 = (t1178 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1178_TI));
		m7764(L_0, p0, &m7764_MI);
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m6092_MI;
 t1168 * m6092 (t1171 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6092_MI);
	{
		t1168 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m6093_MI;
 t27* m6093 (t1171 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6093_MI);
	{
		t1168 * L_0 = (__this->f3);
		NullCheck(L_0);
		t27* L_1 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m6103_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Runtime.Remoting.ClientIdentity
extern Il2CppType t1178_0_0_1;
FieldInfo t1171_f5_FieldInfo = 
{
	"_proxyReference", &t1178_0_0_1, &t1171_TI, offsetof(t1171, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1171_FIs[] =
{
	&t1171_f5_FieldInfo,
	NULL
};
extern MethodInfo m6090_MI;
extern MethodInfo m6091_MI;
static PropertyInfo t1171____ClientProxy_PropertyInfo = 
{
	&t1171_TI, "ClientProxy", &m6090_MI, &m6091_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6093_MI;
static PropertyInfo t1171____TargetUri_PropertyInfo = 
{
	&t1171_TI, "TargetUri", &m6093_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1171_PIs[] =
{
	&t1171____ClientProxy_PropertyInfo,
	&t1171____TargetUri_PropertyInfo,
	NULL
};
extern Il2CppType t27_0_0_0;
extern Il2CppType t1168_0_0_0;
static ParameterInfo t1171_m6089_ParameterInfos[] = 
{
	{"objectUri", 0, 134221522, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"objRef", 1, 134221523, &EmptyCustomAttributesCache, &t1168_0_0_0},
};
extern TypeInfo t1171_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6089_MI = 
{
	".ctor", (methodPointerType)&m6089, &t1171_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1171_m6089_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3149, NULL, (methodPointerType)NULL};
extern TypeInfo t1171_TI;
extern Il2CppType t862_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6090_MI = 
{
	"get_ClientProxy", (methodPointerType)&m6090, &t1171_TI, &t862_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3150, NULL, (methodPointerType)NULL};
extern Il2CppType t862_0_0_0;
static ParameterInfo t1171_m6091_ParameterInfos[] = 
{
	{"value", 0, 134221524, &EmptyCustomAttributesCache, &t862_0_0_0},
};
extern TypeInfo t1171_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6091_MI = 
{
	"set_ClientProxy", (methodPointerType)&m6091, &t1171_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1171_m6091_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3151, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
static ParameterInfo t1171_m6092_ParameterInfos[] = 
{
	{"requestedType", 0, 134221525, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1171_TI;
extern Il2CppType t1168_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6092_MI = 
{
	"CreateObjRef", (methodPointerType)&m6092, &t1171_TI, &t1168_0_0_0, RuntimeInvoker_t25_t25, t1171_m6092_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 3152, NULL, (methodPointerType)NULL};
extern TypeInfo t1171_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6093_MI = 
{
	"get_TargetUri", (methodPointerType)&m6093, &t1171_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3153, NULL, (methodPointerType)NULL};
static MethodInfo* t1171_MIs[] =
{
	&m6089_MI,
	&m6090_MI,
	&m6091_MI,
	&m6092_MI,
	&m6093_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6092_MI;
static MethodInfo* t1171_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6092_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1171_0_0_0;
extern Il2CppType t1171_1_0_0;
extern TypeInfo t1170_TI;
struct t1171;
extern TypeInfo t1171_TI;
TypeInfo t1171_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ClientIdentity", "System.Runtime.Remoting", t1171_MIs, t1171_PIs, t1171_FIs, NULL, &t1170_TI, NULL, NULL, &t1171_TI, NULL, t1171_VT, &EmptyCustomAttributesCache, &t1171_TI, &t1171_0_0_0, &t1171_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1171), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 5, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1168_TI;

#include "t1129.h"
extern TypeInfo t1168_TI;
extern TypeInfo t1180_TI;
extern TypeInfo t27_TI;
extern TypeInfo t131_TI;
extern TypeInfo t586_TI;
extern TypeInfo t123_TI;
extern TypeInfo t134_TI;
extern TypeInfo t125_TI;
extern TypeInfo t1179_TI;
extern TypeInfo t1181_TI;
extern TypeInfo t142_TI;
extern TypeInfo t810_TI;
extern TypeInfo t1359_TI;
extern TypeInfo t177_TI;
extern TypeInfo t1225_TI;
extern TypeInfo t1184_TI;
extern TypeInfo t1129_TI;
#include "t1359MD.h"
#include "t1129MD.h"
extern Il2CppType t1180_0_0_0;
extern Il2CppType t1181_0_0_0;
extern Il2CppType t1179_0_0_0;
extern MethodInfo m8310_MI;
extern MethodInfo m4346_MI;
extern MethodInfo m452_MI;
extern MethodInfo m6107_MI;
extern MethodInfo m6263_MI;
extern MethodInfo m6280_MI;
extern MethodInfo m7976_MI;
extern MethodInfo m7977_MI;
extern MethodInfo m7978_MI;
extern MethodInfo m6281_MI;
extern MethodInfo m7819_MI;
extern MethodInfo m7139_MI;
extern MethodInfo m566_MI;
extern MethodInfo m6282_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m6262_MI;
extern MethodInfo m6271_MI;
extern MethodInfo m484_MI;
extern MethodInfo m6260_MI;
extern MethodInfo m6265_MI;
extern MethodInfo m6120_MI;
extern MethodInfo m5904_MI;


extern MethodInfo m6094_MI;
 void m6094 (t1168 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6094_MI);
	{
		m452(__this, &m452_MI);
		m6107(__this, &m6107_MI);
		return;
	}
}
extern MethodInfo m6095_MI;
 void m6095 (t1168 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6095_MI);
	t1225 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	t25 * V_3 = {0};
	t27* V_4 = {0};
	t586 * V_5 = {0};
	int32_t V_6 = 0;
	{
		m452(__this, &m452_MI);
		NullCheck(p0);
		t1225 * L_0 = m6263(p0, &m6263_MI);
		V_0 = L_0;
		V_1 = 1;
		goto IL_0155;
	}

IL_0014:
	{
		NullCheck(V_0);
		t27* L_1 = m6280(V_0, &m6280_MI);
		V_4 = L_1;
		if (!V_4)
		{
			goto IL_014f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1168_TI));
		if ((((t1168_SFs*)InitializedTypeInfo(&t1168_TI)->static_fields)->f8))
		{
			goto IL_0087;
		}
	}
	{
		t586 * L_2 = (t586 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t586_TI));
		m7976(L_2, 6, &m7976_MI);
		V_5 = L_2;
		NullCheck(V_5);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_5, (t27*) &_stringLiteral992, 0);
		NullCheck(V_5);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_5, (t27*) &_stringLiteral993, 1);
		NullCheck(V_5);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_5, (t27*) &_stringLiteral994, 2);
		NullCheck(V_5);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_5, (t27*) &_stringLiteral995, 3);
		NullCheck(V_5);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_5, (t27*) &_stringLiteral996, 4);
		NullCheck(V_5);
		VirtActionInvoker2< t27*, int32_t >::Invoke(&m7977_MI, V_5, (t27*) &_stringLiteral997, 5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1168_TI));
		((t1168_SFs*)InitializedTypeInfo(&t1168_TI)->static_fields)->f8 = V_5;
	}

IL_0087:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1168_TI));
		NullCheck((((t1168_SFs*)InitializedTypeInfo(&t1168_TI)->static_fields)->f8));
		bool L_3 = (bool)VirtFuncInvoker2< bool, t27*, int32_t* >::Invoke(&m7978_MI, (((t1168_SFs*)InitializedTypeInfo(&t1168_TI)->static_fields)->f8), V_4, (&V_6));
		if (!L_3)
		{
			goto IL_014f;
		}
	}
	{
		if (V_6 == 0)
		{
			goto IL_00be;
		}
		if (V_6 == 1)
		{
			goto IL_00d4;
		}
		if (V_6 == 2)
		{
			goto IL_00ea;
		}
		if (V_6 == 3)
		{
			goto IL_00fd;
		}
		if (V_6 == 4)
		{
			goto IL_0110;
		}
		if (V_6 == 5)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_014f;
	}

IL_00be:
	{
		NullCheck(V_0);
		t25 * L_4 = m6281(V_0, &m6281_MI);
		__this->f1 = ((t27*)Castclass(L_4, (&t27_TI)));
		goto IL_0155;
	}

IL_00d4:
	{
		NullCheck(V_0);
		t25 * L_5 = m6281(V_0, &m6281_MI);
		__this->f2 = ((t25 *)Castclass(L_5, InitializedTypeInfo(&t1180_TI)));
		goto IL_0155;
	}

IL_00ea:
	{
		NullCheck(V_0);
		t25 * L_6 = m6281(V_0, &m6281_MI);
		__this->f0 = ((t25 *)Castclass(L_6, InitializedTypeInfo(&t1179_TI)));
		goto IL_0155;
	}

IL_00fd:
	{
		NullCheck(V_0);
		t25 * L_7 = m6281(V_0, &m6281_MI);
		__this->f3 = ((t25 *)Castclass(L_7, InitializedTypeInfo(&t1181_TI)));
		goto IL_0155;
	}

IL_0110:
	{
		NullCheck(V_0);
		t25 * L_8 = m6281(V_0, &m6281_MI);
		V_3 = L_8;
		if (!((t27*)IsInst(V_3, (&t27_TI))))
		{
			goto IL_012e;
		}
	}
	{
		NullCheck(((t25 *)Castclass(V_3, InitializedTypeInfo(&t142_TI))));
		int32_t L_9 = (int32_t)InterfaceFuncInvoker1< int32_t, t25 * >::Invoke(&m7819_MI, ((t25 *)Castclass(V_3, InitializedTypeInfo(&t142_TI))), (t25 *)NULL);
		V_2 = L_9;
		goto IL_0135;
	}

IL_012e:
	{
		V_2 = ((*(int32_t*)((int32_t*)UnBox (V_3, InitializedTypeInfo(&t134_TI)))));
	}

IL_0135:
	{
		if (V_2)
		{
			goto IL_013a;
		}
	}
	{
		V_1 = 0;
	}

IL_013a:
	{
		goto IL_0155;
	}

IL_013c:
	{
		NullCheck(V_0);
		t25 * L_10 = m6281(V_0, &m6281_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1359_TI));
		int32_t L_11 = m7139(NULL, L_10, &m7139_MI);
		__this->f4 = L_11;
		goto IL_0155;
	}

IL_014f:
	{
		t177 * L_12 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m566(L_12, &m566_MI);
		il2cpp_codegen_raise_exception (L_12);
	}

IL_0155:
	{
		NullCheck(V_0);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6282_MI, V_0);
		if (L_13)
		{
			goto IL_0014;
		}
	}
	{
		if (!V_1)
		{
			goto IL_0175;
		}
	}
	{
		int32_t L_14 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1168_TI));
		__this->f4 = ((int32_t)(L_14|(((t1168_SFs*)InitializedTypeInfo(&t1168_TI)->static_fields)->f6)));
	}

IL_0175:
	{
		return;
	}
}
extern MethodInfo m6096_MI;
 void m6096 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6096_MI);
	{
		((t1168_SFs*)InitializedTypeInfo(&t1168_TI)->static_fields)->f6 = 1;
		((t1168_SFs*)InitializedTypeInfo(&t1168_TI)->static_fields)->f7 = 2;
		return;
	}
}
extern MethodInfo m6097_MI;
 bool m6097 (t1168 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6097_MI);
	{
		int32_t L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1168_TI));
		return ((((int32_t)((int32_t)(L_0&(((t1168_SFs*)InitializedTypeInfo(&t1168_TI)->static_fields)->f7)))) > ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m6098_MI;
 t25 * m6098 (t1168 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6098_MI);
	{
		t25 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m6099_MI;
 t25 * m6099 (t1168 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6099_MI);
	{
		t25 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m6100_MI;
 void m6100 (t1168 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6100_MI);
	{
		__this->f3 = p0;
		return;
	}
}
extern MethodInfo m6101_MI;
 t25 * m6101 (t1168 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6101_MI);
	{
		t25 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m6102_MI;
 void m6102 (t1168 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6102_MI);
	{
		__this->f2 = p0;
		return;
	}
}
extern MethodInfo m6103_MI;
 t27* m6103 (t1168 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6103_MI);
	{
		t27* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m6104_MI;
 void m6104 (t1168 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6104_MI);
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m6105_MI;
 void m6105 (t1168 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6105_MI);
	{
		t131 * L_0 = m1959(__this, &m1959_MI);
		NullCheck(p0);
		m6262(p0, L_0, &m6262_MI);
		t27* L_1 = (__this->f1);
		NullCheck(p0);
		m6271(p0, (t27*) &_stringLiteral992, L_1, &m6271_MI);
		t25 * L_2 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_3 = m484(NULL, LoadTypeToken(&t1180_0_0_0), &m484_MI);
		NullCheck(p0);
		m6260(p0, (t27*) &_stringLiteral993, L_2, L_3, &m6260_MI);
		t25 * L_4 = (__this->f3);
		t131 * L_5 = m484(NULL, LoadTypeToken(&t1181_0_0_0), &m484_MI);
		NullCheck(p0);
		m6260(p0, (t27*) &_stringLiteral995, L_4, L_5, &m6260_MI);
		t25 * L_6 = (__this->f0);
		t131 * L_7 = m484(NULL, LoadTypeToken(&t1179_0_0_0), &m484_MI);
		NullCheck(p0);
		m6260(p0, (t27*) &_stringLiteral994, L_6, L_7, &m6260_MI);
		int32_t L_8 = (__this->f4);
		NullCheck(p0);
		m6265(p0, (t27*) &_stringLiteral997, L_8, &m6265_MI);
		return;
	}
}
extern MethodInfo m6106_MI;
 t25 * m6106 (t1168 * __this, t824  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6106_MI);
	{
		int32_t L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1168_TI));
		if ((((int32_t)((int32_t)(L_0&(((t1168_SFs*)InitializedTypeInfo(&t1168_TI)->static_fields)->f6)))) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t25 * L_1 = m6120(NULL, __this, &m6120_MI);
		return L_1;
	}

IL_0016:
	{
		return __this;
	}
}
extern MethodInfo m6107_MI;
 void m6107 (t1168 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6107_MI);
	{
		t1129 * L_0 = (t1129 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1129_TI));
		m5904(L_0, &m5904_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m6108_MI;
 t131 * m6108 (t1168 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6108_MI);
	{
		t131 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t25 * L_1 = (__this->f2);
		NullCheck(L_1);
		t27* L_2 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8310_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_3 = m4346(NULL, L_2, &m4346_MI);
		__this->f5 = L_3;
	}

IL_001e:
	{
		t131 * L_4 = (__this->f5);
		return L_4;
	}
}
// Metadata Definition System.Runtime.Remoting.ObjRef
extern Il2CppType t1179_0_0_1;
FieldInfo t1168_f0_FieldInfo = 
{
	"channel_info", &t1179_0_0_1, &t1168_TI, offsetof(t1168, f0), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
FieldInfo t1168_f1_FieldInfo = 
{
	"uri", &t27_0_0_1, &t1168_TI, offsetof(t1168, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1180_0_0_1;
FieldInfo t1168_f2_FieldInfo = 
{
	"typeInfo", &t1180_0_0_1, &t1168_TI, offsetof(t1168, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1181_0_0_1;
FieldInfo t1168_f3_FieldInfo = 
{
	"envoyInfo", &t1181_0_0_1, &t1168_TI, offsetof(t1168, f3), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t1168_f4_FieldInfo = 
{
	"flags", &t134_0_0_1, &t1168_TI, offsetof(t1168, f4), &EmptyCustomAttributesCache};
extern Il2CppType t131_0_0_1;
FieldInfo t1168_f5_FieldInfo = 
{
	"_serverType", &t131_0_0_1, &t1168_TI, offsetof(t1168, f5), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_17;
FieldInfo t1168_f6_FieldInfo = 
{
	"MarshalledObjectRef", &t134_0_0_17, &t1168_TI, offsetof(t1168_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_17;
FieldInfo t1168_f7_FieldInfo = 
{
	"WellKnowObjectRef", &t134_0_0_17, &t1168_TI, offsetof(t1168_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t586_0_0_17;
extern CustomAttributesCache t1168__CustomAttributeCache_U3CU3Ef__switch$map26;
FieldInfo t1168_f8_FieldInfo = 
{
	"<>f__switch$map26", &t586_0_0_17, &t1168_TI, offsetof(t1168_SFs, f8), &t1168__CustomAttributeCache_U3CU3Ef__switch$map26};
static FieldInfo* t1168_FIs[] =
{
	&t1168_f0_FieldInfo,
	&t1168_f1_FieldInfo,
	&t1168_f2_FieldInfo,
	&t1168_f3_FieldInfo,
	&t1168_f4_FieldInfo,
	&t1168_f5_FieldInfo,
	&t1168_f6_FieldInfo,
	&t1168_f7_FieldInfo,
	&t1168_f8_FieldInfo,
	NULL
};
extern MethodInfo m6097_MI;
static PropertyInfo t1168____IsReferenceToWellKnow_PropertyInfo = 
{
	&t1168_TI, "IsReferenceToWellKnow", &m6097_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6098_MI;
static PropertyInfo t1168____ChannelInfo_PropertyInfo = 
{
	&t1168_TI, "ChannelInfo", &m6098_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6099_MI;
extern MethodInfo m6100_MI;
static PropertyInfo t1168____EnvoyInfo_PropertyInfo = 
{
	&t1168_TI, "EnvoyInfo", &m6099_MI, &m6100_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6101_MI;
extern MethodInfo m6102_MI;
static PropertyInfo t1168____TypeInfo_PropertyInfo = 
{
	&t1168_TI, "TypeInfo", &m6101_MI, &m6102_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6103_MI;
extern MethodInfo m6104_MI;
static PropertyInfo t1168____URI_PropertyInfo = 
{
	&t1168_TI, "URI", &m6103_MI, &m6104_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6108_MI;
static PropertyInfo t1168____ServerType_PropertyInfo = 
{
	&t1168_TI, "ServerType", &m6108_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1168_PIs[] =
{
	&t1168____IsReferenceToWellKnow_PropertyInfo,
	&t1168____ChannelInfo_PropertyInfo,
	&t1168____EnvoyInfo_PropertyInfo,
	&t1168____TypeInfo_PropertyInfo,
	&t1168____URI_PropertyInfo,
	&t1168____ServerType_PropertyInfo,
	NULL
};
extern TypeInfo t1168_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6094_MI = 
{
	".ctor", (methodPointerType)&m6094, &t1168_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3154, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1168_m6095_ParameterInfos[] = 
{
	{"info", 0, 134221526, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221527, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1168_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m6095_MI = 
{
	".ctor", (methodPointerType)&m6095, &t1168_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1168_m6095_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 3155, NULL, (methodPointerType)NULL};
extern TypeInfo t1168_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6096_MI = 
{
	".cctor", (methodPointerType)&m6096, &t1168_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3156, NULL, (methodPointerType)NULL};
extern TypeInfo t1168_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6097_MI = 
{
	"get_IsReferenceToWellKnow", (methodPointerType)&m6097, &t1168_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3157, NULL, (methodPointerType)NULL};
extern TypeInfo t1168_TI;
extern Il2CppType t1179_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1168__CustomAttributeCache_m6098;
MethodInfo m6098_MI = 
{
	"get_ChannelInfo", (methodPointerType)&m6098, &t1168_TI, &t1179_0_0_0, RuntimeInvoker_t25, NULL, &t1168__CustomAttributeCache_m6098, 2502, 0, 6, 0, false, false, 3158, NULL, (methodPointerType)NULL};
extern TypeInfo t1168_TI;
extern Il2CppType t1181_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6099_MI = 
{
	"get_EnvoyInfo", (methodPointerType)&m6099, &t1168_TI, &t1181_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2502, 0, 7, 0, false, false, 3159, NULL, (methodPointerType)NULL};
extern Il2CppType t1181_0_0_0;
static ParameterInfo t1168_m6100_ParameterInfos[] = 
{
	{"value", 0, 134221528, &EmptyCustomAttributesCache, &t1181_0_0_0},
};
extern TypeInfo t1168_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6100_MI = 
{
	"set_EnvoyInfo", (methodPointerType)&m6100, &t1168_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1168_m6100_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 8, 1, false, false, 3160, NULL, (methodPointerType)NULL};
extern TypeInfo t1168_TI;
extern Il2CppType t1180_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6101_MI = 
{
	"get_TypeInfo", (methodPointerType)&m6101, &t1168_TI, &t1180_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 3161, NULL, (methodPointerType)NULL};
extern Il2CppType t1180_0_0_0;
static ParameterInfo t1168_m6102_ParameterInfos[] = 
{
	{"value", 0, 134221529, &EmptyCustomAttributesCache, &t1180_0_0_0},
};
extern TypeInfo t1168_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6102_MI = 
{
	"set_TypeInfo", (methodPointerType)&m6102, &t1168_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1168_m6102_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 10, 1, false, false, 3162, NULL, (methodPointerType)NULL};
extern TypeInfo t1168_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6103_MI = 
{
	"get_URI", (methodPointerType)&m6103, &t1168_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 3163, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1168_m6104_ParameterInfos[] = 
{
	{"value", 0, 134221530, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1168_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6104_MI = 
{
	"set_URI", (methodPointerType)&m6104, &t1168_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1168_m6104_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 12, 1, false, false, 3164, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1168_m6105_ParameterInfos[] = 
{
	{"info", 0, 134221531, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221532, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1168_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m6105_MI = 
{
	"GetObjectData", (methodPointerType)&m6105, &t1168_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1168_m6105_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 2, false, false, 3165, NULL, (methodPointerType)NULL};
extern Il2CppType t824_0_0_0;
static ParameterInfo t1168_m6106_ParameterInfos[] = 
{
	{"context", 0, 134221533, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1168_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m6106_MI = 
{
	"GetRealObject", (methodPointerType)&m6106, &t1168_TI, &t25_0_0_0, RuntimeInvoker_t25_t824, t1168_m6106_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 14, 1, false, false, 3166, NULL, (methodPointerType)NULL};
extern TypeInfo t1168_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6107_MI = 
{
	"UpdateChannelInfo", (methodPointerType)&m6107, &t1168_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 3167, NULL, (methodPointerType)NULL};
extern TypeInfo t1168_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6108_MI = 
{
	"get_ServerType", (methodPointerType)&m6108, &t1168_TI, &t131_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3168, NULL, (methodPointerType)NULL};
static MethodInfo* t1168_MIs[] =
{
	&m6094_MI,
	&m6095_MI,
	&m6096_MI,
	&m6097_MI,
	&m6098_MI,
	&m6099_MI,
	&m6100_MI,
	&m6101_MI,
	&m6102_MI,
	&m6103_MI,
	&m6104_MI,
	&m6105_MI,
	&m6106_MI,
	&m6107_MI,
	&m6108_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6105_MI;
extern MethodInfo m6106_MI;
extern MethodInfo m6098_MI;
extern MethodInfo m6099_MI;
extern MethodInfo m6100_MI;
extern MethodInfo m6101_MI;
extern MethodInfo m6102_MI;
extern MethodInfo m6103_MI;
extern MethodInfo m6104_MI;
extern MethodInfo m6105_MI;
extern MethodInfo m6106_MI;
static MethodInfo* t1168_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6105_MI,
	&m6106_MI,
	&m6098_MI,
	&m6099_MI,
	&m6100_MI,
	&m6101_MI,
	&m6102_MI,
	&m6103_MI,
	&m6104_MI,
	&m6105_MI,
	&m6106_MI,
};
extern TypeInfo t485_TI;
extern TypeInfo t1627_TI;
static TypeInfo* t1168_ITIs[] = 
{
	&t485_TI,
	&t1627_TI,
};
extern TypeInfo t485_TI;
extern TypeInfo t1627_TI;
static Il2CppInterfaceOffsetPair t1168_IOs[] = 
{
	{ &t485_TI, 4},
	{ &t1627_TI, 5},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1168_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t1168_CustomAttributesCacheGenerator_U3CU3Ef__switch$map26(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1104_TI;
#include "t1104.h"
#include "t1104MD.h"
extern MethodInfo m5862_MI;
void t1168_CustomAttributesCacheGenerator_m6098(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1104 * tmp;
		tmp = (t1104 *)il2cpp_codegen_object_new (&t1104_TI);
		m5862(tmp, 3, 2, &m5862_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1168__CustomAttributeCache = {
1,
NULL,
&t1168_CustomAttributesCacheGenerator
};
CustomAttributesCache t1168__CustomAttributeCache_U3CU3Ef__switch$map26 = {
1,
NULL,
&t1168_CustomAttributesCacheGenerator_U3CU3Ef__switch$map26
};
CustomAttributesCache t1168__CustomAttributeCache_m6098 = {
1,
NULL,
&t1168_CustomAttributesCacheGenerator_m6098
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1168_0_0_0;
extern Il2CppType t1168_1_0_0;
extern TypeInfo t25_TI;
struct t1168;
extern TypeInfo t1168_TI;
extern CustomAttributesCache t1168__CustomAttributeCache;
extern CustomAttributesCache t1168__CustomAttributeCache_U3CU3Ef__switch$map26;
extern CustomAttributesCache t1168__CustomAttributeCache_m6098;
TypeInfo t1168_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjRef", "System.Runtime.Remoting", t1168_MIs, t1168_PIs, t1168_FIs, NULL, &t25_TI, NULL, NULL, &t1168_TI, t1168_ITIs, t1168_VT, &t1168__CustomAttributeCache, &t1168_TI, &t1168_0_0_0, &t1168_1_0_0, t1168_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1168), 0, -1, sizeof(t1168_SFs), 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 15, 6, 9, 0, 0, 15, 2, 2};
#include "t1182.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1182_TI;
#include "t1182MD.h"

extern TypeInfo t1182_TI;
extern TypeInfo t972_TI;
extern TypeInfo t25_TI;
extern TypeInfo t1174_TI;
#include "t1341MD.h"
extern MethodInfo m6983_MI;
extern MethodInfo m4900_MI;
extern MethodInfo m6922_MI;
extern MethodInfo m4914_MI;
extern MethodInfo m6923_MI;


extern MethodInfo m6109_MI;
 void m6109 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6109_MI);
	{
		((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f0 = (t27*)NULL;
		((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f1 = (t27*)NULL;
		((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f2 = (t27*)NULL;
		((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f3 = 0;
		((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f4 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t972_TI));
		t972 * L_0 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_0, &m4900_MI);
		((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f5 = L_0;
		t972 * L_1 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_1, &m4900_MI);
		((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f6 = L_1;
		t972 * L_2 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_2, &m4900_MI);
		((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f7 = L_2;
		t972 * L_3 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_3, &m4900_MI);
		((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f8 = L_3;
		t972 * L_4 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_4, &m4900_MI);
		((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f9 = L_4;
		t972 * L_5 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_5, &m4900_MI);
		((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f10 = L_5;
		t972 * L_6 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_6, &m4900_MI);
		((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f11 = L_6;
		return;
	}
}
extern MethodInfo m6110_MI;
 t27* m6110 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6110_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1182_TI));
		return (((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f1);
	}
}
extern MethodInfo m6111_MI;
 t27* m6111 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6111_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1182_TI));
		if ((((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f2))
		{
			goto IL_0011;
		}
	}
	{
		t27* L_0 = m6983(NULL, &m6983_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1182_TI));
		((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f2 = L_0;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1182_TI));
		return (((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f2);
	}
}
extern MethodInfo m6112_MI;
 t1174 * m6112 (t25 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6112_MI);
	t972 * V_0 = {0};
	t1174 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1182_TI));
		V_0 = (((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f9);
		m6922(NULL, V_0, &m6922_MI);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1182_TI));
			NullCheck((((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f6));
			t25 * L_0 = (t25 *)VirtFuncInvoker1< t25 *, t25 * >::Invoke(&m4914_MI, (((t1182_SFs*)InitializedTypeInfo(&t1182_TI)->static_fields)->f6), p0);
			V_1 = ((t1174 *)IsInst(L_0, InitializedTypeInfo(&t1174_TI)));
			// IL_001d: leave.s IL_0028
			leaveInstructions[0] = 0x28; // 1
			THROW_SENTINEL(IL_0028);
			// finally target depth: 1
		}

IL_001f:
		{
			// IL_001f: leave.s IL_0028
			leaveInstructions[0] = 0x28; // 1
			THROW_SENTINEL(IL_0028);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0021;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0021;
	}

IL_0021:
	{ // begin finally (depth: 1)
		m6923(NULL, V_0, &m6923_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x28:
				goto IL_0028;
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

IL_0028:
	{
		return V_1;
	}
}
// Metadata Definition System.Runtime.Remoting.RemotingConfiguration
extern Il2CppType t27_0_0_17;
FieldInfo t1182_f0_FieldInfo = 
{
	"applicationID", &t27_0_0_17, &t1182_TI, offsetof(t1182_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_17;
FieldInfo t1182_f1_FieldInfo = 
{
	"applicationName", &t27_0_0_17, &t1182_TI, offsetof(t1182_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_17;
FieldInfo t1182_f2_FieldInfo = 
{
	"processGuid", &t27_0_0_17, &t1182_TI, offsetof(t1182_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t1182_f3_FieldInfo = 
{
	"defaultConfigRead", &t125_0_0_17, &t1182_TI, offsetof(t1182_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t1182_f4_FieldInfo = 
{
	"defaultDelayedConfigRead", &t125_0_0_17, &t1182_TI, offsetof(t1182_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t972_0_0_17;
FieldInfo t1182_f5_FieldInfo = 
{
	"wellKnownClientEntries", &t972_0_0_17, &t1182_TI, offsetof(t1182_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t972_0_0_17;
FieldInfo t1182_f6_FieldInfo = 
{
	"activatedClientEntries", &t972_0_0_17, &t1182_TI, offsetof(t1182_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t972_0_0_17;
FieldInfo t1182_f7_FieldInfo = 
{
	"wellKnownServiceEntries", &t972_0_0_17, &t1182_TI, offsetof(t1182_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t972_0_0_17;
FieldInfo t1182_f8_FieldInfo = 
{
	"activatedServiceEntries", &t972_0_0_17, &t1182_TI, offsetof(t1182_SFs, f8), &EmptyCustomAttributesCache};
extern Il2CppType t972_0_0_17;
FieldInfo t1182_f9_FieldInfo = 
{
	"channelTemplates", &t972_0_0_17, &t1182_TI, offsetof(t1182_SFs, f9), &EmptyCustomAttributesCache};
extern Il2CppType t972_0_0_17;
FieldInfo t1182_f10_FieldInfo = 
{
	"clientProviderTemplates", &t972_0_0_17, &t1182_TI, offsetof(t1182_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t972_0_0_17;
FieldInfo t1182_f11_FieldInfo = 
{
	"serverProviderTemplates", &t972_0_0_17, &t1182_TI, offsetof(t1182_SFs, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1182_FIs[] =
{
	&t1182_f0_FieldInfo,
	&t1182_f1_FieldInfo,
	&t1182_f2_FieldInfo,
	&t1182_f3_FieldInfo,
	&t1182_f4_FieldInfo,
	&t1182_f5_FieldInfo,
	&t1182_f6_FieldInfo,
	&t1182_f7_FieldInfo,
	&t1182_f8_FieldInfo,
	&t1182_f9_FieldInfo,
	&t1182_f10_FieldInfo,
	&t1182_f11_FieldInfo,
	NULL
};
extern MethodInfo m6110_MI;
static PropertyInfo t1182____ApplicationName_PropertyInfo = 
{
	&t1182_TI, "ApplicationName", &m6110_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6111_MI;
static PropertyInfo t1182____ProcessId_PropertyInfo = 
{
	&t1182_TI, "ProcessId", &m6111_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1182_PIs[] =
{
	&t1182____ApplicationName_PropertyInfo,
	&t1182____ProcessId_PropertyInfo,
	NULL
};
extern TypeInfo t1182_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6109_MI = 
{
	".cctor", (methodPointerType)&m6109, &t1182_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3169, NULL, (methodPointerType)NULL};
extern TypeInfo t1182_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6110_MI = 
{
	"get_ApplicationName", (methodPointerType)&m6110, &t1182_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 3170, NULL, (methodPointerType)NULL};
extern TypeInfo t1182_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6111_MI = 
{
	"get_ProcessId", (methodPointerType)&m6111, &t1182_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 3171, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
static ParameterInfo t1182_m6112_ParameterInfos[] = 
{
	{"svrType", 0, 134221534, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1182_TI;
extern Il2CppType t1174_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6112_MI = 
{
	"IsRemotelyActivatedClientType", (methodPointerType)&m6112, &t1182_TI, &t1174_0_0_0, RuntimeInvoker_t25_t25, t1182_m6112_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3172, NULL, (methodPointerType)NULL};
static MethodInfo* t1182_MIs[] =
{
	&m6109_MI,
	&m6110_MI,
	&m6111_MI,
	&m6112_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1182_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1182_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1182__CustomAttributeCache = {
1,
NULL,
&t1182_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1182_0_0_0;
extern Il2CppType t1182_1_0_0;
extern TypeInfo t25_TI;
struct t1182;
extern TypeInfo t1182_TI;
extern CustomAttributesCache t1182__CustomAttributeCache;
TypeInfo t1182_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingConfiguration", "System.Runtime.Remoting", t1182_MIs, t1182_PIs, t1182_FIs, NULL, &t25_TI, NULL, NULL, &t1182_TI, NULL, t1182_VT, &t1182__CustomAttributeCache, &t1182_TI, &t1182_0_0_0, &t1182_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1182), 0, -1, sizeof(t1182_SFs), 0, -1, 1048961, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 4, 2, 12, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1183_TI;

#include "t935MD.h"
extern MethodInfo m7671_MI;
extern MethodInfo m7672_MI;
extern MethodInfo m7673_MI;


extern MethodInfo m6113_MI;
 void m6113 (t1183 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6113_MI);
	{
		m7671(__this, &m7671_MI);
		return;
	}
}
extern MethodInfo m6114_MI;
 void m6114 (t1183 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6114_MI);
	{
		m7672(__this, p0, &m7672_MI);
		return;
	}
}
extern MethodInfo m6115_MI;
 void m6115 (t1183 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6115_MI);
	{
		m7673(__this, p0, p1, &m7673_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.RemotingException
extern TypeInfo t1183_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6113_MI = 
{
	".ctor", (methodPointerType)&m6113, &t1183_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3173, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1183_m6114_ParameterInfos[] = 
{
	{"message", 0, 134221535, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1183_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6114_MI = 
{
	".ctor", (methodPointerType)&m6114, &t1183_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1183_m6114_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3174, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1183_m6115_ParameterInfos[] = 
{
	{"info", 0, 134221536, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221537, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1183_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m6115_MI = 
{
	".ctor", (methodPointerType)&m6115, &t1183_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1183_m6115_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 3175, NULL, (methodPointerType)NULL};
static MethodInfo* t1183_MIs[] =
{
	&m6113_MI,
	&m6114_MI,
	&m6115_MI,
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
static MethodInfo* t1183_VT[] =
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
static Il2CppInterfaceOffsetPair t1183_IOs[] = 
{
	{ &t485_TI, 4},
	{ &t690_TI, 5},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1183_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1183__CustomAttributeCache = {
1,
NULL,
&t1183_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1183_0_0_0;
extern Il2CppType t1183_1_0_0;
extern TypeInfo t935_TI;
struct t1183;
extern TypeInfo t1183_TI;
extern CustomAttributesCache t1183__CustomAttributeCache;
TypeInfo t1183_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingException", "System.Runtime.Remoting", t1183_MIs, NULL, NULL, NULL, &t935_TI, NULL, NULL, &t1183_TI, NULL, t1183_VT, &t1183__CustomAttributeCache, &t1183_TI, &t1183_0_0_0, &t1183_1_0_0, t1183_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1183), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1184.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1184_TI;

#include "t1385.h"
#include "t725.h"
#include "t1226.h"
#include "t1185.h"
#include "t1197.h"
#include "t1124.h"
#include "t863.h"
#include "t1186.h"
#include "t591.h"
#include "t726.h"
#include "t727.h"
#include "t754.h"
#include "t1136.h"
#include "t1189.h"
#include "t1188.h"
extern TypeInfo t972_TI;
extern TypeInfo t1184_TI;
extern TypeInfo t1162_TI;
extern TypeInfo t1185_TI;
extern TypeInfo t1385_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1124_TI;
extern TypeInfo t131_TI;
extern TypeInfo t25_TI;
extern TypeInfo t657_TI;
extern TypeInfo t725_TI;
extern TypeInfo t863_TI;
extern TypeInfo t862_TI;
extern TypeInfo t1173_TI;
extern TypeInfo t125_TI;
extern TypeInfo t1166_TI;
extern TypeInfo t1167_TI;
extern TypeInfo t1168_TI;
extern TypeInfo t1128_TI;
extern TypeInfo t1183_TI;
extern TypeInfo t1169_TI;
extern TypeInfo t1155_TI;
extern TypeInfo t637_TI;
extern TypeInfo t726_TI;
extern TypeInfo t729_TI;
extern TypeInfo t727_TI;
extern TypeInfo t754_TI;
extern TypeInfo t931_TI;
extern TypeInfo t123_TI;
extern TypeInfo t759_TI;
extern TypeInfo t158_TI;
extern TypeInfo t1130_TI;
extern TypeInfo t1172_TI;
extern TypeInfo t1170_TI;
extern TypeInfo t1182_TI;
extern TypeInfo t1179_TI;
extern TypeInfo t1171_TI;
extern TypeInfo t1136_TI;
extern TypeInfo t1189_TI;
extern TypeInfo t1188_TI;
extern TypeInfo t1187_TI;
extern TypeInfo t1135_TI;
#include "t824MD.h"
#include "t1185MD.h"
#include "t1385MD.h"
#include "t863MD.h"
#include "t591MD.h"
#include "t807MD.h"
#include "t1136MD.h"
#include "t1128MD.h"
#include "t1189MD.h"
#include "t1188MD.h"
#include "t1187MD.h"
#include "t1135MD.h"
extern Il2CppType t1124_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t862_0_0_0;
extern Il2CppType t1166_0_0_0;
extern MethodInfo m4900_MI;
extern MethodInfo m6040_MI;
extern MethodInfo m6284_MI;
extern MethodInfo m6153_MI;
extern MethodInfo m6155_MI;
extern MethodInfo m6135_MI;
extern MethodInfo m7417_MI;
extern MethodInfo m7422_MI;
extern MethodInfo m3457_MI;
extern MethodInfo m610_MI;
extern MethodInfo m484_MI;
extern MethodInfo m6131_MI;
extern MethodInfo m4356_MI;
extern MethodInfo m6128_MI;
extern MethodInfo m6139_MI;
extern MethodInfo m6121_MI;
extern MethodInfo m6108_MI;
extern MethodInfo m6097_MI;
extern MethodInfo m6134_MI;
extern MethodInfo m6076_MI;
extern MethodInfo m4329_MI;
extern MethodInfo m3619_MI;
extern MethodInfo m6059_MI;
extern MethodInfo m6068_MI;
extern MethodInfo m6133_MI;
extern MethodInfo m6118_MI;
extern MethodInfo m6114_MI;
extern MethodInfo m8304_MI;
extern MethodInfo m4346_MI;
extern MethodInfo m532_MI;
extern MethodInfo m8302_MI;
extern MethodInfo m8303_MI;
extern MethodInfo m6124_MI;
extern MethodInfo m4332_MI;
extern MethodInfo m6125_MI;
extern MethodInfo m3521_MI;
extern MethodInfo m386_MI;
extern MethodInfo m4366_MI;
extern MethodInfo m7960_MI;
extern MethodInfo m6078_MI;
extern MethodInfo m4830_MI;
extern MethodInfo m4856_MI;
extern MethodInfo m6079_MI;
extern MethodInfo m6077_MI;
extern MethodInfo m4858_MI;
extern MethodInfo m3608_MI;
extern MethodInfo m6058_MI;
extern MethodInfo m6071_MI;
extern MethodInfo m6137_MI;
extern MethodInfo m6922_MI;
extern MethodInfo m4914_MI;
extern MethodInfo m6129_MI;
extern MethodInfo m6923_MI;
extern MethodInfo m6110_MI;
extern MethodInfo m3446_MI;
extern MethodInfo m2209_MI;
extern MethodInfo m2262_MI;
extern MethodInfo m6098_MI;
extern MethodInfo m8313_MI;
extern MethodInfo m6103_MI;
extern MethodInfo m3609_MI;
extern MethodInfo m6090_MI;
extern MethodInfo m6136_MI;
extern MethodInfo m6089_MI;
extern MethodInfo m6085_MI;
extern MethodInfo m4915_MI;
extern MethodInfo m6070_MI;
extern MethodInfo m5919_MI;
extern MethodInfo m6069_MI;
extern MethodInfo m6091_MI;
extern MethodInfo m5922_MI;
extern MethodInfo m6143_MI;
extern MethodInfo m6142_MI;
extern MethodInfo m6132_MI;
extern MethodInfo m6086_MI;
extern MethodInfo m4921_MI;
extern MethodInfo m6141_MI;
extern MethodInfo m6130_MI;
extern MethodInfo m5913_MI;
extern MethodInfo m6087_MI;
extern MethodInfo m6093_MI;
extern MethodInfo m4920_MI;
extern MethodInfo m6088_MI;


extern MethodInfo m6116_MI;
 void m6116 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6116_MI);
	t1162 * V_0 = {0};
	t824  V_1 = {0};
	t1385  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t972_TI));
		t972 * L_0 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_0, &m4900_MI);
		((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0 = L_0;
		((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f4 = 1;
		((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f5 = ((int32_t)52);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1162_TI));
		t1162 * L_1 = (t1162 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1162_TI));
		m6040(L_1, &m6040_MI);
		V_0 = L_1;
		m6284((&V_1), ((int32_t)16), NULL, &m6284_MI);
		t1185 * L_2 = (t1185 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1185_TI));
		m6153(L_2, V_0, V_1, &m6153_MI);
		((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f1 = L_2;
		t1185 * L_3 = (t1185 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1185_TI));
		m6153(L_3, (t25 *)NULL, V_1, &m6153_MI);
		((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f2 = L_3;
		NullCheck((((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f1));
		m6155((((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f1), 1, &m6155_MI);
		NullCheck((((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f2));
		m6155((((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f2), 1, &m6155_MI);
		m6135(NULL, &m6135_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1385_TI));
		t1385  L_4 = m7417(NULL, &m7417_MI);
		V_2 = L_4;
		t27* L_5 = m7422((&V_2), &m7422_MI);
		NullCheck(L_5);
		t27* L_6 = m3457(L_5, ((int32_t)45), ((int32_t)95), &m3457_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_7 = m610(NULL, L_6, (t27*) &_stringLiteral660, &m610_MI);
		((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f3 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_8 = m484(NULL, LoadTypeToken(&t1124_0_0_0), &m484_MI);
		m6131(NULL, L_8, (t27*) &_stringLiteral998, 1, &m6131_MI);
		t131 * L_9 = m484(NULL, LoadTypeToken(&t25_0_0_0), &m484_MI);
		NullCheck(L_9);
		t657 * L_10 = (t657 *)VirtFuncInvoker2< t657 *, t27*, int32_t >::Invoke(&m4356_MI, L_9, (t27*) &_stringLiteral999, ((int32_t)36));
		((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f6 = L_10;
		t131 * L_11 = m484(NULL, LoadTypeToken(&t25_0_0_0), &m484_MI);
		NullCheck(L_11);
		t657 * L_12 = (t657 *)VirtFuncInvoker2< t657 *, t27*, int32_t >::Invoke(&m4356_MI, L_11, (t27*) &_stringLiteral1000, ((int32_t)36));
		((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f7 = L_12;
		return;
	}
}
extern MethodInfo m6117_MI;
 t731 * m6117 (t25 * __this, t131 * p0, t731 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6117_MI);
	typedef t731 * (*m6117_ftn) (t131 *, t731 *);
	static m6117_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m6117_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m6118_MI;
 bool m6118 (t25 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6118_MI);
	typedef bool (*m6118_ftn) (t25 *);
	static m6118_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m6118_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m6119_MI;
 t131 * m6119 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6119_MI);
	t863 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t1170 * L_0 = m6128(NULL, p0, &m6128_MI);
		V_0 = ((t863 *)IsInst(L_0, InitializedTypeInfo(&t863_TI)));
		if (V_0)
		{
			goto IL_0011;
		}
	}
	{
		return (t131 *)NULL;
	}

IL_0011:
	{
		NullCheck(V_0);
		t131 * L_1 = m6139(V_0, &m6139_MI);
		return L_1;
	}
}
extern MethodInfo m6120_MI;
 t25 * m6120 (t25 * __this, t1168 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6120_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t25 * L_0 = m6121(NULL, p0, 1, &m6121_MI);
		return L_0;
	}
}
extern MethodInfo m6121_MI;
 t25 * m6121 (t25 * __this, t1168 * p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6121_MI);
	t131 * V_0 = {0};
	t25 * V_1 = {0};
	t25 * V_2 = {0};
	t1166 * V_3 = {0};
	t131 * G_B3_0 = {0};
	{
		if (!p1)
		{
			goto IL_000b;
		}
	}
	{
		NullCheck(p0);
		t131 * L_0 = m6108(p0, &m6108_MI);
		G_B3_0 = L_0;
		goto IL_0015;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t862_0_0_0), &m484_MI);
		G_B3_0 = L_1;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		if (V_0)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_2 = m484(NULL, LoadTypeToken(&t862_0_0_0), &m484_MI);
		V_0 = L_2;
	}

IL_0024:
	{
		NullCheck(p0);
		bool L_3 = m6097(p0, &m6097_MI);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t25 * L_4 = m6134(NULL, p0, V_0, &m6134_MI);
		V_1 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1173_TI));
		m6076(NULL, V_1, p0, &m6076_MI);
		return V_1;
	}

IL_003d:
	{
		NullCheck(V_0);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4329_MI, V_0);
		if (!L_5)
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_6 = m484(NULL, LoadTypeToken(&t1166_0_0_0), &m484_MI);
		t591 * L_7 = m3619(NULL, V_0, L_6, 1, &m3619_MI);
		V_3 = ((t1166 *)Castclass(L_7, InitializedTypeInfo(&t1166_TI)));
		if (!V_3)
		{
			goto IL_0078;
		}
	}
	{
		NullCheck(V_3);
		t1167 * L_8 = (t1167 *)VirtFuncInvoker4< t1167 *, t1168 *, t131 *, t25 *, t1128 * >::Invoke(&m6059_MI, V_3, p0, V_0, NULL, (t1128 *)NULL);
		NullCheck(L_8);
		t25 * L_9 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m6068_MI, L_8);
		V_2 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1173_TI));
		m6076(NULL, V_2, p0, &m6076_MI);
		return V_2;
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t25 * L_10 = m6133(NULL, p0, V_0, &m6133_MI);
		V_2 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1173_TI));
		m6076(NULL, V_2, p0, &m6076_MI);
		return V_2;
	}
}
extern MethodInfo m6122_MI;
 t1167 * m6122 (t25 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6122_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		bool L_0 = m6118(NULL, p0, &m6118_MI);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1183 * L_1 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m6114(L_1, (t27*) &_stringLiteral1001, &m6114_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		NullCheck(((t1169 *)Castclass(p0, InitializedTypeInfo(&t1169_TI))));
		t1167 * L_2 = (((t1169 *)Castclass(p0, InitializedTypeInfo(&t1169_TI)))->f0);
		return L_2;
	}
}
extern MethodInfo m6123_MI;
 t731 * m6123 (t25 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6123_MI);
	t131 * V_0 = {0};
	{
		NullCheck(p0);
		t27* L_0 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8304_MI, p0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m4346(NULL, L_0, &m4346_MI);
		V_0 = L_1;
		if (V_0)
		{
			goto IL_002a;
		}
	}
	{
		NullCheck(p0);
		t27* L_2 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8304_MI, p0);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_3 = m532(NULL, (t27*) &_stringLiteral1002, L_2, (t27*) &_stringLiteral1003, &m532_MI);
		t1183 * L_4 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m6114(L_4, L_3, &m6114_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_002a:
	{
		NullCheck(p0);
		t27* L_5 = (t27*)InterfaceFuncInvoker0< t27* >::Invoke(&m8302_MI, p0);
		NullCheck(p0);
		t25 * L_6 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m8303_MI, p0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t731 * L_7 = m6124(NULL, V_0, L_5, ((t637*)Castclass(L_6, InitializedTypeInfo(&t637_TI))), &m6124_MI);
		return L_7;
	}
}
extern MethodInfo m6124_MI;
 t731 * m6124 (t25 * __this, t131 * p0, t27* p1, t637* p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6124_MI);
	t731 * V_0 = {0};
	{
		NullCheck(p0);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4332_MI, p0);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t731 * L_1 = m6125(NULL, p0, p1, p2, &m6125_MI);
		return L_1;
	}

IL_0011:
	{
		V_0 = (t731 *)NULL;
		if (p2)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		NullCheck(p0);
		t657 * L_2 = (t657 *)VirtFuncInvoker2< t657 *, t27*, int32_t >::Invoke(&m4356_MI, p0, p1, (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f5));
		V_0 = L_2;
		goto IL_0035;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		NullCheck(p0);
		t657 * L_3 = (t657 *)VirtFuncInvoker5< t657 *, t27*, int32_t, t726 *, t637*, t729* >::Invoke(&m3521_MI, p0, p1, (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f5), (t726 *)NULL, p2, (t729*)(t729*)NULL);
		V_0 = L_3;
	}

IL_0035:
	{
		if (!V_0)
		{
			goto IL_003a;
		}
	}
	{
		return V_0;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_4 = m386(NULL, p1, (t27*) &_stringLiteral999, &m386_MI);
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		return (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f6);
	}

IL_004d:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_5 = m386(NULL, p1, (t27*) &_stringLiteral1000, &m386_MI);
		if (!L_5)
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		return (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f7);
	}

IL_0060:
	{
		if (p2)
		{
			goto IL_0076;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		NullCheck(p0);
		t754 * L_6 = (t754 *)VirtFuncInvoker4< t754 *, int32_t, t726 *, t637*, t729* >::Invoke(&m4366_MI, p0, (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f5), (t726 *)NULL, (((t131_SFs*)InitializedTypeInfo(&t131_TI)->static_fields)->f3), (t729*)(t729*)NULL);
		return L_6;
	}

IL_0076:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		NullCheck(p0);
		t754 * L_7 = (t754 *)VirtFuncInvoker4< t754 *, int32_t, t726 *, t637*, t729* >::Invoke(&m4366_MI, p0, (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f5), (t726 *)NULL, p2, (t729*)(t729*)NULL);
		return L_7;
	}
}
extern MethodInfo m6125_MI;
 t731 * m6125 (t25 * __this, t131 * p0, t27* p1, t637* p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6125_MI);
	t731 * V_0 = {0};
	t131 * V_1 = {0};
	t637* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = (t731 *)NULL;
		if (p2)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		NullCheck(p0);
		t657 * L_0 = (t657 *)VirtFuncInvoker2< t657 *, t27*, int32_t >::Invoke(&m4356_MI, p0, p1, (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f5));
		V_0 = L_0;
		goto IL_0024;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		NullCheck(p0);
		t657 * L_1 = (t657 *)VirtFuncInvoker5< t657 *, t27*, int32_t, t726 *, t637*, t729* >::Invoke(&m3521_MI, p0, p1, (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f5), (t726 *)NULL, p2, (t729*)(t729*)NULL);
		V_0 = L_1;
	}

IL_0024:
	{
		if (!V_0)
		{
			goto IL_0029;
		}
	}
	{
		return V_0;
	}

IL_0029:
	{
		NullCheck(p0);
		t637* L_2 = (t637*)VirtFuncInvoker0< t637* >::Invoke(&m7960_MI, p0);
		V_2 = L_2;
		V_3 = 0;
		goto IL_004a;
	}

IL_0034:
	{
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_3);
		V_1 = (*(t131 **)(t131 **)SZArrayLdElema(V_2, V_3));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t731 * L_3 = m6125(NULL, V_1, p1, p2, &m6125_MI);
		V_0 = L_3;
		if (!V_0)
		{
			goto IL_0046;
		}
	}
	{
		return V_0;
	}

IL_0046:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_004a:
	{
		NullCheck(V_2);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t122 *)V_2)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		return (t731 *)NULL;
	}
}
extern MethodInfo m6126_MI;
 t25 * m6126 (t25 * __this, t1174 * p0, t158* p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6126_MI);
	t931 * V_0 = {0};
	{
		NullCheck(p0);
		t1176* L_0 = m6078(p0, &m6078_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		if (!p1)
		{
			goto IL_004c;
		}
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t931_TI));
		t931 * L_1 = (t931 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t931_TI));
		m4830(L_1, &m4830_MI);
		V_0 = L_1;
		NullCheck(p0);
		t1176* L_2 = m6078(p0, &m6078_MI);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		NullCheck(p0);
		t1176* L_3 = m6078(p0, &m6078_MI);
		NullCheck(V_0);
		VirtActionInvoker1< t25 * >::Invoke(&m4856_MI, V_0, (t25 *)(t25 *)L_3);
	}

IL_0025:
	{
		if (!p1)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck(V_0);
		VirtActionInvoker1< t25 * >::Invoke(&m4856_MI, V_0, (t25 *)(t25 *)p1);
	}

IL_002f:
	{
		NullCheck(p0);
		t131 * L_4 = m6079(p0, &m6079_MI);
		NullCheck(p0);
		t27* L_5 = m6077(p0, &m6077_MI);
		NullCheck(V_0);
		t158* L_6 = (t158*)VirtFuncInvoker0< t158* >::Invoke(&m4858_MI, V_0);
		t25 * L_7 = m3608(NULL, L_4, L_5, L_6, (t27*) &_stringLiteral949, &m3608_MI);
		return L_7;
	}

IL_004c:
	{
		NullCheck(p0);
		t131 * L_8 = m6079(p0, &m6079_MI);
		NullCheck(p0);
		t27* L_9 = m6077(p0, &m6077_MI);
		t25 * L_10 = m3608(NULL, L_8, L_9, (t158*)(t158*)NULL, (t27*) &_stringLiteral949, &m3608_MI);
		return L_10;
	}
}
extern MethodInfo m6127_MI;
 t25 * m6127 (t25 * __this, t131 * p0, t158* p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6127_MI);
	t1166 * V_0 = {0};
	t1172 * V_1 = {0};
	{
		NullCheck(p0);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4329_MI, p0);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t1166_0_0_0), &m484_MI);
		t591 * L_2 = m3619(NULL, p0, L_1, 1, &m3619_MI);
		V_0 = ((t1166 *)Castclass(L_2, InitializedTypeInfo(&t1166_TI)));
		if (!V_0)
		{
			goto IL_002a;
		}
	}
	{
		NullCheck(V_0);
		t862 * L_3 = (t862 *)VirtFuncInvoker1< t862 *, t131 * >::Invoke(&m6058_MI, V_0, p0);
		return L_3;
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1130_TI));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1172_TI));
		t1172 * L_4 = (t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1172_TI));
		m6071(L_4, p0, (((t1130_SFs*)InitializedTypeInfo(&t1130_TI)->static_fields)->f3), p1, &m6071_MI);
		V_1 = L_4;
		NullCheck(V_1);
		t25 * L_5 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m6068_MI, V_1);
		return L_5;
	}
}
extern MethodInfo m6128_MI;
 t1170 * m6128 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6128_MI);
	t27* V_0 = {0};
	t972 * V_1 = {0};
	t1170 * V_2 = {0};
	t1170 * V_3 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t27* L_0 = m6137(NULL, p0, &m6137_MI);
		V_0 = L_0;
		V_1 = (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0);
		m6922(NULL, V_1, &m6922_MI);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
			NullCheck((((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0));
			t25 * L_1 = (t25 *)VirtFuncInvoker1< t25 *, t25 * >::Invoke(&m4914_MI, (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0), V_0);
			V_2 = ((t1170 *)Castclass(L_1, InitializedTypeInfo(&t1170_TI)));
			if (V_2)
			{
				goto IL_0042;
			}
		}

IL_0027:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
			t27* L_2 = m6129(NULL, p0, &m6129_MI);
			V_0 = L_2;
			if (!V_0)
			{
				goto IL_0042;
			}
		}

IL_0031:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
			NullCheck((((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0));
			t25 * L_3 = (t25 *)VirtFuncInvoker1< t25 *, t25 * >::Invoke(&m4914_MI, (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0), V_0);
			V_2 = ((t1170 *)Castclass(L_3, InitializedTypeInfo(&t1170_TI)));
		}

IL_0042:
		{
			V_3 = V_2;
			// IL_0044: leave.s IL_004f
			leaveInstructions[0] = 0x4F; // 1
			THROW_SENTINEL(IL_004f);
			// finally target depth: 1
		}

IL_0046:
		{
			// IL_0046: leave.s IL_004f
			leaveInstructions[0] = 0x4F; // 1
			THROW_SENTINEL(IL_004f);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0048;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0048;
	}

IL_0048:
	{ // begin finally (depth: 1)
		m6923(NULL, V_1, &m6923_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x4F:
				goto IL_004f;
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

IL_004f:
	{
		return V_3;
	}
}
extern MethodInfo m6129_MI;
 t27* m6129 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6129_MI);
	t27* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1182_TI));
		t27* L_0 = m6110(NULL, &m6110_MI);
		V_0 = L_0;
		if (V_0)
		{
			goto IL_000b;
		}
	}
	{
		return (t27*)NULL;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_1 = m532(NULL, (t27*) &_stringLiteral660, V_0, (t27*) &_stringLiteral660, &m532_MI);
		V_0 = L_1;
		NullCheck(p0);
		bool L_2 = m3446(p0, V_0, &m3446_MI);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_3 = m2209(V_0, &m2209_MI);
		NullCheck(p0);
		t27* L_4 = m2262(p0, L_3, &m2262_MI);
		return L_4;
	}

IL_0032:
	{
		return (t27*)NULL;
	}
}
extern MethodInfo m6130_MI;
 t1171 * m6130 (t25 * __this, t1168 * p0, t131 * p1, t25 ** p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6130_MI);
	t25 * V_0 = {0};
	t27* V_1 = {0};
	t25 * V_2 = {0};
	t972 * V_3 = {0};
	t27* V_4 = {0};
	t1171 * V_5 = {0};
	t1172 * V_6 = {0};
	t1136 * V_7 = {0};
	t1171 * V_8 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	t158* G_B3_0 = {0};
	{
		NullCheck(p0);
		t25 * L_0 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m6098_MI, p0);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		NullCheck(p0);
		t25 * L_1 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m6098_MI, p0);
		NullCheck(L_1);
		t158* L_2 = (t158*)InterfaceFuncInvoker0< t158* >::Invoke(&m8313_MI, L_1);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = ((t158*)(NULL));
	}

IL_0016:
	{
		V_0 = (t25 *)G_B3_0;
		NullCheck(p0);
		t27* L_3 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m6103_MI, p0);
		t25 * L_4 = m3609(NULL, L_3, V_0, (&V_1), (t27*) &_stringLiteral1004, &m3609_MI);
		V_2 = L_4;
		if (V_1)
		{
			goto IL_0035;
		}
	}
	{
		NullCheck(p0);
		t27* L_5 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m6103_MI, p0);
		V_1 = L_5;
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		V_3 = (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0);
		m6922(NULL, V_3, &m6922_MI);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			*((t25 **)(p2)) = (t25 *)NULL;
			NullCheck(p0);
			t27* L_6 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m6103_MI, p0);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
			t27* L_7 = m6137(NULL, L_6, &m6137_MI);
			V_4 = L_7;
			NullCheck((((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0));
			t25 * L_8 = (t25 *)VirtFuncInvoker1< t25 *, t25 * >::Invoke(&m4914_MI, (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0), V_4);
			V_5 = ((t1171 *)IsInst(L_8, InitializedTypeInfo(&t1171_TI)));
			if (!V_5)
			{
				goto IL_0082;
			}
		}

IL_0068:
		{
			NullCheck(V_5);
			t862 * L_9 = m6090(V_5, &m6090_MI);
			*((t25 **)(p2)) = (t25 *)L_9;
			if (!(*((t25 **)p2)))
			{
				goto IL_007b;
			}
		}

IL_0075:
		{
			V_8 = V_5;
			// IL_0079: leave.s IL_00ee
			leaveInstructions[0] = 0xEE; // 1
			THROW_SENTINEL(IL_00ee);
			// finally target depth: 1
		}

IL_007b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
			m6136(NULL, V_5, &m6136_MI);
		}

IL_0082:
		{
			t1171 * L_10 = (t1171 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1171_TI));
			m6089(L_10, V_1, p0, &m6089_MI);
			V_5 = L_10;
			NullCheck(V_5);
			m6085(V_5, V_2, &m6085_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
			NullCheck((((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0));
			VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4915_MI, (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0), V_4, V_5);
			if (!p1)
			{
				goto IL_00df;
			}
		}

IL_00a4:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1172_TI));
			t1172 * L_11 = (t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1172_TI));
			m6070(L_11, p1, V_5, &m6070_MI);
			V_6 = L_11;
			V_7 = ((t1136 *)IsInst(V_2, InitializedTypeInfo(&t1136_TI)));
			if (!V_7)
			{
				goto IL_00c8;
			}
		}

IL_00ba:
		{
			NullCheck(V_7);
			int32_t L_12 = m5919(V_7, &m5919_MI);
			NullCheck(V_6);
			m6069(V_6, L_12, &m6069_MI);
		}

IL_00c8:
		{
			NullCheck(V_6);
			t25 * L_13 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m6068_MI, V_6);
			*((t25 **)(p2)) = (t25 *)L_13;
			NullCheck(V_5);
			m6091(V_5, ((t862 *)Castclass((*((t25 **)p2)), InitializedTypeInfo(&t862_TI))), &m6091_MI);
		}

IL_00df:
		{
			V_8 = V_5;
			// IL_00e3: leave.s IL_00ee
			leaveInstructions[0] = 0xEE; // 1
			THROW_SENTINEL(IL_00ee);
			// finally target depth: 1
		}

IL_00e5:
		{
			// IL_00e5: leave.s IL_00ee
			leaveInstructions[0] = 0xEE; // 1
			THROW_SENTINEL(IL_00ee);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_00e7;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_00e7;
	}

IL_00e7:
	{ // begin finally (depth: 1)
		m6923(NULL, V_3, &m6923_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0xEE:
				goto IL_00ee;
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

IL_00ee:
	{
		return V_8;
	}
}
extern MethodInfo m6131_MI;
 t863 * m6131 (t25 * __this, t131 * p0, t27* p1, int32_t p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6131_MI);
	t863 * V_0 = {0};
	{
		if ((((uint32_t)p2) != ((uint32_t)2)))
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1128_TI));
		t1128 * L_0 = m5922(NULL, &m5922_MI);
		t1189 * L_1 = (t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1189_TI));
		m6143(L_1, p1, L_0, p0, &m6143_MI);
		V_0 = L_1;
		goto IL_0020;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1128_TI));
		t1128 * L_2 = m5922(NULL, &m5922_MI);
		t1188 * L_3 = (t1188 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1188_TI));
		m6142(L_3, p1, L_2, p0, &m6142_MI);
		V_0 = L_3;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		m6132(NULL, V_0, &m6132_MI);
		return V_0;
	}
}
extern MethodInfo m6132_MI;
 void m6132 (t25 * __this, t863 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6132_MI);
	t972 * V_0 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		V_0 = (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0);
		m6922(NULL, V_0, &m6922_MI);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
			NullCheck(p0);
			t27* L_0 = m6086(p0, &m6086_MI);
			NullCheck((((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0));
			bool L_1 = (bool)VirtFuncInvoker1< bool, t25 * >::Invoke(&m4921_MI, (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0), L_0);
			if (!L_1)
			{
				goto IL_0039;
			}
		}

IL_001e:
		{
			NullCheck(p0);
			t27* L_2 = m6086(p0, &m6086_MI);
			IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
			t27* L_3 = m532(NULL, (t27*) &_stringLiteral1005, L_2, (t27*) &_stringLiteral74, &m532_MI);
			t1183 * L_4 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
			m6114(L_4, L_3, &m6114_MI);
			il2cpp_codegen_raise_exception (L_4);
		}

IL_0039:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
			NullCheck(p0);
			t27* L_5 = m6086(p0, &m6086_MI);
			NullCheck((((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0));
			VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4915_MI, (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0), L_5, p0);
			// IL_004a: leave.s IL_0053
			leaveInstructions[0] = 0x53; // 1
			THROW_SENTINEL(IL_0053);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_004c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_004c;
	}

IL_004c:
	{ // begin finally (depth: 1)
		m6923(NULL, V_0, &m6923_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x53:
				goto IL_0053;
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

IL_0053:
	{
		return;
	}
}
extern MethodInfo m6133_MI;
 t25 * m6133 (t25 * __this, t1168 * p0, t131 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6133_MI);
	t1187 * V_0 = {0};
	{
		NullCheck(p0);
		t27* L_0 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m6103_MI, p0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t1170 * L_1 = m6128(NULL, L_0, &m6128_MI);
		V_0 = ((t1187 *)IsInst(L_1, InitializedTypeInfo(&t1187_TI)));
		if (!V_0)
		{
			goto IL_001b;
		}
	}
	{
		NullCheck(V_0);
		t862 * L_2 = m6141(V_0, &m6141_MI);
		return L_2;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		t25 * L_3 = m6134(NULL, p0, p1, &m6134_MI);
		return L_3;
	}
}
extern MethodInfo m6134_MI;
 t25 * m6134 (t25 * __this, t1168 * p0, t131 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6134_MI);
	t25 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		m6130(NULL, p0, p1, (&V_0), &m6130_MI);
		return V_0;
	}
}
extern MethodInfo m6135_MI;
 void m6135 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6135_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1135_TI));
		m5913(NULL, &m5913_MI);
		return;
	}
}
extern MethodInfo m6136_MI;
 void m6136 (t25 * __this, t1170 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6136_MI);
	t972 * V_0 = {0};
	t1171 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
		V_0 = (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0);
		m6922(NULL, V_0, &m6922_MI);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			NullCheck(p0);
			bool L_0 = m6087(p0, &m6087_MI);
			if (L_0)
			{
				goto IL_004c;
			}
		}

IL_0014:
		{
			V_1 = ((t1171 *)IsInst(p0, InitializedTypeInfo(&t1171_TI)));
			if (!V_1)
			{
				goto IL_0035;
			}
		}

IL_001e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
			NullCheck(V_1);
			t27* L_1 = m6093(V_1, &m6093_MI);
			t27* L_2 = m6137(NULL, L_1, &m6137_MI);
			NullCheck((((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0));
			VirtActionInvoker1< t25 * >::Invoke(&m4920_MI, (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0), L_2);
			goto IL_0045;
		}

IL_0035:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1184_TI));
			NullCheck(p0);
			t27* L_3 = m6086(p0, &m6086_MI);
			NullCheck((((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0));
			VirtActionInvoker1< t25 * >::Invoke(&m4920_MI, (((t1184_SFs*)InitializedTypeInfo(&t1184_TI)->static_fields)->f0), L_3);
		}

IL_0045:
		{
			NullCheck(p0);
			m6088(p0, 1, &m6088_MI);
		}

IL_004c:
		{
			// IL_004c: leave.s IL_0055
			leaveInstructions[0] = 0x55; // 1
			THROW_SENTINEL(IL_0055);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_004e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_004e;
	}

IL_004e:
	{ // begin finally (depth: 1)
		m6923(NULL, V_0, &m6923_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x55:
				goto IL_0055;
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

IL_0055:
	{
		return;
	}
}
extern MethodInfo m6137_MI;
 t27* m6137 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6137_MI);
	{
		NullCheck(p0);
		bool L_0 = m3446(p0, (t27*) &_stringLiteral660, &m3446_MI);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		NullCheck(p0);
		t27* L_1 = m2262(p0, 1, &m2262_MI);
		return L_1;
	}

IL_0015:
	{
		return p0;
	}
}
// Metadata Definition System.Runtime.Remoting.RemotingServices
extern Il2CppType t972_0_0_17;
FieldInfo t1184_f0_FieldInfo = 
{
	"uri_hash", &t972_0_0_17, &t1184_TI, offsetof(t1184_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1185_0_0_17;
FieldInfo t1184_f1_FieldInfo = 
{
	"_serializationFormatter", &t1185_0_0_17, &t1184_TI, offsetof(t1184_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1185_0_0_17;
FieldInfo t1184_f2_FieldInfo = 
{
	"_deserializationFormatter", &t1185_0_0_17, &t1184_TI, offsetof(t1184_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_19;
FieldInfo t1184_f3_FieldInfo = 
{
	"app_id", &t27_0_0_19, &t1184_TI, offsetof(t1184_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_17;
FieldInfo t1184_f4_FieldInfo = 
{
	"next_id", &t134_0_0_17, &t1184_TI, offsetof(t1184_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t725_0_0_49;
FieldInfo t1184_f5_FieldInfo = 
{
	"methodBindings", &t725_0_0_49, &t1184_TI, offsetof(t1184_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t657_0_0_49;
FieldInfo t1184_f6_FieldInfo = 
{
	"FieldSetterMethod", &t657_0_0_49, &t1184_TI, offsetof(t1184_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t657_0_0_49;
FieldInfo t1184_f7_FieldInfo = 
{
	"FieldGetterMethod", &t657_0_0_49, &t1184_TI, offsetof(t1184_SFs, f7), &EmptyCustomAttributesCache};
static FieldInfo* t1184_FIs[] =
{
	&t1184_f0_FieldInfo,
	&t1184_f1_FieldInfo,
	&t1184_f2_FieldInfo,
	&t1184_f3_FieldInfo,
	&t1184_f4_FieldInfo,
	&t1184_f5_FieldInfo,
	&t1184_f6_FieldInfo,
	&t1184_f7_FieldInfo,
	NULL
};
extern TypeInfo t1184_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6116_MI = 
{
	".cctor", (methodPointerType)&m6116, &t1184_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3176, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t731_0_0_0;
static ParameterInfo t1184_m6117_ParameterInfos[] = 
{
	{"type", 0, 134221538, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"method", 1, 134221539, &EmptyCustomAttributesCache, &t731_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t731_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6117_MI = 
{
	"GetVirtualMethod", (methodPointerType)&m6117, &t1184_TI, &t731_0_0_0, RuntimeInvoker_t25_t25_t25, t1184_m6117_ParameterInfos, &EmptyCustomAttributesCache, 147, 4096, 255, 2, false, false, 3177, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1184_m6118_ParameterInfos[] = 
{
	{"proxy", 0, 134221540, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1184__CustomAttributeCache_m6118;
MethodInfo m6118_MI = 
{
	"IsTransparentProxy", (methodPointerType)&m6118, &t1184_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t1184_m6118_ParameterInfos, &t1184__CustomAttributeCache_m6118, 150, 4096, 255, 1, false, false, 3178, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1184_m6119_ParameterInfos[] = 
{
	{"URI", 0, 134221541, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6119_MI = 
{
	"GetServerTypeForUri", (methodPointerType)&m6119, &t1184_TI, &t131_0_0_0, RuntimeInvoker_t25_t25, t1184_m6119_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3179, NULL, (methodPointerType)NULL};
extern Il2CppType t1168_0_0_0;
static ParameterInfo t1184_m6120_ParameterInfos[] = 
{
	{"objectRef", 0, 134221542, &EmptyCustomAttributesCache, &t1168_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6120_MI = 
{
	"Unmarshal", (methodPointerType)&m6120, &t1184_TI, &t25_0_0_0, RuntimeInvoker_t25_t25, t1184_m6120_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3180, NULL, (methodPointerType)NULL};
extern Il2CppType t1168_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1184_m6121_ParameterInfos[] = 
{
	{"objectRef", 0, 134221543, &EmptyCustomAttributesCache, &t1168_0_0_0},
	{"fRefine", 1, 134221544, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m6121_MI = 
{
	"Unmarshal", (methodPointerType)&m6121, &t1184_TI, &t25_0_0_0, RuntimeInvoker_t25_t25_t137, t1184_m6121_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 3181, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1184_m6122_ParameterInfos[] = 
{
	{"proxy", 0, 134221545, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t1167_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1184__CustomAttributeCache_m6122;
MethodInfo m6122_MI = 
{
	"GetRealProxy", (methodPointerType)&m6122, &t1184_TI, &t1167_0_0_0, RuntimeInvoker_t25_t25, t1184_m6122_ParameterInfos, &t1184__CustomAttributeCache_m6122, 150, 0, 255, 1, false, false, 3182, NULL, (methodPointerType)NULL};
extern Il2CppType t1155_0_0_0;
static ParameterInfo t1184_m6123_ParameterInfos[] = 
{
	{"msg", 0, 134221546, &EmptyCustomAttributesCache, &t1155_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t731_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6123_MI = 
{
	"GetMethodBaseFromMethodMessage", (methodPointerType)&m6123, &t1184_TI, &t731_0_0_0, RuntimeInvoker_t25_t25, t1184_m6123_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3183, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t637_0_0_0;
static ParameterInfo t1184_m6124_ParameterInfos[] = 
{
	{"type", 0, 134221547, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"methodName", 1, 134221548, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"signature", 2, 134221549, &EmptyCustomAttributesCache, &t637_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t731_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6124_MI = 
{
	"GetMethodBaseFromName", (methodPointerType)&m6124, &t1184_TI, &t731_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t1184_m6124_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 3184, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t637_0_0_0;
static ParameterInfo t1184_m6125_ParameterInfos[] = 
{
	{"type", 0, 134221550, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"methodName", 1, 134221551, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"signature", 2, 134221552, &EmptyCustomAttributesCache, &t637_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t731_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6125_MI = 
{
	"FindInterfaceMethod", (methodPointerType)&m6125, &t1184_TI, &t731_0_0_0, RuntimeInvoker_t25_t25_t25_t25, t1184_m6125_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 3185, NULL, (methodPointerType)NULL};
extern Il2CppType t1174_0_0_0;
extern Il2CppType t158_0_0_0;
static ParameterInfo t1184_m6126_ParameterInfos[] = 
{
	{"entry", 0, 134221553, &EmptyCustomAttributesCache, &t1174_0_0_0},
	{"activationAttributes", 1, 134221554, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6126_MI = 
{
	"CreateClientProxy", (methodPointerType)&m6126, &t1184_TI, &t25_0_0_0, RuntimeInvoker_t25_t25_t25, t1184_m6126_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 3186, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t158_0_0_0;
static ParameterInfo t1184_m6127_ParameterInfos[] = 
{
	{"type", 0, 134221555, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"activationAttributes", 1, 134221556, &EmptyCustomAttributesCache, &t158_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6127_MI = 
{
	"CreateClientProxyForContextBound", (methodPointerType)&m6127, &t1184_TI, &t25_0_0_0, RuntimeInvoker_t25_t25_t25, t1184_m6127_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 3187, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1184_m6128_ParameterInfos[] = 
{
	{"uri", 0, 134221557, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t1170_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6128_MI = 
{
	"GetIdentityForUri", (methodPointerType)&m6128, &t1184_TI, &t1170_0_0_0, RuntimeInvoker_t25_t25, t1184_m6128_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3188, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1184_m6129_ParameterInfos[] = 
{
	{"uri", 0, 134221558, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6129_MI = 
{
	"RemoveAppNameFromUri", (methodPointerType)&m6129, &t1184_TI, &t27_0_0_0, RuntimeInvoker_t25_t25, t1184_m6129_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 3189, NULL, (methodPointerType)NULL};
extern Il2CppType t1168_0_0_0;
extern Il2CppType t131_0_0_0;
extern Il2CppType t25_1_0_0;
static ParameterInfo t1184_m6130_ParameterInfos[] = 
{
	{"objRef", 0, 134221559, &EmptyCustomAttributesCache, &t1168_0_0_0},
	{"proxyType", 1, 134221560, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"clientProxy", 2, 134221561, &EmptyCustomAttributesCache, &t25_1_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t1171_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t1625 (MethodInfo* method, void* obj, void** args);
MethodInfo m6130_MI = 
{
	"GetOrCreateClientIdentity", (methodPointerType)&m6130, &t1184_TI, &t1171_0_0_0, RuntimeInvoker_t25_t25_t25_t1625, t1184_m6130_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 3190, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t1186_0_0_0;
static ParameterInfo t1184_m6131_ParameterInfos[] = 
{
	{"objectType", 0, 134221562, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"objectUri", 1, 134221563, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"mode", 2, 134221564, &EmptyCustomAttributesCache, &t1186_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t863_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6131_MI = 
{
	"CreateWellKnownServerIdentity", (methodPointerType)&m6131, &t1184_TI, &t863_0_0_0, RuntimeInvoker_t25_t25_t25_t134, t1184_m6131_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 3191, NULL, (methodPointerType)NULL};
extern Il2CppType t863_0_0_0;
static ParameterInfo t1184_m6132_ParameterInfos[] = 
{
	{"identity", 0, 134221565, &EmptyCustomAttributesCache, &t863_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6132_MI = 
{
	"RegisterServerIdentity", (methodPointerType)&m6132, &t1184_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1184_m6132_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 3192, NULL, (methodPointerType)NULL};
extern Il2CppType t1168_0_0_0;
extern Il2CppType t131_0_0_0;
static ParameterInfo t1184_m6133_ParameterInfos[] = 
{
	{"objref", 0, 134221566, &EmptyCustomAttributesCache, &t1168_0_0_0},
	{"classToProxy", 1, 134221567, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6133_MI = 
{
	"GetProxyForRemoteObject", (methodPointerType)&m6133, &t1184_TI, &t25_0_0_0, RuntimeInvoker_t25_t25_t25, t1184_m6133_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 3193, NULL, (methodPointerType)NULL};
extern Il2CppType t1168_0_0_0;
extern Il2CppType t131_0_0_0;
static ParameterInfo t1184_m6134_ParameterInfos[] = 
{
	{"objRef", 0, 134221568, &EmptyCustomAttributesCache, &t1168_0_0_0},
	{"proxyType", 1, 134221569, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6134_MI = 
{
	"GetRemoteObject", (methodPointerType)&m6134, &t1184_TI, &t25_0_0_0, RuntimeInvoker_t25_t25_t25, t1184_m6134_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 3194, NULL, (methodPointerType)NULL};
extern TypeInfo t1184_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6135_MI = 
{
	"RegisterInternalChannels", (methodPointerType)&m6135, &t1184_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 145, 0, 255, 0, false, false, 3195, NULL, (methodPointerType)NULL};
extern Il2CppType t1170_0_0_0;
static ParameterInfo t1184_m6136_ParameterInfos[] = 
{
	{"ident", 0, 134221570, &EmptyCustomAttributesCache, &t1170_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6136_MI = 
{
	"DisposeIdentity", (methodPointerType)&m6136, &t1184_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1184_m6136_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3196, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1184_m6137_ParameterInfos[] = 
{
	{"uri", 0, 134221571, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1184_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6137_MI = 
{
	"GetNormalizedUri", (methodPointerType)&m6137, &t1184_TI, &t27_0_0_0, RuntimeInvoker_t25_t25, t1184_m6137_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 3197, NULL, (methodPointerType)NULL};
static MethodInfo* t1184_MIs[] =
{
	&m6116_MI,
	&m6117_MI,
	&m6118_MI,
	&m6119_MI,
	&m6120_MI,
	&m6121_MI,
	&m6122_MI,
	&m6123_MI,
	&m6124_MI,
	&m6125_MI,
	&m6126_MI,
	&m6127_MI,
	&m6128_MI,
	&m6129_MI,
	&m6130_MI,
	&m6131_MI,
	&m6132_MI,
	&m6133_MI,
	&m6134_MI,
	&m6135_MI,
	&m6136_MI,
	&m6137_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1184_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1184_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern MethodInfo m5862_MI;
void t1184_CustomAttributesCacheGenerator_m6118(CustomAttributesCache* cache)
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
void t1184_CustomAttributesCacheGenerator_m6122(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t1104 * tmp;
		tmp = (t1104 *)il2cpp_codegen_object_new (&t1104_TI);
		m5862(tmp, 3, 2, &m5862_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1184__CustomAttributeCache = {
1,
NULL,
&t1184_CustomAttributesCacheGenerator
};
CustomAttributesCache t1184__CustomAttributeCache_m6118 = {
1,
NULL,
&t1184_CustomAttributesCacheGenerator_m6118
};
CustomAttributesCache t1184__CustomAttributeCache_m6122 = {
1,
NULL,
&t1184_CustomAttributesCacheGenerator_m6122
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1184_0_0_0;
extern Il2CppType t1184_1_0_0;
extern TypeInfo t25_TI;
struct t1184;
extern TypeInfo t1184_TI;
extern CustomAttributesCache t1184__CustomAttributeCache;
extern CustomAttributesCache t1184__CustomAttributeCache_m6118;
extern CustomAttributesCache t1184__CustomAttributeCache_m6122;
TypeInfo t1184_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingServices", "System.Runtime.Remoting", t1184_MIs, NULL, t1184_FIs, NULL, &t25_TI, NULL, NULL, &t1184_TI, NULL, t1184_VT, &t1184__CustomAttributeCache, &t1184_TI, &t1184_0_0_0, &t1184_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1184), 0, -1, sizeof(t1184_SFs), 0, -1, 257, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 22, 0, 8, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t863_TI;

#include "t1190.h"
#include "t1149.h"
extern TypeInfo t863_TI;
extern TypeInfo t1170_TI;
extern TypeInfo t1168_TI;
extern TypeInfo t1190_TI;
extern TypeInfo t123_TI;
extern TypeInfo t1180_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1149_TI;
extern TypeInfo t1177_TI;
extern TypeInfo t1181_TI;
#include "t1190MD.h"
extern MethodInfo m6083_MI;
extern MethodInfo m6107_MI;
extern MethodInfo m6094_MI;
extern MethodInfo m6146_MI;
extern MethodInfo m6102_MI;
extern MethodInfo m6104_MI;
extern MethodInfo m6081_MI;
extern MethodInfo m6100_MI;


extern MethodInfo m6138_MI;
 void m6138 (t863 * __this, t27* p0, t1128 * p1, t131 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6138_MI);
	{
		m6083(__this, p0, &m6083_MI);
		__this->f5 = p2;
		__this->f7 = p1;
		return;
	}
}
extern MethodInfo m6139_MI;
 t131 * m6139 (t863 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6139_MI);
	{
		t131 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m6140_MI;
 t1168 * m6140 (t863 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6140_MI);
	{
		t1168 * L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t1168 * L_1 = (__this->f3);
		NullCheck(L_1);
		m6107(L_1, &m6107_MI);
		t1168 * L_2 = (__this->f3);
		return L_2;
	}

IL_001a:
	{
		if (p0)
		{
			goto IL_0027;
		}
	}
	{
		t131 * L_3 = (__this->f5);
		p0 = L_3;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1168_TI));
		t1168 * L_4 = (t1168 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1168_TI));
		m6094(L_4, &m6094_MI);
		__this->f3 = L_4;
		t1168 * L_5 = (__this->f3);
		t1190 * L_6 = (t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1190_TI));
		m6146(L_6, p0, &m6146_MI);
		NullCheck(L_5);
		VirtActionInvoker1< t25 * >::Invoke(&m6102_MI, L_5, L_6);
		t1168 * L_7 = (__this->f3);
		t27* L_8 = (__this->f0);
		NullCheck(L_7);
		VirtActionInvoker1< t27* >::Invoke(&m6104_MI, L_7, L_8);
		t25 * L_9 = (__this->f2);
		if (!L_9)
		{
			goto IL_007f;
		}
	}
	{
		t25 * L_10 = (__this->f2);
		if (((t1149 *)IsInst(L_10, InitializedTypeInfo(&t1149_TI))))
		{
			goto IL_007f;
		}
	}
	{
		t1168 * L_11 = (__this->f3);
		t25 * L_12 = (__this->f2);
		t1177 * L_13 = (t1177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1177_TI));
		m6081(L_13, L_12, &m6081_MI);
		NullCheck(L_11);
		VirtActionInvoker1< t25 * >::Invoke(&m6100_MI, L_11, L_13);
	}

IL_007f:
	{
		t1168 * L_14 = (__this->f3);
		return L_14;
	}
}
// Metadata Definition System.Runtime.Remoting.ServerIdentity
extern Il2CppType t131_0_0_4;
FieldInfo t863_f5_FieldInfo = 
{
	"_objectType", &t131_0_0_4, &t863_TI, offsetof(t863, f5), &EmptyCustomAttributesCache};
extern Il2CppType t862_0_0_4;
FieldInfo t863_f6_FieldInfo = 
{
	"_serverObject", &t862_0_0_4, &t863_TI, offsetof(t863, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1128_0_0_4;
FieldInfo t863_f7_FieldInfo = 
{
	"_context", &t1128_0_0_4, &t863_TI, offsetof(t863, f7), &EmptyCustomAttributesCache};
static FieldInfo* t863_FIs[] =
{
	&t863_f5_FieldInfo,
	&t863_f6_FieldInfo,
	&t863_f7_FieldInfo,
	NULL
};
extern MethodInfo m6139_MI;
static PropertyInfo t863____ObjectType_PropertyInfo = 
{
	&t863_TI, "ObjectType", &m6139_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t863_PIs[] =
{
	&t863____ObjectType_PropertyInfo,
	NULL
};
extern Il2CppType t27_0_0_0;
extern Il2CppType t1128_0_0_0;
extern Il2CppType t131_0_0_0;
static ParameterInfo t863_m6138_ParameterInfos[] = 
{
	{"objectUri", 0, 134221572, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"context", 1, 134221573, &EmptyCustomAttributesCache, &t1128_0_0_0},
	{"objectType", 2, 134221574, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t863_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6138_MI = 
{
	".ctor", (methodPointerType)&m6138, &t863_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t863_m6138_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 3198, NULL, (methodPointerType)NULL};
extern TypeInfo t863_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6139_MI = 
{
	"get_ObjectType", (methodPointerType)&m6139, &t863_TI, &t131_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3199, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
static ParameterInfo t863_m6140_ParameterInfos[] = 
{
	{"requestedType", 0, 134221575, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t863_TI;
extern Il2CppType t1168_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6140_MI = 
{
	"CreateObjRef", (methodPointerType)&m6140, &t863_TI, &t1168_0_0_0, RuntimeInvoker_t25_t25, t863_m6140_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 3200, NULL, (methodPointerType)NULL};
static MethodInfo* t863_MIs[] =
{
	&m6138_MI,
	&m6139_MI,
	&m6140_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6140_MI;
static MethodInfo* t863_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6140_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t863_0_0_0;
extern Il2CppType t863_1_0_0;
extern TypeInfo t1170_TI;
struct t863;
extern TypeInfo t863_TI;
TypeInfo t863_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ServerIdentity", "System.Runtime.Remoting", t863_MIs, t863_PIs, t863_FIs, NULL, &t1170_TI, NULL, NULL, &t863_TI, NULL, t863_VT, &EmptyCustomAttributesCache, &t863_TI, &t863_0_0_0, &t863_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t863), 0, -1, 0, 0, -1, 1048704, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 1, 3, 0, 0, 5, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1187_TI;

extern TypeInfo t863_TI;


extern MethodInfo m6141_MI;
 t862 * m6141 (t1187 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6141_MI);
	{
		t862 * L_0 = (__this->f6);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.ClientActivatedIdentity
extern TypeInfo t1187_TI;
extern Il2CppType t862_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6141_MI = 
{
	"GetServerObject", (methodPointerType)&m6141, &t1187_TI, &t862_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3201, NULL, (methodPointerType)NULL};
static MethodInfo* t1187_MIs[] =
{
	&m6141_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6140_MI;
static MethodInfo* t1187_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6140_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1187_0_0_0;
extern Il2CppType t1187_1_0_0;
extern TypeInfo t863_TI;
struct t1187;
extern TypeInfo t1187_TI;
TypeInfo t1187_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ClientActivatedIdentity", "System.Runtime.Remoting", t1187_MIs, NULL, NULL, NULL, &t863_TI, NULL, NULL, &t1187_TI, NULL, t1187_VT, &EmptyCustomAttributesCache, &t1187_TI, &t1187_0_0_0, &t1187_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1187), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 5, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1188_TI;

extern MethodInfo m6138_MI;


extern MethodInfo m6142_MI;
 void m6142 (t1188 * __this, t27* p0, t1128 * p1, t131 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6142_MI);
	{
		m6138(__this, p0, p1, p2, &m6138_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.SingletonIdentity
extern Il2CppType t27_0_0_0;
extern Il2CppType t1128_0_0_0;
extern Il2CppType t131_0_0_0;
static ParameterInfo t1188_m6142_ParameterInfos[] = 
{
	{"objectUri", 0, 134221576, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"context", 1, 134221577, &EmptyCustomAttributesCache, &t1128_0_0_0},
	{"objectType", 2, 134221578, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1188_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6142_MI = 
{
	".ctor", (methodPointerType)&m6142, &t1188_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t1188_m6142_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 3202, NULL, (methodPointerType)NULL};
static MethodInfo* t1188_MIs[] =
{
	&m6142_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6140_MI;
static MethodInfo* t1188_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6140_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1188_0_0_0;
extern Il2CppType t1188_1_0_0;
extern TypeInfo t863_TI;
struct t1188;
extern TypeInfo t1188_TI;
TypeInfo t1188_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SingletonIdentity", "System.Runtime.Remoting", t1188_MIs, NULL, NULL, NULL, &t863_TI, NULL, NULL, &t1188_TI, NULL, t1188_VT, &EmptyCustomAttributesCache, &t1188_TI, &t1188_0_0_0, &t1188_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1188), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 5, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1189_TI;

extern MethodInfo m6138_MI;


extern MethodInfo m6143_MI;
 void m6143 (t1189 * __this, t27* p0, t1128 * p1, t131 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6143_MI);
	{
		m6138(__this, p0, p1, p2, &m6138_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.SingleCallIdentity
extern Il2CppType t27_0_0_0;
extern Il2CppType t1128_0_0_0;
extern Il2CppType t131_0_0_0;
static ParameterInfo t1189_m6143_ParameterInfos[] = 
{
	{"objectUri", 0, 134221579, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"context", 1, 134221580, &EmptyCustomAttributesCache, &t1128_0_0_0},
	{"objectType", 2, 134221581, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1189_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6143_MI = 
{
	".ctor", (methodPointerType)&m6143, &t1189_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t1189_m6143_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 3203, NULL, (methodPointerType)NULL};
static MethodInfo* t1189_MIs[] =
{
	&m6143_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6140_MI;
static MethodInfo* t1189_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6140_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1189_0_0_0;
extern Il2CppType t1189_1_0_0;
extern TypeInfo t863_TI;
struct t1189;
extern TypeInfo t1189_TI;
TypeInfo t1189_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SingleCallIdentity", "System.Runtime.Remoting", t1189_MIs, NULL, NULL, NULL, &t863_TI, NULL, NULL, &t1189_TI, NULL, t1189_VT, &EmptyCustomAttributesCache, &t1189_TI, &t1189_0_0_0, &t1189_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1189), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 5, 0, 0};
#include "t1175.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1175_TI;

extern TypeInfo t1175_TI;


extern MethodInfo m6144_MI;
 t27* m6144 (t1175 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6144_MI);
	{
		t27* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m6145_MI;
 t27* m6145 (t1175 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6145_MI);
	{
		t27* L_0 = (__this->f1);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.TypeEntry
extern Il2CppType t27_0_0_1;
FieldInfo t1175_f0_FieldInfo = 
{
	"assembly_name", &t27_0_0_1, &t1175_TI, offsetof(t1175, f0), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
FieldInfo t1175_f1_FieldInfo = 
{
	"type_name", &t27_0_0_1, &t1175_TI, offsetof(t1175, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1175_FIs[] =
{
	&t1175_f0_FieldInfo,
	&t1175_f1_FieldInfo,
	NULL
};
extern MethodInfo m6144_MI;
static PropertyInfo t1175____AssemblyName_PropertyInfo = 
{
	&t1175_TI, "AssemblyName", &m6144_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6145_MI;
static PropertyInfo t1175____TypeName_PropertyInfo = 
{
	&t1175_TI, "TypeName", &m6145_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1175_PIs[] =
{
	&t1175____AssemblyName_PropertyInfo,
	&t1175____TypeName_PropertyInfo,
	NULL
};
extern TypeInfo t1175_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6144_MI = 
{
	"get_AssemblyName", (methodPointerType)&m6144, &t1175_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3204, NULL, (methodPointerType)NULL};
extern TypeInfo t1175_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6145_MI = 
{
	"get_TypeName", (methodPointerType)&m6145, &t1175_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3205, NULL, (methodPointerType)NULL};
static MethodInfo* t1175_MIs[] =
{
	&m6144_MI,
	&m6145_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1175_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1175_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1175__CustomAttributeCache = {
1,
NULL,
&t1175_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1175_0_0_0;
extern Il2CppType t1175_1_0_0;
extern TypeInfo t25_TI;
struct t1175;
extern TypeInfo t1175_TI;
extern CustomAttributesCache t1175__CustomAttributeCache;
TypeInfo t1175_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeEntry", "System.Runtime.Remoting", t1175_MIs, t1175_PIs, t1175_FIs, NULL, &t25_TI, NULL, NULL, &t1175_TI, NULL, t1175_VT, &t1175__CustomAttributeCache, &t1175_TI, &t1175_0_0_0, &t1175_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1175), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 2, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1190_TI;

extern TypeInfo t1190_TI;
extern TypeInfo t131_TI;
extern TypeInfo t125_TI;
extern TypeInfo t862_TI;
extern TypeInfo t27_TI;
extern TypeInfo t548_TI;
extern TypeInfo t25_TI;
extern TypeInfo t637_TI;
extern Il2CppType t862_0_0_0;
extern Il2CppType t25_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m4332_MI;
extern MethodInfo m484_MI;
extern MethodInfo m3518_MI;
extern MethodInfo m3432_MI;
extern MethodInfo m7960_MI;


extern MethodInfo m6146_MI;
 void m6146 (t1190 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6146_MI);
	int32_t V_0 = 0;
	t131 * V_1 = {0};
	int32_t V_2 = 0;
	t637* V_3 = {0};
	int32_t V_4 = 0;
	{
		m452(__this, &m452_MI);
		NullCheck(p0);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4332_MI, p0);
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t862_0_0_0), &m484_MI);
		NullCheck(L_1);
		t27* L_2 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, L_1);
		__this->f0 = L_2;
		__this->f1 = ((t548*)SZArrayNew(InitializedTypeInfo(&t548_TI), 0));
		t548* L_3 = ((t548*)SZArrayNew(InitializedTypeInfo(&t548_TI), 1));
		NullCheck(p0);
		t27* L_4 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, p0);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, L_4);
		*((t27**)(t27**)SZArrayLdElema(L_3, 0)) = (t27*)L_4;
		__this->f2 = L_3;
		goto IL_00f2;
	}

IL_0049:
	{
		NullCheck(p0);
		t27* L_5 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, p0);
		__this->f0 = L_5;
		V_0 = 0;
		NullCheck(p0);
		t131 * L_6 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3432_MI, p0);
		V_1 = L_6;
		goto IL_006b;
	}

IL_0060:
	{
		NullCheck(V_1);
		t131 * L_7 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3432_MI, V_1);
		V_1 = L_7;
		V_0 = ((int32_t)(V_0+1));
	}

IL_006b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_8 = m484(NULL, LoadTypeToken(&t862_0_0_0), &m484_MI);
		if ((((t131 *)V_1) == ((t131 *)L_8)))
		{
			goto IL_0085;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_9 = m484(NULL, LoadTypeToken(&t25_0_0_0), &m484_MI);
		if ((((t131 *)V_1) != ((t131 *)L_9)))
		{
			goto IL_0060;
		}
	}

IL_0085:
	{
		__this->f1 = ((t548*)SZArrayNew(InitializedTypeInfo(&t548_TI), V_0));
		NullCheck(p0);
		t131 * L_10 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3432_MI, p0);
		V_1 = L_10;
		V_2 = 0;
		goto IL_00b5;
	}

IL_009c:
	{
		t548* L_11 = (__this->f1);
		NullCheck(V_1);
		t27* L_12 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, V_1);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, V_2);
		ArrayElementTypeCheck (L_11, L_12);
		*((t27**)(t27**)SZArrayLdElema(L_11, V_2)) = (t27*)L_12;
		NullCheck(V_1);
		t131 * L_13 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3432_MI, V_1);
		V_1 = L_13;
		V_2 = ((int32_t)(V_2+1));
	}

IL_00b5:
	{
		if ((((int32_t)V_2) < ((int32_t)V_0)))
		{
			goto IL_009c;
		}
	}
	{
		NullCheck(p0);
		t637* L_14 = (t637*)VirtFuncInvoker0< t637* >::Invoke(&m7960_MI, p0);
		V_3 = L_14;
		NullCheck(V_3);
		__this->f2 = ((t548*)SZArrayNew(InitializedTypeInfo(&t548_TI), (((int32_t)(((t122 *)V_3)->max_length)))));
		V_4 = 0;
		goto IL_00eb;
	}

IL_00d3:
	{
		t548* L_15 = (__this->f2);
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, V_4);
		NullCheck((*(t131 **)(t131 **)SZArrayLdElema(V_3, V_4)));
		t27* L_16 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, (*(t131 **)(t131 **)SZArrayLdElema(V_3, V_4)));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, V_4);
		ArrayElementTypeCheck (L_15, L_16);
		*((t27**)(t27**)SZArrayLdElema(L_15, V_4)) = (t27*)L_16;
		V_4 = ((int32_t)(V_4+1));
	}

IL_00eb:
	{
		NullCheck(V_3);
		if ((((int32_t)V_4) < ((int32_t)(((int32_t)(((t122 *)V_3)->max_length))))))
		{
			goto IL_00d3;
		}
	}

IL_00f2:
	{
		return;
	}
}
extern MethodInfo m6147_MI;
 t27* m6147 (t1190 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6147_MI);
	{
		t27* L_0 = (__this->f0);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.TypeInfo
extern Il2CppType t27_0_0_1;
FieldInfo t1190_f0_FieldInfo = 
{
	"serverType", &t27_0_0_1, &t1190_TI, offsetof(t1190, f0), &EmptyCustomAttributesCache};
extern Il2CppType t548_0_0_1;
FieldInfo t1190_f1_FieldInfo = 
{
	"serverHierarchy", &t548_0_0_1, &t1190_TI, offsetof(t1190, f1), &EmptyCustomAttributesCache};
extern Il2CppType t548_0_0_1;
FieldInfo t1190_f2_FieldInfo = 
{
	"interfacesImplemented", &t548_0_0_1, &t1190_TI, offsetof(t1190, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1190_FIs[] =
{
	&t1190_f0_FieldInfo,
	&t1190_f1_FieldInfo,
	&t1190_f2_FieldInfo,
	NULL
};
extern MethodInfo m6147_MI;
static PropertyInfo t1190____TypeName_PropertyInfo = 
{
	&t1190_TI, "TypeName", &m6147_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1190_PIs[] =
{
	&t1190____TypeName_PropertyInfo,
	NULL
};
extern Il2CppType t131_0_0_0;
static ParameterInfo t1190_m6146_ParameterInfos[] = 
{
	{"type", 0, 134221582, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1190_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6146_MI = 
{
	".ctor", (methodPointerType)&m6146, &t1190_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1190_m6146_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3206, NULL, (methodPointerType)NULL};
extern TypeInfo t1190_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6147_MI = 
{
	"get_TypeName", (methodPointerType)&m6147, &t1190_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 3207, NULL, (methodPointerType)NULL};
static MethodInfo* t1190_MIs[] =
{
	&m6146_MI,
	&m6147_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6147_MI;
static MethodInfo* t1190_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6147_MI,
};
extern TypeInfo t1180_TI;
static TypeInfo* t1190_ITIs[] = 
{
	&t1180_TI,
};
extern TypeInfo t1180_TI;
static Il2CppInterfaceOffsetPair t1190_IOs[] = 
{
	{ &t1180_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1190_0_0_0;
extern Il2CppType t1190_1_0_0;
extern TypeInfo t25_TI;
struct t1190;
extern TypeInfo t1190_TI;
TypeInfo t1190_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeInfo", "System.Runtime.Remoting", t1190_MIs, t1190_PIs, t1190_FIs, NULL, &t25_TI, NULL, NULL, &t1190_TI, t1190_ITIs, t1190_VT, &EmptyCustomAttributesCache, &t1190_TI, &t1190_0_0_0, &t1190_1_0_0, t1190_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1190), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 1, 3, 0, 0, 5, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1186_TI;
#include "t1186MD.h"



// Metadata Definition System.Runtime.Remoting.WellKnownObjectMode
extern Il2CppType t134_0_0_1542;
FieldInfo t1186_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1186_TI, offsetof(t1186, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1186_0_0_32854;
FieldInfo t1186_f2_FieldInfo = 
{
	"Singleton", &t1186_0_0_32854, &t1186_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1186_0_0_32854;
FieldInfo t1186_f3_FieldInfo = 
{
	"SingleCall", &t1186_0_0_32854, &t1186_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1186_FIs[] =
{
	&t1186_f1_FieldInfo,
	&t1186_f2_FieldInfo,
	&t1186_f3_FieldInfo,
	NULL
};
static const int32_t t1186_f2_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1186_f2_DefaultValue = 
{
	&t1186_f2_FieldInfo, { (char*)&t1186_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1186_f3_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1186_f3_DefaultValue = 
{
	&t1186_f3_FieldInfo, { (char*)&t1186_f3_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1186_FDVs[] = 
{
	&t1186_f2_DefaultValue,
	&t1186_f3_DefaultValue,
	NULL
};
static MethodInfo* t1186_MIs[] =
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
static MethodInfo* t1186_VT[] =
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
static Il2CppInterfaceOffsetPair t1186_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1186_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1186__CustomAttributeCache = {
1,
NULL,
&t1186_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1186_0_0_0;
extern Il2CppType t1186_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t1186__CustomAttributeCache;
TypeInfo t1186_TI = 
{
	&g_mscorlib_dll_Image, NULL, "WellKnownObjectMode", "System.Runtime.Remoting", t1186_MIs, NULL, t1186_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1186_VT, &t1186__CustomAttributeCache, &t134_TI, &t1186_0_0_0, &t1186_1_0_0, t1186_IOs, NULL, NULL, t1186_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1186)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t1191.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1191_TI;
#include "t1191MD.h"

#include "t1443.h"
#include "t1428.h"
#include "t847.h"
#include "t996.h"
#include "t566.h"
#include "t812.h"
#include "t701.h"
#include "t483.h"
#include "t817.h"
#include "t137.h"
#include "t124.h"
#include "t721.h"
#include "t176.h"
#include "t818.h"
extern TypeInfo t876_TI;
extern TypeInfo t462_TI;
extern TypeInfo t1443_TI;
extern TypeInfo t1191_TI;
extern TypeInfo t637_TI;
extern TypeInfo t131_TI;
extern TypeInfo t125_TI;
extern TypeInfo t344_TI;
extern TypeInfo t996_TI;
extern TypeInfo t566_TI;
extern TypeInfo t812_TI;
extern TypeInfo t701_TI;
extern TypeInfo t483_TI;
extern TypeInfo t134_TI;
extern TypeInfo t817_TI;
extern TypeInfo t137_TI;
extern TypeInfo t124_TI;
extern TypeInfo t721_TI;
extern TypeInfo t176_TI;
extern TypeInfo t818_TI;
extern TypeInfo t27_TI;
extern TypeInfo t61_TI;
#include "t1443MD.h"
#include "t865MD.h"
#include "t1378MD.h"
extern Il2CppType t125_0_0_0;
extern Il2CppType t462_0_0_0;
extern Il2CppType t344_0_0_0;
extern Il2CppType t996_0_0_0;
extern Il2CppType t566_0_0_0;
extern Il2CppType t812_0_0_0;
extern Il2CppType t701_0_0_0;
extern Il2CppType t483_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t817_0_0_0;
extern Il2CppType t137_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t721_0_0_0;
extern Il2CppType t176_0_0_0;
extern Il2CppType t818_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t61_0_0_0;
extern MethodInfo m4417_MI;
extern MethodInfo m484_MI;
extern MethodInfo m7388_MI;
extern MethodInfo m2234_MI;
extern MethodInfo m3522_MI;
extern FieldInfo t1443_f10_FieldInfo;


extern MethodInfo m6148_MI;
 void m6148 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6148_MI);
	t27* V_0 = {0};
	{
		t876* L_0 = ((t876*)SZArrayNew(InitializedTypeInfo(&t876_TI), ((int32_t)17)));
		m4417(NULL, (t122 *)(t122 *)L_0, LoadFieldToken(&t1443_f10_FieldInfo), &m4417_MI);
		((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f0 = L_0;
		((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f3 = 0;
		((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), ((int32_t)19)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t125_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), 1);
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_1);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), 1)) = (t131 *)L_1;
		t131 * L_2 = m484(NULL, LoadTypeToken(&t462_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), 2);
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_2);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), 2)) = (t131 *)L_2;
		t131 * L_3 = m484(NULL, LoadTypeToken(&t344_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), 3);
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_3);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), 3)) = (t131 *)L_3;
		t131 * L_4 = m484(NULL, LoadTypeToken(&t996_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)12));
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_4);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)12))) = (t131 *)L_4;
		t131 * L_5 = m484(NULL, LoadTypeToken(&t566_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)13));
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_5);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)13))) = (t131 *)L_5;
		t131 * L_6 = m484(NULL, LoadTypeToken(&t812_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), 5);
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_6);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), 5)) = (t131 *)L_6;
		t131 * L_7 = m484(NULL, LoadTypeToken(&t701_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), 6);
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_7);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), 6)) = (t131 *)L_7;
		t131 * L_8 = m484(NULL, LoadTypeToken(&t483_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), 7);
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_8);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), 7)) = (t131 *)L_8;
		t131 * L_9 = m484(NULL, LoadTypeToken(&t134_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), 8);
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_9);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), 8)) = (t131 *)L_9;
		t131 * L_10 = m484(NULL, LoadTypeToken(&t817_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)9));
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_10);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)9))) = (t131 *)L_10;
		t131 * L_11 = m484(NULL, LoadTypeToken(&t137_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)10));
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_11);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)10))) = (t131 *)L_11;
		t131 * L_12 = m484(NULL, LoadTypeToken(&t124_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)11));
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_12);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)11))) = (t131 *)L_12;
		t131 * L_13 = m484(NULL, LoadTypeToken(&t721_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)14));
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_13);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)14))) = (t131 *)L_13;
		t131 * L_14 = m484(NULL, LoadTypeToken(&t176_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)15));
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_14);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)15))) = (t131 *)L_14;
		t131 * L_15 = m484(NULL, LoadTypeToken(&t818_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)16));
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_15);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)16))) = (t131 *)L_15;
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)17));
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), NULL);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)17))) = (t131 *)NULL;
		t131 * L_16 = m484(NULL, LoadTypeToken(&t27_0_0_0), &m484_MI);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)18));
		ArrayElementTypeCheck ((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), L_16);
		*((t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), ((int32_t)18))) = (t131 *)L_16;
		((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2 = ((t876*)SZArrayNew(InitializedTypeInfo(&t876_TI), ((int32_t)30)));
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), 3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), 3)) = (uint8_t)1;
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), 6);
		*((uint8_t*)(uint8_t*)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), 6)) = (uint8_t)2;
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), 4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), 4)) = (uint8_t)3;
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)16));
		*((uint8_t*)(uint8_t*)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)16))) = (uint8_t)((int32_t)13);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)15));
		*((uint8_t*)(uint8_t*)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)15))) = (uint8_t)5;
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)14));
		*((uint8_t*)(uint8_t*)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)14))) = (uint8_t)6;
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), 7);
		*((uint8_t*)(uint8_t*)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), 7)) = (uint8_t)7;
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)9));
		*((uint8_t*)(uint8_t*)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)9))) = (uint8_t)8;
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)11));
		*((uint8_t*)(uint8_t*)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)11))) = (uint8_t)((int32_t)9);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), 5);
		*((uint8_t*)(uint8_t*)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), 5)) = (uint8_t)((int32_t)10);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)13));
		*((uint8_t*)(uint8_t*)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)13))) = (uint8_t)((int32_t)11);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), 8);
		*((uint8_t*)(uint8_t*)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), 8)) = (uint8_t)((int32_t)14);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)10));
		*((uint8_t*)(uint8_t*)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)10))) = (uint8_t)((int32_t)15);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)12));
		*((uint8_t*)(uint8_t*)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)12))) = (uint8_t)((int32_t)16);
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)18));
		*((uint8_t*)(uint8_t*)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f2), ((int32_t)18))) = (uint8_t)((int32_t)18);
		t27* L_17 = m7388(NULL, (t27*) &_stringLiteral1006, &m7388_MI);
		V_0 = L_17;
		if (V_0)
		{
			goto IL_01f4;
		}
	}
	{
		V_0 = (t27*) &_stringLiteral1007;
	}

IL_01f4:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_18 = m2234(NULL, V_0, (t27*) &_stringLiteral1007, &m2234_MI);
		((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f3 = L_18;
		return;
	}
}
extern MethodInfo m6149_MI;
 bool m6149 (t25 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6149_MI);
	int32_t G_B6_0 = 0;
	{
		NullCheck(p0);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3522_MI, p0);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t61_0_0_0), &m484_MI);
		if ((((t131 *)p0) != ((t131 *)L_1)))
		{
			goto IL_003e;
		}
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_2 = m484(NULL, LoadTypeToken(&t566_0_0_0), &m484_MI);
		if ((((t131 *)p0) == ((t131 *)L_2)))
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_3 = m484(NULL, LoadTypeToken(&t996_0_0_0), &m484_MI);
		if ((((t131 *)p0) == ((t131 *)L_3)))
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_4 = m484(NULL, LoadTypeToken(&t812_0_0_0), &m484_MI);
		G_B6_0 = ((((t131 *)p0) == ((t131 *)L_4))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B6_0 = 1;
	}

IL_003f:
	{
		return G_B6_0;
	}
}
extern MethodInfo m6150_MI;
 t131 * m6150 (t25 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6150_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1191_TI));
		NullCheck((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), p0);
		return (*(t131 **)(t131 **)SZArrayLdElema((((t1191_SFs*)InitializedTypeInfo(&t1191_TI)->static_fields)->f1), p0));
	}
}
extern MethodInfo m6151_MI;
 void m6151 (t25 * __this, t876* p0, int32_t p1, int32_t p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6151_MI);
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		if ((((uint32_t)p2) != ((uint32_t)8)))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 0;
		goto IL_0060;
	}

IL_0008:
	{
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, V_1);
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, V_1));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_1+7)));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, V_1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, V_1)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_1+7))));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_1+7)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_1+7)))) = (uint8_t)V_0;
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_1+1)));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_1+1))));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_1+6)));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_1+1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_1+1)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_1+6))));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_1+6)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_1+6)))) = (uint8_t)V_0;
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_1+2)));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_1+2))));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_1+5)));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_1+2)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_1+2)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_1+5))));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_1+5)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_1+5)))) = (uint8_t)V_0;
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_1+3)));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_1+3))));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_1+4)));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_1+3)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_1+3)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_1+4))));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_1+4)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_1+4)))) = (uint8_t)V_0;
		V_1 = ((int32_t)(V_1+8));
	}

IL_0060:
	{
		if ((((int32_t)V_1) < ((int32_t)p1)))
		{
			goto IL_0008;
		}
	}
	{
		goto IL_00c2;
	}

IL_0066:
	{
		if ((((uint32_t)p2) != ((uint32_t)4)))
		{
			goto IL_00a0;
		}
	}
	{
		V_2 = 0;
		goto IL_009a;
	}

IL_006e:
	{
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, V_2);
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, V_2));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_2+3)));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, V_2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, V_2)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_2+3))));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_2+3)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_2+3)))) = (uint8_t)V_0;
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_2+1)));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_2+1))));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_2+2)));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_2+1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_2+1)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_2+2))));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_2+2)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_2+2)))) = (uint8_t)V_0;
		V_2 = ((int32_t)(V_2+4));
	}

IL_009a:
	{
		if ((((int32_t)V_2) < ((int32_t)p1)))
		{
			goto IL_006e;
		}
	}
	{
		goto IL_00c2;
	}

IL_00a0:
	{
		if ((((uint32_t)p2) != ((uint32_t)2)))
		{
			goto IL_00c2;
		}
	}
	{
		V_3 = 0;
		goto IL_00be;
	}

IL_00a8:
	{
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, V_3);
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, V_3));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_3+1)));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, V_3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, V_3)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_3+1))));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((int32_t)(V_3+1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((int32_t)(V_3+1)))) = (uint8_t)V_0;
		V_3 = ((int32_t)(V_3+2));
	}

IL_00be:
	{
		if ((((int32_t)V_3) < ((int32_t)p1)))
		{
			goto IL_00a8;
		}
	}

IL_00c2:
	{
		return;
	}
}
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.BinaryCommon
extern Il2CppType t876_0_0_22;
FieldInfo t1191_f0_FieldInfo = 
{
	"BinaryHeader", &t876_0_0_22, &t1191_TI, offsetof(t1191_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t637_0_0_17;
FieldInfo t1191_f1_FieldInfo = 
{
	"_typeCodesToType", &t637_0_0_17, &t1191_TI, offsetof(t1191_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_17;
FieldInfo t1191_f2_FieldInfo = 
{
	"_typeCodeMap", &t876_0_0_17, &t1191_TI, offsetof(t1191_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_22;
FieldInfo t1191_f3_FieldInfo = 
{
	"UseReflectionSerialization", &t125_0_0_22, &t1191_TI, offsetof(t1191_SFs, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1191_FIs[] =
{
	&t1191_f0_FieldInfo,
	&t1191_f1_FieldInfo,
	&t1191_f2_FieldInfo,
	&t1191_f3_FieldInfo,
	NULL
};
extern TypeInfo t1191_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6148_MI = 
{
	".cctor", (methodPointerType)&m6148, &t1191_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3208, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
static ParameterInfo t1191_m6149_ParameterInfos[] = 
{
	{"type", 0, 134221583, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1191_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6149_MI = 
{
	"IsPrimitive", (methodPointerType)&m6149, &t1191_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t1191_m6149_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3209, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t1191_m6150_ParameterInfos[] = 
{
	{"code", 0, 134221584, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1191_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6150_MI = 
{
	"GetTypeFromCode", (methodPointerType)&m6150, &t1191_TI, &t131_0_0_0, RuntimeInvoker_t25_t134, t1191_m6150_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3210, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t1191_m6151_ParameterInfos[] = 
{
	{"byteArray", 0, 134221585, &EmptyCustomAttributesCache, &t876_0_0_0},
	{"size", 1, 134221586, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"dataSize", 2, 134221587, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1191_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6151_MI = 
{
	"SwapBytes", (methodPointerType)&m6151, &t1191_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134_t134, t1191_m6151_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 3211, NULL, (methodPointerType)NULL};
static MethodInfo* t1191_MIs[] =
{
	&m6148_MI,
	&m6149_MI,
	&m6150_MI,
	&m6151_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1191_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1191_0_0_0;
extern Il2CppType t1191_1_0_0;
extern TypeInfo t25_TI;
struct t1191;
extern TypeInfo t1191_TI;
TypeInfo t1191_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryCommon", "System.Runtime.Serialization.Formatters.Binary", t1191_MIs, NULL, t1191_FIs, NULL, &t25_TI, NULL, NULL, &t1191_TI, NULL, t1191_VT, &EmptyCustomAttributesCache, &t1191_TI, &t1191_0_0_0, &t1191_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1191), 0, -1, sizeof(t1191_SFs), 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 4, 0, 4, 0, 0, 4, 0, 0};
#include "t1192.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1192_TI;
#include "t1192MD.h"



// Metadata Definition System.Runtime.Serialization.Formatters.Binary.BinaryElement
extern Il2CppType t462_0_0_1542;
FieldInfo t1192_f1_FieldInfo = 
{
	"value__", &t462_0_0_1542, &t1192_TI, offsetof(t1192, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f2_FieldInfo = 
{
	"Header", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f3_FieldInfo = 
{
	"RefTypeObject", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f4_FieldInfo = 
{
	"UntypedRuntimeObject", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f5_FieldInfo = 
{
	"UntypedExternalObject", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f6_FieldInfo = 
{
	"RuntimeObject", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f7_FieldInfo = 
{
	"ExternalObject", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f8_FieldInfo = 
{
	"String", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f9_FieldInfo = 
{
	"GenericArray", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f10_FieldInfo = 
{
	"BoxedPrimitiveTypeValue", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f11_FieldInfo = 
{
	"ObjectReference", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f12_FieldInfo = 
{
	"NullValue", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f13_FieldInfo = 
{
	"End", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f14_FieldInfo = 
{
	"Assembly", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f15_FieldInfo = 
{
	"ArrayFiller8b", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f16_FieldInfo = 
{
	"ArrayFiller32b", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f17_FieldInfo = 
{
	"ArrayOfPrimitiveType", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f18_FieldInfo = 
{
	"ArrayOfObject", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f19_FieldInfo = 
{
	"ArrayOfString", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f20_FieldInfo = 
{
	"Method", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f21_FieldInfo = 
{
	"_Unknown4", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f22_FieldInfo = 
{
	"_Unknown5", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f23_FieldInfo = 
{
	"MethodCall", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_32854;
FieldInfo t1192_f24_FieldInfo = 
{
	"MethodResponse", &t1192_0_0_32854, &t1192_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1192_FIs[] =
{
	&t1192_f1_FieldInfo,
	&t1192_f2_FieldInfo,
	&t1192_f3_FieldInfo,
	&t1192_f4_FieldInfo,
	&t1192_f5_FieldInfo,
	&t1192_f6_FieldInfo,
	&t1192_f7_FieldInfo,
	&t1192_f8_FieldInfo,
	&t1192_f9_FieldInfo,
	&t1192_f10_FieldInfo,
	&t1192_f11_FieldInfo,
	&t1192_f12_FieldInfo,
	&t1192_f13_FieldInfo,
	&t1192_f14_FieldInfo,
	&t1192_f15_FieldInfo,
	&t1192_f16_FieldInfo,
	&t1192_f17_FieldInfo,
	&t1192_f18_FieldInfo,
	&t1192_f19_FieldInfo,
	&t1192_f20_FieldInfo,
	&t1192_f21_FieldInfo,
	&t1192_f22_FieldInfo,
	&t1192_f23_FieldInfo,
	&t1192_f24_FieldInfo,
	NULL
};
static const uint8_t t1192_f2_DefaultValueData = 0;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f2_DefaultValue = 
{
	&t1192_f2_FieldInfo, { (char*)&t1192_f2_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f3_DefaultValueData = 1;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f3_DefaultValue = 
{
	&t1192_f3_FieldInfo, { (char*)&t1192_f3_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f4_DefaultValueData = 2;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f4_DefaultValue = 
{
	&t1192_f4_FieldInfo, { (char*)&t1192_f4_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f5_DefaultValueData = 3;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f5_DefaultValue = 
{
	&t1192_f5_FieldInfo, { (char*)&t1192_f5_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f6_DefaultValueData = 4;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f6_DefaultValue = 
{
	&t1192_f6_FieldInfo, { (char*)&t1192_f6_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f7_DefaultValueData = 5;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f7_DefaultValue = 
{
	&t1192_f7_FieldInfo, { (char*)&t1192_f7_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f8_DefaultValueData = 6;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f8_DefaultValue = 
{
	&t1192_f8_FieldInfo, { (char*)&t1192_f8_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f9_DefaultValueData = 7;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f9_DefaultValue = 
{
	&t1192_f9_FieldInfo, { (char*)&t1192_f9_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f10_DefaultValueData = 8;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f10_DefaultValue = 
{
	&t1192_f10_FieldInfo, { (char*)&t1192_f10_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f11_DefaultValueData = 9;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f11_DefaultValue = 
{
	&t1192_f11_FieldInfo, { (char*)&t1192_f11_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f12_DefaultValueData = 10;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f12_DefaultValue = 
{
	&t1192_f12_FieldInfo, { (char*)&t1192_f12_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f13_DefaultValueData = 11;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f13_DefaultValue = 
{
	&t1192_f13_FieldInfo, { (char*)&t1192_f13_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f14_DefaultValueData = 12;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f14_DefaultValue = 
{
	&t1192_f14_FieldInfo, { (char*)&t1192_f14_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f15_DefaultValueData = 13;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f15_DefaultValue = 
{
	&t1192_f15_FieldInfo, { (char*)&t1192_f15_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f16_DefaultValueData = 14;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f16_DefaultValue = 
{
	&t1192_f16_FieldInfo, { (char*)&t1192_f16_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f17_DefaultValueData = 15;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f17_DefaultValue = 
{
	&t1192_f17_FieldInfo, { (char*)&t1192_f17_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f18_DefaultValueData = 16;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f18_DefaultValue = 
{
	&t1192_f18_FieldInfo, { (char*)&t1192_f18_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f19_DefaultValueData = 17;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f19_DefaultValue = 
{
	&t1192_f19_FieldInfo, { (char*)&t1192_f19_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f20_DefaultValueData = 18;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f20_DefaultValue = 
{
	&t1192_f20_FieldInfo, { (char*)&t1192_f20_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f21_DefaultValueData = 19;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f21_DefaultValue = 
{
	&t1192_f21_FieldInfo, { (char*)&t1192_f21_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f22_DefaultValueData = 20;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f22_DefaultValue = 
{
	&t1192_f22_FieldInfo, { (char*)&t1192_f22_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f23_DefaultValueData = 21;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f23_DefaultValue = 
{
	&t1192_f23_FieldInfo, { (char*)&t1192_f23_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1192_f24_DefaultValueData = 22;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1192_f24_DefaultValue = 
{
	&t1192_f24_FieldInfo, { (char*)&t1192_f24_DefaultValueData, &t462_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1192_FDVs[] = 
{
	&t1192_f2_DefaultValue,
	&t1192_f3_DefaultValue,
	&t1192_f4_DefaultValue,
	&t1192_f5_DefaultValue,
	&t1192_f6_DefaultValue,
	&t1192_f7_DefaultValue,
	&t1192_f8_DefaultValue,
	&t1192_f9_DefaultValue,
	&t1192_f10_DefaultValue,
	&t1192_f11_DefaultValue,
	&t1192_f12_DefaultValue,
	&t1192_f13_DefaultValue,
	&t1192_f14_DefaultValue,
	&t1192_f15_DefaultValue,
	&t1192_f16_DefaultValue,
	&t1192_f17_DefaultValue,
	&t1192_f18_DefaultValue,
	&t1192_f19_DefaultValue,
	&t1192_f20_DefaultValue,
	&t1192_f21_DefaultValue,
	&t1192_f22_DefaultValue,
	&t1192_f23_DefaultValue,
	&t1192_f24_DefaultValue,
	NULL
};
static MethodInfo* t1192_MIs[] =
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
static MethodInfo* t1192_VT[] =
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
static Il2CppInterfaceOffsetPair t1192_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1192_0_0_0;
extern Il2CppType t1192_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t462_TI;
extern TypeInfo t462_TI;
TypeInfo t1192_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryElement", "System.Runtime.Serialization.Formatters.Binary", t1192_MIs, NULL, t1192_FIs, NULL, &t15_TI, NULL, NULL, &t462_TI, NULL, t1192_VT, &EmptyCustomAttributesCache, &t462_TI, &t1192_0_0_0, &t1192_1_0_0, t1192_IOs, NULL, NULL, t1192_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1192)+ sizeof (Il2CppObject), sizeof (uint8_t), sizeof(uint8_t), 0, 0, -1, 256, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 24, 0, 0, 23, 0, 3};
#include "t1193.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1193_TI;
#include "t1193MD.h"



// Metadata Definition System.Runtime.Serialization.Formatters.Binary.TypeTag
extern Il2CppType t462_0_0_1542;
FieldInfo t1193_f1_FieldInfo = 
{
	"value__", &t462_0_0_1542, &t1193_TI, offsetof(t1193, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1193_0_0_32854;
FieldInfo t1193_f2_FieldInfo = 
{
	"PrimitiveType", &t1193_0_0_32854, &t1193_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1193_0_0_32854;
FieldInfo t1193_f3_FieldInfo = 
{
	"String", &t1193_0_0_32854, &t1193_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1193_0_0_32854;
FieldInfo t1193_f4_FieldInfo = 
{
	"ObjectType", &t1193_0_0_32854, &t1193_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1193_0_0_32854;
FieldInfo t1193_f5_FieldInfo = 
{
	"RuntimeType", &t1193_0_0_32854, &t1193_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1193_0_0_32854;
FieldInfo t1193_f6_FieldInfo = 
{
	"GenericType", &t1193_0_0_32854, &t1193_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1193_0_0_32854;
FieldInfo t1193_f7_FieldInfo = 
{
	"ArrayOfObject", &t1193_0_0_32854, &t1193_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1193_0_0_32854;
FieldInfo t1193_f8_FieldInfo = 
{
	"ArrayOfString", &t1193_0_0_32854, &t1193_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1193_0_0_32854;
FieldInfo t1193_f9_FieldInfo = 
{
	"ArrayOfPrimitiveType", &t1193_0_0_32854, &t1193_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1193_FIs[] =
{
	&t1193_f1_FieldInfo,
	&t1193_f2_FieldInfo,
	&t1193_f3_FieldInfo,
	&t1193_f4_FieldInfo,
	&t1193_f5_FieldInfo,
	&t1193_f6_FieldInfo,
	&t1193_f7_FieldInfo,
	&t1193_f8_FieldInfo,
	&t1193_f9_FieldInfo,
	NULL
};
static const uint8_t t1193_f2_DefaultValueData = 0;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1193_f2_DefaultValue = 
{
	&t1193_f2_FieldInfo, { (char*)&t1193_f2_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1193_f3_DefaultValueData = 1;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1193_f3_DefaultValue = 
{
	&t1193_f3_FieldInfo, { (char*)&t1193_f3_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1193_f4_DefaultValueData = 2;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1193_f4_DefaultValue = 
{
	&t1193_f4_FieldInfo, { (char*)&t1193_f4_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1193_f5_DefaultValueData = 3;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1193_f5_DefaultValue = 
{
	&t1193_f5_FieldInfo, { (char*)&t1193_f5_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1193_f6_DefaultValueData = 4;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1193_f6_DefaultValue = 
{
	&t1193_f6_FieldInfo, { (char*)&t1193_f6_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1193_f7_DefaultValueData = 5;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1193_f7_DefaultValue = 
{
	&t1193_f7_FieldInfo, { (char*)&t1193_f7_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1193_f8_DefaultValueData = 6;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1193_f8_DefaultValue = 
{
	&t1193_f8_FieldInfo, { (char*)&t1193_f8_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1193_f9_DefaultValueData = 7;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1193_f9_DefaultValue = 
{
	&t1193_f9_FieldInfo, { (char*)&t1193_f9_DefaultValueData, &t462_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1193_FDVs[] = 
{
	&t1193_f2_DefaultValue,
	&t1193_f3_DefaultValue,
	&t1193_f4_DefaultValue,
	&t1193_f5_DefaultValue,
	&t1193_f6_DefaultValue,
	&t1193_f7_DefaultValue,
	&t1193_f8_DefaultValue,
	&t1193_f9_DefaultValue,
	NULL
};
static MethodInfo* t1193_MIs[] =
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
static MethodInfo* t1193_VT[] =
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
static Il2CppInterfaceOffsetPair t1193_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1193_0_0_0;
extern Il2CppType t1193_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t462_TI;
extern TypeInfo t462_TI;
TypeInfo t1193_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeTag", "System.Runtime.Serialization.Formatters.Binary", t1193_MIs, NULL, t1193_FIs, NULL, &t15_TI, NULL, NULL, &t462_TI, NULL, t1193_VT, &EmptyCustomAttributesCache, &t462_TI, &t1193_0_0_0, &t1193_1_0_0, t1193_IOs, NULL, NULL, t1193_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1193)+ sizeof (Il2CppObject), sizeof (uint8_t), sizeof(uint8_t), 0, 0, -1, 256, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 9, 0, 0, 23, 0, 3};
#include "t1194.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1194_TI;
#include "t1194MD.h"



// Metadata Definition System.Runtime.Serialization.Formatters.Binary.MethodFlags
extern Il2CppType t134_0_0_1542;
FieldInfo t1194_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1194_TI, offsetof(t1194, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1194_0_0_32854;
FieldInfo t1194_f2_FieldInfo = 
{
	"NoArguments", &t1194_0_0_32854, &t1194_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1194_0_0_32854;
FieldInfo t1194_f3_FieldInfo = 
{
	"PrimitiveArguments", &t1194_0_0_32854, &t1194_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1194_0_0_32854;
FieldInfo t1194_f4_FieldInfo = 
{
	"ArgumentsInSimpleArray", &t1194_0_0_32854, &t1194_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1194_0_0_32854;
FieldInfo t1194_f5_FieldInfo = 
{
	"ArgumentsInMultiArray", &t1194_0_0_32854, &t1194_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1194_0_0_32854;
FieldInfo t1194_f6_FieldInfo = 
{
	"ExcludeLogicalCallContext", &t1194_0_0_32854, &t1194_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1194_0_0_32854;
FieldInfo t1194_f7_FieldInfo = 
{
	"IncludesLogicalCallContext", &t1194_0_0_32854, &t1194_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1194_0_0_32854;
FieldInfo t1194_f8_FieldInfo = 
{
	"IncludesSignature", &t1194_0_0_32854, &t1194_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1194_0_0_32854;
FieldInfo t1194_f9_FieldInfo = 
{
	"FormatMask", &t1194_0_0_32854, &t1194_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1194_0_0_32854;
FieldInfo t1194_f10_FieldInfo = 
{
	"GenericArguments", &t1194_0_0_32854, &t1194_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1194_0_0_32854;
FieldInfo t1194_f11_FieldInfo = 
{
	"NeedsInfoArrayMask", &t1194_0_0_32854, &t1194_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1194_FIs[] =
{
	&t1194_f1_FieldInfo,
	&t1194_f2_FieldInfo,
	&t1194_f3_FieldInfo,
	&t1194_f4_FieldInfo,
	&t1194_f5_FieldInfo,
	&t1194_f6_FieldInfo,
	&t1194_f7_FieldInfo,
	&t1194_f8_FieldInfo,
	&t1194_f9_FieldInfo,
	&t1194_f10_FieldInfo,
	&t1194_f11_FieldInfo,
	NULL
};
static const int32_t t1194_f2_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1194_f2_DefaultValue = 
{
	&t1194_f2_FieldInfo, { (char*)&t1194_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1194_f3_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1194_f3_DefaultValue = 
{
	&t1194_f3_FieldInfo, { (char*)&t1194_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1194_f4_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1194_f4_DefaultValue = 
{
	&t1194_f4_FieldInfo, { (char*)&t1194_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1194_f5_DefaultValueData = 8;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1194_f5_DefaultValue = 
{
	&t1194_f5_FieldInfo, { (char*)&t1194_f5_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1194_f6_DefaultValueData = 16;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1194_f6_DefaultValue = 
{
	&t1194_f6_FieldInfo, { (char*)&t1194_f6_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1194_f7_DefaultValueData = 64;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1194_f7_DefaultValue = 
{
	&t1194_f7_FieldInfo, { (char*)&t1194_f7_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1194_f8_DefaultValueData = 128;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1194_f8_DefaultValue = 
{
	&t1194_f8_FieldInfo, { (char*)&t1194_f8_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1194_f9_DefaultValueData = 15;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1194_f9_DefaultValue = 
{
	&t1194_f9_FieldInfo, { (char*)&t1194_f9_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1194_f10_DefaultValueData = 32768;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1194_f10_DefaultValue = 
{
	&t1194_f10_FieldInfo, { (char*)&t1194_f10_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1194_f11_DefaultValueData = 32972;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1194_f11_DefaultValue = 
{
	&t1194_f11_FieldInfo, { (char*)&t1194_f11_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1194_FDVs[] = 
{
	&t1194_f2_DefaultValue,
	&t1194_f3_DefaultValue,
	&t1194_f4_DefaultValue,
	&t1194_f5_DefaultValue,
	&t1194_f6_DefaultValue,
	&t1194_f7_DefaultValue,
	&t1194_f8_DefaultValue,
	&t1194_f9_DefaultValue,
	&t1194_f10_DefaultValue,
	&t1194_f11_DefaultValue,
	NULL
};
static MethodInfo* t1194_MIs[] =
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
static MethodInfo* t1194_VT[] =
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
static Il2CppInterfaceOffsetPair t1194_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1194_0_0_0;
extern Il2CppType t1194_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
TypeInfo t1194_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodFlags", "System.Runtime.Serialization.Formatters.Binary", t1194_MIs, NULL, t1194_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1194_VT, &EmptyCustomAttributesCache, &t134_TI, &t1194_0_0_0, &t1194_1_0_0, t1194_IOs, NULL, NULL, t1194_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1194)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 256, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 11, 0, 0, 23, 0, 3};
#include "t1195.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1195_TI;
#include "t1195MD.h"



// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
extern Il2CppType t462_0_0_1542;
FieldInfo t1195_f1_FieldInfo = 
{
	"value__", &t462_0_0_1542, &t1195_TI, offsetof(t1195, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1195_0_0_32854;
FieldInfo t1195_f2_FieldInfo = 
{
	"Null", &t1195_0_0_32854, &t1195_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1195_0_0_32854;
FieldInfo t1195_f3_FieldInfo = 
{
	"PrimitiveType", &t1195_0_0_32854, &t1195_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1195_0_0_32854;
FieldInfo t1195_f4_FieldInfo = 
{
	"ObjectType", &t1195_0_0_32854, &t1195_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1195_0_0_32854;
FieldInfo t1195_f5_FieldInfo = 
{
	"Exception", &t1195_0_0_32854, &t1195_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1195_FIs[] =
{
	&t1195_f1_FieldInfo,
	&t1195_f2_FieldInfo,
	&t1195_f3_FieldInfo,
	&t1195_f4_FieldInfo,
	&t1195_f5_FieldInfo,
	NULL
};
static const uint8_t t1195_f2_DefaultValueData = 2;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1195_f2_DefaultValue = 
{
	&t1195_f2_FieldInfo, { (char*)&t1195_f2_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1195_f3_DefaultValueData = 8;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1195_f3_DefaultValue = 
{
	&t1195_f3_FieldInfo, { (char*)&t1195_f3_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1195_f4_DefaultValueData = 16;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1195_f4_DefaultValue = 
{
	&t1195_f4_FieldInfo, { (char*)&t1195_f4_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1195_f5_DefaultValueData = 32;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1195_f5_DefaultValue = 
{
	&t1195_f5_FieldInfo, { (char*)&t1195_f5_DefaultValueData, &t462_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1195_FDVs[] = 
{
	&t1195_f2_DefaultValue,
	&t1195_f3_DefaultValue,
	&t1195_f4_DefaultValue,
	&t1195_f5_DefaultValue,
	NULL
};
static MethodInfo* t1195_MIs[] =
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
static MethodInfo* t1195_VT[] =
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
static Il2CppInterfaceOffsetPair t1195_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1195_0_0_0;
extern Il2CppType t1195_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t462_TI;
extern TypeInfo t462_TI;
TypeInfo t1195_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReturnTypeTag", "System.Runtime.Serialization.Formatters.Binary", t1195_MIs, NULL, t1195_FIs, NULL, &t15_TI, NULL, NULL, &t462_TI, NULL, t1195_VT, &EmptyCustomAttributesCache, &t462_TI, &t1195_0_0_0, &t1195_1_0_0, t1195_IOs, NULL, NULL, t1195_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1195)+ sizeof (Il2CppObject), sizeof (uint8_t), sizeof(uint8_t), 0, 0, -1, 256, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1185_TI;

#include "t1196.h"
#include "t1199.h"
#include "t1198.h"
#include "t1002.h"
#include "t1200.h"
#include "t1001.h"
#include "t1205.h"
#include "t165.h"
#include "t1223.h"
extern TypeInfo t1185_TI;
extern TypeInfo t824_TI;
extern TypeInfo t165_TI;
extern TypeInfo t1002_TI;
extern TypeInfo t125_TI;
extern TypeInfo t817_TI;
extern TypeInfo t1223_TI;
extern TypeInfo t1001_TI;
extern TypeInfo t134_TI;
extern TypeInfo t1205_TI;
extern TypeInfo t1200_TI;
extern TypeInfo t25_TI;
extern TypeInfo t1153_TI;
extern TypeInfo t1150_TI;
extern TypeInfo t462_TI;
#include "t165MD.h"
#include "t1002MD.h"
#include "t1223MD.h"
#include "t1001MD.h"
#include "t1201MD.h"
#include "t1205MD.h"
#include "t1200MD.h"
extern MethodInfo m452_MI;
extern MethodInfo m6154_MI;
extern MethodInfo m6283_MI;
extern MethodInfo m6161_MI;
extern MethodInfo m489_MI;
extern MethodInfo m8253_MI;
extern MethodInfo m8254_MI;
extern MethodInfo m6257_MI;
extern MethodInfo m5143_MI;
extern MethodInfo m6162_MI;
extern MethodInfo m5148_MI;
extern MethodInfo m6163_MI;
extern MethodInfo m6164_MI;
extern MethodInfo m6167_MI;
extern MethodInfo m6169_MI;
extern MethodInfo m7785_MI;
extern MethodInfo m5154_MI;
extern MethodInfo m5159_MI;


extern MethodInfo m6152_MI;
 void m6152 (t1185 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6152_MI);
	{
		__this->f4 = 1;
		__this->f5 = 3;
		m452(__this, &m452_MI);
		t25 * L_0 = m6154(NULL, &m6154_MI);
		__this->f3 = L_0;
		t824  L_1 = {0};
		m6283(&L_1, ((int32_t)255), &m6283_MI);
		__this->f2 = L_1;
		return;
	}
}
extern MethodInfo m6153_MI;
 void m6153 (t1185 * __this, t25 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6153_MI);
	{
		__this->f4 = 1;
		__this->f5 = 3;
		m452(__this, &m452_MI);
		__this->f3 = p0;
		__this->f2 = p1;
		return;
	}
}
extern MethodInfo m6154_MI;
 t25 * m6154 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6154_MI);
	{
		return (((t1185_SFs*)InitializedTypeInfo(&t1185_TI)->static_fields)->f6);
	}
}
extern MethodInfo m6155_MI;
 void m6155 (t1185 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6155_MI);
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m6156_MI;
 t1196 * m6156 (t1185 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6156_MI);
	{
		t1196 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m6157_MI;
 t824  m6157 (t1185 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6157_MI);
	{
		t824  L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m6158_MI;
 t25 * m6158 (t1185 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6158_MI);
	{
		t25 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m6159_MI;
 int32_t m6159 (t1185 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6159_MI);
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m6160_MI;
 t25 * m6160 (t1185 * __this, t1002 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6160_MI);
	{
		t25 * L_0 = m6161(__this, p0, (t1200 *)NULL, &m6161_MI);
		return L_0;
	}
}
extern MethodInfo m6161_MI;
 t25 * m6161 (t1185 * __this, t1002 * p0, t1200 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6161_MI);
	t1001 * V_0 = {0};
	bool V_1 = false;
	uint8_t V_2 = {0};
	t1205 * V_3 = {0};
	t25 * V_4 = {0};
	t1153* V_5 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral1008, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		NullCheck(p0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8253_MI, p0);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		NullCheck(p0);
		int64_t L_2 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m8254_MI, p0);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		t1223 * L_3 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_3, (t27*) &_stringLiteral1009, &m6257_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t1001 * L_4 = (t1001 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1001_TI));
		m5143(L_4, p0, &m5143_MI);
		V_0 = L_4;
		m6162(__this, V_0, (&V_1), &m6162_MI);
		NullCheck(V_0);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5148_MI, V_0);
		V_2 = (((uint8_t)L_5));
		if ((((uint32_t)V_2) != ((uint32_t)((int32_t)21))))
		{
			goto IL_0051;
		}
	}
	{
		t25 * L_6 = m6163(NULL, V_2, V_0, V_1, p1, __this, &m6163_MI);
		return L_6;
	}

IL_0051:
	{
		if ((((uint32_t)V_2) != ((uint32_t)((int32_t)22))))
		{
			goto IL_0062;
		}
	}
	{
		t25 * L_7 = m6164(NULL, V_2, V_0, V_1, p1, (t25 *)NULL, __this, &m6164_MI);
		return L_7;
	}

IL_0062:
	{
		t1205 * L_8 = (t1205 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1205_TI));
		m6167(L_8, __this, &m6167_MI);
		V_3 = L_8;
		NullCheck(V_3);
		m6169(V_3, V_2, V_0, V_1, (&V_4), (&V_5), &m6169_MI);
		if (!p1)
		{
			goto IL_0082;
		}
	}
	{
		NullCheck(p1);
		VirtFuncInvoker1< t25 *, t1153* >::Invoke(&m7785_MI, p1, V_5);
	}

IL_0082:
	{
		return V_4;
	}
}
extern MethodInfo m6162_MI;
 void m6162 (t1185 * __this, t1001 * p0, bool* p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6162_MI);
	int32_t V_0 = 0;
	{
		NullCheck(p0);
		VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p0);
		NullCheck(p0);
		VirtFuncInvoker0< int32_t >::Invoke(&m5159_MI, p0);
		NullCheck(p0);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5159_MI, p0);
		V_0 = L_0;
		*((int8_t*)(p1)) = (int8_t)((((int32_t)V_0) == ((int32_t)2))? 1 : 0);
		NullCheck(p0);
		VirtFuncInvoker0< int32_t >::Invoke(&m5159_MI, p0);
		NullCheck(p0);
		VirtFuncInvoker0< int32_t >::Invoke(&m5159_MI, p0);
		return;
	}
}
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
extern Il2CppType t1197_0_0_1;
FieldInfo t1185_f0_FieldInfo = 
{
	"assembly_format", &t1197_0_0_1, &t1185_TI, offsetof(t1185, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1196_0_0_1;
FieldInfo t1185_f1_FieldInfo = 
{
	"binder", &t1196_0_0_1, &t1185_TI, offsetof(t1185, f1), &EmptyCustomAttributesCache};
extern Il2CppType t824_0_0_1;
FieldInfo t1185_f2_FieldInfo = 
{
	"context", &t824_0_0_1, &t1185_TI, offsetof(t1185, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1160_0_0_1;
FieldInfo t1185_f3_FieldInfo = 
{
	"surrogate_selector", &t1160_0_0_1, &t1185_TI, offsetof(t1185, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1198_0_0_1;
FieldInfo t1185_f4_FieldInfo = 
{
	"type_format", &t1198_0_0_1, &t1185_TI, offsetof(t1185, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1199_0_0_1;
FieldInfo t1185_f5_FieldInfo = 
{
	"filter_level", &t1199_0_0_1, &t1185_TI, offsetof(t1185, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1160_0_0_17;
extern CustomAttributesCache t1185__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField;
FieldInfo t1185_f6_FieldInfo = 
{
	"<DefaultSurrogateSelector>k__BackingField", &t1160_0_0_17, &t1185_TI, offsetof(t1185_SFs, f6), &t1185__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField};
static FieldInfo* t1185_FIs[] =
{
	&t1185_f0_FieldInfo,
	&t1185_f1_FieldInfo,
	&t1185_f2_FieldInfo,
	&t1185_f3_FieldInfo,
	&t1185_f4_FieldInfo,
	&t1185_f5_FieldInfo,
	&t1185_f6_FieldInfo,
	NULL
};
extern MethodInfo m6154_MI;
static PropertyInfo t1185____DefaultSurrogateSelector_PropertyInfo = 
{
	&t1185_TI, "DefaultSurrogateSelector", &m6154_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6155_MI;
static PropertyInfo t1185____AssemblyFormat_PropertyInfo = 
{
	&t1185_TI, "AssemblyFormat", NULL, &m6155_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6156_MI;
static PropertyInfo t1185____Binder_PropertyInfo = 
{
	&t1185_TI, "Binder", &m6156_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6157_MI;
static PropertyInfo t1185____Context_PropertyInfo = 
{
	&t1185_TI, "Context", &m6157_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6158_MI;
static PropertyInfo t1185____SurrogateSelector_PropertyInfo = 
{
	&t1185_TI, "SurrogateSelector", &m6158_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6159_MI;
static PropertyInfo t1185____FilterLevel_PropertyInfo = 
{
	&t1185_TI, "FilterLevel", &m6159_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1185_PIs[] =
{
	&t1185____DefaultSurrogateSelector_PropertyInfo,
	&t1185____AssemblyFormat_PropertyInfo,
	&t1185____Binder_PropertyInfo,
	&t1185____Context_PropertyInfo,
	&t1185____SurrogateSelector_PropertyInfo,
	&t1185____FilterLevel_PropertyInfo,
	NULL
};
extern TypeInfo t1185_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6152_MI = 
{
	".ctor", (methodPointerType)&m6152, &t1185_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3212, NULL, (methodPointerType)NULL};
extern Il2CppType t1160_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1185_m6153_ParameterInfos[] = 
{
	{"selector", 0, 134221588, &EmptyCustomAttributesCache, &t1160_0_0_0},
	{"context", 1, 134221589, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1185_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m6153_MI = 
{
	".ctor", (methodPointerType)&m6153, &t1185_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1185_m6153_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3213, NULL, (methodPointerType)NULL};
extern TypeInfo t1185_TI;
extern Il2CppType t1160_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1185__CustomAttributeCache_m6154;
MethodInfo m6154_MI = 
{
	"get_DefaultSurrogateSelector", (methodPointerType)&m6154, &t1185_TI, &t1160_0_0_0, RuntimeInvoker_t25, NULL, &t1185__CustomAttributeCache_m6154, 2198, 0, 255, 0, false, false, 3214, NULL, (methodPointerType)NULL};
extern Il2CppType t1197_0_0_0;
static ParameterInfo t1185_m6155_ParameterInfos[] = 
{
	{"value", 0, 134221590, &EmptyCustomAttributesCache, &t1197_0_0_0},
};
extern TypeInfo t1185_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6155_MI = 
{
	"set_AssemblyFormat", (methodPointerType)&m6155, &t1185_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t1185_m6155_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3215, NULL, (methodPointerType)NULL};
extern TypeInfo t1185_TI;
extern Il2CppType t1196_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6156_MI = 
{
	"get_Binder", (methodPointerType)&m6156, &t1185_TI, &t1196_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 3216, NULL, (methodPointerType)NULL};
extern TypeInfo t1185_TI;
extern Il2CppType t824_0_0_0;
extern void* RuntimeInvoker_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m6157_MI = 
{
	"get_Context", (methodPointerType)&m6157, &t1185_TI, &t824_0_0_0, RuntimeInvoker_t824, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 3217, NULL, (methodPointerType)NULL};
extern TypeInfo t1185_TI;
extern Il2CppType t1160_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6158_MI = 
{
	"get_SurrogateSelector", (methodPointerType)&m6158, &t1185_TI, &t1160_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 3218, NULL, (methodPointerType)NULL};
extern TypeInfo t1185_TI;
extern Il2CppType t1199_0_0_0;
extern void* RuntimeInvoker_t1199 (MethodInfo* method, void* obj, void** args);
MethodInfo m6159_MI = 
{
	"get_FilterLevel", (methodPointerType)&m6159, &t1185_TI, &t1199_0_0_0, RuntimeInvoker_t1199, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3219, NULL, (methodPointerType)NULL};
extern Il2CppType t1002_0_0_0;
static ParameterInfo t1185_m6160_ParameterInfos[] = 
{
	{"serializationStream", 0, 134221591, &EmptyCustomAttributesCache, &t1002_0_0_0},
};
extern TypeInfo t1185_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6160_MI = 
{
	"Deserialize", (methodPointerType)&m6160, &t1185_TI, &t25_0_0_0, RuntimeInvoker_t25_t25, t1185_m6160_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 1, false, false, 3220, NULL, (methodPointerType)NULL};
extern Il2CppType t1002_0_0_0;
extern Il2CppType t1200_0_0_0;
static ParameterInfo t1185_m6161_ParameterInfos[] = 
{
	{"serializationStream", 0, 134221592, &EmptyCustomAttributesCache, &t1002_0_0_0},
	{"handler", 1, 134221593, &EmptyCustomAttributesCache, &t1200_0_0_0},
};
extern TypeInfo t1185_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6161_MI = 
{
	"NoCheckDeserialize", (methodPointerType)&m6161, &t1185_TI, &t25_0_0_0, RuntimeInvoker_t25_t25_t25, t1185_m6161_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 3221, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t125_1_0_0;
static ParameterInfo t1185_m6162_ParameterInfos[] = 
{
	{"reader", 0, 134221594, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"hasHeaders", 1, 134221595, &EmptyCustomAttributesCache, &t125_1_0_0},
};
extern TypeInfo t1185_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m6162_MI = 
{
	"ReadBinaryHeader", (methodPointerType)&m6162, &t1185_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t453, t1185_m6162_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 3222, NULL, (methodPointerType)NULL};
static MethodInfo* t1185_MIs[] =
{
	&m6152_MI,
	&m6153_MI,
	&m6154_MI,
	&m6155_MI,
	&m6156_MI,
	&m6157_MI,
	&m6158_MI,
	&m6159_MI,
	&m6160_MI,
	&m6161_MI,
	&m6162_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6156_MI;
extern MethodInfo m6157_MI;
extern MethodInfo m6158_MI;
extern MethodInfo m6160_MI;
static MethodInfo* t1185_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6156_MI,
	&m6157_MI,
	&m6158_MI,
	&m6160_MI,
};
extern TypeInfo t1641_TI;
extern TypeInfo t1642_TI;
static TypeInfo* t1185_ITIs[] = 
{
	&t1641_TI,
	&t1642_TI,
};
extern TypeInfo t1641_TI;
extern TypeInfo t1642_TI;
static Il2CppInterfaceOffsetPair t1185_IOs[] = 
{
	{ &t1641_TI, 4},
	{ &t1642_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1185_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t152_TI;
extern MethodInfo m475_MI;
void t1185_CustomAttributesCacheGenerator_U3CDefaultSurrogateSelectorU3Ek__BackingField(CustomAttributesCache* cache)
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
void t1185_CustomAttributesCacheGenerator_m6154(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1185__CustomAttributeCache = {
1,
NULL,
&t1185_CustomAttributesCacheGenerator
};
CustomAttributesCache t1185__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField = {
1,
NULL,
&t1185_CustomAttributesCacheGenerator_U3CDefaultSurrogateSelectorU3Ek__BackingField
};
CustomAttributesCache t1185__CustomAttributeCache_m6154 = {
1,
NULL,
&t1185_CustomAttributesCacheGenerator_m6154
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1185_0_0_0;
extern Il2CppType t1185_1_0_0;
extern TypeInfo t25_TI;
struct t1185;
extern TypeInfo t1185_TI;
extern CustomAttributesCache t1185__CustomAttributeCache;
extern CustomAttributesCache t1185__CustomAttributeCache_U3CDefaultSurrogateSelectorU3Ek__BackingField;
extern CustomAttributesCache t1185__CustomAttributeCache_m6154;
TypeInfo t1185_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BinaryFormatter", "System.Runtime.Serialization.Formatters.Binary", t1185_MIs, t1185_PIs, t1185_FIs, NULL, &t25_TI, NULL, NULL, &t1185_TI, t1185_ITIs, t1185_VT, &t1185__CustomAttributeCache, &t1185_TI, &t1185_0_0_0, &t1185_1_0_0, t1185_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1185), 0, -1, sizeof(t1185_SFs), 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 11, 6, 7, 0, 0, 8, 2, 2};
#include "t1201.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1201_TI;

extern TypeInfo t1192_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1223_TI;
extern TypeInfo t1001_TI;
extern TypeInfo t134_TI;
extern TypeInfo t462_TI;
extern TypeInfo t176_TI;
extern TypeInfo t158_TI;
extern TypeInfo t25_TI;
extern TypeInfo t1191_TI;
extern TypeInfo t1205_TI;
extern TypeInfo t637_TI;
extern TypeInfo t131_TI;
extern TypeInfo t1200_TI;
extern TypeInfo t1153_TI;
extern TypeInfo t1150_TI;
extern TypeInfo t1146_TI;
extern TypeInfo t944_TI;
extern TypeInfo t846_TI;
extern TypeInfo t123_TI;
extern TypeInfo t168_TI;
extern TypeInfo t1151_TI;
extern TypeInfo t1164_TI;
#include "t1150MD.h"
extern MethodInfo m1867_MI;
extern MethodInfo m6257_MI;
extern MethodInfo m5159_MI;
extern MethodInfo m5154_MI;
extern MethodInfo m5162_MI;
extern MethodInfo m5165_MI;
extern MethodInfo m6150_MI;
extern MethodInfo m6193_MI;
extern MethodInfo m6167_MI;
extern MethodInfo m6168_MI;
extern MethodInfo m7785_MI;
extern MethodInfo m5970_MI;
extern MethodInfo m5978_MI;
extern MethodInfo m5989_MI;
extern MethodInfo m4878_MI;
extern MethodInfo m4879_MI;
extern MethodInfo m8237_MI;
extern MethodInfo m6044_MI;
extern MethodInfo m6043_MI;
extern MethodInfo m6051_MI;


extern MethodInfo m6163_MI;
 t25 * m6163 (t25 * __this, uint8_t p0, t1001 * p1, bool p2, t1200 * p3, t1185 * p4, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6163_MI);
	int32_t V_0 = {0};
	t27* V_1 = {0};
	t27* V_2 = {0};
	t158* V_3 = {0};
	t25 * V_4 = {0};
	t25 * V_5 = {0};
	t158* V_6 = {0};
	t1153* V_7 = {0};
	t637* V_8 = {0};
	uint32_t V_9 = 0;
	int32_t V_10 = 0;
	t131 * V_11 = {0};
	t1205 * V_12 = {0};
	t25 * V_13 = {0};
	t158* V_14 = {0};
	int32_t V_15 = 0;
	t27* V_16 = {0};
	t1153* V_17 = {0};
	t1146 * V_18 = {0};
	t944  V_19 = {0};
	t158* V_20 = {0};
	int32_t V_21 = 0;
	{
		if ((((int32_t)p0) == ((int32_t)((int32_t)21))))
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t1192_TI), &L_0);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_2 = m1867(NULL, (t27*) &_stringLiteral1010, L_1, &m1867_MI);
		t1223 * L_3 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_3, L_2, &m6257_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_001b:
	{
		NullCheck(p1);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5159_MI, p1);
		V_0 = L_4;
		NullCheck(p1);
		uint8_t L_5 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p1);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)18))))
		{
			goto IL_0037;
		}
	}
	{
		t1223 * L_6 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_6, (t27*) &_stringLiteral1011, &m6257_MI);
		il2cpp_codegen_raise_exception (L_6);
	}

IL_0037:
	{
		NullCheck(p1);
		t27* L_7 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5162_MI, p1);
		V_1 = L_7;
		NullCheck(p1);
		uint8_t L_8 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p1);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)18))))
		{
			goto IL_0053;
		}
	}
	{
		t1223 * L_9 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_9, (t27*) &_stringLiteral1011, &m6257_MI);
		il2cpp_codegen_raise_exception (L_9);
	}

IL_0053:
	{
		NullCheck(p1);
		t27* L_10 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5162_MI, p1);
		V_2 = L_10;
		V_3 = (t158*)NULL;
		V_4 = NULL;
		V_5 = NULL;
		V_6 = (t158*)NULL;
		V_7 = (t1153*)NULL;
		V_8 = (t637*)NULL;
		if ((((int32_t)((int32_t)(V_0&2))) <= ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		NullCheck(p1);
		uint32_t L_11 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&m5165_MI, p1);
		V_9 = L_11;
		V_3 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), (((uintptr_t)V_9))));
		V_10 = 0;
		goto IL_00a6;
	}

IL_0087:
	{
		NullCheck(p1);
		uint8_t L_12 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1191_TI));
		t131 * L_13 = m6150(NULL, L_12, &m6150_MI);
		V_11 = L_13;
		t25 * L_14 = m6193(NULL, p1, V_11, &m6193_MI);
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, V_10);
		ArrayElementTypeCheck (V_3, L_14);
		*((t25 **)(t25 **)SZArrayLdElema(V_3, V_10)) = (t25 *)L_14;
		V_10 = ((int32_t)(V_10+1));
	}

IL_00a6:
	{
		if ((((int64_t)(((int64_t)V_10))) < ((int64_t)(((uint64_t)V_9)))))
		{
			goto IL_0087;
		}
	}

IL_00ae:
	{
		if ((((int32_t)((int32_t)(V_0&((int32_t)32972)))) <= ((int32_t)0)))
		{
			goto IL_016b;
		}
	}
	{
		t1205 * L_15 = (t1205 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1205_TI));
		m6167(L_15, p4, &m6167_MI);
		V_12 = L_15;
		NullCheck(V_12);
		m6168(V_12, p1, p2, (&V_13), (&V_7), &m6168_MI);
		V_14 = ((t158*)Castclass(V_13, InitializedTypeInfo(&t158_TI)));
		if ((((int32_t)((int32_t)(V_0&4))) <= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		V_3 = V_14;
		goto IL_0169;
	}

IL_00e8:
	{
		V_15 = 0;
		if ((((int32_t)((int32_t)(V_0&8))) <= ((int32_t)0)))
		{
			goto IL_0111;
		}
	}
	{
		NullCheck(V_14);
		if ((((int32_t)(((int32_t)(((t122 *)V_14)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_010a;
		}
	}
	{
		int32_t L_16 = V_15;
		V_15 = ((int32_t)(L_16+1));
		NullCheck(V_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_14, L_16);
		V_3 = ((t158*)Castclass((*(t25 **)(t25 **)SZArrayLdElema(V_14, L_16)), InitializedTypeInfo(&t158_TI)));
		goto IL_0111;
	}

IL_010a:
	{
		V_3 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), 0));
	}

IL_0111:
	{
		if ((((int32_t)((int32_t)(V_0&((int32_t)32768)))) <= ((int32_t)0)))
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_17 = V_15;
		V_15 = ((int32_t)(L_17+1));
		NullCheck(V_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_14, L_17);
		V_8 = ((t637*)Castclass((*(t25 **)(t25 **)SZArrayLdElema(V_14, L_17)), InitializedTypeInfo(&t637_TI)));
	}

IL_012c:
	{
		if ((((int32_t)((int32_t)(V_0&((int32_t)128)))) <= ((int32_t)0)))
		{
			goto IL_0142;
		}
	}
	{
		int32_t L_18 = V_15;
		V_15 = ((int32_t)(L_18+1));
		NullCheck(V_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_14, L_18);
		V_4 = (*(t25 **)(t25 **)SZArrayLdElema(V_14, L_18));
	}

IL_0142:
	{
		if ((((int32_t)((int32_t)(V_0&((int32_t)64)))) <= ((int32_t)0)))
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_19 = V_15;
		V_15 = ((int32_t)(L_19+1));
		NullCheck(V_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_14, L_19);
		V_5 = (*(t25 **)(t25 **)SZArrayLdElema(V_14, L_19));
	}

IL_0155:
	{
		NullCheck(V_14);
		if ((((int32_t)V_15) >= ((int32_t)(((int32_t)(((t122 *)V_14)->max_length))))))
		{
			goto IL_0169;
		}
	}
	{
		NullCheck(V_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_14, V_15);
		V_6 = ((t158*)Castclass((*(t25 **)(t25 **)SZArrayLdElema(V_14, V_15)), InitializedTypeInfo(&t158_TI)));
	}

IL_0169:
	{
		goto IL_0172;
	}

IL_016b:
	{
		NullCheck(p1);
		VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p1);
	}

IL_0172:
	{
		if (V_3)
		{
			goto IL_017c;
		}
	}
	{
		V_3 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), 0));
	}

IL_017c:
	{
		V_16 = (t27*)NULL;
		if (!p3)
		{
			goto IL_0191;
		}
	}
	{
		NullCheck(p3);
		t25 * L_20 = (t25 *)VirtFuncInvoker1< t25 *, t1153* >::Invoke(&m7785_MI, p3, V_7);
		V_16 = ((t27*)IsInst(L_20, (&t27_TI)));
	}

IL_0191:
	{
		V_17 = ((t1153*)SZArrayNew(InitializedTypeInfo(&t1153_TI), 7));
		t1150 * L_21 = (t1150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1150_TI));
		m5970(L_21, (t27*) &_stringLiteral968, V_1, &m5970_MI);
		NullCheck(V_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_17, 0);
		ArrayElementTypeCheck (V_17, L_21);
		*((t1150 **)(t1150 **)SZArrayLdElema(V_17, 0)) = (t1150 *)L_21;
		t1150 * L_22 = (t1150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1150_TI));
		m5970(L_22, (t27*) &_stringLiteral970, V_4, &m5970_MI);
		NullCheck(V_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_17, 1);
		ArrayElementTypeCheck (V_17, L_22);
		*((t1150 **)(t1150 **)SZArrayLdElema(V_17, 1)) = (t1150 *)L_22;
		t1150 * L_23 = (t1150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1150_TI));
		m5970(L_23, (t27*) &_stringLiteral969, V_2, &m5970_MI);
		NullCheck(V_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_17, 2);
		ArrayElementTypeCheck (V_17, L_23);
		*((t1150 **)(t1150 **)SZArrayLdElema(V_17, 2)) = (t1150 *)L_23;
		t1150 * L_24 = (t1150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1150_TI));
		m5970(L_24, (t27*) &_stringLiteral971, (t25 *)(t25 *)V_3, &m5970_MI);
		NullCheck(V_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_17, 3);
		ArrayElementTypeCheck (V_17, L_24);
		*((t1150 **)(t1150 **)SZArrayLdElema(V_17, 3)) = (t1150 *)L_24;
		t1150 * L_25 = (t1150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1150_TI));
		m5970(L_25, (t27*) &_stringLiteral972, V_5, &m5970_MI);
		NullCheck(V_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_17, 4);
		ArrayElementTypeCheck (V_17, L_25);
		*((t1150 **)(t1150 **)SZArrayLdElema(V_17, 4)) = (t1150 *)L_25;
		t1150 * L_26 = (t1150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1150_TI));
		m5970(L_26, (t27*) &_stringLiteral967, V_16, &m5970_MI);
		NullCheck(V_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_17, 5);
		ArrayElementTypeCheck (V_17, L_26);
		*((t1150 **)(t1150 **)SZArrayLdElema(V_17, 5)) = (t1150 *)L_26;
		t1150 * L_27 = (t1150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1150_TI));
		m5970(L_27, (t27*) &_stringLiteral975, (t25 *)(t25 *)V_8, &m5970_MI);
		NullCheck(V_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_17, 6);
		ArrayElementTypeCheck (V_17, L_27);
		*((t1150 **)(t1150 **)SZArrayLdElema(V_17, 6)) = (t1150 *)L_27;
		t1146 * L_28 = (t1146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1146_TI));
		m5978(L_28, V_17, &m5978_MI);
		V_18 = L_28;
		if (!V_6)
		{
			goto IL_0255;
		}
	}
	{
		V_20 = V_6;
		V_21 = 0;
		goto IL_024d;
	}

IL_021c:
	{
		NullCheck(V_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_20, V_21);
		V_19 = ((*(t944 *)((t944 *)UnBox ((*(t25 **)(t25 **)SZArrayLdElema(V_20, V_21)), InitializedTypeInfo(&t944_TI)))));
		NullCheck(V_18);
		t25 * L_29 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m5989_MI, V_18);
		t25 * L_30 = m4878((&V_19), &m4878_MI);
		t25 * L_31 = m4879((&V_19), &m4879_MI);
		NullCheck(L_29);
		InterfaceActionInvoker2< t25 *, t25 * >::Invoke(&m8237_MI, L_29, ((t27*)Castclass(L_30, (&t27_TI))), L_31);
		V_21 = ((int32_t)(V_21+1));
	}

IL_024d:
	{
		NullCheck(V_20);
		if ((((int32_t)V_21) < ((int32_t)(((int32_t)(((t122 *)V_20)->max_length))))))
		{
			goto IL_021c;
		}
	}

IL_0255:
	{
		return V_18;
	}
}
extern MethodInfo m6164_MI;
 t25 * m6164 (t25 * __this, uint8_t p0, t1001 * p1, bool p2, t1200 * p3, t25 * p4, t1185 * p5, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6164_MI);
	int32_t V_0 = {0};
	uint8_t V_1 = {0};
	bool V_2 = false;
	t25 * V_3 = {0};
	t158* V_4 = {0};
	t1151 * V_5 = {0};
	t168 * V_6 = {0};
	t158* V_7 = {0};
	t1153* V_8 = {0};
	t131 * V_9 = {0};
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	t131 * V_12 = {0};
	t1205 * V_13 = {0};
	t25 * V_14 = {0};
	t158* V_15 = {0};
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	t1164 * V_19 = {0};
	t944  V_20 = {0};
	t158* V_21 = {0};
	int32_t V_22 = 0;
	int32_t G_B43_0 = 0;
	{
		if ((((int32_t)p0) == ((int32_t)((int32_t)22))))
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_0 = p0;
		t25 * L_1 = Box(InitializedTypeInfo(&t1192_TI), &L_0);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_2 = m1867(NULL, (t27*) &_stringLiteral1012, L_1, &m1867_MI);
		t1223 * L_3 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_3, L_2, &m6257_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_001b:
	{
		NullCheck(p1);
		uint8_t L_4 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p1);
		V_0 = L_4;
		NullCheck(p1);
		uint8_t L_5 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p1);
		V_1 = L_5;
		V_2 = ((((int32_t)((int32_t)(V_0&((int32_t)64)))) > ((int32_t)0))? 1 : 0);
		NullCheck(p1);
		VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p1);
		NullCheck(p1);
		VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p1);
		V_3 = NULL;
		V_4 = (t158*)NULL;
		V_5 = (t1151 *)NULL;
		V_6 = (t168 *)NULL;
		V_7 = (t158*)NULL;
		V_8 = (t1153*)NULL;
		if ((((int32_t)(((uint8_t)((uint8_t)(V_1&8))))) <= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		NullCheck(p1);
		uint8_t L_6 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1191_TI));
		t131 * L_7 = m6150(NULL, L_6, &m6150_MI);
		V_9 = L_7;
		t25 * L_8 = m6193(NULL, p1, V_9, &m6193_MI);
		V_3 = L_8;
	}

IL_006d:
	{
		if ((((int32_t)((int32_t)(V_0&2))) <= ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		NullCheck(p1);
		uint32_t L_9 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&m5165_MI, p1);
		V_10 = L_9;
		V_4 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), (((uintptr_t)V_10))));
		V_11 = 0;
		goto IL_00aa;
	}

IL_008a:
	{
		NullCheck(p1);
		uint8_t L_10 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1191_TI));
		t131 * L_11 = m6150(NULL, L_10, &m6150_MI);
		V_12 = L_11;
		t25 * L_12 = m6193(NULL, p1, V_12, &m6193_MI);
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, V_11);
		ArrayElementTypeCheck (V_4, L_12);
		*((t25 **)(t25 **)SZArrayLdElema(V_4, V_11)) = (t25 *)L_12;
		V_11 = ((int32_t)(V_11+1));
	}

IL_00aa:
	{
		if ((((int64_t)(((int64_t)V_11))) < ((int64_t)(((uint64_t)V_10)))))
		{
			goto IL_008a;
		}
	}

IL_00b2:
	{
		if (V_2)
		{
			goto IL_00d4;
		}
	}
	{
		if ((((int32_t)(((uint8_t)((uint8_t)(V_1&((int32_t)16)))))) > ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		if ((((int32_t)(((uint8_t)((uint8_t)(V_1&((int32_t)32)))))) > ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		if ((((int32_t)((int32_t)(V_0&4))) > ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		if ((((int32_t)((int32_t)(V_0&8))) <= ((int32_t)0)))
		{
			goto IL_01c2;
		}
	}

IL_00d4:
	{
		t1205 * L_13 = (t1205 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1205_TI));
		m6167(L_13, p5, &m6167_MI);
		V_13 = L_13;
		NullCheck(V_13);
		m6168(V_13, p1, p2, (&V_14), (&V_8), &m6168_MI);
		V_15 = ((t158*)Castclass(V_14, InitializedTypeInfo(&t158_TI)));
		if ((((int32_t)(((uint8_t)((uint8_t)(V_1&((int32_t)32)))))) <= ((int32_t)0)))
		{
			goto IL_0119;
		}
	}
	{
		NullCheck(V_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_15, 0);
		V_6 = ((t168 *)Castclass((*(t25 **)(t25 **)SZArrayLdElema(V_15, 0)), InitializedTypeInfo(&t168_TI)));
		if (!V_2)
		{
			goto IL_0114;
		}
	}
	{
		NullCheck(V_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_15, 1);
		V_5 = ((t1151 *)Castclass((*(t25 **)(t25 **)SZArrayLdElema(V_15, 1)), InitializedTypeInfo(&t1151_TI)));
	}

IL_0114:
	{
		goto IL_01c0;
	}

IL_0119:
	{
		if ((((int32_t)((int32_t)(V_0&1))) > ((int32_t)0)))
		{
			goto IL_0125;
		}
	}
	{
		if ((((int32_t)((int32_t)(V_0&2))) <= ((int32_t)0)))
		{
			goto IL_0165;
		}
	}

IL_0125:
	{
		V_16 = 0;
		if ((((int32_t)(((uint8_t)((uint8_t)(V_1&((int32_t)16)))))) <= ((int32_t)0)))
		{
			goto IL_013b;
		}
	}
	{
		int32_t L_14 = V_16;
		V_16 = ((int32_t)(L_14+1));
		NullCheck(V_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_15, L_14);
		V_3 = (*(t25 **)(t25 **)SZArrayLdElema(V_15, L_14));
	}

IL_013b:
	{
		if (!V_2)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_15 = V_16;
		V_16 = ((int32_t)(L_15+1));
		NullCheck(V_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_15, L_15);
		V_5 = ((t1151 *)Castclass((*(t25 **)(t25 **)SZArrayLdElema(V_15, L_15)), InitializedTypeInfo(&t1151_TI)));
	}

IL_014f:
	{
		NullCheck(V_15);
		if ((((int32_t)V_16) >= ((int32_t)(((int32_t)(((t122 *)V_15)->max_length))))))
		{
			goto IL_0163;
		}
	}
	{
		NullCheck(V_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_15, V_16);
		V_7 = ((t158*)Castclass((*(t25 **)(t25 **)SZArrayLdElema(V_15, V_16)), InitializedTypeInfo(&t158_TI)));
	}

IL_0163:
	{
		goto IL_01c0;
	}

IL_0165:
	{
		if ((((int32_t)((int32_t)(V_0&4))) <= ((int32_t)0)))
		{
			goto IL_0171;
		}
	}
	{
		V_4 = V_15;
		goto IL_01c0;
	}

IL_0171:
	{
		V_17 = 0;
		int32_t L_16 = V_17;
		V_17 = ((int32_t)(L_16+1));
		NullCheck(V_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_15, L_16);
		V_4 = ((t158*)Castclass((*(t25 **)(t25 **)SZArrayLdElema(V_15, L_16)), InitializedTypeInfo(&t158_TI)));
		if ((((int32_t)(((uint8_t)((uint8_t)(V_1&((int32_t)16)))))) <= ((int32_t)0)))
		{
			goto IL_0198;
		}
	}
	{
		int32_t L_17 = V_17;
		V_17 = ((int32_t)(L_17+1));
		NullCheck(V_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_15, L_17);
		V_3 = (*(t25 **)(t25 **)SZArrayLdElema(V_15, L_17));
	}

IL_0198:
	{
		if (!V_2)
		{
			goto IL_01ac;
		}
	}
	{
		int32_t L_18 = V_17;
		V_17 = ((int32_t)(L_18+1));
		NullCheck(V_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_15, L_18);
		V_5 = ((t1151 *)Castclass((*(t25 **)(t25 **)SZArrayLdElema(V_15, L_18)), InitializedTypeInfo(&t1151_TI)));
	}

IL_01ac:
	{
		NullCheck(V_15);
		if ((((int32_t)V_17) >= ((int32_t)(((int32_t)(((t122 *)V_15)->max_length))))))
		{
			goto IL_01c0;
		}
	}
	{
		NullCheck(V_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_15, V_17);
		V_7 = ((t158*)Castclass((*(t25 **)(t25 **)SZArrayLdElema(V_15, V_17)), InitializedTypeInfo(&t158_TI)));
	}

IL_01c0:
	{
		goto IL_01c9;
	}

IL_01c2:
	{
		NullCheck(p1);
		VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p1);
	}

IL_01c9:
	{
		if (!p3)
		{
			goto IL_01d5;
		}
	}
	{
		NullCheck(p3);
		VirtFuncInvoker1< t25 *, t1153* >::Invoke(&m7785_MI, p3, V_8);
	}

IL_01d5:
	{
		if (!V_6)
		{
			goto IL_01e3;
		}
	}
	{
		t1164 * L_19 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m6044(L_19, V_6, p4, &m6044_MI);
		return L_19;
	}

IL_01e3:
	{
		if (!V_4)
		{
			goto IL_01ed;
		}
	}
	{
		NullCheck(V_4);
		G_B43_0 = (((int32_t)(((t122 *)V_4)->max_length)));
		goto IL_01ee;
	}

IL_01ed:
	{
		G_B43_0 = 0;
	}

IL_01ee:
	{
		V_18 = G_B43_0;
		t1164 * L_20 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m6043(L_20, V_3, V_4, V_18, V_5, p4, &m6043_MI);
		V_19 = L_20;
		if (!V_7)
		{
			goto IL_0246;
		}
	}
	{
		V_21 = V_7;
		V_22 = 0;
		goto IL_023e;
	}

IL_020d:
	{
		NullCheck(V_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_21, V_22);
		V_20 = ((*(t944 *)((t944 *)UnBox ((*(t25 **)(t25 **)SZArrayLdElema(V_21, V_22)), InitializedTypeInfo(&t944_TI)))));
		NullCheck(V_19);
		t25 * L_21 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m6051_MI, V_19);
		t25 * L_22 = m4878((&V_20), &m4878_MI);
		t25 * L_23 = m4879((&V_20), &m4879_MI);
		NullCheck(L_21);
		InterfaceActionInvoker2< t25 *, t25 * >::Invoke(&m8237_MI, L_21, ((t27*)Castclass(L_22, (&t27_TI))), L_23);
		V_22 = ((int32_t)(V_22+1));
	}

IL_023e:
	{
		NullCheck(V_21);
		if ((((int32_t)V_22) < ((int32_t)(((int32_t)(((t122 *)V_21)->max_length))))))
		{
			goto IL_020d;
		}
	}

IL_0246:
	{
		return V_19;
	}
}
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.MessageFormatter
extern Il2CppType t1192_0_0_0;
extern Il2CppType t1001_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1200_0_0_0;
extern Il2CppType t1185_0_0_0;
static ParameterInfo t1201_m6163_ParameterInfos[] = 
{
	{"elem", 0, 134221596, &EmptyCustomAttributesCache, &t1192_0_0_0},
	{"reader", 1, 134221597, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"hasHeaders", 2, 134221598, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"headerHandler", 3, 134221599, &EmptyCustomAttributesCache, &t1200_0_0_0},
	{"formatter", 4, 134221600, &EmptyCustomAttributesCache, &t1185_0_0_0},
};
extern TypeInfo t1201_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t462_t25_t137_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6163_MI = 
{
	"ReadMethodCall", (methodPointerType)&m6163, &t1201_TI, &t25_0_0_0, RuntimeInvoker_t25_t462_t25_t137_t25_t25, t1201_m6163_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 5, false, false, 3223, NULL, (methodPointerType)NULL};
extern Il2CppType t1192_0_0_0;
extern Il2CppType t1001_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t1200_0_0_0;
extern Il2CppType t1165_0_0_0;
extern Il2CppType t1185_0_0_0;
static ParameterInfo t1201_m6164_ParameterInfos[] = 
{
	{"elem", 0, 134221601, &EmptyCustomAttributesCache, &t1192_0_0_0},
	{"reader", 1, 134221602, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"hasHeaders", 2, 134221603, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"headerHandler", 3, 134221604, &EmptyCustomAttributesCache, &t1200_0_0_0},
	{"methodCallMessage", 4, 134221605, &EmptyCustomAttributesCache, &t1165_0_0_0},
	{"formatter", 5, 134221606, &EmptyCustomAttributesCache, &t1185_0_0_0},
};
extern TypeInfo t1201_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t462_t25_t137_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6164_MI = 
{
	"ReadMethodResponse", (methodPointerType)&m6164, &t1201_TI, &t25_0_0_0, RuntimeInvoker_t25_t462_t25_t137_t25_t25_t25, t1201_m6164_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 6, false, false, 3224, NULL, (methodPointerType)NULL};
static MethodInfo* t1201_MIs[] =
{
	&m6163_MI,
	&m6164_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1201_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1201_0_0_0;
extern Il2CppType t1201_1_0_0;
extern TypeInfo t25_TI;
struct t1201;
extern TypeInfo t1201_TI;
TypeInfo t1201_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MessageFormatter", "System.Runtime.Serialization.Formatters.Binary", t1201_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t1201_TI, NULL, t1201_VT, &EmptyCustomAttributesCache, &t1201_TI, &t1201_0_0_0, &t1201_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1201), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 4, 0, 0};
#include "t1202.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1202_TI;
#include "t1202MD.h"

extern MethodInfo m452_MI;


extern MethodInfo m6165_MI;
 void m6165 (t1202 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6165_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
extern Il2CppType t131_0_0_6;
FieldInfo t1202_f0_FieldInfo = 
{
	"Type", &t131_0_0_6, &t1202_TI, offsetof(t1202, f0), &EmptyCustomAttributesCache};
extern Il2CppType t637_0_0_6;
FieldInfo t1202_f1_FieldInfo = 
{
	"MemberTypes", &t637_0_0_6, &t1202_TI, offsetof(t1202, f1), &EmptyCustomAttributesCache};
extern Il2CppType t548_0_0_6;
FieldInfo t1202_f2_FieldInfo = 
{
	"MemberNames", &t548_0_0_6, &t1202_TI, offsetof(t1202, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1203_0_0_6;
FieldInfo t1202_f3_FieldInfo = 
{
	"MemberInfos", &t1203_0_0_6, &t1202_TI, offsetof(t1202, f3), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_6;
FieldInfo t1202_f4_FieldInfo = 
{
	"FieldCount", &t134_0_0_6, &t1202_TI, offsetof(t1202, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_6;
FieldInfo t1202_f5_FieldInfo = 
{
	"NeedsSerializationInfo", &t125_0_0_6, &t1202_TI, offsetof(t1202, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1202_FIs[] =
{
	&t1202_f0_FieldInfo,
	&t1202_f1_FieldInfo,
	&t1202_f2_FieldInfo,
	&t1202_f3_FieldInfo,
	&t1202_f4_FieldInfo,
	&t1202_f5_FieldInfo,
	NULL
};
extern TypeInfo t1202_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6165_MI = 
{
	".ctor", (methodPointerType)&m6165, &t1202_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3252, NULL, (methodPointerType)NULL};
static MethodInfo* t1202_MIs[] =
{
	&m6165_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1202_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1202_0_0_0;
extern Il2CppType t1202_1_0_0;
extern TypeInfo t25_TI;
struct t1202;
extern TypeInfo t1202_TI;
extern TypeInfo t1205_TI;
TypeInfo t1202_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeMetadata", "", t1202_MIs, NULL, t1202_FIs, NULL, &t25_TI, NULL, &t1205_TI, &t1202_TI, NULL, t1202_VT, &EmptyCustomAttributesCache, &t1202_TI, &t1202_0_0_0, &t1202_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1202), 0, -1, 0, 0, -1, 1048579, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 6, 0, 0, 4, 0, 0};
#include "t1204.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1204_TI;
#include "t1204MD.h"

extern TypeInfo t1204_TI;
extern MethodInfo m452_MI;


extern MethodInfo m6166_MI;
 void m6166 (t1204 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6166_MI);
	{
		m452(__this, &m452_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
extern Il2CppType t134_0_0_6;
FieldInfo t1204_f0_FieldInfo = 
{
	"NullCount", &t134_0_0_6, &t1204_TI, offsetof(t1204, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1204_FIs[] =
{
	&t1204_f0_FieldInfo,
	NULL
};
extern Il2CppType t134_0_0_0;
static ParameterInfo t1204_m6166_ParameterInfos[] = 
{
	{"count", 0, 134221701, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1204_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6166_MI = 
{
	".ctor", (methodPointerType)&m6166, &t1204_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t1204_m6166_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3253, NULL, (methodPointerType)NULL};
static MethodInfo* t1204_MIs[] =
{
	&m6166_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1204_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1204_0_0_0;
extern Il2CppType t1204_1_0_0;
extern TypeInfo t25_TI;
struct t1204;
extern TypeInfo t1204_TI;
extern TypeInfo t1205_TI;
TypeInfo t1204_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ArrayNullFiller", "", t1204_MIs, NULL, t1204_FIs, NULL, &t25_TI, NULL, &t1205_TI, &t1204_TI, NULL, t1204_VT, &EmptyCustomAttributesCache, &t1204_TI, &t1204_0_0_0, &t1204_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1204), 0, -1, 0, 0, -1, 1048579, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1205_TI;

#include "t1206.h"
#include "t1207.h"
#include "t814.h"
#include "t1355.h"
#include "t839.h"
#include "t841.h"
#include "t836.h"
#include "t1398.h"
#include "t728.h"
extern TypeInfo t1205_TI;
extern TypeInfo t972_TI;
extern TypeInfo t1185_TI;
extern TypeInfo t1160_TI;
extern TypeInfo t824_TI;
extern TypeInfo t1196_TI;
extern TypeInfo t1206_TI;
extern TypeInfo t1001_TI;
extern TypeInfo t462_TI;
extern TypeInfo t1153_TI;
extern TypeInfo t1150_TI;
extern TypeInfo t25_TI;
extern TypeInfo t817_TI;
extern TypeInfo t123_TI;
extern TypeInfo t1204_TI;
extern TypeInfo t134_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1223_TI;
extern TypeInfo t176_TI;
extern TypeInfo t1202_TI;
extern TypeInfo t1207_TI;
extern TypeInfo t823_TI;
extern TypeInfo t438_TI;
extern TypeInfo t131_TI;
extern TypeInfo t125_TI;
extern TypeInfo t122_TI;
extern TypeInfo t822_TI;
extern TypeInfo t1091_TI;
extern TypeInfo t876_TI;
extern TypeInfo t350_TI;
extern TypeInfo t344_TI;
extern TypeInfo t1646_TI;
extern TypeInfo t566_TI;
extern TypeInfo t1647_TI;
extern TypeInfo t812_TI;
extern TypeInfo t834_TI;
extern TypeInfo t701_TI;
extern TypeInfo t1500_TI;
extern TypeInfo t483_TI;
extern TypeInfo t833_TI;
extern TypeInfo t1321_TI;
extern TypeInfo t137_TI;
extern TypeInfo t119_TI;
extern TypeInfo t124_TI;
extern TypeInfo t1261_TI;
extern TypeInfo t721_TI;
extern TypeInfo t904_TI;
extern TypeInfo t1280_TI;
extern TypeInfo t818_TI;
extern TypeInfo t548_TI;
extern TypeInfo t996_TI;
extern TypeInfo t1648_TI;
extern TypeInfo t177_TI;
extern TypeInfo t1355_TI;
extern TypeInfo t1191_TI;
extern TypeInfo t637_TI;
extern TypeInfo t1649_TI;
extern TypeInfo t1193_TI;
extern TypeInfo t1163_TI;
extern TypeInfo t485_TI;
extern TypeInfo t1203_TI;
extern TypeInfo t839_TI;
extern TypeInfo t725_TI;
extern TypeInfo t1627_TI;
extern TypeInfo t841_TI;
extern TypeInfo t158_TI;
extern TypeInfo t836_TI;
extern TypeInfo t1398_TI;
extern TypeInfo t1650_TI;
extern TypeInfo t728_TI;
#include "t1206MD.h"
#include "t1208MD.h"
#include "t1207MD.h"
#include "t122MD.h"
#include "t566MD.h"
#include "t996MD.h"
#include "t1356MD.h"
#include "t1355MD.h"
#include "t839MD.h"
#include "t841MD.h"
#include "t1196MD.h"
#include "t836MD.h"
#include "t728MD.h"
#include "t812MD.h"
extern Il2CppType t996_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t485_0_0_0;
extern Il2CppType t1398_0_0_0;
extern Il2CppType t1650_0_0_0;
extern Il2CppType t158_0_0_0;
extern Il2CppType t548_0_0_0;
extern MethodInfo m4900_MI;
extern MethodInfo m452_MI;
extern MethodInfo m6158_MI;
extern MethodInfo m6157_MI;
extern MethodInfo m6156_MI;
extern MethodInfo m6203_MI;
extern MethodInfo m6159_MI;
extern MethodInfo m5154_MI;
extern MethodInfo m6169_MI;
extern MethodInfo m6170_MI;
extern MethodInfo m6172_MI;
extern MethodInfo m6171_MI;
extern MethodInfo m6206_MI;
extern MethodInfo m6204_MI;
extern MethodInfo m6207_MI;
extern MethodInfo m6173_MI;
extern MethodInfo m6178_MI;
extern MethodInfo m6176_MI;
extern MethodInfo m6175_MI;
extern MethodInfo m6179_MI;
extern MethodInfo m6180_MI;
extern MethodInfo m6181_MI;
extern MethodInfo m6174_MI;
extern MethodInfo m6166_MI;
extern MethodInfo m5159_MI;
extern MethodInfo m6182_MI;
extern MethodInfo m6184_MI;
extern MethodInfo m6185_MI;
extern MethodInfo m1867_MI;
extern MethodInfo m6257_MI;
extern MethodInfo m5165_MI;
extern MethodInfo m5162_MI;
extern MethodInfo m4915_MI;
extern MethodInfo m6187_MI;
extern MethodInfo m6177_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m4914_MI;
extern MethodInfo m6202_MI;
extern MethodInfo m6201_MI;
extern MethodInfo m6208_MI;
extern MethodInfo m6194_MI;
extern MethodInfo m6259_MI;
extern MethodInfo m6188_MI;
extern MethodInfo m3448_MI;
extern MethodInfo m4337_MI;
extern MethodInfo m6216_MI;
extern MethodInfo m4281_MI;
extern MethodInfo m6192_MI;
extern MethodInfo m4268_MI;
extern MethodInfo m4240_MI;
extern MethodInfo m4236_MI;
extern MethodInfo m4252_MI;
extern MethodInfo m6193_MI;
extern MethodInfo m4348_MI;
extern MethodInfo m5153_MI;
extern MethodInfo m5149_MI;
extern MethodInfo m5150_MI;
extern MethodInfo m5160_MI;
extern MethodInfo m7295_MI;
extern MethodInfo m5156_MI;
extern MethodInfo m6183_MI;
extern MethodInfo m5157_MI;
extern MethodInfo m5158_MI;
extern MethodInfo m5161_MI;
extern MethodInfo m5163_MI;
extern MethodInfo m5164_MI;
extern MethodInfo m5166_MI;
extern MethodInfo m484_MI;
extern MethodInfo m7676_MI;
extern MethodInfo m3520_MI;
extern MethodInfo m610_MI;
extern MethodInfo m7533_MI;
extern MethodInfo m7019_MI;
extern MethodInfo m6151_MI;
extern MethodInfo m7020_MI;
extern MethodInfo m6186_MI;
extern MethodInfo m4265_MI;
extern MethodInfo m6165_MI;
extern MethodInfo m6191_MI;
extern MethodInfo m3500_MI;
extern MethodInfo m8309_MI;
extern MethodInfo m4336_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m2296_MI;
extern MethodInfo m2236_MI;
extern MethodInfo m2262_MI;
extern MethodInfo m3432_MI;
extern MethodInfo m386_MI;
extern MethodInfo m7962_MI;
extern MethodInfo m3450_MI;
extern MethodInfo m8274_MI;
extern MethodInfo m4921_MI;
extern MethodInfo m6149_MI;
extern MethodInfo m6189_MI;
extern MethodInfo m6190_MI;
extern MethodInfo m8315_MI;
extern MethodInfo m4242_MI;
extern MethodInfo m6260_MI;
extern MethodInfo m5671_MI;
extern MethodInfo m5846_MI;
extern MethodInfo m6213_MI;
extern MethodInfo m6211_MI;
extern MethodInfo m6212_MI;
extern MethodInfo m6214_MI;
extern MethodInfo m8316_MI;
extern MethodInfo m5615_MI;
extern MethodInfo m5608_MI;
extern MethodInfo m532_MI;
extern MethodInfo m6150_MI;
extern MethodInfo m6285_MI;
extern MethodInfo m4346_MI;
extern MethodInfo m593_MI;
extern MethodInfo m5155_MI;
extern MethodInfo m5012_MI;
extern MethodInfo m4070_MI;


extern MethodInfo m6167_MI;
 void m6167 (t1205 * __this, t1185 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6167_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t972_TI));
		t972 * L_0 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_0, &m4900_MI);
		__this->f5 = L_0;
		t972 * L_1 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_1, &m4900_MI);
		__this->f6 = L_1;
		__this->f11 = ((int32_t)4096);
		m452(__this, &m452_MI);
		NullCheck(p0);
		t25 * L_2 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m6158_MI, p0);
		__this->f0 = L_2;
		NullCheck(p0);
		t824  L_3 = (t824 )VirtFuncInvoker0< t824  >::Invoke(&m6157_MI, p0);
		__this->f1 = L_3;
		NullCheck(p0);
		t1196 * L_4 = (t1196 *)VirtFuncInvoker0< t1196 * >::Invoke(&m6156_MI, p0);
		__this->f2 = L_4;
		t25 * L_5 = (__this->f0);
		t824  L_6 = (__this->f1);
		t1206 * L_7 = (t1206 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1206_TI));
		m6203(L_7, L_5, L_6, &m6203_MI);
		__this->f4 = L_7;
		NullCheck(p0);
		int32_t L_8 = m6159(p0, &m6159_MI);
		__this->f3 = L_8;
		return;
	}
}
extern MethodInfo m6168_MI;
 void m6168 (t1205 * __this, t1001 * p0, bool p1, t25 ** p2, t1153** p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6168_MI);
	uint8_t V_0 = {0};
	{
		NullCheck(p0);
		uint8_t L_0 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p0);
		V_0 = L_0;
		m6169(__this, V_0, p0, p1, p2, p3, &m6169_MI);
		return;
	}
}
extern MethodInfo m6169_MI;
 void m6169 (t1205 * __this, uint8_t p0, t1001 * p1, bool p2, t25 ** p3, t1153** p4, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6169_MI);
	bool V_0 = false;
	{
		*((t25 **)(p4)) = (t25 *)NULL;
		bool L_0 = m6170(__this, p0, p1, &m6170_MI);
		V_0 = L_0;
		if (!V_0)
		{
			goto IL_0045;
		}
	}

IL_0010:
	{
		if (!p2)
		{
			goto IL_0028;
		}
	}
	{
		if ((*((t1153**)p4)))
		{
			goto IL_0028;
		}
	}
	{
		t25 * L_1 = m6172(__this, &m6172_MI);
		*((t25 **)(p4)) = (t25 *)((t1153*)Castclass(L_1, InitializedTypeInfo(&t1153_TI)));
		goto IL_003c;
	}

IL_0028:
	{
		int64_t L_2 = (__this->f9);
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		int64_t L_3 = (__this->f8);
		__this->f9 = L_3;
	}

IL_003c:
	{
		bool L_4 = m6171(__this, p1, &m6171_MI);
		if (L_4)
		{
			goto IL_0010;
		}
	}

IL_0045:
	{
		t1206 * L_5 = (__this->f4);
		int64_t L_6 = (__this->f9);
		NullCheck(L_5);
		t25 * L_7 = (t25 *)VirtFuncInvoker1< t25 *, int64_t >::Invoke(&m6206_MI, L_5, L_6);
		*((t25 **)(p3)) = (t25 *)L_7;
		return;
	}
}
extern MethodInfo m6170_MI;
 bool m6170 (t1205 * __this, uint8_t p0, t1001 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6170_MI);
	t823 * V_0 = {0};
	int64_t V_1 = 0;
	{
		if ((((uint32_t)p0) != ((uint32_t)((int32_t)11))))
		{
			goto IL_001d;
		}
	}
	{
		t1206 * L_0 = (__this->f4);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&m6204_MI, L_0);
		t1206 * L_1 = (__this->f4);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&m6207_MI, L_1);
		return 0;
	}

IL_001d:
	{
		t25 ** L_2 = &(__this->f7);
		m6173(__this, p0, p1, (&V_1), L_2, (&V_0), &m6173_MI);
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		t25 * L_3 = (__this->f7);
		m6178(__this, V_1, L_3, V_0, (((int64_t)0)), (t438 *)NULL, (t822*)(t822*)NULL, &m6178_MI);
		__this->f8 = V_1;
	}

IL_004b:
	{
		return 1;
	}
}
extern MethodInfo m6171_MI;
 bool m6171 (t1205 * __this, t1001 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6171_MI);
	uint8_t V_0 = {0};
	t823 * V_1 = {0};
	int64_t V_2 = 0;
	{
		NullCheck(p0);
		uint8_t L_0 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p0);
		V_0 = L_0;
		if ((((uint32_t)V_0) != ((uint32_t)((int32_t)11))))
		{
			goto IL_0024;
		}
	}
	{
		t1206 * L_1 = (__this->f4);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&m6204_MI, L_1);
		t1206 * L_2 = (__this->f4);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&m6207_MI, L_2);
		return 0;
	}

IL_0024:
	{
		t25 ** L_3 = &(__this->f7);
		m6173(__this, V_0, p0, (&V_2), L_3, (&V_1), &m6173_MI);
		if (!V_2)
		{
			goto IL_0052;
		}
	}
	{
		t25 * L_4 = (__this->f7);
		m6178(__this, V_2, L_4, V_1, (((int64_t)0)), (t438 *)NULL, (t822*)(t822*)NULL, &m6178_MI);
		__this->f8 = V_2;
	}

IL_0052:
	{
		return 1;
	}
}
extern MethodInfo m6172_MI;
 t25 * m6172 (t1205 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6172_MI);
	{
		t25 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m6173_MI;
 void m6173 (t1205 * __this, uint8_t p0, t1001 * p1, int64_t* p2, t25 ** p3, t823 ** p4, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6173_MI);
	uint8_t V_0 = {0};
	{
		V_0 = p0;
		if (((uint8_t)(V_0-1)) == 0)
		{
			goto IL_0053;
		}
		if (((uint8_t)(V_0-1)) == 1)
		{
			goto IL_0064;
		}
		if (((uint8_t)(V_0-1)) == 2)
		{
			goto IL_0077;
		}
		if (((uint8_t)(V_0-1)) == 3)
		{
			goto IL_008a;
		}
		if (((uint8_t)(V_0-1)) == 4)
		{
			goto IL_009d;
		}
		if (((uint8_t)(V_0-1)) == 5)
		{
			goto IL_00b0;
		}
		if (((uint8_t)(V_0-1)) == 6)
		{
			goto IL_00c3;
		}
		if (((uint8_t)(V_0-1)) == 7)
		{
			goto IL_00d6;
		}
		if (((uint8_t)(V_0-1)) == 8)
		{
			goto IL_017c;
		}
		if (((uint8_t)(V_0-1)) == 9)
		{
			goto IL_00ed;
		}
		if (((uint8_t)(V_0-1)) == 10)
		{
			goto IL_017c;
		}
		if (((uint8_t)(V_0-1)) == 11)
		{
			goto IL_00fe;
		}
		if (((uint8_t)(V_0-1)) == 12)
		{
			goto IL_011c;
		}
		if (((uint8_t)(V_0-1)) == 13)
		{
			goto IL_0134;
		}
		if (((uint8_t)(V_0-1)) == 14)
		{
			goto IL_014c;
		}
		if (((uint8_t)(V_0-1)) == 15)
		{
			goto IL_015c;
		}
		if (((uint8_t)(V_0-1)) == 16)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_017c;
	}

IL_0053:
	{
		m6176(__this, p1, p2, p3, p4, &m6176_MI);
		goto IL_0192;
	}

IL_0064:
	{
		m6175(__this, p1, 1, 0, p2, p3, p4, &m6175_MI);
		goto IL_0192;
	}

IL_0077:
	{
		m6175(__this, p1, 0, 0, p2, p3, p4, &m6175_MI);
		goto IL_0192;
	}

IL_008a:
	{
		m6175(__this, p1, 1, 1, p2, p3, p4, &m6175_MI);
		goto IL_0192;
	}

IL_009d:
	{
		m6175(__this, p1, 0, 1, p2, p3, p4, &m6175_MI);
		goto IL_0192;
	}

IL_00b0:
	{
		*((t25 **)(p4)) = (t25 *)NULL;
		m6179(__this, p1, p2, p3, &m6179_MI);
		goto IL_0192;
	}

IL_00c3:
	{
		*((t25 **)(p4)) = (t25 *)NULL;
		m6180(__this, p1, p2, p3, &m6180_MI);
		goto IL_0192;
	}

IL_00d6:
	{
		t25 * L_0 = m6181(__this, p1, &m6181_MI);
		*((t25 **)(p3)) = (t25 *)L_0;
		*((int64_t*)(p2)) = (int64_t)(((int64_t)0));
		*((t25 **)(p4)) = (t25 *)NULL;
		goto IL_0192;
	}

IL_00ed:
	{
		*((t25 **)(p3)) = (t25 *)NULL;
		*((int64_t*)(p2)) = (int64_t)(((int64_t)0));
		*((t25 **)(p4)) = (t25 *)NULL;
		goto IL_0192;
	}

IL_00fe:
	{
		m6174(__this, p1, &m6174_MI);
		NullCheck(p1);
		uint8_t L_1 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p1);
		m6173(__this, L_1, p1, p2, p3, p4, &m6173_MI);
		goto IL_0192;
	}

IL_011c:
	{
		NullCheck(p1);
		uint8_t L_2 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p1);
		t1204 * L_3 = (t1204 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1204_TI));
		m6166(L_3, L_2, &m6166_MI);
		*((t25 **)(p3)) = (t25 *)L_3;
		*((int64_t*)(p2)) = (int64_t)(((int64_t)0));
		*((t25 **)(p4)) = (t25 *)NULL;
		goto IL_0192;
	}

IL_0134:
	{
		NullCheck(p1);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5159_MI, p1);
		t1204 * L_5 = (t1204 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1204_TI));
		m6166(L_5, L_4, &m6166_MI);
		*((t25 **)(p3)) = (t25 *)L_5;
		*((int64_t*)(p2)) = (int64_t)(((int64_t)0));
		*((t25 **)(p4)) = (t25 *)NULL;
		goto IL_0192;
	}

IL_014c:
	{
		m6182(__this, p1, p2, p3, &m6182_MI);
		*((t25 **)(p4)) = (t25 *)NULL;
		goto IL_0192;
	}

IL_015c:
	{
		m6184(__this, p1, p2, p3, &m6184_MI);
		*((t25 **)(p4)) = (t25 *)NULL;
		goto IL_0192;
	}

IL_016c:
	{
		m6185(__this, p1, p2, p3, &m6185_MI);
		*((t25 **)(p4)) = (t25 *)NULL;
		goto IL_0192;
	}

IL_017c:
	{
		int32_t L_6 = p0;
		t25 * L_7 = Box(InitializedTypeInfo(&t134_TI), &L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_8 = m1867(NULL, (t27*) &_stringLiteral1013, L_7, &m1867_MI);
		t1223 * L_9 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_9, L_8, &m6257_MI);
		il2cpp_codegen_raise_exception (L_9);
	}

IL_0192:
	{
		return;
	}
}
extern MethodInfo m6174_MI;
 void m6174 (t1205 * __this, t1001 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6174_MI);
	int64_t V_0 = 0;
	t27* V_1 = {0};
	{
		NullCheck(p0);
		uint32_t L_0 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&m5165_MI, p0);
		V_0 = (((uint64_t)L_0));
		NullCheck(p0);
		t27* L_1 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5162_MI, p0);
		V_1 = L_1;
		t972 * L_2 = (__this->f5);
		int64_t L_3 = V_0;
		t25 * L_4 = Box(InitializedTypeInfo(&t817_TI), &L_3);
		NullCheck(L_2);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4915_MI, L_2, L_4, V_1);
		return;
	}
}
extern MethodInfo m6175_MI;
 void m6175 (t1205 * __this, t1001 * p0, bool p1, bool p2, int64_t* p3, t25 ** p4, t823 ** p5, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6175_MI);
	t1202 * V_0 = {0};
	{
		NullCheck(p0);
		uint32_t L_0 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&m5165_MI, p0);
		*((int64_t*)(p3)) = (int64_t)(((uint64_t)L_0));
		t1202 * L_1 = m6187(__this, p0, p1, p2, &m6187_MI);
		V_0 = L_1;
		m6177(__this, p0, V_0, (*((int64_t*)p3)), p4, p5, &m6177_MI);
		return;
	}
}
extern MethodInfo m6176_MI;
 void m6176 (t1205 * __this, t1001 * p0, int64_t* p1, t25 ** p2, t823 ** p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6176_MI);
	int64_t V_0 = 0;
	t25 * V_1 = {0};
	t1202 * V_2 = {0};
	{
		NullCheck(p0);
		uint32_t L_0 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&m5165_MI, p0);
		*((int64_t*)(p1)) = (int64_t)(((uint64_t)L_0));
		NullCheck(p0);
		uint32_t L_1 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&m5165_MI, p0);
		V_0 = (((uint64_t)L_1));
		t1206 * L_2 = (__this->f4);
		NullCheck(L_2);
		t25 * L_3 = (t25 *)VirtFuncInvoker1< t25 *, int64_t >::Invoke(&m6206_MI, L_2, V_0);
		V_1 = L_3;
		if (V_1)
		{
			goto IL_002c;
		}
	}
	{
		t1223 * L_4 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_4, (t27*) &_stringLiteral1014, &m6257_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_002c:
	{
		t972 * L_5 = (__this->f6);
		NullCheck(V_1);
		t131 * L_6 = m1959(V_1, &m1959_MI);
		NullCheck(L_5);
		t25 * L_7 = (t25 *)VirtFuncInvoker1< t25 *, t25 * >::Invoke(&m4914_MI, L_5, L_6);
		V_2 = ((t1202 *)Castclass(L_7, InitializedTypeInfo(&t1202_TI)));
		m6177(__this, p0, V_2, (*((int64_t*)p1)), p2, p3, &m6177_MI);
		return;
	}
}
extern MethodInfo m6177_MI;
 void m6177 (t1205 * __this, t1001 * p0, t1202 * p1, int64_t p2, t25 ** p3, t823 ** p4, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6177_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t823 ** G_B5_0 = {0};
	t823 ** G_B4_0 = {0};
	t823 * G_B6_0 = {0};
	t823 ** G_B6_1 = {0};
	{
		int32_t L_0 = (__this->f3);
		if ((((uint32_t)L_0) != ((uint32_t)2)))
		{
			goto IL_0019;
		}
	}
	{
		NullCheck(p1);
		t131 * L_1 = (p1->f0);
		t25 * L_2 = m6202(NULL, L_1, &m6202_MI);
		*((t25 **)(p3)) = (t25 *)L_2;
		goto IL_0027;
	}

IL_0019:
	{
		NullCheck(p1);
		t131 * L_3 = (p1->f0);
		t25 * L_4 = m6201(NULL, L_3, &m6201_MI);
		*((t25 **)(p3)) = (t25 *)L_4;
	}

IL_0027:
	{
		t1206 * L_5 = (__this->f4);
		NullCheck(L_5);
		m6208(L_5, (*((t25 **)p3)), &m6208_MI);
		NullCheck(p1);
		bool L_6 = (p1->f5);
		G_B4_0 = p4;
		if (!L_6)
		{
			G_B5_0 = p4;
			goto IL_0051;
		}
	}
	{
		NullCheck(p1);
		t131 * L_7 = (p1->f0);
		t1207 * L_8 = (t1207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1207_TI));
		m6194(L_8, &m6194_MI);
		t823 * L_9 = (t823 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t823_TI));
		m6259(L_9, L_7, L_8, &m6259_MI);
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		goto IL_0052;
	}

IL_0051:
	{
		G_B6_0 = ((t823 *)(NULL));
		G_B6_1 = G_B5_0;
	}

IL_0052:
	{
		*((t25 **)(G_B6_1)) = (t25 *)G_B6_0;
		NullCheck(p1);
		t548* L_10 = (p1->f2);
		if (!L_10)
		{
			goto IL_008e;
		}
	}
	{
		V_0 = 0;
		goto IL_0083;
	}

IL_005f:
	{
		NullCheck(p1);
		t637* L_11 = (p1->f1);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, V_0);
		NullCheck(p1);
		t548* L_12 = (p1->f2);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, V_0);
		m6188(__this, p0, (*((t25 **)p3)), p2, (*((t823 **)p4)), (*(t131 **)(t131 **)SZArrayLdElema(L_11, V_0)), (*(t27**)(t27**)SZArrayLdElema(L_12, V_0)), (t438 *)NULL, (t822*)(t822*)NULL, &m6188_MI);
		V_0 = ((int32_t)(V_0+1));
	}

IL_0083:
	{
		NullCheck(p1);
		int32_t L_13 = (p1->f4);
		if ((((int32_t)V_0) < ((int32_t)L_13)))
		{
			goto IL_005f;
		}
	}
	{
		goto IL_00cb;
	}

IL_008e:
	{
		V_1 = 0;
		goto IL_00c2;
	}

IL_0092:
	{
		NullCheck(p1);
		t637* L_14 = (p1->f1);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, V_1);
		NullCheck(p1);
		t1203* L_15 = (p1->f3);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, V_1);
		NullCheck((*(t438 **)(t438 **)SZArrayLdElema(L_15, V_1)));
		t27* L_16 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3448_MI, (*(t438 **)(t438 **)SZArrayLdElema(L_15, V_1)));
		NullCheck(p1);
		t1203* L_17 = (p1->f3);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, V_1);
		m6188(__this, p0, (*((t25 **)p3)), p2, (*((t823 **)p4)), (*(t131 **)(t131 **)SZArrayLdElema(L_14, V_1)), L_16, (*(t438 **)(t438 **)SZArrayLdElema(L_17, V_1)), (t822*)(t822*)NULL, &m6188_MI);
		V_1 = ((int32_t)(V_1+1));
	}

IL_00c2:
	{
		NullCheck(p1);
		int32_t L_18 = (p1->f4);
		if ((((int32_t)V_1) < ((int32_t)L_18)))
		{
			goto IL_0092;
		}
	}

IL_00cb:
	{
		return;
	}
}
extern MethodInfo m6178_MI;
 void m6178 (t1205 * __this, int64_t p0, t25 * p1, t823 * p2, int64_t p3, t438 * p4, t822* p5, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6178_MI);
	{
		if (p3)
		{
			goto IL_0009;
		}
	}
	{
		p5 = (t822*)NULL;
	}

IL_0009:
	{
		NullCheck(p1);
		t131 * L_0 = m1959(p1, &m1959_MI);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4337_MI, L_0);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		if (p3)
		{
			goto IL_002e;
		}
	}

IL_001a:
	{
		t1206 * L_2 = (__this->f4);
		NullCheck(L_2);
		m6216(L_2, p1, p0, p2, (((int64_t)0)), (t438 *)NULL, (t822*)(t822*)NULL, &m6216_MI);
		goto IL_0056;
	}

IL_002e:
	{
		if (!p5)
		{
			goto IL_0042;
		}
	}
	{
		NullCheck(p5);
		t25 * L_3 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4281_MI, p5);
		p5 = ((t822*)Castclass(L_3, InitializedTypeInfo(&t822_TI)));
	}

IL_0042:
	{
		t1206 * L_4 = (__this->f4);
		NullCheck(L_4);
		m6216(L_4, p1, p0, p2, p3, p4, p5, &m6216_MI);
	}

IL_0056:
	{
		return;
	}
}
extern MethodInfo m6179_MI;
 void m6179 (t1205 * __this, t1001 * p0, int64_t* p1, t25 ** p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6179_MI);
	{
		NullCheck(p0);
		uint32_t L_0 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&m5165_MI, p0);
		*((int64_t*)(p1)) = (int64_t)(((uint64_t)L_0));
		NullCheck(p0);
		t27* L_1 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5162_MI, p0);
		*((t25 **)(p2)) = (t25 *)L_1;
		return;
	}
}
extern MethodInfo m6180_MI;
 void m6180 (t1205 * __this, t1001 * p0, int64_t* p1, t25 ** p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6180_MI);
	int32_t V_0 = 0;
	bool V_1 = false;
	t822* V_2 = {0};
	int32_t V_3 = 0;
	uint8_t V_4 = {0};
	t131 * V_5 = {0};
	t122 * V_6 = {0};
	t822* V_7 = {0};
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	{
		NullCheck(p0);
		uint32_t L_0 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&m5165_MI, p0);
		*((int64_t*)(p1)) = (int64_t)(((uint64_t)L_0));
		NullCheck(p0);
		VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p0);
		NullCheck(p0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5159_MI, p0);
		V_0 = L_1;
		V_1 = 0;
		V_2 = ((t822*)SZArrayNew(InitializedTypeInfo(&t822_TI), V_0));
		V_3 = 0;
		goto IL_0038;
	}

IL_0024:
	{
		NullCheck(p0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5159_MI, p0);
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_3);
		*((int32_t*)(int32_t*)SZArrayLdElema(V_2, V_3)) = (int32_t)L_2;
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_3);
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(V_2, V_3)))
		{
			goto IL_0034;
		}
	}
	{
		V_1 = 1;
	}

IL_0034:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_0038:
	{
		if ((((int32_t)V_3) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck(p0);
		uint8_t L_3 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p0);
		V_4 = L_3;
		t131 * L_4 = m6192(__this, p0, V_4, &m6192_MI);
		V_5 = L_4;
		t122 * L_5 = m4268(NULL, V_5, V_2, &m4268_MI);
		V_6 = L_5;
		if (!V_1)
		{
			goto IL_0061;
		}
	}
	{
		*((t25 **)(p2)) = (t25 *)V_6;
		return;
	}

IL_0061:
	{
		V_7 = ((t822*)SZArrayNew(InitializedTypeInfo(&t822_TI), V_0));
		V_8 = ((int32_t)(V_0-1));
		goto IL_0084;
	}

IL_0070:
	{
		NullCheck(V_6);
		int32_t L_6 = m4240(V_6, V_8, &m4240_MI);
		NullCheck(V_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_7, V_8);
		*((int32_t*)(int32_t*)SZArrayLdElema(V_7, V_8)) = (int32_t)L_6;
		V_8 = ((int32_t)(V_8-1));
	}

IL_0084:
	{
		if ((((int32_t)V_8) >= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		V_9 = 0;
		goto IL_00f0;
	}

IL_008e:
	{
		m6188(__this, p0, V_6, (*((int64_t*)p1)), (t823 *)NULL, V_5, (t27*)NULL, (t438 *)NULL, V_7, &m6188_MI);
		NullCheck(V_6);
		int32_t L_7 = m4236(V_6, &m4236_MI);
		V_10 = ((int32_t)(L_7-1));
		goto IL_00eb;
	}

IL_00ad:
	{
		NullCheck(V_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_7, V_10);
		int32_t* L_8 = ((int32_t*)(int32_t*)SZArrayLdElema(V_7, V_10));
		*((int32_t*)(L_8)) = (int32_t)((int32_t)((*((int32_t*)L_8))+1));
		NullCheck(V_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_7, V_10);
		NullCheck(V_6);
		int32_t L_9 = m4252(V_6, V_10, &m4252_MI);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(V_7, V_10))) <= ((int32_t)L_9)))
		{
			goto IL_00e3;
		}
	}
	{
		if ((((int32_t)V_10) <= ((int32_t)0)))
		{
			goto IL_00e0;
		}
	}
	{
		NullCheck(V_6);
		int32_t L_10 = m4240(V_6, V_10, &m4240_MI);
		NullCheck(V_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_7, V_10);
		*((int32_t*)(int32_t*)SZArrayLdElema(V_7, V_10)) = (int32_t)L_10;
		goto IL_00e5;
	}

IL_00e0:
	{
		V_9 = 1;
	}

IL_00e3:
	{
		goto IL_00f0;
	}

IL_00e5:
	{
		V_10 = ((int32_t)(V_10-1));
	}

IL_00eb:
	{
		if ((((int32_t)V_10) >= ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}

IL_00f0:
	{
		if (!V_9)
		{
			goto IL_008e;
		}
	}
	{
		*((t25 **)(p2)) = (t25 *)V_6;
		return;
	}
}
extern MethodInfo m6181_MI;
 t25 * m6181 (t1205 * __this, t1001 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6181_MI);
	t131 * V_0 = {0};
	{
		t131 * L_0 = m6192(__this, p0, 0, &m6192_MI);
		V_0 = L_0;
		t25 * L_1 = m6193(NULL, p0, V_0, &m6193_MI);
		return L_1;
	}
}
extern MethodInfo m6182_MI;
 void m6182 (t1205 * __this, t1001 * p0, int64_t* p1, t25 ** p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6182_MI);
	int32_t V_0 = 0;
	t131 * V_1 = {0};
	t1091* V_2 = {0};
	int32_t V_3 = 0;
	t876* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t350* V_7 = {0};
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	t1646* V_10 = {0};
	int32_t V_11 = 0;
	t1647* V_12 = {0};
	int32_t V_13 = 0;
	t834* V_14 = {0};
	int32_t V_15 = 0;
	t1500* V_16 = {0};
	int32_t V_17 = 0;
	t822* V_18 = {0};
	int32_t V_19 = 0;
	t833* V_20 = {0};
	int32_t V_21 = 0;
	t1321* V_22 = {0};
	int32_t V_23 = 0;
	t119* V_24 = {0};
	int32_t V_25 = 0;
	t1261* V_26 = {0};
	int32_t V_27 = 0;
	t904* V_28 = {0};
	int32_t V_29 = 0;
	t1280* V_30 = {0};
	int32_t V_31 = 0;
	t548* V_32 = {0};
	int32_t V_33 = 0;
	t1648* V_34 = {0};
	int32_t V_35 = 0;
	int32_t V_36 = {0};
	{
		NullCheck(p0);
		uint32_t L_0 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&m5165_MI, p0);
		*((int64_t*)(p1)) = (int64_t)(((uint64_t)L_0));
		NullCheck(p0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5159_MI, p0);
		V_0 = L_1;
		t131 * L_2 = m6192(__this, p0, 0, &m6192_MI);
		V_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		int32_t L_3 = m4348(NULL, V_1, &m4348_MI);
		V_36 = L_3;
		if (((int32_t)(V_36-3)) == 0)
		{
			goto IL_006f;
		}
		if (((int32_t)(V_36-3)) == 1)
		{
			goto IL_00cb;
		}
		if (((int32_t)(V_36-3)) == 2)
		{
			goto IL_0262;
		}
		if (((int32_t)(V_36-3)) == 3)
		{
			goto IL_0093;
		}
		if (((int32_t)(V_36-3)) == 4)
		{
			goto IL_01ae;
		}
		if (((int32_t)(V_36-3)) == 5)
		{
			goto IL_02da;
		}
		if (((int32_t)(V_36-3)) == 6)
		{
			goto IL_01ea;
		}
		if (((int32_t)(V_36-3)) == 7)
		{
			goto IL_0316;
		}
		if (((int32_t)(V_36-3)) == 8)
		{
			goto IL_0226;
		}
		if (((int32_t)(V_36-3)) == 9)
		{
			goto IL_0352;
		}
		if (((int32_t)(V_36-3)) == 10)
		{
			goto IL_029e;
		}
		if (((int32_t)(V_36-3)) == 11)
		{
			goto IL_0172;
		}
		if (((int32_t)(V_36-3)) == 12)
		{
			goto IL_013d;
		}
		if (((int32_t)(V_36-3)) == 13)
		{
			goto IL_0103;
		}
		if (((int32_t)(V_36-3)) == 14)
		{
			goto IL_03b7;
		}
		if (((int32_t)(V_36-3)) == 15)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03b7;
	}

IL_006f:
	{
		V_2 = ((t1091*)SZArrayNew(InitializedTypeInfo(&t1091_TI), V_0));
		V_3 = 0;
		goto IL_0087;
	}

IL_007a:
	{
		NullCheck(p0);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5153_MI, p0);
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_3);
		*((bool*)(bool*)SZArrayLdElema(V_2, V_3)) = (bool)L_4;
		V_3 = ((int32_t)(V_3+1));
	}

IL_0087:
	{
		if ((((int32_t)V_3) < ((int32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		*((t25 **)(p2)) = (t25 *)V_2;
		goto IL_0413;
	}

IL_0093:
	{
		V_4 = ((t876*)SZArrayNew(InitializedTypeInfo(&t876_TI), V_0));
		V_5 = 0;
		goto IL_00bd;
	}

IL_00a0:
	{
		NullCheck(p0);
		int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, t876*, int32_t, int32_t >::Invoke(&m5149_MI, p0, V_4, V_5, ((int32_t)(V_0-V_5)));
		V_6 = L_5;
		if (V_6)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_00c2;
	}

IL_00b6:
	{
		V_5 = ((int32_t)(V_5+V_6));
	}

IL_00bd:
	{
		if ((((int32_t)V_5) < ((int32_t)V_0)))
		{
			goto IL_00a0;
		}
	}

IL_00c2:
	{
		*((t25 **)(p2)) = (t25 *)V_4;
		goto IL_0413;
	}

IL_00cb:
	{
		V_7 = ((t350*)SZArrayNew(InitializedTypeInfo(&t350_TI), V_0));
		V_8 = 0;
		goto IL_00f5;
	}

IL_00d8:
	{
		NullCheck(p0);
		int32_t L_6 = (int32_t)VirtFuncInvoker3< int32_t, t350*, int32_t, int32_t >::Invoke(&m5150_MI, p0, V_7, V_8, ((int32_t)(V_0-V_8)));
		V_9 = L_6;
		if (V_9)
		{
			goto IL_00ee;
		}
	}
	{
		goto IL_00fa;
	}

IL_00ee:
	{
		V_8 = ((int32_t)(V_8+V_9));
	}

IL_00f5:
	{
		if ((((int32_t)V_8) < ((int32_t)V_0)))
		{
			goto IL_00d8;
		}
	}

IL_00fa:
	{
		*((t25 **)(p2)) = (t25 *)V_7;
		goto IL_0413;
	}

IL_0103:
	{
		V_10 = ((t1646*)SZArrayNew(InitializedTypeInfo(&t1646_TI), V_0));
		V_11 = 0;
		goto IL_012f;
	}

IL_0110:
	{
		NullCheck(V_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_10, V_11);
		NullCheck(p0);
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m5160_MI, p0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t566_TI));
		t566  L_8 = m7295(NULL, L_7, &m7295_MI);
		*((t566 *)(t566 *)SZArrayLdElema(V_10, V_11)) = L_8;
		V_11 = ((int32_t)(V_11+1));
	}

IL_012f:
	{
		if ((((int32_t)V_11) < ((int32_t)V_0)))
		{
			goto IL_0110;
		}
	}
	{
		*((t25 **)(p2)) = (t25 *)V_10;
		goto IL_0413;
	}

IL_013d:
	{
		V_12 = ((t1647*)SZArrayNew(InitializedTypeInfo(&t1647_TI), V_0));
		V_13 = 0;
		goto IL_0164;
	}

IL_014a:
	{
		NullCheck(V_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_12, V_13);
		NullCheck(p0);
		t812  L_9 = (t812 )VirtFuncInvoker0< t812  >::Invoke(&m5156_MI, p0);
		*((t812 *)(t812 *)SZArrayLdElema(V_12, V_13)) = L_9;
		V_13 = ((int32_t)(V_13+1));
	}

IL_0164:
	{
		if ((((int32_t)V_13) < ((int32_t)V_0)))
		{
			goto IL_014a;
		}
	}
	{
		*((t25 **)(p2)) = (t25 *)V_12;
		goto IL_0413;
	}

IL_0172:
	{
		V_14 = ((t834*)SZArrayNew(InitializedTypeInfo(&t834_TI), V_0));
		if ((((int32_t)V_0) <= ((int32_t)2)))
		{
			goto IL_018a;
		}
	}
	{
		m6183(__this, p0, (t122 *)(t122 *)V_14, 8, &m6183_MI);
		goto IL_01a5;
	}

IL_018a:
	{
		V_15 = 0;
		goto IL_01a0;
	}

IL_018f:
	{
		NullCheck(p0);
		double L_10 = (double)VirtFuncInvoker0< double >::Invoke(&m5157_MI, p0);
		NullCheck(V_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_14, V_15);
		*((double*)(double*)SZArrayLdElema(V_14, V_15)) = (double)L_10;
		V_15 = ((int32_t)(V_15+1));
	}

IL_01a0:
	{
		if ((((int32_t)V_15) < ((int32_t)V_0)))
		{
			goto IL_018f;
		}
	}

IL_01a5:
	{
		*((t25 **)(p2)) = (t25 *)V_14;
		goto IL_0413;
	}

IL_01ae:
	{
		V_16 = ((t1500*)SZArrayNew(InitializedTypeInfo(&t1500_TI), V_0));
		if ((((int32_t)V_0) <= ((int32_t)2)))
		{
			goto IL_01c6;
		}
	}
	{
		m6183(__this, p0, (t122 *)(t122 *)V_16, 2, &m6183_MI);
		goto IL_01e1;
	}

IL_01c6:
	{
		V_17 = 0;
		goto IL_01dc;
	}

IL_01cb:
	{
		NullCheck(p0);
		int16_t L_11 = (int16_t)VirtFuncInvoker0< int16_t >::Invoke(&m5158_MI, p0);
		NullCheck(V_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_16, V_17);
		*((int16_t*)(int16_t*)SZArrayLdElema(V_16, V_17)) = (int16_t)L_11;
		V_17 = ((int32_t)(V_17+1));
	}

IL_01dc:
	{
		if ((((int32_t)V_17) < ((int32_t)V_0)))
		{
			goto IL_01cb;
		}
	}

IL_01e1:
	{
		*((t25 **)(p2)) = (t25 *)V_16;
		goto IL_0413;
	}

IL_01ea:
	{
		V_18 = ((t822*)SZArrayNew(InitializedTypeInfo(&t822_TI), V_0));
		if ((((int32_t)V_0) <= ((int32_t)2)))
		{
			goto IL_0202;
		}
	}
	{
		m6183(__this, p0, (t122 *)(t122 *)V_18, 4, &m6183_MI);
		goto IL_021d;
	}

IL_0202:
	{
		V_19 = 0;
		goto IL_0218;
	}

IL_0207:
	{
		NullCheck(p0);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5159_MI, p0);
		NullCheck(V_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_18, V_19);
		*((int32_t*)(int32_t*)SZArrayLdElema(V_18, V_19)) = (int32_t)L_12;
		V_19 = ((int32_t)(V_19+1));
	}

IL_0218:
	{
		if ((((int32_t)V_19) < ((int32_t)V_0)))
		{
			goto IL_0207;
		}
	}

IL_021d:
	{
		*((t25 **)(p2)) = (t25 *)V_18;
		goto IL_0413;
	}

IL_0226:
	{
		V_20 = ((t833*)SZArrayNew(InitializedTypeInfo(&t833_TI), V_0));
		if ((((int32_t)V_0) <= ((int32_t)2)))
		{
			goto IL_023e;
		}
	}
	{
		m6183(__this, p0, (t122 *)(t122 *)V_20, 8, &m6183_MI);
		goto IL_0259;
	}

IL_023e:
	{
		V_21 = 0;
		goto IL_0254;
	}

IL_0243:
	{
		NullCheck(p0);
		int64_t L_13 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m5160_MI, p0);
		NullCheck(V_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_20, V_21);
		*((int64_t*)(int64_t*)SZArrayLdElema(V_20, V_21)) = (int64_t)L_13;
		V_21 = ((int32_t)(V_21+1));
	}

IL_0254:
	{
		if ((((int32_t)V_21) < ((int32_t)V_0)))
		{
			goto IL_0243;
		}
	}

IL_0259:
	{
		*((t25 **)(p2)) = (t25 *)V_20;
		goto IL_0413;
	}

IL_0262:
	{
		V_22 = ((t1321*)SZArrayNew(InitializedTypeInfo(&t1321_TI), V_0));
		if ((((int32_t)V_0) <= ((int32_t)2)))
		{
			goto IL_027a;
		}
	}
	{
		m6183(__this, p0, (t122 *)(t122 *)V_22, 1, &m6183_MI);
		goto IL_0295;
	}

IL_027a:
	{
		V_23 = 0;
		goto IL_0290;
	}

IL_027f:
	{
		NullCheck(p0);
		int8_t L_14 = (int8_t)VirtFuncInvoker0< int8_t >::Invoke(&m5161_MI, p0);
		NullCheck(V_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_22, V_23);
		*((int8_t*)(int8_t*)SZArrayLdElema(V_22, V_23)) = (int8_t)L_14;
		V_23 = ((int32_t)(V_23+1));
	}

IL_0290:
	{
		if ((((int32_t)V_23) < ((int32_t)V_0)))
		{
			goto IL_027f;
		}
	}

IL_0295:
	{
		*((t25 **)(p2)) = (t25 *)V_22;
		goto IL_0413;
	}

IL_029e:
	{
		V_24 = ((t119*)SZArrayNew(InitializedTypeInfo(&t119_TI), V_0));
		if ((((int32_t)V_0) <= ((int32_t)2)))
		{
			goto IL_02b6;
		}
	}
	{
		m6183(__this, p0, (t122 *)(t122 *)V_24, 4, &m6183_MI);
		goto IL_02d1;
	}

IL_02b6:
	{
		V_25 = 0;
		goto IL_02cc;
	}

IL_02bb:
	{
		NullCheck(p0);
		float L_15 = (float)VirtFuncInvoker0< float >::Invoke(&m5163_MI, p0);
		NullCheck(V_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_24, V_25);
		*((float*)(float*)SZArrayLdElema(V_24, V_25)) = (float)L_15;
		V_25 = ((int32_t)(V_25+1));
	}

IL_02cc:
	{
		if ((((int32_t)V_25) < ((int32_t)V_0)))
		{
			goto IL_02bb;
		}
	}

IL_02d1:
	{
		*((t25 **)(p2)) = (t25 *)V_24;
		goto IL_0413;
	}

IL_02da:
	{
		V_26 = ((t1261*)SZArrayNew(InitializedTypeInfo(&t1261_TI), V_0));
		if ((((int32_t)V_0) <= ((int32_t)2)))
		{
			goto IL_02f2;
		}
	}
	{
		m6183(__this, p0, (t122 *)(t122 *)V_26, 2, &m6183_MI);
		goto IL_030d;
	}

IL_02f2:
	{
		V_27 = 0;
		goto IL_0308;
	}

IL_02f7:
	{
		NullCheck(p0);
		uint16_t L_16 = (uint16_t)VirtFuncInvoker0< uint16_t >::Invoke(&m5164_MI, p0);
		NullCheck(V_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_26, V_27);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(V_26, V_27)) = (uint16_t)L_16;
		V_27 = ((int32_t)(V_27+1));
	}

IL_0308:
	{
		if ((((int32_t)V_27) < ((int32_t)V_0)))
		{
			goto IL_02f7;
		}
	}

IL_030d:
	{
		*((t25 **)(p2)) = (t25 *)V_26;
		goto IL_0413;
	}

IL_0316:
	{
		V_28 = ((t904*)SZArrayNew(InitializedTypeInfo(&t904_TI), V_0));
		if ((((int32_t)V_0) <= ((int32_t)2)))
		{
			goto IL_032e;
		}
	}
	{
		m6183(__this, p0, (t122 *)(t122 *)V_28, 4, &m6183_MI);
		goto IL_0349;
	}

IL_032e:
	{
		V_29 = 0;
		goto IL_0344;
	}

IL_0333:
	{
		NullCheck(p0);
		uint32_t L_17 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&m5165_MI, p0);
		NullCheck(V_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_28, V_29);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(V_28, V_29)) = (uint32_t)L_17;
		V_29 = ((int32_t)(V_29+1));
	}

IL_0344:
	{
		if ((((int32_t)V_29) < ((int32_t)V_0)))
		{
			goto IL_0333;
		}
	}

IL_0349:
	{
		*((t25 **)(p2)) = (t25 *)V_28;
		goto IL_0413;
	}

IL_0352:
	{
		V_30 = ((t1280*)SZArrayNew(InitializedTypeInfo(&t1280_TI), V_0));
		if ((((int32_t)V_0) <= ((int32_t)2)))
		{
			goto IL_036a;
		}
	}
	{
		m6183(__this, p0, (t122 *)(t122 *)V_30, 8, &m6183_MI);
		goto IL_0385;
	}

IL_036a:
	{
		V_31 = 0;
		goto IL_0380;
	}

IL_036f:
	{
		NullCheck(p0);
		uint64_t L_18 = (uint64_t)VirtFuncInvoker0< uint64_t >::Invoke(&m5166_MI, p0);
		NullCheck(V_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_30, V_31);
		*((uint64_t*)(uint64_t*)SZArrayLdElema(V_30, V_31)) = (uint64_t)L_18;
		V_31 = ((int32_t)(V_31+1));
	}

IL_0380:
	{
		if ((((int32_t)V_31) < ((int32_t)V_0)))
		{
			goto IL_036f;
		}
	}

IL_0385:
	{
		*((t25 **)(p2)) = (t25 *)V_30;
		goto IL_0413;
	}

IL_038e:
	{
		V_32 = ((t548*)SZArrayNew(InitializedTypeInfo(&t548_TI), V_0));
		V_33 = 0;
		goto IL_03ac;
	}

IL_039b:
	{
		NullCheck(p0);
		t27* L_19 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5162_MI, p0);
		NullCheck(V_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_32, V_33);
		ArrayElementTypeCheck (V_32, L_19);
		*((t27**)(t27**)SZArrayLdElema(V_32, V_33)) = (t27*)L_19;
		V_33 = ((int32_t)(V_33+1));
	}

IL_03ac:
	{
		if ((((int32_t)V_33) < ((int32_t)V_0)))
		{
			goto IL_039b;
		}
	}
	{
		*((t25 **)(p2)) = (t25 *)V_32;
		goto IL_0413;
	}

IL_03b7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_20 = m484(NULL, LoadTypeToken(&t996_0_0_0), &m484_MI);
		if ((((t131 *)V_1) != ((t131 *)L_20)))
		{
			goto IL_03fb;
		}
	}
	{
		V_34 = ((t1648*)SZArrayNew(InitializedTypeInfo(&t1648_TI), V_0));
		V_35 = 0;
		goto IL_03f0;
	}

IL_03d1:
	{
		NullCheck(V_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_34, V_35);
		NullCheck(p0);
		int64_t L_21 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m5160_MI, p0);
		t996  L_22 = {0};
		m7676(&L_22, L_21, &m7676_MI);
		*((t996 *)(t996 *)SZArrayLdElema(V_34, V_35)) = L_22;
		V_35 = ((int32_t)(V_35+1));
	}

IL_03f0:
	{
		if ((((int32_t)V_35) < ((int32_t)V_0)))
		{
			goto IL_03d1;
		}
	}
	{
		*((t25 **)(p2)) = (t25 *)V_34;
		goto IL_0411;
	}

IL_03fb:
	{
		NullCheck(V_1);
		t27* L_23 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, V_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_24 = m610(NULL, (t27*) &_stringLiteral1015, L_23, &m610_MI);
		t177 * L_25 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m7533(L_25, L_24, &m7533_MI);
		il2cpp_codegen_raise_exception (L_25);
	}

IL_0411:
	{
		goto IL_0413;
	}

IL_0413:
	{
		return;
	}
}
extern MethodInfo m6183_MI;
 void m6183 (t1205 * __this, t1001 * p0, t122 * p1, int32_t p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6183_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t1205 * G_B5_0 = {0};
	t1205 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	t1205 * G_B6_1 = {0};
	int32_t G_B11_0 = 0;
	{
		int32_t L_0 = m7019(NULL, p1, &m7019_MI);
		V_0 = L_0;
		t876* L_1 = (__this->f10);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		t876* L_2 = (__this->f10);
		NullCheck(L_2);
		if ((((int32_t)V_0) <= ((int32_t)(((int32_t)(((t122 *)L_2)->max_length))))))
		{
			goto IL_0047;
		}
	}
	{
		t876* L_3 = (__this->f10);
		NullCheck(L_3);
		int32_t L_4 = (__this->f11);
		if ((((int32_t)(((int32_t)(((t122 *)L_3)->max_length)))) == ((int32_t)L_4)))
		{
			goto IL_0047;
		}
	}

IL_002a:
	{
		int32_t L_5 = (__this->f11);
		G_B4_0 = __this;
		if ((((int32_t)V_0) > ((int32_t)L_5)))
		{
			G_B5_0 = __this;
			goto IL_0037;
		}
	}
	{
		G_B6_0 = V_0;
		G_B6_1 = G_B4_0;
		goto IL_003d;
	}

IL_0037:
	{
		int32_t L_6 = (__this->f11);
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_003d:
	{
		NullCheck(G_B6_1);
		G_B6_1->f10 = ((t876*)SZArrayNew(InitializedTypeInfo(&t876_TI), G_B6_0));
	}

IL_0047:
	{
		V_1 = 0;
		goto IL_00b4;
	}

IL_004b:
	{
		t876* L_7 = (__this->f10);
		NullCheck(L_7);
		if ((((int32_t)V_0) >= ((int32_t)(((int32_t)(((t122 *)L_7)->max_length))))))
		{
			goto IL_0059;
		}
	}
	{
		G_B11_0 = V_0;
		goto IL_0061;
	}

IL_0059:
	{
		t876* L_8 = (__this->f10);
		NullCheck(L_8);
		G_B11_0 = (((int32_t)(((t122 *)L_8)->max_length)));
	}

IL_0061:
	{
		V_2 = G_B11_0;
		V_3 = 0;
	}

IL_0064:
	{
		t876* L_9 = (__this->f10);
		NullCheck(p0);
		int32_t L_10 = (int32_t)VirtFuncInvoker3< int32_t, t876*, int32_t, int32_t >::Invoke(&m5149_MI, p0, L_9, V_3, ((int32_t)(V_2-V_3)));
		V_4 = L_10;
		if (V_4)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0085;
	}

IL_007c:
	{
		V_3 = ((int32_t)(V_3+V_4));
		if ((((int32_t)V_3) < ((int32_t)V_2)))
		{
			goto IL_0064;
		}
	}

IL_0085:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1355_TI));
		if ((((t1355_SFs*)InitializedTypeInfo(&t1355_TI)->static_fields)->f1))
		{
			goto IL_009d;
		}
	}
	{
		if ((((int32_t)p2) <= ((int32_t)1)))
		{
			goto IL_009d;
		}
	}
	{
		t876* L_11 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1191_TI));
		m6151(NULL, L_11, V_2, p2, &m6151_MI);
	}

IL_009d:
	{
		t876* L_12 = (__this->f10);
		m7020(NULL, (t122 *)(t122 *)L_12, 0, p1, V_1, V_2, &m7020_MI);
		V_0 = ((int32_t)(V_0-V_2));
		V_1 = ((int32_t)(V_1+V_2));
	}

IL_00b4:
	{
		if ((((int32_t)V_0) > ((int32_t)0)))
		{
			goto IL_004b;
		}
	}
	{
		return;
	}
}
extern MethodInfo m6184_MI;
 void m6184 (t1205 * __this, t1001 * p0, int64_t* p1, t25 ** p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6184_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t25_0_0_0), &m484_MI);
		m6186(__this, p0, L_0, p1, p2, &m6186_MI);
		return;
	}
}
extern MethodInfo m6185_MI;
 void m6185 (t1205 * __this, t1001 * p0, int64_t* p1, t25 ** p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6185_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t27_0_0_0), &m484_MI);
		m6186(__this, p0, L_0, p1, p2, &m6186_MI);
		return;
	}
}
extern MethodInfo m6186_MI;
 void m6186 (t1205 * __this, t1001 * p0, t131 * p1, int64_t* p2, t25 ** p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6186_MI);
	int32_t V_0 = 0;
	t822* V_1 = {0};
	t122 * V_2 = {0};
	int32_t V_3 = 0;
	{
		NullCheck(p0);
		uint32_t L_0 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&m5165_MI, p0);
		*((int64_t*)(p2)) = (int64_t)(((uint64_t)L_0));
		NullCheck(p0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5159_MI, p0);
		V_0 = L_1;
		V_1 = ((t822*)SZArrayNew(InitializedTypeInfo(&t822_TI), 1));
		t122 * L_2 = m4265(NULL, p1, V_0, &m4265_MI);
		V_2 = L_2;
		V_3 = 0;
		goto IL_003e;
	}

IL_0023:
	{
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(V_1, 0)) = (int32_t)V_3;
		m6188(__this, p0, V_2, (*((int64_t*)p2)), (t823 *)NULL, p1, (t27*)NULL, (t438 *)NULL, V_1, &m6188_MI);
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, 0);
		V_3 = (*(int32_t*)(int32_t*)SZArrayLdElema(V_1, 0));
		V_3 = ((int32_t)(V_3+1));
	}

IL_003e:
	{
		if ((((int32_t)V_3) < ((int32_t)V_0)))
		{
			goto IL_0023;
		}
	}
	{
		*((t25 **)(p3)) = (t25 *)V_2;
		return;
	}
}
extern MethodInfo m6187_MI;
 t1202 * m6187 (t1205 * __this, t1001 * p0, bool p1, bool p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6187_MI);
	t1202 * V_0 = {0};
	t27* V_1 = {0};
	int32_t V_2 = 0;
	t637* V_3 = {0};
	t548* V_4 = {0};
	int32_t V_5 = 0;
	t1649* V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int64_t V_9 = 0;
	t25 * V_10 = {0};
	t25 * V_11 = {0};
	int32_t V_12 = 0;
	t839 * V_13 = {0};
	t27* V_14 = {0};
	int32_t V_15 = 0;
	t27* V_16 = {0};
	t131 * V_17 = {0};
	{
		t1202 * L_0 = (t1202 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1202_TI));
		m6165(L_0, &m6165_MI);
		V_0 = L_0;
		NullCheck(p0);
		t27* L_1 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5162_MI, p0);
		V_1 = L_1;
		NullCheck(p0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5159_MI, p0);
		V_2 = L_2;
		V_3 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), V_2));
		V_4 = ((t548*)SZArrayNew(InitializedTypeInfo(&t548_TI), V_2));
		V_5 = 0;
		goto IL_0039;
	}

IL_0028:
	{
		NullCheck(p0);
		t27* L_3 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5162_MI, p0);
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, V_5);
		ArrayElementTypeCheck (V_4, L_3);
		*((t27**)(t27**)SZArrayLdElema(V_4, V_5)) = (t27*)L_3;
		V_5 = ((int32_t)(V_5+1));
	}

IL_0039:
	{
		if ((((int32_t)V_5) < ((int32_t)V_2)))
		{
			goto IL_0028;
		}
	}
	{
		if (!p2)
		{
			goto IL_0084;
		}
	}
	{
		V_6 = ((t1649*)SZArrayNew(InitializedTypeInfo(&t1649_TI), V_2));
		V_7 = 0;
		goto IL_005f;
	}

IL_004e:
	{
		NullCheck(p0);
		uint8_t L_4 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p0);
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, V_7);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(V_6, V_7)) = (uint8_t)L_4;
		V_7 = ((int32_t)(V_7+1));
	}

IL_005f:
	{
		if ((((int32_t)V_7) < ((int32_t)V_2)))
		{
			goto IL_004e;
		}
	}
	{
		V_8 = 0;
		goto IL_007f;
	}

IL_0069:
	{
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, V_8);
		t131 * L_5 = m6192(__this, p0, (*(uint8_t*)(uint8_t*)SZArrayLdElema(V_6, V_8)), &m6192_MI);
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, V_8);
		ArrayElementTypeCheck (V_3, L_5);
		*((t131 **)(t131 **)SZArrayLdElema(V_3, V_8)) = (t131 *)L_5;
		V_8 = ((int32_t)(V_8+1));
	}

IL_007f:
	{
		if ((((int32_t)V_8) < ((int32_t)V_2)))
		{
			goto IL_0069;
		}
	}

IL_0084:
	{
		if (p1)
		{
			goto IL_00a1;
		}
	}
	{
		NullCheck(p0);
		uint32_t L_6 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&m5165_MI, p0);
		V_9 = (((uint64_t)L_6));
		t131 * L_7 = m6191(__this, V_9, V_1, &m6191_MI);
		NullCheck(V_0);
		V_0->f0 = L_7;
		goto IL_00ae;
	}

IL_00a1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_8 = m3500(NULL, V_1, 1, &m3500_MI);
		NullCheck(V_0);
		V_0->f0 = L_8;
	}

IL_00ae:
	{
		NullCheck(V_0);
		V_0->f1 = V_3;
		NullCheck(V_0);
		V_0->f2 = V_4;
		NullCheck(V_4);
		NullCheck(V_0);
		V_0->f4 = (((int32_t)(((t122 *)V_4)->max_length)));
		t25 * L_9 = (__this->f0);
		if (!L_9)
		{
			goto IL_00f8;
		}
	}
	{
		t25 * L_10 = (__this->f0);
		NullCheck(V_0);
		t131 * L_11 = (V_0->f0);
		t824  L_12 = (__this->f1);
		NullCheck(L_10);
		t25 * L_13 = (t25 *)InterfaceFuncInvoker3< t25 *, t131 *, t824 , t25 ** >::Invoke(&m8309_MI, L_10, L_11, L_12, (&V_10));
		V_11 = L_13;
		NullCheck(V_0);
		V_0->f5 = ((((int32_t)((((t25 *)V_11) == ((t25 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00f8:
	{
		NullCheck(V_0);
		bool L_14 = (V_0->f5);
		if (L_14)
		{
			goto IL_0233;
		}
	}
	{
		NullCheck(V_0);
		t131 * L_15 = (V_0->f0);
		NullCheck(L_15);
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4336_MI, L_15);
		if (L_16)
		{
			goto IL_011b;
		}
	}
	{
		t1223 * L_17 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_17, (t27*) &_stringLiteral1016, &m6257_MI);
		il2cpp_codegen_raise_exception (L_17);
	}

IL_011b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_18 = m484(NULL, LoadTypeToken(&t485_0_0_0), &m484_MI);
		NullCheck(V_0);
		t131 * L_19 = (V_0->f0);
		NullCheck(L_18);
		bool L_20 = (bool)VirtFuncInvoker1< bool, t131 * >::Invoke(&m3503_MI, L_18, L_19);
		NullCheck(V_0);
		V_0->f5 = L_20;
		NullCheck(V_0);
		bool L_21 = (V_0->f5);
		if (L_21)
		{
			goto IL_0233;
		}
	}
	{
		NullCheck(V_0);
		V_0->f3 = ((t1203*)SZArrayNew(InitializedTypeInfo(&t1203_TI), V_2));
		V_12 = 0;
		goto IL_0224;
	}

IL_0155:
	{
		V_13 = (t839 *)NULL;
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, V_12);
		V_14 = (*(t27**)(t27**)SZArrayLdElema(V_4, V_12));
		NullCheck(V_14);
		int32_t L_22 = m2296(V_14, ((int32_t)43), &m2296_MI);
		V_15 = L_22;
		if ((((int32_t)V_15) == ((int32_t)(-1))))
		{
			goto IL_01cb;
		}
	}
	{
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, V_12);
		NullCheck((*(t27**)(t27**)SZArrayLdElema(V_4, V_12)));
		t27* L_23 = m2236((*(t27**)(t27**)SZArrayLdElema(V_4, V_12)), 0, V_15, &m2236_MI);
		V_16 = L_23;
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, V_12);
		NullCheck((*(t27**)(t27**)SZArrayLdElema(V_4, V_12)));
		t27* L_24 = m2262((*(t27**)(t27**)SZArrayLdElema(V_4, V_12)), ((int32_t)(V_15+1)), &m2262_MI);
		V_14 = L_24;
		NullCheck(V_0);
		t131 * L_25 = (V_0->f0);
		NullCheck(L_25);
		t131 * L_26 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3432_MI, L_25);
		V_17 = L_26;
		goto IL_01c5;
	}

IL_019d:
	{
		NullCheck(V_17);
		t27* L_27 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3448_MI, V_17);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_28 = m386(NULL, L_27, V_16, &m386_MI);
		if (!L_28)
		{
			goto IL_01bc;
		}
	}
	{
		NullCheck(V_17);
		t839 * L_29 = (t839 *)VirtFuncInvoker2< t839 *, t27*, int32_t >::Invoke(&m7962_MI, V_17, V_14, ((int32_t)52));
		V_13 = L_29;
		goto IL_01c9;
	}

IL_01bc:
	{
		NullCheck(V_17);
		t131 * L_30 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3432_MI, V_17);
		V_17 = L_30;
	}

IL_01c5:
	{
		if (V_17)
		{
			goto IL_019d;
		}
	}

IL_01c9:
	{
		goto IL_01dc;
	}

IL_01cb:
	{
		NullCheck(V_0);
		t131 * L_31 = (V_0->f0);
		NullCheck(L_31);
		t839 * L_32 = (t839 *)VirtFuncInvoker2< t839 *, t27*, int32_t >::Invoke(&m7962_MI, L_31, V_14, ((int32_t)52));
		V_13 = L_32;
	}

IL_01dc:
	{
		if (V_13)
		{
			goto IL_0205;
		}
	}
	{
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, V_12);
		NullCheck(V_0);
		t131 * L_33 = (V_0->f0);
		NullCheck(L_33);
		t27* L_34 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, L_33);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_35 = m3450(NULL, (t27*) &_stringLiteral1017, (*(t27**)(t27**)SZArrayLdElema(V_4, V_12)), (t27*) &_stringLiteral1018, L_34, &m3450_MI);
		t1223 * L_36 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_36, L_35, &m6257_MI);
		il2cpp_codegen_raise_exception (L_36);
	}

IL_0205:
	{
		NullCheck(V_0);
		t1203* L_37 = (V_0->f3);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, V_12);
		ArrayElementTypeCheck (L_37, V_13);
		*((t438 **)(t438 **)SZArrayLdElema(L_37, V_12)) = (t438 *)V_13;
		if (p2)
		{
			goto IL_021e;
		}
	}
	{
		NullCheck(V_13);
		t131 * L_38 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m8274_MI, V_13);
		NullCheck(V_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_3, V_12);
		ArrayElementTypeCheck (V_3, L_38);
		*((t131 **)(t131 **)SZArrayLdElema(V_3, V_12)) = (t131 *)L_38;
	}

IL_021e:
	{
		V_12 = ((int32_t)(V_12+1));
	}

IL_0224:
	{
		if ((((int32_t)V_12) < ((int32_t)V_2)))
		{
			goto IL_0155;
		}
	}
	{
		NullCheck(V_0);
		V_0->f2 = (t548*)NULL;
	}

IL_0233:
	{
		t972 * L_39 = (__this->f6);
		NullCheck(V_0);
		t131 * L_40 = (V_0->f0);
		NullCheck(L_39);
		bool L_41 = (bool)VirtFuncInvoker1< bool, t25 * >::Invoke(&m4921_MI, L_39, L_40);
		if (L_41)
		{
			goto IL_0258;
		}
	}
	{
		t972 * L_42 = (__this->f6);
		NullCheck(V_0);
		t131 * L_43 = (V_0->f0);
		NullCheck(L_42);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4915_MI, L_42, L_43, V_0);
	}

IL_0258:
	{
		return V_0;
	}
}
extern MethodInfo m6188_MI;
 void m6188 (t1205 * __this, t1001 * p0, t25 * p1, int64_t p2, t823 * p3, t131 * p4, t27* p5, t438 * p6, t822* p7, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6188_MI);
	t25 * V_0 = {0};
	uint8_t V_1 = {0};
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	t823 * V_4 = {0};
	bool V_5 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1191_TI));
		bool L_0 = m6149(NULL, p4, &m6149_MI);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		t25 * L_1 = m6193(NULL, p0, p4, &m6193_MI);
		V_0 = L_1;
		m6189(__this, p1, p5, p6, p3, V_0, p4, p7, &m6189_MI);
		return;
	}

IL_0025:
	{
		NullCheck(p0);
		uint8_t L_2 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p0);
		V_1 = L_2;
		if ((((uint32_t)V_1) != ((uint32_t)((int32_t)9))))
		{
			goto IL_004b;
		}
	}
	{
		NullCheck(p0);
		uint32_t L_3 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&m5165_MI, p0);
		V_2 = (((uint64_t)L_3));
		m6190(__this, p2, V_2, p1, p3, p5, p6, p7, &m6190_MI);
		return;
	}

IL_004b:
	{
		m6173(__this, V_1, p0, (&V_3), (&V_0), (&V_4), &m6173_MI);
		V_5 = 0;
		if (!V_3)
		{
			goto IL_00aa;
		}
	}
	{
		NullCheck(V_0);
		t131 * L_4 = m1959(V_0, &m1959_MI);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4337_MI, L_4);
		if (!L_5)
		{
			goto IL_0080;
		}
	}
	{
		m6190(__this, p2, V_3, p1, p3, p5, p6, p7, &m6190_MI);
		V_5 = 1;
	}

IL_0080:
	{
		if (p3)
		{
			goto IL_009c;
		}
	}
	{
		if (((t122 *)IsInst(p1, InitializedTypeInfo(&t122_TI))))
		{
			goto IL_009c;
		}
	}
	{
		m6178(__this, V_3, V_0, V_4, p2, p6, (t822*)(t822*)NULL, &m6178_MI);
		goto IL_00aa;
	}

IL_009c:
	{
		m6178(__this, V_3, V_0, V_4, p2, (t438 *)NULL, p7, &m6178_MI);
	}

IL_00aa:
	{
		if (V_5)
		{
			goto IL_00c0;
		}
	}
	{
		m6189(__this, p1, p5, p6, p3, V_0, p4, p7, &m6189_MI);
	}

IL_00c0:
	{
		return;
	}
}
extern MethodInfo m6189_MI;
 void m6189 (t1205 * __this, t25 * p0, t27* p1, t438 * p2, t823 * p3, t25 * p4, t131 * p5, t822* p6, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6189_MI);
	int32_t V_0 = 0;
	{
		if (!((t25 *)IsInst(p4, InitializedTypeInfo(&t1627_TI))))
		{
			goto IL_001f;
		}
	}
	{
		t824  L_0 = (__this->f1);
		NullCheck(((t25 *)Castclass(p4, InitializedTypeInfo(&t1627_TI))));
		t25 * L_1 = (t25 *)InterfaceFuncInvoker1< t25 *, t824  >::Invoke(&m8315_MI, ((t25 *)Castclass(p4, InitializedTypeInfo(&t1627_TI))), L_0);
		p4 = L_1;
	}

IL_001f:
	{
		if (!((t122 *)IsInst(p0, InitializedTypeInfo(&t122_TI))))
		{
			goto IL_005f;
		}
	}
	{
		if (!((t1204 *)IsInst(p4, InitializedTypeInfo(&t1204_TI))))
		{
			goto IL_004e;
		}
	}
	{
		NullCheck(((t1204 *)Castclass(p4, InitializedTypeInfo(&t1204_TI))));
		int32_t L_2 = (((t1204 *)Castclass(p4, InitializedTypeInfo(&t1204_TI)))->f0);
		V_0 = L_2;
		NullCheck(p6);
		IL2CPP_ARRAY_BOUNDS_CHECK(p6, 0);
		int32_t* L_3 = ((int32_t*)(int32_t*)SZArrayLdElema(p6, 0));
		*((int32_t*)(L_3)) = (int32_t)((int32_t)((*((int32_t*)L_3))+((int32_t)(V_0-1))));
		goto IL_005d;
	}

IL_004e:
	{
		NullCheck(((t122 *)Castclass(p0, InitializedTypeInfo(&t122_TI))));
		m4242(((t122 *)Castclass(p0, InitializedTypeInfo(&t122_TI))), p4, p6, &m4242_MI);
	}

IL_005d:
	{
		goto IL_0098;
	}

IL_005f:
	{
		if (!p3)
		{
			goto IL_0071;
		}
	}
	{
		NullCheck(p3);
		m6260(p3, p1, p4, p5, &m6260_MI);
		goto IL_0098;
	}

IL_0071:
	{
		if (!((t839 *)IsInst(p2, InitializedTypeInfo(&t839_TI))))
		{
			goto IL_0089;
		}
	}
	{
		NullCheck(((t839 *)Castclass(p2, InitializedTypeInfo(&t839_TI))));
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m5671_MI, ((t839 *)Castclass(p2, InitializedTypeInfo(&t839_TI))), p0, p4);
		goto IL_0098;
	}

IL_0089:
	{
		NullCheck(((t841 *)Castclass(p2, InitializedTypeInfo(&t841_TI))));
		VirtActionInvoker3< t25 *, t25 *, t158* >::Invoke(&m5846_MI, ((t841 *)Castclass(p2, InitializedTypeInfo(&t841_TI))), p0, p4, (t158*)(t158*)NULL);
	}

IL_0098:
	{
		return;
	}
}
extern MethodInfo m6190_MI;
 void m6190 (t1205 * __this, int64_t p0, int64_t p1, t25 * p2, t823 * p3, t27* p4, t438 * p5, t822* p6, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6190_MI);
	{
		if (!p3)
		{
			goto IL_0015;
		}
	}
	{
		t1206 * L_0 = (__this->f4);
		NullCheck(L_0);
		VirtActionInvoker3< int64_t, t27*, int64_t >::Invoke(&m6213_MI, L_0, p0, p4, p1);
		goto IL_0061;
	}

IL_0015:
	{
		if (!((t122 *)IsInst(p2, InitializedTypeInfo(&t122_TI))))
		{
			goto IL_0052;
		}
	}
	{
		NullCheck(p6);
		if ((((uint32_t)(((int32_t)(((t122 *)p6)->max_length)))) != ((uint32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		t1206 * L_1 = (__this->f4);
		NullCheck(p6);
		IL2CPP_ARRAY_BOUNDS_CHECK(p6, 0);
		NullCheck(L_1);
		VirtActionInvoker3< int64_t, int32_t, int64_t >::Invoke(&m6211_MI, L_1, p0, (*(int32_t*)(int32_t*)SZArrayLdElema(p6, 0)), p1);
		goto IL_0050;
	}

IL_0037:
	{
		t1206 * L_2 = (__this->f4);
		NullCheck(p6);
		t25 * L_3 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4281_MI, p6);
		NullCheck(L_2);
		VirtActionInvoker3< int64_t, t822*, int64_t >::Invoke(&m6212_MI, L_2, p0, ((t822*)Castclass(L_3, InitializedTypeInfo(&t822_TI))), p1);
	}

IL_0050:
	{
		goto IL_0061;
	}

IL_0052:
	{
		t1206 * L_4 = (__this->f4);
		NullCheck(L_4);
		VirtActionInvoker3< int64_t, t438 *, int64_t >::Invoke(&m6214_MI, L_4, p0, p5, p1);
	}

IL_0061:
	{
		return;
	}
}
extern MethodInfo m6191_MI;
 t131 * m6191 (t1205 * __this, int64_t p0, t27* p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6191_MI);
	t131 * V_0 = {0};
	t27* V_1 = {0};
	t836 * V_2 = {0};
	{
		t972 * L_0 = (__this->f5);
		int64_t L_1 = p0;
		t25 * L_2 = Box(InitializedTypeInfo(&t817_TI), &L_1);
		NullCheck(L_0);
		t25 * L_3 = (t25 *)VirtFuncInvoker1< t25 *, t25 * >::Invoke(&m4914_MI, L_0, L_2);
		V_1 = ((t27*)Castclass(L_3, (&t27_TI)));
		t1196 * L_4 = (__this->f2);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		t1196 * L_5 = (__this->f2);
		NullCheck(L_5);
		t131 * L_6 = (t131 *)VirtFuncInvoker2< t131 *, t27*, t27* >::Invoke(&m8316_MI, L_5, V_1, p1);
		V_0 = L_6;
		if (!V_0)
		{
			goto IL_0032;
		}
	}
	{
		return V_0;
	}

IL_0032:
	{
		t836 * L_7 = m5615(NULL, V_1, &m5615_MI);
		V_2 = L_7;
		NullCheck(V_2);
		t131 * L_8 = (t131 *)VirtFuncInvoker2< t131 *, t27*, bool >::Invoke(&m5608_MI, V_2, p1, 1);
		V_0 = L_8;
		if (!V_0)
		{
			goto IL_0047;
		}
	}
	{
		return V_0;
	}

IL_0047:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_9 = m532(NULL, (t27*) &_stringLiteral1019, p1, (t27*) &_stringLiteral330, &m532_MI);
		t1223 * L_10 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_10, L_9, &m6257_MI);
		il2cpp_codegen_raise_exception (L_10);
	}
}
extern MethodInfo m6192_MI;
 t131 * m6192 (t1205 * __this, t1001 * p0, uint8_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6192_MI);
	t27* V_0 = {0};
	t131 * V_1 = {0};
	t27* V_2 = {0};
	int64_t V_3 = 0;
	t131 * V_4 = {0};
	uint8_t V_5 = {0};
	{
		V_5 = p1;
		if (V_5 == 0)
		{
			goto IL_002f;
		}
		if (V_5 == 1)
		{
			goto IL_003b;
		}
		if (V_5 == 2)
		{
			goto IL_0046;
		}
		if (V_5 == 3)
		{
			goto IL_0051;
		}
		if (V_5 == 4)
		{
			goto IL_00b4;
		}
		if (V_5 == 5)
		{
			goto IL_00cc;
		}
		if (V_5 == 6)
		{
			goto IL_00d7;
		}
		if (V_5 == 7)
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_0106;
	}

IL_002f:
	{
		NullCheck(p0);
		uint8_t L_0 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1191_TI));
		t131 * L_1 = m6150(NULL, L_0, &m6150_MI);
		return L_1;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_2 = m484(NULL, LoadTypeToken(&t27_0_0_0), &m484_MI);
		return L_2;
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_3 = m484(NULL, LoadTypeToken(&t25_0_0_0), &m484_MI);
		return L_3;
	}

IL_0051:
	{
		NullCheck(p0);
		t27* L_4 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5162_MI, p0);
		V_0 = L_4;
		t824 * L_5 = &(__this->f1);
		int32_t L_6 = m6285(L_5, &m6285_MI);
		if ((((uint32_t)L_6) != ((uint32_t)((int32_t)16))))
		{
			goto IL_0097;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_7 = m386(NULL, V_0, (t27*) &_stringLiteral1020, &m386_MI);
		if (!L_7)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_8 = m484(NULL, LoadTypeToken(&t1398_0_0_0), &m484_MI);
		return L_8;
	}

IL_007f:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		bool L_9 = m386(NULL, V_0, (t27*) &_stringLiteral1021, &m386_MI);
		if (!L_9)
		{
			goto IL_0097;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_10 = m484(NULL, LoadTypeToken(&t1650_0_0_0), &m484_MI);
		return L_10;
	}

IL_0097:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_11 = m4346(NULL, V_0, &m4346_MI);
		V_1 = L_11;
		if (!V_1)
		{
			goto IL_00a3;
		}
	}
	{
		return V_1;
	}

IL_00a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_12 = m593(NULL, (t27*) &_stringLiteral1022, V_0, &m593_MI);
		t1223 * L_13 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_13, L_12, &m6257_MI);
		il2cpp_codegen_raise_exception (L_13);
	}

IL_00b4:
	{
		NullCheck(p0);
		t27* L_14 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5162_MI, p0);
		V_2 = L_14;
		NullCheck(p0);
		uint32_t L_15 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&m5165_MI, p0);
		V_3 = (((uint64_t)L_15));
		t131 * L_16 = m6191(__this, V_3, V_2, &m6191_MI);
		return L_16;
	}

IL_00cc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_17 = m484(NULL, LoadTypeToken(&t158_0_0_0), &m484_MI);
		return L_17;
	}

IL_00d7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_18 = m484(NULL, LoadTypeToken(&t548_0_0_0), &m484_MI);
		return L_18;
	}

IL_00e2:
	{
		NullCheck(p0);
		uint8_t L_19 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1191_TI));
		t131 * L_20 = m6150(NULL, L_19, &m6150_MI);
		V_4 = L_20;
		NullCheck(V_4);
		t27* L_21 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, V_4);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_22 = m610(NULL, L_21, (t27*) &_stringLiteral1023, &m610_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_23 = m4346(NULL, L_22, &m4346_MI);
		return L_23;
	}

IL_0106:
	{
		t177 * L_24 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m7533(L_24, (t27*) &_stringLiteral1024, &m7533_MI);
		il2cpp_codegen_raise_exception (L_24);
	}
}
extern MethodInfo m6193_MI;
 t25 * m6193 (t25 * __this, t1001 * p0, t131 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6193_MI);
	int32_t V_0 = {0};
	{
		if (p1)
		{
			goto IL_0005;
		}
	}
	{
		return NULL;
	}

IL_0005:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		int32_t L_0 = m4348(NULL, p1, &m4348_MI);
		V_0 = L_0;
		if (((int32_t)(V_0-3)) == 0)
		{
			goto IL_0059;
		}
		if (((int32_t)(V_0-3)) == 1)
		{
			goto IL_0071;
		}
		if (((int32_t)(V_0-3)) == 2)
		{
			goto IL_00d4;
		}
		if (((int32_t)(V_0-3)) == 3)
		{
			goto IL_0065;
		}
		if (((int32_t)(V_0-3)) == 4)
		{
			goto IL_00b0;
		}
		if (((int32_t)(V_0-3)) == 5)
		{
			goto IL_00ec;
		}
		if (((int32_t)(V_0-3)) == 6)
		{
			goto IL_00bc;
		}
		if (((int32_t)(V_0-3)) == 7)
		{
			goto IL_00f8;
		}
		if (((int32_t)(V_0-3)) == 8)
		{
			goto IL_00c8;
		}
		if (((int32_t)(V_0-3)) == 9)
		{
			goto IL_0104;
		}
		if (((int32_t)(V_0-3)) == 10)
		{
			goto IL_00e0;
		}
		if (((int32_t)(V_0-3)) == 11)
		{
			goto IL_00a4;
		}
		if (((int32_t)(V_0-3)) == 12)
		{
			goto IL_008e;
		}
		if (((int32_t)(V_0-3)) == 13)
		{
			goto IL_007d;
		}
		if (((int32_t)(V_0-3)) == 14)
		{
			goto IL_0117;
		}
		if (((int32_t)(V_0-3)) == 15)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0117;
	}

IL_0059:
	{
		NullCheck(p0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5153_MI, p0);
		bool L_2 = L_1;
		t25 * L_3 = Box(InitializedTypeInfo(&t125_TI), &L_2);
		return L_3;
	}

IL_0065:
	{
		NullCheck(p0);
		uint8_t L_4 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m5154_MI, p0);
		uint8_t L_5 = L_4;
		t25 * L_6 = Box(InitializedTypeInfo(&t462_TI), &L_5);
		return L_6;
	}

IL_0071:
	{
		NullCheck(p0);
		uint16_t L_7 = (uint16_t)VirtFuncInvoker0< uint16_t >::Invoke(&m5155_MI, p0);
		uint16_t L_8 = L_7;
		t25 * L_9 = Box(InitializedTypeInfo(&t344_TI), &L_8);
		return L_9;
	}

IL_007d:
	{
		NullCheck(p0);
		int64_t L_10 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m5160_MI, p0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t566_TI));
		t566  L_11 = m7295(NULL, L_10, &m7295_MI);
		t566  L_12 = L_11;
		t25 * L_13 = Box(InitializedTypeInfo(&t566_TI), &L_12);
		return L_13;
	}

IL_008e:
	{
		NullCheck(p0);
		t27* L_14 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5162_MI, p0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t728_TI));
		t728 * L_15 = m5012(NULL, &m5012_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t812_TI));
		t812  L_16 = m4070(NULL, L_14, L_15, &m4070_MI);
		t812  L_17 = L_16;
		t25 * L_18 = Box(InitializedTypeInfo(&t812_TI), &L_17);
		return L_18;
	}

IL_00a4:
	{
		NullCheck(p0);
		double L_19 = (double)VirtFuncInvoker0< double >::Invoke(&m5157_MI, p0);
		double L_20 = L_19;
		t25 * L_21 = Box(InitializedTypeInfo(&t701_TI), &L_20);
		return L_21;
	}

IL_00b0:
	{
		NullCheck(p0);
		int16_t L_22 = (int16_t)VirtFuncInvoker0< int16_t >::Invoke(&m5158_MI, p0);
		int16_t L_23 = L_22;
		t25 * L_24 = Box(InitializedTypeInfo(&t483_TI), &L_23);
		return L_24;
	}

IL_00bc:
	{
		NullCheck(p0);
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5159_MI, p0);
		int32_t L_26 = L_25;
		t25 * L_27 = Box(InitializedTypeInfo(&t134_TI), &L_26);
		return L_27;
	}

IL_00c8:
	{
		NullCheck(p0);
		int64_t L_28 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m5160_MI, p0);
		int64_t L_29 = L_28;
		t25 * L_30 = Box(InitializedTypeInfo(&t817_TI), &L_29);
		return L_30;
	}

IL_00d4:
	{
		NullCheck(p0);
		int8_t L_31 = (int8_t)VirtFuncInvoker0< int8_t >::Invoke(&m5161_MI, p0);
		int8_t L_32 = L_31;
		t25 * L_33 = Box(InitializedTypeInfo(&t137_TI), &L_32);
		return L_33;
	}

IL_00e0:
	{
		NullCheck(p0);
		float L_34 = (float)VirtFuncInvoker0< float >::Invoke(&m5163_MI, p0);
		float L_35 = L_34;
		t25 * L_36 = Box(InitializedTypeInfo(&t124_TI), &L_35);
		return L_36;
	}

IL_00ec:
	{
		NullCheck(p0);
		uint16_t L_37 = (uint16_t)VirtFuncInvoker0< uint16_t >::Invoke(&m5164_MI, p0);
		uint16_t L_38 = L_37;
		t25 * L_39 = Box(InitializedTypeInfo(&t721_TI), &L_38);
		return L_39;
	}

IL_00f8:
	{
		NullCheck(p0);
		uint32_t L_40 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&m5165_MI, p0);
		uint32_t L_41 = L_40;
		t25 * L_42 = Box(InitializedTypeInfo(&t176_TI), &L_41);
		return L_42;
	}

IL_0104:
	{
		NullCheck(p0);
		uint64_t L_43 = (uint64_t)VirtFuncInvoker0< uint64_t >::Invoke(&m5166_MI, p0);
		uint64_t L_44 = L_43;
		t25 * L_45 = Box(InitializedTypeInfo(&t818_TI), &L_44);
		return L_45;
	}

IL_0110:
	{
		NullCheck(p0);
		t27* L_46 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5162_MI, p0);
		return L_46;
	}

IL_0117:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_47 = m484(NULL, LoadTypeToken(&t996_0_0_0), &m484_MI);
		if ((((t131 *)p1) != ((t131 *)L_47)))
		{
			goto IL_0135;
		}
	}
	{
		NullCheck(p0);
		int64_t L_48 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m5160_MI, p0);
		t996  L_49 = {0};
		m7676(&L_49, L_48, &m7676_MI);
		t996  L_50 = L_49;
		t25 * L_51 = Box(InitializedTypeInfo(&t996_TI), &L_50);
		return L_51;
	}

IL_0135:
	{
		NullCheck(p1);
		t27* L_52 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, p1);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_53 = m610(NULL, (t27*) &_stringLiteral1015, L_52, &m610_MI);
		t177 * L_54 = (t177 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t177_TI));
		m7533(L_54, L_53, &m7533_MI);
		il2cpp_codegen_raise_exception (L_54);
	}
}
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.ObjectReader
extern Il2CppType t1160_0_0_1;
FieldInfo t1205_f0_FieldInfo = 
{
	"_surrogateSelector", &t1160_0_0_1, &t1205_TI, offsetof(t1205, f0), &EmptyCustomAttributesCache};
extern Il2CppType t824_0_0_1;
FieldInfo t1205_f1_FieldInfo = 
{
	"_context", &t824_0_0_1, &t1205_TI, offsetof(t1205, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1196_0_0_1;
FieldInfo t1205_f2_FieldInfo = 
{
	"_binder", &t1196_0_0_1, &t1205_TI, offsetof(t1205, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1199_0_0_1;
FieldInfo t1205_f3_FieldInfo = 
{
	"_filterLevel", &t1199_0_0_1, &t1205_TI, offsetof(t1205, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1206_0_0_1;
FieldInfo t1205_f4_FieldInfo = 
{
	"_manager", &t1206_0_0_1, &t1205_TI, offsetof(t1205, f4), &EmptyCustomAttributesCache};
extern Il2CppType t972_0_0_1;
FieldInfo t1205_f5_FieldInfo = 
{
	"_registeredAssemblies", &t972_0_0_1, &t1205_TI, offsetof(t1205, f5), &EmptyCustomAttributesCache};
extern Il2CppType t972_0_0_1;
FieldInfo t1205_f6_FieldInfo = 
{
	"_typeMetadataCache", &t972_0_0_1, &t1205_TI, offsetof(t1205, f6), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_1;
FieldInfo t1205_f7_FieldInfo = 
{
	"_lastObject", &t25_0_0_1, &t1205_TI, offsetof(t1205, f7), &EmptyCustomAttributesCache};
extern Il2CppType t817_0_0_1;
FieldInfo t1205_f8_FieldInfo = 
{
	"_lastObjectID", &t817_0_0_1, &t1205_TI, offsetof(t1205, f8), &EmptyCustomAttributesCache};
extern Il2CppType t817_0_0_1;
FieldInfo t1205_f9_FieldInfo = 
{
	"_rootObjectID", &t817_0_0_1, &t1205_TI, offsetof(t1205, f9), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_1;
FieldInfo t1205_f10_FieldInfo = 
{
	"arrayBuffer", &t876_0_0_1, &t1205_TI, offsetof(t1205, f10), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t1205_f11_FieldInfo = 
{
	"ArrayBufferLength", &t134_0_0_1, &t1205_TI, offsetof(t1205, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1205_FIs[] =
{
	&t1205_f0_FieldInfo,
	&t1205_f1_FieldInfo,
	&t1205_f2_FieldInfo,
	&t1205_f3_FieldInfo,
	&t1205_f4_FieldInfo,
	&t1205_f5_FieldInfo,
	&t1205_f6_FieldInfo,
	&t1205_f7_FieldInfo,
	&t1205_f8_FieldInfo,
	&t1205_f9_FieldInfo,
	&t1205_f10_FieldInfo,
	&t1205_f11_FieldInfo,
	NULL
};
extern MethodInfo m6172_MI;
static PropertyInfo t1205____CurrentObject_PropertyInfo = 
{
	&t1205_TI, "CurrentObject", &m6172_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1205_PIs[] =
{
	&t1205____CurrentObject_PropertyInfo,
	NULL
};
extern Il2CppType t1185_0_0_0;
static ParameterInfo t1205_m6167_ParameterInfos[] = 
{
	{"formatter", 0, 134221607, &EmptyCustomAttributesCache, &t1185_0_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6167_MI = 
{
	".ctor", (methodPointerType)&m6167, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1205_m6167_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3225, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t25_1_0_0;
extern Il2CppType t1153_1_0_0;
static ParameterInfo t1205_m6168_ParameterInfos[] = 
{
	{"reader", 0, 134221608, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"readHeaders", 1, 134221609, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"result", 2, 134221610, &EmptyCustomAttributesCache, &t25_1_0_0},
	{"headers", 3, 134221611, &EmptyCustomAttributesCache, &t1153_1_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t137_t1625_t1651 (MethodInfo* method, void* obj, void** args);
MethodInfo m6168_MI = 
{
	"ReadObjectGraph", (methodPointerType)&m6168, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t137_t1625_t1651, t1205_m6168_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 4, false, false, 3226, NULL, (methodPointerType)NULL};
extern Il2CppType t1192_0_0_0;
extern Il2CppType t1001_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t25_1_0_0;
extern Il2CppType t1153_1_0_0;
static ParameterInfo t1205_m6169_ParameterInfos[] = 
{
	{"elem", 0, 134221612, &EmptyCustomAttributesCache, &t1192_0_0_0},
	{"reader", 1, 134221613, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"readHeaders", 2, 134221614, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"result", 3, 134221615, &EmptyCustomAttributesCache, &t25_1_0_0},
	{"headers", 4, 134221616, &EmptyCustomAttributesCache, &t1153_1_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t462_t25_t137_t1625_t1651 (MethodInfo* method, void* obj, void** args);
MethodInfo m6169_MI = 
{
	"ReadObjectGraph", (methodPointerType)&m6169, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t462_t25_t137_t1625_t1651, t1205_m6169_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 5, false, false, 3227, NULL, (methodPointerType)NULL};
extern Il2CppType t1192_0_0_0;
extern Il2CppType t1001_0_0_0;
static ParameterInfo t1205_m6170_ParameterInfos[] = 
{
	{"element", 0, 134221617, &EmptyCustomAttributesCache, &t1192_0_0_0},
	{"reader", 1, 134221618, &EmptyCustomAttributesCache, &t1001_0_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t462_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6170_MI = 
{
	"ReadNextObject", (methodPointerType)&m6170, &t1205_TI, &t125_0_0_0, RuntimeInvoker_t125_t462_t25, t1205_m6170_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 3228, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
static ParameterInfo t1205_m6171_ParameterInfos[] = 
{
	{"reader", 0, 134221619, &EmptyCustomAttributesCache, &t1001_0_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6171_MI = 
{
	"ReadNextObject", (methodPointerType)&m6171, &t1205_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t1205_m6171_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 3229, NULL, (methodPointerType)NULL};
extern TypeInfo t1205_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6172_MI = 
{
	"get_CurrentObject", (methodPointerType)&m6172, &t1205_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3230, NULL, (methodPointerType)NULL};
extern Il2CppType t1192_0_0_0;
extern Il2CppType t1001_0_0_0;
extern Il2CppType t817_1_0_0;
extern Il2CppType t25_1_0_0;
extern Il2CppType t823_1_0_0;
static ParameterInfo t1205_m6173_ParameterInfos[] = 
{
	{"element", 0, 134221620, &EmptyCustomAttributesCache, &t1192_0_0_0},
	{"reader", 1, 134221621, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"objectId", 2, 134221622, &EmptyCustomAttributesCache, &t817_1_0_0},
	{"value", 3, 134221623, &EmptyCustomAttributesCache, &t25_1_0_0},
	{"info", 4, 134221624, &EmptyCustomAttributesCache, &t823_1_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t462_t25_t1452_t1625_t1652 (MethodInfo* method, void* obj, void** args);
MethodInfo m6173_MI = 
{
	"ReadObject", (methodPointerType)&m6173, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t462_t25_t1452_t1625_t1652, t1205_m6173_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 5, false, false, 3231, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
static ParameterInfo t1205_m6174_ParameterInfos[] = 
{
	{"reader", 0, 134221625, &EmptyCustomAttributesCache, &t1001_0_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6174_MI = 
{
	"ReadAssembly", (methodPointerType)&m6174, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1205_m6174_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3232, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t817_1_0_0;
extern Il2CppType t25_1_0_0;
extern Il2CppType t823_1_0_0;
static ParameterInfo t1205_m6175_ParameterInfos[] = 
{
	{"reader", 0, 134221626, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"isRuntimeObject", 1, 134221627, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"hasTypeInfo", 2, 134221628, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"objectId", 3, 134221629, &EmptyCustomAttributesCache, &t817_1_0_0},
	{"value", 4, 134221630, &EmptyCustomAttributesCache, &t25_1_0_0},
	{"info", 5, 134221631, &EmptyCustomAttributesCache, &t823_1_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t137_t137_t1452_t1625_t1652 (MethodInfo* method, void* obj, void** args);
MethodInfo m6175_MI = 
{
	"ReadObjectInstance", (methodPointerType)&m6175, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t137_t137_t1452_t1625_t1652, t1205_m6175_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 3233, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t817_1_0_0;
extern Il2CppType t25_1_0_0;
extern Il2CppType t823_1_0_0;
static ParameterInfo t1205_m6176_ParameterInfos[] = 
{
	{"reader", 0, 134221632, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"objectId", 1, 134221633, &EmptyCustomAttributesCache, &t817_1_0_0},
	{"value", 2, 134221634, &EmptyCustomAttributesCache, &t25_1_0_0},
	{"info", 3, 134221635, &EmptyCustomAttributesCache, &t823_1_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t1452_t1625_t1652 (MethodInfo* method, void* obj, void** args);
MethodInfo m6176_MI = 
{
	"ReadRefTypeObjectInstance", (methodPointerType)&m6176, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t1452_t1625_t1652, t1205_m6176_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 3234, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t1202_0_0_0;
extern Il2CppType t817_0_0_0;
extern Il2CppType t25_1_0_0;
extern Il2CppType t823_1_0_0;
static ParameterInfo t1205_m6177_ParameterInfos[] = 
{
	{"reader", 0, 134221636, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"metadata", 1, 134221637, &EmptyCustomAttributesCache, &t1202_0_0_0},
	{"objectId", 2, 134221638, &EmptyCustomAttributesCache, &t817_0_0_0},
	{"objectInstance", 3, 134221639, &EmptyCustomAttributesCache, &t25_1_0_0},
	{"info", 4, 134221640, &EmptyCustomAttributesCache, &t823_1_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t817_t1625_t1652 (MethodInfo* method, void* obj, void** args);
MethodInfo m6177_MI = 
{
	"ReadObjectContent", (methodPointerType)&m6177, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t817_t1625_t1652, t1205_m6177_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 5, false, false, 3235, NULL, (methodPointerType)NULL};
extern Il2CppType t817_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t823_0_0_0;
extern Il2CppType t817_0_0_0;
extern Il2CppType t438_0_0_0;
extern Il2CppType t822_0_0_0;
static ParameterInfo t1205_m6178_ParameterInfos[] = 
{
	{"objectId", 0, 134221641, &EmptyCustomAttributesCache, &t817_0_0_0},
	{"objectInstance", 1, 134221642, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"info", 2, 134221643, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"parentObjectId", 3, 134221644, &EmptyCustomAttributesCache, &t817_0_0_0},
	{"parentObjectMemeber", 4, 134221645, &EmptyCustomAttributesCache, &t438_0_0_0},
	{"indices", 5, 134221646, &EmptyCustomAttributesCache, &t822_0_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t817_t25_t25_t817_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6178_MI = 
{
	"RegisterObject", (methodPointerType)&m6178, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t817_t25_t25_t817_t25_t25, t1205_m6178_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 6, false, false, 3236, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t817_1_0_0;
extern Il2CppType t25_1_0_0;
static ParameterInfo t1205_m6179_ParameterInfos[] = 
{
	{"reader", 0, 134221647, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"objectId", 1, 134221648, &EmptyCustomAttributesCache, &t817_1_0_0},
	{"value", 2, 134221649, &EmptyCustomAttributesCache, &t25_1_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t1452_t1625 (MethodInfo* method, void* obj, void** args);
MethodInfo m6179_MI = 
{
	"ReadStringIntance", (methodPointerType)&m6179, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t1452_t1625, t1205_m6179_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 3237, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t817_1_0_0;
extern Il2CppType t25_1_0_0;
static ParameterInfo t1205_m6180_ParameterInfos[] = 
{
	{"reader", 0, 134221650, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"objectId", 1, 134221651, &EmptyCustomAttributesCache, &t817_1_0_0},
	{"val", 2, 134221652, &EmptyCustomAttributesCache, &t25_1_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t1452_t1625 (MethodInfo* method, void* obj, void** args);
MethodInfo m6180_MI = 
{
	"ReadGenericArray", (methodPointerType)&m6180, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t1452_t1625, t1205_m6180_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 3238, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
static ParameterInfo t1205_m6181_ParameterInfos[] = 
{
	{"reader", 0, 134221653, &EmptyCustomAttributesCache, &t1001_0_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6181_MI = 
{
	"ReadBoxedPrimitiveTypeValue", (methodPointerType)&m6181, &t1205_TI, &t25_0_0_0, RuntimeInvoker_t25_t25, t1205_m6181_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3239, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t817_1_0_0;
extern Il2CppType t25_1_0_0;
static ParameterInfo t1205_m6182_ParameterInfos[] = 
{
	{"reader", 0, 134221654, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"objectId", 1, 134221655, &EmptyCustomAttributesCache, &t817_1_0_0},
	{"val", 2, 134221656, &EmptyCustomAttributesCache, &t25_1_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t1452_t1625 (MethodInfo* method, void* obj, void** args);
MethodInfo m6182_MI = 
{
	"ReadArrayOfPrimitiveType", (methodPointerType)&m6182, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t1452_t1625, t1205_m6182_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 3240, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t122_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t1205_m6183_ParameterInfos[] = 
{
	{"reader", 0, 134221657, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"array", 1, 134221658, &EmptyCustomAttributesCache, &t122_0_0_0},
	{"dataSize", 2, 134221659, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6183_MI = 
{
	"BlockRead", (methodPointerType)&m6183, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t134, t1205_m6183_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 3241, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t817_1_0_0;
extern Il2CppType t25_1_0_0;
static ParameterInfo t1205_m6184_ParameterInfos[] = 
{
	{"reader", 0, 134221660, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"objectId", 1, 134221661, &EmptyCustomAttributesCache, &t817_1_0_0},
	{"array", 2, 134221662, &EmptyCustomAttributesCache, &t25_1_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t1452_t1625 (MethodInfo* method, void* obj, void** args);
MethodInfo m6184_MI = 
{
	"ReadArrayOfObject", (methodPointerType)&m6184, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t1452_t1625, t1205_m6184_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 3242, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t817_1_0_0;
extern Il2CppType t25_1_0_0;
static ParameterInfo t1205_m6185_ParameterInfos[] = 
{
	{"reader", 0, 134221663, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"objectId", 1, 134221664, &EmptyCustomAttributesCache, &t817_1_0_0},
	{"array", 2, 134221665, &EmptyCustomAttributesCache, &t25_1_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t1452_t1625 (MethodInfo* method, void* obj, void** args);
MethodInfo m6185_MI = 
{
	"ReadArrayOfString", (methodPointerType)&m6185, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t1452_t1625, t1205_m6185_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 3243, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t131_0_0_0;
extern Il2CppType t817_1_0_0;
extern Il2CppType t25_1_0_0;
static ParameterInfo t1205_m6186_ParameterInfos[] = 
{
	{"reader", 0, 134221666, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"elementType", 1, 134221667, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"objectId", 2, 134221668, &EmptyCustomAttributesCache, &t817_1_0_0},
	{"val", 3, 134221669, &EmptyCustomAttributesCache, &t25_1_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t1452_t1625 (MethodInfo* method, void* obj, void** args);
MethodInfo m6186_MI = 
{
	"ReadSimpleArray", (methodPointerType)&m6186, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t1452_t1625, t1205_m6186_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 3244, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1205_m6187_ParameterInfos[] = 
{
	{"reader", 0, 134221670, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"isRuntimeObject", 1, 134221671, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"hasTypeInfo", 2, 134221672, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t1202_0_0_0;
extern void* RuntimeInvoker_t25_t25_t137_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m6187_MI = 
{
	"ReadTypeMetadata", (methodPointerType)&m6187, &t1205_TI, &t1202_0_0_0, RuntimeInvoker_t25_t25_t137_t137, t1205_m6187_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 3245, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t817_0_0_0;
extern Il2CppType t823_0_0_0;
extern Il2CppType t131_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t438_0_0_0;
extern Il2CppType t822_0_0_0;
static ParameterInfo t1205_m6188_ParameterInfos[] = 
{
	{"reader", 0, 134221673, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"parentObject", 1, 134221674, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"parentObjectId", 2, 134221675, &EmptyCustomAttributesCache, &t817_0_0_0},
	{"info", 3, 134221676, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"valueType", 4, 134221677, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"fieldName", 5, 134221678, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"memberInfo", 6, 134221679, &EmptyCustomAttributesCache, &t438_0_0_0},
	{"indices", 7, 134221680, &EmptyCustomAttributesCache, &t822_0_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t817_t25_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6188_MI = 
{
	"ReadValue", (methodPointerType)&m6188, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t817_t25_t25_t25_t25_t25, t1205_m6188_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 8, false, false, 3246, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t438_0_0_0;
extern Il2CppType t823_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t131_0_0_0;
extern Il2CppType t822_0_0_0;
static ParameterInfo t1205_m6189_ParameterInfos[] = 
{
	{"parentObject", 0, 134221681, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"fieldName", 1, 134221682, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"memberInfo", 2, 134221683, &EmptyCustomAttributesCache, &t438_0_0_0},
	{"info", 3, 134221684, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"value", 4, 134221685, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"valueType", 5, 134221686, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"indices", 6, 134221687, &EmptyCustomAttributesCache, &t822_0_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6189_MI = 
{
	"SetObjectValue", (methodPointerType)&m6189, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25_t25_t25_t25_t25, t1205_m6189_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 3247, NULL, (methodPointerType)NULL};
extern Il2CppType t817_0_0_0;
extern Il2CppType t817_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t823_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t438_0_0_0;
extern Il2CppType t822_0_0_0;
static ParameterInfo t1205_m6190_ParameterInfos[] = 
{
	{"parentObjectId", 0, 134221688, &EmptyCustomAttributesCache, &t817_0_0_0},
	{"childObjectId", 1, 134221689, &EmptyCustomAttributesCache, &t817_0_0_0},
	{"parentObject", 2, 134221690, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"info", 3, 134221691, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"fieldName", 4, 134221692, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"memberInfo", 5, 134221693, &EmptyCustomAttributesCache, &t438_0_0_0},
	{"indices", 6, 134221694, &EmptyCustomAttributesCache, &t822_0_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t817_t817_t25_t25_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6190_MI = 
{
	"RecordFixup", (methodPointerType)&m6190, &t1205_TI, &t123_0_0_0, RuntimeInvoker_t123_t817_t817_t25_t25_t25_t25_t25, t1205_m6190_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 7, false, false, 3248, NULL, (methodPointerType)NULL};
extern Il2CppType t817_0_0_0;
extern Il2CppType t27_0_0_0;
static ParameterInfo t1205_m6191_ParameterInfos[] = 
{
	{"assemblyId", 0, 134221695, &EmptyCustomAttributesCache, &t817_0_0_0},
	{"className", 1, 134221696, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25_t817_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6191_MI = 
{
	"GetDeserializationType", (methodPointerType)&m6191, &t1205_TI, &t131_0_0_0, RuntimeInvoker_t25_t817_t25, t1205_m6191_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 3249, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t1193_0_0_0;
static ParameterInfo t1205_m6192_ParameterInfos[] = 
{
	{"reader", 0, 134221697, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"code", 1, 134221698, &EmptyCustomAttributesCache, &t1193_0_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25_t25_t462 (MethodInfo* method, void* obj, void** args);
MethodInfo m6192_MI = 
{
	"ReadType", (methodPointerType)&m6192, &t1205_TI, &t131_0_0_0, RuntimeInvoker_t25_t25_t462, t1205_m6192_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3250, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
extern Il2CppType t131_0_0_0;
static ParameterInfo t1205_m6193_ParameterInfos[] = 
{
	{"reader", 0, 134221699, &EmptyCustomAttributesCache, &t1001_0_0_0},
	{"type", 1, 134221700, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1205_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6193_MI = 
{
	"ReadPrimitiveTypeValue", (methodPointerType)&m6193, &t1205_TI, &t25_0_0_0, RuntimeInvoker_t25_t25_t25, t1205_m6193_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 3251, NULL, (methodPointerType)NULL};
static MethodInfo* t1205_MIs[] =
{
	&m6167_MI,
	&m6168_MI,
	&m6169_MI,
	&m6170_MI,
	&m6171_MI,
	&m6172_MI,
	&m6173_MI,
	&m6174_MI,
	&m6175_MI,
	&m6176_MI,
	&m6177_MI,
	&m6178_MI,
	&m6179_MI,
	&m6180_MI,
	&m6181_MI,
	&m6182_MI,
	&m6183_MI,
	&m6184_MI,
	&m6185_MI,
	&m6186_MI,
	&m6187_MI,
	&m6188_MI,
	&m6189_MI,
	&m6190_MI,
	&m6191_MI,
	&m6192_MI,
	&m6193_MI,
	NULL
};
extern TypeInfo t1202_TI;
extern TypeInfo t1204_TI;
static TypeInfo* t1205_TI__nestedTypes[3] =
{
	&t1202_TI,
	&t1204_TI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1205_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1205_0_0_0;
extern Il2CppType t1205_1_0_0;
extern TypeInfo t25_TI;
struct t1205;
extern TypeInfo t1205_TI;
TypeInfo t1205_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectReader", "System.Runtime.Serialization.Formatters.Binary", t1205_MIs, t1205_PIs, t1205_FIs, NULL, &t25_TI, t1205_TI__nestedTypes, NULL, &t1205_TI, NULL, t1205_VT, &EmptyCustomAttributesCache, &t1205_TI, &t1205_0_0_0, &t1205_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1205), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 27, 1, 12, 0, 2, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1197_TI;
#include "t1197MD.h"



// Metadata Definition System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
extern Il2CppType t134_0_0_1542;
FieldInfo t1197_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1197_TI, offsetof(t1197, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1197_0_0_32854;
FieldInfo t1197_f2_FieldInfo = 
{
	"Simple", &t1197_0_0_32854, &t1197_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1197_0_0_32854;
FieldInfo t1197_f3_FieldInfo = 
{
	"Full", &t1197_0_0_32854, &t1197_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1197_FIs[] =
{
	&t1197_f1_FieldInfo,
	&t1197_f2_FieldInfo,
	&t1197_f3_FieldInfo,
	NULL
};
static const int32_t t1197_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1197_f2_DefaultValue = 
{
	&t1197_f2_FieldInfo, { (char*)&t1197_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1197_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1197_f3_DefaultValue = 
{
	&t1197_f3_FieldInfo, { (char*)&t1197_f3_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1197_FDVs[] = 
{
	&t1197_f2_DefaultValue,
	&t1197_f3_DefaultValue,
	NULL
};
static MethodInfo* t1197_MIs[] =
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
static MethodInfo* t1197_VT[] =
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
static Il2CppInterfaceOffsetPair t1197_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1197_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1197__CustomAttributeCache = {
1,
NULL,
&t1197_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1197_0_0_0;
extern Il2CppType t1197_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t1197__CustomAttributeCache;
TypeInfo t1197_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterAssemblyStyle", "System.Runtime.Serialization.Formatters", t1197_MIs, NULL, t1197_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1197_VT, &t1197__CustomAttributeCache, &t134_TI, &t1197_0_0_0, &t1197_1_0_0, t1197_IOs, NULL, NULL, t1197_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1197)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1198_TI;
#include "t1198MD.h"



// Metadata Definition System.Runtime.Serialization.Formatters.FormatterTypeStyle
extern Il2CppType t134_0_0_1542;
FieldInfo t1198_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1198_TI, offsetof(t1198, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1198_0_0_32854;
FieldInfo t1198_f2_FieldInfo = 
{
	"TypesWhenNeeded", &t1198_0_0_32854, &t1198_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1198_0_0_32854;
FieldInfo t1198_f3_FieldInfo = 
{
	"TypesAlways", &t1198_0_0_32854, &t1198_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1198_0_0_32854;
FieldInfo t1198_f4_FieldInfo = 
{
	"XsdString", &t1198_0_0_32854, &t1198_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1198_FIs[] =
{
	&t1198_f1_FieldInfo,
	&t1198_f2_FieldInfo,
	&t1198_f3_FieldInfo,
	&t1198_f4_FieldInfo,
	NULL
};
static const int32_t t1198_f2_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1198_f2_DefaultValue = 
{
	&t1198_f2_FieldInfo, { (char*)&t1198_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1198_f3_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1198_f3_DefaultValue = 
{
	&t1198_f3_FieldInfo, { (char*)&t1198_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1198_f4_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1198_f4_DefaultValue = 
{
	&t1198_f4_FieldInfo, { (char*)&t1198_f4_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1198_FDVs[] = 
{
	&t1198_f2_DefaultValue,
	&t1198_f3_DefaultValue,
	&t1198_f4_DefaultValue,
	NULL
};
static MethodInfo* t1198_MIs[] =
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
static MethodInfo* t1198_VT[] =
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
static Il2CppInterfaceOffsetPair t1198_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1198_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1198__CustomAttributeCache = {
1,
NULL,
&t1198_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1198_0_0_0;
extern Il2CppType t1198_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t1198__CustomAttributeCache;
TypeInfo t1198_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterTypeStyle", "System.Runtime.Serialization.Formatters", t1198_MIs, NULL, t1198_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1198_VT, &t1198__CustomAttributeCache, &t134_TI, &t1198_0_0_0, &t1198_1_0_0, t1198_IOs, NULL, NULL, t1198_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1198)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1199_TI;
#include "t1199MD.h"



// Metadata Definition System.Runtime.Serialization.Formatters.TypeFilterLevel
extern Il2CppType t134_0_0_1542;
FieldInfo t1199_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1199_TI, offsetof(t1199, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1199_0_0_32854;
FieldInfo t1199_f2_FieldInfo = 
{
	"Low", &t1199_0_0_32854, &t1199_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1199_0_0_32854;
FieldInfo t1199_f3_FieldInfo = 
{
	"Full", &t1199_0_0_32854, &t1199_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1199_FIs[] =
{
	&t1199_f1_FieldInfo,
	&t1199_f2_FieldInfo,
	&t1199_f3_FieldInfo,
	NULL
};
static const int32_t t1199_f2_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1199_f2_DefaultValue = 
{
	&t1199_f2_FieldInfo, { (char*)&t1199_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1199_f3_DefaultValueData = 3;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1199_f3_DefaultValue = 
{
	&t1199_f3_FieldInfo, { (char*)&t1199_f3_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1199_FDVs[] = 
{
	&t1199_f2_DefaultValue,
	&t1199_f3_DefaultValue,
	NULL
};
static MethodInfo* t1199_MIs[] =
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
static MethodInfo* t1199_VT[] =
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
static Il2CppInterfaceOffsetPair t1199_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1199_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1199__CustomAttributeCache = {
1,
NULL,
&t1199_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1199_0_0_0;
extern Il2CppType t1199_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t1199__CustomAttributeCache;
TypeInfo t1199_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeFilterLevel", "System.Runtime.Serialization.Formatters", t1199_MIs, NULL, t1199_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1199_VT, &t1199__CustomAttributeCache, &t134_TI, &t1199_0_0_0, &t1199_1_0_0, t1199_IOs, NULL, NULL, t1199_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1199)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1207_TI;

extern TypeInfo t1359_TI;
extern TypeInfo t165_TI;
extern MethodInfo m452_MI;
extern MethodInfo m7230_MI;
extern MethodInfo m489_MI;
extern MethodInfo m7046_MI;
extern MethodInfo m7124_MI;
extern MethodInfo m7139_MI;
extern MethodInfo m7155_MI;
extern MethodInfo m7185_MI;


extern MethodInfo m6194_MI;
 void m6194 (t1207 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6194_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m6195_MI;
 t25 * m6195 (t1207 * __this, t25 * p0, t131 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6195_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1359_TI));
		t25 * L_0 = m7230(NULL, p0, p1, &m7230_MI);
		return L_0;
	}
}
extern MethodInfo m6196_MI;
 bool m6196 (t1207 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6196_MI);
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral1025, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1359_TI));
		bool L_1 = m7046(NULL, p0, &m7046_MI);
		return L_1;
	}
}
extern MethodInfo m6197_MI;
 int16_t m6197 (t1207 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6197_MI);
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral1025, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1359_TI));
		int16_t L_1 = m7124(NULL, p0, &m7124_MI);
		return L_1;
	}
}
extern MethodInfo m6198_MI;
 int32_t m6198 (t1207 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6198_MI);
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral1025, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1359_TI));
		int32_t L_1 = m7139(NULL, p0, &m7139_MI);
		return L_1;
	}
}
extern MethodInfo m6199_MI;
 int64_t m6199 (t1207 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6199_MI);
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral1025, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1359_TI));
		int64_t L_1 = m7155(NULL, p0, &m7155_MI);
		return L_1;
	}
}
extern MethodInfo m6200_MI;
 t27* m6200 (t1207 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6200_MI);
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral1025, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1359_TI));
		t27* L_1 = m7185(NULL, p0, &m7185_MI);
		return L_1;
	}
}
// Metadata Definition System.Runtime.Serialization.FormatterConverter
extern TypeInfo t1207_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6194_MI = 
{
	".ctor", (methodPointerType)&m6194, &t1207_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3254, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t131_0_0_0;
static ParameterInfo t1207_m6195_ParameterInfos[] = 
{
	{"value", 0, 134221702, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"type", 1, 134221703, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1207_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6195_MI = 
{
	"Convert", (methodPointerType)&m6195, &t1207_TI, &t25_0_0_0, RuntimeInvoker_t25_t25_t25, t1207_m6195_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 2, false, false, 3255, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1207_m6196_ParameterInfos[] = 
{
	{"value", 0, 134221704, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1207_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6196_MI = 
{
	"ToBoolean", (methodPointerType)&m6196, &t1207_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t1207_m6196_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 1, false, false, 3256, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1207_m6197_ParameterInfos[] = 
{
	{"value", 0, 134221705, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1207_TI;
extern Il2CppType t483_0_0_0;
extern void* RuntimeInvoker_t483_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6197_MI = 
{
	"ToInt16", (methodPointerType)&m6197, &t1207_TI, &t483_0_0_0, RuntimeInvoker_t483_t25, t1207_m6197_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 1, false, false, 3257, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1207_m6198_ParameterInfos[] = 
{
	{"value", 0, 134221706, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1207_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6198_MI = 
{
	"ToInt32", (methodPointerType)&m6198, &t1207_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t1207_m6198_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 1, false, false, 3258, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1207_m6199_ParameterInfos[] = 
{
	{"value", 0, 134221707, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1207_TI;
extern Il2CppType t817_0_0_0;
extern void* RuntimeInvoker_t817_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6199_MI = 
{
	"ToInt64", (methodPointerType)&m6199, &t1207_TI, &t817_0_0_0, RuntimeInvoker_t817_t25, t1207_m6199_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 8, 1, false, false, 3259, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1207_m6200_ParameterInfos[] = 
{
	{"value", 0, 134221708, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1207_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6200_MI = 
{
	"ToString", (methodPointerType)&m6200, &t1207_TI, &t27_0_0_0, RuntimeInvoker_t25_t25, t1207_m6200_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 9, 1, false, false, 3260, NULL, (methodPointerType)NULL};
static MethodInfo* t1207_MIs[] =
{
	&m6194_MI,
	&m6195_MI,
	&m6196_MI,
	&m6197_MI,
	&m6198_MI,
	&m6199_MI,
	&m6200_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6195_MI;
extern MethodInfo m6196_MI;
extern MethodInfo m6197_MI;
extern MethodInfo m6198_MI;
extern MethodInfo m6199_MI;
extern MethodInfo m6200_MI;
static MethodInfo* t1207_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6195_MI,
	&m6196_MI,
	&m6197_MI,
	&m6198_MI,
	&m6199_MI,
	&m6200_MI,
};
extern TypeInfo t1224_TI;
static TypeInfo* t1207_ITIs[] = 
{
	&t1224_TI,
};
extern TypeInfo t1224_TI;
static Il2CppInterfaceOffsetPair t1207_IOs[] = 
{
	{ &t1224_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1207_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1207__CustomAttributeCache = {
1,
NULL,
&t1207_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1207_0_0_0;
extern Il2CppType t1207_1_0_0;
extern TypeInfo t25_TI;
struct t1207;
extern TypeInfo t1207_TI;
extern CustomAttributesCache t1207__CustomAttributeCache;
TypeInfo t1207_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterConverter", "System.Runtime.Serialization", t1207_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t1207_TI, t1207_ITIs, t1207_VT, &t1207__CustomAttributeCache, &t1207_TI, &t1207_0_0_0, &t1207_1_0_0, t1207_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1207), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 7, 0, 0, 0, 0, 10, 1, 1};
#include "t1208.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1208_TI;

extern TypeInfo t165_TI;
extern TypeInfo t27_TI;
extern TypeInfo t131_TI;
extern TypeInfo t445_TI;
extern Il2CppType t27_0_0_0;
extern MethodInfo m489_MI;
extern MethodInfo m484_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m5895_MI;
extern MethodInfo m6201_MI;


extern MethodInfo m6201_MI;
 t25 * m6201 (t25 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6201_MI);
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral251, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_1 = m484(NULL, LoadTypeToken(&t27_0_0_0), &m484_MI);
		if ((((t131 *)p0) != ((t131 *)L_1)))
		{
			goto IL_0026;
		}
	}
	{
		t445 * L_2 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m2409(L_2, (t27*) &_stringLiteral1026, &m2409_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0026:
	{
		t25 * L_3 = m5895(NULL, p0, &m5895_MI);
		return L_3;
	}
}
extern MethodInfo m6202_MI;
 t25 * m6202 (t25 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6202_MI);
	{
		t25 * L_0 = m6201(NULL, p0, &m6201_MI);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Serialization.FormatterServices
extern Il2CppType t131_0_0_0;
static ParameterInfo t1208_m6201_ParameterInfos[] = 
{
	{"type", 0, 134221709, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1208_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6201_MI = 
{
	"GetUninitializedObject", (methodPointerType)&m6201, &t1208_TI, &t25_0_0_0, RuntimeInvoker_t25_t25, t1208_m6201_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3261, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
static ParameterInfo t1208_m6202_ParameterInfos[] = 
{
	{"type", 0, 134221710, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1208_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6202_MI = 
{
	"GetSafeUninitializedObject", (methodPointerType)&m6202, &t1208_TI, &t25_0_0_0, RuntimeInvoker_t25_t25, t1208_m6202_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3262, NULL, (methodPointerType)NULL};
static MethodInfo* t1208_MIs[] =
{
	&m6201_MI,
	&m6202_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1208_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1208_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1208__CustomAttributeCache = {
1,
NULL,
&t1208_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1208_0_0_0;
extern Il2CppType t1208_1_0_0;
extern TypeInfo t25_TI;
struct t1208;
extern TypeInfo t1208_TI;
extern CustomAttributesCache t1208__CustomAttributeCache;
TypeInfo t1208_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FormatterServices", "System.Runtime.Serialization", t1208_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t1208_TI, NULL, t1208_VT, &t1208__CustomAttributeCache, &t1208_TI, &t1208_0_0_0, &t1208_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1208), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1604_TI;



// Metadata Definition System.Runtime.Serialization.IDeserializationCallback
extern Il2CppType t25_0_0_0;
static ParameterInfo t1604_m8317_ParameterInfos[] = 
{
	{"sender", 0, 134221711, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1604_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8317_MI = 
{
	"OnDeserialization", NULL, &t1604_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1604_m8317_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 3263, NULL, (methodPointerType)NULL};
static MethodInfo* t1604_MIs[] =
{
	&m8317_MI,
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1604_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1604__CustomAttributeCache = {
1,
NULL,
&t1604_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1604_0_0_0;
extern Il2CppType t1604_1_0_0;
struct t1604;
extern TypeInfo t1604_TI;
extern CustomAttributesCache t1604__CustomAttributeCache;
TypeInfo t1604_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDeserializationCallback", "System.Runtime.Serialization", t1604_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1604_TI, NULL, NULL, &t1604__CustomAttributeCache, &t1604_TI, &t1604_0_0_0, &t1604_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1642_TI;



// Metadata Definition System.Runtime.Serialization.IFormatter
static MethodInfo* t1642_MIs[] =
{
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1642_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1642__CustomAttributeCache = {
1,
NULL,
&t1642_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1642_0_0_0;
extern Il2CppType t1642_1_0_0;
struct t1642;
extern TypeInfo t1642_TI;
extern CustomAttributesCache t1642__CustomAttributeCache;
TypeInfo t1642_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IFormatter", "System.Runtime.Serialization", t1642_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1642_TI, NULL, NULL, &t1642__CustomAttributeCache, &t1642_TI, &t1642_0_0_0, &t1642_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1224_TI;



// Metadata Definition System.Runtime.Serialization.IFormatterConverter
extern Il2CppType t25_0_0_0;
extern Il2CppType t131_0_0_0;
static ParameterInfo t1224_m8318_ParameterInfos[] = 
{
	{"value", 0, 134221712, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"type", 1, 134221713, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1224_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8318_MI = 
{
	"Convert", NULL, &t1224_TI, &t25_0_0_0, RuntimeInvoker_t25_t25_t25, t1224_m8318_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, false, 3264, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1224_m8319_ParameterInfos[] = 
{
	{"value", 0, 134221714, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1224_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8319_MI = 
{
	"ToBoolean", NULL, &t1224_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t1224_m8319_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, false, 3265, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1224_m8320_ParameterInfos[] = 
{
	{"value", 0, 134221715, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1224_TI;
extern Il2CppType t483_0_0_0;
extern void* RuntimeInvoker_t483_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8320_MI = 
{
	"ToInt16", NULL, &t1224_TI, &t483_0_0_0, RuntimeInvoker_t483_t25, t1224_m8320_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, false, 3266, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1224_m8321_ParameterInfos[] = 
{
	{"value", 0, 134221716, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1224_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8321_MI = 
{
	"ToInt32", NULL, &t1224_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t1224_m8321_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 3, 1, false, false, 3267, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1224_m8322_ParameterInfos[] = 
{
	{"value", 0, 134221717, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1224_TI;
extern Il2CppType t817_0_0_0;
extern void* RuntimeInvoker_t817_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8322_MI = 
{
	"ToInt64", NULL, &t1224_TI, &t817_0_0_0, RuntimeInvoker_t817_t25, t1224_m8322_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 3268, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1224_m8323_ParameterInfos[] = 
{
	{"value", 0, 134221718, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1224_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8323_MI = 
{
	"ToString", NULL, &t1224_TI, &t27_0_0_0, RuntimeInvoker_t25_t25, t1224_m8323_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 3269, NULL, (methodPointerType)NULL};
static MethodInfo* t1224_MIs[] =
{
	&m8318_MI,
	&m8319_MI,
	&m8320_MI,
	&m8321_MI,
	&m8322_MI,
	&m8323_MI,
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
void t1224_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
CustomAttributesCache t1224__CustomAttributeCache = {
2,
NULL,
&t1224_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1224_0_0_0;
extern Il2CppType t1224_1_0_0;
struct t1224;
extern TypeInfo t1224_TI;
extern CustomAttributesCache t1224__CustomAttributeCache;
TypeInfo t1224_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IFormatterConverter", "System.Runtime.Serialization", t1224_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1224_TI, NULL, NULL, &t1224__CustomAttributeCache, &t1224_TI, &t1224_0_0_0, &t1224_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 6, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1627_TI;



// Metadata Definition System.Runtime.Serialization.IObjectReference
extern Il2CppType t824_0_0_0;
static ParameterInfo t1627_m8315_ParameterInfos[] = 
{
	{"context", 0, 134221719, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1627_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m8315_MI = 
{
	"GetRealObject", NULL, &t1627_TI, &t25_0_0_0, RuntimeInvoker_t25_t824, t1627_m8315_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 3270, NULL, (methodPointerType)NULL};
static MethodInfo* t1627_MIs[] =
{
	&m8315_MI,
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1627_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1627__CustomAttributeCache = {
1,
NULL,
&t1627_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1627_0_0_0;
extern Il2CppType t1627_1_0_0;
struct t1627;
extern TypeInfo t1627_TI;
extern CustomAttributesCache t1627__CustomAttributeCache;
TypeInfo t1627_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IObjectReference", "System.Runtime.Serialization", t1627_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1627_TI, NULL, NULL, &t1627__CustomAttributeCache, &t1627_TI, &t1627_0_0_0, &t1627_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1163_TI;



// Metadata Definition System.Runtime.Serialization.ISerializationSurrogate
extern Il2CppType t25_0_0_0;
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
extern Il2CppType t1160_0_0_0;
static ParameterInfo t1163_m8324_ParameterInfos[] = 
{
	{"obj", 0, 134221720, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"info", 1, 134221721, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 2, 134221722, &EmptyCustomAttributesCache, &t824_0_0_0},
	{"selector", 3, 134221723, &EmptyCustomAttributesCache, &t1160_0_0_0},
};
extern TypeInfo t1163_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25_t824_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8324_MI = 
{
	"SetObjectData", NULL, &t1163_TI, &t25_0_0_0, RuntimeInvoker_t25_t25_t25_t824_t25, t1163_m8324_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 4, false, false, 3271, NULL, (methodPointerType)NULL};
static MethodInfo* t1163_MIs[] =
{
	&m8324_MI,
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1163_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1163__CustomAttributeCache = {
1,
NULL,
&t1163_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1163_0_0_0;
extern Il2CppType t1163_1_0_0;
struct t1163;
extern TypeInfo t1163_TI;
extern CustomAttributesCache t1163__CustomAttributeCache;
TypeInfo t1163_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISerializationSurrogate", "System.Runtime.Serialization", t1163_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1163_TI, NULL, NULL, &t1163__CustomAttributeCache, &t1163_TI, &t1163_0_0_0, &t1163_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1160_TI;



// Metadata Definition System.Runtime.Serialization.ISurrogateSelector
extern Il2CppType t131_0_0_0;
extern Il2CppType t824_0_0_0;
extern Il2CppType t1160_1_0_0;
static ParameterInfo t1160_m8309_ParameterInfos[] = 
{
	{"type", 0, 134221724, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"context", 1, 134221725, &EmptyCustomAttributesCache, &t824_0_0_0},
	{"selector", 2, 134221726, &EmptyCustomAttributesCache, &t1160_1_0_0},
};
extern TypeInfo t1160_TI;
extern Il2CppType t1163_0_0_0;
extern void* RuntimeInvoker_t25_t25_t824_t1643 (MethodInfo* method, void* obj, void** args);
MethodInfo m8309_MI = 
{
	"GetSurrogate", NULL, &t1160_TI, &t1163_0_0_0, RuntimeInvoker_t25_t25_t824_t1643, t1160_m8309_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 3, false, false, 3272, NULL, (methodPointerType)NULL};
static MethodInfo* t1160_MIs[] =
{
	&m8309_MI,
	NULL
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1160_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1160__CustomAttributeCache = {
1,
NULL,
&t1160_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1160_0_0_0;
extern Il2CppType t1160_1_0_0;
struct t1160;
extern TypeInfo t1160_TI;
extern CustomAttributesCache t1160__CustomAttributeCache;
TypeInfo t1160_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISurrogateSelector", "System.Runtime.Serialization", t1160_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1160_TI, NULL, NULL, &t1160__CustomAttributeCache, &t1160_TI, &t1160_0_0_0, &t1160_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1206_TI;

#include "t1209.h"
#include "t1221.h"
#include "t1215.h"
#include "t1351.h"
#include "t1210.h"
#include "t1211.h"
#include "t1212.h"
#include "t1214.h"
#include "t1213.h"
extern TypeInfo t931_TI;
extern TypeInfo t1206_TI;
extern TypeInfo t972_TI;
extern TypeInfo t134_TI;
extern TypeInfo t1223_TI;
extern TypeInfo t1209_TI;
extern TypeInfo t1604_TI;
extern TypeInfo t25_TI;
extern TypeInfo t1221_TI;
extern TypeInfo t1627_TI;
extern TypeInfo t817_TI;
extern TypeInfo t27_TI;
extern TypeInfo t123_TI;
extern TypeInfo t1351_TI;
extern TypeInfo t1210_TI;
extern TypeInfo t1211_TI;
extern TypeInfo t165_TI;
extern TypeInfo t1212_TI;
extern TypeInfo t1214_TI;
extern TypeInfo t1213_TI;
extern TypeInfo t1160_TI;
extern TypeInfo t1163_TI;
extern TypeInfo t131_TI;
extern TypeInfo t824_TI;
#include "t1209MD.h"
#include "t1221MD.h"
#include "t1351MD.h"
#include "t1211MD.h"
#include "t1212MD.h"
#include "t1214MD.h"
#include "t1213MD.h"
extern MethodInfo m4830_MI;
extern MethodInfo m4900_MI;
extern MethodInfo m452_MI;
extern MethodInfo m4911_MI;
extern MethodInfo m6257_MI;
extern MethodInfo m6232_MI;
extern MethodInfo m6234_MI;
extern MethodInfo m6238_MI;
extern MethodInfo m4842_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m6252_MI;
extern MethodInfo m6247_MI;
extern MethodInfo m1854_MI;
extern MethodInfo m4914_MI;
extern MethodInfo m6227_MI;
extern MethodInfo m4915_MI;
extern MethodInfo m6233_MI;
extern MethodInfo m7000_MI;
extern MethodInfo m4835_MI;
extern MethodInfo m4833_MI;
extern MethodInfo m6209_MI;
extern MethodInfo m8317_MI;
extern MethodInfo m6250_MI;
extern MethodInfo m6251_MI;
extern MethodInfo m6237_MI;
extern MethodInfo m6205_MI;
extern MethodInfo m6219_MI;
extern MethodInfo m6210_MI;
extern MethodInfo m489_MI;
extern MethodInfo m6221_MI;
extern MethodInfo m6225_MI;
extern MethodInfo m6223_MI;
extern MethodInfo m8309_MI;
extern MethodInfo m6996_MI;
extern MethodInfo m6215_MI;


extern MethodInfo m6203_MI;
 void m6203 (t1206 * __this, t25 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6203_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t931_TI));
		t931 * L_0 = (t931 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t931_TI));
		m4830(L_0, &m4830_MI);
		__this->f2 = L_0;
		t931 * L_1 = (t931 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t931_TI));
		m4830(L_1, &m4830_MI);
		__this->f3 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t972_TI));
		t972 * L_2 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_2, &m4900_MI);
		__this->f4 = L_2;
		m452(__this, &m452_MI);
		__this->f6 = p0;
		__this->f7 = p1;
		return;
	}
}
extern MethodInfo m6204_MI;
 void m6204 (t1206 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6204_MI);
	t1209 * V_0 = {0};
	bool V_1 = false;
	t1209 * V_2 = {0};
	bool V_3 = false;
	t1209 * V_4 = {0};
	t1221 * V_5 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t G_B7_0 = 0;
	{
		__this->f5 = 1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (__this->f8);
			t972 * L_1 = (__this->f4);
			NullCheck(L_1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4911_MI, L_1);
			if ((((int32_t)L_0) >= ((int32_t)L_2)))
			{
				goto IL_0025;
			}
		}

IL_001a:
		{
			t1223 * L_3 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
			m6257(L_3, (t27*) &_stringLiteral1027, &m6257_MI);
			il2cpp_codegen_raise_exception (L_3);
		}

IL_0025:
		{
			t1209 * L_4 = (__this->f1);
			V_0 = L_4;
			V_1 = 1;
			t1209 * L_5 = (__this->f0);
			V_2 = L_5;
			goto IL_0136;
		}

IL_003a:
		{
			NullCheck(V_2);
			bool L_6 = m6232(V_2, &m6232_MI);
			if (!L_6)
			{
				goto IL_0045;
			}
		}

IL_0042:
		{
			G_B7_0 = ((int32_t)(V_1));
			goto IL_0046;
		}

IL_0045:
		{
			G_B7_0 = 0;
		}

IL_0046:
		{
			V_3 = ((((int32_t)G_B7_0) == ((int32_t)0))? 1 : 0);
			if (!V_3)
			{
				goto IL_0057;
			}
		}

IL_004d:
		{
			NullCheck(V_2);
			bool L_7 = m6234(V_2, 1, __this, 1, &m6234_MI);
			V_3 = L_7;
		}

IL_0057:
		{
			if (!V_3)
			{
				goto IL_006e;
			}
		}

IL_005a:
		{
			t25 * L_8 = (__this->f6);
			t824  L_9 = (__this->f7);
			NullCheck(V_2);
			bool L_10 = m6238(V_2, __this, L_8, L_9, &m6238_MI);
			V_3 = L_10;
		}

IL_006e:
		{
			if (!V_3)
			{
				goto IL_00bd;
			}
		}

IL_0071:
		{
			NullCheck(V_2);
			t25 * L_11 = (V_2->f1);
			if (!((t25 *)IsInst(L_11, InitializedTypeInfo(&t1604_TI))))
			{
				goto IL_008b;
			}
		}

IL_007e:
		{
			t931 * L_12 = (__this->f2);
			NullCheck(L_12);
			VirtFuncInvoker1< int32_t, t25 * >::Invoke(&m4842_MI, L_12, V_2);
		}

IL_008b:
		{
			NullCheck(V_2);
			t25 * L_13 = (V_2->f1);
			NullCheck(L_13);
			t131 * L_14 = m1959(L_13, &m1959_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1221_TI));
			t1221 * L_15 = m6252(NULL, L_14, &m6252_MI);
			V_5 = L_15;
			NullCheck(V_5);
			bool L_16 = m6247(V_5, &m6247_MI);
			if (!L_16)
			{
				goto IL_00b3;
			}
		}

IL_00a6:
		{
			t931 * L_17 = (__this->f3);
			NullCheck(L_17);
			VirtFuncInvoker1< int32_t, t25 * >::Invoke(&m4842_MI, L_17, V_2);
		}

IL_00b3:
		{
			NullCheck(V_2);
			t1209 * L_18 = (V_2->f12);
			V_4 = L_18;
			goto IL_012d;
		}

IL_00bd:
		{
			NullCheck(V_2);
			t25 * L_19 = (V_2->f2);
			if (!((t25 *)IsInst(L_19, InitializedTypeInfo(&t1627_TI))))
			{
				goto IL_00fd;
			}
		}

IL_00ca:
		{
			if (V_1)
			{
				goto IL_00fd;
			}
		}

IL_00cd:
		{
			NullCheck(V_2);
			uint8_t L_20 = (V_2->f0);
			if ((((uint32_t)L_20) != ((uint32_t)2)))
			{
				goto IL_00f6;
			}
		}

IL_00d6:
		{
			NullCheck(V_2);
			int64_t L_21 = (V_2->f3);
			int64_t L_22 = L_21;
			t25 * L_23 = Box(InitializedTypeInfo(&t817_TI), &L_22);
			IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
			t27* L_24 = m1854(NULL, (t27*) &_stringLiteral1028, L_23, (t27*) &_stringLiteral1029, &m1854_MI);
			t1223 * L_25 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
			m6257(L_25, L_24, &m6257_MI);
			il2cpp_codegen_raise_exception (L_25);
		}

IL_00f6:
		{
			NullCheck(V_2);
			V_2->f0 = 2;
		}

IL_00fd:
		{
			t1209 * L_26 = (__this->f1);
			if ((((t1209 *)V_2) == ((t1209 *)L_26)))
			{
				goto IL_012a;
			}
		}

IL_0106:
		{
			NullCheck(V_2);
			t1209 * L_27 = (V_2->f12);
			V_4 = L_27;
			NullCheck(V_2);
			V_2->f12 = (t1209 *)NULL;
			t1209 * L_28 = (__this->f1);
			NullCheck(L_28);
			L_28->f12 = V_2;
			__this->f1 = V_2;
			goto IL_012d;
		}

IL_012a:
		{
			V_4 = V_2;
		}

IL_012d:
		{
			if ((((t1209 *)V_2) != ((t1209 *)V_0)))
			{
				goto IL_0133;
			}
		}

IL_0131:
		{
			V_1 = 0;
		}

IL_0133:
		{
			V_2 = V_4;
		}

IL_0136:
		{
			if (V_2)
			{
				goto IL_003a;
			}
		}

IL_013c:
		{
			// IL_013c: leave.s IL_0146
			leaveInstructions[0] = 0x146; // 1
			THROW_SENTINEL(IL_0146);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_013e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_013e;
	}

IL_013e:
	{ // begin finally (depth: 1)
		__this->f5 = 0;
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x146:
				goto IL_0146;
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

IL_0146:
	{
		return;
	}
}
extern MethodInfo m6205_MI;
 t1209 * m6205 (t1206 * __this, int64_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6205_MI);
	t1209 * V_0 = {0};
	{
		t972 * L_0 = (__this->f4);
		int64_t L_1 = p0;
		t25 * L_2 = Box(InitializedTypeInfo(&t817_TI), &L_1);
		NullCheck(L_0);
		t25 * L_3 = (t25 *)VirtFuncInvoker1< t25 *, t25 * >::Invoke(&m4914_MI, L_0, L_2);
		V_0 = ((t1209 *)Castclass(L_3, InitializedTypeInfo(&t1209_TI)));
		if (V_0)
		{
			goto IL_005c;
		}
	}
	{
		bool L_4 = (__this->f5);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		int64_t L_5 = p0;
		t25 * L_6 = Box(InitializedTypeInfo(&t817_TI), &L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_7 = m1854(NULL, (t27*) &_stringLiteral1030, L_6, (t27*) &_stringLiteral1031, &m1854_MI);
		t1223 * L_8 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_8, L_7, &m6257_MI);
		il2cpp_codegen_raise_exception (L_8);
	}

IL_003d:
	{
		t1209 * L_9 = (t1209 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1209_TI));
		m6227(L_9, &m6227_MI);
		V_0 = L_9;
		NullCheck(V_0);
		V_0->f3 = p0;
		t972 * L_10 = (__this->f4);
		int64_t L_11 = p0;
		t25 * L_12 = Box(InitializedTypeInfo(&t817_TI), &L_11);
		NullCheck(L_10);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4915_MI, L_10, L_12, V_0);
	}

IL_005c:
	{
		NullCheck(V_0);
		bool L_13 = m6233(V_0, &m6233_MI);
		if (L_13)
		{
			goto IL_0087;
		}
	}
	{
		bool L_14 = (__this->f5);
		if (!L_14)
		{
			goto IL_0087;
		}
	}
	{
		int64_t L_15 = p0;
		t25 * L_16 = Box(InitializedTypeInfo(&t817_TI), &L_15);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_17 = m1854(NULL, (t27*) &_stringLiteral1030, L_16, (t27*) &_stringLiteral1031, &m1854_MI);
		t1223 * L_18 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_18, L_17, &m6257_MI);
		il2cpp_codegen_raise_exception (L_18);
	}

IL_0087:
	{
		return V_0;
	}
}
extern MethodInfo m6206_MI;
 t25 * m6206 (t1206 * __this, int64_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6206_MI);
	t1209 * V_0 = {0};
	{
		if ((((int64_t)p0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		t1351 * L_0 = (t1351 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1351_TI));
		m7000(L_0, (t27*) &_stringLiteral1032, (t27*) &_stringLiteral1033, &m7000_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0015:
	{
		t972 * L_1 = (__this->f4);
		int64_t L_2 = p0;
		t25 * L_3 = Box(InitializedTypeInfo(&t817_TI), &L_2);
		NullCheck(L_1);
		t25 * L_4 = (t25 *)VirtFuncInvoker1< t25 *, t25 * >::Invoke(&m4914_MI, L_1, L_3);
		V_0 = ((t1209 *)Castclass(L_4, InitializedTypeInfo(&t1209_TI)));
		if (!V_0)
		{
			goto IL_0037;
		}
	}
	{
		NullCheck(V_0);
		bool L_5 = m6233(V_0, &m6233_MI);
		if (L_5)
		{
			goto IL_0039;
		}
	}

IL_0037:
	{
		return NULL;
	}

IL_0039:
	{
		NullCheck(V_0);
		t25 * L_6 = (V_0->f2);
		return L_6;
	}
}
extern MethodInfo m6207_MI;
 void m6207 (t1206 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6207_MI);
	int32_t V_0 = 0;
	t1209 * V_1 = {0};
	int32_t V_2 = 0;
	t1209 * V_3 = {0};
	t25 * V_4 = {0};
	{
		t931 * L_0 = (__this->f3);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4835_MI, L_0);
		V_0 = ((int32_t)(L_1-1));
		goto IL_0032;
	}

IL_0010:
	{
		t931 * L_2 = (__this->f3);
		NullCheck(L_2);
		t25 * L_3 = (t25 *)VirtFuncInvoker1< t25 *, int32_t >::Invoke(&m4833_MI, L_2, V_0);
		V_1 = ((t1209 *)Castclass(L_3, InitializedTypeInfo(&t1209_TI)));
		NullCheck(V_1);
		t25 * L_4 = (V_1->f1);
		m6209(__this, L_4, &m6209_MI);
		V_0 = ((int32_t)(V_0-1));
	}

IL_0032:
	{
		if ((((int32_t)V_0) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		t931 * L_5 = (__this->f2);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4835_MI, L_5);
		V_2 = ((int32_t)(L_6-1));
		goto IL_0075;
	}

IL_0046:
	{
		t931 * L_7 = (__this->f2);
		NullCheck(L_7);
		t25 * L_8 = (t25 *)VirtFuncInvoker1< t25 *, int32_t >::Invoke(&m4833_MI, L_7, V_2);
		V_3 = ((t1209 *)Castclass(L_8, InitializedTypeInfo(&t1209_TI)));
		NullCheck(V_3);
		t25 * L_9 = (V_3->f1);
		V_4 = ((t25 *)IsInst(L_9, InitializedTypeInfo(&t1604_TI)));
		if (!V_4)
		{
			goto IL_0071;
		}
	}
	{
		NullCheck(V_4);
		InterfaceActionInvoker1< t25 * >::Invoke(&m8317_MI, V_4, __this);
	}

IL_0071:
	{
		V_2 = ((int32_t)(V_2-1));
	}

IL_0075:
	{
		if ((((int32_t)V_2) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
extern MethodInfo m6208_MI;
 void m6208 (t1206 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6208_MI);
	t1221 * V_0 = {0};
	{
		NullCheck(p0);
		t131 * L_0 = m1959(p0, &m1959_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1221_TI));
		t1221 * L_1 = m6252(NULL, L_0, &m6252_MI);
		V_0 = L_1;
		t824  L_2 = (__this->f7);
		NullCheck(V_0);
		m6250(V_0, p0, L_2, &m6250_MI);
		return;
	}
}
extern MethodInfo m6209_MI;
 void m6209 (t1206 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6209_MI);
	t1221 * V_0 = {0};
	{
		NullCheck(p0);
		t131 * L_0 = m1959(p0, &m1959_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1221_TI));
		t1221 * L_1 = m6252(NULL, L_0, &m6252_MI);
		V_0 = L_1;
		t824  L_2 = (__this->f7);
		NullCheck(V_0);
		m6251(V_0, p0, L_2, &m6251_MI);
		return;
	}
}
extern MethodInfo m6210_MI;
 void m6210 (t1206 * __this, t1210 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6210_MI);
	{
		NullCheck(p0);
		t1209 * L_0 = (p0->f0);
		NullCheck(L_0);
		m6237(L_0, p0, 1, &m6237_MI);
		NullCheck(p0);
		t1209 * L_1 = (p0->f1);
		NullCheck(L_1);
		m6237(L_1, p0, 0, &m6237_MI);
		return;
	}
}
extern MethodInfo m6211_MI;
 void m6211 (t1206 * __this, int64_t p0, int32_t p1, int64_t p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6211_MI);
	t1211 * V_0 = {0};
	{
		if ((((int64_t)p0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		t1351 * L_0 = (t1351 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1351_TI));
		m7000(L_0, (t27*) &_stringLiteral1034, (t27*) &_stringLiteral1035, &m7000_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0015:
	{
		if ((((int64_t)p2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		t1351 * L_1 = (t1351 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1351_TI));
		m7000(L_1, (t27*) &_stringLiteral1036, (t27*) &_stringLiteral1037, &m7000_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_002a:
	{
		t1209 * L_2 = m6205(__this, p0, &m6205_MI);
		t1209 * L_3 = m6205(__this, p2, &m6205_MI);
		t1211 * L_4 = (t1211 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1211_TI));
		m6219(L_4, L_2, p1, L_3, &m6219_MI);
		V_0 = L_4;
		m6210(__this, V_0, &m6210_MI);
		return;
	}
}
extern MethodInfo m6212_MI;
 void m6212 (t1206 * __this, int64_t p0, t822* p1, int64_t p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6212_MI);
	t1212 * V_0 = {0};
	{
		if ((((int64_t)p0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		t1351 * L_0 = (t1351 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1351_TI));
		m7000(L_0, (t27*) &_stringLiteral1034, (t27*) &_stringLiteral1035, &m7000_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0015:
	{
		if ((((int64_t)p2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		t1351 * L_1 = (t1351 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1351_TI));
		m7000(L_1, (t27*) &_stringLiteral1036, (t27*) &_stringLiteral1037, &m7000_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_002a:
	{
		if (p1)
		{
			goto IL_0038;
		}
	}
	{
		t165 * L_2 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_2, (t27*) &_stringLiteral371, &m489_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0038:
	{
		t1209 * L_3 = m6205(__this, p0, &m6205_MI);
		t1209 * L_4 = m6205(__this, p2, &m6205_MI);
		t1212 * L_5 = (t1212 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1212_TI));
		m6221(L_5, L_3, p1, L_4, &m6221_MI);
		V_0 = L_5;
		m6210(__this, V_0, &m6210_MI);
		return;
	}
}
extern MethodInfo m6213_MI;
 void m6213 (t1206 * __this, int64_t p0, t27* p1, int64_t p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6213_MI);
	t1214 * V_0 = {0};
	{
		if ((((int64_t)p0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		t1351 * L_0 = (t1351 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1351_TI));
		m7000(L_0, (t27*) &_stringLiteral1038, (t27*) &_stringLiteral1039, &m7000_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0015:
	{
		if ((((int64_t)p2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		t1351 * L_1 = (t1351 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1351_TI));
		m7000(L_1, (t27*) &_stringLiteral1036, (t27*) &_stringLiteral1037, &m7000_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_002a:
	{
		if (p1)
		{
			goto IL_0038;
		}
	}
	{
		t165 * L_2 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_2, (t27*) &_stringLiteral1040, &m489_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0038:
	{
		t1209 * L_3 = m6205(__this, p0, &m6205_MI);
		t1209 * L_4 = m6205(__this, p2, &m6205_MI);
		t1214 * L_5 = (t1214 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1214_TI));
		m6225(L_5, L_3, p1, L_4, &m6225_MI);
		V_0 = L_5;
		m6210(__this, V_0, &m6210_MI);
		return;
	}
}
extern MethodInfo m6214_MI;
 void m6214 (t1206 * __this, int64_t p0, t438 * p1, int64_t p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6214_MI);
	t1213 * V_0 = {0};
	{
		if ((((int64_t)p0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		t1351 * L_0 = (t1351 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1351_TI));
		m7000(L_0, (t27*) &_stringLiteral1038, (t27*) &_stringLiteral1039, &m7000_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0015:
	{
		if ((((int64_t)p2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		t1351 * L_1 = (t1351 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1351_TI));
		m7000(L_1, (t27*) &_stringLiteral1036, (t27*) &_stringLiteral1037, &m7000_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_002a:
	{
		if (p1)
		{
			goto IL_0038;
		}
	}
	{
		t165 * L_2 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_2, (t27*) &_stringLiteral1041, &m489_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0038:
	{
		t1209 * L_3 = m6205(__this, p0, &m6205_MI);
		t1209 * L_4 = m6205(__this, p2, &m6205_MI);
		t1213 * L_5 = (t1213 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1213_TI));
		m6223(L_5, L_3, p1, L_4, &m6223_MI);
		V_0 = L_5;
		m6210(__this, V_0, &m6210_MI);
		return;
	}
}
extern MethodInfo m6215_MI;
 void m6215 (t1206 * __this, t25 * p0, t1209 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6215_MI);
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral591, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		NullCheck(p1);
		bool L_1 = m6233(p1, &m6233_MI);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		NullCheck(p1);
		t25 * L_2 = (p1->f1);
		if ((((t25 *)L_2) == ((t25 *)p0)))
		{
			goto IL_003f;
		}
	}
	{
		NullCheck(p1);
		int64_t L_3 = (p1->f3);
		int64_t L_4 = L_3;
		t25 * L_5 = Box(InitializedTypeInfo(&t817_TI), &L_4);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_6 = m1854(NULL, (t27*) &_stringLiteral1042, L_5, (t27*) &_stringLiteral1043, &m1854_MI);
		t1223 * L_7 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_7, L_6, &m6257_MI);
		il2cpp_codegen_raise_exception (L_7);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		NullCheck(p1);
		p1->f2 = p0;
		NullCheck(p1);
		p1->f1 = p0;
		if (!((t25 *)IsInst(p0, InitializedTypeInfo(&t1627_TI))))
		{
			goto IL_005f;
		}
	}
	{
		NullCheck(p1);
		p1->f0 = 1;
		goto IL_0066;
	}

IL_005f:
	{
		NullCheck(p1);
		p1->f0 = 3;
	}

IL_0066:
	{
		t25 * L_8 = (__this->f6);
		if (!L_8)
		{
			goto IL_00a0;
		}
	}
	{
		t25 * L_9 = (__this->f6);
		NullCheck(p0);
		t131 * L_10 = m1959(p0, &m1959_MI);
		t824  L_11 = (__this->f7);
		NullCheck(p1);
		t25 ** L_12 = &(p1->f7);
		NullCheck(L_9);
		t25 * L_13 = (t25 *)InterfaceFuncInvoker3< t25 *, t131 *, t824 , t25 ** >::Invoke(&m8309_MI, L_9, L_10, L_11, L_12);
		NullCheck(p1);
		p1->f6 = L_13;
		NullCheck(p1);
		t25 * L_14 = (p1->f6);
		if (!L_14)
		{
			goto IL_00a0;
		}
	}
	{
		NullCheck(p1);
		p1->f0 = 1;
	}

IL_00a0:
	{
		NullCheck(p1);
		m6234(p1, 1, __this, 0, &m6234_MI);
		NullCheck(p1);
		m6234(p1, 0, __this, 0, &m6234_MI);
		int32_t L_15 = (__this->f8);
		__this->f8 = ((int32_t)(L_15+1));
		t1209 * L_16 = (__this->f0);
		if (L_16)
		{
			goto IL_00da;
		}
	}
	{
		__this->f0 = p1;
		__this->f1 = p1;
		goto IL_00ed;
	}

IL_00da:
	{
		t1209 * L_17 = (__this->f1);
		NullCheck(L_17);
		L_17->f12 = p1;
		__this->f1 = p1;
	}

IL_00ed:
	{
		return;
	}
}
extern MethodInfo m6216_MI;
 void m6216 (t1206 * __this, t25 * p0, int64_t p1, t823 * p2, int64_t p3, t438 * p4, t822* p5, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6216_MI);
	t1209 * V_0 = {0};
	{
		if (p0)
		{
			goto IL_0013;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m6996(L_0, (t27*) &_stringLiteral591, (t27*) &_stringLiteral1044, &m6996_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0013:
	{
		if ((((int64_t)p1) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0028;
		}
	}
	{
		t1351 * L_1 = (t1351 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1351_TI));
		m7000(L_1, (t27*) &_stringLiteral1032, (t27*) &_stringLiteral1033, &m7000_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0028:
	{
		t1209 * L_2 = m6205(__this, p1, &m6205_MI);
		V_0 = L_2;
		NullCheck(V_0);
		V_0->f4 = p2;
		NullCheck(V_0);
		V_0->f5 = p3;
		NullCheck(V_0);
		V_0->f8 = p4;
		NullCheck(V_0);
		V_0->f9 = p5;
		m6215(__this, p0, V_0, &m6215_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Serialization.ObjectManager
extern Il2CppType t1209_0_0_1;
FieldInfo t1206_f0_FieldInfo = 
{
	"_objectRecordChain", &t1209_0_0_1, &t1206_TI, offsetof(t1206, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1209_0_0_1;
FieldInfo t1206_f1_FieldInfo = 
{
	"_lastObjectRecord", &t1209_0_0_1, &t1206_TI, offsetof(t1206, f1), &EmptyCustomAttributesCache};
extern Il2CppType t931_0_0_1;
FieldInfo t1206_f2_FieldInfo = 
{
	"_deserializedRecords", &t931_0_0_1, &t1206_TI, offsetof(t1206, f2), &EmptyCustomAttributesCache};
extern Il2CppType t931_0_0_1;
FieldInfo t1206_f3_FieldInfo = 
{
	"_onDeserializedCallbackRecords", &t931_0_0_1, &t1206_TI, offsetof(t1206, f3), &EmptyCustomAttributesCache};
extern Il2CppType t972_0_0_1;
FieldInfo t1206_f4_FieldInfo = 
{
	"_objectRecords", &t972_0_0_1, &t1206_TI, offsetof(t1206, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1206_f5_FieldInfo = 
{
	"_finalFixup", &t125_0_0_1, &t1206_TI, offsetof(t1206, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1160_0_0_1;
FieldInfo t1206_f6_FieldInfo = 
{
	"_selector", &t1160_0_0_1, &t1206_TI, offsetof(t1206, f6), &EmptyCustomAttributesCache};
extern Il2CppType t824_0_0_1;
FieldInfo t1206_f7_FieldInfo = 
{
	"_context", &t824_0_0_1, &t1206_TI, offsetof(t1206, f7), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t1206_f8_FieldInfo = 
{
	"_registeredObjectsCount", &t134_0_0_1, &t1206_TI, offsetof(t1206, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1206_FIs[] =
{
	&t1206_f0_FieldInfo,
	&t1206_f1_FieldInfo,
	&t1206_f2_FieldInfo,
	&t1206_f3_FieldInfo,
	&t1206_f4_FieldInfo,
	&t1206_f5_FieldInfo,
	&t1206_f6_FieldInfo,
	&t1206_f7_FieldInfo,
	&t1206_f8_FieldInfo,
	NULL
};
extern Il2CppType t1160_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1206_m6203_ParameterInfos[] = 
{
	{"selector", 0, 134221727, &EmptyCustomAttributesCache, &t1160_0_0_0},
	{"context", 1, 134221728, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1206_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m6203_MI = 
{
	".ctor", (methodPointerType)&m6203, &t1206_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1206_m6203_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3273, NULL, (methodPointerType)NULL};
extern TypeInfo t1206_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6204_MI = 
{
	"DoFixups", (methodPointerType)&m6204, &t1206_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 454, 0, 4, 0, false, false, 3274, NULL, (methodPointerType)NULL};
extern Il2CppType t817_0_0_0;
static ParameterInfo t1206_m6205_ParameterInfos[] = 
{
	{"objectID", 0, 134221729, &EmptyCustomAttributesCache, &t817_0_0_0},
};
extern TypeInfo t1206_TI;
extern Il2CppType t1209_0_0_0;
extern void* RuntimeInvoker_t25_t817 (MethodInfo* method, void* obj, void** args);
MethodInfo m6205_MI = 
{
	"GetObjectRecord", (methodPointerType)&m6205, &t1206_TI, &t1209_0_0_0, RuntimeInvoker_t25_t817, t1206_m6205_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 3275, NULL, (methodPointerType)NULL};
extern Il2CppType t817_0_0_0;
static ParameterInfo t1206_m6206_ParameterInfos[] = 
{
	{"objectID", 0, 134221730, &EmptyCustomAttributesCache, &t817_0_0_0},
};
extern TypeInfo t1206_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t817 (MethodInfo* method, void* obj, void** args);
MethodInfo m6206_MI = 
{
	"GetObject", (methodPointerType)&m6206, &t1206_TI, &t25_0_0_0, RuntimeInvoker_t25_t817, t1206_m6206_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 1, false, false, 3276, NULL, (methodPointerType)NULL};
extern TypeInfo t1206_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6207_MI = 
{
	"RaiseDeserializationEvent", (methodPointerType)&m6207, &t1206_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 3277, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1206_m6208_ParameterInfos[] = 
{
	{"obj", 0, 134221731, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1206_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6208_MI = 
{
	"RaiseOnDeserializingEvent", (methodPointerType)&m6208, &t1206_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1206_m6208_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 3278, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t1206_m6209_ParameterInfos[] = 
{
	{"obj", 0, 134221732, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1206_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6209_MI = 
{
	"RaiseOnDeserializedEvent", (methodPointerType)&m6209, &t1206_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1206_m6209_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3279, NULL, (methodPointerType)NULL};
extern Il2CppType t1210_0_0_0;
static ParameterInfo t1206_m6210_ParameterInfos[] = 
{
	{"record", 0, 134221733, &EmptyCustomAttributesCache, &t1210_0_0_0},
};
extern TypeInfo t1206_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6210_MI = 
{
	"AddFixup", (methodPointerType)&m6210, &t1206_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1206_m6210_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3280, NULL, (methodPointerType)NULL};
extern Il2CppType t817_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t817_0_0_0;
static ParameterInfo t1206_m6211_ParameterInfos[] = 
{
	{"arrayToBeFixed", 0, 134221734, &EmptyCustomAttributesCache, &t817_0_0_0},
	{"index", 1, 134221735, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"objectRequired", 2, 134221736, &EmptyCustomAttributesCache, &t817_0_0_0},
};
extern TypeInfo t1206_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t817_t134_t817 (MethodInfo* method, void* obj, void** args);
MethodInfo m6211_MI = 
{
	"RecordArrayElementFixup", (methodPointerType)&m6211, &t1206_TI, &t123_0_0_0, RuntimeInvoker_t123_t817_t134_t817, t1206_m6211_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 3, false, false, 3281, NULL, (methodPointerType)NULL};
extern Il2CppType t817_0_0_0;
extern Il2CppType t822_0_0_0;
extern Il2CppType t817_0_0_0;
static ParameterInfo t1206_m6212_ParameterInfos[] = 
{
	{"arrayToBeFixed", 0, 134221737, &EmptyCustomAttributesCache, &t817_0_0_0},
	{"indices", 1, 134221738, &EmptyCustomAttributesCache, &t822_0_0_0},
	{"objectRequired", 2, 134221739, &EmptyCustomAttributesCache, &t817_0_0_0},
};
extern TypeInfo t1206_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t817_t25_t817 (MethodInfo* method, void* obj, void** args);
MethodInfo m6212_MI = 
{
	"RecordArrayElementFixup", (methodPointerType)&m6212, &t1206_TI, &t123_0_0_0, RuntimeInvoker_t123_t817_t25_t817, t1206_m6212_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 3, false, false, 3282, NULL, (methodPointerType)NULL};
extern Il2CppType t817_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t817_0_0_0;
static ParameterInfo t1206_m6213_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134221740, &EmptyCustomAttributesCache, &t817_0_0_0},
	{"memberName", 1, 134221741, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"objectRequired", 2, 134221742, &EmptyCustomAttributesCache, &t817_0_0_0},
};
extern TypeInfo t1206_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t817_t25_t817 (MethodInfo* method, void* obj, void** args);
MethodInfo m6213_MI = 
{
	"RecordDelayedFixup", (methodPointerType)&m6213, &t1206_TI, &t123_0_0_0, RuntimeInvoker_t123_t817_t25_t817, t1206_m6213_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 3, false, false, 3283, NULL, (methodPointerType)NULL};
extern Il2CppType t817_0_0_0;
extern Il2CppType t438_0_0_0;
extern Il2CppType t817_0_0_0;
static ParameterInfo t1206_m6214_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134221743, &EmptyCustomAttributesCache, &t817_0_0_0},
	{"member", 1, 134221744, &EmptyCustomAttributesCache, &t438_0_0_0},
	{"objectRequired", 2, 134221745, &EmptyCustomAttributesCache, &t817_0_0_0},
};
extern TypeInfo t1206_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t817_t25_t817 (MethodInfo* method, void* obj, void** args);
MethodInfo m6214_MI = 
{
	"RecordFixup", (methodPointerType)&m6214, &t1206_TI, &t123_0_0_0, RuntimeInvoker_t123_t817_t25_t817, t1206_m6214_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 3, false, false, 3284, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t1209_0_0_0;
static ParameterInfo t1206_m6215_ParameterInfos[] = 
{
	{"obj", 0, 134221746, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"record", 1, 134221747, &EmptyCustomAttributesCache, &t1209_0_0_0},
};
extern TypeInfo t1206_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6215_MI = 
{
	"RegisterObjectInternal", (methodPointerType)&m6215, &t1206_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1206_m6215_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 3285, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t817_0_0_0;
extern Il2CppType t823_0_0_0;
extern Il2CppType t817_0_0_0;
extern Il2CppType t438_0_0_0;
extern Il2CppType t822_0_0_0;
static ParameterInfo t1206_m6216_ParameterInfos[] = 
{
	{"obj", 0, 134221748, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"objectID", 1, 134221749, &EmptyCustomAttributesCache, &t817_0_0_0},
	{"info", 2, 134221750, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"idOfContainingObj", 3, 134221751, &EmptyCustomAttributesCache, &t817_0_0_0},
	{"member", 4, 134221752, &EmptyCustomAttributesCache, &t438_0_0_0},
	{"arrayIndex", 5, 134221753, &EmptyCustomAttributesCache, &t822_0_0_0},
};
extern TypeInfo t1206_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t817_t25_t817_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6216_MI = 
{
	"RegisterObject", (methodPointerType)&m6216, &t1206_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t817_t25_t817_t25_t25, t1206_m6216_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 6, false, false, 3286, NULL, (methodPointerType)NULL};
static MethodInfo* t1206_MIs[] =
{
	&m6203_MI,
	&m6204_MI,
	&m6205_MI,
	&m6206_MI,
	&m6207_MI,
	&m6208_MI,
	&m6209_MI,
	&m6210_MI,
	&m6211_MI,
	&m6212_MI,
	&m6213_MI,
	&m6214_MI,
	&m6215_MI,
	&m6216_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6204_MI;
extern MethodInfo m6206_MI;
extern MethodInfo m6207_MI;
extern MethodInfo m6211_MI;
extern MethodInfo m6212_MI;
extern MethodInfo m6213_MI;
extern MethodInfo m6214_MI;
static MethodInfo* t1206_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6204_MI,
	&m6206_MI,
	&m6207_MI,
	&m6211_MI,
	&m6212_MI,
	&m6213_MI,
	&m6214_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1206_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1206__CustomAttributeCache = {
1,
NULL,
&t1206_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1206_0_0_0;
extern Il2CppType t1206_1_0_0;
extern TypeInfo t25_TI;
struct t1206;
extern TypeInfo t1206_TI;
extern CustomAttributesCache t1206__CustomAttributeCache;
TypeInfo t1206_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectManager", "System.Runtime.Serialization", t1206_MIs, NULL, t1206_FIs, NULL, &t25_TI, NULL, NULL, &t1206_TI, NULL, t1206_VT, &t1206__CustomAttributeCache, &t1206_TI, &t1206_0_0_0, &t1206_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1206), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 14, 0, 9, 0, 0, 11, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1210_TI;
#include "t1210MD.h"

extern TypeInfo t1210_TI;
extern TypeInfo t123_TI;
extern TypeInfo t1206_TI;
extern TypeInfo t1209_TI;
extern TypeInfo t817_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1223_TI;
extern MethodInfo m452_MI;
extern MethodInfo m6233_MI;
extern MethodInfo m6231_MI;
extern MethodInfo m8325_MI;
extern MethodInfo m1854_MI;
extern MethodInfo m6257_MI;


extern MethodInfo m6217_MI;
 void m6217 (t1210 * __this, t1209 * p0, t1209 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6217_MI);
	{
		m452(__this, &m452_MI);
		__this->f0 = p0;
		__this->f1 = p1;
		return;
	}
}
extern MethodInfo m6218_MI;
 bool m6218 (t1210 * __this, t1206 * p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6218_MI);
	{
		t1209 * L_0 = (__this->f0);
		NullCheck(L_0);
		bool L_1 = m6233(L_0, &m6233_MI);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		t1209 * L_2 = (__this->f1);
		NullCheck(L_2);
		bool L_3 = m6231(L_2, &m6231_MI);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		VirtActionInvoker1< t1206 * >::Invoke(&m8325_MI, __this, p0);
		return 1;
	}

IL_0023:
	{
		if (!p1)
		{
			goto IL_008c;
		}
	}
	{
		t1209 * L_4 = (__this->f0);
		NullCheck(L_4);
		bool L_5 = m6233(L_4, &m6233_MI);
		if (L_5)
		{
			goto IL_0058;
		}
	}
	{
		t1209 * L_6 = (__this->f0);
		NullCheck(L_6);
		int64_t L_7 = (L_6->f3);
		int64_t L_8 = L_7;
		t25 * L_9 = Box(InitializedTypeInfo(&t817_TI), &L_8);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_10 = m1854(NULL, (t27*) &_stringLiteral1045, L_9, (t27*) &_stringLiteral1046, &m1854_MI);
		t1223 * L_11 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_11, L_10, &m6257_MI);
		il2cpp_codegen_raise_exception (L_11);
	}

IL_0058:
	{
		t1209 * L_12 = (__this->f1);
		NullCheck(L_12);
		bool L_13 = m6233(L_12, &m6233_MI);
		if (L_13)
		{
			goto IL_008a;
		}
	}
	{
		t1209 * L_14 = (__this->f1);
		NullCheck(L_14);
		int64_t L_15 = (L_14->f3);
		int64_t L_16 = L_15;
		t25 * L_17 = Box(InitializedTypeInfo(&t817_TI), &L_16);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_18 = m1854(NULL, (t27*) &_stringLiteral1045, L_17, (t27*) &_stringLiteral1046, &m1854_MI);
		t1223 * L_19 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_19, L_18, &m6257_MI);
		il2cpp_codegen_raise_exception (L_19);
	}

IL_008a:
	{
		return 0;
	}

IL_008c:
	{
		return 0;
	}
}
// Metadata Definition System.Runtime.Serialization.BaseFixupRecord
extern Il2CppType t1209_0_0_5;
FieldInfo t1210_f0_FieldInfo = 
{
	"ObjectToBeFixed", &t1209_0_0_5, &t1210_TI, offsetof(t1210, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1209_0_0_5;
FieldInfo t1210_f1_FieldInfo = 
{
	"ObjectRequired", &t1209_0_0_5, &t1210_TI, offsetof(t1210, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1210_0_0_6;
FieldInfo t1210_f2_FieldInfo = 
{
	"NextSameContainer", &t1210_0_0_6, &t1210_TI, offsetof(t1210, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1210_0_0_6;
FieldInfo t1210_f3_FieldInfo = 
{
	"NextSameRequired", &t1210_0_0_6, &t1210_TI, offsetof(t1210, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1210_FIs[] =
{
	&t1210_f0_FieldInfo,
	&t1210_f1_FieldInfo,
	&t1210_f2_FieldInfo,
	&t1210_f3_FieldInfo,
	NULL
};
extern Il2CppType t1209_0_0_0;
extern Il2CppType t1209_0_0_0;
static ParameterInfo t1210_m6217_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134221754, &EmptyCustomAttributesCache, &t1209_0_0_0},
	{"objectRequired", 1, 134221755, &EmptyCustomAttributesCache, &t1209_0_0_0},
};
extern TypeInfo t1210_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6217_MI = 
{
	".ctor", (methodPointerType)&m6217, &t1210_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1210_m6217_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3287, NULL, (methodPointerType)NULL};
extern Il2CppType t1206_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1210_m6218_ParameterInfos[] = 
{
	{"manager", 0, 134221756, &EmptyCustomAttributesCache, &t1206_0_0_0},
	{"strict", 1, 134221757, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1210_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m6218_MI = 
{
	"DoFixup", (methodPointerType)&m6218, &t1210_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t137, t1210_m6218_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3288, NULL, (methodPointerType)NULL};
extern Il2CppType t1206_0_0_0;
static ParameterInfo t1210_m8325_ParameterInfos[] = 
{
	{"manager", 0, 134221758, &EmptyCustomAttributesCache, &t1206_0_0_0},
};
extern TypeInfo t1210_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8325_MI = 
{
	"FixupImpl", NULL, &t1210_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1210_m8325_ParameterInfos, &EmptyCustomAttributesCache, 1476, 0, 4, 1, false, false, 3289, NULL, (methodPointerType)NULL};
static MethodInfo* t1210_MIs[] =
{
	&m6217_MI,
	&m6218_MI,
	&m8325_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1210_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	NULL,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1210_0_0_0;
extern Il2CppType t1210_1_0_0;
extern TypeInfo t25_TI;
struct t1210;
extern TypeInfo t1210_TI;
TypeInfo t1210_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BaseFixupRecord", "System.Runtime.Serialization", t1210_MIs, NULL, t1210_FIs, NULL, &t25_TI, NULL, NULL, &t1210_TI, NULL, t1210_VT, &EmptyCustomAttributesCache, &t1210_TI, &t1210_0_0_0, &t1210_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1210), 0, -1, 0, 0, -1, 1048704, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 4, 0, 0, 5, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1211_TI;

extern TypeInfo t1211_TI;
extern TypeInfo t1210_TI;
extern TypeInfo t1209_TI;
extern TypeInfo t122_TI;
extern MethodInfo m6217_MI;
extern MethodInfo m4262_MI;


extern MethodInfo m6219_MI;
 void m6219 (t1211 * __this, t1209 * p0, int32_t p1, t1209 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6219_MI);
	{
		m6217(__this, p0, p2, &m6217_MI);
		__this->f4 = p1;
		return;
	}
}
extern MethodInfo m6220_MI;
 void m6220 (t1211 * __this, t1206 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6220_MI);
	t122 * V_0 = {0};
	{
		t1209 * L_0 = (__this->f0);
		NullCheck(L_0);
		t25 * L_1 = (L_0->f2);
		V_0 = ((t122 *)Castclass(L_1, InitializedTypeInfo(&t122_TI)));
		t1209 * L_2 = (__this->f1);
		NullCheck(L_2);
		t25 * L_3 = (L_2->f2);
		int32_t L_4 = (__this->f4);
		NullCheck(V_0);
		m4262(V_0, L_3, L_4, &m4262_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Serialization.ArrayFixupRecord
extern Il2CppType t134_0_0_1;
FieldInfo t1211_f4_FieldInfo = 
{
	"_index", &t134_0_0_1, &t1211_TI, offsetof(t1211, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1211_FIs[] =
{
	&t1211_f4_FieldInfo,
	NULL
};
extern Il2CppType t1209_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t1209_0_0_0;
static ParameterInfo t1211_m6219_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134221759, &EmptyCustomAttributesCache, &t1209_0_0_0},
	{"index", 1, 134221760, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"objectRequired", 2, 134221761, &EmptyCustomAttributesCache, &t1209_0_0_0},
};
extern TypeInfo t1211_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6219_MI = 
{
	".ctor", (methodPointerType)&m6219, &t1211_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134_t25, t1211_m6219_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 3290, NULL, (methodPointerType)NULL};
extern Il2CppType t1206_0_0_0;
static ParameterInfo t1211_m6220_ParameterInfos[] = 
{
	{"manager", 0, 134221762, &EmptyCustomAttributesCache, &t1206_0_0_0},
};
extern TypeInfo t1211_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6220_MI = 
{
	"FixupImpl", (methodPointerType)&m6220, &t1211_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1211_m6220_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 3291, NULL, (methodPointerType)NULL};
static MethodInfo* t1211_MIs[] =
{
	&m6219_MI,
	&m6220_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6220_MI;
static MethodInfo* t1211_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6220_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1211_0_0_0;
extern Il2CppType t1211_1_0_0;
extern TypeInfo t1210_TI;
struct t1211;
extern TypeInfo t1211_TI;
TypeInfo t1211_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ArrayFixupRecord", "System.Runtime.Serialization", t1211_MIs, NULL, t1211_FIs, NULL, &t1210_TI, NULL, NULL, &t1211_TI, NULL, t1211_VT, &EmptyCustomAttributesCache, &t1211_TI, &t1211_0_0_0, &t1211_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1211), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1212_TI;

extern TypeInfo t1212_TI;
extern TypeInfo t1210_TI;
extern TypeInfo t1209_TI;
extern MethodInfo m6217_MI;
extern MethodInfo m6229_MI;


extern MethodInfo m6221_MI;
 void m6221 (t1212 * __this, t1209 * p0, t822* p1, t1209 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6221_MI);
	{
		m6217(__this, p0, p2, &m6217_MI);
		__this->f4 = p1;
		return;
	}
}
extern MethodInfo m6222_MI;
 void m6222 (t1212 * __this, t1206 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6222_MI);
	{
		t1209 * L_0 = (__this->f0);
		t1209 * L_1 = (__this->f1);
		NullCheck(L_1);
		t25 * L_2 = (L_1->f2);
		t822* L_3 = (__this->f4);
		NullCheck(L_0);
		m6229(L_0, p0, L_2, L_3, &m6229_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Serialization.MultiArrayFixupRecord
extern Il2CppType t822_0_0_1;
FieldInfo t1212_f4_FieldInfo = 
{
	"_indices", &t822_0_0_1, &t1212_TI, offsetof(t1212, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1212_FIs[] =
{
	&t1212_f4_FieldInfo,
	NULL
};
extern Il2CppType t1209_0_0_0;
extern Il2CppType t822_0_0_0;
extern Il2CppType t1209_0_0_0;
static ParameterInfo t1212_m6221_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134221763, &EmptyCustomAttributesCache, &t1209_0_0_0},
	{"indices", 1, 134221764, &EmptyCustomAttributesCache, &t822_0_0_0},
	{"objectRequired", 2, 134221765, &EmptyCustomAttributesCache, &t1209_0_0_0},
};
extern TypeInfo t1212_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6221_MI = 
{
	".ctor", (methodPointerType)&m6221, &t1212_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t1212_m6221_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 3292, NULL, (methodPointerType)NULL};
extern Il2CppType t1206_0_0_0;
static ParameterInfo t1212_m6222_ParameterInfos[] = 
{
	{"manager", 0, 134221766, &EmptyCustomAttributesCache, &t1206_0_0_0},
};
extern TypeInfo t1212_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6222_MI = 
{
	"FixupImpl", (methodPointerType)&m6222, &t1212_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1212_m6222_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 3293, NULL, (methodPointerType)NULL};
static MethodInfo* t1212_MIs[] =
{
	&m6221_MI,
	&m6222_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6222_MI;
static MethodInfo* t1212_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6222_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1212_0_0_0;
extern Il2CppType t1212_1_0_0;
extern TypeInfo t1210_TI;
struct t1212;
extern TypeInfo t1212_TI;
TypeInfo t1212_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MultiArrayFixupRecord", "System.Runtime.Serialization", t1212_MIs, NULL, t1212_FIs, NULL, &t1210_TI, NULL, NULL, &t1212_TI, NULL, t1212_VT, &EmptyCustomAttributesCache, &t1212_TI, &t1212_0_0_0, &t1212_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1212), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1213_TI;

extern TypeInfo t1213_TI;
extern TypeInfo t1210_TI;
extern TypeInfo t1209_TI;
extern MethodInfo m6217_MI;
extern MethodInfo m6228_MI;


extern MethodInfo m6223_MI;
 void m6223 (t1213 * __this, t1209 * p0, t438 * p1, t1209 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6223_MI);
	{
		m6217(__this, p0, p2, &m6217_MI);
		__this->f4 = p1;
		return;
	}
}
extern MethodInfo m6224_MI;
 void m6224 (t1213 * __this, t1206 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6224_MI);
	{
		t1209 * L_0 = (__this->f0);
		t438 * L_1 = (__this->f4);
		t1209 * L_2 = (__this->f1);
		NullCheck(L_2);
		t25 * L_3 = (L_2->f2);
		NullCheck(L_0);
		m6228(L_0, p0, L_1, L_3, &m6228_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Serialization.FixupRecord
extern Il2CppType t438_0_0_6;
FieldInfo t1213_f4_FieldInfo = 
{
	"_member", &t438_0_0_6, &t1213_TI, offsetof(t1213, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1213_FIs[] =
{
	&t1213_f4_FieldInfo,
	NULL
};
extern Il2CppType t1209_0_0_0;
extern Il2CppType t438_0_0_0;
extern Il2CppType t1209_0_0_0;
static ParameterInfo t1213_m6223_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134221767, &EmptyCustomAttributesCache, &t1209_0_0_0},
	{"member", 1, 134221768, &EmptyCustomAttributesCache, &t438_0_0_0},
	{"objectRequired", 2, 134221769, &EmptyCustomAttributesCache, &t1209_0_0_0},
};
extern TypeInfo t1213_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6223_MI = 
{
	".ctor", (methodPointerType)&m6223, &t1213_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t1213_m6223_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 3294, NULL, (methodPointerType)NULL};
extern Il2CppType t1206_0_0_0;
static ParameterInfo t1213_m6224_ParameterInfos[] = 
{
	{"manager", 0, 134221770, &EmptyCustomAttributesCache, &t1206_0_0_0},
};
extern TypeInfo t1213_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6224_MI = 
{
	"FixupImpl", (methodPointerType)&m6224, &t1213_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1213_m6224_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 3295, NULL, (methodPointerType)NULL};
static MethodInfo* t1213_MIs[] =
{
	&m6223_MI,
	&m6224_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6224_MI;
static MethodInfo* t1213_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6224_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1213_0_0_0;
extern Il2CppType t1213_1_0_0;
extern TypeInfo t1210_TI;
struct t1213;
extern TypeInfo t1213_TI;
TypeInfo t1213_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FixupRecord", "System.Runtime.Serialization", t1213_MIs, NULL, t1213_FIs, NULL, &t1210_TI, NULL, NULL, &t1213_TI, NULL, t1213_VT, &EmptyCustomAttributesCache, &t1213_TI, &t1213_0_0_0, &t1213_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1213), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1214_TI;

extern TypeInfo t1214_TI;
extern TypeInfo t1210_TI;
extern TypeInfo t1209_TI;
extern MethodInfo m6217_MI;
extern MethodInfo m6230_MI;


extern MethodInfo m6225_MI;
 void m6225 (t1214 * __this, t1209 * p0, t27* p1, t1209 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6225_MI);
	{
		m6217(__this, p0, p2, &m6217_MI);
		__this->f4 = p1;
		return;
	}
}
extern MethodInfo m6226_MI;
 void m6226 (t1214 * __this, t1206 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6226_MI);
	{
		t1209 * L_0 = (__this->f0);
		t27* L_1 = (__this->f4);
		t1209 * L_2 = (__this->f1);
		NullCheck(L_2);
		t25 * L_3 = (L_2->f2);
		NullCheck(L_0);
		m6230(L_0, p0, L_1, L_3, &m6230_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Serialization.DelayedFixupRecord
extern Il2CppType t27_0_0_6;
FieldInfo t1214_f4_FieldInfo = 
{
	"_memberName", &t27_0_0_6, &t1214_TI, offsetof(t1214, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1214_FIs[] =
{
	&t1214_f4_FieldInfo,
	NULL
};
extern Il2CppType t1209_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t1209_0_0_0;
static ParameterInfo t1214_m6225_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134221771, &EmptyCustomAttributesCache, &t1209_0_0_0},
	{"memberName", 1, 134221772, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"objectRequired", 2, 134221773, &EmptyCustomAttributesCache, &t1209_0_0_0},
};
extern TypeInfo t1214_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6225_MI = 
{
	".ctor", (methodPointerType)&m6225, &t1214_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t1214_m6225_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 3296, NULL, (methodPointerType)NULL};
extern Il2CppType t1206_0_0_0;
static ParameterInfo t1214_m6226_ParameterInfos[] = 
{
	{"manager", 0, 134221774, &EmptyCustomAttributesCache, &t1206_0_0_0},
};
extern TypeInfo t1214_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6226_MI = 
{
	"FixupImpl", (methodPointerType)&m6226, &t1214_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1214_m6226_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 4, 1, false, false, 3297, NULL, (methodPointerType)NULL};
static MethodInfo* t1214_MIs[] =
{
	&m6225_MI,
	&m6226_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6226_MI;
static MethodInfo* t1214_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6226_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1214_0_0_0;
extern Il2CppType t1214_1_0_0;
extern TypeInfo t1210_TI;
struct t1214;
extern TypeInfo t1214_TI;
TypeInfo t1214_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DelayedFixupRecord", "System.Runtime.Serialization", t1214_MIs, NULL, t1214_FIs, NULL, &t1210_TI, NULL, NULL, &t1214_TI, NULL, t1214_VT, &EmptyCustomAttributesCache, &t1214_TI, &t1214_0_0_0, &t1214_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1214), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 5, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1215_TI;
#include "t1215MD.h"



// Metadata Definition System.Runtime.Serialization.ObjectRecordStatus
extern Il2CppType t462_0_0_1542;
FieldInfo t1215_f1_FieldInfo = 
{
	"value__", &t462_0_0_1542, &t1215_TI, offsetof(t1215, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1215_0_0_32854;
FieldInfo t1215_f2_FieldInfo = 
{
	"Unregistered", &t1215_0_0_32854, &t1215_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1215_0_0_32854;
FieldInfo t1215_f3_FieldInfo = 
{
	"ReferenceUnsolved", &t1215_0_0_32854, &t1215_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1215_0_0_32854;
FieldInfo t1215_f4_FieldInfo = 
{
	"ReferenceSolvingDelayed", &t1215_0_0_32854, &t1215_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1215_0_0_32854;
FieldInfo t1215_f5_FieldInfo = 
{
	"ReferenceSolved", &t1215_0_0_32854, &t1215_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1215_FIs[] =
{
	&t1215_f1_FieldInfo,
	&t1215_f2_FieldInfo,
	&t1215_f3_FieldInfo,
	&t1215_f4_FieldInfo,
	&t1215_f5_FieldInfo,
	NULL
};
static const uint8_t t1215_f2_DefaultValueData = 0;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1215_f2_DefaultValue = 
{
	&t1215_f2_FieldInfo, { (char*)&t1215_f2_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1215_f3_DefaultValueData = 1;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1215_f3_DefaultValue = 
{
	&t1215_f3_FieldInfo, { (char*)&t1215_f3_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1215_f4_DefaultValueData = 2;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1215_f4_DefaultValue = 
{
	&t1215_f4_FieldInfo, { (char*)&t1215_f4_DefaultValueData, &t462_0_0_0 }};
static const uint8_t t1215_f5_DefaultValueData = 3;
extern Il2CppType t462_0_0_0;
static Il2CppFieldDefaultValueEntry t1215_f5_DefaultValue = 
{
	&t1215_f5_FieldInfo, { (char*)&t1215_f5_DefaultValueData, &t462_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1215_FDVs[] = 
{
	&t1215_f2_DefaultValue,
	&t1215_f3_DefaultValue,
	&t1215_f4_DefaultValue,
	&t1215_f5_DefaultValue,
	NULL
};
static MethodInfo* t1215_MIs[] =
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
static MethodInfo* t1215_VT[] =
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
static Il2CppInterfaceOffsetPair t1215_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1215_0_0_0;
extern Il2CppType t1215_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t462_TI;
extern TypeInfo t462_TI;
TypeInfo t1215_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectRecordStatus", "System.Runtime.Serialization", t1215_MIs, NULL, t1215_FIs, NULL, &t15_TI, NULL, NULL, &t462_TI, NULL, t1215_VT, &EmptyCustomAttributesCache, &t462_TI, &t1215_0_0_0, &t1215_1_0_0, t1215_IOs, NULL, NULL, t1215_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1215)+ sizeof (Il2CppObject), sizeof (uint8_t), sizeof(uint8_t), 0, 0, -1, 256, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1209_TI;

extern TypeInfo t1209_TI;
extern TypeInfo t131_TI;
extern TypeInfo t125_TI;
extern TypeInfo t839_TI;
extern TypeInfo t123_TI;
extern TypeInfo t25_TI;
extern TypeInfo t841_TI;
extern TypeInfo t158_TI;
extern TypeInfo t1223_TI;
extern TypeInfo t122_TI;
extern TypeInfo t1210_TI;
extern TypeInfo t1163_TI;
extern TypeInfo t823_TI;
extern TypeInfo t824_TI;
extern TypeInfo t1160_TI;
extern TypeInfo t485_TI;
extern TypeInfo t637_TI;
extern TypeInfo t754_TI;
extern TypeInfo t725_TI;
extern TypeInfo t726_TI;
extern TypeInfo t729_TI;
extern TypeInfo t727_TI;
extern TypeInfo t27_TI;
extern TypeInfo t731_TI;
extern TypeInfo t1627_TI;
extern TypeInfo t685_TI;
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
extern MethodInfo m6233_MI;
extern MethodInfo m6232_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m4337_MI;
extern MethodInfo m6239_MI;
extern MethodInfo m452_MI;
extern MethodInfo m5671_MI;
extern MethodInfo m5846_MI;
extern MethodInfo m6257_MI;
extern MethodInfo m6205_MI;
extern MethodInfo m6228_MI;
extern MethodInfo m6229_MI;
extern MethodInfo m4242_MI;
extern MethodInfo m6260_MI;
extern MethodInfo m6218_MI;
extern MethodInfo m6236_MI;
extern MethodInfo m6235_MI;
extern MethodInfo m8324_MI;
extern MethodInfo m484_MI;
extern MethodInfo m4366_MI;
extern MethodInfo m3520_MI;
extern MethodInfo m532_MI;
extern MethodInfo m5688_MI;
extern MethodInfo m610_MI;
extern MethodInfo m8315_MI;


extern MethodInfo m6227_MI;
 void m6227 (t1209 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6227_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m6228_MI;
 void m6228 (t1209 * __this, t1206 * p0, t438 * p1, t25 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6228_MI);
	t1209 * V_0 = {0};
	t1209 * V_1 = {0};
	{
		if (!((t839 *)IsInst(p1, InitializedTypeInfo(&t839_TI))))
		{
			goto IL_001c;
		}
	}
	{
		t25 * L_0 = (__this->f2);
		NullCheck(((t839 *)Castclass(p1, InitializedTypeInfo(&t839_TI))));
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m5671_MI, ((t839 *)Castclass(p1, InitializedTypeInfo(&t839_TI))), L_0, p2);
		goto IL_0044;
	}

IL_001c:
	{
		if (!((t841 *)IsInst(p1, InitializedTypeInfo(&t841_TI))))
		{
			goto IL_0039;
		}
	}
	{
		t25 * L_1 = (__this->f2);
		NullCheck(((t841 *)Castclass(p1, InitializedTypeInfo(&t841_TI))));
		VirtActionInvoker3< t25 *, t25 *, t158* >::Invoke(&m5846_MI, ((t841 *)Castclass(p1, InitializedTypeInfo(&t841_TI))), L_1, p2, (t158*)(t158*)NULL);
		goto IL_0044;
	}

IL_0039:
	{
		t1223 * L_2 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_2, (t27*) &_stringLiteral1047, &m6257_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0044:
	{
		t438 * L_3 = (__this->f8);
		if (!L_3)
		{
			goto IL_0076;
		}
	}
	{
		int64_t L_4 = (__this->f5);
		NullCheck(p0);
		t1209 * L_5 = m6205(p0, L_4, &m6205_MI);
		V_0 = L_5;
		NullCheck(V_0);
		bool L_6 = m6233(V_0, &m6233_MI);
		if (!L_6)
		{
			goto IL_0074;
		}
	}
	{
		t438 * L_7 = (__this->f8);
		t25 * L_8 = (__this->f2);
		NullCheck(V_0);
		m6228(V_0, p0, L_7, L_8, &m6228_MI);
	}

IL_0074:
	{
		goto IL_00a6;
	}

IL_0076:
	{
		t822* L_9 = (__this->f9);
		if (!L_9)
		{
			goto IL_00a6;
		}
	}
	{
		int64_t L_10 = (__this->f5);
		NullCheck(p0);
		t1209 * L_11 = m6205(p0, L_10, &m6205_MI);
		V_1 = L_11;
		NullCheck(V_1);
		bool L_12 = m6233(V_1, &m6233_MI);
		if (!L_12)
		{
			goto IL_00a6;
		}
	}
	{
		t25 * L_13 = (__this->f2);
		t822* L_14 = (__this->f9);
		NullCheck(V_1);
		m6229(V_1, p0, L_13, L_14, &m6229_MI);
	}

IL_00a6:
	{
		return;
	}
}
extern MethodInfo m6229_MI;
 void m6229 (t1209 * __this, t1206 * p0, t25 * p1, t822* p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6229_MI);
	{
		t25 * L_0 = (__this->f2);
		NullCheck(((t122 *)Castclass(L_0, InitializedTypeInfo(&t122_TI))));
		m4242(((t122 *)Castclass(L_0, InitializedTypeInfo(&t122_TI))), p1, p2, &m4242_MI);
		return;
	}
}
extern MethodInfo m6230_MI;
 void m6230 (t1209 * __this, t1206 * p0, t27* p1, t25 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6230_MI);
	{
		t823 * L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1223 * L_1 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_1, (t27*) &_stringLiteral1047, &m6257_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t823 * L_2 = (__this->f4);
		NullCheck(p2);
		t131 * L_3 = m1959(p2, &m1959_MI);
		NullCheck(L_2);
		m6260(L_2, p1, p2, L_3, &m6260_MI);
		return;
	}
}
extern MethodInfo m6231_MI;
 bool m6231 (t1209 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6231_MI);
	{
		bool L_0 = m6233(__this, &m6233_MI);
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
		bool L_1 = m6232(__this, &m6232_MI);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		t25 * L_2 = (__this->f2);
		NullCheck(L_2);
		t131 * L_3 = m1959(L_2, &m1959_MI);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4337_MI, L_3);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		bool L_5 = m6239(__this, &m6239_MI);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		t823 * L_6 = (__this->f4);
		if (!L_6)
		{
			goto IL_0038;
		}
	}

IL_0036:
	{
		return 0;
	}

IL_0038:
	{
		return 1;
	}
}
extern MethodInfo m6232_MI;
 bool m6232 (t1209 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6232_MI);
	{
		uint8_t L_0 = (__this->f0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m6233_MI;
 bool m6233 (t1209 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6233_MI);
	{
		uint8_t L_0 = (__this->f0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m6234_MI;
 bool m6234 (t1209 * __this, bool p0, t1206 * p1, bool p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6234_MI);
	t1210 * V_0 = {0};
	t1210 * V_1 = {0};
	bool V_2 = false;
	t1210 * G_B3_0 = {0};
	t1210 * G_B13_0 = {0};
	{
		V_0 = (t1210 *)NULL;
		if (!p0)
		{
			goto IL_000d;
		}
	}
	{
		t1210 * L_0 = (__this->f10);
		G_B3_0 = L_0;
		goto IL_0013;
	}

IL_000d:
	{
		t1210 * L_1 = (__this->f11);
		G_B3_0 = L_1;
	}

IL_0013:
	{
		V_1 = G_B3_0;
		V_2 = 1;
		goto IL_0062;
	}

IL_0018:
	{
		NullCheck(V_1);
		bool L_2 = m6218(V_1, p1, p2, &m6218_MI);
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		m6236(__this, V_1, V_0, p0, &m6236_MI);
		if (!p0)
		{
			goto IL_003d;
		}
	}
	{
		NullCheck(V_1);
		t1209 * L_3 = (V_1->f1);
		NullCheck(L_3);
		m6235(L_3, V_1, 0, &m6235_MI);
		goto IL_004a;
	}

IL_003d:
	{
		NullCheck(V_1);
		t1209 * L_4 = (V_1->f0);
		NullCheck(L_4);
		m6235(L_4, V_1, 1, &m6235_MI);
	}

IL_004a:
	{
		goto IL_0050;
	}

IL_004c:
	{
		V_0 = V_1;
		V_2 = 0;
	}

IL_0050:
	{
		if (!p0)
		{
			goto IL_005b;
		}
	}
	{
		NullCheck(V_1);
		t1210 * L_5 = (V_1->f2);
		G_B13_0 = L_5;
		goto IL_0061;
	}

IL_005b:
	{
		NullCheck(V_1);
		t1210 * L_6 = (V_1->f3);
		G_B13_0 = L_6;
	}

IL_0061:
	{
		V_1 = G_B13_0;
	}

IL_0062:
	{
		if (V_1)
		{
			goto IL_0018;
		}
	}
	{
		return V_2;
	}
}
extern MethodInfo m6235_MI;
 void m6235 (t1209 * __this, t1210 * p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6235_MI);
	t1210 * V_0 = {0};
	t1210 * V_1 = {0};
	t1210 * G_B3_0 = {0};
	t1210 * G_B9_0 = {0};
	{
		V_0 = (t1210 *)NULL;
		if (!p1)
		{
			goto IL_000d;
		}
	}
	{
		t1210 * L_0 = (__this->f10);
		G_B3_0 = L_0;
		goto IL_0013;
	}

IL_000d:
	{
		t1210 * L_1 = (__this->f11);
		G_B3_0 = L_1;
	}

IL_0013:
	{
		V_1 = G_B3_0;
		goto IL_0038;
	}

IL_0016:
	{
		if ((((t1210 *)V_1) != ((t1210 *)p0)))
		{
			goto IL_0024;
		}
	}
	{
		m6236(__this, V_1, V_0, p1, &m6236_MI);
		return;
	}

IL_0024:
	{
		V_0 = V_1;
		if (!p1)
		{
			goto IL_0031;
		}
	}
	{
		NullCheck(V_1);
		t1210 * L_2 = (V_1->f2);
		G_B9_0 = L_2;
		goto IL_0037;
	}

IL_0031:
	{
		NullCheck(V_1);
		t1210 * L_3 = (V_1->f3);
		G_B9_0 = L_3;
	}

IL_0037:
	{
		V_1 = G_B9_0;
	}

IL_0038:
	{
		if (V_1)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
extern MethodInfo m6236_MI;
 void m6236 (t1209 * __this, t1210 * p0, t1210 * p1, bool p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6236_MI);
	{
		if (p1)
		{
			goto IL_0022;
		}
	}
	{
		if (!p2)
		{
			goto IL_0014;
		}
	}
	{
		NullCheck(p0);
		t1210 * L_0 = (p0->f2);
		__this->f10 = L_0;
		goto IL_0020;
	}

IL_0014:
	{
		NullCheck(p0);
		t1210 * L_1 = (p0->f3);
		__this->f11 = L_1;
	}

IL_0020:
	{
		goto IL_003f;
	}

IL_0022:
	{
		if (!p2)
		{
			goto IL_0033;
		}
	}
	{
		NullCheck(p0);
		t1210 * L_2 = (p0->f2);
		NullCheck(p1);
		p1->f2 = L_2;
		goto IL_003f;
	}

IL_0033:
	{
		NullCheck(p0);
		t1210 * L_3 = (p0->f3);
		NullCheck(p1);
		p1->f3 = L_3;
	}

IL_003f:
	{
		return;
	}
}
extern MethodInfo m6237_MI;
 void m6237 (t1209 * __this, t1210 * p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6237_MI);
	{
		if (!p1)
		{
			goto IL_0018;
		}
	}
	{
		t1210 * L_0 = (__this->f10);
		NullCheck(p0);
		p0->f2 = L_0;
		__this->f10 = p0;
		goto IL_002b;
	}

IL_0018:
	{
		t1210 * L_1 = (__this->f11);
		NullCheck(p0);
		p0->f3 = L_1;
		__this->f11 = p0;
	}

IL_002b:
	{
		return;
	}
}
extern MethodInfo m6238_MI;
 bool m6238 (t1209 * __this, t1206 * p0, t25 * p1, t824  p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6238_MI);
	t25 * V_0 = {0};
	t158* V_1 = {0};
	t754 * V_2 = {0};
	int32_t V_3 = 0;
	t25 * V_4 = {0};
	t1209 * V_5 = {0};
	t1209 * V_6 = {0};
	bool V_7 = false;
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t823 * L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0105;
		}
	}
	{
		t25 * L_1 = (__this->f6);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		t25 * L_2 = (__this->f6);
		t25 * L_3 = (__this->f2);
		t823 * L_4 = (__this->f4);
		t25 * L_5 = (__this->f7);
		NullCheck(L_2);
		t25 * L_6 = (t25 *)InterfaceFuncInvoker4< t25 *, t25 *, t823 *, t824 , t25 * >::Invoke(&m8324_MI, L_2, L_3, L_4, p2, L_5);
		V_0 = L_6;
		if (!V_0)
		{
			goto IL_003c;
		}
	}
	{
		__this->f2 = V_0;
	}

IL_003c:
	{
		__this->f0 = 3;
		goto IL_00fe;
	}

IL_0048:
	{
		t25 * L_7 = (__this->f2);
		if (!((t25 *)IsInst(L_7, InitializedTypeInfo(&t485_TI))))
		{
			goto IL_00de;
		}
	}
	{
		t158* L_8 = ((t158*)SZArrayNew(InitializedTypeInfo(&t158_TI), 2));
		t823 * L_9 = (__this->f4);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_9);
		*((t25 **)(t25 **)SZArrayLdElema(L_8, 0)) = (t25 *)L_9;
		t158* L_10 = L_8;
		t824  L_11 = p2;
		t25 * L_12 = Box(InitializedTypeInfo(&t824_TI), &L_11);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, L_12);
		*((t25 **)(t25 **)SZArrayLdElema(L_10, 1)) = (t25 *)L_12;
		V_1 = L_10;
		t25 * L_13 = (__this->f2);
		NullCheck(L_13);
		t131 * L_14 = m1959(L_13, &m1959_MI);
		t637* L_15 = ((t637*)SZArrayNew(InitializedTypeInfo(&t637_TI), 2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_16 = m484(NULL, LoadTypeToken(&t823_0_0_0), &m484_MI);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((t131 **)(t131 **)SZArrayLdElema(L_15, 0)) = (t131 *)L_16;
		t637* L_17 = L_15;
		t131 * L_18 = m484(NULL, LoadTypeToken(&t824_0_0_0), &m484_MI);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((t131 **)(t131 **)SZArrayLdElema(L_17, 1)) = (t131 *)L_18;
		NullCheck(L_14);
		t754 * L_19 = (t754 *)VirtFuncInvoker4< t754 *, int32_t, t726 *, t637*, t729* >::Invoke(&m4366_MI, L_14, ((int32_t)52), (t726 *)NULL, L_17, (t729*)(t729*)NULL);
		V_2 = L_19;
		if (V_2)
		{
			goto IL_00ce;
		}
	}
	{
		t25 * L_20 = (__this->f2);
		NullCheck(L_20);
		t131 * L_21 = m1959(L_20, &m1959_MI);
		NullCheck(L_21);
		t27* L_22 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_23 = m532(NULL, (t27*) &_stringLiteral1048, L_22, (t27*) &_stringLiteral1049, &m532_MI);
		t1223 * L_24 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_24, L_23, &m6257_MI);
		il2cpp_codegen_raise_exception (L_24);
	}

IL_00ce:
	{
		t25 * L_25 = (__this->f2);
		NullCheck(V_2);
		VirtFuncInvoker2< t25 *, t25 *, t158* >::Invoke(&m5688_MI, V_2, L_25, V_1);
		goto IL_00fe;
	}

IL_00de:
	{
		t25 * L_26 = (__this->f2);
		NullCheck(L_26);
		t131 * L_27 = m1959(L_26, &m1959_MI);
		NullCheck(L_27);
		t27* L_28 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, L_27);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_29 = m610(NULL, (t27*) &_stringLiteral1050, L_28, &m610_MI);
		t1223 * L_30 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_30, L_29, &m6257_MI);
		il2cpp_codegen_raise_exception (L_30);
	}

IL_00fe:
	{
		__this->f4 = (t823 *)NULL;
	}

IL_0105:
	{
		t25 * L_31 = (__this->f2);
		if (!((t25 *)IsInst(L_31, InitializedTypeInfo(&t1627_TI))))
		{
			goto IL_0198;
		}
	}
	{
		uint8_t L_32 = (__this->f0);
		if ((((int32_t)L_32) == ((int32_t)3)))
		{
			goto IL_0198;
		}
	}

IL_0121:
	try
	{ // begin try (depth: 1)
		{
			t25 * L_33 = (__this->f2);
			NullCheck(((t25 *)Castclass(L_33, InitializedTypeInfo(&t1627_TI))));
			t25 * L_34 = (t25 *)InterfaceFuncInvoker1< t25 *, t824  >::Invoke(&m8315_MI, ((t25 *)Castclass(L_33, InitializedTypeInfo(&t1627_TI))), p2);
			__this->f2 = L_34;
			V_3 = ((int32_t)100);
			goto IL_0168;
		}

IL_013d:
		{
			t25 * L_35 = (__this->f2);
			NullCheck(((t25 *)Castclass(L_35, InitializedTypeInfo(&t1627_TI))));
			t25 * L_36 = (t25 *)InterfaceFuncInvoker1< t25 *, t824  >::Invoke(&m8315_MI, ((t25 *)Castclass(L_35, InitializedTypeInfo(&t1627_TI))), p2);
			V_4 = L_36;
			t25 * L_37 = (__this->f2);
			if ((((t25 *)V_4) != ((t25 *)L_37)))
			{
				goto IL_015c;
			}
		}

IL_015a:
		{
			goto IL_0179;
		}

IL_015c:
		{
			__this->f2 = V_4;
			V_3 = ((int32_t)(V_3-1));
		}

IL_0168:
		{
			t25 * L_38 = (__this->f2);
			if (!((t25 *)IsInst(L_38, InitializedTypeInfo(&t1627_TI))))
			{
				goto IL_0179;
			}
		}

IL_0175:
		{
			if ((((int32_t)V_3) > ((int32_t)0)))
			{
				goto IL_013d;
			}
		}

IL_0179:
		{
			if (V_3)
			{
				goto IL_0187;
			}
		}

IL_017c:
		{
			t1223 * L_39 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
			m6257(L_39, (t27*) &_stringLiteral1051, &m6257_MI);
			il2cpp_codegen_raise_exception (L_39);
		}

IL_0187:
		{
			__this->f0 = 3;
			// IL_018e: leave.s IL_0198
			goto IL_0198;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t168 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t685_TI, e.ex->object.klass))
			goto IL_0190;
		throw e;
	}

IL_0190:
	{ // begin catch(System.NullReferenceException)
		{
			V_7 = 0;
			// IL_0194: leave.s IL_01f0
			goto IL_01f0;
		}

IL_0196:
		{
			// IL_0196: leave.s IL_0198
			goto IL_0198;
		}
	} // end catch (depth: 1)

IL_0198:
	{
		t438 * L_40 = (__this->f8);
		if (!L_40)
		{
			goto IL_01c4;
		}
	}
	{
		int64_t L_41 = (__this->f5);
		NullCheck(p0);
		t1209 * L_42 = m6205(p0, L_41, &m6205_MI);
		V_5 = L_42;
		t438 * L_43 = (__this->f8);
		t25 * L_44 = (__this->f2);
		NullCheck(V_5);
		m6228(V_5, p0, L_43, L_44, &m6228_MI);
		goto IL_01ee;
	}

IL_01c4:
	{
		t822* L_45 = (__this->f9);
		if (!L_45)
		{
			goto IL_01ee;
		}
	}
	{
		int64_t L_46 = (__this->f5);
		NullCheck(p0);
		t1209 * L_47 = m6205(p0, L_46, &m6205_MI);
		V_6 = L_47;
		t25 * L_48 = (__this->f2);
		t822* L_49 = (__this->f9);
		NullCheck(V_6);
		m6229(V_6, p0, L_48, L_49, &m6229_MI);
	}

IL_01ee:
	{
		return 1;
	}

IL_01f0:
	{
		return V_7;
	}
}
extern MethodInfo m6239_MI;
 bool m6239 (t1209 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6239_MI);
	{
		t1210 * L_0 = (__this->f10);
		return ((((int32_t)((((t1210 *)L_0) == ((t25 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Metadata Definition System.Runtime.Serialization.ObjectRecord
extern Il2CppType t1215_0_0_6;
FieldInfo t1209_f0_FieldInfo = 
{
	"Status", &t1215_0_0_6, &t1209_TI, offsetof(t1209, f0), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_6;
FieldInfo t1209_f1_FieldInfo = 
{
	"OriginalObject", &t25_0_0_6, &t1209_TI, offsetof(t1209, f1), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_6;
FieldInfo t1209_f2_FieldInfo = 
{
	"ObjectInstance", &t25_0_0_6, &t1209_TI, offsetof(t1209, f2), &EmptyCustomAttributesCache};
extern Il2CppType t817_0_0_6;
FieldInfo t1209_f3_FieldInfo = 
{
	"ObjectID", &t817_0_0_6, &t1209_TI, offsetof(t1209, f3), &EmptyCustomAttributesCache};
extern Il2CppType t823_0_0_6;
FieldInfo t1209_f4_FieldInfo = 
{
	"Info", &t823_0_0_6, &t1209_TI, offsetof(t1209, f4), &EmptyCustomAttributesCache};
extern Il2CppType t817_0_0_6;
FieldInfo t1209_f5_FieldInfo = 
{
	"IdOfContainingObj", &t817_0_0_6, &t1209_TI, offsetof(t1209, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1163_0_0_6;
FieldInfo t1209_f6_FieldInfo = 
{
	"Surrogate", &t1163_0_0_6, &t1209_TI, offsetof(t1209, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1160_0_0_6;
FieldInfo t1209_f7_FieldInfo = 
{
	"SurrogateSelector", &t1160_0_0_6, &t1209_TI, offsetof(t1209, f7), &EmptyCustomAttributesCache};
extern Il2CppType t438_0_0_6;
FieldInfo t1209_f8_FieldInfo = 
{
	"Member", &t438_0_0_6, &t1209_TI, offsetof(t1209, f8), &EmptyCustomAttributesCache};
extern Il2CppType t822_0_0_6;
FieldInfo t1209_f9_FieldInfo = 
{
	"ArrayIndex", &t822_0_0_6, &t1209_TI, offsetof(t1209, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1210_0_0_6;
FieldInfo t1209_f10_FieldInfo = 
{
	"FixupChainAsContainer", &t1210_0_0_6, &t1209_TI, offsetof(t1209, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1210_0_0_6;
FieldInfo t1209_f11_FieldInfo = 
{
	"FixupChainAsRequired", &t1210_0_0_6, &t1209_TI, offsetof(t1209, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1209_0_0_6;
FieldInfo t1209_f12_FieldInfo = 
{
	"Next", &t1209_0_0_6, &t1209_TI, offsetof(t1209, f12), &EmptyCustomAttributesCache};
static FieldInfo* t1209_FIs[] =
{
	&t1209_f0_FieldInfo,
	&t1209_f1_FieldInfo,
	&t1209_f2_FieldInfo,
	&t1209_f3_FieldInfo,
	&t1209_f4_FieldInfo,
	&t1209_f5_FieldInfo,
	&t1209_f6_FieldInfo,
	&t1209_f7_FieldInfo,
	&t1209_f8_FieldInfo,
	&t1209_f9_FieldInfo,
	&t1209_f10_FieldInfo,
	&t1209_f11_FieldInfo,
	&t1209_f12_FieldInfo,
	NULL
};
extern MethodInfo m6231_MI;
static PropertyInfo t1209____IsInstanceReady_PropertyInfo = 
{
	&t1209_TI, "IsInstanceReady", &m6231_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6232_MI;
static PropertyInfo t1209____IsUnsolvedObjectReference_PropertyInfo = 
{
	&t1209_TI, "IsUnsolvedObjectReference", &m6232_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6233_MI;
static PropertyInfo t1209____IsRegistered_PropertyInfo = 
{
	&t1209_TI, "IsRegistered", &m6233_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6239_MI;
static PropertyInfo t1209____HasPendingFixups_PropertyInfo = 
{
	&t1209_TI, "HasPendingFixups", &m6239_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1209_PIs[] =
{
	&t1209____IsInstanceReady_PropertyInfo,
	&t1209____IsUnsolvedObjectReference_PropertyInfo,
	&t1209____IsRegistered_PropertyInfo,
	&t1209____HasPendingFixups_PropertyInfo,
	NULL
};
extern TypeInfo t1209_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6227_MI = 
{
	".ctor", (methodPointerType)&m6227, &t1209_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3298, NULL, (methodPointerType)NULL};
extern Il2CppType t1206_0_0_0;
extern Il2CppType t438_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t1209_m6228_ParameterInfos[] = 
{
	{"manager", 0, 134221775, &EmptyCustomAttributesCache, &t1206_0_0_0},
	{"member", 1, 134221776, &EmptyCustomAttributesCache, &t438_0_0_0},
	{"value", 2, 134221777, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1209_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6228_MI = 
{
	"SetMemberValue", (methodPointerType)&m6228, &t1209_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t1209_m6228_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 3299, NULL, (methodPointerType)NULL};
extern Il2CppType t1206_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t822_0_0_0;
static ParameterInfo t1209_m6229_ParameterInfos[] = 
{
	{"manager", 0, 134221778, &EmptyCustomAttributesCache, &t1206_0_0_0},
	{"value", 1, 134221779, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"indices", 2, 134221780, &EmptyCustomAttributesCache, &t822_0_0_0},
};
extern TypeInfo t1209_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6229_MI = 
{
	"SetArrayValue", (methodPointerType)&m6229, &t1209_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t1209_m6229_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 3300, NULL, (methodPointerType)NULL};
extern Il2CppType t1206_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t1209_m6230_ParameterInfos[] = 
{
	{"manager", 0, 134221781, &EmptyCustomAttributesCache, &t1206_0_0_0},
	{"memberName", 1, 134221782, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 2, 134221783, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1209_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6230_MI = 
{
	"SetMemberValue", (methodPointerType)&m6230, &t1209_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t1209_m6230_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 3301, NULL, (methodPointerType)NULL};
extern TypeInfo t1209_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6231_MI = 
{
	"get_IsInstanceReady", (methodPointerType)&m6231, &t1209_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3302, NULL, (methodPointerType)NULL};
extern TypeInfo t1209_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6232_MI = 
{
	"get_IsUnsolvedObjectReference", (methodPointerType)&m6232, &t1209_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3303, NULL, (methodPointerType)NULL};
extern TypeInfo t1209_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6233_MI = 
{
	"get_IsRegistered", (methodPointerType)&m6233, &t1209_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3304, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
extern Il2CppType t1206_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1209_m6234_ParameterInfos[] = 
{
	{"asContainer", 0, 134221784, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"manager", 1, 134221785, &EmptyCustomAttributesCache, &t1206_0_0_0},
	{"strict", 2, 134221786, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1209_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t137_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m6234_MI = 
{
	"DoFixups", (methodPointerType)&m6234, &t1209_TI, &t125_0_0_0, RuntimeInvoker_t125_t137_t25_t137, t1209_m6234_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 3305, NULL, (methodPointerType)NULL};
extern Il2CppType t1210_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1209_m6235_ParameterInfos[] = 
{
	{"fixupToRemove", 0, 134221787, &EmptyCustomAttributesCache, &t1210_0_0_0},
	{"asContainer", 1, 134221788, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1209_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m6235_MI = 
{
	"RemoveFixup", (methodPointerType)&m6235, &t1209_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t137, t1209_m6235_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3306, NULL, (methodPointerType)NULL};
extern Il2CppType t1210_0_0_0;
extern Il2CppType t1210_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1209_m6236_ParameterInfos[] = 
{
	{"fixup", 0, 134221789, &EmptyCustomAttributesCache, &t1210_0_0_0},
	{"prevFixup", 1, 134221790, &EmptyCustomAttributesCache, &t1210_0_0_0},
	{"asContainer", 2, 134221791, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1209_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m6236_MI = 
{
	"UnchainFixup", (methodPointerType)&m6236, &t1209_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t137, t1209_m6236_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 3307, NULL, (methodPointerType)NULL};
extern Il2CppType t1210_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1209_m6237_ParameterInfos[] = 
{
	{"fixup", 0, 134221792, &EmptyCustomAttributesCache, &t1210_0_0_0},
	{"asContainer", 1, 134221793, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1209_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m6237_MI = 
{
	"ChainFixup", (methodPointerType)&m6237, &t1209_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t137, t1209_m6237_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3308, NULL, (methodPointerType)NULL};
extern Il2CppType t1206_0_0_0;
extern Il2CppType t1160_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1209_m6238_ParameterInfos[] = 
{
	{"manager", 0, 134221794, &EmptyCustomAttributesCache, &t1206_0_0_0},
	{"selector", 1, 134221795, &EmptyCustomAttributesCache, &t1160_0_0_0},
	{"context", 2, 134221796, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1209_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m6238_MI = 
{
	"LoadData", (methodPointerType)&m6238, &t1209_TI, &t125_0_0_0, RuntimeInvoker_t125_t25_t25_t824, t1209_m6238_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 3309, NULL, (methodPointerType)NULL};
extern TypeInfo t1209_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6239_MI = 
{
	"get_HasPendingFixups", (methodPointerType)&m6239, &t1209_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3310, NULL, (methodPointerType)NULL};
static MethodInfo* t1209_MIs[] =
{
	&m6227_MI,
	&m6228_MI,
	&m6229_MI,
	&m6230_MI,
	&m6231_MI,
	&m6232_MI,
	&m6233_MI,
	&m6234_MI,
	&m6235_MI,
	&m6236_MI,
	&m6237_MI,
	&m6238_MI,
	&m6239_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1209_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1209_0_0_0;
extern Il2CppType t1209_1_0_0;
extern TypeInfo t25_TI;
struct t1209;
extern TypeInfo t1209_TI;
TypeInfo t1209_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjectRecord", "System.Runtime.Serialization", t1209_MIs, t1209_PIs, t1209_FIs, NULL, &t25_TI, NULL, NULL, &t1209_TI, NULL, t1209_VT, &EmptyCustomAttributesCache, &t1209_TI, &t1209_0_0_0, &t1209_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1209), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 13, 4, 13, 0, 0, 4, 0, 0};
#include "t1216.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1216_TI;
#include "t1216MD.h"



// Metadata Definition System.Runtime.Serialization.OnDeserializedAttribute
static MethodInfo* t1216_MIs[] =
{
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1216_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t1216_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1216_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 64, &m3439_MI);
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
CustomAttributesCache t1216__CustomAttributeCache = {
2,
NULL,
&t1216_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1216_0_0_0;
extern Il2CppType t1216_1_0_0;
extern TypeInfo t591_TI;
struct t1216;
extern TypeInfo t1216_TI;
extern CustomAttributesCache t1216__CustomAttributeCache;
TypeInfo t1216_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnDeserializedAttribute", "System.Runtime.Serialization", t1216_MIs, NULL, NULL, NULL, &t591_TI, NULL, NULL, &t1216_TI, NULL, t1216_VT, &t1216__CustomAttributeCache, &t1216_TI, &t1216_0_0_0, &t1216_1_0_0, t1216_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1216), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1217.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1217_TI;
#include "t1217MD.h"



// Metadata Definition System.Runtime.Serialization.OnDeserializingAttribute
static MethodInfo* t1217_MIs[] =
{
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1217_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t1217_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1217_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 64, &m3439_MI);
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
CustomAttributesCache t1217__CustomAttributeCache = {
2,
NULL,
&t1217_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1217_0_0_0;
extern Il2CppType t1217_1_0_0;
extern TypeInfo t591_TI;
struct t1217;
extern TypeInfo t1217_TI;
extern CustomAttributesCache t1217__CustomAttributeCache;
TypeInfo t1217_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnDeserializingAttribute", "System.Runtime.Serialization", t1217_MIs, NULL, NULL, NULL, &t591_TI, NULL, NULL, &t1217_TI, NULL, t1217_VT, &t1217__CustomAttributeCache, &t1217_TI, &t1217_0_0_0, &t1217_1_0_0, t1217_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1217), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1218.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1218_TI;
#include "t1218MD.h"



// Metadata Definition System.Runtime.Serialization.OnSerializedAttribute
static MethodInfo* t1218_MIs[] =
{
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1218_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t1218_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1218_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 64, &m3439_MI);
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
CustomAttributesCache t1218__CustomAttributeCache = {
2,
NULL,
&t1218_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1218_0_0_0;
extern Il2CppType t1218_1_0_0;
extern TypeInfo t591_TI;
struct t1218;
extern TypeInfo t1218_TI;
extern CustomAttributesCache t1218__CustomAttributeCache;
TypeInfo t1218_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnSerializedAttribute", "System.Runtime.Serialization", t1218_MIs, NULL, NULL, NULL, &t591_TI, NULL, NULL, &t1218_TI, NULL, t1218_VT, &t1218__CustomAttributeCache, &t1218_TI, &t1218_0_0_0, &t1218_1_0_0, t1218_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1218), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1219.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1219_TI;
#include "t1219MD.h"



// Metadata Definition System.Runtime.Serialization.OnSerializingAttribute
static MethodInfo* t1219_MIs[] =
{
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1219_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t1219_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t724_TI;
extern MethodInfo m3439_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1219_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 64, &m3439_MI);
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
CustomAttributesCache t1219__CustomAttributeCache = {
2,
NULL,
&t1219_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1219_0_0_0;
extern Il2CppType t1219_1_0_0;
extern TypeInfo t591_TI;
struct t1219;
extern TypeInfo t1219_TI;
extern CustomAttributesCache t1219__CustomAttributeCache;
TypeInfo t1219_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OnSerializingAttribute", "System.Runtime.Serialization", t1219_MIs, NULL, NULL, NULL, &t591_TI, NULL, NULL, &t1219_TI, NULL, t1219_VT, &t1219__CustomAttributeCache, &t1219_TI, &t1219_0_0_0, &t1219_1_0_0, t1219_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1219), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1196_TI;

extern MethodInfo m452_MI;


extern MethodInfo m6240_MI;
 void m6240 (t1196 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6240_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Serialization.SerializationBinder
extern TypeInfo t1196_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6240_MI = 
{
	".ctor", (methodPointerType)&m6240, &t1196_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3311, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t27_0_0_0;
static ParameterInfo t1196_m8316_ParameterInfos[] = 
{
	{"assemblyName", 0, 134221797, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"typeName", 1, 134221798, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1196_TI;
extern Il2CppType t131_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8316_MI = 
{
	"BindToType", NULL, &t1196_TI, &t131_0_0_0, RuntimeInvoker_t25_t25_t25, t1196_m8316_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 2, false, false, 3312, NULL, (methodPointerType)NULL};
static MethodInfo* t1196_MIs[] =
{
	&m6240_MI,
	&m8316_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1196_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	NULL,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1196_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1196__CustomAttributeCache = {
1,
NULL,
&t1196_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1196_0_0_0;
extern Il2CppType t1196_1_0_0;
extern TypeInfo t25_TI;
struct t1196;
extern TypeInfo t1196_TI;
extern CustomAttributesCache t1196__CustomAttributeCache;
TypeInfo t1196_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationBinder", "System.Runtime.Serialization", t1196_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t1196_TI, NULL, t1196_VT, &t1196__CustomAttributeCache, &t1196_TI, &t1196_0_0_0, &t1196_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1196), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 5, 0, 0};
#include "t1220.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1220_TI;
#include "t1220MD.h"

#include "t219.h"


extern MethodInfo m6241_MI;
 void m6241 (t1220 * __this, t25 * p0, t61 p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6241_MI);
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m6242_MI;
 void m6242 (t1220 * __this, t824  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6242_MI);
	typedef  void (*FunctionPointerType) (t25 * __this, t824  p0, MethodInfo* method);
	if (__this->f9)
		m6242((t1220 *)__this->f9,  p0, method);
	((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
void pinvoke_delegate_wrapper_t1220(Il2CppObject* delegate, t824  p0)
{
	typedef void (STDCALL *native_function_ptr_type)(t824 );
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	t824  _p0_marshaled;
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Serialization.StreamingContext'."));

	// Native function invocation
	_il2cpp_pinvoke_func(_p0_marshaled);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern MethodInfo m6243_MI;
 t25 * m6243 (t1220 * __this, t824  p0, t219 * p1, t25 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6243_MI);
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t824_TI), &p0);
	return (t25 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m6244_MI;
 void m6244 (t1220 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6244_MI);
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t1220_m6241_ParameterInfos[] = 
{
	{"object", 0, 134221810, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134221811, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t1220_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m6241_MI = 
{
	".ctor", (methodPointerType)&m6241, &t1220_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t61, t1220_m6241_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 3321, NULL, (methodPointerType)NULL};
extern Il2CppType t824_0_0_0;
static ParameterInfo t1220_m6242_ParameterInfos[] = 
{
	{"context", 0, 134221812, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1220_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m6242_MI = 
{
	"Invoke", (methodPointerType)&m6242, &t1220_TI, &t123_0_0_0, RuntimeInvoker_t123_t824, t1220_m6242_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 3322, NULL, (methodPointerType)NULL};
extern Il2CppType t824_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t1220_m6243_ParameterInfos[] = 
{
	{"context", 0, 134221813, &EmptyCustomAttributesCache, &t824_0_0_0},
	{"callback", 1, 134221814, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134221815, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1220_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t25_t824_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6243_MI = 
{
	"BeginInvoke", (methodPointerType)&m6243, &t1220_TI, &t218_0_0_0, RuntimeInvoker_t25_t824_t25_t25, t1220_m6243_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 3323, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t1220_m6244_ParameterInfos[] = 
{
	{"result", 0, 134221816, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t1220_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6244_MI = 
{
	"EndInvoke", (methodPointerType)&m6244, &t1220_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1220_m6244_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 3324, NULL, (methodPointerType)NULL};
static MethodInfo* t1220_MIs[] =
{
	&m6241_MI,
	&m6242_MI,
	&m6243_MI,
	&m6244_MI,
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
extern MethodInfo m6242_MI;
extern MethodInfo m6243_MI;
extern MethodInfo m6244_MI;
static MethodInfo* t1220_VT[] =
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
	&m6242_MI,
	&m6243_MI,
	&m6244_MI,
};
extern TypeInfo t484_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t1220_IOs[] = 
{
	{ &t484_TI, 4},
	{ &t485_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1220_0_0_0;
extern Il2CppType t1220_1_0_0;
extern TypeInfo t345_TI;
struct t1220;
extern TypeInfo t1220_TI;
extern TypeInfo t1221_TI;
TypeInfo t1220_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CallbackHandler", "", t1220_MIs, NULL, NULL, NULL, &t345_TI, NULL, &t1221_TI, &t1220_TI, NULL, t1220_VT, &EmptyCustomAttributesCache, &t1220_TI, &t1220_0_0_0, &t1220_1_0_0, t1220_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t1220, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1220), 0, sizeof(methodPointerType), 0, 0, -1, 258, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1221_TI;

#include "t1370.h"
#include "t466.h"
extern TypeInfo t1221_TI;
extern TypeInfo t1219_TI;
extern TypeInfo t131_TI;
extern TypeInfo t1218_TI;
extern TypeInfo t1217_TI;
extern TypeInfo t1216_TI;
extern TypeInfo t972_TI;
extern TypeInfo t25_TI;
extern TypeInfo t931_TI;
extern TypeInfo t840_TI;
extern TypeInfo t657_TI;
extern TypeInfo t725_TI;
extern TypeInfo t438_TI;
extern TypeInfo t125_TI;
extern TypeInfo t134_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1370_TI;
extern TypeInfo t78_TI;
extern TypeInfo t1220_TI;
extern TypeInfo t167_TI;
extern TypeInfo t123_TI;
extern TypeInfo t824_TI;
#include "t1370MD.h"
#include "t466MD.h"
extern Il2CppType t1219_0_0_0;
extern Il2CppType t1218_0_0_0;
extern Il2CppType t1217_0_0_0;
extern Il2CppType t1216_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t1220_0_0_0;
extern MethodInfo m452_MI;
extern MethodInfo m484_MI;
extern MethodInfo m6248_MI;
extern MethodInfo m4900_MI;
extern MethodInfo m4830_MI;
extern MethodInfo m7963_MI;
extern MethodInfo m7809_MI;
extern MethodInfo m4842_MI;
extern MethodInfo m3518_MI;
extern MethodInfo m3520_MI;
extern MethodInfo m3941_MI;
extern MethodInfo m7733_MI;
extern MethodInfo m3432_MI;
extern MethodInfo m4835_MI;
extern MethodInfo m4855_MI;
extern MethodInfo m504_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m2105_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m6242_MI;
extern MethodInfo m6249_MI;
extern MethodInfo m4914_MI;
extern MethodInfo m6922_MI;
extern MethodInfo m4922_MI;
extern MethodInfo m6245_MI;
extern MethodInfo m4915_MI;
extern MethodInfo m6923_MI;


extern MethodInfo m6245_MI;
 void m6245 (t1221 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6245_MI);
	{
		m452(__this, &m452_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t1219_0_0_0), &m484_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1221_TI));
		t931 * L_1 = m6248(NULL, p0, L_0, &m6248_MI);
		__this->f0 = L_1;
		t131 * L_2 = m484(NULL, LoadTypeToken(&t1218_0_0_0), &m484_MI);
		t931 * L_3 = m6248(NULL, p0, L_2, &m6248_MI);
		__this->f1 = L_3;
		t131 * L_4 = m484(NULL, LoadTypeToken(&t1217_0_0_0), &m484_MI);
		t931 * L_5 = m6248(NULL, p0, L_4, &m6248_MI);
		__this->f2 = L_5;
		t131 * L_6 = m484(NULL, LoadTypeToken(&t1216_0_0_0), &m484_MI);
		t931 * L_7 = m6248(NULL, p0, L_6, &m6248_MI);
		__this->f3 = L_7;
		return;
	}
}
extern MethodInfo m6246_MI;
 void m6246 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6246_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t972_TI));
		t972 * L_0 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_0, &m4900_MI);
		((t1221_SFs*)InitializedTypeInfo(&t1221_TI)->static_fields)->f4 = L_0;
		t25 * L_1 = (t25 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t25_TI));
		m452(L_1, &m452_MI);
		((t1221_SFs*)InitializedTypeInfo(&t1221_TI)->static_fields)->f5 = L_1;
		return;
	}
}
extern MethodInfo m6247_MI;
 bool m6247 (t1221 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6247_MI);
	{
		t931 * L_0 = (__this->f3);
		return ((((int32_t)((((t931 *)L_0) == ((t25 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m6248_MI;
 t931 * m6248 (t25 * __this, t131 * p0, t131 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6248_MI);
	t931 * V_0 = {0};
	t131 * V_1 = {0};
	int32_t V_2 = 0;
	t657 * V_3 = {0};
	t840* V_4 = {0};
	int32_t V_5 = 0;
	t931 * G_B13_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t931_TI));
		t931 * L_0 = (t931 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t931_TI));
		m4830(L_0, &m4830_MI);
		V_0 = L_0;
		V_1 = p0;
		goto IL_006c;
	}

IL_000a:
	{
		V_2 = 0;
		NullCheck(V_1);
		t840* L_1 = (t840*)VirtFuncInvoker1< t840*, int32_t >::Invoke(&m7963_MI, V_1, ((int32_t)54));
		V_4 = L_1;
		V_5 = 0;
		goto IL_003d;
	}

IL_001b:
	{
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, V_5);
		V_3 = (*(t657 **)(t657 **)SZArrayLdElema(V_4, V_5));
		NullCheck(V_3);
		bool L_2 = (bool)VirtFuncInvoker2< bool, t131 *, bool >::Invoke(&m7809_MI, V_3, p1, 0);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		NullCheck(V_0);
		VirtFuncInvoker1< int32_t, t25 * >::Invoke(&m4842_MI, V_0, V_3);
		V_2 = ((int32_t)(V_2+1));
	}

IL_0037:
	{
		V_5 = ((int32_t)(V_5+1));
	}

IL_003d:
	{
		NullCheck(V_4);
		if ((((int32_t)V_5) < ((int32_t)(((int32_t)(((t122 *)V_4)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		if ((((int32_t)V_2) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		NullCheck(p0);
		t27* L_3 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3518_MI, p0);
		NullCheck(p1);
		t27* L_4 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, p1);
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_5 = m3941(NULL, (t27*) &_stringLiteral1052, L_3, L_4, &m3941_MI);
		t1370 * L_6 = (t1370 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1370_TI));
		m7733(L_6, L_5, &m7733_MI);
		il2cpp_codegen_raise_exception (L_6);
	}

IL_0065:
	{
		NullCheck(V_1);
		t131 * L_7 = (t131 *)VirtFuncInvoker0< t131 * >::Invoke(&m3432_MI, V_1);
		V_1 = L_7;
	}

IL_006c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_8 = m484(NULL, LoadTypeToken(&t25_0_0_0), &m484_MI);
		if ((((t131 *)V_1) != ((t131 *)L_8)))
		{
			goto IL_000a;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4835_MI, V_0);
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		G_B13_0 = ((t931 *)(NULL));
		goto IL_0085;
	}

IL_0084:
	{
		G_B13_0 = V_0;
	}

IL_0085:
	{
		return G_B13_0;
	}
}
extern MethodInfo m6249_MI;
 void m6249 (t25 * __this, t931 * p0, t25 * p1, t824  p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6249_MI);
	t1220 * V_0 = {0};
	t657 * V_1 = {0};
	t25 * V_2 = {0};
	t25 * V_3 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if (p0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		V_0 = (t1220 *)NULL;
		NullCheck(p0);
		t25 * L_0 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4855_MI, p0);
		V_2 = L_0;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_000f:
		{
			NullCheck(V_2);
			t25 * L_1 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m504_MI, V_2);
			V_1 = ((t657 *)Castclass(L_1, InitializedTypeInfo(&t657_TI)));
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
			t131 * L_2 = m484(NULL, LoadTypeToken(&t1220_0_0_0), &m484_MI);
			t466 * L_3 = m3479(NULL, L_2, p1, V_1, &m3479_MI);
			t466 * L_4 = m2105(NULL, L_3, V_0, &m2105_MI);
			V_0 = ((t1220 *)Castclass(L_4, InitializedTypeInfo(&t1220_TI)));
		}

IL_0038:
		{
			NullCheck(V_2);
			bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m506_MI, V_2);
			if (L_5)
			{
				goto IL_000f;
			}
		}

IL_0040:
		{
			// IL_0040: leave.s IL_0054
			leaveInstructions[0] = 0x54; // 1
			THROW_SENTINEL(IL_0054);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0042;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0042;
	}

IL_0042:
	{ // begin finally (depth: 1)
		{
			V_3 = ((t25 *)IsInst(V_2, InitializedTypeInfo(&t167_TI)));
			if (V_3)
			{
				goto IL_004d;
			}
		}

IL_004c:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x54:
					goto IL_0054;
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

IL_004d:
		{
			NullCheck(V_3);
			InterfaceActionInvoker0::Invoke(&m507_MI, V_3);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x54:
					goto IL_0054;
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

IL_0054:
	{
		NullCheck(V_0);
		VirtActionInvoker1< t824  >::Invoke(&m6242_MI, V_0, p2);
		return;
	}
}
extern MethodInfo m6250_MI;
 void m6250 (t1221 * __this, t25 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6250_MI);
	{
		t931 * L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1221_TI));
		m6249(NULL, L_0, p0, p1, &m6249_MI);
		return;
	}
}
extern MethodInfo m6251_MI;
 void m6251 (t1221 * __this, t25 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6251_MI);
	{
		t931 * L_0 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1221_TI));
		m6249(NULL, L_0, p0, p1, &m6249_MI);
		return;
	}
}
extern MethodInfo m6252_MI;
 t1221 * m6252 (t25 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6252_MI);
	t1221 * V_0 = {0};
	t25 * V_1 = {0};
	t972 * V_2 = {0};
	t1221 * V_3 = {0};
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1221_TI));
		NullCheck((((t1221_SFs*)InitializedTypeInfo(&t1221_TI)->static_fields)->f4));
		t25 * L_0 = (t25 *)VirtFuncInvoker1< t25 *, t25 * >::Invoke(&m4914_MI, (((t1221_SFs*)InitializedTypeInfo(&t1221_TI)->static_fields)->f4), p0);
		V_0 = ((t1221 *)Castclass(L_0, InitializedTypeInfo(&t1221_TI)));
		if (!V_0)
		{
			goto IL_0016;
		}
	}
	{
		return V_0;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1221_TI));
		V_1 = (((t1221_SFs*)InitializedTypeInfo(&t1221_TI)->static_fields)->f5);
		m6922(NULL, V_1, &m6922_MI);
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1221_TI));
			NullCheck((((t1221_SFs*)InitializedTypeInfo(&t1221_TI)->static_fields)->f4));
			t25 * L_1 = (t25 *)VirtFuncInvoker1< t25 *, t25 * >::Invoke(&m4914_MI, (((t1221_SFs*)InitializedTypeInfo(&t1221_TI)->static_fields)->f4), p0);
			V_0 = ((t1221 *)Castclass(L_1, InitializedTypeInfo(&t1221_TI)));
			if (V_0)
			{
				goto IL_005b;
			}
		}

IL_0036:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1221_TI));
			NullCheck((((t1221_SFs*)InitializedTypeInfo(&t1221_TI)->static_fields)->f4));
			t25 * L_2 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4922_MI, (((t1221_SFs*)InitializedTypeInfo(&t1221_TI)->static_fields)->f4));
			V_2 = ((t972 *)Castclass(L_2, InitializedTypeInfo(&t972_TI)));
			t1221 * L_3 = (t1221 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1221_TI));
			m6245(L_3, p0, &m6245_MI);
			V_0 = L_3;
			NullCheck(V_2);
			VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4915_MI, V_2, p0, V_0);
			((t1221_SFs*)InitializedTypeInfo(&t1221_TI)->static_fields)->f4 = V_2;
		}

IL_005b:
		{
			V_3 = V_0;
			// IL_005d: leave.s IL_0068
			leaveInstructions[0] = 0x68; // 1
			THROW_SENTINEL(IL_0068);
			// finally target depth: 1
		}

IL_005f:
		{
			// IL_005f: leave.s IL_0068
			leaveInstructions[0] = 0x68; // 1
			THROW_SENTINEL(IL_0068);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0061;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0061;
	}

IL_0061:
	{ // begin finally (depth: 1)
		m6923(NULL, V_1, &m6923_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x68:
				goto IL_0068;
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

IL_0068:
	{
		return V_3;
	}
}
// Metadata Definition System.Runtime.Serialization.SerializationCallbacks
extern Il2CppType t931_0_0_33;
FieldInfo t1221_f0_FieldInfo = 
{
	"onSerializingList", &t931_0_0_33, &t1221_TI, offsetof(t1221, f0), &EmptyCustomAttributesCache};
extern Il2CppType t931_0_0_33;
FieldInfo t1221_f1_FieldInfo = 
{
	"onSerializedList", &t931_0_0_33, &t1221_TI, offsetof(t1221, f1), &EmptyCustomAttributesCache};
extern Il2CppType t931_0_0_33;
FieldInfo t1221_f2_FieldInfo = 
{
	"onDeserializingList", &t931_0_0_33, &t1221_TI, offsetof(t1221, f2), &EmptyCustomAttributesCache};
extern Il2CppType t931_0_0_33;
FieldInfo t1221_f3_FieldInfo = 
{
	"onDeserializedList", &t931_0_0_33, &t1221_TI, offsetof(t1221, f3), &EmptyCustomAttributesCache};
extern Il2CppType t972_0_0_17;
FieldInfo t1221_f4_FieldInfo = 
{
	"cache", &t972_0_0_17, &t1221_TI, offsetof(t1221_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_17;
FieldInfo t1221_f5_FieldInfo = 
{
	"cache_lock", &t25_0_0_17, &t1221_TI, offsetof(t1221_SFs, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1221_FIs[] =
{
	&t1221_f0_FieldInfo,
	&t1221_f1_FieldInfo,
	&t1221_f2_FieldInfo,
	&t1221_f3_FieldInfo,
	&t1221_f4_FieldInfo,
	&t1221_f5_FieldInfo,
	NULL
};
extern MethodInfo m6247_MI;
static PropertyInfo t1221____HasDeserializedCallbacks_PropertyInfo = 
{
	&t1221_TI, "HasDeserializedCallbacks", &m6247_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1221_PIs[] =
{
	&t1221____HasDeserializedCallbacks_PropertyInfo,
	NULL
};
extern Il2CppType t131_0_0_0;
static ParameterInfo t1221_m6245_ParameterInfos[] = 
{
	{"type", 0, 134221799, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1221_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6245_MI = 
{
	".ctor", (methodPointerType)&m6245, &t1221_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1221_m6245_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3313, NULL, (methodPointerType)NULL};
extern TypeInfo t1221_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6246_MI = 
{
	".cctor", (methodPointerType)&m6246, &t1221_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3314, NULL, (methodPointerType)NULL};
extern TypeInfo t1221_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6247_MI = 
{
	"get_HasDeserializedCallbacks", (methodPointerType)&m6247, &t1221_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3315, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
extern Il2CppType t131_0_0_0;
static ParameterInfo t1221_m6248_ParameterInfos[] = 
{
	{"type", 0, 134221800, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"attr", 1, 134221801, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1221_TI;
extern Il2CppType t931_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6248_MI = 
{
	"GetMethodsByAttribute", (methodPointerType)&m6248, &t1221_TI, &t931_0_0_0, RuntimeInvoker_t25_t25_t25, t1221_m6248_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 3316, NULL, (methodPointerType)NULL};
extern Il2CppType t931_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1221_m6249_ParameterInfos[] = 
{
	{"list", 0, 134221802, &EmptyCustomAttributesCache, &t931_0_0_0},
	{"target", 1, 134221803, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"context", 2, 134221804, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1221_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m6249_MI = 
{
	"Invoke", (methodPointerType)&m6249, &t1221_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t824, t1221_m6249_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 3317, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1221_m6250_ParameterInfos[] = 
{
	{"target", 0, 134221805, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"contex", 1, 134221806, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1221_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m6250_MI = 
{
	"RaiseOnDeserializing", (methodPointerType)&m6250, &t1221_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1221_m6250_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3318, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1221_m6251_ParameterInfos[] = 
{
	{"target", 0, 134221807, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"contex", 1, 134221808, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1221_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m6251_MI = 
{
	"RaiseOnDeserialized", (methodPointerType)&m6251, &t1221_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1221_m6251_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3319, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
static ParameterInfo t1221_m6252_ParameterInfos[] = 
{
	{"t", 0, 134221809, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t1221_TI;
extern Il2CppType t1221_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6252_MI = 
{
	"GetSerializationCallbacks", (methodPointerType)&m6252, &t1221_TI, &t1221_0_0_0, RuntimeInvoker_t25_t25, t1221_m6252_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3320, NULL, (methodPointerType)NULL};
static MethodInfo* t1221_MIs[] =
{
	&m6245_MI,
	&m6246_MI,
	&m6247_MI,
	&m6248_MI,
	&m6249_MI,
	&m6250_MI,
	&m6251_MI,
	&m6252_MI,
	NULL
};
extern TypeInfo t1220_TI;
static TypeInfo* t1221_TI__nestedTypes[2] =
{
	&t1220_TI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1221_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1221_0_0_0;
extern Il2CppType t1221_1_0_0;
extern TypeInfo t25_TI;
struct t1221;
extern TypeInfo t1221_TI;
TypeInfo t1221_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationCallbacks", "System.Runtime.Serialization", t1221_MIs, t1221_PIs, t1221_FIs, NULL, &t25_TI, t1221_TI__nestedTypes, NULL, &t1221_TI, NULL, t1221_VT, &EmptyCustomAttributesCache, &t1221_TI, &t1221_0_0_0, &t1221_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1221), 0, -1, sizeof(t1221_SFs), 0, -1, 1048832, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 8, 1, 6, 0, 1, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1222_TI;

extern TypeInfo t1222_TI;


extern MethodInfo m6253_MI;
 void m6253 (t1222 * __this, t27* p0, t131 * p1, t25 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6253_MI);
	{
		__this->f0 = p0;
		__this->f1 = p1;
		__this->f2 = p2;
		return;
	}
}
extern MethodInfo m6254_MI;
 t27* m6254 (t1222 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6254_MI);
	{
		t27* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m6255_MI;
 t25 * m6255 (t1222 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6255_MI);
	{
		t25 * L_0 = (__this->f2);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Serialization.SerializationEntry
extern Il2CppType t27_0_0_1;
FieldInfo t1222_f0_FieldInfo = 
{
	"name", &t27_0_0_1, &t1222_TI, offsetof(t1222, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t131_0_0_1;
FieldInfo t1222_f1_FieldInfo = 
{
	"objectType", &t131_0_0_1, &t1222_TI, offsetof(t1222, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_1;
FieldInfo t1222_f2_FieldInfo = 
{
	"value", &t25_0_0_1, &t1222_TI, offsetof(t1222, f2) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t1222_FIs[] =
{
	&t1222_f0_FieldInfo,
	&t1222_f1_FieldInfo,
	&t1222_f2_FieldInfo,
	NULL
};
extern MethodInfo m6254_MI;
static PropertyInfo t1222____Name_PropertyInfo = 
{
	&t1222_TI, "Name", &m6254_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6255_MI;
static PropertyInfo t1222____Value_PropertyInfo = 
{
	&t1222_TI, "Value", &m6255_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1222_PIs[] =
{
	&t1222____Name_PropertyInfo,
	&t1222____Value_PropertyInfo,
	NULL
};
extern Il2CppType t27_0_0_0;
extern Il2CppType t131_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t1222_m6253_ParameterInfos[] = 
{
	{"name", 0, 134221817, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"type", 1, 134221818, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"value", 2, 134221819, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t1222_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6253_MI = 
{
	".ctor", (methodPointerType)&m6253, &t1222_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t1222_m6253_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 3, false, false, 3325, NULL, (methodPointerType)NULL};
extern TypeInfo t1222_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6254_MI = 
{
	"get_Name", (methodPointerType)&m6254, &t1222_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3326, NULL, (methodPointerType)NULL};
extern TypeInfo t1222_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6255_MI = 
{
	"get_Value", (methodPointerType)&m6255, &t1222_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3327, NULL, (methodPointerType)NULL};
static MethodInfo* t1222_MIs[] =
{
	&m6253_MI,
	&m6254_MI,
	&m6255_MI,
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
static MethodInfo* t1222_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1222_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1222__CustomAttributeCache = {
1,
NULL,
&t1222_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1222_0_0_0;
extern Il2CppType t1222_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t1222_TI;
extern CustomAttributesCache t1222__CustomAttributeCache;
TypeInfo t1222_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationEntry", "System.Runtime.Serialization", t1222_MIs, t1222_PIs, t1222_FIs, NULL, &t117_TI, NULL, NULL, &t1222_TI, NULL, t1222_VT, &t1222__CustomAttributeCache, &t1222_TI, &t1222_0_0_0, &t1222_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1222)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 3, 2, 3, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1223_TI;

extern MethodInfo m7672_MI;
extern MethodInfo m7673_MI;


extern MethodInfo m6256_MI;
 void m6256 (t1223 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6256_MI);
	{
		m7672(__this, (t27*) &_stringLiteral1053, &m7672_MI);
		return;
	}
}
extern MethodInfo m6257_MI;
 void m6257 (t1223 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6257_MI);
	{
		m7672(__this, p0, &m7672_MI);
		return;
	}
}
extern MethodInfo m6258_MI;
 void m6258 (t1223 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6258_MI);
	{
		m7673(__this, p0, p1, &m7673_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Serialization.SerializationException
extern TypeInfo t1223_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6256_MI = 
{
	".ctor", (methodPointerType)&m6256, &t1223_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3328, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1223_m6257_ParameterInfos[] = 
{
	{"message", 0, 134221820, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1223_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6257_MI = 
{
	".ctor", (methodPointerType)&m6257, &t1223_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1223_m6257_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3329, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1223_m6258_ParameterInfos[] = 
{
	{"info", 0, 134221821, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221822, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1223_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m6258_MI = 
{
	".ctor", (methodPointerType)&m6258, &t1223_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1223_m6258_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 3330, NULL, (methodPointerType)NULL};
static MethodInfo* t1223_MIs[] =
{
	&m6256_MI,
	&m6257_MI,
	&m6258_MI,
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
static MethodInfo* t1223_VT[] =
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
static Il2CppInterfaceOffsetPair t1223_IOs[] = 
{
	{ &t485_TI, 4},
	{ &t690_TI, 5},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1223_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1223__CustomAttributeCache = {
1,
NULL,
&t1223_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1223_0_0_0;
extern Il2CppType t1223_1_0_0;
extern TypeInfo t935_TI;
struct t1223;
extern TypeInfo t1223_TI;
extern CustomAttributesCache t1223__CustomAttributeCache;
TypeInfo t1223_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationException", "System.Runtime.Serialization", t1223_MIs, NULL, NULL, NULL, &t935_TI, NULL, NULL, &t1223_TI, NULL, t1223_VT, &t1223__CustomAttributeCache, &t1223_TI, &t1223_0_0_0, &t1223_1_0_0, t1223_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1223), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t823_TI;

extern TypeInfo t972_TI;
extern TypeInfo t823_TI;
extern TypeInfo t931_TI;
extern TypeInfo t165_TI;
extern TypeInfo t131_TI;
extern TypeInfo t836_TI;
extern TypeInfo t27_TI;
extern TypeInfo t125_TI;
extern TypeInfo t25_TI;
extern TypeInfo t1223_TI;
extern TypeInfo t1222_TI;
extern TypeInfo t123_TI;
extern TypeInfo t134_TI;
extern TypeInfo t1224_TI;
extern TypeInfo t1225_TI;
extern TypeInfo t483_TI;
extern TypeInfo t566_TI;
extern TypeInfo t124_TI;
extern TypeInfo t817_TI;
extern TypeInfo t818_TI;
extern Il2CppType t483_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t566_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t817_0_0_0;
extern Il2CppType t818_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t27_0_0_0;
extern MethodInfo m4900_MI;
extern MethodInfo m4830_MI;
extern MethodInfo m452_MI;
extern MethodInfo m6996_MI;
extern MethodInfo m7958_MI;
extern MethodInfo m5603_MI;
extern MethodInfo m3520_MI;
extern MethodInfo m489_MI;
extern MethodInfo m4921_MI;
extern MethodInfo m6257_MI;
extern MethodInfo m6253_MI;
extern MethodInfo m4917_MI;
extern MethodInfo m4842_MI;
extern MethodInfo m532_MI;
extern MethodInfo m4914_MI;
extern MethodInfo m6255_MI;
extern MethodInfo m4353_MI;
extern MethodInfo m8318_MI;
extern MethodInfo m6277_MI;
extern MethodInfo m484_MI;
extern MethodInfo m6260_MI;
extern MethodInfo m1959_MI;
extern MethodInfo m6261_MI;
extern MethodInfo m8319_MI;
extern MethodInfo m8320_MI;
extern MethodInfo m8321_MI;
extern MethodInfo m8322_MI;
extern MethodInfo m8323_MI;


extern MethodInfo m6259_MI;
 void m6259 (t823 * __this, t131 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6259_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t972_TI));
		t972 * L_0 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4900(L_0, &m4900_MI);
		__this->f0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t931_TI));
		t931 * L_1 = (t931 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t931_TI));
		m4830(L_1, &m4830_MI);
		__this->f1 = L_1;
		m452(__this, &m452_MI);
		if (p0)
		{
			goto IL_002f;
		}
	}
	{
		t165 * L_2 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m6996(L_2, (t27*) &_stringLiteral251, (t27*) &_stringLiteral1054, &m6996_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_002f:
	{
		if (p1)
		{
			goto IL_0042;
		}
	}
	{
		t165 * L_3 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m6996(L_3, (t27*) &_stringLiteral393, (t27*) &_stringLiteral1054, &m6996_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0042:
	{
		__this->f4 = p1;
		NullCheck(p0);
		t836 * L_4 = (t836 *)VirtFuncInvoker0< t836 * >::Invoke(&m7958_MI, p0);
		NullCheck(L_4);
		t27* L_5 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5603_MI, L_4);
		__this->f2 = L_5;
		NullCheck(p0);
		t27* L_6 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, p0);
		__this->f3 = L_6;
		return;
	}
}
extern MethodInfo m6260_MI;
 void m6260 (t823 * __this, t27* p0, t25 * p1, t131 * p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6260_MI);
	t1222  V_0 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral1055, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if (p2)
		{
			goto IL_001c;
		}
	}
	{
		t165 * L_1 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_1, (t27*) &_stringLiteral1056, &m489_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001c:
	{
		t972 * L_2 = (__this->f0);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, t25 * >::Invoke(&m4921_MI, L_2, p0);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		t1223 * L_4 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_4, (t27*) &_stringLiteral1057, &m6257_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_0035:
	{
		m6253((&V_0), p0, p2, p1, &m6253_MI);
		t972 * L_5 = (__this->f0);
		t1222  L_6 = V_0;
		t25 * L_7 = Box(InitializedTypeInfo(&t1222_TI), &L_6);
		NullCheck(L_5);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, L_5, p0, L_7);
		t931 * L_8 = (__this->f1);
		t1222  L_9 = V_0;
		t25 * L_10 = Box(InitializedTypeInfo(&t1222_TI), &L_9);
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, t25 * >::Invoke(&m4842_MI, L_8, L_10);
		return;
	}
}
extern MethodInfo m6261_MI;
 t25 * m6261 (t823 * __this, t27* p0, t131 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6261_MI);
	t1222  V_0 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral1058, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if (p1)
		{
			goto IL_001c;
		}
	}
	{
		t165 * L_1 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_1, (t27*) &_stringLiteral251, &m489_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001c:
	{
		t972 * L_2 = (__this->f0);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, t25 * >::Invoke(&m4921_MI, L_2, p0);
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_4 = m532(NULL, (t27*) &_stringLiteral1059, p0, (t27*) &_stringLiteral1060, &m532_MI);
		t1223 * L_5 = (t1223 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1223_TI));
		m6257(L_5, L_4, &m6257_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_0040:
	{
		t972 * L_6 = (__this->f0);
		NullCheck(L_6);
		t25 * L_7 = (t25 *)VirtFuncInvoker1< t25 *, t25 * >::Invoke(&m4914_MI, L_6, p0);
		V_0 = ((*(t1222 *)((t1222 *)UnBox (L_7, InitializedTypeInfo(&t1222_TI)))));
		t25 * L_8 = m6255((&V_0), &m6255_MI);
		if (!L_8)
		{
			goto IL_007e;
		}
	}
	{
		t25 * L_9 = m6255((&V_0), &m6255_MI);
		NullCheck(p1);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t25 * >::Invoke(&m4353_MI, p1, L_9);
		if (L_10)
		{
			goto IL_007e;
		}
	}
	{
		t25 * L_11 = (__this->f4);
		t25 * L_12 = m6255((&V_0), &m6255_MI);
		NullCheck(L_11);
		t25 * L_13 = (t25 *)InterfaceFuncInvoker2< t25 *, t25 *, t131 * >::Invoke(&m8318_MI, L_11, L_12, p1);
		return L_13;
	}

IL_007e:
	{
		t25 * L_14 = m6255((&V_0), &m6255_MI);
		return L_14;
	}
}
extern MethodInfo m6262_MI;
 void m6262 (t823 * __this, t131 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6262_MI);
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral1061, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		NullCheck(p0);
		t27* L_1 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m3520_MI, p0);
		__this->f3 = L_1;
		NullCheck(p0);
		t836 * L_2 = (t836 *)VirtFuncInvoker0< t836 * >::Invoke(&m7958_MI, p0);
		NullCheck(L_2);
		t27* L_3 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m5603_MI, L_2);
		__this->f2 = L_3;
		return;
	}
}
extern MethodInfo m6263_MI;
 t1225 * m6263 (t823 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6263_MI);
	{
		t931 * L_0 = (__this->f1);
		t1225 * L_1 = (t1225 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1225_TI));
		m6277(L_1, L_0, &m6277_MI);
		return L_1;
	}
}
extern MethodInfo m6264_MI;
 void m6264 (t823 * __this, t27* p0, int16_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6264_MI);
	{
		int16_t L_0 = p1;
		t25 * L_1 = Box(InitializedTypeInfo(&t483_TI), &L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_2 = m484(NULL, LoadTypeToken(&t483_0_0_0), &m484_MI);
		m6260(__this, p0, L_1, L_2, &m6260_MI);
		return;
	}
}
extern MethodInfo m6265_MI;
 void m6265 (t823 * __this, t27* p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6265_MI);
	{
		int32_t L_0 = p1;
		t25 * L_1 = Box(InitializedTypeInfo(&t134_TI), &L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_2 = m484(NULL, LoadTypeToken(&t134_0_0_0), &m484_MI);
		m6260(__this, p0, L_1, L_2, &m6260_MI);
		return;
	}
}
extern MethodInfo m6266_MI;
 void m6266 (t823 * __this, t27* p0, bool p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6266_MI);
	{
		bool L_0 = p1;
		t25 * L_1 = Box(InitializedTypeInfo(&t125_TI), &L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_2 = m484(NULL, LoadTypeToken(&t125_0_0_0), &m484_MI);
		m6260(__this, p0, L_1, L_2, &m6260_MI);
		return;
	}
}
extern MethodInfo m6267_MI;
 void m6267 (t823 * __this, t27* p0, t566  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6267_MI);
	{
		t566  L_0 = p1;
		t25 * L_1 = Box(InitializedTypeInfo(&t566_TI), &L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_2 = m484(NULL, LoadTypeToken(&t566_0_0_0), &m484_MI);
		m6260(__this, p0, L_1, L_2, &m6260_MI);
		return;
	}
}
extern MethodInfo m6268_MI;
 void m6268 (t823 * __this, t27* p0, float p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6268_MI);
	{
		float L_0 = p1;
		t25 * L_1 = Box(InitializedTypeInfo(&t124_TI), &L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_2 = m484(NULL, LoadTypeToken(&t124_0_0_0), &m484_MI);
		m6260(__this, p0, L_1, L_2, &m6260_MI);
		return;
	}
}
extern MethodInfo m6269_MI;
 void m6269 (t823 * __this, t27* p0, int64_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6269_MI);
	{
		int64_t L_0 = p1;
		t25 * L_1 = Box(InitializedTypeInfo(&t817_TI), &L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_2 = m484(NULL, LoadTypeToken(&t817_0_0_0), &m484_MI);
		m6260(__this, p0, L_1, L_2, &m6260_MI);
		return;
	}
}
extern MethodInfo m6270_MI;
 void m6270 (t823 * __this, t27* p0, uint64_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6270_MI);
	{
		uint64_t L_0 = p1;
		t25 * L_1 = Box(InitializedTypeInfo(&t818_TI), &L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_2 = m484(NULL, LoadTypeToken(&t818_0_0_0), &m484_MI);
		m6260(__this, p0, L_1, L_2, &m6260_MI);
		return;
	}
}
extern MethodInfo m6271_MI;
 void m6271 (t823 * __this, t27* p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6271_MI);
	{
		if (p1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t25_0_0_0), &m484_MI);
		m6260(__this, p0, p1, L_0, &m6260_MI);
		goto IL_0025;
	}

IL_0017:
	{
		NullCheck(p1);
		t131 * L_1 = m1959(p1, &m1959_MI);
		m6260(__this, p0, p1, L_1, &m6260_MI);
	}

IL_0025:
	{
		return;
	}
}
extern MethodInfo m6272_MI;
 bool m6272 (t823 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6272_MI);
	t25 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t125_0_0_0), &m484_MI);
		t25 * L_1 = m6261(__this, p0, L_0, &m6261_MI);
		V_0 = L_1;
		t25 * L_2 = (__this->f4);
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker1< bool, t25 * >::Invoke(&m8319_MI, L_2, V_0);
		return L_3;
	}
}
extern MethodInfo m6273_MI;
 int16_t m6273 (t823 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6273_MI);
	t25 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t483_0_0_0), &m484_MI);
		t25 * L_1 = m6261(__this, p0, L_0, &m6261_MI);
		V_0 = L_1;
		t25 * L_2 = (__this->f4);
		NullCheck(L_2);
		int16_t L_3 = (int16_t)InterfaceFuncInvoker1< int16_t, t25 * >::Invoke(&m8320_MI, L_2, V_0);
		return L_3;
	}
}
extern MethodInfo m6274_MI;
 int32_t m6274 (t823 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6274_MI);
	t25 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t134_0_0_0), &m484_MI);
		t25 * L_1 = m6261(__this, p0, L_0, &m6261_MI);
		V_0 = L_1;
		t25 * L_2 = (__this->f4);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t25 * >::Invoke(&m8321_MI, L_2, V_0);
		return L_3;
	}
}
extern MethodInfo m6275_MI;
 int64_t m6275 (t823 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6275_MI);
	t25 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t817_0_0_0), &m484_MI);
		t25 * L_1 = m6261(__this, p0, L_0, &m6261_MI);
		V_0 = L_1;
		t25 * L_2 = (__this->f4);
		NullCheck(L_2);
		int64_t L_3 = (int64_t)InterfaceFuncInvoker1< int64_t, t25 * >::Invoke(&m8322_MI, L_2, V_0);
		return L_3;
	}
}
extern MethodInfo m6276_MI;
 t27* m6276 (t823 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6276_MI);
	t25 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
		t131 * L_0 = m484(NULL, LoadTypeToken(&t27_0_0_0), &m484_MI);
		t25 * L_1 = m6261(__this, p0, L_0, &m6261_MI);
		V_0 = L_1;
		if (V_0)
		{
			goto IL_0017;
		}
	}
	{
		return (t27*)NULL;
	}

IL_0017:
	{
		t25 * L_2 = (__this->f4);
		NullCheck(L_2);
		t27* L_3 = (t27*)InterfaceFuncInvoker1< t27*, t25 * >::Invoke(&m8323_MI, L_2, V_0);
		return L_3;
	}
}
// Metadata Definition System.Runtime.Serialization.SerializationInfo
extern Il2CppType t972_0_0_1;
FieldInfo t823_f0_FieldInfo = 
{
	"serialized", &t972_0_0_1, &t823_TI, offsetof(t823, f0), &EmptyCustomAttributesCache};
extern Il2CppType t931_0_0_1;
FieldInfo t823_f1_FieldInfo = 
{
	"values", &t931_0_0_1, &t823_TI, offsetof(t823, f1), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
FieldInfo t823_f2_FieldInfo = 
{
	"assemblyName", &t27_0_0_1, &t823_TI, offsetof(t823, f2), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
FieldInfo t823_f3_FieldInfo = 
{
	"fullTypeName", &t27_0_0_1, &t823_TI, offsetof(t823, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1224_0_0_1;
FieldInfo t823_f4_FieldInfo = 
{
	"converter", &t1224_0_0_1, &t823_TI, offsetof(t823, f4), &EmptyCustomAttributesCache};
static FieldInfo* t823_FIs[] =
{
	&t823_f0_FieldInfo,
	&t823_f1_FieldInfo,
	&t823_f2_FieldInfo,
	&t823_f3_FieldInfo,
	&t823_f4_FieldInfo,
	NULL
};
extern Il2CppType t131_0_0_0;
extern Il2CppType t1224_0_0_0;
static ParameterInfo t823_m6259_ParameterInfos[] = 
{
	{"type", 0, 134221823, &EmptyCustomAttributesCache, &t131_0_0_0},
	{"converter", 1, 134221824, &EmptyCustomAttributesCache, &t1224_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t823__CustomAttributeCache_m6259;
MethodInfo m6259_MI = 
{
	".ctor", (methodPointerType)&m6259, &t823_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t823_m6259_ParameterInfos, &t823__CustomAttributeCache_m6259, 6278, 0, 255, 2, false, false, 3331, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t131_0_0_0;
static ParameterInfo t823_m6260_ParameterInfos[] = 
{
	{"name", 0, 134221825, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134221826, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"type", 2, 134221827, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6260_MI = 
{
	"AddValue", (methodPointerType)&m6260, &t823_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25, t823_m6260_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 3332, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t131_0_0_0;
static ParameterInfo t823_m6261_ParameterInfos[] = 
{
	{"name", 0, 134221828, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"type", 1, 134221829, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6261_MI = 
{
	"GetValue", (methodPointerType)&m6261, &t823_TI, &t25_0_0_0, RuntimeInvoker_t25_t25_t25, t823_m6261_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3333, NULL, (methodPointerType)NULL};
extern Il2CppType t131_0_0_0;
static ParameterInfo t823_m6262_ParameterInfos[] = 
{
	{"type", 0, 134221830, &EmptyCustomAttributesCache, &t131_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6262_MI = 
{
	"SetType", (methodPointerType)&m6262, &t823_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t823_m6262_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 3334, NULL, (methodPointerType)NULL};
extern TypeInfo t823_TI;
extern Il2CppType t1225_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6263_MI = 
{
	"GetEnumerator", (methodPointerType)&m6263, &t823_TI, &t1225_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3335, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t823_m6264_ParameterInfos[] = 
{
	{"name", 0, 134221831, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134221832, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t483 (MethodInfo* method, void* obj, void** args);
MethodInfo m6264_MI = 
{
	"AddValue", (methodPointerType)&m6264, &t823_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t483, t823_m6264_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3336, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t823_m6265_ParameterInfos[] = 
{
	{"name", 0, 134221833, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134221834, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6265_MI = 
{
	"AddValue", (methodPointerType)&m6265, &t823_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134, t823_m6265_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3337, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t823_m6266_ParameterInfos[] = 
{
	{"name", 0, 134221835, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134221836, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m6266_MI = 
{
	"AddValue", (methodPointerType)&m6266, &t823_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t137, t823_m6266_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3338, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t566_0_0_0;
static ParameterInfo t823_m6267_ParameterInfos[] = 
{
	{"name", 0, 134221837, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134221838, &EmptyCustomAttributesCache, &t566_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t566 (MethodInfo* method, void* obj, void** args);
MethodInfo m6267_MI = 
{
	"AddValue", (methodPointerType)&m6267, &t823_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t566, t823_m6267_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3339, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t823_m6268_ParameterInfos[] = 
{
	{"name", 0, 134221839, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134221840, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m6268_MI = 
{
	"AddValue", (methodPointerType)&m6268, &t823_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t124, t823_m6268_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3340, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t817_0_0_0;
static ParameterInfo t823_m6269_ParameterInfos[] = 
{
	{"name", 0, 134221841, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134221842, &EmptyCustomAttributesCache, &t817_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t817 (MethodInfo* method, void* obj, void** args);
MethodInfo m6269_MI = 
{
	"AddValue", (methodPointerType)&m6269, &t823_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t817, t823_m6269_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3341, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t818_0_0_0;
static ParameterInfo t823_m6270_ParameterInfos[] = 
{
	{"name", 0, 134221843, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134221844, &EmptyCustomAttributesCache, &t818_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t817 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t823__CustomAttributeCache_m6270;
MethodInfo m6270_MI = 
{
	"AddValue", (methodPointerType)&m6270, &t823_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t817, t823_m6270_ParameterInfos, &t823__CustomAttributeCache_m6270, 134, 0, 255, 2, false, false, 3342, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t823_m6271_ParameterInfos[] = 
{
	{"name", 0, 134221845, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"value", 1, 134221846, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6271_MI = 
{
	"AddValue", (methodPointerType)&m6271, &t823_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t823_m6271_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3343, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t823_m6272_ParameterInfos[] = 
{
	{"name", 0, 134221847, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6272_MI = 
{
	"GetBoolean", (methodPointerType)&m6272, &t823_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t823_m6272_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 3344, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t823_m6273_ParameterInfos[] = 
{
	{"name", 0, 134221848, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t483_0_0_0;
extern void* RuntimeInvoker_t483_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6273_MI = 
{
	"GetInt16", (methodPointerType)&m6273, &t823_TI, &t483_0_0_0, RuntimeInvoker_t483_t25, t823_m6273_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 3345, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t823_m6274_ParameterInfos[] = 
{
	{"name", 0, 134221849, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6274_MI = 
{
	"GetInt32", (methodPointerType)&m6274, &t823_TI, &t134_0_0_0, RuntimeInvoker_t134_t25, t823_m6274_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 3346, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t823_m6275_ParameterInfos[] = 
{
	{"name", 0, 134221850, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t817_0_0_0;
extern void* RuntimeInvoker_t817_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6275_MI = 
{
	"GetInt64", (methodPointerType)&m6275, &t823_TI, &t817_0_0_0, RuntimeInvoker_t817_t25, t823_m6275_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 3347, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t823_m6276_ParameterInfos[] = 
{
	{"name", 0, 134221851, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t823_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6276_MI = 
{
	"GetString", (methodPointerType)&m6276, &t823_TI, &t27_0_0_0, RuntimeInvoker_t25_t25, t823_m6276_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 3348, NULL, (methodPointerType)NULL};
static MethodInfo* t823_MIs[] =
{
	&m6259_MI,
	&m6260_MI,
	&m6261_MI,
	&m6262_MI,
	&m6263_MI,
	&m6264_MI,
	&m6265_MI,
	&m6266_MI,
	&m6267_MI,
	&m6268_MI,
	&m6269_MI,
	&m6270_MI,
	&m6271_MI,
	&m6272_MI,
	&m6273_MI,
	&m6274_MI,
	&m6275_MI,
	&m6276_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t823_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t823_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
void t823_CustomAttributesCacheGenerator_m6259(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t789_TI;
extern MethodInfo m3582_MI;
void t823_CustomAttributesCacheGenerator_m6270(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, false, &m3582_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t823__CustomAttributeCache = {
1,
NULL,
&t823_CustomAttributesCacheGenerator
};
CustomAttributesCache t823__CustomAttributeCache_m6259 = {
1,
NULL,
&t823_CustomAttributesCacheGenerator_m6259
};
CustomAttributesCache t823__CustomAttributeCache_m6270 = {
1,
NULL,
&t823_CustomAttributesCacheGenerator_m6270
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t823_0_0_0;
extern Il2CppType t823_1_0_0;
extern TypeInfo t25_TI;
struct t823;
extern TypeInfo t823_TI;
extern CustomAttributesCache t823__CustomAttributeCache;
extern CustomAttributesCache t823__CustomAttributeCache_m6259;
extern CustomAttributesCache t823__CustomAttributeCache_m6270;
TypeInfo t823_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationInfo", "System.Runtime.Serialization", t823_MIs, NULL, t823_FIs, NULL, &t25_TI, NULL, NULL, &t823_TI, NULL, t823_VT, &t823__CustomAttributeCache, &t823_TI, &t823_0_0_0, &t823_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t823), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 18, 0, 5, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1225_TI;

extern TypeInfo t1225_TI;
extern TypeInfo t78_TI;
extern TypeInfo t25_TI;
extern TypeInfo t1222_TI;
extern TypeInfo t931_TI;
extern TypeInfo t125_TI;
extern MethodInfo m504_MI;
extern MethodInfo m6279_MI;
extern MethodInfo m6254_MI;
extern MethodInfo m6255_MI;
extern MethodInfo m452_MI;
extern MethodInfo m4855_MI;
extern MethodInfo m506_MI;


extern MethodInfo m6277_MI;
 void m6277 (t1225 * __this, t931 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6277_MI);
	{
		m452(__this, &m452_MI);
		NullCheck(p0);
		t25 * L_0 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4855_MI, p0);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m6278_MI;
 t25 * m6278 (t1225 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6278_MI);
	{
		t25 * L_0 = (__this->f0);
		NullCheck(L_0);
		t25 * L_1 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m504_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m6279_MI;
 t1222  m6279 (t1225 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6279_MI);
	{
		t25 * L_0 = (__this->f0);
		NullCheck(L_0);
		t25 * L_1 = (t25 *)InterfaceFuncInvoker0< t25 * >::Invoke(&m504_MI, L_0);
		return ((*(t1222 *)((t1222 *)UnBox (L_1, InitializedTypeInfo(&t1222_TI)))));
	}
}
extern MethodInfo m6280_MI;
 t27* m6280 (t1225 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6280_MI);
	t1222  V_0 = {0};
	{
		t1222  L_0 = m6279(__this, &m6279_MI);
		V_0 = L_0;
		t27* L_1 = m6254((&V_0), &m6254_MI);
		return L_1;
	}
}
extern MethodInfo m6281_MI;
 t25 * m6281 (t1225 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6281_MI);
	t1222  V_0 = {0};
	{
		t1222  L_0 = m6279(__this, &m6279_MI);
		V_0 = L_0;
		t25 * L_1 = m6255((&V_0), &m6255_MI);
		return L_1;
	}
}
extern MethodInfo m6282_MI;
 bool m6282 (t1225 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6282_MI);
	{
		t25 * L_0 = (__this->f0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m506_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Runtime.Serialization.SerializationInfoEnumerator
extern Il2CppType t78_0_0_1;
FieldInfo t1225_f0_FieldInfo = 
{
	"enumerator", &t78_0_0_1, &t1225_TI, offsetof(t1225, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1225_FIs[] =
{
	&t1225_f0_FieldInfo,
	NULL
};
extern MethodInfo m6278_MI;
static PropertyInfo t1225____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1225_TI, "System.Collections.IEnumerator.Current", &m6278_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6279_MI;
static PropertyInfo t1225____Current_PropertyInfo = 
{
	&t1225_TI, "Current", &m6279_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6280_MI;
static PropertyInfo t1225____Name_PropertyInfo = 
{
	&t1225_TI, "Name", &m6280_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6281_MI;
static PropertyInfo t1225____Value_PropertyInfo = 
{
	&t1225_TI, "Value", &m6281_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1225_PIs[] =
{
	&t1225____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1225____Current_PropertyInfo,
	&t1225____Name_PropertyInfo,
	&t1225____Value_PropertyInfo,
	NULL
};
extern Il2CppType t931_0_0_0;
static ParameterInfo t1225_m6277_ParameterInfos[] = 
{
	{"list", 0, 134221852, &EmptyCustomAttributesCache, &t931_0_0_0},
};
extern TypeInfo t1225_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6277_MI = 
{
	".ctor", (methodPointerType)&m6277, &t1225_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1225_m6277_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 3349, NULL, (methodPointerType)NULL};
extern TypeInfo t1225_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6278_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m6278, &t1225_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, false, 3350, NULL, (methodPointerType)NULL};
extern TypeInfo t1225_TI;
extern Il2CppType t1222_0_0_0;
extern void* RuntimeInvoker_t1222 (MethodInfo* method, void* obj, void** args);
MethodInfo m6279_MI = 
{
	"get_Current", (methodPointerType)&m6279, &t1225_TI, &t1222_0_0_0, RuntimeInvoker_t1222, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3351, NULL, (methodPointerType)NULL};
extern TypeInfo t1225_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6280_MI = 
{
	"get_Name", (methodPointerType)&m6280, &t1225_TI, &t27_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3352, NULL, (methodPointerType)NULL};
extern TypeInfo t1225_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6281_MI = 
{
	"get_Value", (methodPointerType)&m6281, &t1225_TI, &t25_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3353, NULL, (methodPointerType)NULL};
extern TypeInfo t1225_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125 (MethodInfo* method, void* obj, void** args);
MethodInfo m6282_MI = 
{
	"MoveNext", (methodPointerType)&m6282, &t1225_TI, &t125_0_0_0, RuntimeInvoker_t125, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 3354, NULL, (methodPointerType)NULL};
static MethodInfo* t1225_MIs[] =
{
	&m6277_MI,
	&m6278_MI,
	&m6279_MI,
	&m6280_MI,
	&m6281_MI,
	&m6282_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6278_MI;
extern MethodInfo m6282_MI;
static MethodInfo* t1225_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6278_MI,
	&m6282_MI,
};
extern TypeInfo t78_TI;
static TypeInfo* t1225_ITIs[] = 
{
	&t78_TI,
};
extern TypeInfo t78_TI;
static Il2CppInterfaceOffsetPair t1225_IOs[] = 
{
	{ &t78_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1225_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1225__CustomAttributeCache = {
1,
NULL,
&t1225_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1225_0_0_0;
extern Il2CppType t1225_1_0_0;
extern TypeInfo t25_TI;
struct t1225;
extern TypeInfo t1225_TI;
extern CustomAttributesCache t1225__CustomAttributeCache;
TypeInfo t1225_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SerializationInfoEnumerator", "System.Runtime.Serialization", t1225_MIs, t1225_PIs, t1225_FIs, NULL, &t25_TI, NULL, NULL, &t1225_TI, t1225_ITIs, t1225_VT, &t1225__CustomAttributeCache, &t1225_TI, &t1225_0_0_0, &t1225_1_0_0, t1225_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1225), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 4, 1, 0, 0, 6, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t824_TI;

extern TypeInfo t824_TI;


extern MethodInfo m6283_MI;
 void m6283 (t824 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6283_MI);
	{
		__this->f0 = p0;
		__this->f1 = NULL;
		return;
	}
}
extern MethodInfo m6284_MI;
 void m6284 (t824 * __this, int32_t p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6284_MI);
	{
		__this->f0 = p0;
		__this->f1 = p1;
		return;
	}
}
extern MethodInfo m6285_MI;
 int32_t m6285 (t824 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6285_MI);
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m6286_MI;
 bool m6286 (t824 * __this, t25 * p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6286_MI);
	t824  V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		if (((t25 *)IsInst(p0, InitializedTypeInfo(&t824_TI))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = ((*(t824 *)((t824 *)UnBox (p0, InitializedTypeInfo(&t824_TI)))));
		NullCheck((&V_0));
		int32_t L_0 = ((&V_0)->f0);
		int32_t L_1 = (__this->f0);
		if ((((uint32_t)L_0) != ((uint32_t)L_1)))
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((&V_0));
		t25 * L_2 = ((&V_0)->f1);
		t25 * L_3 = (__this->f1);
		G_B5_0 = ((((t25 *)L_2) == ((t25 *)L_3))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B5_0 = 0;
	}

IL_0032:
	{
		return G_B5_0;
	}
}
extern MethodInfo m6287_MI;
 int32_t m6287 (t824 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6287_MI);
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Serialization.StreamingContext
extern Il2CppType t1226_0_0_1;
FieldInfo t824_f0_FieldInfo = 
{
	"state", &t1226_0_0_1, &t824_TI, offsetof(t824, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_1;
FieldInfo t824_f1_FieldInfo = 
{
	"additional", &t25_0_0_1, &t824_TI, offsetof(t824, f1) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t824_FIs[] =
{
	&t824_f0_FieldInfo,
	&t824_f1_FieldInfo,
	NULL
};
extern MethodInfo m6285_MI;
static PropertyInfo t824____State_PropertyInfo = 
{
	&t824_TI, "State", &m6285_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t824_PIs[] =
{
	&t824____State_PropertyInfo,
	NULL
};
extern Il2CppType t1226_0_0_0;
static ParameterInfo t824_m6283_ParameterInfos[] = 
{
	{"state", 0, 134221853, &EmptyCustomAttributesCache, &t1226_0_0_0},
};
extern TypeInfo t824_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6283_MI = 
{
	".ctor", (methodPointerType)&m6283, &t824_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t824_m6283_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3355, NULL, (methodPointerType)NULL};
extern Il2CppType t1226_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t824_m6284_ParameterInfos[] = 
{
	{"state", 0, 134221854, &EmptyCustomAttributesCache, &t1226_0_0_0},
	{"additional", 1, 134221855, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t824_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6284_MI = 
{
	".ctor", (methodPointerType)&m6284, &t824_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t824_m6284_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3356, NULL, (methodPointerType)NULL};
extern TypeInfo t824_TI;
extern Il2CppType t1226_0_0_0;
extern void* RuntimeInvoker_t1226 (MethodInfo* method, void* obj, void** args);
MethodInfo m6285_MI = 
{
	"get_State", (methodPointerType)&m6285, &t824_TI, &t1226_0_0_0, RuntimeInvoker_t1226, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3357, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t824_m6286_ParameterInfos[] = 
{
	{"obj", 0, 134221856, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t824_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6286_MI = 
{
	"Equals", (methodPointerType)&m6286, &t824_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t824_m6286_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 3358, NULL, (methodPointerType)NULL};
extern TypeInfo t824_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6287_MI = 
{
	"GetHashCode", (methodPointerType)&m6287, &t824_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 3359, NULL, (methodPointerType)NULL};
static MethodInfo* t824_MIs[] =
{
	&m6283_MI,
	&m6284_MI,
	&m6285_MI,
	&m6286_MI,
	&m6287_MI,
	NULL
};
extern MethodInfo m6286_MI;
extern MethodInfo m352_MI;
extern MethodInfo m6287_MI;
extern MethodInfo m627_MI;
static MethodInfo* t824_VT[] =
{
	&m6286_MI,
	&m352_MI,
	&m6287_MI,
	&m627_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t824_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t824__CustomAttributeCache = {
1,
NULL,
&t824_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t824_0_0_0;
extern Il2CppType t824_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t824_TI;
extern CustomAttributesCache t824__CustomAttributeCache;
TypeInfo t824_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamingContext", "System.Runtime.Serialization", t824_MIs, t824_PIs, t824_FIs, NULL, &t117_TI, NULL, NULL, &t824_TI, NULL, t824_VT, &t824__CustomAttributeCache, &t824_TI, &t824_0_0_0, &t824_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t824)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 5, 1, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1226_TI;
#include "t1226MD.h"



// Metadata Definition System.Runtime.Serialization.StreamingContextStates
extern Il2CppType t134_0_0_1542;
FieldInfo t1226_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1226_TI, offsetof(t1226, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1226_0_0_32854;
FieldInfo t1226_f2_FieldInfo = 
{
	"CrossProcess", &t1226_0_0_32854, &t1226_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1226_0_0_32854;
FieldInfo t1226_f3_FieldInfo = 
{
	"CrossMachine", &t1226_0_0_32854, &t1226_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1226_0_0_32854;
FieldInfo t1226_f4_FieldInfo = 
{
	"File", &t1226_0_0_32854, &t1226_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1226_0_0_32854;
FieldInfo t1226_f5_FieldInfo = 
{
	"Persistence", &t1226_0_0_32854, &t1226_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1226_0_0_32854;
FieldInfo t1226_f6_FieldInfo = 
{
	"Remoting", &t1226_0_0_32854, &t1226_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1226_0_0_32854;
FieldInfo t1226_f7_FieldInfo = 
{
	"Other", &t1226_0_0_32854, &t1226_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1226_0_0_32854;
FieldInfo t1226_f8_FieldInfo = 
{
	"Clone", &t1226_0_0_32854, &t1226_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1226_0_0_32854;
FieldInfo t1226_f9_FieldInfo = 
{
	"CrossAppDomain", &t1226_0_0_32854, &t1226_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1226_0_0_32854;
FieldInfo t1226_f10_FieldInfo = 
{
	"All", &t1226_0_0_32854, &t1226_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1226_FIs[] =
{
	&t1226_f1_FieldInfo,
	&t1226_f2_FieldInfo,
	&t1226_f3_FieldInfo,
	&t1226_f4_FieldInfo,
	&t1226_f5_FieldInfo,
	&t1226_f6_FieldInfo,
	&t1226_f7_FieldInfo,
	&t1226_f8_FieldInfo,
	&t1226_f9_FieldInfo,
	&t1226_f10_FieldInfo,
	NULL
};
static const int32_t t1226_f2_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1226_f2_DefaultValue = 
{
	&t1226_f2_FieldInfo, { (char*)&t1226_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1226_f3_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1226_f3_DefaultValue = 
{
	&t1226_f3_FieldInfo, { (char*)&t1226_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1226_f4_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1226_f4_DefaultValue = 
{
	&t1226_f4_FieldInfo, { (char*)&t1226_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1226_f5_DefaultValueData = 8;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1226_f5_DefaultValue = 
{
	&t1226_f5_FieldInfo, { (char*)&t1226_f5_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1226_f6_DefaultValueData = 16;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1226_f6_DefaultValue = 
{
	&t1226_f6_FieldInfo, { (char*)&t1226_f6_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1226_f7_DefaultValueData = 32;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1226_f7_DefaultValue = 
{
	&t1226_f7_FieldInfo, { (char*)&t1226_f7_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1226_f8_DefaultValueData = 64;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1226_f8_DefaultValue = 
{
	&t1226_f8_FieldInfo, { (char*)&t1226_f8_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1226_f9_DefaultValueData = 128;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1226_f9_DefaultValue = 
{
	&t1226_f9_FieldInfo, { (char*)&t1226_f9_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1226_f10_DefaultValueData = 255;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1226_f10_DefaultValue = 
{
	&t1226_f10_FieldInfo, { (char*)&t1226_f10_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1226_FDVs[] = 
{
	&t1226_f2_DefaultValue,
	&t1226_f3_DefaultValue,
	&t1226_f4_DefaultValue,
	&t1226_f5_DefaultValue,
	&t1226_f6_DefaultValue,
	&t1226_f7_DefaultValue,
	&t1226_f8_DefaultValue,
	&t1226_f9_DefaultValue,
	&t1226_f10_DefaultValue,
	NULL
};
static MethodInfo* t1226_MIs[] =
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
static MethodInfo* t1226_VT[] =
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
static Il2CppInterfaceOffsetPair t1226_IOs[] = 
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
extern MethodInfo m2528_MI;
void t1226_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
CustomAttributesCache t1226__CustomAttributeCache = {
2,
NULL,
&t1226_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1226_0_0_0;
extern Il2CppType t1226_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t1226__CustomAttributeCache;
TypeInfo t1226_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StreamingContextStates", "System.Runtime.Serialization", t1226_MIs, NULL, t1226_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1226_VT, &t1226__CustomAttributeCache, &t134_TI, &t1226_0_0_0, &t1226_1_0_0, t1226_IOs, NULL, NULL, t1226_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1226)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 10, 0, 0, 23, 0, 3};
#include "t1227.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1227_TI;
#include "t1227MD.h"

#include "t1229.h"
#include "t1235.h"
extern TypeInfo t1227_TI;
extern TypeInfo t1235_TI;
extern TypeInfo t123_TI;
extern TypeInfo t125_TI;
extern TypeInfo t27_TI;
extern TypeInfo t1359_TI;
#include "t1229MD.h"
#include "t866MD.h"
#include "t1235MD.h"
#include "t1384MD.h"
extern MethodInfo m6391_MI;
extern MethodInfo m4419_MI;
extern MethodInfo m6302_MI;
extern MethodInfo m452_MI;
extern MethodInfo m8326_MI;
extern MethodInfo m7403_MI;
extern MethodInfo m532_MI;
extern MethodInfo m3453_MI;
extern MethodInfo m2209_MI;
extern MethodInfo m2236_MI;
extern MethodInfo m7031_MI;


extern MethodInfo m6288_MI;
 void m6288 (t1227 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6288_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
extern MethodInfo m6289_MI;
 void m6289 (t1227 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6289_MI);
	{
		VirtActionInvoker1< bool >::Invoke(&m8326_MI, __this, 1);
		m7403(NULL, __this, &m7403_MI);
		return;
	}
}
extern MethodInfo m6290_MI;
 int32_t m6290 (t1227 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6290_MI);
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m6291_MI;
 void m6291 (t1227 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6291_MI);
	{
		t1228* L_0 = (__this->f1);
		bool L_1 = m6391(NULL, L_0, p0, &m6391_MI);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		t27* L_2 = m4419(NULL, (t27*) &_stringLiteral1062, &m4419_MI);
		t1235 * L_3 = (t1235 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1235_TI));
		m6302(L_3, L_2, &m6302_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_001e:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m6292_MI;
 void m6292 (t1227 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6292_MI);
	{
		VirtActionInvoker1< bool >::Invoke(&m8326_MI, __this, 0);
		return;
	}
}
extern MethodInfo m6293_MI;
 t876* m6293 (t25 * __this, t27* p0, t27* p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6293_MI);
	t27* V_0 = {0};
	int32_t V_1 = 0;
	t27* V_2 = {0};
	int32_t V_3 = 0;
	t27* V_4 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_0 = m532(NULL, (t27*) &_stringLiteral1063, p1, (t27*) &_stringLiteral1064, &m532_MI);
		V_0 = L_0;
		NullCheck(p0);
		int32_t L_1 = m3453(p0, V_0, &m3453_MI);
		V_1 = L_1;
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_001f;
		}
	}
	{
		return (t876*)NULL;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_2 = m532(NULL, (t27*) &_stringLiteral1065, p1, (t27*) &_stringLiteral1064, &m532_MI);
		V_2 = L_2;
		NullCheck(p0);
		int32_t L_3 = m3453(p0, V_2, &m3453_MI);
		V_3 = L_3;
		if ((((int32_t)V_3) == ((int32_t)(-1))))
		{
			goto IL_0040;
		}
	}
	{
		if ((((int32_t)V_3) > ((int32_t)V_1)))
		{
			goto IL_0042;
		}
	}

IL_0040:
	{
		return (t876*)NULL;
	}

IL_0042:
	{
		NullCheck(V_0);
		int32_t L_4 = m2209(V_0, &m2209_MI);
		V_1 = ((int32_t)(V_1+L_4));
		NullCheck(p0);
		t27* L_5 = m2236(p0, V_1, ((int32_t)(V_3-V_1)), &m2236_MI);
		V_4 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1359_TI));
		t876* L_6 = m7031(NULL, V_4, &m7031_MI);
		return L_6;
	}
}
// Metadata Definition System.Security.Cryptography.AsymmetricAlgorithm
extern Il2CppType t134_0_0_4;
FieldInfo t1227_f0_FieldInfo = 
{
	"KeySizeValue", &t134_0_0_4, &t1227_TI, offsetof(t1227, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1228_0_0_4;
FieldInfo t1227_f1_FieldInfo = 
{
	"LegalKeySizesValue", &t1228_0_0_4, &t1227_TI, offsetof(t1227, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1227_FIs[] =
{
	&t1227_f0_FieldInfo,
	&t1227_f1_FieldInfo,
	NULL
};
extern MethodInfo m6290_MI;
extern MethodInfo m6291_MI;
static PropertyInfo t1227____KeySize_PropertyInfo = 
{
	&t1227_TI, "KeySize", &m6290_MI, &m6291_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1227_PIs[] =
{
	&t1227____KeySize_PropertyInfo,
	NULL
};
extern TypeInfo t1227_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6288_MI = 
{
	".ctor", (methodPointerType)&m6288, &t1227_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3360, NULL, (methodPointerType)NULL};
extern TypeInfo t1227_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6289_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m6289, &t1227_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 3361, NULL, (methodPointerType)NULL};
extern TypeInfo t1227_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6290_MI = 
{
	"get_KeySize", (methodPointerType)&m6290, &t1227_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2502, 0, 5, 0, false, false, 3362, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t1227_m6291_ParameterInfos[] = 
{
	{"value", 0, 134221857, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1227_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6291_MI = 
{
	"set_KeySize", (methodPointerType)&m6291, &t1227_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t1227_m6291_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 6, 1, false, false, 3363, NULL, (methodPointerType)NULL};
extern TypeInfo t1227_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6292_MI = 
{
	"Clear", (methodPointerType)&m6292, &t1227_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3364, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1227_m8326_ParameterInfos[] = 
{
	{"disposing", 0, 134221858, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1227_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m8326_MI = 
{
	"Dispose", NULL, &t1227_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t1227_m8326_ParameterInfos, &EmptyCustomAttributesCache, 1476, 0, 7, 1, false, false, 3365, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1227_m8327_ParameterInfos[] = 
{
	{"xmlString", 0, 134221859, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1227_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m8327_MI = 
{
	"FromXmlString", NULL, &t1227_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1227_m8327_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, false, 3366, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1227_m8328_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134221860, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1227_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m8328_MI = 
{
	"ToXmlString", NULL, &t1227_TI, &t27_0_0_0, RuntimeInvoker_t25_t137, t1227_m8328_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 1, false, false, 3367, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t27_0_0_0;
static ParameterInfo t1227_m6293_ParameterInfos[] = 
{
	{"xml", 0, 134221861, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"param", 1, 134221862, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1227_TI;
extern Il2CppType t876_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6293_MI = 
{
	"GetNamedParam", (methodPointerType)&m6293, &t1227_TI, &t876_0_0_0, RuntimeInvoker_t25_t25_t25, t1227_m6293_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 3368, NULL, (methodPointerType)NULL};
static MethodInfo* t1227_MIs[] =
{
	&m6288_MI,
	&m6289_MI,
	&m6290_MI,
	&m6291_MI,
	&m6292_MI,
	&m8326_MI,
	&m8327_MI,
	&m8328_MI,
	&m6293_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6289_MI;
extern MethodInfo m6290_MI;
extern MethodInfo m6291_MI;
static MethodInfo* t1227_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6289_MI,
	&m6290_MI,
	&m6291_MI,
	NULL,
	NULL,
	NULL,
};
extern TypeInfo t167_TI;
static TypeInfo* t1227_ITIs[] = 
{
	&t167_TI,
};
extern TypeInfo t167_TI;
static Il2CppInterfaceOffsetPair t1227_IOs[] = 
{
	{ &t167_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1227_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1227__CustomAttributeCache = {
1,
NULL,
&t1227_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1227_0_0_0;
extern Il2CppType t1227_1_0_0;
extern TypeInfo t25_TI;
struct t1227;
extern TypeInfo t1227_TI;
extern CustomAttributesCache t1227__CustomAttributeCache;
TypeInfo t1227_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsymmetricAlgorithm", "System.Security.Cryptography", t1227_MIs, t1227_PIs, t1227_FIs, NULL, &t25_TI, NULL, NULL, &t1227_TI, t1227_ITIs, t1227_VT, &t1227__CustomAttributeCache, &t1227_TI, &t1227_0_0_0, &t1227_1_0_0, t1227_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1227), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 9, 1, 2, 0, 0, 10, 1, 1};
#include "t1230.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1230_TI;
#include "t1230MD.h"

extern MethodInfo m452_MI;


extern MethodInfo m6294_MI;
 void m6294 (t1230 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6294_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
// Metadata Definition System.Security.Cryptography.AsymmetricSignatureDeformatter
extern TypeInfo t1230_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6294_MI = 
{
	".ctor", (methodPointerType)&m6294, &t1230_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3369, NULL, (methodPointerType)NULL};
static MethodInfo* t1230_MIs[] =
{
	&m6294_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1230_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1230_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1230__CustomAttributeCache = {
1,
NULL,
&t1230_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1230_0_0_0;
extern Il2CppType t1230_1_0_0;
extern TypeInfo t25_TI;
struct t1230;
extern TypeInfo t1230_TI;
extern CustomAttributesCache t1230__CustomAttributeCache;
TypeInfo t1230_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsymmetricSignatureDeformatter", "System.Security.Cryptography", t1230_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t1230_TI, NULL, t1230_VT, &t1230__CustomAttributeCache, &t1230_TI, &t1230_0_0_0, &t1230_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1230), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t1231.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1231_TI;
#include "t1231MD.h"

extern MethodInfo m452_MI;


extern MethodInfo m6295_MI;
 void m6295 (t1231 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6295_MI);
	{
		m452(__this, &m452_MI);
		return;
	}
}
// Metadata Definition System.Security.Cryptography.AsymmetricSignatureFormatter
extern TypeInfo t1231_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6295_MI = 
{
	".ctor", (methodPointerType)&m6295, &t1231_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3370, NULL, (methodPointerType)NULL};
static MethodInfo* t1231_MIs[] =
{
	&m6295_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1231_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1231_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1231__CustomAttributeCache = {
1,
NULL,
&t1231_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1231_0_0_0;
extern Il2CppType t1231_1_0_0;
extern TypeInfo t25_TI;
struct t1231;
extern TypeInfo t1231_TI;
extern CustomAttributesCache t1231__CustomAttributeCache;
TypeInfo t1231_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsymmetricSignatureFormatter", "System.Security.Cryptography", t1231_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t1231_TI, NULL, t1231_VT, &t1231__CustomAttributeCache, &t1231_TI, &t1231_0_0_0, &t1231_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1231), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t1232.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1232_TI;
#include "t1232MD.h"

#include "t1431.h"
#include "t1435.h"
extern TypeInfo t876_TI;
extern TypeInfo t462_TI;
extern TypeInfo t1443_TI;
extern TypeInfo t1232_TI;
extern MethodInfo m4417_MI;
extern FieldInfo t1443_f11_FieldInfo;
extern FieldInfo t1443_f12_FieldInfo;


extern MethodInfo m6296_MI;
 void m6296 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6296_MI);
	{
		t876* L_0 = ((t876*)SZArrayNew(InitializedTypeInfo(&t876_TI), ((int32_t)64)));
		m4417(NULL, (t122 *)(t122 *)L_0, LoadFieldToken(&t1443_f11_FieldInfo), &m4417_MI);
		((t1232_SFs*)InitializedTypeInfo(&t1232_TI)->static_fields)->f0 = L_0;
		t876* L_1 = ((t876*)SZArrayNew(InitializedTypeInfo(&t876_TI), ((int32_t)123)));
		m4417(NULL, (t122 *)(t122 *)L_1, LoadFieldToken(&t1443_f12_FieldInfo), &m4417_MI);
		((t1232_SFs*)InitializedTypeInfo(&t1232_TI)->static_fields)->f1 = L_1;
		return;
	}
}
// Metadata Definition System.Security.Cryptography.Base64Constants
extern Il2CppType t876_0_0_54;
FieldInfo t1232_f0_FieldInfo = 
{
	"EncodeTable", &t876_0_0_54, &t1232_TI, offsetof(t1232_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_54;
FieldInfo t1232_f1_FieldInfo = 
{
	"DecodeTable", &t876_0_0_54, &t1232_TI, offsetof(t1232_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1232_FIs[] =
{
	&t1232_f0_FieldInfo,
	&t1232_f1_FieldInfo,
	NULL
};
extern TypeInfo t1232_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6296_MI = 
{
	".cctor", (methodPointerType)&m6296, &t1232_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3371, NULL, (methodPointerType)NULL};
static MethodInfo* t1232_MIs[] =
{
	&m6296_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1232_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1232_0_0_0;
extern Il2CppType t1232_1_0_0;
extern TypeInfo t25_TI;
struct t1232;
extern TypeInfo t1232_TI;
TypeInfo t1232_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Base64Constants", "System.Security.Cryptography", t1232_MIs, NULL, t1232_FIs, NULL, &t25_TI, NULL, NULL, &t1232_TI, NULL, t1232_VT, &EmptyCustomAttributesCache, &t1232_TI, &t1232_0_0_0, &t1232_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1232), 0, -1, sizeof(t1232_SFs), 0, -1, 1048960, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t1233.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1233_TI;
#include "t1233MD.h"



// Metadata Definition System.Security.Cryptography.CipherMode
extern Il2CppType t134_0_0_1542;
FieldInfo t1233_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1233_TI, offsetof(t1233, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1233_0_0_32854;
FieldInfo t1233_f2_FieldInfo = 
{
	"CBC", &t1233_0_0_32854, &t1233_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1233_0_0_32854;
FieldInfo t1233_f3_FieldInfo = 
{
	"ECB", &t1233_0_0_32854, &t1233_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1233_0_0_32854;
FieldInfo t1233_f4_FieldInfo = 
{
	"OFB", &t1233_0_0_32854, &t1233_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1233_0_0_32854;
FieldInfo t1233_f5_FieldInfo = 
{
	"CFB", &t1233_0_0_32854, &t1233_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1233_0_0_32854;
FieldInfo t1233_f6_FieldInfo = 
{
	"CTS", &t1233_0_0_32854, &t1233_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1233_FIs[] =
{
	&t1233_f1_FieldInfo,
	&t1233_f2_FieldInfo,
	&t1233_f3_FieldInfo,
	&t1233_f4_FieldInfo,
	&t1233_f5_FieldInfo,
	&t1233_f6_FieldInfo,
	NULL
};
static const int32_t t1233_f2_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1233_f2_DefaultValue = 
{
	&t1233_f2_FieldInfo, { (char*)&t1233_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1233_f3_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1233_f3_DefaultValue = 
{
	&t1233_f3_FieldInfo, { (char*)&t1233_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1233_f4_DefaultValueData = 3;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1233_f4_DefaultValue = 
{
	&t1233_f4_FieldInfo, { (char*)&t1233_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1233_f5_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1233_f5_DefaultValue = 
{
	&t1233_f5_FieldInfo, { (char*)&t1233_f5_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1233_f6_DefaultValueData = 5;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1233_f6_DefaultValue = 
{
	&t1233_f6_FieldInfo, { (char*)&t1233_f6_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1233_FDVs[] = 
{
	&t1233_f2_DefaultValue,
	&t1233_f3_DefaultValue,
	&t1233_f4_DefaultValue,
	&t1233_f5_DefaultValue,
	&t1233_f6_DefaultValue,
	NULL
};
static MethodInfo* t1233_MIs[] =
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
static MethodInfo* t1233_VT[] =
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
static Il2CppInterfaceOffsetPair t1233_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1233_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1233__CustomAttributeCache = {
1,
NULL,
&t1233_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1233_0_0_0;
extern Il2CppType t1233_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t1233__CustomAttributeCache;
TypeInfo t1233_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CipherMode", "System.Security.Cryptography", t1233_MIs, NULL, t1233_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1233_VT, &t1233__CustomAttributeCache, &t134_TI, &t1233_0_0_0, &t1233_1_0_0, t1233_IOs, NULL, NULL, t1233_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1233)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1234.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1234_TI;
#include "t1234MD.h"

#include "t964.h"
#include "t963.h"
extern TypeInfo t25_TI;
extern TypeInfo t1234_TI;
extern TypeInfo t964_TI;
extern TypeInfo t963_TI;
extern TypeInfo t972_TI;
extern TypeInfo t123_TI;
extern TypeInfo t165_TI;
extern TypeInfo t27_TI;
extern TypeInfo t131_TI;
#include "t964MD.h"
#include "t963MD.h"
#include "t1340MD.h"
extern MethodInfo m452_MI;
extern MethodInfo m4866_MI;
extern MethodInfo m4862_MI;
extern MethodInfo m4905_MI;
extern MethodInfo m4917_MI;
extern MethodInfo m6300_MI;
extern MethodInfo m489_MI;
extern MethodInfo m6922_MI;
extern MethodInfo m6298_MI;
extern MethodInfo m6923_MI;
extern MethodInfo m4914_MI;
extern MethodInfo m4346_MI;
extern MethodInfo m6967_MI;


extern MethodInfo m6297_MI;
 void m6297 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6297_MI);
	{
		t25 * L_0 = (t25 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t25_TI));
		m452(L_0, &m452_MI);
		((t1234_SFs*)InitializedTypeInfo(&t1234_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m6298_MI;
 void m6298 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6298_MI);
	t972 * V_0 = {0};
	t972 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t964_TI));
		t964 * L_0 = (t964 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t964_TI));
		m4866(L_0, &m4866_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t963_TI));
		t963 * L_1 = (t963 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t963_TI));
		m4862(L_1, &m4862_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t972_TI));
		t972 * L_2 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4905(L_2, L_0, L_1, &m4905_MI);
		V_0 = L_2;
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1066, (t27*) &_stringLiteral1067);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral534, (t27*) &_stringLiteral1067);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1068, (t27*) &_stringLiteral1067);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1069, (t27*) &_stringLiteral1067);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1070, (t27*) &_stringLiteral1071);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1072, (t27*) &_stringLiteral1071);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1073, (t27*) &_stringLiteral1074);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1075, (t27*) &_stringLiteral1074);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1076, (t27*) &_stringLiteral1074);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1077, (t27*) &_stringLiteral1078);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1079, (t27*) &_stringLiteral1078);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1080, (t27*) &_stringLiteral1078);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1081, (t27*) &_stringLiteral1082);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1083, (t27*) &_stringLiteral1082);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1084, (t27*) &_stringLiteral1082);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1085, (t27*) &_stringLiteral1086);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1087, (t27*) &_stringLiteral1086);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1088, (t27*) &_stringLiteral1086);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1089, (t27*) &_stringLiteral1090);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1091, (t27*) &_stringLiteral1090);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1092, (t27*) &_stringLiteral1093);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1094, (t27*) &_stringLiteral1093);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1095, (t27*) &_stringLiteral1096);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1097, (t27*) &_stringLiteral1096);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1098, (t27*) &_stringLiteral1096);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1099, (t27*) &_stringLiteral1096);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1100, (t27*) &_stringLiteral1101);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1102, (t27*) &_stringLiteral1101);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1103, (t27*) &_stringLiteral1104);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1105, (t27*) &_stringLiteral1104);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1106, (t27*) &_stringLiteral1104);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1107, (t27*) &_stringLiteral1108);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1109, (t27*) &_stringLiteral1108);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1110, (t27*) &_stringLiteral1111);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1112, (t27*) &_stringLiteral1111);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1111, (t27*) &_stringLiteral1111);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1113, (t27*) &_stringLiteral1114);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1114, (t27*) &_stringLiteral1114);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1115, (t27*) &_stringLiteral1116);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1117, (t27*) &_stringLiteral1116);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1118, (t27*) &_stringLiteral1116);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1119, (t27*) &_stringLiteral1111);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1120, (t27*) &_stringLiteral1121);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1121, (t27*) &_stringLiteral1121);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1122, (t27*) &_stringLiteral1123);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1123, (t27*) &_stringLiteral1123);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1124, (t27*) &_stringLiteral1125);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1125, (t27*) &_stringLiteral1125);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1126, (t27*) &_stringLiteral1127);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1127, (t27*) &_stringLiteral1127);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1128, (t27*) &_stringLiteral1129);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1129, (t27*) &_stringLiteral1129);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1130, (t27*) &_stringLiteral1131);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1132, (t27*) &_stringLiteral1133);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1134, (t27*) &_stringLiteral1067);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1135, (t27*) &_stringLiteral1136);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1137, (t27*) &_stringLiteral1138);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1139, (t27*) &_stringLiteral1140);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1141, (t27*) &_stringLiteral1142);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1143, (t27*) &_stringLiteral1144);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1145, (t27*) &_stringLiteral1146);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1147, (t27*) &_stringLiteral1148);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1149, (t27*) &_stringLiteral1150);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1151, (t27*) &_stringLiteral1152);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1153, (t27*) &_stringLiteral1074);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1154, (t27*) &_stringLiteral1082);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1155, (t27*) &_stringLiteral1125);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1156, (t27*) &_stringLiteral1127);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1157, (t27*) &_stringLiteral1129);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1158, (t27*) &_stringLiteral1123);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1159, (t27*) &_stringLiteral1160);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1161, (t27*) &_stringLiteral1162);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1163, (t27*) &_stringLiteral1164);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1165, (t27*) &_stringLiteral1166);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1167, (t27*) &_stringLiteral1168);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1169, (t27*) &_stringLiteral1170);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1171, (t27*) &_stringLiteral1172);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1173, (t27*) &_stringLiteral1174);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1175, (t27*) &_stringLiteral1176);
		NullCheck(V_0);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_0, (t27*) &_stringLiteral1177, (t27*) &_stringLiteral1178);
		t964 * L_3 = (t964 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t964_TI));
		m4866(L_3, &m4866_MI);
		t963 * L_4 = (t963 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t963_TI));
		m4862(L_4, &m4862_MI);
		t972 * L_5 = (t972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t972_TI));
		m4905(L_5, L_3, L_4, &m4905_MI);
		V_1 = L_5;
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1067, (t27*) &_stringLiteral1179);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1180, (t27*) &_stringLiteral1179);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral534, (t27*) &_stringLiteral1179);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1068, (t27*) &_stringLiteral1179);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1071, (t27*) &_stringLiteral1181);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1070, (t27*) &_stringLiteral1181);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1072, (t27*) &_stringLiteral1181);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1074, (t27*) &_stringLiteral1182);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1073, (t27*) &_stringLiteral1182);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1076, (t27*) &_stringLiteral1182);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1078, (t27*) &_stringLiteral1183);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1077, (t27*) &_stringLiteral1183);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1080, (t27*) &_stringLiteral1183);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1082, (t27*) &_stringLiteral1184);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1081, (t27*) &_stringLiteral1184);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1084, (t27*) &_stringLiteral1184);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1185, (t27*) &_stringLiteral1186);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1092, (t27*) &_stringLiteral1187);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1097, (t27*) &_stringLiteral1188);
		NullCheck(V_1);
		VirtActionInvoker2< t25 *, t25 * >::Invoke(&m4917_MI, V_1, (t27*) &_stringLiteral1100, (t27*) &_stringLiteral1189);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1234_TI));
		((t1234_SFs*)InitializedTypeInfo(&t1234_TI)->static_fields)->f1 = V_0;
		((t1234_SFs*)InitializedTypeInfo(&t1234_TI)->static_fields)->f2 = V_1;
		return;
	}
}
extern MethodInfo m6299_MI;
 t25 * m6299 (t25 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6299_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1234_TI));
		t25 * L_0 = m6300(NULL, p0, (t158*)(t158*)NULL, &m6300_MI);
		return L_0;
	}
}
extern MethodInfo m6300_MI;
 t25 * m6300 (t25 * __this, t27* p0, t158* p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6300_MI);
	t25 * V_0 = {0};
	t131 * V_1 = {0};
	t27* V_2 = {0};
	t25 * V_3 = {0};
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
		m489(L_0, (t27*) &_stringLiteral12, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1234_TI));
		V_0 = (((t1234_SFs*)InitializedTypeInfo(&t1234_TI)->static_fields)->f0);
		m6922(NULL, V_0, &m6922_MI);
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1234_TI));
			if ((((t1234_SFs*)InitializedTypeInfo(&t1234_TI)->static_fields)->f1))
			{
				goto IL_0026;
			}
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1234_TI));
			m6298(NULL, &m6298_MI);
		}

IL_0026:
		{
			// IL_0026: leave.s IL_002f
			leaveInstructions[0] = 0x2F; // 1
			THROW_SENTINEL(IL_002f);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0028;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0028;
	}

IL_0028:
	{ // begin finally (depth: 1)
		m6923(NULL, V_0, &m6923_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x2F:
				goto IL_002f;
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

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			V_1 = (t131 *)NULL;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1234_TI));
			NullCheck((((t1234_SFs*)InitializedTypeInfo(&t1234_TI)->static_fields)->f1));
			t25 * L_1 = (t25 *)VirtFuncInvoker1< t25 *, t25 * >::Invoke(&m4914_MI, (((t1234_SFs*)InitializedTypeInfo(&t1234_TI)->static_fields)->f1), p0);
			V_2 = ((t27*)Castclass(L_1, (&t27_TI)));
			if (V_2)
			{
				goto IL_0047;
			}
		}

IL_0045:
		{
			V_2 = p0;
		}

IL_0047:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t131_TI));
			t131 * L_2 = m4346(NULL, V_2, &m4346_MI);
			V_1 = L_2;
			t25 * L_3 = m6967(NULL, V_1, p1, &m6967_MI);
			V_3 = L_3;
			// IL_0056: leave.s IL_0061
			goto IL_0061;
		}

IL_0058:
		{
			// IL_0058: leave.s IL_0061
			goto IL_0061;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t168 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t25_TI, e.ex->object.klass))
			goto IL_005a;
		throw e;
	}

IL_005a:
	{ // begin catch(System.Object)
		{
			V_3 = NULL;
			// IL_005d: leave.s IL_0061
			goto IL_0061;
		}

IL_005f:
		{
			// IL_005f: leave.s IL_0061
			goto IL_0061;
		}
	} // end catch (depth: 1)

IL_0061:
	{
		return V_3;
	}
}
// Metadata Definition System.Security.Cryptography.CryptoConfig
extern Il2CppType t25_0_0_17;
FieldInfo t1234_f0_FieldInfo = 
{
	"lockObject", &t25_0_0_17, &t1234_TI, offsetof(t1234_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t972_0_0_17;
FieldInfo t1234_f1_FieldInfo = 
{
	"algorithms", &t972_0_0_17, &t1234_TI, offsetof(t1234_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t972_0_0_17;
FieldInfo t1234_f2_FieldInfo = 
{
	"oid", &t972_0_0_17, &t1234_TI, offsetof(t1234_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1234_FIs[] =
{
	&t1234_f0_FieldInfo,
	&t1234_f1_FieldInfo,
	&t1234_f2_FieldInfo,
	NULL
};
extern TypeInfo t1234_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6297_MI = 
{
	".cctor", (methodPointerType)&m6297, &t1234_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3372, NULL, (methodPointerType)NULL};
extern TypeInfo t1234_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6298_MI = 
{
	"Initialize", (methodPointerType)&m6298, &t1234_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 145, 0, 255, 0, false, false, 3373, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1234_m6299_ParameterInfos[] = 
{
	{"name", 0, 134221863, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1234_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6299_MI = 
{
	"CreateFromName", (methodPointerType)&m6299, &t1234_TI, &t25_0_0_0, RuntimeInvoker_t25_t25, t1234_m6299_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3374, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t158_0_0_0;
extern CustomAttributesCache t1234__CustomAttributeCache_t1234_m6300_Arg1_ParameterInfo;
static ParameterInfo t1234_m6300_ParameterInfos[] = 
{
	{"name", 0, 134221864, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"args", 1, 134221865, &t1234__CustomAttributeCache_t1234_m6300_Arg1_ParameterInfo, &t158_0_0_0},
};
extern TypeInfo t1234_TI;
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6300_MI = 
{
	"CreateFromName", (methodPointerType)&m6300, &t1234_TI, &t25_0_0_0, RuntimeInvoker_t25_t25_t25, t1234_m6300_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 3375, NULL, (methodPointerType)NULL};
static MethodInfo* t1234_MIs[] =
{
	&m6297_MI,
	&m6298_MI,
	&m6299_MI,
	&m6300_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1234_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1234_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t500_TI;
#include "t500.h"
#include "t500MD.h"
extern MethodInfo m2303_MI;
void t1234_CustomAttributesCacheGenerator_t1234_m6300_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t500 * tmp;
		tmp = (t500 *)il2cpp_codegen_object_new (&t500_TI);
		m2303(tmp, &m2303_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1234__CustomAttributeCache = {
1,
NULL,
&t1234_CustomAttributesCacheGenerator
};
CustomAttributesCache t1234__CustomAttributeCache_t1234_m6300_Arg1_ParameterInfo = {
1,
NULL,
&t1234_CustomAttributesCacheGenerator_t1234_m6300_Arg1_ParameterInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1234_0_0_0;
extern Il2CppType t1234_1_0_0;
extern TypeInfo t25_TI;
struct t1234;
extern TypeInfo t1234_TI;
extern CustomAttributesCache t1234__CustomAttributeCache;
TypeInfo t1234_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CryptoConfig", "System.Security.Cryptography", t1234_MIs, NULL, t1234_FIs, NULL, &t25_TI, NULL, NULL, &t1234_TI, NULL, t1234_VT, &t1234__CustomAttributeCache, &t1234_TI, &t1234_0_0_0, &t1234_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1234), 0, -1, sizeof(t1234_SFs), 0, -1, 1, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 4, 0, 3, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1235_TI;

extern TypeInfo t27_TI;
#include "t168MD.h"
extern MethodInfo m4419_MI;
extern MethodInfo m7672_MI;
extern MethodInfo m3469_MI;
extern MethodInfo m7674_MI;
extern MethodInfo m593_MI;
extern MethodInfo m7673_MI;


extern MethodInfo m6301_MI;
 void m6301 (t1235 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6301_MI);
	{
		t27* L_0 = m4419(NULL, (t27*) &_stringLiteral1190, &m4419_MI);
		m7672(__this, L_0, &m7672_MI);
		m3469(__this, ((int32_t)-2146233296), &m3469_MI);
		return;
	}
}
extern MethodInfo m6302_MI;
 void m6302 (t1235 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6302_MI);
	{
		m7672(__this, p0, &m7672_MI);
		m3469(__this, ((int32_t)-2146233296), &m3469_MI);
		return;
	}
}
extern MethodInfo m6303_MI;
 void m6303 (t1235 * __this, t27* p0, t168 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6303_MI);
	{
		m7674(__this, p0, p1, &m7674_MI);
		m3469(__this, ((int32_t)-2146233296), &m3469_MI);
		return;
	}
}
extern MethodInfo m6304_MI;
 void m6304 (t1235 * __this, t27* p0, t27* p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6304_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t27_TI));
		t27* L_0 = m593(NULL, p0, p1, &m593_MI);
		m7672(__this, L_0, &m7672_MI);
		m3469(__this, ((int32_t)-2146233296), &m3469_MI);
		return;
	}
}
extern MethodInfo m6305_MI;
 void m6305 (t1235 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6305_MI);
	{
		m7673(__this, p0, p1, &m7673_MI);
		return;
	}
}
// Metadata Definition System.Security.Cryptography.CryptographicException
extern TypeInfo t1235_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6301_MI = 
{
	".ctor", (methodPointerType)&m6301, &t1235_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3376, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1235_m6302_ParameterInfos[] = 
{
	{"message", 0, 134221866, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1235_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6302_MI = 
{
	".ctor", (methodPointerType)&m6302, &t1235_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1235_m6302_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3377, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1235_m6303_ParameterInfos[] = 
{
	{"message", 0, 134221867, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"inner", 1, 134221868, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern TypeInfo t1235_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6303_MI = 
{
	".ctor", (methodPointerType)&m6303, &t1235_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1235_m6303_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3378, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
extern Il2CppType t27_0_0_0;
static ParameterInfo t1235_m6304_ParameterInfos[] = 
{
	{"format", 0, 134221869, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"insert", 1, 134221870, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1235_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6304_MI = 
{
	".ctor", (methodPointerType)&m6304, &t1235_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1235_m6304_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3379, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1235_m6305_ParameterInfos[] = 
{
	{"info", 0, 134221871, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221872, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1235_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m6305_MI = 
{
	".ctor", (methodPointerType)&m6305, &t1235_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1235_m6305_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 3380, NULL, (methodPointerType)NULL};
static MethodInfo* t1235_MIs[] =
{
	&m6301_MI,
	&m6302_MI,
	&m6303_MI,
	&m6304_MI,
	&m6305_MI,
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
static MethodInfo* t1235_VT[] =
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
extern TypeInfo t690_TI;
static TypeInfo* t1235_ITIs[] = 
{
	&t690_TI,
};
extern TypeInfo t485_TI;
extern TypeInfo t690_TI;
static Il2CppInterfaceOffsetPair t1235_IOs[] = 
{
	{ &t485_TI, 4},
	{ &t690_TI, 5},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1235_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1235__CustomAttributeCache = {
1,
NULL,
&t1235_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1235_0_0_0;
extern Il2CppType t1235_1_0_0;
extern TypeInfo t935_TI;
struct t1235;
extern TypeInfo t1235_TI;
extern CustomAttributesCache t1235__CustomAttributeCache;
TypeInfo t1235_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CryptographicException", "System.Security.Cryptography", t1235_MIs, NULL, NULL, NULL, &t935_TI, NULL, NULL, &t1235_TI, t1235_ITIs, t1235_VT, &t1235__CustomAttributeCache, &t1235_TI, &t1235_0_0_0, &t1235_1_0_0, t1235_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1235), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 11, 1, 2};
#include "t1236.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1236_TI;
#include "t1236MD.h"

extern MethodInfo m4419_MI;
extern MethodInfo m6302_MI;
extern MethodInfo m3469_MI;
extern MethodInfo m6305_MI;


extern MethodInfo m6306_MI;
 void m6306 (t1236 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6306_MI);
	{
		t27* L_0 = m4419(NULL, (t27*) &_stringLiteral1191, &m4419_MI);
		m6302(__this, L_0, &m6302_MI);
		m3469(__this, ((int32_t)-2146233295), &m3469_MI);
		return;
	}
}
extern MethodInfo m6307_MI;
 void m6307 (t1236 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6307_MI);
	{
		m6302(__this, p0, &m6302_MI);
		m3469(__this, ((int32_t)-2146233295), &m3469_MI);
		return;
	}
}
extern MethodInfo m6308_MI;
 void m6308 (t1236 * __this, t823 * p0, t824  p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6308_MI);
	{
		m6305(__this, p0, p1, &m6305_MI);
		return;
	}
}
// Metadata Definition System.Security.Cryptography.CryptographicUnexpectedOperationException
extern TypeInfo t1236_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6306_MI = 
{
	".ctor", (methodPointerType)&m6306, &t1236_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3381, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1236_m6307_ParameterInfos[] = 
{
	{"message", 0, 134221873, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1236_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6307_MI = 
{
	".ctor", (methodPointerType)&m6307, &t1236_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1236_m6307_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3382, NULL, (methodPointerType)NULL};
extern Il2CppType t823_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t1236_m6308_ParameterInfos[] = 
{
	{"info", 0, 134221874, &EmptyCustomAttributesCache, &t823_0_0_0},
	{"context", 1, 134221875, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern TypeInfo t1236_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t824 (MethodInfo* method, void* obj, void** args);
MethodInfo m6308_MI = 
{
	".ctor", (methodPointerType)&m6308, &t1236_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t824, t1236_m6308_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 3383, NULL, (methodPointerType)NULL};
static MethodInfo* t1236_MIs[] =
{
	&m6306_MI,
	&m6307_MI,
	&m6308_MI,
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
static MethodInfo* t1236_VT[] =
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
extern TypeInfo t690_TI;
extern TypeInfo t485_TI;
static Il2CppInterfaceOffsetPair t1236_IOs[] = 
{
	{ &t690_TI, 5},
	{ &t485_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1236_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1236__CustomAttributeCache = {
1,
NULL,
&t1236_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1236_0_0_0;
extern Il2CppType t1236_1_0_0;
extern TypeInfo t1235_TI;
struct t1236;
extern TypeInfo t1236_TI;
extern CustomAttributesCache t1236__CustomAttributeCache;
TypeInfo t1236_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CryptographicUnexpectedOperationException", "System.Security.Cryptography", t1236_MIs, NULL, NULL, NULL, &t1235_TI, NULL, NULL, &t1236_TI, NULL, t1236_VT, &t1236__CustomAttributeCache, &t1236_TI, &t1236_0_0_0, &t1236_1_0_0, t1236_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1236), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t917.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t917_TI;
#include "t917MD.h"

#include "t1237.h"
extern TypeInfo t917_TI;
extern MethodInfo m6310_MI;
extern MethodInfo m6311_MI;
extern MethodInfo m452_MI;


extern MethodInfo m6309_MI;
 void m6309 (t917 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6309_MI);
	{
		m6310(__this, p0, (t27*)NULL, &m6310_MI);
		return;
	}
}
extern MethodInfo m6310_MI;
 void m6310 (t917 * __this, int32_t p0, t27* p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6310_MI);
	{
		m6311(__this, p0, (t27*)NULL, (t27*)NULL, &m6311_MI);
		return;
	}
}
extern MethodInfo m6311_MI;
 void m6311 (t917 * __this, int32_t p0, t27* p1, t27* p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6311_MI);
	{
		m452(__this, &m452_MI);
		__this->f4 = p0;
		__this->f3 = p1;
		__this->f1 = p2;
		__this->f2 = (-1);
		return;
	}
}
extern MethodInfo m6312_MI;
 int32_t m6312 (t917 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6312_MI);
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m6313_MI;
 void m6313 (t917 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6313_MI);
	{
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Security.Cryptography.CspParameters
extern Il2CppType t1237_0_0_1;
FieldInfo t917_f0_FieldInfo = 
{
	"_Flags", &t1237_0_0_1, &t917_TI, offsetof(t917, f0), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_6;
FieldInfo t917_f1_FieldInfo = 
{
	"KeyContainerName", &t27_0_0_6, &t917_TI, offsetof(t917, f1), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_6;
FieldInfo t917_f2_FieldInfo = 
{
	"KeyNumber", &t134_0_0_6, &t917_TI, offsetof(t917, f2), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_6;
FieldInfo t917_f3_FieldInfo = 
{
	"ProviderName", &t27_0_0_6, &t917_TI, offsetof(t917, f3), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_6;
FieldInfo t917_f4_FieldInfo = 
{
	"ProviderType", &t134_0_0_6, &t917_TI, offsetof(t917, f4), &EmptyCustomAttributesCache};
static FieldInfo* t917_FIs[] =
{
	&t917_f0_FieldInfo,
	&t917_f1_FieldInfo,
	&t917_f2_FieldInfo,
	&t917_f3_FieldInfo,
	&t917_f4_FieldInfo,
	NULL
};
extern MethodInfo m6312_MI;
extern MethodInfo m6313_MI;
static PropertyInfo t917____Flags_PropertyInfo = 
{
	&t917_TI, "Flags", &m6312_MI, &m6313_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t917_PIs[] =
{
	&t917____Flags_PropertyInfo,
	NULL
};
extern Il2CppType t134_0_0_0;
static ParameterInfo t917_m6309_ParameterInfos[] = 
{
	{"dwTypeIn", 0, 134221876, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t917_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6309_MI = 
{
	".ctor", (methodPointerType)&m6309, &t917_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t917_m6309_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3384, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t27_0_0_0;
static ParameterInfo t917_m6310_ParameterInfos[] = 
{
	{"dwTypeIn", 0, 134221877, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"strProviderNameIn", 1, 134221878, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t917_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6310_MI = 
{
	".ctor", (methodPointerType)&m6310, &t917_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t917_m6310_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3385, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t27_0_0_0;
extern Il2CppType t27_0_0_0;
static ParameterInfo t917_m6311_ParameterInfos[] = 
{
	{"dwTypeIn", 0, 134221879, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"strProviderNameIn", 1, 134221880, &EmptyCustomAttributesCache, &t27_0_0_0},
	{"strContainerNameIn", 2, 134221881, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t917_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6311_MI = 
{
	".ctor", (methodPointerType)&m6311, &t917_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25_t25, t917_m6311_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 3386, NULL, (methodPointerType)NULL};
extern TypeInfo t917_TI;
extern Il2CppType t1237_0_0_0;
extern void* RuntimeInvoker_t1237 (MethodInfo* method, void* obj, void** args);
MethodInfo m6312_MI = 
{
	"get_Flags", (methodPointerType)&m6312, &t917_TI, &t1237_0_0_0, RuntimeInvoker_t1237, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3387, NULL, (methodPointerType)NULL};
extern Il2CppType t1237_0_0_0;
static ParameterInfo t917_m6313_ParameterInfos[] = 
{
	{"value", 0, 134221882, &EmptyCustomAttributesCache, &t1237_0_0_0},
};
extern TypeInfo t917_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6313_MI = 
{
	"set_Flags", (methodPointerType)&m6313, &t917_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t917_m6313_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3388, NULL, (methodPointerType)NULL};
static MethodInfo* t917_MIs[] =
{
	&m6309_MI,
	&m6310_MI,
	&m6311_MI,
	&m6312_MI,
	&m6313_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t917_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t917_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t917__CustomAttributeCache = {
1,
NULL,
&t917_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t917_0_0_0;
extern Il2CppType t917_1_0_0;
extern TypeInfo t25_TI;
struct t917;
extern TypeInfo t917_TI;
extern CustomAttributesCache t917__CustomAttributeCache;
TypeInfo t917_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CspParameters", "System.Security.Cryptography", t917_MIs, t917_PIs, t917_FIs, NULL, &t25_TI, NULL, NULL, &t917_TI, NULL, t917_VT, &t917__CustomAttributeCache, &t917_TI, &t917_0_0_0, &t917_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t917), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 5, 1, 5, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1237_TI;
#include "t1237MD.h"



// Metadata Definition System.Security.Cryptography.CspProviderFlags
extern Il2CppType t134_0_0_1542;
FieldInfo t1237_f1_FieldInfo = 
{
	"value__", &t134_0_0_1542, &t1237_TI, offsetof(t1237, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t1237_0_0_32854;
FieldInfo t1237_f2_FieldInfo = 
{
	"UseMachineKeyStore", &t1237_0_0_32854, &t1237_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1237_0_0_32854;
FieldInfo t1237_f3_FieldInfo = 
{
	"UseDefaultKeyContainer", &t1237_0_0_32854, &t1237_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1237_0_0_32854;
FieldInfo t1237_f4_FieldInfo = 
{
	"UseExistingKey", &t1237_0_0_32854, &t1237_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1237_0_0_32854;
FieldInfo t1237_f5_FieldInfo = 
{
	"NoFlags", &t1237_0_0_32854, &t1237_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1237_0_0_32854;
FieldInfo t1237_f6_FieldInfo = 
{
	"NoPrompt", &t1237_0_0_32854, &t1237_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1237_0_0_32854;
FieldInfo t1237_f7_FieldInfo = 
{
	"UseArchivableKey", &t1237_0_0_32854, &t1237_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1237_0_0_32854;
FieldInfo t1237_f8_FieldInfo = 
{
	"UseNonExportableKey", &t1237_0_0_32854, &t1237_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1237_0_0_32854;
FieldInfo t1237_f9_FieldInfo = 
{
	"UseUserProtectedKey", &t1237_0_0_32854, &t1237_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1237_FIs[] =
{
	&t1237_f1_FieldInfo,
	&t1237_f2_FieldInfo,
	&t1237_f3_FieldInfo,
	&t1237_f4_FieldInfo,
	&t1237_f5_FieldInfo,
	&t1237_f6_FieldInfo,
	&t1237_f7_FieldInfo,
	&t1237_f8_FieldInfo,
	&t1237_f9_FieldInfo,
	NULL
};
static const int32_t t1237_f2_DefaultValueData = 1;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1237_f2_DefaultValue = 
{
	&t1237_f2_FieldInfo, { (char*)&t1237_f2_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1237_f3_DefaultValueData = 2;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1237_f3_DefaultValue = 
{
	&t1237_f3_FieldInfo, { (char*)&t1237_f3_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1237_f4_DefaultValueData = 8;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1237_f4_DefaultValue = 
{
	&t1237_f4_FieldInfo, { (char*)&t1237_f4_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1237_f5_DefaultValueData = 0;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1237_f5_DefaultValue = 
{
	&t1237_f5_FieldInfo, { (char*)&t1237_f5_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1237_f6_DefaultValueData = 64;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1237_f6_DefaultValue = 
{
	&t1237_f6_FieldInfo, { (char*)&t1237_f6_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1237_f7_DefaultValueData = 16;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1237_f7_DefaultValue = 
{
	&t1237_f7_FieldInfo, { (char*)&t1237_f7_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1237_f8_DefaultValueData = 4;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1237_f8_DefaultValue = 
{
	&t1237_f8_FieldInfo, { (char*)&t1237_f8_DefaultValueData, &t134_0_0_0 }};
static const int32_t t1237_f9_DefaultValueData = 32;
extern Il2CppType t134_0_0_0;
static Il2CppFieldDefaultValueEntry t1237_f9_DefaultValue = 
{
	&t1237_f9_FieldInfo, { (char*)&t1237_f9_DefaultValueData, &t134_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1237_FDVs[] = 
{
	&t1237_f2_DefaultValue,
	&t1237_f3_DefaultValue,
	&t1237_f4_DefaultValue,
	&t1237_f5_DefaultValue,
	&t1237_f6_DefaultValue,
	&t1237_f7_DefaultValue,
	&t1237_f8_DefaultValue,
	&t1237_f9_DefaultValue,
	NULL
};
static MethodInfo* t1237_MIs[] =
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
static MethodInfo* t1237_VT[] =
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
static Il2CppInterfaceOffsetPair t1237_IOs[] = 
{
	{ &t141_TI, 4},
	{ &t142_TI, 5},
	{ &t143_TI, 21},
};
extern TypeInfo t435_TI;
extern MethodInfo m1830_MI;
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1237_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
CustomAttributesCache t1237__CustomAttributeCache = {
2,
NULL,
&t1237_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1237_0_0_0;
extern Il2CppType t1237_1_0_0;
extern TypeInfo t15_TI;
extern TypeInfo t134_TI;
extern TypeInfo t134_TI;
extern CustomAttributesCache t1237__CustomAttributeCache;
TypeInfo t1237_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CspProviderFlags", "System.Security.Cryptography", t1237_MIs, NULL, t1237_FIs, NULL, &t15_TI, NULL, NULL, &t134_TI, NULL, t1237_VT, &t1237__CustomAttributeCache, &t134_TI, &t1237_0_0_0, &t1237_1_0_0, t1237_IOs, NULL, NULL, t1237_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1237)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 9, 0, 0, 23, 0, 3};
#include "t1238.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1238_TI;
#include "t1238MD.h"

#include "t919.h"
#include "t1429.h"
#include "t1436.h"
extern TypeInfo t919_TI;
extern TypeInfo t123_TI;
extern TypeInfo t122_TI;
extern TypeInfo t25_TI;
extern TypeInfo t876_TI;
extern TypeInfo t462_TI;
extern TypeInfo t165_TI;
extern TypeInfo t445_TI;
extern TypeInfo t1238_TI;
extern TypeInfo t1235_TI;
extern TypeInfo t1228_TI;
extern TypeInfo t1229_TI;
extern TypeInfo t1239_TI;
extern TypeInfo t1443_TI;
#include "t919MD.h"
extern MethodInfo m8329_MI;
extern MethodInfo m4281_MI;
extern MethodInfo m489_MI;
extern MethodInfo m4419_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m6316_MI;
extern MethodInfo m6302_MI;
extern MethodInfo m6317_MI;
extern MethodInfo m6573_MI;
extern MethodInfo m6386_MI;
extern MethodInfo m8330_MI;
extern MethodInfo m4417_MI;
extern MethodInfo m8331_MI;
extern MethodInfo m4234_MI;
extern FieldInfo t1443_f13_FieldInfo;
extern FieldInfo t1443_f14_FieldInfo;


extern MethodInfo m6314_MI;
 void m6314 (t1238 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6314_MI);
	{
		m6573(__this, &m6573_MI);
		__this->f2 = ((int32_t)64);
		__this->f0 = ((int32_t)64);
		__this->f6 = 8;
		__this->f5 = ((t1228*)SZArrayNew(InitializedTypeInfo(&t1228_TI), 1));
		t1228* L_0 = (__this->f5);
		t1229 * L_1 = (t1229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1229_TI));
		m6386(L_1, ((int32_t)64), ((int32_t)64), 0, &m6386_MI);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((t1229 **)(t1229 **)SZArrayLdElema(L_0, 0)) = (t1229 *)L_1;
		__this->f4 = ((t1228*)SZArrayNew(InitializedTypeInfo(&t1228_TI), 1));
		t1228* L_2 = (__this->f4);
		t1229 * L_3 = (t1229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1229_TI));
		m6386(L_3, ((int32_t)64), ((int32_t)64), 0, &m6386_MI);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((t1229 **)(t1229 **)SZArrayLdElema(L_2, 0)) = (t1229 *)L_3;
		return;
	}
}
extern MethodInfo m6315_MI;
 void m6315 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6315_MI);
	{
		t1239* L_0 = (t1239*)GenArrayNew2(InitializedTypeInfo(&t1239_TI), 4, 8);
		t1239* L_1 = L_0;
		m4417(NULL, (t122 *)(t122 *)L_1, LoadFieldToken(&t1443_f13_FieldInfo), &m4417_MI);
		((t1238_SFs*)InitializedTypeInfo(&t1238_TI)->static_fields)->f10 = L_1;
		t1239* L_2 = (t1239*)GenArrayNew2(InitializedTypeInfo(&t1239_TI), ((int32_t)12), 8);
		t1239* L_3 = L_2;
		m4417(NULL, (t122 *)(t122 *)L_3, LoadFieldToken(&t1443_f14_FieldInfo), &m4417_MI);
		((t1238_SFs*)InitializedTypeInfo(&t1238_TI)->static_fields)->f11 = L_3;
		return;
	}
}
extern MethodInfo m6316_MI;
 bool m6316 (t25 * __this, t876* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6316_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		if (p0)
		{
			goto IL_0013;
		}
	}
	{
		t27* L_0 = m4419(NULL, (t27*) &_stringLiteral1196, &m4419_MI);
		t1235 * L_1 = (t1235 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1235_TI));
		m6302(L_1, L_0, &m6302_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		NullCheck(p0);
		if ((((int32_t)(((int32_t)(((t122 *)p0)->max_length)))) == ((int32_t)8)))
		{
			goto IL_0029;
		}
	}
	{
		t27* L_2 = m4419(NULL, (t27*) &_stringLiteral1193, &m4419_MI);
		t1235 * L_3 = (t1235 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1235_TI));
		m6302(L_3, L_2, &m6302_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		V_0 = 0;
		goto IL_0058;
	}

IL_002d:
	{
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, V_0);
		V_3 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, V_0))|((int32_t)17)));
		if ((((int32_t)V_3) == ((int32_t)((int32_t)17))))
		{
			goto IL_0050;
		}
	}
	{
		if ((((int32_t)V_3) == ((int32_t)((int32_t)31))))
		{
			goto IL_0050;
		}
	}
	{
		if ((((int32_t)V_3) == ((int32_t)((int32_t)241))))
		{
			goto IL_0050;
		}
	}
	{
		if ((((int32_t)V_3) == ((int32_t)((int32_t)255))))
		{
			goto IL_0050;
		}
	}
	{
		goto IL_0052;
	}

IL_0050:
	{
		goto IL_0054;
	}

IL_0052:
	{
		return 0;
	}

IL_0054:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0058:
	{
		NullCheck(p0);
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((t122 *)p0)->max_length))))))
		{
			goto IL_002d;
		}
	}
	{
		V_1 = 0;
		goto IL_008f;
	}

IL_0062:
	{
		V_2 = 0;
		goto IL_007f;
	}

IL_0066:
	{
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, V_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1238_TI));
		NullCheck((((t1238_SFs*)InitializedTypeInfo(&t1238_TI)->static_fields)->f10));
		uint8_t L_4 = GenArrayGet2((((t1238_SFs*)InitializedTypeInfo(&t1238_TI)->static_fields)->f10), V_1, V_2, uint8_t);;
		if ((((int32_t)((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, V_2))^L_4))) <= ((int32_t)1)))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_0085;
	}

IL_007b:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_007f:
	{
		NullCheck(p0);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t122 *)p0)->max_length))))))
		{
			goto IL_0066;
		}
	}

IL_0085:
	{
		if ((((uint32_t)V_2) != ((uint32_t)8)))
		{
			goto IL_008b;
		}
	}
	{
		return 1;
	}

IL_008b:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_008f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1238_TI));
		NullCheck((((t1238_SFs*)InitializedTypeInfo(&t1238_TI)->static_fields)->f10));
		int32_t L_5 = m4234((((t1238_SFs*)InitializedTypeInfo(&t1238_TI)->static_fields)->f10), &m4234_MI);
		if ((((int32_t)V_1) < ((int32_t)((int32_t)(L_5>>3)))))
		{
			goto IL_0062;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m6317_MI;
 bool m6317 (t25 * __this, t876* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6317_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		if (p0)
		{
			goto IL_0013;
		}
	}
	{
		t27* L_0 = m4419(NULL, (t27*) &_stringLiteral1196, &m4419_MI);
		t1235 * L_1 = (t1235 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1235_TI));
		m6302(L_1, L_0, &m6302_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		NullCheck(p0);
		if ((((int32_t)(((int32_t)(((t122 *)p0)->max_length)))) == ((int32_t)8)))
		{
			goto IL_0029;
		}
	}
	{
		t27* L_2 = m4419(NULL, (t27*) &_stringLiteral1193, &m4419_MI);
		t1235 * L_3 = (t1235 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1235_TI));
		m6302(L_3, L_2, &m6302_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		V_0 = 0;
		goto IL_0058;
	}

IL_002d:
	{
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, V_0);
		V_3 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, V_0))|((int32_t)17)));
		if ((((int32_t)V_3) == ((int32_t)((int32_t)17))))
		{
			goto IL_0050;
		}
	}
	{
		if ((((int32_t)V_3) == ((int32_t)((int32_t)31))))
		{
			goto IL_0050;
		}
	}
	{
		if ((((int32_t)V_3) == ((int32_t)((int32_t)241))))
		{
			goto IL_0050;
		}
	}
	{
		if ((((int32_t)V_3) == ((int32_t)((int32_t)255))))
		{
			goto IL_0050;
		}
	}
	{
		goto IL_0052;
	}

IL_0050:
	{
		goto IL_0054;
	}

IL_0052:
	{
		return 0;
	}

IL_0054:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0058:
	{
		NullCheck(p0);
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((t122 *)p0)->max_length))))))
		{
			goto IL_002d;
		}
	}
	{
		V_1 = 0;
		goto IL_008f;
	}

IL_0062:
	{
		V_2 = 0;
		goto IL_007f;
	}

IL_0066:
	{
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, V_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1238_TI));
		NullCheck((((t1238_SFs*)InitializedTypeInfo(&t1238_TI)->static_fields)->f11));
		uint8_t L_4 = GenArrayGet2((((t1238_SFs*)InitializedTypeInfo(&t1238_TI)->static_fields)->f11), V_1, V_2, uint8_t);;
		if ((((int32_t)((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, V_2))^L_4))) <= ((int32_t)1)))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_0085;
	}

IL_007b:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_007f:
	{
		NullCheck(p0);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t122 *)p0)->max_length))))))
		{
			goto IL_0066;
		}
	}

IL_0085:
	{
		if ((((uint32_t)V_2) != ((uint32_t)8)))
		{
			goto IL_008b;
		}
	}
	{
		return 1;
	}

IL_008b:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_008f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1238_TI));
		NullCheck((((t1238_SFs*)InitializedTypeInfo(&t1238_TI)->static_fields)->f11));
		int32_t L_5 = m4234((((t1238_SFs*)InitializedTypeInfo(&t1238_TI)->static_fields)->f11), &m4234_MI);
		if ((((int32_t)V_1) < ((int32_t)((int32_t)(L_5>>3)))))
		{
			goto IL_0062;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m6318_MI;
 t876* m6318 (t1238 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6318_MI);
	{
		t876* L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(&m8329_MI, __this);
	}

IL_000e:
	{
		t876* L_1 = (__this->f3);
		NullCheck(L_1);
		t25 * L_2 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4281_MI, L_1);
		return ((t876*)Castclass(L_2, InitializedTypeInfo(&t876_TI)));
	}
}
extern MethodInfo m6319_MI;
 void m6319 (t1238 * __this, t876* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6319_MI);
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral1192, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		NullCheck(p0);
		if ((((int32_t)(((int32_t)(((t122 *)p0)->max_length)))) == ((int32_t)8)))
		{
			goto IL_0024;
		}
	}
	{
		t27* L_1 = m4419(NULL, (t27*) &_stringLiteral1193, &m4419_MI);
		t445 * L_2 = (t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t445_TI));
		m2409(L_2, L_1, &m2409_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1238_TI));
		bool L_3 = m6316(NULL, p0, &m6316_MI);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		t27* L_4 = m4419(NULL, (t27*) &_stringLiteral1194, &m4419_MI);
		t1235 * L_5 = (t1235 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1235_TI));
		m6302(L_5, L_4, &m6302_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1238_TI));
		bool L_6 = m6317(NULL, p0, &m6317_MI);
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		t27* L_7 = m4419(NULL, (t27*) &_stringLiteral1195, &m4419_MI);
		t1235 * L_8 = (t1235 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1235_TI));
		m6302(L_8, L_7, &m6302_MI);
		il2cpp_codegen_raise_exception (L_8);
	}

IL_0054:
	{
		NullCheck(p0);
		t25 * L_9 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4281_MI, p0);
		__this->f3 = ((t876*)Castclass(L_9, InitializedTypeInfo(&t876_TI)));
		return;
	}
}
// Metadata Definition System.Security.Cryptography.DES
extern Il2CppType t1239_0_0_51;
FieldInfo t1238_f10_FieldInfo = 
{
	"weakKeys", &t1239_0_0_51, &t1238_TI, offsetof(t1238_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1239_0_0_51;
FieldInfo t1238_f11_FieldInfo = 
{
	"semiWeakKeys", &t1239_0_0_51, &t1238_TI, offsetof(t1238_SFs, f11), &EmptyCustomAttributesCache};
static FieldInfo* t1238_FIs[] =
{
	&t1238_f10_FieldInfo,
	&t1238_f11_FieldInfo,
	NULL
};
extern MethodInfo m6318_MI;
extern MethodInfo m6319_MI;
static PropertyInfo t1238____Key_PropertyInfo = 
{
	&t1238_TI, "Key", &m6318_MI, &m6319_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1238_PIs[] =
{
	&t1238____Key_PropertyInfo,
	NULL
};
extern TypeInfo t1238_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6314_MI = 
{
	".ctor", (methodPointerType)&m6314, &t1238_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3389, NULL, (methodPointerType)NULL};
extern TypeInfo t1238_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6315_MI = 
{
	".cctor", (methodPointerType)&m6315, &t1238_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3390, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
static ParameterInfo t1238_m6316_ParameterInfos[] = 
{
	{"rgbKey", 0, 134221883, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t1238_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6316_MI = 
{
	"IsWeakKey", (methodPointerType)&m6316, &t1238_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t1238_m6316_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3391, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
static ParameterInfo t1238_m6317_ParameterInfos[] = 
{
	{"rgbKey", 0, 134221884, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t1238_TI;
extern Il2CppType t125_0_0_0;
extern void* RuntimeInvoker_t125_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6317_MI = 
{
	"IsSemiWeakKey", (methodPointerType)&m6317, &t1238_TI, &t125_0_0_0, RuntimeInvoker_t125_t25, t1238_m6317_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3392, NULL, (methodPointerType)NULL};
extern TypeInfo t1238_TI;
extern Il2CppType t876_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6318_MI = 
{
	"get_Key", (methodPointerType)&m6318, &t1238_TI, &t876_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 3393, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
static ParameterInfo t1238_m6319_ParameterInfos[] = 
{
	{"value", 0, 134221885, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t1238_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6319_MI = 
{
	"set_Key", (methodPointerType)&m6319, &t1238_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1238_m6319_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 11, 1, false, false, 3394, NULL, (methodPointerType)NULL};
static MethodInfo* t1238_MIs[] =
{
	&m6314_MI,
	&m6315_MI,
	&m6316_MI,
	&m6317_MI,
	&m6318_MI,
	&m6319_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m6575_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6574_MI;
extern MethodInfo m6577_MI;
extern MethodInfo m6578_MI;
extern MethodInfo m6579_MI;
extern MethodInfo m6580_MI;
extern MethodInfo m6581_MI;
extern MethodInfo m6318_MI;
extern MethodInfo m6319_MI;
extern MethodInfo m6584_MI;
extern MethodInfo m6585_MI;
extern MethodInfo m6586_MI;
extern MethodInfo m6587_MI;
extern MethodInfo m6588_MI;
extern MethodInfo m6589_MI;
extern MethodInfo m6590_MI;
static MethodInfo* t1238_VT[] =
{
	&m455_MI,
	&m6575_MI,
	&m456_MI,
	&m457_MI,
	&m6574_MI,
	&m6577_MI,
	&m6578_MI,
	&m6579_MI,
	&m6580_MI,
	&m6581_MI,
	&m6318_MI,
	&m6319_MI,
	&m6584_MI,
	&m6585_MI,
	&m6586_MI,
	&m6587_MI,
	&m6588_MI,
	&m6589_MI,
	&m6590_MI,
	NULL,
	NULL,
	NULL,
};
extern TypeInfo t167_TI;
static Il2CppInterfaceOffsetPair t1238_IOs[] = 
{
	{ &t167_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1238_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1238__CustomAttributeCache = {
1,
NULL,
&t1238_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1238_0_0_0;
extern Il2CppType t1238_1_0_0;
extern TypeInfo t919_TI;
struct t1238;
extern TypeInfo t1238_TI;
extern CustomAttributesCache t1238__CustomAttributeCache;
TypeInfo t1238_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DES", "System.Security.Cryptography", t1238_MIs, t1238_PIs, t1238_FIs, NULL, &t919_TI, NULL, NULL, &t1238_TI, NULL, t1238_VT, &t1238__CustomAttributeCache, &t1238_TI, &t1238_0_0_0, &t1238_1_0_0, t1238_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1238), 0, -1, sizeof(t1238_SFs), 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, true, true, false, false, 6, 1, 2, 0, 0, 22, 0, 1};
#include "t1240.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1240_TI;
#include "t1240MD.h"

#include "t1437.h"
#include "t1423.h"
#include "t1425.h"
#include "t1430.h"
#include "t923.h"
extern TypeInfo t1240_TI;
extern TypeInfo t1238_TI;
extern TypeInfo t1235_TI;
extern TypeInfo t122_TI;
extern TypeInfo t25_TI;
extern TypeInfo t876_TI;
extern TypeInfo t462_TI;
extern TypeInfo t904_TI;
extern TypeInfo t176_TI;
extern TypeInfo t1443_TI;
extern TypeInfo t1355_TI;
extern TypeInfo t923_TI;
#include "t923MD.h"
#include "t908MD.h"
extern MethodInfo m4699_MI;
extern MethodInfo m6328_MI;
extern MethodInfo m6316_MI;
extern MethodInfo m6317_MI;
extern MethodInfo m4419_MI;
extern MethodInfo m6302_MI;
extern MethodInfo m4281_MI;
extern MethodInfo m6325_MI;
extern MethodInfo m4417_MI;
extern MethodInfo m6324_MI;
extern MethodInfo m4279_MI;
extern MethodInfo m7020_MI;
extern MethodInfo m6322_MI;
extern MethodInfo m6323_MI;
extern MethodInfo m6326_MI;
extern MethodInfo m4624_MI;
extern FieldInfo t1443_f15_FieldInfo;
extern FieldInfo t1443_f16_FieldInfo;
extern FieldInfo t1443_f17_FieldInfo;
extern FieldInfo t1443_f18_FieldInfo;
extern FieldInfo t1443_f19_FieldInfo;
extern FieldInfo t1443_f20_FieldInfo;


extern MethodInfo m6320_MI;
 void m6320 (t1240 * __this, t919 * p0, bool p1, t876* p2, t876* p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6320_MI);
	t876* V_0 = {0};
	t27* V_1 = {0};
	{
		m4699(__this, p0, p1, p3, &m4699_MI);
		V_0 = (t876*)NULL;
		if (p2)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		t876* L_0 = m6328(NULL, &m6328_MI);
		p2 = L_0;
		V_0 = p2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1238_TI));
		bool L_1 = m6316(NULL, p2, &m6316_MI);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1238_TI));
		bool L_2 = m6317(NULL, p2, &m6317_MI);
		if (!L_2)
		{
			goto IL_003c;
		}
	}

IL_002a:
	{
		t27* L_3 = m4419(NULL, (t27*) &_stringLiteral1197, &m4419_MI);
		V_1 = L_3;
		t1235 * L_4 = (t1235 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1235_TI));
		m6302(L_4, V_1, &m6302_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_003c:
	{
		if (V_0)
		{
			goto IL_004b;
		}
	}
	{
		NullCheck(p2);
		t25 * L_5 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4281_MI, p2);
		V_0 = ((t876*)Castclass(L_5, InitializedTypeInfo(&t876_TI)));
	}

IL_004b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		__this->f16 = ((t876*)SZArrayNew(InitializedTypeInfo(&t876_TI), ((int32_t)((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f13)*((int32_t)16)))));
		__this->f17 = ((t876*)SZArrayNew(InitializedTypeInfo(&t876_TI), (((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f15)));
		__this->f18 = ((t904*)SZArrayNew(InitializedTypeInfo(&t904_TI), ((int32_t)((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f15)/4))));
		m6325(__this, V_0, &m6325_MI);
		return;
	}
}
extern MethodInfo m6321_MI;
 void m6321 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6321_MI);
	{
		((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f12 = ((int32_t)64);
		((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f13 = ((int32_t)((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f12)/8));
		((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f14 = ((int32_t)64);
		((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f15 = ((int32_t)((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f14)/8));
		t904* L_0 = ((t904*)SZArrayNew(InitializedTypeInfo(&t904_TI), ((int32_t)512)));
		m4417(NULL, (t122 *)(t122 *)L_0, LoadFieldToken(&t1443_f15_FieldInfo), &m4417_MI);
		((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19 = L_0;
		t876* L_1 = ((t876*)SZArrayNew(InitializedTypeInfo(&t876_TI), ((int32_t)56)));
		m4417(NULL, (t122 *)(t122 *)L_1, LoadFieldToken(&t1443_f16_FieldInfo), &m4417_MI);
		((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f20 = L_1;
		t876* L_2 = ((t876*)SZArrayNew(InitializedTypeInfo(&t876_TI), ((int32_t)16)));
		m4417(NULL, (t122 *)(t122 *)L_2, LoadFieldToken(&t1443_f17_FieldInfo), &m4417_MI);
		((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f21 = L_2;
		t876* L_3 = ((t876*)SZArrayNew(InitializedTypeInfo(&t876_TI), ((int32_t)48)));
		m4417(NULL, (t122 *)(t122 *)L_3, LoadFieldToken(&t1443_f18_FieldInfo), &m4417_MI);
		((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f22 = L_3;
		t904* L_4 = ((t904*)SZArrayNew(InitializedTypeInfo(&t904_TI), ((int32_t)512)));
		m4417(NULL, (t122 *)(t122 *)L_4, LoadFieldToken(&t1443_f19_FieldInfo), &m4417_MI);
		((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f23 = L_4;
		t904* L_5 = ((t904*)SZArrayNew(InitializedTypeInfo(&t904_TI), ((int32_t)512)));
		m4417(NULL, (t122 *)(t122 *)L_5, LoadFieldToken(&t1443_f20_FieldInfo), &m4417_MI);
		((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f24 = L_5;
		return;
	}
}
extern MethodInfo m6322_MI;
 uint32_t m6322 (t1240 * __this, uint32_t p0, int32_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6322_MI);
	uint32_t V_0 = 0;
	t876* V_1 = {0};
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		V_0 = 0;
		t876* L_0 = (__this->f16);
		V_1 = L_0;
		V_2 = ((int32_t)(p1<<3));
		V_3 = ((int32_t)(((int32_t)((uint32_t)p0>>1))|((uint32_t)(p0<<((int32_t)31)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		int32_t L_1 = V_2;
		V_2 = ((int32_t)(L_1+1));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_1);
		NullCheck((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(0+((int32_t)(((int32_t)(((int32_t)((uint32_t)V_3>>((int32_t)26)))^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, L_1))))&((int32_t)63))))))));
		V_0 = ((int32_t)(V_0|(*(uint32_t*)(uint32_t*)SZArrayLdElema((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(0+((int32_t)(((int32_t)(((int32_t)((uint32_t)V_3>>((int32_t)26)))^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, L_1))))&((int32_t)63)))))))))));
		int32_t L_2 = V_2;
		V_2 = ((int32_t)(L_2+1));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_2);
		NullCheck((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(((int32_t)64)+((int32_t)(((int32_t)(((int32_t)((uint32_t)V_3>>((int32_t)22)))^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, L_2))))&((int32_t)63))))))));
		V_0 = ((int32_t)(V_0|(*(uint32_t*)(uint32_t*)SZArrayLdElema((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(((int32_t)64)+((int32_t)(((int32_t)(((int32_t)((uint32_t)V_3>>((int32_t)22)))^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, L_2))))&((int32_t)63)))))))))));
		int32_t L_3 = V_2;
		V_2 = ((int32_t)(L_3+1));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_3);
		NullCheck((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(((int32_t)128)+((int32_t)(((int32_t)(((int32_t)((uint32_t)V_3>>((int32_t)18)))^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, L_3))))&((int32_t)63))))))));
		V_0 = ((int32_t)(V_0|(*(uint32_t*)(uint32_t*)SZArrayLdElema((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(((int32_t)128)+((int32_t)(((int32_t)(((int32_t)((uint32_t)V_3>>((int32_t)18)))^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, L_3))))&((int32_t)63)))))))))));
		int32_t L_4 = V_2;
		V_2 = ((int32_t)(L_4+1));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_4);
		NullCheck((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(((int32_t)192)+((int32_t)(((int32_t)(((int32_t)((uint32_t)V_3>>((int32_t)14)))^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, L_4))))&((int32_t)63))))))));
		V_0 = ((int32_t)(V_0|(*(uint32_t*)(uint32_t*)SZArrayLdElema((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(((int32_t)192)+((int32_t)(((int32_t)(((int32_t)((uint32_t)V_3>>((int32_t)14)))^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, L_4))))&((int32_t)63)))))))))));
		int32_t L_5 = V_2;
		V_2 = ((int32_t)(L_5+1));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_5);
		NullCheck((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(((int32_t)256)+((int32_t)(((int32_t)(((int32_t)((uint32_t)V_3>>((int32_t)10)))^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, L_5))))&((int32_t)63))))))));
		V_0 = ((int32_t)(V_0|(*(uint32_t*)(uint32_t*)SZArrayLdElema((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(((int32_t)256)+((int32_t)(((int32_t)(((int32_t)((uint32_t)V_3>>((int32_t)10)))^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, L_5))))&((int32_t)63)))))))))));
		int32_t L_6 = V_2;
		V_2 = ((int32_t)(L_6+1));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_6);
		NullCheck((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(((int32_t)320)+((int32_t)(((int32_t)(((int32_t)((uint32_t)V_3>>6))^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, L_6))))&((int32_t)63))))))));
		V_0 = ((int32_t)(V_0|(*(uint32_t*)(uint32_t*)SZArrayLdElema((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(((int32_t)320)+((int32_t)(((int32_t)(((int32_t)((uint32_t)V_3>>6))^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, L_6))))&((int32_t)63)))))))))));
		int32_t L_7 = V_2;
		V_2 = ((int32_t)(L_7+1));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_7);
		NullCheck((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(((int32_t)384)+((int32_t)(((int32_t)(((int32_t)((uint32_t)V_3>>2))^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, L_7))))&((int32_t)63))))))));
		V_0 = ((int32_t)(V_0|(*(uint32_t*)(uint32_t*)SZArrayLdElema((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(((int32_t)384)+((int32_t)(((int32_t)(((int32_t)((uint32_t)V_3>>2))^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, L_7))))&((int32_t)63)))))))))));
		V_3 = ((int32_t)(((uint32_t)(p0<<1))|((int32_t)((uint32_t)p0>>((int32_t)31)))));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, V_2);
		NullCheck((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(((int32_t)448)+((int32_t)(((int32_t)(V_3^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, V_2))))&((int32_t)63))))))));
		V_0 = ((int32_t)(V_0|(*(uint32_t*)(uint32_t*)SZArrayLdElema((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f19), (((uintptr_t)((int32_t)(((int32_t)448)+((int32_t)(((int32_t)(V_3^(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_1, V_2))))&((int32_t)63)))))))))));
		return V_0;
	}
}
extern MethodInfo m6323_MI;
 void m6323 (t25 * __this, t876* p0, t876* p1, t904* p2, bool p3, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6323_MI);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		if (!p3)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1355_TI));
		if (!(((t1355_SFs*)InitializedTypeInfo(&t1355_TI)->static_fields)->f1))
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		m6324(NULL, p0, &m6324_MI);
	}

IL_0010:
	{
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 0);
		V_0 = ((uint8_t)(((uint8_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, 0))>>4))<<1));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 0);
		V_1 = ((int32_t)(((int32_t)32)+((uint8_t)(((uint8_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, 0))&((int32_t)15)))<<1))));
		int32_t L_0 = V_0;
		V_0 = ((int32_t)(L_0+1));
		NullCheck(p2);
		IL2CPP_ARRAY_BOUNDS_CHECK(p2, L_0);
		int32_t L_1 = V_1;
		V_1 = ((int32_t)(L_1+1));
		NullCheck(p2);
		IL2CPP_ARRAY_BOUNDS_CHECK(p2, L_1);
		V_2 = ((int32_t)((*(uint32_t*)(uint32_t*)SZArrayLdElema(p2, L_0))|(*(uint32_t*)(uint32_t*)SZArrayLdElema(p2, L_1))));
		NullCheck(p2);
		IL2CPP_ARRAY_BOUNDS_CHECK(p2, V_0);
		NullCheck(p2);
		IL2CPP_ARRAY_BOUNDS_CHECK(p2, V_1);
		V_3 = ((int32_t)((*(uint32_t*)(uint32_t*)SZArrayLdElema(p2, V_0))|(*(uint32_t*)(uint32_t*)SZArrayLdElema(p2, V_1))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		V_4 = ((int32_t)((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f15)<<1));
		V_5 = 2;
		V_6 = 1;
		goto IL_0096;
	}

IL_004d:
	{
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, V_6);
		V_7 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, V_6));
		V_0 = ((int32_t)(((int32_t)(V_5<<5))+((int32_t)(((int32_t)(V_7>>4))<<1))));
		V_1 = ((int32_t)(((int32_t)(((int32_t)(V_5+1))<<5))+((int32_t)(((int32_t)(V_7&((int32_t)15)))<<1))));
		int32_t L_2 = V_0;
		V_0 = ((int32_t)(L_2+1));
		NullCheck(p2);
		IL2CPP_ARRAY_BOUNDS_CHECK(p2, L_2);
		int32_t L_3 = V_1;
		V_1 = ((int32_t)(L_3+1));
		NullCheck(p2);
		IL2CPP_ARRAY_BOUNDS_CHECK(p2, L_3);
		V_2 = ((int32_t)(V_2|((int32_t)((*(uint32_t*)(uint32_t*)SZArrayLdElema(p2, L_2))|(*(uint32_t*)(uint32_t*)SZArrayLdElema(p2, L_3))))));
		NullCheck(p2);
		IL2CPP_ARRAY_BOUNDS_CHECK(p2, V_0);
		NullCheck(p2);
		IL2CPP_ARRAY_BOUNDS_CHECK(p2, V_1);
		V_3 = ((int32_t)(V_3|((int32_t)((*(uint32_t*)(uint32_t*)SZArrayLdElema(p2, V_0))|(*(uint32_t*)(uint32_t*)SZArrayLdElema(p2, V_1))))));
		V_5 = ((int32_t)(V_5+2));
		V_6 = ((int32_t)(V_6+1));
	}

IL_0096:
	{
		if ((((int32_t)V_5) < ((int32_t)V_4)))
		{
			goto IL_004d;
		}
	}
	{
		if (p3)
		{
			goto IL_00a6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1355_TI));
		if ((((t1355_SFs*)InitializedTypeInfo(&t1355_TI)->static_fields)->f1))
		{
			goto IL_00e0;
		}
	}

IL_00a6:
	{
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 0)) = (uint8_t)(((uint8_t)V_2));
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 1)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)V_2>>8))));
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 2)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)V_2>>((int32_t)16)))));
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 3)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)V_2>>((int32_t)24)))));
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 4)) = (uint8_t)(((uint8_t)V_3));
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 5);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 5)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)V_3>>8))));
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 6);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 6)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)V_3>>((int32_t)16)))));
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 7);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 7)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)V_3>>((int32_t)24)))));
		goto IL_0118;
	}

IL_00e0:
	{
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 0)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)V_2>>((int32_t)24)))));
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 1)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)V_2>>((int32_t)16)))));
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 2)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)V_2>>8))));
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 3)) = (uint8_t)(((uint8_t)V_2));
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 4)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)V_3>>((int32_t)24)))));
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 5);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 5)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)V_3>>((int32_t)16)))));
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 6);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 6)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)V_3>>8))));
		NullCheck(p1);
		IL2CPP_ARRAY_BOUNDS_CHECK(p1, 7);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p1, 7)) = (uint8_t)(((uint8_t)V_3));
	}

IL_0118:
	{
		return;
	}
}
extern MethodInfo m6324_MI;
 void m6324 (t25 * __this, t876* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6324_MI);
	uint8_t V_0 = 0x0;
	{
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 0);
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, 0));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 3);
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, 0)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, 3));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, 3)) = (uint8_t)V_0;
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 1);
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, 1));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 2);
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, 1)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, 2));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, 2)) = (uint8_t)V_0;
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 4);
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, 4));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 7);
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, 4)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, 7));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 7);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, 7)) = (uint8_t)V_0;
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 5);
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, 5));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 6);
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 5);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, 5)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, 6));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, 6);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(p0, 6)) = (uint8_t)V_0;
		return;
	}
}
extern MethodInfo m6325_MI;
 void m6325 (t1240 * __this, t876* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6325_MI);
	int32_t V_0 = 0;
	t876* V_1 = {0};
	t876* V_2 = {0};
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	t876* V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	uint8_t V_13 = 0x0;
	t876* V_14 = {0};
	int32_t V_15 = 0;
	t876* G_B7_0 = {0};
	int32_t G_B7_1 = 0;
	t876* G_B7_2 = {0};
	t876* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t876* G_B6_2 = {0};
	int32_t G_B8_0 = 0;
	t876* G_B8_1 = {0};
	int32_t G_B8_2 = 0;
	t876* G_B8_3 = {0};
	t876* G_B13_0 = {0};
	int32_t G_B13_1 = 0;
	t876* G_B13_2 = {0};
	t876* G_B12_0 = {0};
	int32_t G_B12_1 = 0;
	t876* G_B12_2 = {0};
	int32_t G_B14_0 = 0;
	t876* G_B14_1 = {0};
	int32_t G_B14_2 = 0;
	t876* G_B14_3 = {0};
	{
		t876* L_0 = (__this->f16);
		t876* L_1 = (__this->f16);
		NullCheck(L_1);
		m4279(NULL, (t122 *)(t122 *)L_0, 0, (((int32_t)(((t122 *)L_1)->max_length))), &m4279_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		NullCheck((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f20));
		V_0 = (((int32_t)(((t122 *)(((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f20))->max_length)));
		V_1 = ((t876*)SZArrayNew(InitializedTypeInfo(&t876_TI), V_0));
		V_2 = ((t876*)SZArrayNew(InitializedTypeInfo(&t876_TI), V_0));
		V_3 = 0;
		V_5 = (((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f20);
		V_6 = 0;
		goto IL_005f;
	}

IL_0038:
	{
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, V_6);
		V_4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(V_5, V_6));
		int32_t L_2 = V_3;
		V_3 = ((int32_t)(L_2+1));
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, ((uint8_t)(V_4>>3)));
		NullCheck(V_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_1, L_2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(V_1, L_2)) = (uint8_t)(((uint8_t)((uint8_t)(((uint8_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, ((uint8_t)(V_4>>3))))>>((int32_t)(((int32_t)(7^((uint8_t)(V_4&7))))&((int32_t)31)))))&1))));
		V_6 = ((int32_t)(V_6+1));
	}

IL_005f:
	{
		NullCheck(V_5);
		if ((((int32_t)V_6) < ((int32_t)(((int32_t)(((t122 *)V_5)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		V_8 = 0;
		goto IL_0140;
	}

IL_006f:
	{
		V_9 = ((int32_t)(V_0>>1));
		V_7 = 0;
		goto IL_00a1;
	}

IL_0079:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		NullCheck((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f21));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f21), V_8);
		V_10 = ((int32_t)(V_7+(*(uint8_t*)(uint8_t*)SZArrayLdElema((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f21), V_8))));
		G_B6_0 = V_1;
		G_B6_1 = V_7;
		G_B6_2 = V_2;
		if ((((int32_t)V_10) >= ((int32_t)V_9)))
		{
			G_B7_0 = V_1;
			G_B7_1 = V_7;
			G_B7_2 = V_2;
			goto IL_0094;
		}
	}
	{
		G_B8_0 = V_10;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		goto IL_0099;
	}

IL_0094:
	{
		G_B8_0 = ((int32_t)(V_10-V_9));
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
	}

IL_0099:
	{
		NullCheck(G_B8_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B8_1, G_B8_0);
		NullCheck(G_B8_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B8_3, G_B8_2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(G_B8_3, G_B8_2)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(G_B8_1, G_B8_0));
		V_7 = ((int32_t)(V_7+1));
	}

IL_00a1:
	{
		if ((((int32_t)V_7) < ((int32_t)V_9)))
		{
			goto IL_0079;
		}
	}
	{
		V_7 = V_9;
		goto IL_00d4;
	}

IL_00ad:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		NullCheck((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f21));
		IL2CPP_ARRAY_BOUNDS_CHECK((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f21), V_8);
		V_11 = ((int32_t)(V_7+(*(uint8_t*)(uint8_t*)SZArrayLdElema((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f21), V_8))));
		G_B12_0 = V_1;
		G_B12_1 = V_7;
		G_B12_2 = V_2;
		if ((((int32_t)V_11) >= ((int32_t)V_0)))
		{
			G_B13_0 = V_1;
			G_B13_1 = V_7;
			G_B13_2 = V_2;
			goto IL_00c7;
		}
	}
	{
		G_B14_0 = V_11;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		G_B14_3 = G_B12_2;
		goto IL_00cc;
	}

IL_00c7:
	{
		G_B14_0 = ((int32_t)(V_11-V_9));
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
		G_B14_3 = G_B13_2;
	}

IL_00cc:
	{
		NullCheck(G_B14_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B14_1, G_B14_0);
		NullCheck(G_B14_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B14_3, G_B14_2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(G_B14_3, G_B14_2)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(G_B14_1, G_B14_0));
		V_7 = ((int32_t)(V_7+1));
	}

IL_00d4:
	{
		if ((((int32_t)V_7) < ((int32_t)V_0)))
		{
			goto IL_00ad;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		V_12 = ((int32_t)(V_8*(((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f13)));
		V_7 = 0;
		V_14 = (((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f22);
		V_15 = 0;
		goto IL_0132;
	}

IL_00f2:
	{
		NullCheck(V_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_14, V_15);
		V_13 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(V_14, V_15));
		NullCheck(V_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_2, V_13);
		if (!(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_2, V_13)))
		{
			goto IL_0126;
		}
	}
	{
		t876* L_3 = (__this->f16);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)(V_12+((int32_t)(V_7/6)))));
		uint8_t* L_4 = ((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, ((int32_t)(V_12+((int32_t)(V_7/6))))));
		*((int8_t*)(L_4)) = (int8_t)(((uint8_t)((int32_t)((*((uint8_t*)L_4))|(((uint8_t)((int32_t)(((int32_t)128)>>((int32_t)(((int32_t)(((int32_t)(V_7%6))+2))&((int32_t)31)))))))))));
	}

IL_0126:
	{
		V_7 = ((int32_t)(V_7+1));
		V_15 = ((int32_t)(V_15+1));
	}

IL_0132:
	{
		NullCheck(V_14);
		if ((((int32_t)V_15) < ((int32_t)(((int32_t)(((t122 *)V_14)->max_length))))))
		{
			goto IL_00f2;
		}
	}
	{
		V_8 = ((int32_t)(V_8+1));
	}

IL_0140:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		if ((((int32_t)V_8) < ((int32_t)((int32_t)((((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f13)*2)))))
		{
			goto IL_006f;
		}
	}
	{
		return;
	}
}
extern MethodInfo m6326_MI;
 void m6326 (t1240 * __this, t876* p0, t876* p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6326_MI);
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		t904* L_0 = (__this->f18);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		m7020(NULL, (t122 *)(t122 *)p0, 0, (t122 *)(t122 *)L_0, 0, (((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f15), &m7020_MI);
		bool L_1 = (__this->f1);
		if (!L_1)
		{
			goto IL_00fe;
		}
	}
	{
		t904* L_2 = (__this->f18);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		V_0 = (*(uint32_t*)(uint32_t*)SZArrayLdElema(L_2, 0));
		t904* L_3 = (__this->f18);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		V_1 = (*(uint32_t*)(uint32_t*)SZArrayLdElema(L_3, 1));
		uint32_t L_4 = m6322(__this, V_1, 0, &m6322_MI);
		V_0 = ((int32_t)(V_0^L_4));
		uint32_t L_5 = m6322(__this, V_0, 1, &m6322_MI);
		V_1 = ((int32_t)(V_1^L_5));
		uint32_t L_6 = m6322(__this, V_1, 2, &m6322_MI);
		V_0 = ((int32_t)(V_0^L_6));
		uint32_t L_7 = m6322(__this, V_0, 3, &m6322_MI);
		V_1 = ((int32_t)(V_1^L_7));
		uint32_t L_8 = m6322(__this, V_1, 4, &m6322_MI);
		V_0 = ((int32_t)(V_0^L_8));
		uint32_t L_9 = m6322(__this, V_0, 5, &m6322_MI);
		V_1 = ((int32_t)(V_1^L_9));
		uint32_t L_10 = m6322(__this, V_1, 6, &m6322_MI);
		V_0 = ((int32_t)(V_0^L_10));
		uint32_t L_11 = m6322(__this, V_0, 7, &m6322_MI);
		V_1 = ((int32_t)(V_1^L_11));
		uint32_t L_12 = m6322(__this, V_1, 8, &m6322_MI);
		V_0 = ((int32_t)(V_0^L_12));
		uint32_t L_13 = m6322(__this, V_0, ((int32_t)9), &m6322_MI);
		V_1 = ((int32_t)(V_1^L_13));
		uint32_t L_14 = m6322(__this, V_1, ((int32_t)10), &m6322_MI);
		V_0 = ((int32_t)(V_0^L_14));
		uint32_t L_15 = m6322(__this, V_0, ((int32_t)11), &m6322_MI);
		V_1 = ((int32_t)(V_1^L_15));
		uint32_t L_16 = m6322(__this, V_1, ((int32_t)12), &m6322_MI);
		V_0 = ((int32_t)(V_0^L_16));
		uint32_t L_17 = m6322(__this, V_0, ((int32_t)13), &m6322_MI);
		V_1 = ((int32_t)(V_1^L_17));
		uint32_t L_18 = m6322(__this, V_1, ((int32_t)14), &m6322_MI);
		V_0 = ((int32_t)(V_0^L_18));
		uint32_t L_19 = m6322(__this, V_0, ((int32_t)15), &m6322_MI);
		V_1 = ((int32_t)(V_1^L_19));
		t904* L_20 = (__this->f18);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_20, 0)) = (uint32_t)V_1;
		t904* L_21 = (__this->f18);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 1);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_21, 1)) = (uint32_t)V_0;
		goto IL_01d9;
	}

IL_00fe:
	{
		t904* L_22 = (__this->f18);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 0);
		V_2 = (*(uint32_t*)(uint32_t*)SZArrayLdElema(L_22, 0));
		t904* L_23 = (__this->f18);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 1);
		V_3 = (*(uint32_t*)(uint32_t*)SZArrayLdElema(L_23, 1));
		uint32_t L_24 = m6322(__this, V_3, ((int32_t)15), &m6322_MI);
		V_2 = ((int32_t)(V_2^L_24));
		uint32_t L_25 = m6322(__this, V_2, ((int32_t)14), &m6322_MI);
		V_3 = ((int32_t)(V_3^L_25));
		uint32_t L_26 = m6322(__this, V_3, ((int32_t)13), &m6322_MI);
		V_2 = ((int32_t)(V_2^L_26));
		uint32_t L_27 = m6322(__this, V_2, ((int32_t)12), &m6322_MI);
		V_3 = ((int32_t)(V_3^L_27));
		uint32_t L_28 = m6322(__this, V_3, ((int32_t)11), &m6322_MI);
		V_2 = ((int32_t)(V_2^L_28));
		uint32_t L_29 = m6322(__this, V_2, ((int32_t)10), &m6322_MI);
		V_3 = ((int32_t)(V_3^L_29));
		uint32_t L_30 = m6322(__this, V_3, ((int32_t)9), &m6322_MI);
		V_2 = ((int32_t)(V_2^L_30));
		uint32_t L_31 = m6322(__this, V_2, 8, &m6322_MI);
		V_3 = ((int32_t)(V_3^L_31));
		uint32_t L_32 = m6322(__this, V_3, 7, &m6322_MI);
		V_2 = ((int32_t)(V_2^L_32));
		uint32_t L_33 = m6322(__this, V_2, 6, &m6322_MI);
		V_3 = ((int32_t)(V_3^L_33));
		uint32_t L_34 = m6322(__this, V_3, 5, &m6322_MI);
		V_2 = ((int32_t)(V_2^L_34));
		uint32_t L_35 = m6322(__this, V_2, 4, &m6322_MI);
		V_3 = ((int32_t)(V_3^L_35));
		uint32_t L_36 = m6322(__this, V_3, 3, &m6322_MI);
		V_2 = ((int32_t)(V_2^L_36));
		uint32_t L_37 = m6322(__this, V_2, 2, &m6322_MI);
		V_3 = ((int32_t)(V_3^L_37));
		uint32_t L_38 = m6322(__this, V_3, 1, &m6322_MI);
		V_2 = ((int32_t)(V_2^L_38));
		uint32_t L_39 = m6322(__this, V_2, 0, &m6322_MI);
		V_3 = ((int32_t)(V_3^L_39));
		t904* L_40 = (__this->f18);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_40, 0)) = (uint32_t)V_3;
		t904* L_41 = (__this->f18);
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 1);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_41, 1)) = (uint32_t)V_2;
	}

IL_01d9:
	{
		t904* L_42 = (__this->f18);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		m7020(NULL, (t122 *)(t122 *)L_42, 0, (t122 *)(t122 *)p1, 0, (((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f15), &m7020_MI);
		return;
	}
}
extern MethodInfo m6327_MI;
 void m6327 (t1240 * __this, t876* p0, t876* p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6327_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		m6323(NULL, p0, p1, (((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f23), 0, &m6323_MI);
		t876* L_0 = (__this->f17);
		m6326(__this, p1, L_0, &m6326_MI);
		t876* L_1 = (__this->f17);
		m6323(NULL, L_1, p1, (((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f24), 1, &m6323_MI);
		return;
	}
}
extern MethodInfo m6328_MI;
 t876* m6328 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6328_MI);
	t876* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		t876* L_0 = m4624(NULL, (((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f13), &m4624_MI);
		V_0 = L_0;
		goto IL_0018;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		t876* L_1 = m4624(NULL, (((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f13), &m4624_MI);
		V_0 = L_1;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1238_TI));
		bool L_2 = m6316(NULL, V_0, &m6316_MI);
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1238_TI));
		bool L_3 = m6317(NULL, V_0, &m6317_MI);
		if (L_3)
		{
			goto IL_000d;
		}
	}
	{
		return V_0;
	}
}
// Metadata Definition System.Security.Cryptography.DESTransform
extern Il2CppType t134_0_0_51;
FieldInfo t1240_f12_FieldInfo = 
{
	"KEY_BIT_SIZE", &t134_0_0_51, &t1240_TI, offsetof(t1240_SFs, f12), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_51;
FieldInfo t1240_f13_FieldInfo = 
{
	"KEY_BYTE_SIZE", &t134_0_0_51, &t1240_TI, offsetof(t1240_SFs, f13), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_51;
FieldInfo t1240_f14_FieldInfo = 
{
	"BLOCK_BIT_SIZE", &t134_0_0_51, &t1240_TI, offsetof(t1240_SFs, f14), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_51;
FieldInfo t1240_f15_FieldInfo = 
{
	"BLOCK_BYTE_SIZE", &t134_0_0_51, &t1240_TI, offsetof(t1240_SFs, f15), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_1;
FieldInfo t1240_f16_FieldInfo = 
{
	"keySchedule", &t876_0_0_1, &t1240_TI, offsetof(t1240, f16), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_1;
FieldInfo t1240_f17_FieldInfo = 
{
	"byteBuff", &t876_0_0_1, &t1240_TI, offsetof(t1240, f17), &EmptyCustomAttributesCache};
extern Il2CppType t904_0_0_1;
FieldInfo t1240_f18_FieldInfo = 
{
	"dwordBuff", &t904_0_0_1, &t1240_TI, offsetof(t1240, f18), &EmptyCustomAttributesCache};
extern Il2CppType t904_0_0_49;
FieldInfo t1240_f19_FieldInfo = 
{
	"spBoxes", &t904_0_0_49, &t1240_TI, offsetof(t1240_SFs, f19), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_49;
FieldInfo t1240_f20_FieldInfo = 
{
	"PC1", &t876_0_0_49, &t1240_TI, offsetof(t1240_SFs, f20), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_49;
FieldInfo t1240_f21_FieldInfo = 
{
	"leftRotTotal", &t876_0_0_49, &t1240_TI, offsetof(t1240_SFs, f21), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_49;
FieldInfo t1240_f22_FieldInfo = 
{
	"PC2", &t876_0_0_49, &t1240_TI, offsetof(t1240_SFs, f22), &EmptyCustomAttributesCache};
extern Il2CppType t904_0_0_51;
FieldInfo t1240_f23_FieldInfo = 
{
	"ipTab", &t904_0_0_51, &t1240_TI, offsetof(t1240_SFs, f23), &EmptyCustomAttributesCache};
extern Il2CppType t904_0_0_51;
FieldInfo t1240_f24_FieldInfo = 
{
	"fpTab", &t904_0_0_51, &t1240_TI, offsetof(t1240_SFs, f24), &EmptyCustomAttributesCache};
static FieldInfo* t1240_FIs[] =
{
	&t1240_f12_FieldInfo,
	&t1240_f13_FieldInfo,
	&t1240_f14_FieldInfo,
	&t1240_f15_FieldInfo,
	&t1240_f16_FieldInfo,
	&t1240_f17_FieldInfo,
	&t1240_f18_FieldInfo,
	&t1240_f19_FieldInfo,
	&t1240_f20_FieldInfo,
	&t1240_f21_FieldInfo,
	&t1240_f22_FieldInfo,
	&t1240_f23_FieldInfo,
	&t1240_f24_FieldInfo,
	NULL
};
extern Il2CppType t919_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t876_0_0_0;
extern Il2CppType t876_0_0_0;
static ParameterInfo t1240_m6320_ParameterInfos[] = 
{
	{"symmAlgo", 0, 134221886, &EmptyCustomAttributesCache, &t919_0_0_0},
	{"encryption", 1, 134221887, &EmptyCustomAttributesCache, &t125_0_0_0},
	{"key", 2, 134221888, &EmptyCustomAttributesCache, &t876_0_0_0},
	{"iv", 3, 134221889, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t1240_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t137_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6320_MI = 
{
	".ctor", (methodPointerType)&m6320, &t1240_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t137_t25_t25, t1240_m6320_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 3395, NULL, (methodPointerType)NULL};
extern TypeInfo t1240_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6321_MI = 
{
	".cctor", (methodPointerType)&m6321, &t1240_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3396, NULL, (methodPointerType)NULL};
extern Il2CppType t176_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t1240_m6322_ParameterInfos[] = 
{
	{"r", 0, 134221890, &EmptyCustomAttributesCache, &t176_0_0_0},
	{"n", 1, 134221891, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1240_TI;
extern Il2CppType t176_0_0_0;
extern void* RuntimeInvoker_t176_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6322_MI = 
{
	"CipherFunct", (methodPointerType)&m6322, &t1240_TI, &t176_0_0_0, RuntimeInvoker_t176_t134_t134, t1240_m6322_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 3397, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
extern Il2CppType t876_0_0_0;
extern Il2CppType t904_0_0_0;
extern Il2CppType t125_0_0_0;
static ParameterInfo t1240_m6323_ParameterInfos[] = 
{
	{"input", 0, 134221892, &EmptyCustomAttributesCache, &t876_0_0_0},
	{"output", 1, 134221893, &EmptyCustomAttributesCache, &t876_0_0_0},
	{"permTab", 2, 134221894, &EmptyCustomAttributesCache, &t904_0_0_0},
	{"preSwap", 3, 134221895, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1240_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m6323_MI = 
{
	"Permutation", (methodPointerType)&m6323, &t1240_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25_t25_t137, t1240_m6323_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 4, false, false, 3398, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
static ParameterInfo t1240_m6324_ParameterInfos[] = 
{
	{"byteBuff", 0, 134221896, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t1240_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6324_MI = 
{
	"BSwap", (methodPointerType)&m6324, &t1240_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1240_m6324_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 3399, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
static ParameterInfo t1240_m6325_ParameterInfos[] = 
{
	{"key", 0, 134221897, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t1240_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6325_MI = 
{
	"SetKey", (methodPointerType)&m6325, &t1240_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1240_m6325_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 3400, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
extern Il2CppType t876_0_0_0;
static ParameterInfo t1240_m6326_ParameterInfos[] = 
{
	{"input", 0, 134221898, &EmptyCustomAttributesCache, &t876_0_0_0},
	{"output", 1, 134221899, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t1240_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6326_MI = 
{
	"ProcessBlock", (methodPointerType)&m6326, &t1240_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1240_m6326_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3401, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
extern Il2CppType t876_0_0_0;
static ParameterInfo t1240_m6327_ParameterInfos[] = 
{
	{"input", 0, 134221900, &EmptyCustomAttributesCache, &t876_0_0_0},
	{"output", 1, 134221901, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t1240_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6327_MI = 
{
	"ECB", (methodPointerType)&m6327, &t1240_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1240_m6327_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 11, 2, false, false, 3402, NULL, (methodPointerType)NULL};
extern TypeInfo t1240_TI;
extern Il2CppType t876_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6328_MI = 
{
	"GetStrongKey", (methodPointerType)&m6328, &t1240_TI, &t876_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 3403, NULL, (methodPointerType)NULL};
static MethodInfo* t1240_MIs[] =
{
	&m6320_MI,
	&m6321_MI,
	&m6322_MI,
	&m6323_MI,
	&m6324_MI,
	&m6325_MI,
	&m6326_MI,
	&m6327_MI,
	&m6328_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m4701_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m4700_MI;
extern MethodInfo m4703_MI;
extern MethodInfo m4710_MI;
extern MethodInfo m4717_MI;
extern MethodInfo m4702_MI;
extern MethodInfo m4703_MI;
extern MethodInfo m4704_MI;
extern MethodInfo m6327_MI;
extern MethodInfo m4705_MI;
extern MethodInfo m4706_MI;
extern MethodInfo m4707_MI;
extern MethodInfo m4708_MI;
extern MethodInfo m4710_MI;
extern MethodInfo m4717_MI;
static MethodInfo* t1240_VT[] =
{
	&m455_MI,
	&m4701_MI,
	&m456_MI,
	&m457_MI,
	&m4700_MI,
	&m4703_MI,
	&m4710_MI,
	&m4717_MI,
	&m4702_MI,
	&m4703_MI,
	&m4704_MI,
	&m6327_MI,
	&m4705_MI,
	&m4706_MI,
	&m4707_MI,
	&m4708_MI,
	&m4710_MI,
	&m4717_MI,
};
extern TypeInfo t167_TI;
extern TypeInfo t910_TI;
static Il2CppInterfaceOffsetPair t1240_IOs[] = 
{
	{ &t167_TI, 4},
	{ &t910_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1240_0_0_0;
extern Il2CppType t1240_1_0_0;
extern TypeInfo t923_TI;
struct t1240;
extern TypeInfo t1240_TI;
TypeInfo t1240_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DESTransform", "System.Security.Cryptography", t1240_MIs, NULL, t1240_FIs, NULL, &t923_TI, NULL, NULL, &t1240_TI, NULL, t1240_VT, &EmptyCustomAttributesCache, &t1240_TI, &t1240_0_0_0, &t1240_1_0_0, t1240_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1240), 0, -1, sizeof(t1240_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, true, true, false, false, 9, 0, 13, 0, 0, 18, 0, 2};
#include "t1241.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1241_TI;
#include "t1241MD.h"

extern TypeInfo t1240_TI;
extern TypeInfo t919_TI;
extern MethodInfo m6314_MI;
extern MethodInfo m6320_MI;
extern MethodInfo m4625_MI;
extern MethodInfo m6328_MI;


extern MethodInfo m6329_MI;
 void m6329 (t1241 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6329_MI);
	{
		m6314(__this, &m6314_MI);
		return;
	}
}
extern MethodInfo m6330_MI;
 t25 * m6330 (t1241 * __this, t876* p0, t876* p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6330_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		t1240 * L_0 = (t1240 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1240_TI));
		m6320(L_0, __this, 1, p0, p1, &m6320_MI);
		return L_0;
	}
}
extern MethodInfo m6331_MI;
 void m6331 (t1241 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6331_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		t876* L_0 = m4625(NULL, (((t1240_SFs*)InitializedTypeInfo(&t1240_TI)->static_fields)->f15), &m4625_MI);
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m6332_MI;
 void m6332 (t1241 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6332_MI);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1240_TI));
		t876* L_0 = m6328(NULL, &m6328_MI);
		__this->f3 = L_0;
		return;
	}
}
// Metadata Definition System.Security.Cryptography.DESCryptoServiceProvider
extern TypeInfo t1241_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6329_MI = 
{
	".ctor", (methodPointerType)&m6329, &t1241_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3404, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
extern Il2CppType t876_0_0_0;
static ParameterInfo t1241_m6330_ParameterInfos[] = 
{
	{"rgbKey", 0, 134221902, &EmptyCustomAttributesCache, &t876_0_0_0},
	{"rgbIV", 1, 134221903, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t1241_TI;
extern Il2CppType t910_0_0_0;
extern void* RuntimeInvoker_t25_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6330_MI = 
{
	"CreateEncryptor", (methodPointerType)&m6330, &t1241_TI, &t910_0_0_0, RuntimeInvoker_t25_t25_t25, t1241_m6330_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 19, 2, false, false, 3405, NULL, (methodPointerType)NULL};
extern TypeInfo t1241_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6331_MI = 
{
	"GenerateIV", (methodPointerType)&m6331, &t1241_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 198, 0, 20, 0, false, false, 3406, NULL, (methodPointerType)NULL};
extern TypeInfo t1241_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6332_MI = 
{
	"GenerateKey", (methodPointerType)&m6332, &t1241_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 198, 0, 21, 0, false, false, 3407, NULL, (methodPointerType)NULL};
static MethodInfo* t1241_MIs[] =
{
	&m6329_MI,
	&m6330_MI,
	&m6331_MI,
	&m6332_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m6575_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6574_MI;
extern MethodInfo m6577_MI;
extern MethodInfo m6578_MI;
extern MethodInfo m6579_MI;
extern MethodInfo m6580_MI;
extern MethodInfo m6581_MI;
extern MethodInfo m6318_MI;
extern MethodInfo m6319_MI;
extern MethodInfo m6584_MI;
extern MethodInfo m6585_MI;
extern MethodInfo m6586_MI;
extern MethodInfo m6587_MI;
extern MethodInfo m6588_MI;
extern MethodInfo m6589_MI;
extern MethodInfo m6590_MI;
extern MethodInfo m6330_MI;
extern MethodInfo m6331_MI;
extern MethodInfo m6332_MI;
static MethodInfo* t1241_VT[] =
{
	&m455_MI,
	&m6575_MI,
	&m456_MI,
	&m457_MI,
	&m6574_MI,
	&m6577_MI,
	&m6578_MI,
	&m6579_MI,
	&m6580_MI,
	&m6581_MI,
	&m6318_MI,
	&m6319_MI,
	&m6584_MI,
	&m6585_MI,
	&m6586_MI,
	&m6587_MI,
	&m6588_MI,
	&m6589_MI,
	&m6590_MI,
	&m6330_MI,
	&m6331_MI,
	&m6332_MI,
};
extern TypeInfo t167_TI;
static Il2CppInterfaceOffsetPair t1241_IOs[] = 
{
	{ &t167_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1241_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1241__CustomAttributeCache = {
1,
NULL,
&t1241_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1241_0_0_0;
extern Il2CppType t1241_1_0_0;
extern TypeInfo t1238_TI;
struct t1241;
extern TypeInfo t1241_TI;
extern CustomAttributesCache t1241__CustomAttributeCache;
TypeInfo t1241_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DESCryptoServiceProvider", "System.Security.Cryptography", t1241_MIs, NULL, NULL, NULL, &t1238_TI, NULL, NULL, &t1241_TI, NULL, t1241_VT, &t1241__CustomAttributeCache, &t1241_TI, &t1241_0_0_0, &t1241_1_0_0, t1241_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1241), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, true, false, false, false, 4, 0, 0, 0, 0, 22, 0, 1};
#include "t914.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t914_TI;
#include "t914MD.h"

#include "t915.h"
#include "t436.h"
extern TypeInfo t915_TI;
extern TypeInfo t165_TI;
extern TypeInfo t876_TI;
extern TypeInfo t462_TI;
extern TypeInfo t914_TI;
extern TypeInfo t123_TI;
extern TypeInfo t25_TI;
extern TypeInfo t436_TI;
extern TypeInfo t125_TI;
extern TypeInfo t1359_TI;
extern TypeInfo t27_TI;
#include "t925MD.h"
#include "t436MD.h"
extern MethodInfo m6288_MI;
extern MethodInfo m4279_MI;
extern MethodInfo m489_MI;
extern MethodInfo m6293_MI;
extern MethodInfo m7020_MI;
extern MethodInfo m4724_MI;
extern MethodInfo m8332_MI;
extern MethodInfo m6334_MI;
extern MethodInfo m1866_MI;
extern MethodInfo m8333_MI;
extern MethodInfo m3451_MI;
extern MethodInfo m7032_MI;
extern MethodInfo m4719_MI;
extern MethodInfo m7033_MI;
extern MethodInfo m1870_MI;


extern MethodInfo m6333_MI;
 void m6333 (t914 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6333_MI);
	{
		m6288(__this, &m6288_MI);
		return;
	}
}
extern MethodInfo m6334_MI;
 void m6334 (t914 * __this, t915  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6334_MI);
	{
		NullCheck((&p0));
		t876* L_0 = ((&p0)->f6);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		NullCheck((&p0));
		t876* L_1 = ((&p0)->f6);
		NullCheck((&p0));
		t876* L_2 = ((&p0)->f6);
		NullCheck(L_2);
		m4279(NULL, (t122 *)(t122 *)L_1, 0, (((int32_t)(((t122 *)L_2)->max_length))), &m4279_MI);
	}

IL_001f:
	{
		return;
	}
}
extern MethodInfo m6335_MI;
 void m6335 (t914 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6335_MI);
	t915  V_0 = {0};
	t876* V_1 = {0};
	t876* V_2 = {0};
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
		m489(L_0, (t27*) &_stringLiteral1198, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		Initobj (&t915_TI, (&V_0));
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				t876* L_1 = m6293(NULL, p0, (t27*) &_stringLiteral1199, &m6293_MI);
				NullCheck((&V_0));
				(&V_0)->f3 = L_1;
				t876* L_2 = m6293(NULL, p0, (t27*) &_stringLiteral1200, &m6293_MI);
				NullCheck((&V_0));
				(&V_0)->f4 = L_2;
				t876* L_3 = m6293(NULL, p0, (t27*) &_stringLiteral313, &m6293_MI);
				NullCheck((&V_0));
				(&V_0)->f1 = L_3;
				t876* L_4 = m6293(NULL, p0, (t27*) &_stringLiteral1201, &m6293_MI);
				NullCheck((&V_0));
				(&V_0)->f2 = L_4;
				t876* L_5 = m6293(NULL, p0, (t27*) &_stringLiteral1202, &m6293_MI);
				NullCheck((&V_0));
				(&V_0)->f7 = L_5;
				t876* L_6 = m6293(NULL, p0, (t27*) &_stringLiteral1203, &m6293_MI);
				NullCheck((&V_0));
				(&V_0)->f6 = L_6;
				t876* L_7 = m6293(NULL, p0, (t27*) &_stringLiteral1204, &m6293_MI);
				NullCheck((&V_0));
				(&V_0)->f5 = L_7;
				t876* L_8 = m6293(NULL, p0, (t27*) &_stringLiteral1205, &m6293_MI);
				V_1 = L_8;
				if (!V_1)
				{
					goto IL_00c4;
				}
			}

IL_00a3:
			{
				V_2 = ((t876*)SZArrayNew(InitializedTypeInfo(&t876_TI), 4));
				NullCheck(V_1);
				m7020(NULL, (t122 *)(t122 *)V_1, 0, (t122 *)(t122 *)V_2, 0, (((int32_t)(((t122 *)V_1)->max_length))), &m7020_MI);
				int32_t L_9 = m4724(NULL, V_2, 0, &m4724_MI);
				NullCheck((&V_0));
				(&V_0)->f0 = L_9;
			}

IL_00c4:
			{
				VirtActionInvoker1< t915  >::Invoke(&m8332_MI, __this, V_0);
				// IL_00cb: leave.s IL_00e1
				leaveInstructions[0] = 0xE1; // 1
				THROW_SENTINEL(IL_00e1);
				// finally target depth: 1
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (t168 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (&t25_TI, e.ex->object.klass))
				goto IL_00cd;
			throw e;
		}

IL_00cd:
		{ // begin catch(System.Object)
			m6334(__this, V_0, &m6334_MI);
			il2cpp_codegen_raise_exception (__exception_local);
			// IL_00d7: leave.s IL_00e1
			leaveInstructions[0] = 0xE1; // 1
			THROW_SENTINEL(IL_00e1);
			// finally target depth: 1
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_00d9;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_00d9;
	}

IL_00d9:
	{ // begin finally (depth: 1)
		m6334(__this, V_0, &m6334_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0xE1:
				goto IL_00e1;
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

IL_00e1:
	{
		return;
	}
}
extern MethodInfo m6336_MI;
 t27* m6336 (t914 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6336_MI);
	t436 * V_0 = {0};
	t915  V_1 = {0};
	t876* V_2 = {0};
	int32_t V_3 = 0;
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t436 * L_0 = (t436 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t436_TI));
		m1866(L_0, &m1866_MI);
		V_0 = L_0;
		t915  L_1 = (t915 )VirtFuncInvoker1< t915 , bool >::Invoke(&m8333_MI, __this, p0);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral1206, &m3451_MI);
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral505, &m3451_MI);
			NullCheck((&V_1));
			t876* L_2 = ((&V_1)->f3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1359_TI));
			t27* L_3 = m7032(NULL, L_2, &m7032_MI);
			NullCheck(V_0);
			m3451(V_0, L_3, &m3451_MI);
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral506, &m3451_MI);
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral507, &m3451_MI);
			NullCheck((&V_1));
			t876* L_4 = ((&V_1)->f4);
			t27* L_5 = m7032(NULL, L_4, &m7032_MI);
			NullCheck(V_0);
			m3451(V_0, L_5, &m3451_MI);
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral508, &m3451_MI);
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral1207, &m3451_MI);
			NullCheck((&V_1));
			t876* L_6 = ((&V_1)->f1);
			t27* L_7 = m7032(NULL, L_6, &m7032_MI);
			NullCheck(V_0);
			m3451(V_0, L_7, &m3451_MI);
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral1208, &m3451_MI);
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral1209, &m3451_MI);
			NullCheck((&V_1));
			t876* L_8 = ((&V_1)->f7);
			t27* L_9 = m7032(NULL, L_8, &m7032_MI);
			NullCheck(V_0);
			m3451(V_0, L_9, &m3451_MI);
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral1210, &m3451_MI);
			NullCheck((&V_1));
			t876* L_10 = ((&V_1)->f2);
			if (!L_10)
			{
				goto IL_00fa;
			}
		}

IL_00cf:
		{
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral1211, &m3451_MI);
			NullCheck((&V_1));
			t876* L_11 = ((&V_1)->f2);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1359_TI));
			t27* L_12 = m7032(NULL, L_11, &m7032_MI);
			NullCheck(V_0);
			m3451(V_0, L_12, &m3451_MI);
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral1212, &m3451_MI);
		}

IL_00fa:
		{
			NullCheck((&V_1));
			t876* L_13 = ((&V_1)->f5);
			if (!L_13)
			{
				goto IL_018d;
			}
		}

IL_0106:
		{
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral1213, &m3451_MI);
			NullCheck((&V_1));
			t876* L_14 = ((&V_1)->f5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1359_TI));
			t27* L_15 = m7032(NULL, L_14, &m7032_MI);
			NullCheck(V_0);
			m3451(V_0, L_15, &m3451_MI);
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral1214, &m3451_MI);
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral1215, &m3451_MI);
			NullCheck((&V_1));
			int32_t L_16 = ((&V_1)->f0);
			if (!L_16)
			{
				goto IL_0175;
			}
		}

IL_0146:
		{
			NullCheck((&V_1));
			int32_t L_17 = ((&V_1)->f0);
			t876* L_18 = m4719(NULL, L_17, &m4719_MI);
			V_2 = L_18;
			NullCheck(V_2);
			V_3 = (((int32_t)(((t122 *)V_2)->max_length)));
			goto IL_015d;
		}

IL_0159:
		{
			V_3 = ((int32_t)(V_3-1));
		}

IL_015d:
		{
			NullCheck(V_2);
			IL2CPP_ARRAY_BOUNDS_CHECK(V_2, ((int32_t)(V_3-1)));
			if (!(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_2, ((int32_t)(V_3-1)))))
			{
				goto IL_0159;
			}
		}

IL_0164:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1359_TI));
			t27* L_19 = m7033(NULL, V_2, 0, V_3, &m7033_MI);
			NullCheck(V_0);
			m3451(V_0, L_19, &m3451_MI);
			goto IL_0181;
		}

IL_0175:
		{
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral1216, &m3451_MI);
		}

IL_0181:
		{
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral1217, &m3451_MI);
		}

IL_018d:
		{
			NullCheck((&V_1));
			t876* L_20 = ((&V_1)->f6);
			if (!L_20)
			{
				goto IL_01c3;
			}
		}

IL_0196:
		{
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral1218, &m3451_MI);
			NullCheck((&V_1));
			t876* L_21 = ((&V_1)->f6);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1359_TI));
			t27* L_22 = m7032(NULL, L_21, &m7032_MI);
			NullCheck(V_0);
			m3451(V_0, L_22, &m3451_MI);
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral1219, &m3451_MI);
			goto IL_01d1;
		}

IL_01c3:
		{
			if (!p0)
			{
				goto IL_01d1;
			}
		}

IL_01c6:
		{
			t165 * L_23 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
			m489(L_23, (t27*) &_stringLiteral1203, &m489_MI);
			il2cpp_codegen_raise_exception (L_23);
		}

IL_01d1:
		{
			NullCheck(V_0);
			m3451(V_0, (t27*) &_stringLiteral1220, &m3451_MI);
			// IL_01dd: leave.s IL_01eb
			goto IL_01eb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t168 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t25_TI, e.ex->object.klass))
			goto IL_01df;
		throw e;
	}

IL_01df:
	{ // begin catch(System.Object)
		m6334(__this, V_1, &m6334_MI);
		il2cpp_codegen_raise_exception (__exception_local);
		// IL_01e9: leave.s IL_01eb
		goto IL_01eb;
	} // end catch (depth: 1)

IL_01eb:
	{
		NullCheck(V_0);
		t27* L_24 = (t27*)VirtFuncInvoker0< t27* >::Invoke(&m1870_MI, V_0);
		return L_24;
	}
}
// Metadata Definition System.Security.Cryptography.DSA
extern TypeInfo t914_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6333_MI = 
{
	".ctor", (methodPointerType)&m6333, &t914_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3408, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t914_m8333_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134221904, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t914_TI;
extern Il2CppType t915_0_0_0;
extern void* RuntimeInvoker_t915_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m8333_MI = 
{
	"ExportParameters", NULL, &t914_TI, &t915_0_0_0, RuntimeInvoker_t915_t137, t914_m8333_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 10, 1, false, false, 3409, NULL, (methodPointerType)NULL};
extern Il2CppType t915_0_0_0;
static ParameterInfo t914_m6334_ParameterInfos[] = 
{
	{"parameters", 0, 134221905, &EmptyCustomAttributesCache, &t915_0_0_0},
};
extern TypeInfo t914_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t915 (MethodInfo* method, void* obj, void** args);
MethodInfo m6334_MI = 
{
	"ZeroizePrivateKey", (methodPointerType)&m6334, &t914_TI, &t123_0_0_0, RuntimeInvoker_t123_t915, t914_m6334_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 3410, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t914_m6335_ParameterInfos[] = 
{
	{"xmlString", 0, 134221906, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t914_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6335_MI = 
{
	"FromXmlString", (methodPointerType)&m6335, &t914_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t914_m6335_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, false, 3411, NULL, (methodPointerType)NULL};
extern Il2CppType t915_0_0_0;
static ParameterInfo t914_m8332_ParameterInfos[] = 
{
	{"parameters", 0, 134221907, &EmptyCustomAttributesCache, &t915_0_0_0},
};
extern TypeInfo t914_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t915 (MethodInfo* method, void* obj, void** args);
MethodInfo m8332_MI = 
{
	"ImportParameters", NULL, &t914_TI, &t123_0_0_0, RuntimeInvoker_t123_t915, t914_m8332_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 11, 1, false, false, 3412, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t914_m6336_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134221908, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t914_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m6336_MI = 
{
	"ToXmlString", (methodPointerType)&m6336, &t914_TI, &t27_0_0_0, RuntimeInvoker_t25_t137, t914_m6336_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 1, false, false, 3413, NULL, (methodPointerType)NULL};
static MethodInfo* t914_MIs[] =
{
	&m6333_MI,
	&m8333_MI,
	&m6334_MI,
	&m6335_MI,
	&m8332_MI,
	&m6336_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6289_MI;
extern MethodInfo m6290_MI;
extern MethodInfo m6291_MI;
extern MethodInfo m6335_MI;
extern MethodInfo m6336_MI;
static MethodInfo* t914_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
	&m6289_MI,
	&m6290_MI,
	&m6291_MI,
	NULL,
	&m6335_MI,
	&m6336_MI,
	NULL,
	NULL,
};
extern TypeInfo t167_TI;
static Il2CppInterfaceOffsetPair t914_IOs[] = 
{
	{ &t167_TI, 4},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t914_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t914__CustomAttributeCache = {
1,
NULL,
&t914_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t914_0_0_0;
extern Il2CppType t914_1_0_0;
extern TypeInfo t1227_TI;
struct t914;
extern TypeInfo t914_TI;
extern CustomAttributesCache t914__CustomAttributeCache;
TypeInfo t914_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSA", "System.Security.Cryptography", t914_MIs, NULL, NULL, NULL, &t1227_TI, NULL, NULL, &t914_TI, NULL, t914_VT, &t914__CustomAttributeCache, &t914_TI, &t914_0_0_0, &t914_1_0_0, t914_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t914), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 0, 0, 0, 0, 12, 0, 1};
#include "t1242.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1242_TI;
#include "t1242MD.h"

#include "t913.h"
#include "t912.h"
#include "t911.h"
#include "t916.h"
extern TypeInfo t1242_TI;
extern TypeInfo t913_TI;
extern TypeInfo t134_TI;
extern TypeInfo t1228_TI;
extern TypeInfo t1229_TI;
extern TypeInfo t1227_TI;
extern TypeInfo t123_TI;
extern TypeInfo t911_TI;
extern TypeInfo t917_TI;
extern TypeInfo t916_TI;
extern TypeInfo t914_TI;
extern TypeInfo t27_TI;
extern TypeInfo t125_TI;
extern TypeInfo t25_TI;
extern TypeInfo t1235_TI;
extern TypeInfo t915_TI;
#include "t913MD.h"
#include "t911MD.h"
#include "t916MD.h"
extern MethodInfo m4645_MI;
extern MethodInfo m6338_MI;
extern MethodInfo m6333_MI;
extern MethodInfo m6386_MI;
extern MethodInfo m6291_MI;
extern MethodInfo m4636_MI;
extern MethodInfo m6345_MI;
extern MethodInfo m4632_MI;
extern MethodInfo m4637_MI;
extern MethodInfo m6309_MI;
extern MethodInfo m6312_MI;
extern MethodInfo m6313_MI;
extern MethodInfo m4651_MI;
extern MethodInfo m4657_MI;
extern MethodInfo m4655_MI;
extern MethodInfo m6335_MI;
extern MethodInfo m6344_MI;
extern MethodInfo m352_MI;
extern MethodInfo m4419_MI;
extern MethodInfo m6302_MI;
extern MethodInfo m4648_MI;
extern MethodInfo m4649_MI;
extern MethodInfo m4659_MI;
extern MethodInfo m6292_MI;
extern MethodInfo m4646_MI;
extern MethodInfo m6336_MI;
extern MethodInfo m4656_MI;
extern MethodInfo m4658_MI;


extern MethodInfo m6337_MI;
 void m6337 (t1242 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6337_MI);
	{
		m6338(__this, ((int32_t)1024), (t917 *)NULL, &m6338_MI);
		return;
	}
}
extern MethodInfo m6338_MI;
 void m6338 (t1242 * __this, int32_t p0, t917 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6338_MI);
	{
		__this->f5 = 1;
		m6333(__this, &m6333_MI);
		__this->f1 = ((t1228*)SZArrayNew(InitializedTypeInfo(&t1228_TI), 1));
		t1228* L_0 = (__this->f1);
		t1229 * L_1 = (t1229 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1229_TI));
		m6386(L_1, ((int32_t)512), ((int32_t)1024), ((int32_t)64), &m6386_MI);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((t1229 **)(t1229 **)SZArrayLdElema(L_0, 0)) = (t1229 *)L_1;
		VirtActionInvoker1< int32_t >::Invoke(&m6291_MI, __this, p0);
		t913 * L_2 = (t913 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t913_TI));
		m4636(L_2, p0, &m4636_MI);
		__this->f7 = L_2;
		t913 * L_3 = (__this->f7);
		t61 L_4 = { &m6345_MI };
		t911 * L_5 = (t911 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t911_TI));
		m4632(L_5, __this, L_4, &m4632_MI);
		NullCheck(L_3);
		m4637(L_3, L_5, &m4637_MI);
		__this->f3 = ((((int32_t)((((t917 *)p1) == ((t25 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		if (p1)
		{
			goto IL_009a;
		}
	}
	{
		t917 * L_6 = (t917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t917_TI));
		m6309(L_6, ((int32_t)13), &m6309_MI);
		p1 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1242_TI));
		if (!(((t1242_SFs*)InitializedTypeInfo(&t1242_TI)->static_fields)->f8))
		{
			goto IL_008c;
		}
	}
	{
		t917 * L_7 = p1;
		NullCheck(L_7);
		int32_t L_8 = m6312(L_7, &m6312_MI);
		NullCheck(L_7);
		m6313(L_7, ((int32_t)(L_8|1)), &m6313_MI);
	}

IL_008c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t916_TI));
		t916 * L_9 = (t916 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t916_TI));
		m4651(L_9, p1, &m4651_MI);
		__this->f2 = L_9;
		goto IL_00d7;
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t916_TI));
		t916 * L_10 = (t916 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t916_TI));
		m4651(L_10, p1, &m4651_MI);
		__this->f2 = L_10;
		t916 * L_11 = (__this->f2);
		NullCheck(L_11);
		m4657(L_11, &m4657_MI);
		t916 * L_12 = (__this->f2);
		NullCheck(L_12);
		t27* L_13 = m4655(L_12, &m4655_MI);
		if (!L_13)
		{
			goto IL_00d7;
		}
	}
	{
		__this->f4 = 1;
		t916 * L_14 = (__this->f2);
		NullCheck(L_14);
		t27* L_15 = m4655(L_14, &m4655_MI);
		VirtActionInvoker1< t27* >::Invoke(&m6335_MI, __this, L_15);
	}

IL_00d7:
	{
		return;
	}
}
extern MethodInfo m6339_MI;
 void m6339 (t25 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6339_MI);
	{
		return;
	}
}
extern MethodInfo m6340_MI;
 void m6340 (t1242 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6340_MI);
	int32_t leaveInstructions[1] = {0};
	t168 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t168 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(&m6344_MI, __this, 0);
		// IL_0007: leave.s IL_0010
		leaveInstructions[0] = 0x10; // 1
		THROW_SENTINEL(IL_0010);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0009;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t168 *)e.ex;
		goto IL_0009;
	}

IL_0009:
	{ // begin finally (depth: 1)
		m352(__this, &m352_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x10:
				goto IL_0010;
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

IL_0010:
	{
		return;
	}
}
extern MethodInfo m6341_MI;
 int32_t m6341 (t1242 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6341_MI);
	{
		t913 * L_0 = (__this->f7);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4645_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m6342_MI;
 t915  m6342 (t1242 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6342_MI);
	{
		if (!p0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		t27* L_1 = m4419(NULL, (t27*) &_stringLiteral1221, &m4419_MI);
		t1235 * L_2 = (t1235 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1235_TI));
		m6302(L_2, L_1, &m6302_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_001b:
	{
		t913 * L_3 = (__this->f7);
		NullCheck(L_3);
		t915  L_4 = (t915 )VirtFuncInvoker1< t915 , bool >::Invoke(&m4648_MI, L_3, p0);
		return L_4;
	}
}
extern MethodInfo m6343_MI;
 void m6343 (t1242 * __this, t915  p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6343_MI);
	{
		t913 * L_0 = (__this->f7);
		NullCheck(L_0);
		VirtActionInvoker1< t915  >::Invoke(&m4649_MI, L_0, p0);
		return;
	}
}
extern MethodInfo m6344_MI;
 void m6344 (t1242 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6344_MI);
	{
		bool L_0 = (__this->f6);
		if (L_0)
		{
			goto IL_003d;
		}
	}
	{
		bool L_1 = (__this->f4);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		bool L_2 = (__this->f3);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		t916 * L_3 = (__this->f2);
		NullCheck(L_3);
		m4659(L_3, &m4659_MI);
	}

IL_0023:
	{
		t913 * L_4 = (__this->f7);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		t913 * L_5 = (__this->f7);
		NullCheck(L_5);
		m6292(L_5, &m6292_MI);
	}

IL_0036:
	{
		__this->f6 = 1;
	}

IL_003d:
	{
		return;
	}
}
extern MethodInfo m6345_MI;
 void m6345 (t1242 * __this, t25 * p0, t912 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6345_MI);
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		bool L_1 = (__this->f4);
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		t916 * L_2 = (__this->f2);
		t913 * L_3 = (__this->f7);
		NullCheck(L_3);
		bool L_4 = m4646(L_3, &m4646_MI);
		t27* L_5 = (t27*)VirtFuncInvoker1< t27*, bool >::Invoke(&m6336_MI, __this, ((((int32_t)L_4) == ((int32_t)0))? 1 : 0));
		NullCheck(L_2);
		m4656(L_2, L_5, &m4656_MI);
		t916 * L_6 = (__this->f2);
		NullCheck(L_6);
		m4658(L_6, &m4658_MI);
		__this->f4 = 1;
	}

IL_0041:
	{
		return;
	}
}
// Metadata Definition System.Security.Cryptography.DSACryptoServiceProvider
extern Il2CppType t916_0_0_1;
FieldInfo t1242_f2_FieldInfo = 
{
	"store", &t916_0_0_1, &t1242_TI, offsetof(t1242, f2), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1242_f3_FieldInfo = 
{
	"persistKey", &t125_0_0_1, &t1242_TI, offsetof(t1242, f3), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1242_f4_FieldInfo = 
{
	"persisted", &t125_0_0_1, &t1242_TI, offsetof(t1242, f4), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1242_f5_FieldInfo = 
{
	"privateKeyExportable", &t125_0_0_1, &t1242_TI, offsetof(t1242, f5), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_1;
FieldInfo t1242_f6_FieldInfo = 
{
	"m_disposed", &t125_0_0_1, &t1242_TI, offsetof(t1242, f6), &EmptyCustomAttributesCache};
extern Il2CppType t913_0_0_1;
FieldInfo t1242_f7_FieldInfo = 
{
	"dsa", &t913_0_0_1, &t1242_TI, offsetof(t1242, f7), &EmptyCustomAttributesCache};
extern Il2CppType t125_0_0_17;
FieldInfo t1242_f8_FieldInfo = 
{
	"useMachineKeyStore", &t125_0_0_17, &t1242_TI, offsetof(t1242_SFs, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1242_FIs[] =
{
	&t1242_f2_FieldInfo,
	&t1242_f3_FieldInfo,
	&t1242_f4_FieldInfo,
	&t1242_f5_FieldInfo,
	&t1242_f6_FieldInfo,
	&t1242_f7_FieldInfo,
	&t1242_f8_FieldInfo,
	NULL
};
extern MethodInfo m6341_MI;
static PropertyInfo t1242____KeySize_PropertyInfo = 
{
	&t1242_TI, "KeySize", &m6341_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1242_PIs[] =
{
	&t1242____KeySize_PropertyInfo,
	NULL
};
extern TypeInfo t1242_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6337_MI = 
{
	".ctor", (methodPointerType)&m6337, &t1242_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3414, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
extern Il2CppType t917_0_0_0;
static ParameterInfo t1242_m6338_ParameterInfos[] = 
{
	{"dwKeySize", 0, 134221909, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"parameters", 1, 134221910, &EmptyCustomAttributesCache, &t917_0_0_0},
};
extern TypeInfo t1242_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6338_MI = 
{
	".ctor", (methodPointerType)&m6338, &t1242_TI, &t123_0_0_0, RuntimeInvoker_t123_t134_t25, t1242_m6338_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3415, NULL, (methodPointerType)NULL};
extern TypeInfo t1242_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6339_MI = 
{
	".cctor", (methodPointerType)&m6339, &t1242_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3416, NULL, (methodPointerType)NULL};
extern TypeInfo t1242_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6340_MI = 
{
	"Finalize", (methodPointerType)&m6340, &t1242_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 3417, NULL, (methodPointerType)NULL};
extern TypeInfo t1242_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6341_MI = 
{
	"get_KeySize", (methodPointerType)&m6341, &t1242_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2246, 0, 5, 0, false, false, 3418, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1242_m6342_ParameterInfos[] = 
{
	{"includePrivateParameters", 0, 134221911, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1242_TI;
extern Il2CppType t915_0_0_0;
extern void* RuntimeInvoker_t915_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m6342_MI = 
{
	"ExportParameters", (methodPointerType)&m6342, &t1242_TI, &t915_0_0_0, RuntimeInvoker_t915_t137, t1242_m6342_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 10, 1, false, false, 3419, NULL, (methodPointerType)NULL};
extern Il2CppType t915_0_0_0;
static ParameterInfo t1242_m6343_ParameterInfos[] = 
{
	{"parameters", 0, 134221912, &EmptyCustomAttributesCache, &t915_0_0_0},
};
extern TypeInfo t1242_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t915 (MethodInfo* method, void* obj, void** args);
MethodInfo m6343_MI = 
{
	"ImportParameters", (methodPointerType)&m6343, &t1242_TI, &t123_0_0_0, RuntimeInvoker_t123_t915, t1242_m6343_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 1, false, false, 3420, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1242_m6344_ParameterInfos[] = 
{
	{"disposing", 0, 134221913, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1242_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m6344_MI = 
{
	"Dispose", (methodPointerType)&m6344, &t1242_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t1242_m6344_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 7, 1, false, false, 3421, NULL, (methodPointerType)NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t912_0_0_0;
static ParameterInfo t1242_m6345_ParameterInfos[] = 
{
	{"sender", 0, 134221914, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"e", 1, 134221915, &EmptyCustomAttributesCache, &t912_0_0_0},
};
extern TypeInfo t1242_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6345_MI = 
{
	"OnKeyGenerated", (methodPointerType)&m6345, &t1242_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t1242_m6345_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 3422, NULL, (methodPointerType)NULL};
static MethodInfo* t1242_MIs[] =
{
	&m6337_MI,
	&m6338_MI,
	&m6339_MI,
	&m6340_MI,
	&m6341_MI,
	&m6342_MI,
	&m6343_MI,
	&m6344_MI,
	&m6345_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m6340_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6289_MI;
extern MethodInfo m6341_MI;
extern MethodInfo m6291_MI;
extern MethodInfo m6344_MI;
extern MethodInfo m6335_MI;
extern MethodInfo m6336_MI;
extern MethodInfo m6342_MI;
extern MethodInfo m6343_MI;
static MethodInfo* t1242_VT[] =
{
	&m455_MI,
	&m6340_MI,
	&m456_MI,
	&m457_MI,
	&m6289_MI,
	&m6341_MI,
	&m6291_MI,
	&m6344_MI,
	&m6335_MI,
	&m6336_MI,
	&m6342_MI,
	&m6343_MI,
};
extern TypeInfo t1653_TI;
static TypeInfo* t1242_ITIs[] = 
{
	&t1653_TI,
};
extern TypeInfo t167_TI;
extern TypeInfo t1653_TI;
static Il2CppInterfaceOffsetPair t1242_IOs[] = 
{
	{ &t167_TI, 4},
	{ &t1653_TI, 12},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1242_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1242__CustomAttributeCache = {
1,
NULL,
&t1242_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1242_0_0_0;
extern Il2CppType t1242_1_0_0;
extern TypeInfo t914_TI;
struct t1242;
extern TypeInfo t1242_TI;
extern CustomAttributesCache t1242__CustomAttributeCache;
TypeInfo t1242_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSACryptoServiceProvider", "System.Security.Cryptography", t1242_MIs, t1242_PIs, t1242_FIs, NULL, &t914_TI, NULL, NULL, &t1242_TI, t1242_ITIs, t1242_VT, &t1242__CustomAttributeCache, &t1242_TI, &t1242_0_0_0, &t1242_1_0_0, t1242_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1242), 0, -1, sizeof(t1242_SFs), 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, true, true, false, false, 9, 1, 7, 0, 0, 12, 1, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t915_TI;
#include "t915MD.h"



// Conversion methods for marshalling of: System.Security.Cryptography.DSAParameters
void t915_marshal(const t915& unmarshaled, t915_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)unmarshaled.f1);
	marshaled.f2 = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)unmarshaled.f2);
	marshaled.f3 = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)unmarshaled.f3);
	marshaled.f4 = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)unmarshaled.f4);
	marshaled.f5 = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)unmarshaled.f5);
	marshaled.f6 = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)unmarshaled.f6);
	marshaled.f7 = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)unmarshaled.f7);
}
void t915_marshal_back(const t915_marshaled& marshaled, t915& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	extern TypeInfo t462_TI;
	unmarshaled.f1 = (t876*)il2cpp_codegen_marshal_array_result(&t462_TI, marshaled.f1, 1);
	extern TypeInfo t462_TI;
	unmarshaled.f2 = (t876*)il2cpp_codegen_marshal_array_result(&t462_TI, marshaled.f2, 1);
	extern TypeInfo t462_TI;
	unmarshaled.f3 = (t876*)il2cpp_codegen_marshal_array_result(&t462_TI, marshaled.f3, 1);
	extern TypeInfo t462_TI;
	unmarshaled.f4 = (t876*)il2cpp_codegen_marshal_array_result(&t462_TI, marshaled.f4, 1);
	extern TypeInfo t462_TI;
	unmarshaled.f5 = (t876*)il2cpp_codegen_marshal_array_result(&t462_TI, marshaled.f5, 1);
	extern TypeInfo t462_TI;
	unmarshaled.f6 = (t876*)il2cpp_codegen_marshal_array_result(&t462_TI, marshaled.f6, 1);
	extern TypeInfo t462_TI;
	unmarshaled.f7 = (t876*)il2cpp_codegen_marshal_array_result(&t462_TI, marshaled.f7, 1);
}
// Conversion method for clean up from marshalling of: System.Security.Cryptography.DSAParameters
void t915_marshal_cleanup(t915_marshaled& marshaled)
{
}
// Metadata Definition System.Security.Cryptography.DSAParameters
extern Il2CppType t134_0_0_6;
FieldInfo t915_f0_FieldInfo = 
{
	"Counter", &t134_0_0_6, &t915_TI, offsetof(t915, f0) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_6;
FieldInfo t915_f1_FieldInfo = 
{
	"G", &t876_0_0_6, &t915_TI, offsetof(t915, f1) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_6;
FieldInfo t915_f2_FieldInfo = 
{
	"J", &t876_0_0_6, &t915_TI, offsetof(t915, f2) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_6;
FieldInfo t915_f3_FieldInfo = 
{
	"P", &t876_0_0_6, &t915_TI, offsetof(t915, f3) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_6;
FieldInfo t915_f4_FieldInfo = 
{
	"Q", &t876_0_0_6, &t915_TI, offsetof(t915, f4) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_6;
FieldInfo t915_f5_FieldInfo = 
{
	"Seed", &t876_0_0_6, &t915_TI, offsetof(t915, f5) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_134;
FieldInfo t915_f6_FieldInfo = 
{
	"X", &t876_0_0_134, &t915_TI, offsetof(t915, f6) + sizeof(t25), &EmptyCustomAttributesCache};
extern Il2CppType t876_0_0_6;
FieldInfo t915_f7_FieldInfo = 
{
	"Y", &t876_0_0_6, &t915_TI, offsetof(t915, f7) + sizeof(t25), &EmptyCustomAttributesCache};
static FieldInfo* t915_FIs[] =
{
	&t915_f0_FieldInfo,
	&t915_f1_FieldInfo,
	&t915_f2_FieldInfo,
	&t915_f3_FieldInfo,
	&t915_f4_FieldInfo,
	&t915_f5_FieldInfo,
	&t915_f6_FieldInfo,
	&t915_f7_FieldInfo,
	NULL
};
static MethodInfo* t915_MIs[] =
{
	NULL
};
extern MethodInfo m625_MI;
extern MethodInfo m352_MI;
extern MethodInfo m626_MI;
extern MethodInfo m627_MI;
static MethodInfo* t915_VT[] =
{
	&m625_MI,
	&m352_MI,
	&m626_MI,
	&m627_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t915_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t915__CustomAttributeCache = {
1,
NULL,
&t915_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t915_0_0_0;
extern Il2CppType t915_1_0_0;
extern TypeInfo t117_TI;
extern TypeInfo t915_TI;
extern CustomAttributesCache t915__CustomAttributeCache;
TypeInfo t915_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSAParameters", "System.Security.Cryptography", t915_MIs, NULL, t915_FIs, NULL, &t117_TI, NULL, NULL, &t915_TI, NULL, t915_VT, &t915__CustomAttributeCache, &t915_TI, &t915_0_0_0, &t915_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t915_marshal, (methodPointerType)t915_marshal_back, (methodPointerType)t915_marshal_cleanup, sizeof (t915)+ sizeof (Il2CppObject), 0, sizeof(t915_marshaled), 0, 0, -1, 1057033, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 8, 0, 0, 4, 0, 0};
#include "t1243.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1243_TI;
#include "t1243MD.h"

extern MethodInfo m6294_MI;


extern MethodInfo m6346_MI;
 void m6346 (t1243 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6346_MI);
	{
		m6294(__this, &m6294_MI);
		return;
	}
}
// Metadata Definition System.Security.Cryptography.DSASignatureDeformatter
extern TypeInfo t1243_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6346_MI = 
{
	".ctor", (methodPointerType)&m6346, &t1243_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3423, NULL, (methodPointerType)NULL};
static MethodInfo* t1243_MIs[] =
{
	&m6346_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1243_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1243_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1243__CustomAttributeCache = {
1,
NULL,
&t1243_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1243_0_0_0;
extern Il2CppType t1243_1_0_0;
extern TypeInfo t1230_TI;
struct t1243;
extern TypeInfo t1243_TI;
extern CustomAttributesCache t1243__CustomAttributeCache;
TypeInfo t1243_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSASignatureDeformatter", "System.Security.Cryptography", t1243_MIs, NULL, NULL, NULL, &t1230_TI, NULL, NULL, &t1243_TI, NULL, t1243_VT, &t1243__CustomAttributeCache, &t1243_TI, &t1243_0_0_0, &t1243_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1243), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t1244.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1244_TI;
#include "t1244MD.h"

extern MethodInfo m6295_MI;


extern MethodInfo m6347_MI;
 void m6347 (t1244 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6347_MI);
	{
		m6295(__this, &m6295_MI);
		return;
	}
}
// Metadata Definition System.Security.Cryptography.DSASignatureFormatter
extern TypeInfo t1244_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6347_MI = 
{
	".ctor", (methodPointerType)&m6347, &t1244_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3424, NULL, (methodPointerType)NULL};
static MethodInfo* t1244_MIs[] =
{
	&m6347_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t1244_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1244_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1244__CustomAttributeCache = {
1,
NULL,
&t1244_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1244_0_0_0;
extern Il2CppType t1244_1_0_0;
extern TypeInfo t1231_TI;
struct t1244;
extern TypeInfo t1244_TI;
extern CustomAttributesCache t1244__CustomAttributeCache;
TypeInfo t1244_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DSASignatureFormatter", "System.Security.Cryptography", t1244_MIs, NULL, NULL, NULL, &t1231_TI, NULL, NULL, &t1244_TI, NULL, t1244_VT, &t1244__CustomAttributeCache, &t1244_TI, &t1244_0_0_0, &t1244_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1244), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t1245.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1245_TI;
#include "t1245MD.h"

#include "t1246.h"
#include "t1247.h"
#include "t909.h"
#include "t1404.h"
extern TypeInfo t1245_TI;
extern TypeInfo t1247_TI;
extern TypeInfo t876_TI;
extern TypeInfo t462_TI;
extern TypeInfo t122_TI;
extern TypeInfo t25_TI;
extern TypeInfo t123_TI;
extern TypeInfo t909_TI;
extern TypeInfo t125_TI;
extern TypeInfo t1404_TI;
extern TypeInfo t1246_TI;
extern TypeInfo t134_TI;
#include "t1246MD.h"
#include "t1247MD.h"
#include "t909MD.h"
#include "t1404MD.h"
extern MethodInfo m6381_MI;
extern MethodInfo m6394_MI;
extern MethodInfo m4281_MI;
extern MethodInfo m6379_MI;
extern MethodInfo m6395_MI;
extern MethodInfo m6349_MI;
extern MethodInfo m4626_MI;
extern MethodInfo m6392_MI;
extern MethodInfo m6396_MI;
extern MethodInfo m7635_MI;
extern MethodInfo m6359_MI;
extern MethodInfo m6354_MI;
extern MethodInfo m4630_MI;
extern MethodInfo m4631_MI;
extern MethodInfo m6382_MI;
extern MethodInfo m6352_MI;
extern MethodInfo m6355_MI;
extern MethodInfo m8334_MI;
extern MethodInfo m6384_MI;
extern MethodInfo m6385_MI;
extern MethodInfo m4279_MI;
extern MethodInfo m4628_MI;
extern MethodInfo m4629_MI;


extern MethodInfo m6348_MI;
 void m6348 (t1245 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6348_MI);
	{
		m6392(__this, &m6392_MI);
		__this->f5 = 0;
		__this->f9 = ((int32_t)64);
		return;
	}
}
extern MethodInfo m6349_MI;
 int32_t m6349 (t1245 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6349_MI);
	{
		int32_t L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m6350_MI;
 void m6350 (t1245 * __this, int32_t p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6350_MI);
	{
		__this->f9 = p0;
		return;
	}
}
extern MethodInfo m6351_MI;
 void m6351 (t1245 * __this, t27* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6351_MI);
	{
		__this->f6 = p0;
		t27* L_0 = (__this->f6);
		t1246 * L_1 = m6381(NULL, L_0, &m6381_MI);
		__this->f7 = L_1;
		return;
	}
}
extern MethodInfo m6352_MI;
 t876* m6352 (t1245 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6352_MI);
	{
		t876* L_0 = m6394(__this, &m6394_MI);
		NullCheck(L_0);
		t25 * L_1 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4281_MI, L_0);
		return ((t876*)Castclass(L_1, InitializedTypeInfo(&t876_TI)));
	}
}
extern MethodInfo m6353_MI;
 void m6353 (t1245 * __this, t876* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6353_MI);
	{
		if (!p0)
		{
			goto IL_001e;
		}
	}
	{
		NullCheck(p0);
		if ((((int32_t)(((int32_t)(((t122 *)p0)->max_length)))) <= ((int32_t)((int32_t)64))))
		{
			goto IL_001e;
		}
	}
	{
		t1246 * L_0 = (__this->f7);
		NullCheck(L_0);
		t876* L_1 = m6379(L_0, p0, &m6379_MI);
		m6395(__this, L_1, &m6395_MI);
		goto IL_002f;
	}

IL_001e:
	{
		NullCheck(p0);
		t25 * L_2 = (t25 *)VirtFuncInvoker0< t25 * >::Invoke(&m4281_MI, p0);
		m6395(__this, ((t876*)Castclass(L_2, InitializedTypeInfo(&t876_TI))), &m6395_MI);
	}

IL_002f:
	{
		return;
	}
}
extern MethodInfo m6354_MI;
 t909 * m6354 (t1245 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6354_MI);
	{
		t909 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		t1246 * L_1 = (__this->f7);
		int32_t L_2 = m6349(__this, &m6349_MI);
		t909 * L_3 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4626(L_3, L_1, ((int32_t)(L_2>>3)), &m4626_MI);
		__this->f8 = L_3;
	}

IL_0021:
	{
		t909 * L_4 = (__this->f8);
		return L_4;
	}
}
extern MethodInfo m6355_MI;
 t876* m6355 (t1245 * __this, t876* p0, uint8_t p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6355_MI);
	t876* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = m6349(__this, &m6349_MI);
		V_0 = ((t876*)SZArrayNew(InitializedTypeInfo(&t876_TI), L_0));
		V_1 = 0;
		goto IL_001d;
	}

IL_0010:
	{
		NullCheck(p0);
		IL2CPP_ARRAY_BOUNDS_CHECK(p0, V_1);
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(V_0, V_1)) = (uint8_t)(((uint8_t)((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(p0, V_1))^p1))));
		V_1 = ((int32_t)(V_1+1));
	}

IL_001d:
	{
		NullCheck(p0);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t122 *)p0)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		NullCheck(p0);
		V_2 = (((int32_t)(((t122 *)p0)->max_length)));
		goto IL_0031;
	}

IL_0029:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(V_0, V_2)) = (uint8_t)p1;
		V_2 = ((int32_t)(V_2+1));
	}

IL_0031:
	{
		int32_t L_1 = m6349(__this, &m6349_MI);
		if ((((int32_t)V_2) < ((int32_t)L_1)))
		{
			goto IL_0029;
		}
	}
	{
		return V_0;
	}
}
extern MethodInfo m6356_MI;
 void m6356 (t1245 * __this, bool p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6356_MI);
	{
		bool L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		m6396(__this, p0, &m6396_MI);
	}

IL_000f:
	{
		return;
	}
}
extern MethodInfo m6357_MI;
 void m6357 (t1245 * __this, t876* p0, int32_t p1, int32_t p2, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6357_MI);
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1404 * L_1 = (t1404 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1404_TI));
		m7635(L_1, (t27*) &_stringLiteral1112, &m7635_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		int32_t L_2 = (__this->f2);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		VirtActionInvoker0::Invoke(&m6359_MI, __this);
		__this->f2 = 1;
	}

IL_0028:
	{
		t909 * L_3 = m6354(__this, &m6354_MI);
		NullCheck(L_3);
		m4630(L_3, p0, p1, p2, &m4630_MI);
		return;
	}
}
extern MethodInfo m6358_MI;
 t876* m6358 (t1245 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6358_MI);
	t876* V_0 = {0};
	t876* V_1 = {0};
	t876* V_2 = {0};
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1404 * L_1 = (t1404 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1404_TI));
		m7635(L_1, (t27*) &_stringLiteral1222, &m7635_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		__this->f2 = 0;
		t909 * L_2 = m6354(__this, &m6354_MI);
		NullCheck(L_2);
		m4631(L_2, &m4631_MI);
		t1246 * L_3 = (__this->f7);
		NullCheck(L_3);
		t876* L_4 = (t876*)VirtFuncInvoker0< t876* >::Invoke(&m6382_MI, L_3);
		V_0 = L_4;
		t876* L_5 = (t876*)VirtFuncInvoker0< t876* >::Invoke(&m6352_MI, __this);
		t876* L_6 = m6355(__this, L_5, ((int32_t)92), &m6355_MI);
		V_1 = L_6;
		t1246 * L_7 = (__this->f7);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(&m8334_MI, L_7);
		t1246 * L_8 = (__this->f7);
		NullCheck(V_1);
		NullCheck(L_8);
		VirtFuncInvoker5< int32_t, t876*, int32_t, int32_t, t876*, int32_t >::Invoke(&m6384_MI, L_8, V_1, 0, (((int32_t)(((t122 *)V_1)->max_length))), V_1, 0);
		t1246 * L_9 = (__this->f7);
		NullCheck(V_0);
		NullCheck(L_9);
		VirtFuncInvoker3< t876*, t876*, int32_t, int32_t >::Invoke(&m6385_MI, L_9, V_0, 0, (((int32_t)(((t122 *)V_0)->max_length))));
		t1246 * L_10 = (__this->f7);
		NullCheck(L_10);
		t876* L_11 = (t876*)VirtFuncInvoker0< t876* >::Invoke(&m6382_MI, L_10);
		V_2 = L_11;
		t1246 * L_12 = (__this->f7);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(&m8334_MI, L_12);
		NullCheck(V_1);
		m4279(NULL, (t122 *)(t122 *)V_1, 0, (((int32_t)(((t122 *)V_1)->max_length))), &m4279_MI);
		NullCheck(V_0);
		m4279(NULL, (t122 *)(t122 *)V_0, 0, (((int32_t)(((t122 *)V_0)->max_length))), &m4279_MI);
		return V_2;
	}
}
extern MethodInfo m6359_MI;
 void m6359 (t1245 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6359_MI);
	t876* V_0 = {0};
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1404 * L_1 = (t1404 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1404_TI));
		m7635(L_1, (t27*) &_stringLiteral1222, &m7635_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		__this->f2 = 0;
		t909 * L_2 = m6354(__this, &m6354_MI);
		NullCheck(L_2);
		m4628(L_2, &m4628_MI);
		t876* L_3 = (t876*)VirtFuncInvoker0< t876* >::Invoke(&m6352_MI, __this);
		t876* L_4 = m6355(__this, L_3, ((int32_t)54), &m6355_MI);
		V_0 = L_4;
		t1246 * L_5 = (__this->f7);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(&m8334_MI, L_5);
		t909 * L_6 = m6354(__this, &m6354_MI);
		NullCheck(L_6);
		m4629(L_6, V_0, &m4629_MI);
		NullCheck(V_0);
		m4279(NULL, (t122 *)(t122 *)V_0, 0, (((int32_t)(((t122 *)V_0)->max_length))), &m4279_MI);
		return;
	}
}
// Metadata Definition System.Security.Cryptography.HMAC
extern Il2CppType t125_0_0_1;
FieldInfo t1245_f5_FieldInfo = 
{
	"_disposed", &t125_0_0_1, &t1245_TI, offsetof(t1245, f5), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_1;
FieldInfo t1245_f6_FieldInfo = 
{
	"_hashName", &t27_0_0_1, &t1245_TI, offsetof(t1245, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1246_0_0_1;
FieldInfo t1245_f7_FieldInfo = 
{
	"_algo", &t1246_0_0_1, &t1245_TI, offsetof(t1245, f7), &EmptyCustomAttributesCache};
extern Il2CppType t909_0_0_1;
FieldInfo t1245_f8_FieldInfo = 
{
	"_block", &t909_0_0_1, &t1245_TI, offsetof(t1245, f8), &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_1;
FieldInfo t1245_f9_FieldInfo = 
{
	"_blockSizeValue", &t134_0_0_1, &t1245_TI, offsetof(t1245, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1245_FIs[] =
{
	&t1245_f5_FieldInfo,
	&t1245_f6_FieldInfo,
	&t1245_f7_FieldInfo,
	&t1245_f8_FieldInfo,
	&t1245_f9_FieldInfo,
	NULL
};
extern MethodInfo m6349_MI;
extern MethodInfo m6350_MI;
static PropertyInfo t1245____BlockSizeValue_PropertyInfo = 
{
	&t1245_TI, "BlockSizeValue", &m6349_MI, &m6350_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6351_MI;
static PropertyInfo t1245____HashName_PropertyInfo = 
{
	&t1245_TI, "HashName", NULL, &m6351_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6352_MI;
extern MethodInfo m6353_MI;
static PropertyInfo t1245____Key_PropertyInfo = 
{
	&t1245_TI, "Key", &m6352_MI, &m6353_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m6354_MI;
static PropertyInfo t1245____Block_PropertyInfo = 
{
	&t1245_TI, "Block", &m6354_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1245_PIs[] =
{
	&t1245____BlockSizeValue_PropertyInfo,
	&t1245____HashName_PropertyInfo,
	&t1245____Key_PropertyInfo,
	&t1245____Block_PropertyInfo,
	NULL
};
extern TypeInfo t1245_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6348_MI = 
{
	".ctor", (methodPointerType)&m6348, &t1245_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3425, NULL, (methodPointerType)NULL};
extern TypeInfo t1245_TI;
extern Il2CppType t134_0_0_0;
extern void* RuntimeInvoker_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6349_MI = 
{
	"get_BlockSizeValue", (methodPointerType)&m6349, &t1245_TI, &t134_0_0_0, RuntimeInvoker_t134, NULL, &EmptyCustomAttributesCache, 2180, 0, 255, 0, false, false, 3426, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t1245_m6350_ParameterInfos[] = 
{
	{"value", 0, 134221916, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1245_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6350_MI = 
{
	"set_BlockSizeValue", (methodPointerType)&m6350, &t1245_TI, &t123_0_0_0, RuntimeInvoker_t123_t134, t1245_m6350_ParameterInfos, &EmptyCustomAttributesCache, 2180, 0, 255, 1, false, false, 3427, NULL, (methodPointerType)NULL};
extern Il2CppType t27_0_0_0;
static ParameterInfo t1245_m6351_ParameterInfos[] = 
{
	{"value", 0, 134221917, &EmptyCustomAttributesCache, &t27_0_0_0},
};
extern TypeInfo t1245_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6351_MI = 
{
	"set_HashName", (methodPointerType)&m6351, &t1245_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1245_m6351_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3428, NULL, (methodPointerType)NULL};
extern TypeInfo t1245_TI;
extern Il2CppType t876_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6352_MI = 
{
	"get_Key", (methodPointerType)&m6352, &t1245_TI, &t876_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 3429, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
static ParameterInfo t1245_m6353_ParameterInfos[] = 
{
	{"value", 0, 134221918, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t1245_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6353_MI = 
{
	"set_Key", (methodPointerType)&m6353, &t1245_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1245_m6353_ParameterInfos, &EmptyCustomAttributesCache, 2246, 0, 15, 1, false, false, 3430, NULL, (methodPointerType)NULL};
extern TypeInfo t1245_TI;
extern Il2CppType t909_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6354_MI = 
{
	"get_Block", (methodPointerType)&m6354, &t1245_TI, &t909_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3431, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
extern Il2CppType t462_0_0_0;
static ParameterInfo t1245_m6355_ParameterInfos[] = 
{
	{"key", 0, 134221919, &EmptyCustomAttributesCache, &t876_0_0_0},
	{"padding", 1, 134221920, &EmptyCustomAttributesCache, &t462_0_0_0},
};
extern TypeInfo t1245_TI;
extern Il2CppType t876_0_0_0;
extern void* RuntimeInvoker_t25_t25_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m6355_MI = 
{
	"KeySetup", (methodPointerType)&m6355, &t1245_TI, &t876_0_0_0, RuntimeInvoker_t25_t25_t137, t1245_m6355_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 3432, NULL, (methodPointerType)NULL};
extern Il2CppType t125_0_0_0;
static ParameterInfo t1245_m6356_ParameterInfos[] = 
{
	{"disposing", 0, 134221921, &EmptyCustomAttributesCache, &t125_0_0_0},
};
extern TypeInfo t1245_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t137 (MethodInfo* method, void* obj, void** args);
MethodInfo m6356_MI = 
{
	"Dispose", (methodPointerType)&m6356, &t1245_TI, &t123_0_0_0, RuntimeInvoker_t123_t137, t1245_m6356_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 13, 1, false, false, 3433, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t1245_m6357_ParameterInfos[] = 
{
	{"rgb", 0, 134221922, &EmptyCustomAttributesCache, &t876_0_0_0},
	{"ib", 1, 134221923, &EmptyCustomAttributesCache, &t134_0_0_0},
	{"cb", 2, 134221924, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1245_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t134_t134 (MethodInfo* method, void* obj, void** args);
MethodInfo m6357_MI = 
{
	"HashCore", (methodPointerType)&m6357, &t1245_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t134_t134, t1245_m6357_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 10, 3, false, false, 3434, NULL, (methodPointerType)NULL};
extern TypeInfo t1245_TI;
extern Il2CppType t876_0_0_0;
extern void* RuntimeInvoker_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6358_MI = 
{
	"HashFinal", (methodPointerType)&m6358, &t1245_TI, &t876_0_0_0, RuntimeInvoker_t25, NULL, &EmptyCustomAttributesCache, 196, 0, 11, 0, false, false, 3435, NULL, (methodPointerType)NULL};
extern TypeInfo t1245_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6359_MI = 
{
	"Initialize", (methodPointerType)&m6359, &t1245_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 198, 0, 12, 0, false, false, 3436, NULL, (methodPointerType)NULL};
static MethodInfo* t1245_MIs[] =
{
	&m6348_MI,
	&m6349_MI,
	&m6350_MI,
	&m6351_MI,
	&m6352_MI,
	&m6353_MI,
	&m6354_MI,
	&m6355_MI,
	&m6356_MI,
	&m6357_MI,
	&m6358_MI,
	&m6359_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m6393_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6377_MI;
extern MethodInfo m6378_MI;
extern MethodInfo m6384_MI;
extern MethodInfo m6385_MI;
extern MethodInfo m6378_MI;
extern MethodInfo m6382_MI;
extern MethodInfo m6357_MI;
extern MethodInfo m6358_MI;
extern MethodInfo m6359_MI;
extern MethodInfo m6356_MI;
extern MethodInfo m6352_MI;
extern MethodInfo m6353_MI;
static MethodInfo* t1245_VT[] =
{
	&m455_MI,
	&m6393_MI,
	&m456_MI,
	&m457_MI,
	&m6377_MI,
	&m6378_MI,
	&m6384_MI,
	&m6385_MI,
	&m6378_MI,
	&m6382_MI,
	&m6357_MI,
	&m6358_MI,
	&m6359_MI,
	&m6356_MI,
	&m6352_MI,
	&m6353_MI,
};
extern TypeInfo t167_TI;
extern TypeInfo t910_TI;
static Il2CppInterfaceOffsetPair t1245_IOs[] = 
{
	{ &t167_TI, 4},
	{ &t910_TI, 5},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1245_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1245__CustomAttributeCache = {
1,
NULL,
&t1245_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1245_0_0_0;
extern Il2CppType t1245_1_0_0;
extern TypeInfo t1247_TI;
struct t1245;
extern TypeInfo t1245_TI;
extern CustomAttributesCache t1245__CustomAttributeCache;
TypeInfo t1245_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMAC", "System.Security.Cryptography", t1245_MIs, t1245_PIs, t1245_FIs, NULL, &t1247_TI, NULL, NULL, &t1245_TI, NULL, t1245_VT, &t1245__CustomAttributeCache, &t1245_TI, &t1245_0_0_0, &t1245_1_0_0, t1245_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1245), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, true, false, false, false, 12, 4, 5, 0, 0, 16, 0, 2};
#include "t1248.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1248_TI;
#include "t1248MD.h"

extern TypeInfo t1246_TI;
extern TypeInfo t1245_TI;
extern TypeInfo t123_TI;
extern TypeInfo t876_TI;
extern TypeInfo t462_TI;
extern MethodInfo m4624_MI;
extern MethodInfo m6361_MI;
extern MethodInfo m6348_MI;
extern MethodInfo m6351_MI;
extern MethodInfo m6353_MI;


extern MethodInfo m6360_MI;
 void m6360 (t1248 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6360_MI);
	{
		t876* L_0 = m4624(NULL, 8, &m4624_MI);
		m6361(__this, L_0, &m6361_MI);
		return;
	}
}
extern MethodInfo m6361_MI;
 void m6361 (t1248 * __this, t876* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6361_MI);
	{
		m6348(__this, &m6348_MI);
		m6351(__this, (t27*) &_stringLiteral1070, &m6351_MI);
		__this->f1 = ((int32_t)128);
		VirtActionInvoker1< t876* >::Invoke(&m6353_MI, __this, p0);
		return;
	}
}
// Metadata Definition System.Security.Cryptography.HMACMD5
extern TypeInfo t1248_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6360_MI = 
{
	".ctor", (methodPointerType)&m6360, &t1248_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3437, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
static ParameterInfo t1248_m6361_ParameterInfos[] = 
{
	{"key", 0, 134221925, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t1248_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6361_MI = 
{
	".ctor", (methodPointerType)&m6361, &t1248_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1248_m6361_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3438, NULL, (methodPointerType)NULL};
static MethodInfo* t1248_MIs[] =
{
	&m6360_MI,
	&m6361_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m6393_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6377_MI;
extern MethodInfo m6378_MI;
extern MethodInfo m6384_MI;
extern MethodInfo m6385_MI;
extern MethodInfo m6378_MI;
extern MethodInfo m6382_MI;
extern MethodInfo m6357_MI;
extern MethodInfo m6358_MI;
extern MethodInfo m6359_MI;
extern MethodInfo m6356_MI;
extern MethodInfo m6352_MI;
extern MethodInfo m6353_MI;
static MethodInfo* t1248_VT[] =
{
	&m455_MI,
	&m6393_MI,
	&m456_MI,
	&m457_MI,
	&m6377_MI,
	&m6378_MI,
	&m6384_MI,
	&m6385_MI,
	&m6378_MI,
	&m6382_MI,
	&m6357_MI,
	&m6358_MI,
	&m6359_MI,
	&m6356_MI,
	&m6352_MI,
	&m6353_MI,
};
extern TypeInfo t167_TI;
extern TypeInfo t910_TI;
static Il2CppInterfaceOffsetPair t1248_IOs[] = 
{
	{ &t167_TI, 4},
	{ &t910_TI, 5},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1248_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1248__CustomAttributeCache = {
1,
NULL,
&t1248_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1248_0_0_0;
extern Il2CppType t1248_1_0_0;
extern TypeInfo t1245_TI;
struct t1248;
extern TypeInfo t1248_TI;
extern CustomAttributesCache t1248__CustomAttributeCache;
TypeInfo t1248_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACMD5", "System.Security.Cryptography", t1248_MIs, NULL, NULL, NULL, &t1245_TI, NULL, NULL, &t1248_TI, NULL, t1248_VT, &t1248__CustomAttributeCache, &t1248_TI, &t1248_0_0_0, &t1248_1_0_0, t1248_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1248), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, true, false, false, false, 2, 0, 0, 0, 0, 16, 0, 2};
#include "t1249.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1249_TI;
#include "t1249MD.h"

extern TypeInfo t1246_TI;
extern TypeInfo t1245_TI;
extern TypeInfo t123_TI;
extern TypeInfo t876_TI;
extern TypeInfo t462_TI;
extern MethodInfo m4624_MI;
extern MethodInfo m6363_MI;
extern MethodInfo m6348_MI;
extern MethodInfo m6351_MI;
extern MethodInfo m6353_MI;


extern MethodInfo m6362_MI;
 void m6362 (t1249 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6362_MI);
	{
		t876* L_0 = m4624(NULL, 8, &m4624_MI);
		m6363(__this, L_0, &m6363_MI);
		return;
	}
}
extern MethodInfo m6363_MI;
 void m6363 (t1249 * __this, t876* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6363_MI);
	{
		m6348(__this, &m6348_MI);
		m6351(__this, (t27*) &_stringLiteral1115, &m6351_MI);
		__this->f1 = ((int32_t)160);
		VirtActionInvoker1< t876* >::Invoke(&m6353_MI, __this, p0);
		return;
	}
}
// Metadata Definition System.Security.Cryptography.HMACRIPEMD160
extern TypeInfo t1249_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6362_MI = 
{
	".ctor", (methodPointerType)&m6362, &t1249_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3439, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
static ParameterInfo t1249_m6363_ParameterInfos[] = 
{
	{"key", 0, 134221926, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t1249_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6363_MI = 
{
	".ctor", (methodPointerType)&m6363, &t1249_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1249_m6363_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3440, NULL, (methodPointerType)NULL};
static MethodInfo* t1249_MIs[] =
{
	&m6362_MI,
	&m6363_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m6393_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6377_MI;
extern MethodInfo m6378_MI;
extern MethodInfo m6384_MI;
extern MethodInfo m6385_MI;
extern MethodInfo m6378_MI;
extern MethodInfo m6382_MI;
extern MethodInfo m6357_MI;
extern MethodInfo m6358_MI;
extern MethodInfo m6359_MI;
extern MethodInfo m6356_MI;
extern MethodInfo m6352_MI;
extern MethodInfo m6353_MI;
static MethodInfo* t1249_VT[] =
{
	&m455_MI,
	&m6393_MI,
	&m456_MI,
	&m457_MI,
	&m6377_MI,
	&m6378_MI,
	&m6384_MI,
	&m6385_MI,
	&m6378_MI,
	&m6382_MI,
	&m6357_MI,
	&m6358_MI,
	&m6359_MI,
	&m6356_MI,
	&m6352_MI,
	&m6353_MI,
};
extern TypeInfo t167_TI;
extern TypeInfo t910_TI;
static Il2CppInterfaceOffsetPair t1249_IOs[] = 
{
	{ &t167_TI, 4},
	{ &t910_TI, 5},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1249_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1249__CustomAttributeCache = {
1,
NULL,
&t1249_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1249_0_0_0;
extern Il2CppType t1249_1_0_0;
extern TypeInfo t1245_TI;
struct t1249;
extern TypeInfo t1249_TI;
extern CustomAttributesCache t1249__CustomAttributeCache;
TypeInfo t1249_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACRIPEMD160", "System.Security.Cryptography", t1249_MIs, NULL, NULL, NULL, &t1245_TI, NULL, NULL, &t1249_TI, NULL, t1249_VT, &t1249__CustomAttributeCache, &t1249_TI, &t1249_0_0_0, &t1249_1_0_0, t1249_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1249), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, true, false, false, false, 2, 0, 0, 0, 0, 16, 0, 2};
#include "t1250.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1250_TI;
#include "t1250MD.h"

extern TypeInfo t1246_TI;
extern TypeInfo t1245_TI;
extern TypeInfo t123_TI;
extern TypeInfo t876_TI;
extern TypeInfo t462_TI;
extern MethodInfo m4624_MI;
extern MethodInfo m6365_MI;
extern MethodInfo m6348_MI;
extern MethodInfo m6351_MI;
extern MethodInfo m6353_MI;


extern MethodInfo m6364_MI;
 void m6364 (t1250 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6364_MI);
	{
		t876* L_0 = m4624(NULL, 8, &m4624_MI);
		m6365(__this, L_0, &m6365_MI);
		return;
	}
}
extern MethodInfo m6365_MI;
 void m6365 (t1250 * __this, t876* p0, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m6365_MI);
	{
		m6348(__this, &m6348_MI);
		m6351(__this, (t27*) &_stringLiteral534, &m6351_MI);
		__this->f1 = ((int32_t)160);
		VirtActionInvoker1< t876* >::Invoke(&m6353_MI, __this, p0);
		return;
	}
}
// Metadata Definition System.Security.Cryptography.HMACSHA1
extern TypeInfo t1250_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m6364_MI = 
{
	".ctor", (methodPointerType)&m6364, &t1250_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3441, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
static ParameterInfo t1250_m6365_ParameterInfos[] = 
{
	{"key", 0, 134221927, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t1250_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m6365_MI = 
{
	".ctor", (methodPointerType)&m6365, &t1250_TI, &t123_0_0_0, RuntimeInvoker_t123_t25, t1250_m6365_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3442, NULL, (methodPointerType)NULL};
static MethodInfo* t1250_MIs[] =
{
	&m6364_MI,
	&m6365_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m6393_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
extern MethodInfo m6377_MI;
extern MethodInfo m6378_MI;
extern MethodInfo m6384_MI;
extern MethodInfo m6385_MI;
extern MethodInfo m6378_MI;
extern MethodInfo m6382_MI;
extern MethodInfo m6357_MI;
extern MethodInfo m6358_MI;
extern MethodInfo m6359_MI;
extern MethodInfo m6356_MI;
extern MethodInfo m6352_MI;
extern MethodInfo m6353_MI;
static MethodInfo* t1250_VT[] =
{
	&m455_MI,
	&m6393_MI,
	&m456_MI,
	&m457_MI,
	&m6377_MI,
	&m6378_MI,
	&m6384_MI,
	&m6385_MI,
	&m6378_MI,
	&m6382_MI,
	&m6357_MI,
	&m6358_MI,
	&m6359_MI,
	&m6356_MI,
	&m6352_MI,
	&m6353_MI,
};
extern TypeInfo t167_TI;
extern TypeInfo t910_TI;
static Il2CppInterfaceOffsetPair t1250_IOs[] = 
{
	{ &t167_TI, 4},
	{ &t910_TI, 5},
};
extern TypeInfo t541_TI;
extern MethodInfo m2528_MI;
void t1250_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, true, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1250__CustomAttributeCache = {
1,
NULL,
&t1250_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1250_0_0_0;
extern Il2CppType t1250_1_0_0;
extern TypeInfo t1245_TI;
struct t1250;
extern TypeInfo t1250_TI;
extern CustomAttributesCache t1250__CustomAttributeCache;
TypeInfo t1250_TI = 
{
	&g_mscorlib_dll_Image, NULL, "HMACSHA1", "System.Security.Cryptography", t1250_MIs, NULL, NULL, NULL, &t1245_TI, NULL, NULL, &t1250_TI, NULL, t1250_VT, &t1250__CustomAttributeCache, &t1250_TI, &t1250_0_0_0, &t1250_1_0_0, t1250_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1250), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, true, false, false, false, 2, 0, 0, 0, 0, 16, 0, 2};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
