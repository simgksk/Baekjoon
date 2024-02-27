#include <iostream>

using namespace std;

	int main()
	{
#pragma region 25314. 코딩은 체육과목 입니다

		int n;

		cin >> n;

		for (int i = 0; i < n; i++) 
		{
			if(i % 4 == 0)
				cout << "long ";
		}
		cout << "int" << endl;

#pragma endregion

#pragma region 25311. UCPC에서 가장 쉬운 문제 번호는?

		int y;

		cin >> y;

		cout << "A" << endl;

#pragma endregion

#pragma region 27294. 몇개고?

		int t, s;

		cin >> t >> s;

		if (11 < t && t < 17 && s == 0)
			cout << "320" << endl;
		else
			cout << "280" << endl;

#pragma endregion

#pragma region 27433. 팩토리얼 2

		int n;
		long long int result = 1;

		cin >> n;

		for (int i = 1; i <= n; i++)
			result *= i;

		cout << result << endl;

		return 0;

#pragma endregion




	}
