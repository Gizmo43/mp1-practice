#pragma once

#include <stdlib.h>
#include <stdio.h>


#define STRING_LEN 255

typedef enum {
	MALE = 0,
	FEMALE = 1,
} Gender;

typedef struct {
	char* gender; // Gender
	char* nation;  // char *
	int height;
	int weight;
}TPhysData;
