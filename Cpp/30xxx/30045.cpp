#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string s;
	int cnt = 0;

	cin >> n;

	while (n--){
		cin >> s;

		if (s.find("01") != string::npos || s.find("OI") != string::npos)
			cnt++;
	}
	cout << cnt;

	return 0;
}