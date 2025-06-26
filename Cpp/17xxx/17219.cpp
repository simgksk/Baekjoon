#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	string add, pass;
	unordered_map<string, string> mp;
	vector<string> vec;

	cin >> n >> m;

	while (n--)	{
		cin >> add >> pass;
		mp[add] = pass;
	}

	while (m--)	{
		cin >> add;
		vec.push_back(mp[add]);
	}

	for (auto p : vec) {
		cout << p << "\n";
	}

	return 0;
}