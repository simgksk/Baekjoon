#include <iostream>
using namespace std;

int main() {
	int h, m;

	cin >> h >> m;

	int time = ((h - 9) * 60) + m;

	cout << time;

	return 0;
}