#include <iostream>

using namespace std;

int main()
  {
   		int day, a, b, c, d, e;
		int sum = 0;

		cin >> day >> a >> b >> c >> d >> e;

		if (day == a)
			sum += 1;
		if (day == b)
			sum += 1;
		if (day == c)
			sum += 1;
		if (day == d)
			sum += 1;
		if (day == e)
			sum += 1;

		cout << sum << endl;

		return 0;
  }
