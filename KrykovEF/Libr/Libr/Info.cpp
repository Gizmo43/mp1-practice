#include "Info.h"

Info::Info(){}
Info::Info(long long int phone_number, const TAddres& addres)
{
	this->phone_number = phone_number;
	this->addres = addres;
}
void Info::SetNumber(long long int n) {
	this->phone_number = n;
}
void Info::SetCountry(string country) {
	this->addres.SetCountry(country);
}
void Info::SetArea(string area) {
	this->addres.SetArea(area);
}
void Info::SetCity(string city) {
	this->addres.SetCity(city);
}
void Info::SetDistrict(string district) {
	this->addres.SetDistrict(district);
}
void Info::SetStreet(string street) {
	this->addres.SetStreet(street);
}
void Info::SetHouse(int house) {
	this->addres.SetHouse(house);
}
void Info::SetFlat(int flat) {
	this->addres.SetFlat(flat);
}