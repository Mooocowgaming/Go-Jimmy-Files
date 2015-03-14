#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t170;
struct t170_marshaled;
#include "t6.h"
#include "t447.h"

 int32_t m1947 (t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t6  m527 (t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m1948 (t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t170_marshal(const t170& unmarshaled, t170_marshaled& marshaled);
void t170_marshal_back(const t170_marshaled& marshaled, t170& unmarshaled);
void t170_marshal_cleanup(t170_marshaled& marshaled);
