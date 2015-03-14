#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t192_TI;
#include "t192.h"
#include "t192MD.h"
extern MethodInfo m637_MI;
void g_replacements_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
}
CustomAttributesCache g_replacements_Assembly__CustomAttributeCache = {
1,
NULL,
&g_replacements_Assembly_CustomAttributesCacheGenerator
};
