#include <iostream>
#include <map>
using namespace std;

int main() {
	int n;
	int max = 0;
	string word;
	string maxWord = "";
	map<string, int> m;

	cin >> n;

	while (n--) {
		cin >> word;
		m[word]++;
	}

	for (const auto& pair : m) {
		if (pair.second > max) {
			max = pair.second;
			maxWord = pair.first;
		}
		else if (pair.second == max) {
			if (pair.first > maxWord)
				maxWord = pair.first;
		}
	}

	cout << maxWord << " " << max;

	return 0;
}