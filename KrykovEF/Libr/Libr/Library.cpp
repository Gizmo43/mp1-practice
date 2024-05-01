
#include "Library.h"


Library::Library()
{
	this->count = 0;
	this->list = nullptr;
}
Library::Library(int count)
{
	this->count = count;
	this->list = new TPerson[count];
}
Library::Library(const string& in_s) 
{
	ifstream f(in_s);
	string buf_s;
	getline(f, buf_s);
	this->count= atoi(buf_s.c_str());
	if (this->list != nullptr) {
		delete[] this->list;
	}
	this->list = new TPerson[this->count];
	for (int i=0;i<this->count;i++){
		getline(f, buf_s);
		this->list[i].SetFN(buf_s);
		getline(f, buf_s);
		this->list[i].SetSN(buf_s);
		getline(f, buf_s);
		this->list[i].SetLN(buf_s);
		getline(f, buf_s);
		this->list[i].SetDay(atoi(buf_s.c_str()));
		getline(f, buf_s);
		this->list[i].SetMonth(atoi(buf_s.c_str()));
		getline(f, buf_s);
		this->list[i].SetYear(atoi(buf_s.c_str()));
		getline(f, buf_s);
		this->list[i].SetGender(buf_s);
		getline(f, buf_s);
		this->list[i].SetNation(buf_s);
		getline(f, buf_s);
		this->list[i].SetH(atoi(buf_s.c_str()));
		getline(f, buf_s);
		this->list[i].SetW(atoi(buf_s.c_str()));
		getline(f, buf_s);
		this->list[i].SetNumber(atoll(buf_s.c_str()));
		getline(f, buf_s);
		this->list[i].SetCountry(buf_s);
		getline(f, buf_s);
		this->list[i].SetArea(buf_s);
		getline(f, buf_s);
		this->list[i].SetCity(buf_s);
		getline(f, buf_s);
		this->list[i].SetDistrict(buf_s);
		getline(f, buf_s);
		this->list[i].SetStreet(buf_s);
		getline(f, buf_s);
		this->list[i].SetHouse(atoi(buf_s.c_str()));
		getline(f, buf_s);
		this->list[i].SetFlat(atoi(buf_s.c_str()));
	}
}
void Library::SortLib() {
	int min;
	TPerson tmp_s;
	for (int i = 0; i < this->count; i++)
	{
		min = i;
		for (int j = i + 1; j < this->count; j++)
			if (this->list[min].GetLN() > this->list[j].GetLN())
				min = j;

		tmp_s = this->list[min];
		this->list[min] = this->list[i];
		this->list[i] = tmp_s;
	}
}

int Library::GetCount() const
{
	return this->count;
}
TPerson Library::GetPerson(int i) const
{
	return this->list[i];
}
Library::~Library()
{
	if (this->list != nullptr)
	{
		delete[] this->list;
	}
}