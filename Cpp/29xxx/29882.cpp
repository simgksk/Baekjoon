#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string name;
	map<string, map<string, int>> mp;

	cin >> n;
	cin.ignore();

	while (n--)	{
		getline(cin, name);

		stringstream ss(name);
		string account_name, task_name;
		int score;
		
		ss >> account_name >> task_name >> score;

		mp[account_name][task_name] = max(mp[account_name][task_name], score);
	}

	vector<pair<string, int>> vec;

	for (const auto& p : mp) {
		int total = 0;

		for (const auto& task : p.second) {
			total += task.second;
		}
		vec.push_back({p.first, total});
	}

	sort(vec.begin(), vec.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
		if (a.second != b.second)
			return a.second > b.second;
		return a.second < b.second;
	});

	for (const auto& p : vec) {
		cout << p.first << " " << p.second << "\n";
	}

	return 0;
}