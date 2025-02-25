#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int t;
	string n1;

	cin >> t;

	while (t--){
		cin >> n1;

		string n2 = n1;

		reverse(n2.begin(), n2.end());

		int sum = stoi(n1) + stoi(n2);

		string n3 = to_string(sum);
		string n4 = n3;

		reverse(n4.begin(), n4.end());

		if (n3 == n4)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}