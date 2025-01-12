#include <iostream>

using namespace std;

int main() {
	int n, p, c;
	string name;

	cin >> n;

	while (n--){
		int max = 0;
		string maxName = "";

		cin >> p;

		for (int i = 0; i < p; i++) {
			cin >> c >> name;

			if (max < c) {
				max = c;
				maxName = name;
			}
			else {
				max = max;
				maxName = maxName;
			}
		}
		cout << maxName << "\n";
	}
	return 0;
}