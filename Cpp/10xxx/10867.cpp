#include <iostream>
#include <set>
using namespace std;

int main() {
	int n, num;
	set<int> st;

	cin >> n;

	while (n--)	{
		cin >> num;
		st.insert(num);
	}

	for (const auto& p : st) {
		cout << p << " ";
	}

	return 0;
}