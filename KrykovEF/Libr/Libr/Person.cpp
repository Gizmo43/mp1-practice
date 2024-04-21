#include "Person.h"


TPerson::TPerson() {}
TPerson::TPerson(const std::string& fn, const std::string& sn, const std::string& ln, const TDate& birth, const TPhysData& phys, const Info& info)
{
	this->first_name = fn;
	this->second_name = sn;
	this->last_name = ln;
	this->birth = birth;
	this->phys = phys;
	this->info = info;
}

string TPerson::GetFN() const 
{
	return this->first_name;
}
string TPerson::GetSN() const 
{
	return this->second_name;
}
string TPerson::GetLN() const 
{
	return this->last_name;
}

void TPerson::SetFN(string fn) {
	this->first_name = fn;
}
void TPerson::SetSN(string sn) {
	this->second_name = sn;
}
void TPerson::SetLN(string ln) {
	this->last_name = ln;
}
void TPerson::SetDay(int day) {
	this->birth.SetDay(day);
}
void TPerson::SetMonth(int month) {
	this->birth.SetMonth(month);
}
void TPerson::SetYear(int year) {
	this->birth.SetYear(year);
}
void TPerson::SetGender(string gender) {
	this->phys.SetGender(gender);
}
void TPerson::SetNation(string nation) {
	this->phys.SetNation(nation);
}
void TPerson::SetH(int height) {
	this->phys.SetH(height);
}
void TPerson::SetW(int weight) {
	this->phys.SetW(weight);
}
void TPerson::SetNumber(long long int n) {
	this->info.SetNumber(n);
}
void TPerson::SetCountry(string country) {
	this->info.SetCountry(country);
}
void TPerson::SetArea(string area) {
	this->info.SetArea(area);
}
void TPerson::SetCity(string city) {
	this->info.SetCity(city);
}
void TPerson::SetDistrict(string district) {
	this->info.SetDistrict(district);
}
void TPerson::SetStreet(string street) {
	this->info.SetStreet(street);
}
void TPerson::SetHouse(int house) {
	this->info.SetHouse(house);
}
void TPerson::SetFlat(int flat) {
	this->info.SetFlat(flat);
}
