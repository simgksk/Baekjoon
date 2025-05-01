#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string s;
	vector<string> v1;
	vector<string> v2;
	bool isIncrease = true;
	bool isNeither = false;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;
		v1.push_back(s);
	}

	v2 = v1;
	sort(v1.begin(), v1.end());

	for (int i = 0; i < v1.size(); i++) {
		if (isIncrease) {
			if (v1[i] == v2[i]) 
				isIncrease = true;
			else
				isIncrease = false;
		}
		if (!isIncrease) {
			sort(v1.begin(), v1.end(), greater<>());

			if (v1[i] == v2[i]) 
				isIncrease = false;
			else 
				isNeither = true;
		}
	}

	if (isIncrease)
		cout << "INCREASING";
	else if (!isIncrease && !isNeither)
		cout << "DECREASING";
	else if (!isIncrease && isNeither)
		cout << "NEITHER";

	return 0;
}