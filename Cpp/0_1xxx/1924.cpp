#include <iostream>
using namespace std;

int main() {
	int x, y;
	int day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	string week[7] = { "SUN", "MON", "TUE", "WED","THU","FRI","SAT" };
	cin >> x >> y;

	int total = y;

	for (int i = 0; i < x - 1; i++)
		total += day[i];

	cout << week[total % 7];

	return 0;
}