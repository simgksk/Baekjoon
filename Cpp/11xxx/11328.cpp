#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string a, b;

	cin >> n;

	while (n--)	{
		cin >> a >> b;

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		cout << (a == b ? "Possible\n" : "Impossible\n");
	}
	return 0;
}