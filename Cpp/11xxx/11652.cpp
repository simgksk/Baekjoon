#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;

int main() {
	int n;
	long long int num;
	long long int maxNum = INT_MAX;
	int maxCnt = 0;
	map<long long int, int> m;

	cin >> n;

	while (n--) {
		cin >> num;
		m[num]++;
	}

	for (const auto& pair : m) {
		if (pair.second > maxCnt) {
			maxCnt = pair.second;
			maxNum = pair.first;
		}
		else if (pair.second == maxCnt)
			maxNum = min(maxNum, pair.first);
	}

	cout << maxNum;

	return 0;
}