#pragma once

#include <string>
#include <stdlib.h>
#include "Date.h"
#include "Info.h"
#include "PhysData.h"


class TPerson
{
private:
	TDate birth;
	TPhysData phys;
public:
	std::string first_name;
	std::string second_name;
	std::string last_name;
	Info info;
	TPerson();
	TPerson(const std::string& fn, const std::string& sn, const std::string& ln, const TDate& birth, const TPhysData& phys, const Info& info);
	
	void SetDay(int);
	void SetMonth(int);
	void SetYear(int);
	void SetGender(string);
	void SetNation(string);
	void SetH(int);
	void SetW(int);

	friend std::ostream& operator<<(std::ostream& out, const TPerson& p)
	{
		out << p.first_name << " " << p.second_name << " " <<
			p.last_name << " " << p.birth << " " << p.phys << " " << p.info << " " << std::endl;
		return out;
	}
};
