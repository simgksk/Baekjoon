#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--)	{
		int n, l;
		int max = 0;
		string s;
		string s1 = "";
		unordered_map<string, int> um;

		cin >> n;

		while (n--)	{
			cin >> s >> l;
			um[s] += l;
		}

		for (auto& p : um) {
			if (p.second > max) {
				max = p.second;
				s1 = p.first;
			}
		}
		cout << s1 << "\n";
	}
	return 0;
}