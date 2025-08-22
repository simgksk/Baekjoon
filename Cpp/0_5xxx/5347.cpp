#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
	long long int n, a, b;
	vector<int> vec;

	cin >> n;

	while (n--)	{
		cin >> a >> b;
		
		long long int l = lcm(a, b);

		cout << l << "\n";
	}
	return 0;
}