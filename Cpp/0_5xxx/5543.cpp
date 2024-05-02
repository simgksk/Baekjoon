#include <iostream>

using namespace std;

    int main()
    {
    		int s_burger, j_burger, h_burger, cola, cider;

		cin >> s_burger >> j_burger >> h_burger >> cola >> cider;

		if (s_burger < j_burger && s_burger < h_burger)
		{
			if (cola < cider)
				cout << (s_burger + cola) - 50 << endl;
			else if (cider < cola)
				cout << (s_burger + cider) - 50 << endl;
			else if (cola == cider)
				cout << (s_burger + cola) - 50 << endl;
		}

		else if(s_burger == j_burger)
		{
			if (s_burger < h_burger)
			{
				if (cola < cider)
					cout << (s_burger + cola) - 50 << endl;
				else if (cider < cola)
					cout << (s_burger + cider) - 50 << endl;
				else if (cola == cider)
					cout << (s_burger + cola) - 50 << endl;
			}
			else if (s_burger > h_burger)
			{
				if (cola < cider)
					cout << (h_burger + cola) - 50 << endl;
				else if (cider < cola)
					cout << (h_burger + cider) - 50 << endl;
				else if (cola == cider)
					cout << (h_burger + cola) - 50 << endl;
			}
		}

		else if(j_burger < s_burger && j_burger < h_burger)
		{
			if (cola < cider)
				cout << (j_burger + cola) - 50 << endl;
			else if (cider < cola)
				cout << (j_burger + cider) - 50 << endl;
			else if (cola == cider)
				cout << (j_burger + cola) - 50 << endl;
		}
		else if (j_burger == h_burger)
		{
			if (j_burger < s_burger)
			{
				if (cola < cider)
					cout << (j_burger + cola) - 50 << endl;
				else if (cider < cola)
					cout << (j_burger + cider) - 50 << endl;
				else if (cola == cider)
					cout << (j_burger + cola) - 50 << endl;
			}
			else if (s_burger < h_burger)
			{
				if (cola < cider)
					cout << (s_burger + cola) - 50 << endl;
				else if (cider < cola)
					cout << (s_burger + cider) - 50 << endl;
				else if (cola == cider)
					cout << (s_burger + cola) - 50 << endl;
			}
		}

		else if(h_burger < s_burger && h_burger < j_burger)
		{
			if (cola < cider)
				cout << (h_burger + cola) - 50 << endl;
			else if (cider < cola)
				cout << (h_burger + cider) - 50 << endl;
			else if (cola == cider)
				cout << (h_burger + cola) - 50 << endl;
		}
		else if (s_burger == h_burger)
		{
			if (s_burger < j_burger)
			{
				if (cola < cider)
					cout << (s_burger + cola) - 50 << endl;
				else if (cider < cola)
					cout << (s_burger + cider) - 50 << endl;
				else if (cola == cider)
					cout << (s_burger + cola) - 50 << endl;
			}
			else if (s_burger > j_burger)
			{
				if (cola < cider)
					cout << (j_burger + cola) - 50 << endl;
				else if (cider < cola)
					cout << (j_burger + cider) - 50 << endl;
				else if (cola == cider)
					cout << (j_burger + cola) - 50 << endl;
			}
		}
        	return 0;
    }
