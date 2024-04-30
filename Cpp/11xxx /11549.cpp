#include <iostream>

using namespace std;

int main()
{
    		int t;
		int abcde;
		int n = 0;

		cin >> t;

		for (int i = 0; i < 5; i++)
		{
			cin >> abcde;
			if (abcde == t)
				n++;
		}

		cout << n;

		return 0;
}
