#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int n, k;
	stack<int> stack;
	int sum = 0;

	cin >> n;

	while (n--)
	{
		cin >> k;

		if (k == 0)
			stack.pop();
		else
			stack.push(k);
	}

	while (!stack.empty())
	{
		sum += stack.top();
		stack.pop();
	}

	cout << sum;

	return 0;
}
