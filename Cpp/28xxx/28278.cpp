#include <iostream>
#include <stack>

using namespace std;

int main()
{
	//28278. Ω∫≈√ 2
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, num, x;
	stack<int> stack;

	cin >> n;

	while (n--)
	{
		cin >> num;

		if (num == 1)
		{
			cin >> x;
			stack.push(x);
		}

		else if (num == 2)
		{
			if (!stack.empty())
			{
				cout << stack.top() << "\n";
				stack.pop();
			}
			else
				cout << -1 << "\n";
		}

		else if (num == 3)
			cout << stack.size() << "\n";

		else if (num == 4)
		{
			if (stack.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}

		else if (num == 5)
		{
			if (!stack.empty())
				cout << stack.top() << "\n";
			else
				cout << -1 << "\n";
		}
	}

	return 0;
}