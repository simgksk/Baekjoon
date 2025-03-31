#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	int t;

	cin >> n;

	while (n--){
		int num;
		int arr[20] = {};
		int cnt = 0;

		cin >> t;

		for (int i = 0; i < 20; i++) {
			cin >> arr[i];
		}

		for (int i = 1; i < 20; i++) {
			int k = i;

			while (k > 0 && arr[k] < arr[k - 1]){
				int temp = arr[k];
				arr[k] = arr[k - 1];
				arr[k - 1] = temp;

				k--;
				cnt++;
			}
		}
		cout << t << " " << cnt << "\n";
	}
	return 0;
}