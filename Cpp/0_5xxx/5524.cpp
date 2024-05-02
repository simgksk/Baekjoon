#include <iostream>

using namespace std;

	int main()
	{
#pragma region 5524. 입실 관리

		int n;
		string si;

		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> si;
			
			for (int j = 0; j < si.size(); j++)
				si[j] = tolower(si[j]);

			cout << si << endl;
		}

#pragma endregion

		return 0;
	}

