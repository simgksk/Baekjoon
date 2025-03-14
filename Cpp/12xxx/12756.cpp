#include <iostream>
using namespace std;

int main() {
	int attackA;
	int hpA;
	int attackB;
	int hpB;

	cin >> attackA >> hpA >> attackB >> hpB;

	while (true){
		hpA -= attackB;
		hpB -= attackA;

		if (hpA <= 0 || hpB <= 0)
			break;
	}

	if (hpA <= 0 && hpB <= 0)
		cout << "DRAW";
	else if (hpB <= 0)
		cout << "PLAYER A";
	else if (hpA <= 0)
		cout << "PLAYER B";

	return 0;
}