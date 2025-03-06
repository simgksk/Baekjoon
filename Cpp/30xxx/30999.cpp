#include <iostream>
using namespace std;

int main() {
	int n, m;
	int cnt = 0;
	char c;

	cin >> n >> m;

	while (n--){
		int ocnt = 0;
		int xcnt = 0;

		for (int i = 0; i < m; i++) {
			cin >> c;

			if (c == 'O')
				ocnt++;
			else if (c == 'X')
				xcnt++;
		}
		if (ocnt > xcnt)
			cnt++;
	}
	cout << cnt;

	return 0;
}