#include <iostream>
#include <map>
using namespace std;

int main() {
	int n, k, c;
	map<int, int> mp;

	cin >> n >> k;
	while (n--) {
		cin >> c;
		mp[c]++;
	}

	for (const auto& pair : mp) {
		if (pair.second % k != 0)
			cout << pair.first << "\n";
	}

	return 0;
}