#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int happy_cnt = 0;
	int sad_cnt = 0;

	getline(cin, s);

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ':' && s[i + 1] == '-') {
			if (s[i + 2] == ')')
				happy_cnt++;
			else if (s[i + 2] == '(')
				sad_cnt++;
		}
	}

	if (happy_cnt > sad_cnt)
		cout << "happy";
	else if (happy_cnt < sad_cnt)
		cout << "sad";
	else if (happy_cnt == sad_cnt) {
		if(happy_cnt != 0)
			cout << "unsure";
		else
			cout << "none";
	}

	return 0;
}