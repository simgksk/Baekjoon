#include <iostream>
#include <map>
#include <unordered_set>
using namespace std;

int main() {
	int n, m;
	int cnt = 0;
	string passport;
	unordered_set<string> us;

	cin >> n;

	while (n--) {
		cin >> passport;
		us.insert(passport);
	}

	cin >> m;

	while (m--){
		cin >> passport;
		if (us.find(passport) != us.end())
			cnt++;
	}

	cout << cnt;

	return 0;
}