#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;

	while (n--){
		long int a, b, res;
		char operation, equal;

		cin >> a >> operation >> b >> equal >> res;

		if (operation == '*') {
			if (a * b == res)
				cout << "correct\n";
			else
				cout << "wrong answer\n";
		}
		else if (operation == '/') {
			if (a / b == res)
				cout << "correct\n";
			else
				cout << "wrong answer\n";
		}
		else if (operation == '+') {
			if (a + b == res)
				cout << "correct\n";
			else
				cout << "wrong answer\n";
		}
		else if (operation == '-') {
			if (a - b == res)
				cout << "correct\n";
			else
				cout << "wrong answer\n";
		}
	}

	return 0;
}