﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
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
#include "stringLiterals.h"

extern TypeInfo t195_TI;
extern TypeInfo t196_TI;
extern TypeInfo t198_TI;
#include "utils/RegisterRuntimeInitializeAndCleanup.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_AssemblyU2DUnityScript_Assembly_Types[4] = 
{
	&t195_TI,
	&t196_TI,
	&t198_TI,
	NULL,
};
extern Il2CppImage g_AssemblyU2DUnityScript_Image;
extern CustomAttributesCache g_AssemblyU2DUnityScript_Assembly__CustomAttributeCache;
Il2CppAssembly g_AssemblyU2DUnityScript_Assembly = 
{
	{ "Assembly-UnityScript", 0, 0, 0, { 0 }, 32772, 0, 0, 0, 0, 0, 0 },
	&g_AssemblyU2DUnityScript_Image,
	&g_AssemblyU2DUnityScript_Assembly__CustomAttributeCache,
};
Il2CppImage g_AssemblyU2DUnityScript_Image = 
{
	 "Assembly-UnityScript.dll" ,
	&g_AssemblyU2DUnityScript_Assembly,
	g_AssemblyU2DUnityScript_Assembly_Types,
	3,
};
static void s_AssemblyU2DUnityScriptRegistration()
{
	RegisterAssembly (&g_AssemblyU2DUnityScript_Assembly);
}
static il2cpp::utils::RegisterRuntimeInitializeAndCleanup s_AssemblyU2DUnityScriptRegistrationVariable(&s_AssemblyU2DUnityScriptRegistration, NULL);
