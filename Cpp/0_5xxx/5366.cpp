#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

int main() {
	string name;
	int total = 0;
	unordered_map<string, int> um;
	vector<string> v;

	while (true) {
		getline(cin, name);

		if (name == "0")
			break;
		if (um.find(name) == um.end())
			v.push_back(name);

		um[name]++;
		total++;
	}

	for (const auto& pair : v) 
		cout << pair << ": " << um[pair] << "\n";

	cout << "Grand Total: " << total;

	return 0;
}