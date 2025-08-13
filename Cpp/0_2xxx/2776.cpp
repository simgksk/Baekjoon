#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t;

	cin >> t;

	while (t--)	{
		int n, m;
		unordered_set<int> us;

		cin >> n;
		while (n--)	{
			int num;

			cin >> num;

			us.insert(num);
		}

		cin >> m;
		while (m--)	{
			int num;

			cin >> num;

			cout << (us.count(num) ? 1 : 0) << "\n";
		}

	}
	return 0;
}