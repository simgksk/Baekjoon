#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, k, a;
	vector<int> vec;

	cin >> n >> k;

	while (n--)	{
		cin >> a;
		vec.push_back(a);
	}
	sort(vec.begin(), vec.end());

	cout << vec[k - 1];

	return 0;
}