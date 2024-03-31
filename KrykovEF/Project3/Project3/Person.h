#pragma once

#include "date.h"
#include "PhysData.h"
#include "Contact.h"
#include <string.h>
#include <stdlib.h>

#define STRING_LEN 255


typedef struct {
	char* FirstName; // char *
	char* LastName; // char *
	char* SecondName; // char *
	TDate birth;
	TPhysData par;
	TContact info;

}TPerson;



