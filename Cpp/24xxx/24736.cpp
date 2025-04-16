#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int n = 2;

	while (n--)
	{
		int t, f, s, p, c;
	
		cin >> t >> f >> s >> p >> c;

		int sum = (t * 6) + (f * 3) + (s * 2) + (p * 1) + (c * 2);

		v.push_back(sum);

		sum = 0;
	}
	
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	return 0;
}