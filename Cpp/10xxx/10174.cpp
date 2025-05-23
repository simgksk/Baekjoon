#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string s;

	cin >> n;
	cin.ignore();

	while (n--)	{
		getline(cin, s);

		string s2 = s;

		transform(s.begin(), s.end(), s.begin(), ::tolower);
		transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

		reverse(s2.begin(), s2.end());

		if (s2 == s)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}