#include <deque>
#include <iostream>

using namespace std;

int main() {
    deque<int> queue = {};
	int c, a, b;
	cout << "1 - continue 0 - stop" << "\n";
	cin >> c;
	while (c!=0)
	{
		cout << "1 - add 0 - delete" << "\n";
		cin >> a;
		if (a == 1) {
			cin >> b;
			queue.push_back(b);
			cout << "added: " << b << "\n";
		}
		else if (a == 0) {
			cout << "deleted: " << queue[0] << "\n";
			queue.pop_front();
		}
		cout << "1 - continue 0 - stop" << "\n";
		cin >> c;
	}

	cout << "current queue" << "\n";
	for (size_t i = 0; i != queue.size(); ++i) {
		cout << queue[i] << "\n";
	}

	return 0;
}