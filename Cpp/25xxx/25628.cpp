#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int hamburger = 0;

		cin >> a >> b;

		while (a>=2 && b>=1)
		{
			a -= 2;
			b--;
			hamburger++;
		}
        
		cout << hamburger << endl;
	
		return 0;
}
