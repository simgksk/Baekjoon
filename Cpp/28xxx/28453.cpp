#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	int num;
	vector<int> vec;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;

		if (num < 250)
			vec.push_back(4);
		else if (num < 275)
			vec.push_back(3);
		else if (num < 300)
			vec.push_back(2);
		else
			vec.push_back(1);
	}

	for (auto& p : vec) {
		cout << p << " ";
	}

	return 0;
}