#include <iostream>

using namespace std;

int main()
{
	// 4892. 숫자 맞추기 게임
	int n;
	int i = 1;

	while (true)
	{
		cin >> n;

		if (n == 0)
			break;

		int n1 = n * 3;
		int n2;

		if (n1 % 2 == 0)
		{
			cout << i << ". even ";
			n2 = n1 / 2;
		}
		else 
		{
			cout << i << ". odd ";
			n2 = (n1 + 1) / 2;
		}

		int n3 = 3 * n2;
		int n4 = n3 / 9;
		
		cout << n4 << "\n";
		i++;
	}

	return 0;
}