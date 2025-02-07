#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	char s;
	int two_cnt = 0, e_cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;

		if (s == '2')
			two_cnt++;
		else if (s == 'e')
			e_cnt++;
	}

	if (two_cnt > e_cnt)
		cout << 2;
	else if (two_cnt < e_cnt)
		cout << "e";
	else
		cout << "yee";

	return 0;
}