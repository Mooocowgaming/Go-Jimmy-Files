#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t770_TI;
#include "t770.h"
#include "t770MD.h"
extern MethodInfo m3563_MI;
extern TypeInfo t770_TI;
extern MethodInfo m3563_MI;
extern TypeInfo t770_TI;
extern MethodInfo m3563_MI;
extern TypeInfo t770_TI;
extern MethodInfo m3563_MI;
extern TypeInfo t770_TI;
extern MethodInfo m3563_MI;
extern TypeInfo t770_TI;
extern MethodInfo m3563_MI;
extern TypeInfo t770_TI;
extern MethodInfo m3563_MI;
extern TypeInfo t192_TI;
#include "t192.h"
#include "t192MD.h"
extern MethodInfo m637_MI;
extern TypeInfo t770_TI;
extern MethodInfo m3563_MI;
extern TypeInfo t771_TI;
#include "t771.h"
#include "t771MD.h"
extern MethodInfo m3564_MI;
extern TypeInfo t770_TI;
extern MethodInfo m3563_MI;
extern TypeInfo t770_TI;
extern MethodInfo m3563_MI;
extern TypeInfo t770_TI;
extern MethodInfo m3563_MI;
extern TypeInfo t770_TI;
extern MethodInfo m3563_MI;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t770 * tmp;
		tmp = (t770 *)il2cpp_codegen_object_new (&t770_TI);
		m3563(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), &m3563_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t770 * tmp;
		tmp = (t770 *)il2cpp_codegen_object_new (&t770_TI);
		m3563(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), &m3563_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t770 * tmp;
		tmp = (t770 *)il2cpp_codegen_object_new (&t770_TI);
		m3563(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), &m3563_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t770 * tmp;
		tmp = (t770 *)il2cpp_codegen_object_new (&t770_TI);
		m3563(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), &m3563_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t770 * tmp;
		tmp = (t770 *)il2cpp_codegen_object_new (&t770_TI);
		m3563(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), &m3563_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t770 * tmp;
		tmp = (t770 *)il2cpp_codegen_object_new (&t770_TI);
		m3563(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), &m3563_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t770 * tmp;
		tmp = (t770 *)il2cpp_codegen_object_new (&t770_TI);
		m3563(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), &m3563_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t192 * tmp;
		tmp = (t192 *)il2cpp_codegen_object_new (&t192_TI);
		m637(tmp, &m637_MI);
		extern MethodInfo m638_MI;
		m638(tmp, true, &m638_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t770 * tmp;
		tmp = (t770 *)il2cpp_codegen_object_new (&t770_TI);
		m3563(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), &m3563_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t771 * tmp;
		tmp = (t771 *)il2cpp_codegen_object_new (&t771_TI);
		m3564(tmp, &m3564_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t770 * tmp;
		tmp = (t770 *)il2cpp_codegen_object_new (&t770_TI);
		m3563(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), &m3563_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t770 * tmp;
		tmp = (t770 *)il2cpp_codegen_object_new (&t770_TI);
		m3563(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), &m3563_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		t770 * tmp;
		tmp = (t770 *)il2cpp_codegen_object_new (&t770_TI);
		m3563(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), &m3563_MI);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		t770 * tmp;
		tmp = (t770 *)il2cpp_codegen_object_new (&t770_TI);
		m3563(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), &m3563_MI);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_Assembly__CustomAttributeCache = {
14,
NULL,
&g_UnityEngine_Assembly_CustomAttributesCacheGenerator
};
