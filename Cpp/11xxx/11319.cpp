#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	getchar();

	while (n--){
		int consonants = 0, vowels = 0;
		string str;
		getline(cin, str);

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'A' || str[i] == 'a'
				|| str[i] == 'E' || str[i] == 'e'
				|| str[i] == 'I' || str[i] == 'i'
				|| str[i] == 'O' || str[i] == 'o'
				|| str[i] == 'U' || str[i] == 'u')
				vowels++;
			else if (str[i] == ' ')
				continue;
			else
				consonants++;
		}
		cout << consonants << " " << vowels << "\n";
	}
	return 0;
}