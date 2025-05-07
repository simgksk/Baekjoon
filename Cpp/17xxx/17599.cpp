#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	int n;
	int num;
	unordered_set<int> us;

	cin >> n;

	while (n--) {
		cin >> num;
		us.insert(num);
	}

	cout << us.size();

	return 0;
}