#include <iostream>

using namespace std;

	int main()
	{
#pragma region 6841. I Speak TXTMSG

		string s;

		while (true)
		{
			cin >> s;

			if (s == "TTYL")
			{
				cout << "talk to you later" << endl;
				break;
			}
			else if (s == "CU")
				cout << "see you" << endl;
			else if (s == ":-)")
				cout << "I’m happy" << endl;
			else if (s == ":-(")
				cout << "I’m unhappy" << endl;
			else if (s == ";-)")
				cout << "wink" << endl;
			else if (s == ":-P")
				cout << "stick out my tongue" << endl;
			else if (s == "(~.~)")
				cout << "sleepy" << endl;
			else if (s == "TA")
				cout << "totally awesome" << endl;
			else if (s == "CCC")
				cout << "Canadian Computing Competition" << endl;
			else if (s == "CUZ")
				cout << "because" << endl;
			else if (s == "TY")
				cout << "thank-you" << endl;
			else if (s == "YW")
				cout << "you’re welcome" << endl;
			else if (s == "TTYL")
				cout << "talk to you later" << endl;
			else
				cout << s << endl;
		}

#pragma endregion

		return 0;
	}
