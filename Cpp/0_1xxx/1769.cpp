#include <iostream>
#include <string>
using namespace std;

int main() {
	string x;
	int cnt = 0;

	cin >> x;

	
	while (x.length() > 1){
		int sum = 0;

		for (int i = 0; i < x.length(); i++) {
			int num = x[i] - '0';
			sum += num;
		}
		cnt++;
		x = to_string(sum);
	}
	cout << cnt << "\n";

	if (stoi(x) % 3 == 0)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}