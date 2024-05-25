#pragma once

#include <iostream>
#include <exception>

using namespace std;

class TAddres
{
public:
	std::string country;
	std::string area;
	std::string city;
	std::string district;
	std::string street;
	int house;
	int flat;
	TAddres();
	TAddres(const std::string& country, const std::string& area, const std::string& city,
		const std::string& district, const std::string& street, int house, int flat);
	friend std::ostream& operator<<(std::ostream& out, const TAddres& ad)
	{
		out << ad.country << "->" << ad.area << "->" <<
			ad.city << "->" << ad.district << "->" << ad.street
			<< "->" << ad.house << "->" << ad.flat << std::endl;
		return out;
	}
};
