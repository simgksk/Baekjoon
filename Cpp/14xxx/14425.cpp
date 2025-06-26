#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	int n, m;
	int s = 0;
	string str;
	unordered_set<string> us;

	cin >> n >> m;

	while (n--) {
		cin >> str;
		us.insert(str);
	}

	while (m--)	{
		cin >> str;

		if (us.find(str) != us.end())
			s++;
	}

	cout << s;

	return 0;
}