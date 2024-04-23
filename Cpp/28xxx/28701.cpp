#include <iostream>

using namespace std;

int main()
{
    int n;
		int sum1 = 0, sum2 = 0, sum3 = 0;

		cin >> n;

		for (int i = 1; i <= n; i++)
		{
			sum1 += i;
			sum2 = sum1*sum1;
			sum3 += i * i * i;
		}

		cout << sum1 << endl;
		cout << sum2 << endl;
		cout << sum3 << endl;

		return 0;
}
