#include <iostream>
#include <string>
#include <cctype>

using namespace std;

	int main()
	{
		char c;
		string s;

		while (true)
		{
			cin >> c;
			getline(cin, s);

			int cnt = 0;

			if (c == '#')
				break;

			for (int i = 0; i < s.length(); i++)
			{
				
				if (s[i]==c || s[i]==toupper(c))
					cnt++;
			}
			
			cout << c << " " << cnt << "\n";
		}
		
		return 0;
	}
