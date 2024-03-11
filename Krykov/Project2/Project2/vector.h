#pragma once 

#include <iostream>
#include <exception>
#include <fstream>
using namespace std;

struct TVector {
	int n;
	double* x;

	TVector();
	TVector(int n);
	TVector(const TVector&);
	~TVector();

	TVector operator+ (const TVector&);
	TVector operator- (const TVector&);
	TVector operator* (const TVector&);
	TVector& operator= (TVector& v);


};
void clean();
void scan(TVector& v1, TVector& v2, const char* name);
void append(const TVector& v, const char* name);
std::istream& operator>> (std::istream& in, TVector& v);
std::ostream& operator<< (std::ostream& out, const TVector& v);
