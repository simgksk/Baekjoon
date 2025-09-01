#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string a, b;

	cin >> n;

	while (n--)	{
		cin >> a >> b;

		string a1 = a;
		string b1 = b;

		sort(a1.begin(), a1.end());
		sort(b1.begin(), b1.end());

		if (a1 == b1)
			cout << a << " & " << b << " are anagrams.\n";
		else
			cout << a << " & " << b << " are NOT anagrams.\n";
	}
	return 0;
}