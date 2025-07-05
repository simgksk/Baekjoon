#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	int arr[3] = {};
	int arr_ordered[3] = {};
	int arr_unordered[3] = {};
	vector<string> vec;

	vec.push_back("Gnomes:");

	cin >> n;

	while (n--)	{
		for (int i = 0; i < 3; i++) {
			cin >> arr[i];
		}
		copy(arr, arr + 3, arr_ordered);
		copy(arr, arr + 3, arr_unordered);

		sort(arr_ordered, arr_ordered + 3);
		sort(arr_unordered, arr_unordered + 3, greater<int>());

		if (equal(arr, arr + 3, arr_ordered) || equal(arr, arr + 3, arr_unordered))
			vec.push_back("Ordered");
		else
			vec.push_back("Unordered");
	}

	for (const auto& p : vec) {
		cout << p << "\n";
	}

	return 0;
}