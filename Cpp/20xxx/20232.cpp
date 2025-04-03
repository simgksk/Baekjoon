#include <iostream>
#include <string>
using namespace std;

int main() {
	int y;

	cin >> y;

	if (y == 1996 || y == 1997 || y == 2000 || y == 2007 || y == 2008 || y == 2013 || y == 2018)
		cout << "SPbSU";
	else if (y == 2006)
		cout << "PetrSU, ITMO";
	else
		cout << "ITMO";

	return 0;
}