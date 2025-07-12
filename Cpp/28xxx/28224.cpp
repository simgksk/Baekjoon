#include <iostream>
using namespace std;

int main() {
	int n, num;
	int price = 0;

	cin >> n;

	while (n--)	{
		cin >> num;
		price += num;
	}

	cout << price;

	return 0;
}