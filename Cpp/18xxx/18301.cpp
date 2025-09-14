#include <iostream>
using namespace std;

int main() {
	int n1, n2, n3;

	cin >> n1 >> n2 >> n3;

	int res = (n1 + 1) * (n2 + 1) / (n3 + 1) - 1;

	cout << res;

	return 0;
}