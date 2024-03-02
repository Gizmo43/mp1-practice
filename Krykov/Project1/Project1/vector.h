#ifndef VECTOR_H
#define VECTOR_H

#include<stdlib.h>
#include<stdio.h>
typedef struct {
	int n;
	double* x;
}TVector;

void alloc(TVector* v, int n);
void fill(TVector* v);
void print(TVector* v);


TVector plus(TVector* v1, TVector* v2);

TVector minus(TVector* v1, TVector* v2);
double scal(TVector* v1, TVector* v2);


void scan(TVector* v1, TVector* v2, const char* name);
void write(TVector* v1, TVector* v2,double sc, const char* name);
#endif
