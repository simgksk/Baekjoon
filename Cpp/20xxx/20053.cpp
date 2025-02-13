#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n, num;
	cin >> t;

	while (t--){
		int max = -1000000;
		int min = 1000000;

		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> num;

			if (num > max)
				max = num;
			if (num < min)
				min = num;
		}
		cout << min << " ";
		cout << max << "\n";
	}
	return 0;
}