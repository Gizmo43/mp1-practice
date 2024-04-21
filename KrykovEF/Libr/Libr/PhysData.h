#pragma once

#include <iostream>
#include <string>

using namespace std;

class TPhysData 
{
private:
	std::string gender;
	std::string nation;
	int height;
	int weight;
public:
	TPhysData();
	TPhysData(const std::string& gender, const std::string& nation, int height, int weight);
	void SetGender(string);
	void SetNation(string);
	void SetH(int);
	void SetW(int);


	friend std::ostream& operator<<(std::ostream& out, const TPhysData& phys)
	{
		out << phys.gender << " " << phys.nation << " " <<
			phys.height << "cm " << phys.weight << "kg " << std::endl;
		return out;
	}
};


