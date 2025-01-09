#include <iostream>

using namespace std;

int main() {
	int n, a;
	int t = 0, f = 0;

	cin >> n;

	while (n--){
		cin >> a;

		if (a == 1)
			t++;
		else if (a == 0)
			f++;
	}

	if (t > f)
		cout << "Junhee is cute!";
	else
		cout << "Junhee is not cute!";

	return 0;
}
