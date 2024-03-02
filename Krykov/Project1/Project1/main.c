#include "vector.h"

int main(int argc,char** argv[]) {
	int n;
	double sc;
	TVector v1, v2, s1, s2;
	char* inname, * outname;

	if (argc < 4) {
		printf("Incorrect arguments");
		return 1;
	}
	n = atoi(argv[1]);
	printf("n = % d\n", n);
	inname = argv[2];
	outname = argv[3];


	/*printf("Lenght of v1= ");
	scanf("%d", &n);
	alloc(&v1, n);
	printf("Lenght of v2= ");
	scanf("%d", &n);
	alloc(&v2, n);
	fill(&v1);
	print(&v1);
	print(&v2);*/
	scan(&v1, &v2, inname);
	

	
	s1 = plus(&v1, &v2);
	if (s1.x != NULL) {
		print(&s1);
		
	}

	s2 = minus(&v1, &v2);
	if (s2.x != NULL) {
		print(&s2);
	}

	sc = scal(&v1, &v2);

	write(&s1, &s2, sc, outname);
	//printf("Scal product: %.2lf", sc);

	free(v1.x);
	free(v2.x);
	if (s1.x != NULL) {
		free(s1.x);
	}if (s2.x != NULL) {
		free(s2.x);
	}

	return 0;
}