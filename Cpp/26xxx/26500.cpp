#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	double a, b;

	cin >> n;

	while (n--){
		cin >> a >> b;

		double sub = a - b;

		printf("%.1f\n", abs(sub));
	}
	return 0;
}