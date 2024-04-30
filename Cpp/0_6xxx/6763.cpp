#include <iostream>

using namespace std;

	int main()
	{
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

		return 0;
    }
