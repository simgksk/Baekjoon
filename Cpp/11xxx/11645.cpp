#include <iostream>
#include <map>
using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		int n;
		map<string, int> m;

		cin >> n;

		while (n--) {
			string city;

			cin >> city;
			m[city]++;
		}
		cout << m.size() << "\n";
	}

	return 0;
}