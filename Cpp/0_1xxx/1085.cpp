#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x, y, w, h;

	cin >> x >> y >> w >> h;

	int min_distance = min({ x, y, w - x, h - y });

	cout << min_distance;

	return 0;
}