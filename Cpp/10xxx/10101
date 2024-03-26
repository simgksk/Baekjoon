#include <iostream>

using namespace std;

	int main()
	{
#pragma region 10101번. 삼각형 외우기

		int a, b, c;

		cin >> a;
		cin >> b;
		cin >> c;

		if (a == 60 && b == 60 && c == 60)
			cout << "Equilateral" << endl;
		else if (a + b + c == 180 && (a == b || a == c || b == c))
			cout << "Isosceles" << endl;
		else if (a + b + c == 180 && (a != b && a != c && b != c))
			cout << "Scalene" << endl;
		else if (a + b + c != 180)
			cout << "Error" << endl;

#pragma endregion

		return 0;
	}

