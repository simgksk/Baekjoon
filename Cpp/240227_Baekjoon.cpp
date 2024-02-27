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

#pragma region 15232. Rectangles

		int r, c;

		cin >> r >> c;

		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				printf("*");
			}
			printf("\n");
		}

#pragma endregion


		return 0;
	}
