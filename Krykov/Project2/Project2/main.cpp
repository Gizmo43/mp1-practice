#include "vector.h"
void main() {
	 
	TVector v1, v2;
	//std::cin >> v1 >> v2;
	scan(v1, v2, "vc_in.txt");
	TVector res1 = v1 + v2; //работает?
	TVector res2 = v1 - v2;
	TVector res3 = v1 * v2;
	clean();

	std::cout << v1;
	std::cout << v2;
	std::cout << res1;
	std::cout << res2;
	std::cout << res3;
}