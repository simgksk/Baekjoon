#include <iostream>
#include <string>

using namespace std;

int main()
{
#pragma region 2744. ��ҹ��� �ٲٱ�

	string s;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = toupper(s[i]);

		else
			s[i] = tolower(s[i]);
	}

	cout << s;

#pragma endregion

#pragma region 4999. ��!

	string j_ah;
	string d_ah;

	cin >> j_ah >> d_ah;

	if (j_ah.length() < d_ah.length())
		cout << "no";
	else
		cout << "go";

#pragma endregion

#pragma region 14645. ���̹��� �θ��θ�

	int a, b;

	while (true)
	{
		cin >> a >> b;

		if (a - b <= 0)
			break;
	}

	cout << "�����";

#pragma endregion

	return 0;
}