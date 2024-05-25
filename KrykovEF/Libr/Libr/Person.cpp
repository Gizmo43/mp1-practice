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

