#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt[10] = {};
	int a, b, c;

	cin >> a >> b >> c;

	int res = a * b * c;

	string s = to_string(res);

	for (int i = 0; i < s.length(); i++) {
		int num = s[i] - '0';
		cnt[num]++;
	}

	for (int i = 0; i < 10; i++)
		cout << cnt[i] << "\n";

	return 0;
}