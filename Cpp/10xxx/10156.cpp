#include <iostream>

using namespace std;

int main()
{
    		int k, n, m;

		cin >> k >> n >> m;

		if (k * n > m)
			printf("%d", (k * n) - m);
		else if (k * n <= m)
			printf("%d", 0);
        
        	return 0;
}
