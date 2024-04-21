#pragma once
#include "Addres.h"

class Info
{
private:
	long long int phone_number;
	TAddres addres;
public:
	Info();
	Info(long long int phone_number, const TAddres& addres);
	void SetNumber(long long int);
	void SetCountry(string);
	void SetArea(string);
	void SetCity(string);
	void SetDistrict(string);
	void SetStreet(string);
	void SetHouse(int);
	void SetFlat(int);

	friend std::ostream& operator<<(std::ostream& out, const Info& info)
	{
		out << "+" << info.phone_number << std::endl <<
			info.addres << std::endl;
		return out;
	}
};
