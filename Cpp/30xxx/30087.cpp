#include <iostream>

using namespace std;

int main()
{
    int n;
		string semina[8];

		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> semina[i];

			if (semina[i] == "Algorithm")
				cout << "204" << endl;
			if (semina[i] == "DataAnalysis")
				cout << "207" << endl;
			if (semina[i] == "ArtificialIntelligence")
				cout << "302" << endl;
			if (semina[i] == "CyberSecurity")
				cout << "B101" << endl;
			if (semina[i] == "Network")
				cout << "303" << endl;
			if (semina[i] == "Startup")
				cout << "501" << endl;
			if (semina[i] == "TestStrategy")
				cout << "105" << endl;
		}

		return 0;
}
