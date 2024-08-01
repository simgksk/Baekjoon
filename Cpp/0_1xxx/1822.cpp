#include <iostream>
#include <set>

using namespace std;

int main()
{
	int a, b;
	int n = 0;
	set<int> s;

	cin >> a >> b;

	while (a--)
	{
		cin >> n;
		s.insert(n);
	}
	while (b--)
	{
		cin >> n;
		s.erase(n);
	}

	cout << s.size() << "\n";

	for (auto num : s)
		cout << num << " ";

	return 0;
}