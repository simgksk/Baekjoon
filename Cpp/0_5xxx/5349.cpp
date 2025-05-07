#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string num;
	set<string> s1;
	set<string> s2;

	while (true) {
		cin >> num;

		if (num == "000-00-0000")
			break;

		if (s1.find(num) != s1.end())
			s2.insert(num);
		else
			s1.insert(num);
	}

	vector<string> vec(s2.begin(), s2.end());
	sort(vec.begin(), vec.end());

	for (const auto& pair : vec)
		cout << pair << "\n";

	return 0;
}