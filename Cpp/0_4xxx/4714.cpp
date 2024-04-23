#include <iostream>

using namespace std;

int main()
{
#pragma region 4714. Lunacy

	float x;

	while (true)
	{
		cin >> x;

		float y = x * 0.167;

		if (x < 0)
			break;

		printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n", x, y);
	}
		

#pragma endregion

	return 0;
}
