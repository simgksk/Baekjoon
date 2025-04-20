#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	
	cin >> t;

	while (t--){
		int k, n;
		int even = 0;
		int odd = 0;

		cin >> n;

		while (n--){
			cin >> k;

			if (k % 2 == 0)
				even += k;
			else
				odd += k;
		}

		if (even > odd)
			cout << "EVEN\n";
		else if (even < odd)
			cout << "ODD\n";
		else
			cout << "TIE\n";
	}

	return 0;
}