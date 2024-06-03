#include <iostream>

using namespace std;

int main()
{
    	int n;
	long int min = 1000000;
	long int max = -1000000;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;

		cin >> num;

		if (num <= min)
			min = num;
		else
			min = min;

		if (num >= max)
			max = num;
		else
			max = max;
	}

	printf("%d %d", min, max);

	return 0;
}
