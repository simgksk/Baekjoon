#include <iostream>
using namespace std;

int main() {
	int a[3];
	int c[3];

	for (int i = 0; i < 3; i++)
		cin >> a[i];
	for (int i = 0; i < 3; i++)
		cin >> c[i];

	int bx = c[0] - a[2];
	int by = c[1] / a[1];
	int bz = c[2] - a[0];

	cout << bx << " " << by << " " << bz;

	return 0;
}