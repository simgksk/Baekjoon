#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
	int t;
	string str;

	cin >> t;
	cin.ignore();

	while (t--){
		getline(cin, str);
		stringstream ss(str);

		while (ss >> str){
			reverse(str.begin(), str.end());
			cout << str << " ";
		}
		cout << "\n";
	}

	return 0;
}