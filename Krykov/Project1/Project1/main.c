#include "vector.h"

void main() {
	int n;
	double sc;
	TVector v1, v2, s;
	printf("Lenght of v1= ");
	scanf("%d", &n);
	alloc(&v1, n);
	printf("Lenght of v2= ");
	scanf("%d", &n);
	alloc(&v2, n);
	fill(&v1);
	fill(&v2);

	s = plus(&v1, &v2);
	if (s.x != NULL) {
		print(&s);
	}

	s = minus(&v1, &v2);
	if (s.x != NULL) {
		print(&s);
	}

	sc = scal(&v1, &v2);
	printf("Scal product: %.2lf", sc);

	free(v1.x);
	free(v2.x);
	if (s.x != NULL) {
		free(s.x);
	}
}