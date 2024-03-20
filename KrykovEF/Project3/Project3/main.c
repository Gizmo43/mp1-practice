#include <stdio.h>

int main(int argc, char* argv[]) {

	char* inname, * outname;


	if (argc < 3) {
		printf("Incorrect arguments");
		return 1;
	}

	inname = argv[1];
	outname = argv[2];



	return 0;
}