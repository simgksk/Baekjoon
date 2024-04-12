#include <iostream>

using namespace std;

int main()
{
    int n, a, d, g;
		int result = 0;
		int max = 0;

		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> a >> d >> g;

			if (a == d + g)
			{
				result = (a * (d + g)) * 2;

				if (result >= max)
					max = result;
				else
					max = max;
			}
			else if (a != d + g)
			{
				result = a * (d + g);

				if (result >= max)
					max = result;
				else
					max = max;
			}
		}

		cout << max;
        
   return 0;
}
