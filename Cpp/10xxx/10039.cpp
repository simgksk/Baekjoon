#include <iostream>

using namespace std;

int main()
{
    		int a, b, c, d, e;

		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;
		cin >> e;

		if (a <= 40)
			a = 40;
		else
			a = a;

		if (b <= 40)
			b = 40;
		else
			b = b;

		if (c <= 40)
			c = 40;
		else
			c = c;

		if (d <= 40)
			d = 40;
		else
			d = d;

		if (e <= 40)
			e = 40;
		else
			e = e;

		cout << (a + b + c + d + e) / 5 << endl;

		return 0;
}
