#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string n;
	cin >> n;

	sort(n.rbegin(), n.rend());

	cout << n;

	return 0;
}