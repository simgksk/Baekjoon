#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, d;
	int cnt = 0;

	cin >> n >> d;

	for (int i = 1; i <= n; i++) {
		if (i == d)
			cnt++;
		if (i >= 10) {
			string s = to_string(i);
			char c = '0' + d;

			for (int j = 0; j < s.size(); j++) {
				if (s[j] == c)
					cnt++;
			}
		}
	}
	cout << cnt;

	return 0;
}