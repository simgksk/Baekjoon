#include <iostream>
#include <stack>
using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		stack<char> s;
		string str;
		bool check = true;

		cin >> str;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(')
				s.push('(');
			else if (s.empty()) {
				check = false;
				break;
			}
			else
				s.pop();
		}

		if (s.empty() && check)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}