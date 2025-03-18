#include <iostream>
using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--){
		int n;
		int c;
		float g;
		int sumC = 0;
		float sumG = 0;

		cin >> n;

		while (n--){
			cin >> c >> g;

			sumC += c;
			sumG += g * c;
		}
		cout << fixed;
		cout.precision(1);
		cout << sumC << " " << sumG / sumC << "\n";
	}

	return 0;
}