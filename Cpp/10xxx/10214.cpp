#include <iostream>

using namespace std;

int main() {
	int t, y, k;
	int y_sum = 0, k_sum = 0;

	cin >> t;

	while (t--){
		for (int i = 0; i < 9; i++){
			cin >> y >> k;

			y_sum += y;
			k_sum += k;
		}

		if (y_sum > k_sum)
			cout << "Yonsei\n";
		else if (y_sum < k_sum)
			cout << "Korea\n";
		else
			"Draw\n";
	}

	return 0;
}