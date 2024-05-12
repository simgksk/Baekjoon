#include <iostream>

using namespace std;

int Fibonacci(int a)
{
	if (a == 0 || a == 1) 
		return a;
	else 
		return Fibonacci(a - 2) + Fibonacci(a - 1);
}

int main()
{
#pragma region 10870. 피보나치 수

	int n;

	cin >> n;

	cout << Fibonacci(n);

#pragma endregion

	return 0;
}
