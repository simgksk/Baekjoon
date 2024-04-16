#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double r, w, l;
	int cnt = 0;

	while (true)
	{
		cin >> r;

		if (r == 0)
			break;

		cin >> w >> l;
		
		if (sqrt((w / 2 * w / 2) + (l / 2 * l / 2)) <= r) 
			cout << "Pizza " << ++cnt << " fits on the table.\n";

		else
			cout << "Pizza " << ++cnt << " does not fit on the table.\n";
	}

	return 0;
}
