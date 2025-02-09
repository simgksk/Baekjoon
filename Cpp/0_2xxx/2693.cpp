#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--){
		int a[10];

		for (int i = 0; i < 10; i++)
			cin >> a[i];

		sort(a, a + 10, greater<int>());

		cout << a[2] << "\n";
	}
	return 0;
}