#include <iostream>
#include <string>

using namespace std;

int main()
{
#pragma region 5355. 화성 수학

	int t;
	float a;
	string s;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a;
		getline(cin, s);

		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == '@')
				a *= 3;
			if (s[j] == '%')
				a += 5;
			if (s[j] == '#')
				a -= 7;
		}
			
		printf("%.2f\n", a);
	}

#pragma endregion

#pragma region 2562. 최댓값

	int n;
	int max = 0;
	int idx = 0;

	for (int i = 1; i <= 9; i++)
	{
		cin >> n;

		if (max < n)
		{
			max = n;
			idx = i;
		}
	}

	cout << max << "\n" << idx;

#pragma endregion

	return 0;

}