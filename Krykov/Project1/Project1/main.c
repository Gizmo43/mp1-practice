#include<stdio.h>
#include<stdlib.h>


typedef struct {
	int n;
	double* x;
}TVector;

void alloc(TVector* v, int n) {
	v->n = n;
	v->x = (double*)malloc(sizeof(double) * n);
};
void fill(TVector* v) {
	int i = 0;
	printf("Fill vector: ");
	for (i; i < v->n; i++) {
		scanf("%lf", &(v->x[i]));
	}

}
void print(TVector* v) {
	int i = 0;
	printf("Vector: ");
	for (i; i < v->n; i++) {
		printf("%.2lf ", v->x[i]);
	}
	printf("\n");
}


TVector plus(TVector* v1, TVector* v2) {
	TVector res;
	int i = 0;
	if (v1->n != v2->n) {
		printf("v1->n != v2->n");
		res.x = NULL;
		res.n = 0;
		return res;
	}
	alloc(&res, v1->n);
	for (i; i < res.n; i++) {
		res.x[i] = v1->x[i] + v2->x[i];
	};
	return res;
}

TVector minus(TVector* v1, TVector* v2) {
	TVector res;
	int i = 0;
	if (v1->n != v2->n) {
		printf("v1->n != v2->n");
		res.x = NULL;
		res.n = 0;
		return res;
	}
	alloc(&res, v1->n);
	for (i; i < res.n; i++) {
		res.x[i] = v1->x[i] - v2->x[i];
	};
	return res;
}
double scal(TVector* v1, TVector* v2) {
	double res=0;
	int i = 0;
	if (v1->n != v2->n) {
		printf("v1->n != v2->n");
		res = 0;
		return res;
	}
	for (i; i < v1->n; i++) {
		res = res + v1->x[i] * v2->x[i];
	}

	return res;
}


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

	/*s = plus(&v1, &v2);
	print(&s);*/

	s = minus(&v1, &v2);
	print(&s);

	sc = scal(&v1, &v2);
	printf("%lf", sc);

	free(v1.x);
	free(v2.x);
	if (s.x != NULL) {
		free(s.x);
	}
}