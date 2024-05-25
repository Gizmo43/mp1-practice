#include "Info.h"

Info::Info(){}
Info::Info(long long int phone_number, const TAddres& addres)
{
	this->phone_number = phone_number;
	this->addres = addres;
}