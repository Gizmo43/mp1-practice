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
	try {
		Library Lib(in_s);
		Lib.SortLib();
		cout << Lib;
	}
	catch (const exception& err)
	{
		cout << err.what() << endl;
	}
	return 0;
}