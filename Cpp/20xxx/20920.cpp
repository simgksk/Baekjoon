#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool cmp(const pair<string, int> &a, const pair<string, int>& b) {
	if (a.second != b.second)
		return a.second > b.second;
	if (a.first.length() != b.first.length())
		return a.first.length() > b.first.length();
	return a.first < b.first;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	string word;
	map<string, int> mp;

	cin >> n >> m;

	while (n--)	{
		cin >> word;

		if (word.length() >= m)
			mp[word]++;
	}

	vector<pair<string, int>> vec(mp.begin(), mp.end());

	sort(vec.begin(), vec.end(), cmp);

	for (auto& p : vec) {
		cout << p.first << "\n";
	}

	return 0;
}