#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
	if (a.second != b.second)
		return a.second < b.second;
	else
		return a.first < b.first;
}
int main() {
	int n;
	int x, y;
	vector <pair<int, int>> vec;

	cin >> n;

	while (n--) {
		cin >> x >> y;

		vec.push_back({ x,y });
	}

	sort(vec.begin(), vec.end(), cmp);

	for (const auto& p : vec) {
		cout << p.first << " " << p.second << "\n";
	}

	return 0;
}