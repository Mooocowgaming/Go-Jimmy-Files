#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1024;
struct t1024_marshaled;

void t1024_marshal(const t1024& unmarshaled, t1024_marshaled& marshaled);
void t1024_marshal_back(const t1024_marshaled& marshaled, t1024& unmarshaled);
void t1024_marshal_cleanup(t1024_marshaled& marshaled);
