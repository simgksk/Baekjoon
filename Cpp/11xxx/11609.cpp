#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string first_name, last_name;
	vector<pair<string, string>> vec;

	cin >> n;

	while (n--)	{
		cin >> first_name >> last_name;
		vec.push_back({ last_name, first_name });
	}

	sort(vec.begin(), vec.end());

	for (const auto& p : vec) {
		cout << p.second << " " << p.first << "\n";
	}

	return 0;
}