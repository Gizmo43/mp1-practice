#pragma once

#include <string>
#include "Date.h"

class TPerson
{
private:
	TDate birth;
	std::string first_name;
	std::string second_name;
	std::string last_name;
public:
	TPerson();
	TPerson(const std::string& fn, const std::string& sn, const std::string& ln, const TDate& birth);
	//Set methods
	friend std::ostream& operator<<(std::ostream& out, const TPerson& p)
	{
		out << p.first_name << " " << p.second_name << " " <<
			p.last_name << " " << p.birth << std::endl;
		return out;
	}




};
