#include <iostream>

using namespace std;

int main()
{
	// 1094. ¸·´ë±â
	int x;
	int cnt = 0;

	cin >> x;
	
	while (x > 0)
	{
		if (x % 2 == 1)
			cnt++;
		x /= 2;
	}
	cout << cnt;

	return 0;
}