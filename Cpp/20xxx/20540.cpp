#include <iostream>
using namespace std;

int main() {
	string mbti;
	string type = "";

	cin >> mbti;

	if (mbti[0] == 'E')
		type += "I";
	else
		type += "E";

	if (mbti[1] == 'S')
		type += "N";
	else
		type += "S";
		
	if (mbti[2] == 'T')
		type += "F";
	else
		type += "T";
		
	if (mbti[3] == 'J')
		type += "P";
	else
		type += "J";

	cout << type;

	return 0;
}