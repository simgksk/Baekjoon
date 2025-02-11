#include <iostream>
using namespace std;

int main() {
	int a, b;
	int t = 1;
	string s;

	while (true){
		cin >> a >> s >> b;

		if (s == "E")
			break;
		if (s == ">") {
			if (a > b) {
				cout << "Case " << t << ": true\n";
				t++;
			}
			else {
				cout << "Case " << t << ": false\n";
				t++;
			}
		}
		if (s == ">=") {
			if (a >= b) {
				cout << "Case " << t << ": true\n";
				t++;
			}
			else {
				cout << "Case " << t << ": false\n";
				t++;
			}
		}
		if (s == "<") {
			if (a < b) {
				cout << "Case " << t << ": true\n";
				t++;
			}
			else {
				cout << "Case " << t << ": false\n";
				t++;
			}
		}
		if (s == "<=") {
			if (a <= b) {
				cout << "Case " << t << ": true\n";
				t++;
			}
			else {
				cout << "Case " << t << ": false\n";
				t++;
			}
		}
		if (s == "==") {
			if (a == b) {
				cout << "Case " << t << ": true\n";
				t++;
			}
			else {
				cout << "Case " << t << ": false\n";
				t++;
			}
		}
		if (s == "!=") {
			if (a != b) {
				cout << "Case " << t << ": true\n";
				t++;
			}
			else {
				cout << "Case " << t << ": false\n";
				t++;
			}
		}
	}
	return 0;
}