#include <iostream>
using namespace std;

int main() {
	int n;
	int res = 0;
	int mul = 1;

	cin >> n;

	if (n == 3)
		cout << res;
	else {
		for (int i = 1; i <= 4; i++) {
			mul *= n;
			n--;
		}
		res = mul / 24;
		cout << res;
	}
	
	return 0;
}