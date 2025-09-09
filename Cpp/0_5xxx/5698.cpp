#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;

int main() {
	string line;

	while (true) {
		getline(cin, line);

		if (line == "*")
			break;

		stringstream ss(line);
		string s;
		vector<string> vec;

		while (ss >> s)	{
			vec.push_back(s);
		}

		char first = tolower(vec[0][0]);
		bool isSame = true;

		for (int i = 1; i < vec.size(); i++) {
			if (tolower(vec[i][0]) != first) {
				isSame = false;
				break;
			}
		}
		cout << (isSame ? "Y\n" : "N\n");
	}
	return 0;
}