#include "PhysData.h"



TPhysData::TPhysData(){}
TPhysData::TPhysData(const string& gender, const string& nation, int height, int weight) {
	this->gender = gender;
	this->nation = nation;
	this->height = height;
	this->weight = weight;
}

void TPhysData::SetGender(string gender) {
	this->gender = gender;
}
void TPhysData::SetNation(string nation) {
	this->nation = nation;
}
void TPhysData::SetH(int height) {
	if (height < 1) {
		throw std::exception("Wrong height");
	}
	this->height = height;
}
void TPhysData::SetW(int weight) {
	if (weight < 1) {
		throw std::exception("Wrong weight");
	}
	this->weight = weight;
}