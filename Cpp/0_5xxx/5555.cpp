#include <iostream>
#include <string>
using namespace std;

int main() {
	string finded, str;
	int n;
	int cnt = 0;

	cin >> finded >> n;

	while (n--)	{
		cin >> str;

		size_t pos = str.find(finded);

		if (pos != string::npos)
			cnt++;
		else {
			string doubled = str + str;
			size_t p = doubled.find(finded);

			if (p != string::npos)
				cnt++;
		}
	}
	cout << cnt;

	return 0;
}