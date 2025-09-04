#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;

	cin >> n;
	cin.ignore();

	for (int i = 1; i <= n; i++) {
		string line;
		vector<string> vec;

		getline(cin, line);

		stringstream ss(line);
		string s;

		while (ss >> s)	{
			vec.push_back(s);
		}

		cout << "Case #" << i << ": ";

		for (int j = vec.size() - 1; j >= 0; j--) {
			cout << vec[j] << " ";
		}

		cout << "\n";
	}
	return 0;
}