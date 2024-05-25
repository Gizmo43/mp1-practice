#pragma once
#include "Addres.h"

class Info
{
public:
	long long int phone_number;
	TAddres addres;
	Info();
	Info(long long int phone_number, const TAddres& addres);

	friend std::ostream& operator<<(std::ostream& out, const Info& info)
	{
		out << "+" << info.phone_number << std::endl <<
			info.addres << std::endl;
		return out;
	}
};
