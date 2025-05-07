#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	int n;
	string file;
	map<string, int> m;

	cin >> n;

	while (n--){
		cin >> file;

		size_t pos = file.find('.');
		if (pos != string::npos)
			file.erase(0, pos + 1);

		m[file]++;
	}

	for (auto it = m.begin(); it != m.end(); it++)
		cout << it->first << " " << it->second << "\n";

	return 0;
}