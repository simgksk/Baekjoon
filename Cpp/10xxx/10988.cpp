#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string str1;
	string str2;

	cin >> str1;
	str2 = str1;

	reverse(str2.begin(), str2.end());

	if (str1 == str2)
		cout << 1;
	else
		cout << 0;

	return 0;
}