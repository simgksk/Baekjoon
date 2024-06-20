#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, num;
	set<int> s;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		s.insert(num);
	}

	cin >> m;
	for (int i = 0; i < m; i++) 
	{
		cin >> num;

		if (s.find(num) != s.end())
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}

	return 0;
}

```
