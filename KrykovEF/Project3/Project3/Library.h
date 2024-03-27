#pragma once

#include <stdlib.h>
#include <stdio.h>
#include "Person.h"

typedef struct {
	int n;
	TPerson* x;
}TLib;

void sortLib(TLib* lib);