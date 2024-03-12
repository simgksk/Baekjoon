#include <iostream>

using namespace std;

int main()
{
#pragma region 10178. 할로윈의 사탕

	int t, c, v;

	cin >> t;

	while (t--)
	{
		cin >> c >> v;

		cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s).\n";
	}

#pragma endregion

	return 0;
}