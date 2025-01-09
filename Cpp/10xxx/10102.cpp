#include <iostream>

using namespace std;

int main() {
	int v;
	int a = 0, b = 0;
	char ab;

	cin >> v;

	while (v--){
		cin >> ab;

		if (ab == 'A')
			a++;
		else if (ab == 'B')
			b++;
	}

	if (a > b)
		cout << "A";
	else if (a < b)
		cout << "B";
	else
		cout << "Tie";

	return 0;
}