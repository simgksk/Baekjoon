#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	
	while (true){
		getline(cin, s);

		if (s == "***")
			break;

		reverse(s.begin(), s.end());

		cout << s << "\n";
	}

	return 0;
}