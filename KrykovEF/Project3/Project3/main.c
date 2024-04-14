#include <stdio.h>
#include "Person.h"
#include "Functions.h"





int main(int argc, char* argv[]) {

	char* inname, * outname;
	TLib Libr;

	if (argc < 3) {
		printf("Incorrect arguments");
		return 1;
	}

	inname = argv[1];
	outname = argv[2];

	scan(&(Libr), inname);

	sortLib(&(Libr));

	write(&(Libr), outname);

	clean(&(Libr));

	return 0;
}