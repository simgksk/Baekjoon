#include <iostream>
#include <string>

using namespace std;

int main()
{
#pragma region 4999. 아!

	string j_ah;
	string d_ah;

	cin >> j_ah >> d_ah;

	if (j_ah.length() < d_ah.length())
		cout << "no";
	else
		cout << "go";

#pragma endregion

	return 0;
}
