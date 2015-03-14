#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t185;
struct t185_marshaled;

 void m2953 (t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2954 (t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2955 (t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t185_marshal(const t185& unmarshaled, t185_marshaled& marshaled);
void t185_marshal_back(const t185_marshaled& marshaled, t185& unmarshaled);
void t185_marshal_cleanup(t185_marshaled& marshaled);
