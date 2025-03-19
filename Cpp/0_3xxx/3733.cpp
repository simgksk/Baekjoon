#include <iostream>
using namespace std;

int main() {
	int n, s;

	while (cin >> n >> s){
		int res = s / (n + 1);

		cout << res << "\n";
	}
	return 0;
}