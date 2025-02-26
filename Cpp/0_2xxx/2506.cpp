#include <iostream>
using namespace std;

int main() {
	int n;
	int ans;
	int sum = 0;
	int i = 1;

	cin >> n;

	while (n--){
		cin >> ans;

		if (ans == 1) {
			sum += i;
			i++;
		}
		else if (ans == 0)
			i = 1;
	}
	cout << sum;

	return 0;
}