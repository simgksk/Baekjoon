#include <iostream>

using namespace std;

int main()
{
    	int n, m;

	cin >> n >> m;

	int sn = n / 2;
	int am = m / 2;

	if (n <= m)
		cout << sn;
	else
		cout << am;

	return 0;
}
