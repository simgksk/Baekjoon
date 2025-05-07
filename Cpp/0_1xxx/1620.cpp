#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin.tie(NULL);

	int n, m;
	string name, problem;
	map<string, int> porketmonName;
	map<int, string> porketmonIndex;
	vector<string> v;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> name;

		porketmonName[name] = i;
		porketmonIndex[i] = name;
	}

	while (m--) {
		cin >> problem;

		if (isdigit(problem[0])) {
			int index = stoi(problem);
			v.push_back(porketmonIndex[index]);
		}
		else
			v.push_back(to_string(porketmonName[problem]));
	}

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";

	return 0;
}