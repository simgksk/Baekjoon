#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int num;
	int sum = 0;
	vector<pair<int, int>> vec1;
	vector<int> vec2;

	for (int i = 1; i <= 8; i++) {
		cin >> num;
		vec1.push_back({ num, i });
	}

	sort(vec1.begin(), vec1.end(), [](auto a, auto b) {
		return a.first > b.first;
	});

	for (int i = 0; i < 5; i++) {
		sum += vec1[i].first;
		vec2.push_back(vec1[i].second);
	}

	sort(vec2.begin(), vec2.end());

	cout << sum << "\n";
	for (int i : vec2) {
		cout << i << " ";
	}

	return 0;
}