#include <iostream>

using namespace std;

	int main()
	{
#pragma region 15059. Hard choice

		int ca, ba, pa, cr, br, pr;
		int result = 0;

		cin >> ca >> ba >> pa >> cr >> br >> pr;

		if(ca<cr)
		{
			int c = cr - ca;
			result += c;
		}

		if (ba < br)
		{
			int b = br - ba;
			result += b;
		}

		if (pa < pr)
		{
			int p = pr - pa;
			result += p;
		}

		cout << result;

#pragma endregion

		return 0;
	}
