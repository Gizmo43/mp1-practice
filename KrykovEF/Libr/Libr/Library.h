#pragma once

#include "Person.h"

class Library
{
private:
	int count;
	TPerson* list;
public:
	Library();
	Library(int count);
	Library(const std::string&);
	Library(const Library&);
	~Library();
};
