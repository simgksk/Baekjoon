#include <iostream>
#include <string>

using namespace std;

int main()
{
#pragma region 14645. 와이버스 부릉부릉

	int a, b;

	while (true)
	{
		cin >> a >> b;

		if (a - b <= 0)
			break;
	}

	cout << "비와이";

#pragma endregion

	return 0;
}
