#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> vec(4);

	for (int i = 0; i < 4; i++) {
		cin >> vec[i];
	}

	if (vec[0] < vec[1] && vec[1] < vec[2] && vec[2] < vec[3])
		cout << "Fish Rising";
	else if (vec[0] > vec[1] && vec[1] > vec[2] && vec[2] > vec[3])
		cout << "Fish Diving";
	else if (vec[0] == vec[1] && vec[1] == vec[2] && vec[2] == vec[3])
		cout << "Fish At Constant Depth";
	else
		cout << "No Fish";

	return 0;
}