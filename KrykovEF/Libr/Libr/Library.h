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
	void SortLib();
	int GetCount() const;
	TPerson GetPerson(int) const;
	~Library();

	friend ostream& operator<<(ostream& out, const Library& lib)
	{
		for (int i = 0; i < lib.count; i++) {
			out << lib.list[i];
		}
		return out;
	}
};
