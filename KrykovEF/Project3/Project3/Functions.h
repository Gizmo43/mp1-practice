#pragma once
#include "Library.h"
#include <string.h>

void alloc(TLib* l, int n);
// void free(...)
int compare(const void* a, const void* b);
int strcmp(const char* str1, const char* str2);

void scan(TLib* l1, const char* name);
void write(TLib* l1, const char* name);
void clean(TLib* l1);