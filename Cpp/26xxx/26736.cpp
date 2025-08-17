#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int a_cnt = 0, b_cnt = 0;

	cin >> str;
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'A')
			a_cnt++;
		else if (str[i] == 'B')
			b_cnt++;
	}

	cout << a_cnt << " : " << b_cnt;

	return 0;
}