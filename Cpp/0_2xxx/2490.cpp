#include <iostream>

using namespace std;

	int main()
	{
        	int a, b, c, d;

		for (int i = 0; i < 3; i++)
		{
			cin >> a >> b >> c >> d;

			int add = a + b + c + d;

			if (add == 3)
				cout << "A" << endl;
			else if (add == 2)
				cout << "B" << endl;
			else if (add == 1)
				cout << "C" << endl;
			else if (add == 0)
				cout << "D" << endl;
			else if (add == 4)
				cout << "E" << endl;
		}
        	return 0;
    	}
