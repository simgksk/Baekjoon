#include <iostream>

using namespace std;

int main()
{
    		float x, y;

		while (true)
		{
			cin >> x >> y;

			if ((x < 0 && y == 0) || (x > 0 && y == 0))
				cout << "AXIS" << endl;
			else if ((x == 0 && y < 0) || (x == 0 && y > 0))
				cout << "AXIS" << endl;
			else if (x > 0 && y > 0)
				cout << "Q1" << endl;
			else if (x < 0 && y > 0)
				cout << "Q2" << endl;
			else if (x < 0 && y < 0)
				cout << "Q3" << endl;
			else if (x > 0 && y < 0)
				cout << "Q4" << endl;
			else if (x == 0 && y == 0)
			{
				cout << "AXIS";
				break;
			}
		}

		return 0;
}
