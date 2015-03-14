#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t188;
struct t188_marshaled;

 void m597 (t188 * __this, float p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t188_marshal(const t188& unmarshaled, t188_marshaled& marshaled);
void t188_marshal_back(const t188_marshaled& marshaled, t188& unmarshaled);
void t188_marshal_cleanup(t188_marshaled& marshaled);
