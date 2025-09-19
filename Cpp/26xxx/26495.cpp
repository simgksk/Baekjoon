#include <iostream>
using namespace std;

int main() {
	string s;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '0') {
			cout << "0000\n";
			cout << "0  0\n";
			cout << "0  0\n";
			cout << "0  0\n";
			cout << "0000\n";
		}
		else if (s[i] == '1') {
			cout << "   1\n";
			cout << "   1\n";
			cout << "   1\n";
			cout << "   1\n";
			cout << "   1\n";
		}
		else if (s[i] == '2') {
			cout << "2222\n";
			cout << "   2\n";
			cout << "2222\n";
			cout << "2   \n";
			cout << "2222\n";
		}
		else if (s[i] == '3') {
			cout << "3333\n";
			cout << "   3\n";
			cout << "3333\n";
			cout << "   3\n";
			cout << "3333\n";
		}
		else if (s[i] == '4') {
			cout << "4  4\n";
			cout << "4  4\n";
			cout << "4444\n";
			cout << "   4\n";
			cout << "   4\n";
		}
		else if (s[i] == '5') {
			cout << "5555\n";
			cout << "5   \n";
			cout << "5555\n";
			cout << "   5\n";
			cout << "5555\n";
		}
		else if (s[i] == '6') {
			cout << "6666\n";
			cout << "6   \n";
			cout << "6666\n";
			cout << "6  6\n";
			cout << "6666\n";
		}
		else if (s[i] == '7') {
			cout << "7777\n";
			cout << "   7\n";
			cout << "   7\n";
			cout << "   7\n";
			cout << "   7\n";
		}
		else if (s[i] == '8') {
			cout << "8888\n";
			cout << "8  8\n";
			cout << "8888\n";
			cout << "8  8\n";
			cout << "8888\n";
		}
		else if (s[i] == '9') {
			cout << "9999\n";
			cout << "9  9\n";
			cout << "9999\n";
			cout << "   9\n";
			cout << "   9\n";
		}
		cout << "\n";
	}
	return 0;
}