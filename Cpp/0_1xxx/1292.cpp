#include <iostream>

using namespace std;

int main() {
	int a, b;
	int sum = 0;
	int cnt = 0;
	
	cin >> a >> b;

	for (int i = 1; ; i++) {
		for (int j = 0; j < i; j++) {
			cnt++;

			if (cnt >= a && cnt <= b)
				sum += i;

			if (cnt == b)
				break;
		}
		if (cnt == b)
			break;
	}

	cout << sum;

	return 0;
}