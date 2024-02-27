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

#pragma region 2480번. 주사위 세개

		int a, b, c;

		cin >> a >> b >> c;

		if (a == b && a == c && b == c)
			cout << 10000 + (a * 1000) << endl;

		else if (a == b && a != c && b != c)
			cout << 1000 + (a * 100) << endl;
		else if (a == c && a != b && b != c)
			cout << 1000 + (a * 100) << endl;
		else if (b == c && a != b && a != c)
			cout << 1000 + (b * 100) << endl;

		if (a != b && a != c && b != c) 
		{
			if (a > b && a > c)
				cout << a * 100 << endl;
			else if (b > a && b > c)
				cout << b * 100 << endl;
			else if (c > a && c > b)
				cout << c * 100 << endl;
		}
		 
#pragma endregion

#pragma region 10039번. 평균 점수

		int a, b, c, d, e;

		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;
		cin >> e;

		if (a <= 40)
			a = 40;
		else
			a = a;

		if (b <= 40)
			b = 40;
		else
			b = b;

		if (c <= 40)
			c = 40;
		else
			c = c;

		if (d <= 40)
			d = 40;
		else
			d = d;

		if (e <= 40)
			e = 40;
		else
			e = e;

		cout << (a + b + c + d + e) / 5 << endl;

		return 0;

#pragma endregion

	}

