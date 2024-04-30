#include <iostream>

using namespace std;

int main()
{
#pragma region 2525. 오븐 시계

	int a, b, c;

	cin >> a >> b >> c;

	if (b + c < 60)
		cout << a << " " << b + c;

	else
	{
		int i = (b + c) / 60;
		int j = (b + c) % 60;

		if (a + i >= 24)
		{
			int k = (a + i) % 24;
			cout << k << " " << j;
		}

		else
			cout << a + i << " " << j;
	}
 
#pragma endregion

	return 0;
}
