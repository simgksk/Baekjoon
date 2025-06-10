#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	string s;
	unordered_set<string> croatian = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	int cnt = 0;

	cin >> s;

	for (int i = 0; i < s.length(); ) {
		bool isMatched = false;

		for (int len = 3; len >= 2; len--) {
			if (i + len <= s.length()) {
				string part = s.substr(i, len);

				if (croatian.count(part)) {
					cnt++;
					i += len;
					isMatched = true;
					break;
				}
			}
		}
		if (!isMatched) {
			cnt++;
			i++;
		}
	}

	cout << cnt;

	return 0;
}