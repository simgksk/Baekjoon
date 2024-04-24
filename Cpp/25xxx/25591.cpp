#include <iostream>

using namespace std;

int main()
{
    		int num1, num2;

		cin >> num1 >> num2;

		int a = 100 - num1;
		int b = 100 - num2;
		int c = 100 - (a + b);
		int d = a * b;
		int q = d / 100;
		int r = d % 100;
		int first2 = q + c;
		int last2 = r;

		printf("%d %d %d %d %d %d\n", a, b, c, d, q, r);
		printf("%d %d", first2, last2);

		return 0;
}
