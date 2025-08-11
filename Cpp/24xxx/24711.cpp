#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string getAnimal(const string& s) {
	size_t pos = s.find_last_of(' ');
	if (pos == string::npos)
		return s;
	return s.substr(pos + 1);
}

int main() {
	int list = 1;

	while (true) {
		int n;
		map<string, int> animals;

		cin >> n;
		cin.ignore();

		if (n == 0)
			break;

		while (n--) {
			string line;

			getline(cin, line);

			string animal = getAnimal(line);

			transform(animal.begin(), animal.end(), animal.begin(), ::tolower);

			animals[animal]++;
		}

		cout << "List " << list << ":\n";

		for (const auto &p : animals) {
			cout << p.first << " | " << p.second << "\n";
		}

		list++;
	}
	return 0;
}