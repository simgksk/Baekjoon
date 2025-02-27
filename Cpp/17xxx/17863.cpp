#include <iostream>
#include <string>
using namespace std;

int main() {
	char n[7];

	for (int i = 0; i < 7; i++)
		cin >> n[i];

	if (n[0] == '5' && n[1] == '5' && n[2] == '5')
		cout << "YES";
	else
		cout << "NO";

	return 0;
}