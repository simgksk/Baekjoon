#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;
	int cnt = 0;
	string user;
	unordered_set<string> us;

	cin >> n;

	while (n--)	{
		cin >> user;

		if (user == "ENTER")
			us.clear();
		else {
			if (us.find(user) == us.end()) {
				us.insert(user);
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}