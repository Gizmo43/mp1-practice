#include "vector.h"
#include <fstream>

TVector::TVector() {
	//std::cout << "TVector::TVector()" << std::endl;
	this->n = 0;
	this->x = nullptr;
}

TVector::TVector(int n) {
	//std::cout << "TVector::TVector(int n)" << std::endl;
	this->n = n;
	this->x = new double[n];
}

TVector::TVector(const TVector &v) {
	//std::cout << "TVector::TVector(const TVector &v)" << std::endl;
	this->n = v.n;
	this->x = new double[this->n];
	for (int i = 0; i < this->n; i++) {
		this->x[i] = v.x[i];
	}
}

TVector::~TVector() {
	//std::cout << "TVector::~TVector()" << std::endl;
	delete[] this->x;
}

TVector TVector::operator+ (const TVector& v) {
	//std::cout << "TVector TVector::operator+ (const TVector& v)" << std::endl;
	if (this->n != v.n) {
		throw std::exception("Diff len");
	}
	TVector res(this->n);
	for (int i = 0; i < this->n; i++) {
		res.x[i] = this->x[i] + v.x[i];//проверить работает или нет
	}
	return res;
}
TVector TVector::operator- (const TVector& v) {
	//std::cout << "TVector TVector::operator- (const TVector& v)" << std::endl;
	if (this->n != v.n) {
		throw std::exception("Diff len");
	}
	TVector res(this->n);
	for (int i = 0; i < this->n; i++) {
		res.x[i] = this->x[i] - v.x[i];//проверить работает или нет
	}
	return res;

}
TVector TVector::operator* (const TVector& v) {
	//std::cout << "TVector TVector::operator* (const TVector& v)" << std::endl;
	if (this->n != v.n) {
		throw std::exception("Diff len");
	}
	TVector res(this->n);
	for (int i = 0; i < this->n; i++) {
		res.x[i] = this->x[i] * v.x[i];//проверить работает или нет
	}
	return res;
}
const TVector& TVector::operator= (TVector& v) {
	//std::cout << "TVector TVector::operator* (const TVector& v)" << std::endl;
	if (this->n != v.n) {
		throw std::exception("Diff len");
	}
	this->n = v.n;

	for (int i = 0; i < this->n; i++) {
		this->x[i] = v.x[i];
	}
	return *this;
}

std::istream& operator>> (std::istream& in, TVector& v) {
	//std::cout << "std::istream& operator>> (std::istream& in, TVector& v)" << std::endl;
	std::cout << "Input n:";
	in >> v.n;
	std::cout << "Input x:";
	if (v.x != nullptr) {
		delete[] v.x;
	}
	v.x = new double[v.n];
	for (int i = 0; i < v.n; i++) {
		in >> v.x[i];		
	}
	/*ifstream f("vc_in.txt");
	f >> v.n;
	if (v.x != nullptr) {
		delete[] v.x;
	}
	v.x = new double[v.n];
	for (int i = 0; i < v.n; i++) {
		f >> v.x[i];
	}

	f.close();*/

	
	return in;
}
std::ostream& operator<< (std::ostream& out,const TVector& v) {
	//std::cout << "std::ostream& operator>> (std::ostream& out,const TVector& v)" << std::endl;
	out << "Vector: ";
	for (int i = 0; i < v.n; i++) {
		out << v.x[i] << " ";
	}
	/*ofstream f("vc_out.txt", ios_base::app);

	if (f.is_open()) { 
		f << v.n << endl;
		for (int i = 0; i < v.n; i++) {
			f << v.x[i] << " ";
		}
		f << endl;

		f.close();
	}*/

	
	return out;
}

void clean() {
	ofstream file("vc_out.txt", ios_base::out);
	file.close();
}
 

void scan(TVector& v1, TVector& v2, const char* name) {
	ifstream f(name);
	f >> v1.n;
	if (v1.x != nullptr) {
		delete[] v1.x;
	}
	v1.x = new double[v1.n];
	for (int i = 0; i < v1.n; i++) {
		f >> v1.x[i];
	}
	f >> v2.n;
	if (v2.x != nullptr) {
		delete[] v2.x;
	}
	v2.x = new double[v2.n];
	for (int i = 0; i < v2.n; i++) {
		f >> v2.x[i];
	}

	f.close();
}

void append(const TVector& v, const char* name) {

	ofstream f(name, ios_base::app);

	if (f.is_open()) {
		f << v.n << endl;
		for (int i = 0; i < v.n; i++) {
			f << v.x[i] << " ";
		}
		f << endl;
	}
	
	f.close();
}




 



