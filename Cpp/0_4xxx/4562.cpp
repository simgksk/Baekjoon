#include <iostream>

using namespace std;

int main()
{
	int n, x, y;

	cin >> n;
        
        while (n--)
	{
		cin >> x >> y;

		if (x >= y)
			cout << "MMM BRAINS" << endl;
		else if (x < y)
			cout << "NO BRAINS" << endl;
	}

	return 0;
}
