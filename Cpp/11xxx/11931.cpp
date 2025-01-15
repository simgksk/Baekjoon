#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, num;
	vector <int> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.rbegin(), v.rend());

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";

	return 0;
}