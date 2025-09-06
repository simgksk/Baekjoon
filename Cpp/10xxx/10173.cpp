#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;

	while (true) {
		getline(cin, s);

		if (s == "EOI")
			break;

		string word = "nemo";
		transform(s.begin(), s.end(), s.begin(), ::towlower);
		transform(word.begin(), word.end(), word.begin(), ::towlower);

		if (s.find(word) != string::npos)
			cout << "Found\n";
		else
			cout << "Missing\n";
	}
	return 0;
}