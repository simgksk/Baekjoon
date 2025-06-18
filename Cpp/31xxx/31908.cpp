#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string p, s;
	unordered_map<string, vector<string>> um;
	vector<pair<string, string>> vec;

	cin >> n;

	while (n--)	{
		cin >> p >> s;

		if (s != "-") {
			um[s].push_back(p);
		}
	}
	
	for (auto& pair : um) {
		auto& people = pair.second;

		if (people.size() == 2) {
			for (int i = 0; i + 1 < people.size(); i += 2) {
				vec.push_back({ people[i], people[i + 1] });
			}
		}
	}

	cout << vec.size() << "\n";

	for (auto& pair : vec) {
		cout << pair.first << " " << pair.second << "\n";
	}

	return 0;
}