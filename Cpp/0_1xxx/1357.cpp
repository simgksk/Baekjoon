#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string x, y;

	cin >> x >> y;

	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());

	int sum = stoi(x) + stoi(y);
	string res = to_string(sum);

	reverse(res.begin(), res.end());
	res.erase(0, res.find_first_not_of('0'));

	cout << res;

	return 0;
}