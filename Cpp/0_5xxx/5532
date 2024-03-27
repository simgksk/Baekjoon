#include <iostream>

using namespace std;

	int main()
	{
#pragma region 5532. 방학 숙제

		int l, a, b, c, d;

		cin >> l >> a >> b >> c >> d;

		if (a / c > b / d) 
		{
			if (a % c > 0) 
				printf("%d", l - (a / c + 1));
			else if (a % c == 0)
				printf("%d", l - (a / c));
		}
		else if (a / c < b / d)
		{
			if (b % d > 0)
				printf("%d", l - (b / d + 1));
			else if (b % d == 0)
				printf("%d", l - (b / d));
		}
		else if (a / c == b / d)
		{
			if (a % c > 0)
				printf("%d", l - (a / c + 1));
			else if (a % c == 0)
				printf("%d", l - (a / c));
		}

#pragma endregion

		return 0;
	}

