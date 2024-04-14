#include <iostream>

using namespace std;

int main()
{
#pragma region 2884. 알람 시계

	int h, m;

	cin >> h >> m;

	if (m - 45 >= 0)
		cout << h << " " << m - 45;
  
	else
	{
		int i = 60 - (45 - m);
		int j = h - 1;

		if (j < 0)
			cout << "23" << " " << i;
		else
			cout << j << " " << i;
	}

#pragma endregion

	return 0;
}
