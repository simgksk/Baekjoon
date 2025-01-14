#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false); 
	cin.tie(NULL);

	int n, m, num;
	vector <int> ab;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> num;
		ab.push_back(num);
	}
	for (int i = 0; i < m; i++) {
		cin >> num;
		ab.push_back(num);
	}

	sort(ab.begin(), ab.end());

	for (int i = 0; i < ab.size(); i++)
		cout << ab[i] << " ";

	return 0;
}