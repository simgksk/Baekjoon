#include <iostream>
using namespace std;

int main() {
	int t, a, b, c, d, e;
	cin >> t;

	while (t--){
		float sum = 0;

		cin >> a >> b >> c >> d >> e;

		sum += a * 350.34;
		sum += b * 230.90;
		sum += c * 190.55;
		sum += d * 125.30;
		sum += e * 180.90;

		cout << fixed;
		cout.precision(2);
		cout << "$" << sum << "\n";
	}
	return 0;
}