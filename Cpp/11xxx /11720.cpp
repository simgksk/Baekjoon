#include <iostream>

using namespace std;

int main()
{
    		int n;
		char s[101];
		int sum = 0;

		cin >> n >> s;

		for (int i = 0; i < n; i++)
			sum += s[i] - '0';
		
		cout << sum << endl;

		return 0;
}
