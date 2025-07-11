#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int p, y;
	string s;
	vector<int> years;
	vector<pair<string, int>> vec;

	for (int i = 0; i < 3; i++) {
		cin >> p >> y >> s;

		years.push_back(y % 100);
		vec.push_back({ s, p });
	}

	sort(years.begin(), years.end());
	sort(vec.begin(), vec.end(), [](const pair<string, int>& a, const pair<string, int> b) {
		return a.second > b.second;
	});

	for (const auto& p : years) {
		cout << p;
	}

	cout << "\n";

	for (int i = 0; i < vec.size(); i++) {
		char c = vec[i].first[0];
		cout << c;
	}

	return 0;
}