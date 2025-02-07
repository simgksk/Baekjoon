#include <iostream>
using namespace std;

int main() {
	int t, n;
	char a;

	cin >> t;

	while (t--){
		cin >> n >> a;

		for (int i = 0; i < n; i++)
			cout << a;

		cout << "\n";
	}
	return 0;
}