#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string str;
	string str2;

	while (true)
	{
		cin >> str;

		if (str == "0")
			break;

		str2 = str;
		reverse(str2.begin(), str2.end());

		if (str == str2)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}
