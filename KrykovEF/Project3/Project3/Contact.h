#pragma once

#include<stdlib.h>
#include<stdio.h>


typedef struct {
	char* country; // char *
	char* area; // char *
	char* city; // char *
	char* district; // char *
	char* street; // char *
	int house;
	int flat;
} TAddress;

typedef struct {
	long long phone_number;
	TAddress address;
}TContact;
