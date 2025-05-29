#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, num;
	vector<int> vec;

	cin >> n;

	while (n--)	{
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end());

	for (int i : vec) {
		cout << i << " ";
	}

	return 0;
}