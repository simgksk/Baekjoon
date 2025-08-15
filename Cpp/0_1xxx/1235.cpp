#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
	int n;
	int answer = 0;
	string num;
	vector<string> vec;

	cin >> n;
	int nn = n;

	while (n--) {
		cin >> num;
		vec.push_back(num);
	}

	for (int i = 0; i < vec[0].length(); i++) {
		bool isf = false;
		set<string> st;

		for (int j = 0; j < nn; j++) {
			string s = "";

			for (int k = 0; k < i + 1; k++) {
				s += vec[j][vec[0].length() - k - 1];
			}

			if (st.count(s)) {
				isf = true;
				break;
			}

			st.insert(s);

			if (isf)
				break;
		}
		if (!isf) {
			answer = i + 1;
			break;
		}
	}
	cout << answer;

	return 0;
}