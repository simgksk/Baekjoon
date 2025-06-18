#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

int main() {
	int n;
	string str;
	map<string, string> mp;

	cin >> n;
	cin.ignore();

	while (n--)	{
		getline(cin, str);

		stringstream ss(str);
		string english_word, eq, minionese_word;

		ss >> english_word >> eq >> minionese_word;

		mp[english_word] = minionese_word;
	}

	int t, k;
	string english;

	cin >> t;

	while (t--)	{
		cin >> k;

		while (k--)	{
			cin >> english;
			for (const auto& p : mp) {
				if (p.first == english) {
					cout << p.second << " ";
				}
			}
		}
		cout << "\n";
	}
	return 0;
}