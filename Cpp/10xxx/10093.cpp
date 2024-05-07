#include <iostream>

using namespace std;

int main()
{
   		long long a, b;

		cin >> a >> b;

		if (a < b)
		{
			cout << b - a - 1 << endl;

			for (long long i = a + 1; i < b; i++)
			{
				cout << i << ' ';
			}
		}

		else if (a > b)
		{
			cout << a - b - 1 << endl;

			for (long long i = b + 1; i < a; i++)
			{
				cout << i << ' ';
			}
		}

		else if (a == b || a - b == 1 || b - a == 1)
			cout << 0;
        
        return 0;
}
