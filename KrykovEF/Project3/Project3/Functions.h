#pragma once
#include "Library.h"
#include <string.h>

void alloc(TLib* l, int n);
int compare(const void* a, const void* b);

void scan(TLib* l1, const char* name);
void write(TLib* l1, const char* name);
void clean(TLib* l1);