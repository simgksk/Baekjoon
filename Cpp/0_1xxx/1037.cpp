#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
#pragma region 1037. 약수

	int n;
	int a[51];
	int max = 0;
	int min = 1000000;
	
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

		if (a[i] >= max)
			max = a[i];
		
		if (a[i] <= min)
			min = a[i];
	}
	cout << min * max;

#pragma endregion

  return 0;
}
