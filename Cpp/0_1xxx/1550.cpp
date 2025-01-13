#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	cout << stoi(str, nullptr, 16) << "\n";
	return 0;
}