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


void scan(TVector* v);
void write(TVector* v);
#endif
