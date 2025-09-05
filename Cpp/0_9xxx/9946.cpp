#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string a, b;
	int t = 1;

	while (true) {
		cin >> a >> b;

		if (a == "END" && b == "END")
			break;

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		if (a == b)
			cout << "Case " << t << ": same\n";
		else
			cout << "Case " << t << ": different\n";

		t++;
	}
	return 0;
}