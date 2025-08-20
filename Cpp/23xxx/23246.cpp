#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
	int n;
	vector<tuple<int, int, int>> vec; 

	cin >> n;

	while (n--) {
		int b, p, q, r;
		cin >> b >> p >> q >> r;

		int product = p * q * r;
		int sum = p + q + r;

		vec.emplace_back(b, product, sum); 
	}

	sort(vec.begin(), vec.end(), [](const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
		if (get<1>(a) != get<1>(b)) return get<1>(a) < get<1>(b);
		if (get<2>(a) != get<2>(b)) return get<2>(a) < get<2>(b);
		return get<0>(a) < get<0>(b);
		});

	for (int i = 0; i < 3; i++) {
		cout << get<0>(vec[i]) << " ";
	}

	return 0;
}