#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string line;

	while (true) {
		getline(cin, line);

		if (line == "#")
			break;

		stringstream ss(line);
		string word;
		vector<string> vec;

		while (ss >> word)	{
			reverse(word.begin(), word.end());
			vec.push_back(word);
		}

		for (auto& p : vec) {
			cout << p << " ";
		}
		cout << "\n";
	}
}