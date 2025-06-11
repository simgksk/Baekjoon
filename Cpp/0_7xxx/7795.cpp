#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t;

	cin >> t;

	while (t--)	{
		int n, m, a, b;
		int cnt = 0;
		vector<int> vec1;
		vector<int> vec2;

		cin >> n >> m;

		for (int i = 0; i < n; i++) {
			cin >> a;
			vec1.push_back(a);
		}
		for (int i = 0; i < m; i++) {
			cin >> b;
			vec2.push_back(b);
		}

		for (int x : vec1) {
			for (int y : vec2) {
				if (x > y)
					cnt++;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}