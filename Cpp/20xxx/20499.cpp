#include <iostream>

using namespace std;

int main()
{
    	int k, d, a;
	char c;

	cin >> k >> c >> d >> c >> a;

	if (k + a < d || d == 0)
		cout << "hasu" << endl;
	else
		cout << "gosu" << endl;

	return 0;
}
