#include <iostream>
#include <string>

using namespace std;

int main()
{
#pragma region 31654. Adding Trouble

	int a, b, c;

	cin >> a >> b >> c;

	if (a + b == c)
		cout << "correct!";
	else if (a + b != c)
		cout << "wrong!";

#pragma endregion

#pragma region 10987. 모음의 개수

	string str;
	int sum = 0;

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			sum++;
	}

	cout << sum;

#pragma endregion

#pragma region 4504. 배수 찾기

	int n, num;

	cin >> n;

	while (true)
	{
		cin >> num;

		if (num == 0)
			break;

		if (num % n == 0)
			cout << num << " is a multiple of " << n << ".\n";
		else
			cout << num << " is NOT a multiple of " << n << ".\n";
	}

#pragma endregion

#pragma region 4458. 첫 글자를 대문자로

	int n;
	string s;

	cin >> n;
	cin.ignore();

	while (n--)
	{
		getline(cin, s);

		for (int i = 1; i <= s.length(); i++)
			s[0] = toupper(s[0]);

		cout << s << "\n";
		
	}

#pragma endregion

#pragma region 5597. 과제 안 내신 분..?

	int num[31] = {};
	int a;

	for (int i = 0; i < 28; i++)
	{
		cin >> a;
		num[a] = 1;
	}

	for (int i = 1; i <= 30; i++)
	{
		if (num[a] != num[i])
			cout << i << "\n";
	}

#pragma endregion


	return 0;
}