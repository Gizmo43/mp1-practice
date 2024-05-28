#include <deque>
#include <iostream>
#include <ctime>
#define SIZE 3

using namespace std;


int main() {
	deque<char> line = {};
	char alph[SIZE]{'!','%','#'};
	char tmp;
	int ans;
	srand(time(0));

	line.push_back(alph[rand() % SIZE]);
	line.push_back(alph[rand() % SIZE]);

	for (int i = 2; i <= 3; ++i) {
		tmp = alph[rand() % SIZE];
		while (tmp == line[i - 1] && tmp == line[i - 2]) {
			tmp = alph[rand() % SIZE];
		}
		line.push_back(tmp);
	}

	while (size(line) != 0) {
		tmp = alph[rand() % SIZE];
		cout << "current line: ";
		for (size_t i = 0; i != line.size(); ++i) {
			cout << line[i];
		}
		cout << endl;
		cout << "Next: " << tmp << endl << "1 - front 2 - back" << endl;
		cin >> ans;
		if (ans == 1) {
			line.push_front(tmp);
		}
		else if (ans == 2) {
			line.push_back(tmp);
		}
		if (line.size() > 2) {
			if (line[0] == line[1] && line[0] == line[2]) {
				line.pop_front();
				line.pop_front();
				line.pop_front();
			}
			else if (line[line.size() - 1] == line[line.size() - 2] && line[line.size() - 1] == line[line.size() - 3]) {
				line.pop_back();
				line.pop_back();
				line.pop_back();
			}
		}
	}
	cout << "end";



	

	return 0;
}