#include <iostream>

using namespace std;

int main() {
	int n, lv;
	int easy_lv = 4;
	string title;
	string easy_title = "";

	cin >> n;

	while (n--){
		cin >> title >> lv;

		if (lv < easy_lv) {
			easy_lv = lv;
			easy_title = title;
		}
	}
	cout << easy_title;

	return 0;
}
