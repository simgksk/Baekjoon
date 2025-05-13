#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int n, s, t;
	int max = 0;
	string a;
	string maxA = "";
	unordered_map<string, int> um;

	cin >> n;

	while (n--) {
		cin >> s >> t;

		while (t--) {
			cin >> a;

			um[a]++;
		}
	}

	for (const auto& pair : um) {
		if (pair.second > max) {
			max = pair.second;
			maxA = pair.first;
		}
		else if (pair.second == max) {
			maxA = "-1";
		}
	}
	cout << maxA;

	return 0;
}