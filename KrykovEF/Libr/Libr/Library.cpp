
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
Library::Library(const std::string&) {}
Library::Library(const Library&) {}
Library::~Library()
{
	if (this->list != nullptr)
	{
		delete[] this->list;
	}
}