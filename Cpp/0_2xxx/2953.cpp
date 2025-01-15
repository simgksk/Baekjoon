#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int point;
	int max = 0;
	int cnt = 0;

	for (int i = 1; i <= 5; i++) {
		int sum = 0;
		for (int j = 1; j <= 4; j++) {
			
			cin >> point;

			sum += point;

			if (sum > max) {
				max = sum;
				cnt = i;
			}
		}
	}
	cout << cnt << " " << max;

	return 0;
}