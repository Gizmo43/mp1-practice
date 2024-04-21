#include "Person.h"


TPerson::TPerson() {}
TPerson::TPerson(const std::string& fn, const std::string& sn, const std::string& ln, const TDate& birth)
{
	this->first_name = fn;
	this->last_name = sn;
	this->second_name = ln;
	this->birth = birth;
}