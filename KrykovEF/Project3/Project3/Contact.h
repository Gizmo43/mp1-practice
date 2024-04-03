#pragma once

#include<stdlib.h>
#include<stdio.h>
#define STRING_LEN 255


typedef struct {
	char* country; 
	char* area; 
	char* city;
	char* district; 
	char* street; 
	int house;
	int flat;
} TAddress;

typedef struct {
	long long phone_number;
	TAddress address;
}TContact;
