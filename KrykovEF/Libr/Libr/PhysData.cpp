#include "PhysData.h"



TPhysData::TPhysData(){}
TPhysData::TPhysData(const std::string& gender, const std::string& nation, int height, int weight) {
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
	this->height = height;
}
void TPhysData::SetW(int weight) {
	this->weight = weight;
}