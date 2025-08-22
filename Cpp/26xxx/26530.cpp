#include <iostream>
using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--)	{
		int n, x;
		float total = 0;
		float place;
		string item;

		cin >> n;

		while (n--)	{
			cin >> item >> x >> place;

			total += x * place;
		}
		cout << fixed;
		cout.precision(2);
		cout << "$" << total << "\n";
	}
	return 0;
}