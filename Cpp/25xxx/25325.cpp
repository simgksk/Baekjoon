#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int n;
	string name;
	map<string, int> mp;

	cin >> n;
	cin.ignore();

	while (n--)	{
		cin >> name;

		mp[name]++;
	}

	while (cin >> name) {
		mp[name]++;
	}

	vector<pair<string, int>> vec(mp.begin(), mp.end());
	sort(vec.begin(), vec.end(), [](const pair<string, int> a, const pair<string, int> b) {
		if (a.second != b.second)
			return a.second > b.second;
		return a.first < b.first;
		});

	for (const auto& p : vec) {
		cout << p.first << " " << p.second - 1 << "\n";
	}

	return 0;
}