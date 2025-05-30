#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string input;
	string result = "";

	getline(cin, input);

	for (int i = 0; i < input.length(); i++) {
		if (input[i] == '(') {
			string temp = "";
			i++;

			while (input[i] != ')')	{
				temp += input[i];
				i++;
			}

			reverse(temp.begin(), temp.end());
			result += temp;
		}
		else {
			result += input[i];
		}
	}

	cout << result;

	return 0;
}