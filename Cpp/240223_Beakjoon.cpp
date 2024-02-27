#include <iostream>

using namespace std;

	int main()
	{
#pragma region 14924. 폰 노이만과 파리

		int s, t, d;

		cin >> s >> t >> d;

		int f = (d / (s * 2)) * t;

		cout << f;

#pragma endregion

		return 0;

	}
