#include <iostream>
using namespace std;

int main() {
	int l;

	cin >> l;

	int time = l / 5;

	if (l % 5 != 0)
		time += 1;
	

	cout << time;

	return 0;
}