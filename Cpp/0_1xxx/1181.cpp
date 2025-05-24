#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string& a, string& b) {
	if (a.length() != b.length())
		return a.length() < b.length();
	return a < b;
}

int main() {
	int n;
	string word;
	set<string> st;
	
	cin >> n;

	while (n--)	{
		cin >> word;

		st.insert(word);
	}

	vector<string> vec(st.begin(), st.end());
	sort(vec.begin(), vec.end(), cmp);

	for (const auto& p : vec) {
		cout << p << "\n";
	}

	return 0;
}