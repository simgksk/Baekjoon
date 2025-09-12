#include <iostream>
using namespace std;

int main() {
	string s;

	cin >> s;

	int lv = s.length();
	int cnt = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ':')
			lv++;
		else if (s[i] == '_')
			cnt++;
	}

	int sum = lv + (cnt * 5);

	cout << sum;

	return 0;
}