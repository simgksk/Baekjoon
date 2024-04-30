#include <iostream>

using namespace std;

int main()
{
	float kg, m;

	cin >> kg >> m;

	float bmi = kg / (m * m);

	if (bmi > 25)
		cout << "Overweight";
	else if (bmi >= 18.5 && bmi <= 25)
		cout << "Normal weight";
	else if (bmi < 18.5)
		cout << "Underweight";

	return 0;
}
