#include <iostream>

using namespace std;

int main()
{
	//2869. 달팽이는 올라가고 싶다

	int a, b, v;

	cin >> a >> b >> v;

	int day = (v - b - 1) / (a - b) + 1;

	cout << day;

	return 0;
}