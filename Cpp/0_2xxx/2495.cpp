#include <iostream>
using namespace std;

int main() {
	string s;
	int t = 3;

	while (t--){
		int cnt = 1;
		int max = 1;
		
		cin >> s;

		for (int i = 0; i < s.length() - 1; i++) {
			if (s[i] == s[i + 1]) {
				cnt++;

				if (cnt > max)
					max = cnt;
			}
			else
				cnt = 1;
		}
		cout << max << "\n";
	}
	return 0;
}