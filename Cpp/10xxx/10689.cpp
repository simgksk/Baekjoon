#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
	int t, n;
	
	cin >> t;

	for (int test_case = 1; test_case <= t; ++test_case) {
		int n;
		cin >> n;

		set<int> st;
		vector<int> vec(n);


		for (int i = 0; i < n; ++i) {
			cin >> vec[i];
			st.insert(vec[i]);
		}

		int cnt = st.size();
		set<int> st2;
		int res = 0;

		for (int i = 0; i < n; ++i) {
			st2.insert(vec[i]);
			res++;
			if (st2.size() == cnt) {
				break;
			}
		}

		cout << "Case " << test_case << ": " << res << "\n";
	}

	return 0;
}