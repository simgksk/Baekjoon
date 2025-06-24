#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using namespace std;

int main() {
	int n;
	int l, m;
	vector<pair<int, int>> vec;

	cin >> n;

	while (n--)	{
		cin >> l >> m;

		vec.push_back({ l, m });
	}
	
	sort(vec.begin(), vec.end());

	for (const auto& p : vec) {
		cout << p.first << " " << p.second << "\n";
	}

	return 0;
}