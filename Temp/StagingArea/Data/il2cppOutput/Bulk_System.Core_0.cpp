#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t772.h"
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
extern TypeInfo t772_TI;
#include "t772MD.h"


#include "t122.h"

// Metadata Definition <Module>
static MethodInfo* t772_MIs[] =
{
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t772_0_0_0;
extern Il2CppType t772_1_0_0;
struct t772;
extern TypeInfo t772_TI;
TypeInfo t772_TI = 
{
	&g_System_Core_dll_Image, NULL, "<Module>", "", t772_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t772_TI, NULL, NULL, &EmptyCustomAttributesCache, &t772_TI, &t772_0_0_0, &t772_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t772), 0, -1, 0, 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t771.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t771_TI;
#include "t771MD.h"

#include "t123.h"
#include "t591MD.h"
extern MethodInfo m3403_MI;


extern MethodInfo m3564_MI;
 void m3564 (t771 * __this, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3564_MI);
	{
		m3403(__this, &m3403_MI);
		return;
	}
}
// Metadata Definition System.Runtime.CompilerServices.ExtensionAttribute
extern TypeInfo t771_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123 (MethodInfo* method, void* obj, void** args);
MethodInfo m3564_MI = 
{
	".ctor", (methodPointerType)&m3564, &t771_TI, &t123_0_0_0, RuntimeInvoker_t123, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1, NULL, (methodPointerType)NULL};
static MethodInfo* t771_MIs[] =
{
	&m3564_MI,
	NULL
};
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m457_MI;
static MethodInfo* t771_VT[] =
{
	&m3404_MI,
	&m352_MI,
	&m3405_MI,
	&m457_MI,
};
extern TypeInfo t704_TI;
static Il2CppInterfaceOffsetPair t771_IOs[] = 
{
	{ &t704_TI, 4},
};
extern TypeInfo t724_TI;
#include "t724.h"
#include "t724MD.h"
extern MethodInfo m3439_MI;
void t771_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t724 * tmp;
		tmp = (t724 *)il2cpp_codegen_object_new (&t724_TI);
		m3439(tmp, 69, &m3439_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t771__CustomAttributeCache = {
1,
NULL,
&t771_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t771_0_0_0;
extern Il2CppType t771_1_0_0;
extern TypeInfo t591_TI;
struct t771;
extern TypeInfo t771_TI;
extern CustomAttributesCache t771__CustomAttributeCache;
TypeInfo t771_TI = 
{
	&g_System_Core_dll_Image, NULL, "ExtensionAttribute", "System.Runtime.CompilerServices", t771_MIs, NULL, NULL, NULL, &t591_TI, NULL, NULL, &t771_TI, NULL, t771_VT, &t771__CustomAttributeCache, &t771_TI, &t771_0_0_0, &t771_1_0_0, t771_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t771), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t773.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t773_TI;
#include "t773MD.h"

#include "t25.h"
#include "t27.h"
#include "t165.h"
extern TypeInfo t165_TI;
#include "t165MD.h"
extern MethodInfo m489_MI;


extern MethodInfo m3565_MI;
 void m3565 (t25 * __this, t25 * p0, t25 * p1, MethodInfo* method){
	StackTraceSentry _stackTraceSentry(&m3565_MI);
	{
		if (p0)
		{
			goto IL_0011;
		}
	}
	{
		t165 * L_0 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_0, (t27*) &_stringLiteral216, &m489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0011:
	{
		if (p1)
		{
			goto IL_0022;
		}
	}
	{
		t165 * L_1 = (t165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t165_TI));
		m489(L_1, (t27*) &_stringLiteral217, &m489_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0022:
	{
		return;
	}
}
// Metadata Definition System.Linq.Check
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t773_m3565_ParameterInfos[] = 
{
	{"source", 0, 134217729, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"predicate", 1, 134217730, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t773_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t123_t25_t25 (MethodInfo* method, void* obj, void** args);
MethodInfo m3565_MI = 
{
	"SourceAndPredicate", (methodPointerType)&m3565, &t773_TI, &t123_0_0_0, RuntimeInvoker_t123_t25_t25, t773_m3565_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2, NULL, (methodPointerType)NULL};
static MethodInfo* t773_MIs[] =
{
	&m3565_MI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t773_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t773_0_0_0;
extern Il2CppType t773_1_0_0;
extern TypeInfo t25_TI;
struct t773;
extern TypeInfo t773_TI;
TypeInfo t773_TI = 
{
	&g_System_Core_dll_Image, NULL, "Check", "System.Linq", t773_MIs, NULL, NULL, NULL, &t25_TI, NULL, NULL, &t773_TI, NULL, t773_VT, &EmptyCustomAttributesCache, &t773_TI, &t773_0_0_0, &t773_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t773), 0, -1, 0, 0, -1, 1048960, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t774.h"
extern Il2CppGenericContainer t774_IGC;
extern TypeInfo t774_gp_TSource_0_TI;
Il2CppGenericParamFull t774_gp_TSource_0_TI_GenericParamFull = { { &t774_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* t774_IGPA[1] = 
{
	&t774_gp_TSource_0_TI_GenericParamFull,
};
extern TypeInfo t774_TI;
Il2CppGenericContainer t774_IGC = { { NULL, NULL }, NULL, &t774_TI, 1, 0, t774_IGPA };
extern TypeInfo t774_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3566_MI = 
{
	".ctor", NULL, &t774_TI, &t123_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 5, NULL, (methodPointerType)NULL};
extern TypeInfo t774_TI;
extern Il2CppType t774_gp_0_0_0_0;
extern CustomAttributesCache t774__CustomAttributeCache_m3567;
MethodInfo m3567_MI = 
{
	"System.Collections.Generic.IEnumerator<TSource>.get_Current", NULL, &t774_TI, &t774_gp_0_0_0_0, NULL, NULL, &t774__CustomAttributeCache_m3567, 2529, 0, 9, 0, false, false, 6, NULL, (methodPointerType)NULL};
extern TypeInfo t774_TI;
extern Il2CppType t25_0_0_0;
extern CustomAttributesCache t774__CustomAttributeCache_m3568;
MethodInfo m3568_MI = 
{
	"System.Collections.IEnumerator.get_Current", NULL, &t774_TI, &t25_0_0_0, NULL, NULL, &t774__CustomAttributeCache_m3568, 2529, 0, 4, 0, false, false, 7, NULL, (methodPointerType)NULL};
extern TypeInfo t774_TI;
extern Il2CppType t78_0_0_0;
extern CustomAttributesCache t774__CustomAttributeCache_m3569;
MethodInfo m3569_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", NULL, &t774_TI, &t78_0_0_0, NULL, NULL, &t774__CustomAttributeCache_m3569, 481, 0, 7, 0, false, false, 8, NULL, (methodPointerType)NULL};
extern TypeInfo t774_TI;
extern Il2CppType t777_0_0_0;
extern CustomAttributesCache t774__CustomAttributeCache_m3570;
MethodInfo m3570_MI = 
{
	"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", NULL, &t774_TI, &t777_0_0_0, NULL, NULL, &t774__CustomAttributeCache_m3570, 481, 0, 8, 0, false, false, 9, NULL, (methodPointerType)NULL};
extern TypeInfo t774_TI;
extern Il2CppType t125_0_0_0;
MethodInfo m3571_MI = 
{
	"MoveNext", NULL, &t774_TI, &t125_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 10, NULL, (methodPointerType)NULL};
extern TypeInfo t774_TI;
extern Il2CppType t123_0_0_0;
extern CustomAttributesCache t774__CustomAttributeCache_m3572;
MethodInfo m3572_MI = 
{
	"Dispose", NULL, &t774_TI, &t123_0_0_0, NULL, NULL, &t774__CustomAttributeCache_m3572, 486, 0, 6, 0, false, false, 11, NULL, (methodPointerType)NULL};
static MethodInfo* t774_MIs[] =
{
	&m3566_MI,
	&m3567_MI,
	&m3568_MI,
	&m3569_MI,
	&m3570_MI,
	&m3571_MI,
	&m3572_MI,
	NULL
};
extern MethodInfo m3567_MI;
static PropertyInfo t774____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo = 
{
	&t774_TI, "System.Collections.Generic.IEnumerator<TSource>.Current", &m3567_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3568_MI;
static PropertyInfo t774____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t774_TI, "System.Collections.IEnumerator.Current", &m3568_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t774_PIs[] =
{
	&t774____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo,
	&t774____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType t778_0_0_3;
FieldInfo t774_f0_FieldInfo = 
{
	"source", &t778_0_0_3, &t774_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t777_0_0_3;
FieldInfo t774_f1_FieldInfo = 
{
	"<$s_92>__0", &t777_0_0_3, &t774_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t774_gp_0_0_0_3;
FieldInfo t774_f2_FieldInfo = 
{
	"<element>__1", &t774_gp_0_0_0_3, &t774_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t779_0_0_3;
FieldInfo t774_f3_FieldInfo = 
{
	"predicate", &t779_0_0_3, &t774_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t134_0_0_3;
FieldInfo t774_f4_FieldInfo = 
{
	"$PC", &t134_0_0_3, &t774_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t774_gp_0_0_0_3;
FieldInfo t774_f5_FieldInfo = 
{
	"$current", &t774_gp_0_0_0_3, &t774_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t778_0_0_3;
FieldInfo t774_f6_FieldInfo = 
{
	"<$>source", &t778_0_0_3, &t774_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t779_0_0_3;
FieldInfo t774_f7_FieldInfo = 
{
	"<$>predicate", &t779_0_0_3, &t774_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t774_FIs[] =
{
	&t774_f0_FieldInfo,
	&t774_f1_FieldInfo,
	&t774_f2_FieldInfo,
	&t774_f3_FieldInfo,
	&t774_f4_FieldInfo,
	&t774_f5_FieldInfo,
	&t774_f6_FieldInfo,
	&t774_f7_FieldInfo,
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t774_0_0_0;
extern Il2CppType t774_1_0_0;
struct t774;
extern TypeInfo t774_TI;
extern TypeInfo t512_TI;
TypeInfo t774_TI = 
{
	&g_System_Core_dll_Image, NULL, "<CreateWhereIterator>c__Iterator1D`1", "", t774_MIs, t774_PIs, t774_FIs, NULL, NULL, NULL, &t512_TI, &t774_TI, NULL, NULL, NULL, NULL, &t774_0_0_0, &t774_1_0_0, NULL, NULL, &t774_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 8, 0, 0, 0, 0, 0};
extern TypeInfo t152_TI;
#include "t152.h"
#include "t152MD.h"
extern MethodInfo m475_MI;
void t774_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t152 * tmp;
		tmp = (t152 *)il2cpp_codegen_object_new (&t152_TI);
		m475(tmp, &m475_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
#include "t180.h"
#include "t180MD.h"
extern MethodInfo m567_MI;
void t774_CustomAttributesCacheGenerator_m3567(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t774_CustomAttributesCacheGenerator_m3568(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t774_CustomAttributesCacheGenerator_m3569(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t774_CustomAttributesCacheGenerator_m3570(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t774_CustomAttributesCacheGenerator_m3572(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t774__CustomAttributeCache = {
1,
NULL,
&t774_CustomAttributesCacheGenerator
};
CustomAttributesCache t774__CustomAttributeCache_m3567 = {
1,
NULL,
&t774_CustomAttributesCacheGenerator_m3567
};
CustomAttributesCache t774__CustomAttributeCache_m3568 = {
1,
NULL,
&t774_CustomAttributesCacheGenerator_m3568
};
CustomAttributesCache t774__CustomAttributeCache_m3569 = {
1,
NULL,
&t774_CustomAttributesCacheGenerator_m3569
};
CustomAttributesCache t774__CustomAttributeCache_m3570 = {
1,
NULL,
&t774_CustomAttributesCacheGenerator_m3570
};
CustomAttributesCache t774__CustomAttributeCache_m3572 = {
1,
NULL,
&t774_CustomAttributesCacheGenerator_m3572
};
#include "t512.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t512_TI;
#include "t512MD.h"



// Metadata Definition System.Linq.Enumerable
extern TypeInfo t512_TI;
extern Il2CppType t780_0_0_0;
extern Il2CppGenericContainer m3573_IGC;
extern TypeInfo m3573_gp_TSource_0_TI;
Il2CppGenericParamFull m3573_gp_TSource_0_TI_GenericParamFull = { { &m3573_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* m3573_IGPA[1] = 
{
	&m3573_gp_TSource_0_TI_GenericParamFull,
};
extern MethodInfo m3573_MI;
Il2CppGenericContainer m3573_IGC = { { NULL, NULL }, NULL, &m3573_MI, 1, 1, m3573_IGPA };
extern CustomAttributesCache t512__CustomAttributeCache_m3573;
MethodInfo m3573_MI = 
{
	"Where", NULL, &t512_TI, &t780_0_0_0, NULL, NULL, &t512__CustomAttributeCache_m3573, 150, 0, 255, 0, true, false, 3, NULL, (methodPointerType)NULL};
extern TypeInfo t512_TI;
extern Il2CppType t782_0_0_0;
extern Il2CppGenericContainer m3574_IGC;
extern TypeInfo m3574_gp_TSource_0_TI;
Il2CppGenericParamFull m3574_gp_TSource_0_TI_GenericParamFull = { { &m3574_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* m3574_IGPA[1] = 
{
	&m3574_gp_TSource_0_TI_GenericParamFull,
};
extern MethodInfo m3574_MI;
Il2CppGenericContainer m3574_IGC = { { NULL, NULL }, NULL, &m3574_MI, 1, 1, m3574_IGPA };
extern CustomAttributesCache t512__CustomAttributeCache_m3574;
MethodInfo m3574_MI = 
{
	"CreateWhereIterator", NULL, &t512_TI, &t782_0_0_0, NULL, NULL, &t512__CustomAttributeCache_m3574, 145, 0, 255, 0, true, false, 4, NULL, (methodPointerType)NULL};
static MethodInfo* t512_MIs[] =
{
	&m3573_MI,
	&m3574_MI,
	NULL
};
extern TypeInfo t774_TI;
static TypeInfo* t512_TI__nestedTypes[2] =
{
	&t774_TI,
	NULL
};
extern MethodInfo m455_MI;
extern MethodInfo m352_MI;
extern MethodInfo m456_MI;
extern MethodInfo m457_MI;
static MethodInfo* t512_VT[] =
{
	&m455_MI,
	&m352_MI,
	&m456_MI,
	&m457_MI,
};
extern TypeInfo t771_TI;
extern MethodInfo m3564_MI;
void t512_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t771 * tmp;
		tmp = (t771 *)il2cpp_codegen_object_new (&t771_TI);
		m3564(tmp, &m3564_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t771_TI;
extern MethodInfo m3564_MI;
void t512_CustomAttributesCacheGenerator_m3573(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t771 * tmp;
		tmp = (t771 *)il2cpp_codegen_object_new (&t771_TI);
		m3564(tmp, &m3564_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t180_TI;
extern MethodInfo m567_MI;
void t512_CustomAttributesCacheGenerator_m3574(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t180 * tmp;
		tmp = (t180 *)il2cpp_codegen_object_new (&t180_TI);
		m567(tmp, &m567_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t512__CustomAttributeCache = {
1,
NULL,
&t512_CustomAttributesCacheGenerator
};
CustomAttributesCache t512__CustomAttributeCache_m3573 = {
1,
NULL,
&t512_CustomAttributesCacheGenerator_m3573
};
CustomAttributesCache t512__CustomAttributeCache_m3574 = {
1,
NULL,
&t512_CustomAttributesCacheGenerator_m3574
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t512_0_0_0;
extern Il2CppType t512_1_0_0;
extern TypeInfo t25_TI;
struct t512;
extern TypeInfo t512_TI;
extern CustomAttributesCache t512__CustomAttributeCache;
extern CustomAttributesCache t512__CustomAttributeCache_m3573;
extern CustomAttributesCache t512__CustomAttributeCache_m3574;
TypeInfo t512_TI = 
{
	&g_System_Core_dll_Image, NULL, "Enumerable", "System.Linq", t512_MIs, NULL, NULL, NULL, &t25_TI, t512_TI__nestedTypes, NULL, &t512_TI, NULL, t512_VT, &t512__CustomAttributeCache, &t512_TI, &t512_0_0_0, &t512_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t512), 0, -1, 0, 0, -1, 1048961, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 1, 4, 0, 0};
#include "t775.h"
extern Il2CppGenericContainer t775_IGC;
extern TypeInfo t775_gp_T_0_TI;
Il2CppGenericParamFull t775_gp_T_0_TI_GenericParamFull = { { &t775_IGC, 0}, {NULL, "T", 0, 0, NULL} };
extern TypeInfo t775_gp_TResult_1_TI;
Il2CppGenericParamFull t775_gp_TResult_1_TI_GenericParamFull = { { &t775_IGC, 1}, {NULL, "TResult", 0, 0, NULL} };
static Il2CppGenericParamFull* t775_IGPA[2] = 
{
	&t775_gp_T_0_TI_GenericParamFull,
	&t775_gp_TResult_1_TI_GenericParamFull,
};
extern TypeInfo t775_TI;
Il2CppGenericContainer t775_IGC = { { NULL, NULL }, NULL, &t775_TI, 2, 0, t775_IGPA };
extern Il2CppType t25_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t775_m3575_ParameterInfos[] = 
{
	{"object", 0, 134217735, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"method", 1, 134217736, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern TypeInfo t775_TI;
extern Il2CppType t123_0_0_0;
MethodInfo m3575_MI = 
{
	".ctor", NULL, &t775_TI, &t123_0_0_0, NULL, t775_m3575_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 12, NULL, (methodPointerType)NULL};
extern Il2CppType t775_gp_0_0_0_0;
static ParameterInfo t775_m3576_ParameterInfos[] = 
{
	{"arg1", 0, 134217737, &EmptyCustomAttributesCache, &t775_gp_0_0_0_0},
};
extern TypeInfo t775_TI;
extern Il2CppType t775_gp_1_0_0_0;
MethodInfo m3576_MI = 
{
	"Invoke", NULL, &t775_TI, &t775_gp_1_0_0_0, NULL, t775_m3576_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 13, NULL, (methodPointerType)NULL};
extern Il2CppType t775_gp_0_0_0_0;
extern Il2CppType t219_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t775_m3577_ParameterInfos[] = 
{
	{"arg1", 0, 134217738, &EmptyCustomAttributesCache, &t775_gp_0_0_0_0},
	{"callback", 1, 134217739, &EmptyCustomAttributesCache, &t219_0_0_0},
	{"object", 2, 134217740, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern TypeInfo t775_TI;
extern Il2CppType t218_0_0_0;
MethodInfo m3577_MI = 
{
	"BeginInvoke", NULL, &t775_TI, &t218_0_0_0, NULL, t775_m3577_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 14, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t775_m3578_ParameterInfos[] = 
{
	{"result", 0, 134217741, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t775_TI;
extern Il2CppType t775_gp_1_0_0_0;
MethodInfo m3578_MI = 
{
	"EndInvoke", NULL, &t775_TI, &t775_gp_1_0_0_0, NULL, t775_m3578_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 15, NULL, (methodPointerType)NULL};
static MethodInfo* t775_MIs[] =
{
	&m3575_MI,
	&m3576_MI,
	&m3577_MI,
	&m3578_MI,
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t775_0_0_0;
extern Il2CppType t775_1_0_0;
struct t775;
extern TypeInfo t775_TI;
TypeInfo t775_TI = 
{
	&g_System_Core_dll_Image, NULL, "Func`2", "System", t775_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t775_TI, NULL, NULL, NULL, NULL, &t775_0_0_0, &t775_1_0_0, NULL, NULL, &t775_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
