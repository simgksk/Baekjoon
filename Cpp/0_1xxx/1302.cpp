#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int n;
	string book;
	map<string, int> m;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> book;
		m[book]++;
	}

	int max = -1;

	for (auto n : m)
	{
		if (n.second > max)
			max = n.second;
	}

	for (auto n : m)
	{
		if (n.second == max)
		{
			cout << n.first;
			break;
		}
	}

	return 0;
}
