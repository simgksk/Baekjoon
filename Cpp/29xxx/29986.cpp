#include <iostream>
using namespace std;

int main() {
	int n, h, a;
	int cnt = 0;

	cin >> n >> h;

	while (n--){
		cin >> a;

		if (a <= h)
			cnt++;
	}
	cout << cnt;

	return 0;
}