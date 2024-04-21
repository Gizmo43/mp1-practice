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

void TAddres::SetCountry(string country) {
	this->country = country;
}
void TAddres::SetArea(string area) {
	this->area = area;
}
void TAddres::SetCity(string city) {
	this->city = city;
}
void TAddres::SetDistrict(string district) {
	this->district = district;
}
void TAddres::SetStreet(string street) {
	this->street = street;
}
void TAddres::SetHouse(int house) {
	this->house = house;
}
void TAddres::SetFlat(int flat) {
	this->flat = flat;
}