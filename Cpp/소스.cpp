#include <iostream>

using namespace std;

int main()
{
#pragma region 10178. �ҷ����� ����

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