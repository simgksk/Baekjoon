#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
#pragma region 2750. 수 정렬하기

	int n;
	int num[1000];

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> num[i];

	sort(num, num + n);

	for (int i = 0; i < n; i++)
		cout << num[i] << "\n";
	
#pragma endregion

	return 0;
}