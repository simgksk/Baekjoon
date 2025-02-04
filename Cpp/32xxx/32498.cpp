#include <iostream>
using namespace std;

int main() {
	int n, d;
	int cnt = 0;

	cin >> n;

	while (n--){
		cin >> d;

		if (d % 2 != 0)
			cnt++;
	}
	cout << cnt;

	return 0;
}