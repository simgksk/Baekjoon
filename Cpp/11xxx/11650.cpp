#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, x, y;

	cin >> n;

	vector<pair<int, int>> v;

	while (n--)
	{
		cin >> x >> y;

		v.push_back({ x,y });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		cout << v[i].first << " " << v[i].second << "\n";

	return 0;
}