#include <iostream>
#include <map>
using namespace std;

int main() {
	int n, k;
	string m;
	map<string, int> mp;

	cin >> n;

	while (n--)	{
		cin >> m >> k;
		mp[m] += k;
	}

	for (const auto& p : mp) {
		cout << p.first << " " << p.second << "\n";
	}

	return 0;
}