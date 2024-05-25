#pragma once

#include <iostream>
#include <exception>
#include <string>
#include <stdlib.h>

using namespace std;
enum class Gender { Male, Female };

class TPhysData 
{
private:
	Gender gender;
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
		string tmp;
		if (phys.gender == Gender::Male) {
			tmp = "Male";
		}
		else if (phys.gender == Gender::Female) {
			tmp = "Female";
		}
		out << tmp << " " << phys.nation << " " <<
			phys.height << "cm " << phys.weight << "kg " << endl;
		return out;
	}
};


