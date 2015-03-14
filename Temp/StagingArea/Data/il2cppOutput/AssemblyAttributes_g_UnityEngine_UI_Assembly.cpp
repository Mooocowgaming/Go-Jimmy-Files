#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t192_TI;
#include "t192.h"
#include "t192MD.h"
extern MethodInfo m637_MI;
extern TypeInfo t534_TI;
#include "t534.h"
#include "t534MD.h"
extern MethodInfo m2521_MI;
extern TypeInfo t535_TI;
#include "t535.h"
#include "t535MD.h"
extern MethodInfo m2522_MI;
extern TypeInfo t536_TI;
#include "t536.h"
#include "t536MD.h"
extern MethodInfo m2523_MI;
extern TypeInfo t537_TI;
#include "t537.h"
#include "t537MD.h"
extern MethodInfo m2524_MI;
extern TypeInfo t538_TI;
#include "t538.h"
#include "t538MD.h"
extern MethodInfo m2525_MI;
extern TypeInfo t539_TI;
#include "t539.h"
#include "t539MD.h"
extern MethodInfo m2526_MI;
extern TypeInfo t540_TI;
#include "t540.h"
#include "t540MD.h"
extern MethodInfo m2527_MI;
extern TypeInfo t541_TI;
#include "t541.h"
#include "t541MD.h"
extern MethodInfo m2528_MI;
extern TypeInfo t542_TI;
#include "t542.h"
#include "t542MD.h"
extern MethodInfo m2529_MI;
extern TypeInfo t543_TI;
#include "t543.h"
#include "t543MD.h"
extern MethodInfo m2530_MI;
void g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t192 * tmp;
		tmp = (t192 *)il2cpp_codegen_object_new (&t192_TI);
		m637(tmp, &m637_MI);
		extern MethodInfo m638_MI;
		m638(tmp, true, &m638_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t534 * tmp;
		tmp = (t534 *)il2cpp_codegen_object_new (&t534_TI);
		m2521(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m2521_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t535 * tmp;
		tmp = (t535 *)il2cpp_codegen_object_new (&t535_TI);
		m2522(tmp, il2cpp_codegen_string_new_wrapper(""), &m2522_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t536 * tmp;
		tmp = (t536 *)il2cpp_codegen_object_new (&t536_TI);
		m2523(tmp, il2cpp_codegen_string_new_wrapper(""), &m2523_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t537 * tmp;
		tmp = (t537 *)il2cpp_codegen_object_new (&t537_TI);
		m2524(tmp, il2cpp_codegen_string_new_wrapper("Microsoft"), &m2524_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t538 * tmp;
		tmp = (t538 *)il2cpp_codegen_object_new (&t538_TI);
		m2525(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m2525_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t539 * tmp;
		tmp = (t539 *)il2cpp_codegen_object_new (&t539_TI);
		m2526(tmp, il2cpp_codegen_string_new_wrapper("1.0.0.0"), &m2526_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2527(tmp, il2cpp_codegen_string_new_wrapper("d4f464c7-9b15-460d-b4bc-2cacd1c1df73"), &m2527_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, false, &m2528_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t542 * tmp;
		tmp = (t542 *)il2cpp_codegen_object_new (&t542_TI);
		m2529(tmp, il2cpp_codegen_string_new_wrapper(""), &m2529_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t543 * tmp;
		tmp = (t543 *)il2cpp_codegen_object_new (&t543_TI);
		m2530(tmp, il2cpp_codegen_string_new_wrapper("Copyright © Microsoft 2013"), &m2530_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_UI_Assembly__CustomAttributeCache = {
11,
NULL,
&g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator
};
