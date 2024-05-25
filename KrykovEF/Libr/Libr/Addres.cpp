#include "Addres.h"


TAddres::TAddres() {}
TAddres::TAddres(const std::string& country, const std::string& area, const std::string& city, const std::string& district, const std::string& street, int house, int flat)
{
	this->country = country;
	this->area = area;
	this->city = city;
	this->district = district;
	this->street = street;
	this->house = house;
	this->flat = flat;
}