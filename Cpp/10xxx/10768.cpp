#include <iostream>

using namespace std;

int main()
  {
    		int m, d;
		
		cin >> m >> d;

		if (m <= 1)
			cout << "Before" << endl;
		else if (m == 2)
		{
			if (d < 18)
				cout << "Before" << endl;
			else if (d == 18)
				cout << "Special" << endl;
			else if (d > 18)
				cout << "After" << endl;
		}
		else if (m > 2)
			cout << "After" << endl;
        
    		return 0;
  }
