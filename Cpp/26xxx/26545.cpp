#include <iostream>

using namespace std;

int main()
{
    	int n, num;
	int add = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		add += num;
	}

	cout << add << endl;

	return 0;
}
