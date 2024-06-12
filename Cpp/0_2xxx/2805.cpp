#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<long long> tree;

long long binarySearch(long long n, long long m) 
{
	long long left = 1;
	long long right = n;
	long long cutting, sum;

	while (left <= right)
	{
		cutting = (left + right) / 2;
		sum = 0;

		for (long long k : tree)
		{
			if (k > cutting)
				sum += k - cutting;
		}

		if (sum >= m)
			left = cutting + 1;
		else
			right = cutting - 1;
	}
	return left - 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n, m;
	cin >> n >> m;
	tree.resize(n);

	for (int i = 0; i < n; i++)
		cin >> tree[i];

	sort(tree.begin(), tree.end());

	cout << binarySearch(tree.back(), m);

	return 0;
}
