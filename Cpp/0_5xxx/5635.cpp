#include <iostream>
#include <vector>
#include <map>
#include <tuple>
using namespace std;

int main() {
	int n, day, month, year;
	string name;
	map<string, tuple<int, int, int>> mp;

	cin >> n;

	while (n--)	{
		cin >> name >> day >> month >> year;

		mp[name] = make_tuple(year, month, day);
	}

	string old, young;
	tuple<int, int, int> old_birth = make_tuple(2011, 13, 31);
	tuple<int, int, int> young_birth = make_tuple(1989, 0, 0);

	for (const auto& p : mp) {
		if (p.second < old_birth) {
			old_birth = p.second;
			old = p.first;
		}
		if (p.second > young_birth) {
			young_birth = p.second;
			young = p.first;
		}
	}

	cout << young << "\n" << old;

	return 0;
}