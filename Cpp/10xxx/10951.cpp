#include <iostream>

using namespace std;

int main()
{
#pragma region 10951. A + B - 4

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;

	while (true)
	{
		cin >> a >> b;

		if (cin.eof())
			break;
		else
			cout << a + b << "\n";
	}

#pragma endregion

	return 0;
}
