#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s;

	while (true) {
		vector<char> vec;
		bool b = true;

		getline(cin, s);

		if (s == ".")
			break;

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(' || s[i] == '[')
				vec.push_back(s[i]);
			else if (s[i] == ')') {
				if (!vec.empty() && vec.back() == '(')
					vec.pop_back();
				else {
					b = false;
					break;
				}
			}
			else if (s[i] == ']') {
				if (!vec.empty() && vec.back() == '[')
					vec.pop_back();
				else {
					b = false;
					break;
				}
			}
		}

		if (vec.empty() && b)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}