#include <iostream>
using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--)	{
		int n;
		int num;
		int index = 0;
		int max = 0;
		int total = 0;
		bool same = false;

		cin >> n;

		for(int i = 1; i <= n; i++)	{
			cin >> num;

			total += num;
			
			if (num > max) {
				max = num;
				index = i;
				same = false;
			}
			else if (num == max)
				same = true;
		}

		if (!same) {
			total -= max;

			if (max > total)
				cout << "majority winner " << index << "\n";
			else 
				cout << "minority winner " << index << "\n";
		}
		else
			cout << "no winner\n";
	}
	return 0;
}