#include "vector.h"
int main(int argc, char* argv[]) {
	 
	TVector v1, v2;
	char* inname, * outname;
	//char* inname, * outname;
	if (argc < 3) {
		std::cout << "Incorrect arguments";
		return 1;
	}

	inname = argv[1];
	outname = argv[2];

	//std::cin >> v1 >> v2;
	scan(v1, v2, inname);
	TVector res1 = v1 + v2; //работает?
	TVector res2 = v1 - v2;
	TVector res3 = v1 * v2;
	clean();

	std::cout << v1;
	std::cout << v2;
	std::cout << res1;
	std::cout << res2;
	std::cout << res3;

	append(res1, "vc_out.txt");
	append(res2, "vc_out.txt");
	append(res3, "vc_out.txt");


	return 0;
}