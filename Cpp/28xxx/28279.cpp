#include <iostream>
#include <deque>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int n;
	int num;
	int x;
	deque<int> dq;

	cin >> n;

	while (n--){
		cin >> num;

		if (num == 1) {
			cin >> x;
			dq.insert(dq.begin(), x);
		}
		else if (num == 2) {
			cin >> x;
			dq.push_back(x);
		}
		else if (num == 3) {
			if (dq.empty())
				cout << -1 << "\n";
			else {
				cout << dq.front() << "\n";
				dq.erase(dq.begin());
			}
		}
		else if (num == 4) {
			if (dq.empty())
				cout << -1 << "\n";
			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (num == 5)
			cout << dq.size() << "\n";
		else if (num == 6) {
			if (dq.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (num == 7) {
			if (dq.empty())
				cout << -1 << "\n";
			else
				cout << dq.front() << "\n";
		}
		else if (num == 8) {
			if (dq.empty())
				cout << -1 << "\n";
			else
				cout << dq.back() << "\n";
		}
	}

	return 0;
}