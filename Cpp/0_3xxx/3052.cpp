#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int num;
	vector<int> v;

	for (int i = 0; i < 10; i++) {
		cin >> num;
			
		int res = num % 42;
			
		v.push_back(res);
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	cout << v.size();

	return 0;
}