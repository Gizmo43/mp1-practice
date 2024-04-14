#pragma once

#include "date.h"
#include "PhysData.h"
#include "Contact.h"
#include <string.h>
#include <stdlib.h>

#define STRING_LEN 255


typedef struct {
	char* FirstName;
	char* LastName; 
	char* SecondName;  
	TDate birth;
	TPhysData par;
	TContact info;
}TPerson;
