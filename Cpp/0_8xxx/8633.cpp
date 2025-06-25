#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string str;
	vector <pair<string, int>> vec;

	cin >> n;

	while (n--)	{
		cin >> str;

		vec.push_back({ str, str.length() });
	}
	sort(vec.begin(), vec.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
		if (a.second != b.second)
			return a.second < b.second;
		return a.first < b.first;
	});

	for (auto& p : vec) {
		cout << p.first << "\n";
	}

	return 0;
}