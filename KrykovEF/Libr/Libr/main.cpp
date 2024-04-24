#include "Date.h"
#include "Library.h"
#include "Person.h"





int main(int argc, char* argv[]) {
	char* inname;
	if (argc < 1) {
		printf("Incorrect arguments");
		return 1;
	}
	inname = argv[1];
	string in_s(inname);

	Library Lib(in_s);

	Lib.SortLib();

	for (int i = 0; i < Lib.GetCount(); i++) {
		cout << Lib.GetPerson(i);
	}

	return 0;
}