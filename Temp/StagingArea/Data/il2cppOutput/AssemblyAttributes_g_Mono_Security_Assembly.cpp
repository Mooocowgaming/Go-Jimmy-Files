﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t541_TI;
#include "t541.h"
#include "t541MD.h"
extern MethodInfo m2528_MI;
extern TypeInfo t192_TI;
#include "t192.h"
#include "t192MD.h"
extern MethodInfo m637_MI;
extern TypeInfo t770_TI;
#include "t770.h"
#include "t770MD.h"
extern MethodInfo m3563_MI;
extern TypeInfo t791_TI;
#include "t791.h"
#include "t791MD.h"
extern MethodInfo m3584_MI;
extern TypeInfo t792_TI;
#include "t792.h"
#include "t792MD.h"
extern MethodInfo m3585_MI;
extern TypeInfo t543_TI;
#include "t543.h"
#include "t543MD.h"
extern MethodInfo m2530_MI;
extern TypeInfo t537_TI;
#include "t537.h"
#include "t537MD.h"
extern MethodInfo m2524_MI;
extern TypeInfo t789_TI;
#include "t789.h"
#include "t789MD.h"
extern MethodInfo m3582_MI;
extern TypeInfo t534_TI;
#include "t534.h"
#include "t534MD.h"
extern MethodInfo m2521_MI;
extern TypeInfo t538_TI;
#include "t538.h"
#include "t538MD.h"
extern MethodInfo m2525_MI;
extern TypeInfo t535_TI;
#include "t535.h"
#include "t535MD.h"
extern MethodInfo m2522_MI;
extern TypeInfo t788_TI;
#include "t788.h"
#include "t788MD.h"
extern MethodInfo m3581_MI;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t25 *) * cache->count, 0);
	{
		t541 * tmp;
		tmp = (t541 *)il2cpp_codegen_object_new (&t541_TI);
		m2528(tmp, false, &m2528_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t192 * tmp;
		tmp = (t192 *)il2cpp_codegen_object_new (&t192_TI);
		m637(tmp, &m637_MI);
		extern MethodInfo m638_MI;
		m638(tmp, true, &m638_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t770 * tmp;
		tmp = (t770 *)il2cpp_codegen_object_new (&t770_TI);
		m3563(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), &m3563_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t791 * tmp;
		tmp = (t791 *)il2cpp_codegen_object_new (&t791_TI);
		m3584(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), &m3584_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t792 * tmp;
		tmp = (t792 *)il2cpp_codegen_object_new (&t792_TI);
		m3585(tmp, true, &m3585_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t543 * tmp;
		tmp = (t543 *)il2cpp_codegen_object_new (&t543_TI);
		m2530(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), &m2530_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t537 * tmp;
		tmp = (t537 *)il2cpp_codegen_object_new (&t537_TI);
		m2524(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), &m2524_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t789 * tmp;
		tmp = (t789 *)il2cpp_codegen_object_new (&t789_TI);
		m3582(tmp, true, &m3582_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t534 * tmp;
		tmp = (t534 *)il2cpp_codegen_object_new (&t534_TI);
		m2521(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m2521_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t538 * tmp;
		tmp = (t538 *)il2cpp_codegen_object_new (&t538_TI);
		m2525(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), &m2525_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t535 * tmp;
		tmp = (t535 *)il2cpp_codegen_object_new (&t535_TI);
		m2522(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m2522_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t788 * tmp;
		tmp = (t788 *)il2cpp_codegen_object_new (&t788_TI);
		m3581(tmp, il2cpp_codegen_string_new_wrapper("en-US"), &m3581_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache = {
12,
NULL,
&g_Mono_Security_Assembly_CustomAttributesCacheGenerator
};
