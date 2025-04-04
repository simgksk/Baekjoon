#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t1, t2;

	cin >> t1 >> t2;

	if (t1 == t2)
		cout << t1;
	else
		cout << min(t1, t2);

	return 0;
}
