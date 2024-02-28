#include "vector.h"

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
		printf("v1->n != v2->n\n");
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
		printf("v1->n != v2->n\n");
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
	double res = 0;
	int i = 0;
	if (v1->n != v2->n) {
		printf("v1->n != v2->n\n");
		res = 0;
		return res;
	}
	for (i; i < v1->n; i++) {
		res = res + v1->x[i] * v2->x[i];
	}

	return res;
}

void scan(TVector* v,const char* name) {
	int i = 0;
	FILE* f = fopen(name, "r");
	if (f == NULL) {
		printf("Not found");
		abort();
	}
	fscanf(f, "%d", &(v->n));
	v->x = (double*)malloc(v->n * sizeof(double));
	for (i; i < v->n; i++) {
		fscanf(f, "%lf", &(v->x[i]));
	}

	fclose(f);
}
void write(TVector* v) {





}