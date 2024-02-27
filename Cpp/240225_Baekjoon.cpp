#include <iostream>

using namespace std;

	int main()
	{
#pragma region 4714. Lunacy

		float x;

		while (true)
		{
			cin >> x;

			float y = x * 0.167;

			if (x < 0)
				break;

			printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n", x, y);
		}
		

#pragma endregion

#pragma region 5300. Fill the Rowboats!

		int n;

		cin >> n;

		for (int i = 1; i <= n; i++)
		{
			if (i % 6 == 0 || i == n)
				printf("%d Go! ", i);
			else
				printf("%d ", i);
		}

#pragma endregion

#pragma region 6763. Speed fines are not fine!

		int a, b;

		cin >> a >> b;

		if (b - a < 1)
			cout << "Congratulations, you are within the speed limit!";
		else if (b - a < 21)
			cout << "You are speeding and your fine is $100.";
		else if (b - a < 31)
			cout << "You are speeding and your fine is $270.";
		else if (b - a >= 31)
			cout << "You are speeding and your fine is $500.";

#pragma endregion

#pragma region 6778. Which Alien?

		int antenna, eyes;

		cin >> antenna >> eyes;

		if (antenna >= 3 && eyes <= 4)
			cout << "TroyMartian" << endl;
		if (antenna <= 6 && eyes >= 2)
			cout << "VladSaturnian" << endl;
		if (antenna <= 2 && eyes <= 3)
			cout << "GraemeMercurian" << endl;

#pragma endregion

#pragma region 6825. Body Mass Index

		float kg, m;

		cin >> kg >> m;

		float bmi = kg / (m * m);

		if (bmi > 25)
			cout << "Overweight";
		else if (bmi >= 18.5 && bmi <= 25)
			cout << "Normal weight";
		else if (bmi < 18.5)
			cout << "Underweight";

#pragma endregion

		return 0;
	}
