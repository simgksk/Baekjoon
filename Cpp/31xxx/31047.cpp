#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--)	{
		int n, k;
		int cnt = 0;
		string name;
		map<string, int> mp;

		cin >> n;

		while (n--)	{
			cin >> name >> k;
			mp[name] += k;
		}

		vector<pair<string, int>> vec(mp.begin(), mp.end());
		sort(vec.begin(), vec.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
			if (a.second != b.second)
				return a.second > b.second;
			return a.first < b.first;     
		});

		cout << vec.size() << "\n";

		for (const auto& p : vec) {
			cout << p.first << " " << p.second << "\n";
		}
	}
	return 0;
}