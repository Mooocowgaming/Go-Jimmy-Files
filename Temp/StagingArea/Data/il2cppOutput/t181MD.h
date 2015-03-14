#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t181;
struct t181_marshaled;

 void m2545 (t181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2546 (t181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2547 (t181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t181_marshal(const t181& unmarshaled, t181_marshaled& marshaled);
void t181_marshal_back(const t181_marshaled& marshaled, t181& unmarshaled);
void t181_marshal_cleanup(t181_marshaled& marshaled);
