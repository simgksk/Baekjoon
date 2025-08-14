#include <iostream>
#include <unordered_map>
#include <list>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int k, l;
	string num;
	unordered_map<string, list<string>::iterator> um;
	list<string> order;

	cin >> k >> l;

	while (l--)	{
		cin >> num;

		if (um.count(num)) {
			order.erase(um[num]);
			um.erase(num);
		}

		order.push_back(num);
		um[num] = --order.end();
	}

	int cnt = 0;
	for (auto& p : order) {
		if (cnt == k)
			break;
		cout << p << "\n";
		cnt++;
	}
	return 0;
}