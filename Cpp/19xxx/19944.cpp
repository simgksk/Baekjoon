#include <iostream>

using namespace std;

int main()
{
    	int n, m;

	cin >> n >> m;

	if (m == 1 || m == 2)
		cout << "NEWBIE!" << endl;
	else if (n >= m && m > 2)
		cout << "OLDBIE!" << endl;
	else if(n < m)
		cout << "TLE!" << endl;

	return 0;
}
