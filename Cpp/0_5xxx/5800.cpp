#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int k;
	int c = 1;
	
	cin >> k;

	while (k--)	{
		int n, point;
		int max_gap = 0;
		vector<int> vec;

		cin >> n;

		while (n--)	{
			cin >> point;
			vec.push_back(point);
		}

		sort(vec.begin(), vec.end());

		for (int i = 0; i < vec.size() - 1; i++) {
			int gap = vec[i + 1] - vec[i];

			if (gap > max_gap) {
				max_gap = gap;
			}
		}
		
		cout << "Class " << c << "\n";
		cout << "Max " << vec.back() << ", Min " << vec.front() << ", Largest gap " << max_gap << "\n";
		
		c++;
	}
	return 0;
}