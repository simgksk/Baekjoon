#include <iostream>

using namespace std;

int main() {
	int t;
	string ox;

	cin >> t;

	while (t--){
		int point = 0;
		int o_cnt = 0;

		cin >> ox;
		
		for (int i = 0; i < ox.size(); i++) {
			if (ox[i] == 'O') {
				o_cnt++;
				point += o_cnt;
			}
			else
				o_cnt = 0;
		}
		cout << point << "\n";
	}
	return 0;
}