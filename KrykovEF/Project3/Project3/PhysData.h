#pragma once

#include <stdlib.h>
#include <stdio.h>


#define STRING_LEN 255

typedef enum {
	Male = 0,
	Female = 1,
} Gender;

typedef struct {
	Gender gender; // Gender
	char* nation;
	int height;
	int weight;
}TPhysData;
