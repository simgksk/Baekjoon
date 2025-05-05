#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int n;
	int num;
	string s;

	cin >> n;

	while (n--){
		cin >> s;

		if (s == "push_back") {
			cin >> num;
			v.push_back(num);
		}
		else if (s == "push_front") {
			cin >> num;
			v.insert(v.begin(), num);
		}
		else if (s == "front") {
			if (v.empty())
				cout << -1 << "\n";
			else
				cout << v.front() << "\n";
		}
		else if (s == "back") {
			if (v.empty())
				cout << -1 << "\n";
			else
				cout << v.back() << "\n";
		}
		else if (s == "size")
			cout << v.size() << "\n";
		else if (s == "empty") {
			if (v.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (s == "pop_front") {
			if (v.empty())
				cout << -1 << "\n";
			else {
				cout << v.front() << "\n";
				v.erase(v.begin());
			}
		}
		else if (s == "pop_back") {
			if (v.empty())
				cout << -1 << "\n";
			else {
				cout << v.back() << "\n";
				v.pop_back();
			}
		}
	}

	return 0;
}