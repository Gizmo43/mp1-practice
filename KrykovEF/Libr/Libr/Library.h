#pragma once

#include "Person.h"
#include <fstream>

class Library
{
private:
	int count;
	TPerson* list;
public:
	Library();
	Library(int count);
	Library(const string&);
	Library(const Library&);
	int GetCount() const;
	TPerson GetPerson(int) const;
	~Library();
};
