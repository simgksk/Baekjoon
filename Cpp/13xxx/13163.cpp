#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;
	string line;

	cin >> n;
	cin.ignore();

	while (n--)	{
		getline(cin, line);

		stringstream ss(line);
		string s;
		vector<string> vec;

		ss >> s;

		while (ss >> s)	{
			vec.push_back(s);
		}

		cout << "god";

		for (auto& p : vec) {
			cout << p;
		}

		cout << "\n";
	}
	return 0;
}