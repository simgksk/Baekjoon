#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
	int n;
	int max = 0;
	string name;
	map<string, int> m;
	vector<string> v;

	cin >> n;

	while (n--) {
		cin >> name;
		m[name]++;
	}

	for (const auto& pair : m) {
		if (pair.second > max) {
			max = pair.second;
			v.clear();
			v.push_back(pair.first);
		}
		else if (pair.second == max)
			v.push_back(pair.first);
	}

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";

	return 0;
}