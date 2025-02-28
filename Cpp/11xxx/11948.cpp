#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int abcd[4];
	int e;
	int f;

	for (int i = 0; i < 4; i++)
		cin >> abcd[i];
	cin >> e >> f;

	sort(abcd, abcd + 4);

	int sum = abcd[1] + abcd[2] + abcd[3] + max(e, f);

	cout << sum;

	return 0;
}