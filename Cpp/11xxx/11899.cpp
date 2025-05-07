#include <iostream>
#include <stack>
using namespace std;

int main() {
	int t;
	int cnt = 0;
	stack<char> s;
	string str;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(')
			s.push('(');
		else {
			if (s.empty())
				cnt++;
			else
				s.pop();
		}
	}

	cout << cnt + s.size();

	return 0;
}