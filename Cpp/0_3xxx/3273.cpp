#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m, num;
	int cnt = 0;
	vector<int> vec;

	cin >> n;

	while (n--) {
		cin >> num;

		vec.push_back(num);
	}

	cin >> m;

	sort(vec.begin(), vec.end());

	int left = 0, right = vec.size() - 1;

	while (left < right) {
		int sum = vec[left] + vec[right];

		if (sum == m) {
			cnt++;

			left++;
			right--;
		}
		else if (sum < m)
			left++;
		else
			right--;
	}

	cout << cnt;
}