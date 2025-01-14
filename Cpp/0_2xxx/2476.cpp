#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, a, b, c;
	int money = 0;
	int max_money = 0;

	cin >> n;

	while (n--){
		cin >> a >> b >> c;

		if (a == b && a == c && b == c)
			money = 10000 + (a * 1000);
		else if (a == b || a == c || b == c) {
			money = 1000;
			if (a == b || a == c)
				money += a * 100;
			else if (b == a || b == c)
				money += b * 100;
			else if (c == a || c == b)
				money += c * 100;
		}
		else if (a != b && a != c && b != c)
			money = max({ a, b, c }) * 100;

		if (money > max_money)
			max_money = money;
		else
			max_money = max_money;
	}
	cout << max_money;

	return 0;
}