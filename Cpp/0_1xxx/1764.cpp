#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int n, m, cnt = 0;
	string name;
	map<string, int> m1;

	cin >> n >> m;

	for (int i = 0; i < n + m; i++)
	{
		cin >> name;
		m1[name]++;

		if (m1[name] == 2)
			cnt++;
	}
	
	cout << cnt << "\n";

	for (auto m : m1)
	{
		if (m.second == 2)
			cout << m.first << "\n";
	}

	return 0;
}
