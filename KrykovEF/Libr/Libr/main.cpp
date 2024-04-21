#include "Date.h"
#include "Library.h"
#include "Person.h"





int main(int argc, char* argv[]) {
	char* inname, * outname;
	if (argc < 2) {
		printf("Incorrect arguments");
		return 1;
	}
	inname = argv[1];
	string in_s(inname);
	cout << in_s << endl;

	Library Lib(in_s);
	
	outname = argv[2];
	string out_s(outname);
	cout << out_s << endl;

	for (int i = 0; i < Lib.GetCount(); i++) {
		cout << Lib.GetPerson(i);
	}



	return 0;
}