#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
#pragma region 15726. ��Ģ����

	long long a, b, c;

	cin >> a >> b >> c;

	cout << max(a * b / c, a * c / b);

#pragma endregion

	return 0;
}