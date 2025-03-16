#include <iostream>
using namespace std;

int main() {
	int s, m, l;

	cin >> s >> m >> l;
	
	int res = (1 * s) + (2 * m) + (3 * l);

	cout << ((res >= 10) ? "happy" : "sad");

	return 0;
}