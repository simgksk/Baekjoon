#include <iostream>
using namespace std;

int main() {
	char s;
	int n;
	int cnt = 0;

	cin >> n;

	while (n--){
		cin >> s;

		if (s == 'a' || s == 'i' || s == 'u' || s == 'e' || s == 'o')
			cnt++;
	}
	cout << cnt;

	return 0;
}