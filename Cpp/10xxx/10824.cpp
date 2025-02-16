#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b, c, d;
	cin >> a >> b >> c >> d;

	string ab = a + b;
	string cd = c + d;

	long int res = stoll(ab) + stoll(cd);

	cout << res;

	return 0;
}