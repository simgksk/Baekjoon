#include <iostream>
#include <string>

using namespace std;

	int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);

		string s;

		while (true)
		{
			getline(cin, s);

			if (s == "")
				break;

			cout << s << "\n";
		}

		return 0;
	}
