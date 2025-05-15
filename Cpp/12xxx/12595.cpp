#include <iostream>
#include <map>
using namespace std;

int main() {
	int n;
	int t = 1;

	cin >> n;

	while (n--) {
		int c, g;
		map<int, int> m;

		cin >> c;

		while (c--) {
			cin >> g;
			m[g]++;
		}
		
		for (const auto& pair : m) {
			if (pair.second % 2 != 0)
				cout << "Case #" << t << ": " << pair.first << "\n";
		}

		t++;
	}
	return 0;
}
