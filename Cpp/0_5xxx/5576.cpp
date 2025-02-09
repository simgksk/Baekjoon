#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int w[10];
	int k[10];
	int w_score = 0;
	int k_score = 0;

	for (int i = 0; i < 10; i++) {
		cin >> w[i];
		cin >> k[i];

	}
	//for(int i=0; i<10; i++)

	sort(w, w + 10, greater<int>());
	sort(k, k + 10, greater<int>());

	for (int i = 0; i < 3; i++) {
		w_score += w[i];
		k_score += k[i];
	}

	cout << w_score << " " << k_score;

	return 0;
}