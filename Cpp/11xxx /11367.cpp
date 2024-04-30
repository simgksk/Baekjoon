#include <iostream>

using namespace std;

	int main()
	{
   		int n, grade;
		string name;

		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> name >> grade;

			if (grade <= 59)
				cout << name << " F" << endl;
			else if (grade <= 66)
				cout << name << " D" << endl;
			else if (grade <= 69)
				cout << name << " D+" << endl;
			else if (grade <= 76)
				cout << name << " C" << endl;
			else if (grade <= 79)
				cout << name << " C+" << endl;
			else if (grade <= 86)
				cout << name << " B" << endl;
			else if (grade <= 89)
				cout << name << " B+" << endl;
			else if (grade <= 96)
				cout << name << " A" << endl;
			else if (grade <= 100)
				cout << name << " A+" << endl;
		}

		return 0;
    }
