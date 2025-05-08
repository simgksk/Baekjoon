#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	int n, m;
	int cnt = 0;
	string email;
	unordered_set<string> us;

	cin >> n;
	while (n--) {
		cin >> email;
		us.insert(email);
	}

	cin >> m;
	while (m--) {
		cin >> email;

		if (us.find(email) != us.end())
			cnt++;
	}
	cout << cnt;

	return 0;
}