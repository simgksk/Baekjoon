#include <iostream>

using namespace std;

int fibo[100] = { 0, 1 };
int main() {

	int n;

	cin >> n;

	for (int i = 2; i <= n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	cout << fibo[n];
}