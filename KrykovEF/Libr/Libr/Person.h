#pragma once

#include <string>
#include <stdlib.h>
#include "Date.h"
#include "Info.h"
#include "PhysData.h"


class TPerson
{
private:
	std::string first_name;
	std::string second_name;
	std::string last_name;
	TDate birth;
	TPhysData phys;
	Info info;
public:
	TPerson();
	TPerson(const std::string& fn, const std::string& sn, const std::string& ln, const TDate& birth, const TPhysData& phys, const Info& info);
	//Set methods
	string GetFN() const;
	string GetSN() const;
	string GetLN() const;
	void SetFN(string);
	void SetSN(string);
	void SetLN(string);
	void SetDay(int);
	void SetMonth(int);
	void SetYear(int);
	void SetGender(string);
	void SetNation(string);
	void SetH(int);
	void SetW(int);
	void SetNumber(long long int);
	void SetCountry(string);
	void SetArea(string);
	void SetCity(string);
	void SetDistrict(string);
	void SetStreet(string);
	void SetHouse(int);
	void SetFlat(int);

	friend std::ostream& operator<<(std::ostream& out, const TPerson& p)
	{
		out << p.first_name << " " << p.second_name << " " <<
			p.last_name << " " << p.birth << " " << p.phys << " " << p.info << " " << std::endl;
		return out;
	}
};
