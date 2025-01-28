#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string str1;
	string str2 = "";

	cin >> str1;

	str2 = str1;
	reverse(str1.begin(), str1.end());

	if (str1 == str2)
		cout << "true";
	else
		cout << "false";

	return 0;
}