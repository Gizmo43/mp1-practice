
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
		getline(f, buf_s,';');
		this->list[i].first_name = buf_s;
		getline(f, buf_s, ';');
		this->list[i].second_name = buf_s;
		getline(f, buf_s, ';');
		this->list[i].last_name = buf_s;
		getline(f, buf_s, ';');
		this->list[i].SetDay(atoi(buf_s.c_str()));
		getline(f, buf_s, ';');
		this->list[i].SetMonth(atoi(buf_s.c_str()));
		getline(f, buf_s, ';');
		this->list[i].SetYear(atoi(buf_s.c_str()));
		getline(f, buf_s, ';');
		this->list[i].SetGender(buf_s);
		getline(f, buf_s, ';');
		this->list[i].SetNation(buf_s);
		getline(f, buf_s, ';');
		this->list[i].SetH(atoi(buf_s.c_str()));
		getline(f, buf_s, ';');
		this->list[i].SetW(atoi(buf_s.c_str()));
		getline(f, buf_s, ';');
		this->list[i].info.phone_number = atoll(buf_s.c_str());
		getline(f, buf_s, ';');
		this->list[i].info.addres.country = buf_s;
		getline(f, buf_s, ';');
		this->list[i].info.addres.area = buf_s;
		getline(f, buf_s, ';');
		this->list[i].info.addres.city = buf_s;
		getline(f, buf_s, ';');
		this->list[i].info.addres.district = buf_s;
		getline(f, buf_s, ';');
		this->list[i].info.addres.street = buf_s;
		getline(f, buf_s, ';');
		this->list[i].info.addres.house = atoi(buf_s.c_str());
		getline(f, buf_s, ';');
		this->list[i].info.addres.flat = atoi(buf_s.c_str());
	}
}
void Library::SortLib() {
	int min;
	TPerson tmp_s;
	for (int i = 0; i < this->count; i++)
	{
		min = i;
		for (int j = i + 1; j < this->count; j++)
			if (this->list[min].last_name > this->list[j].last_name)
				min = j;

		tmp_s = this->list[min];
		this->list[min] = this->list[i];
		this->list[i] = tmp_s;
	}
}


Library::~Library()
{
	if (this->list != nullptr)
	{
		delete[] this->list;
	}
}