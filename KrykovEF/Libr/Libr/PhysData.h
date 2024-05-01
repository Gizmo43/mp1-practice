#pragma once

#include <iostream>
#include <exception>
#include <string>

using namespace std;

class TPhysData 
{
private:
	string gender;
	string nation;
	int height;
	int weight;
public:
	TPhysData();
	TPhysData(const string& gender, const string& nation, int height, int weight);
	void SetGender(string);
	void SetNation(string);
	void SetH(int);
	void SetW(int);


	friend std::ostream& operator<<(ostream& out, const TPhysData& phys)
	{
		out << phys.gender << " " << phys.nation << " " <<
			phys.height << "cm " << phys.weight << "kg " << endl;
		return out;
	}
};


