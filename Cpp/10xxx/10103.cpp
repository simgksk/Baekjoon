#include <iostream>

using namespace std;

int main() {
	int n, a, b;
	int a_score = 100;
	int b_score = 100;

	cin >> n;

	while (n--){
		cin >> a >> b;

		if (a > b)
			b_score -= a;
		else if (a < b)
			a_score -= b;
	}

	cout << a_score << "\n" << b_score;

	return 0;
}