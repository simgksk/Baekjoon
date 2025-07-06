#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	long long b, n, m, price;
	long long sum = 0;
	string present;
	unordered_map<string, long long> um;

	cin >> b >> n >> m;

	while (n--)	{
		cin >> present >> price;

		um[present] = price;
	}

	while (m--)	{
		cin >> present;

		for (const auto& p : um) {
			if (p.first == present)
				sum += p.second;
		}
	}

	if (sum <= b)
		cout << "acceptable";
	else
		cout << "unacceptable";

	return 0;
}