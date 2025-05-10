#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int n, num;
	string card;
	unordered_map<string, int> um;
	bool five = false;

	cin >> n;

	while (n--) {
		cin >> card >> num;
		um[card] += num;
	}

	for (const auto& pair : um) {
		if (pair.second == 5) {
			five = true;
			break;
		}
		else
			five = false;
	}

	cout << (five ? "YES" : "NO");

	return 0;
}