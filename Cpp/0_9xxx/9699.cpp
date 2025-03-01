#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int i = 1;
	cin >> n;

	while (n--){
		int arr[5] = {};

		for (int i = 0; i < 5; i++)
			cin >> arr[i];
		
		sort(arr, arr + 5);

		cout << "Case #" << i << ": " << arr[4] << "\n";

		i++;
	}
	return 0;
}