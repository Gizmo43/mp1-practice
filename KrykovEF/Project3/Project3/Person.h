#pragma once
#include"date.h"
#include"PhysData.h"
#include"Contact.h"



typedef struct {
	char FirstName[50];
	char LastName[50];
	char SecondName[50];
	TDate birth;
	TPhysData par;
	TContact info;

}TPerson;



