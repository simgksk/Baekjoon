#include <iostream>

using namespace std;

int main()
{
    	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % 6 == 0 || i == n)
			printf("%d Go! ", i);
		else
			printf("%d ", i);
	}

	return 0;
}
