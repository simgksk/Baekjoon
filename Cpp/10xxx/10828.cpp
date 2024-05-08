#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x;
	string command;
	stack<int> s;

	cin >> n;

	while (n--)
	{
		cin >> command;

		if (command == "push")
		{
			cin >> x;
			s.push(x);
		}
		else if (command == "pop")
		{
			if (!s.empty())
			{
				cout << s.top() << "\n";
				s.pop();
			}
			else
				cout << "-1\n";
		}
		else if (command == "size")
			cout << s.size() << "\n";
		else if (command == "empty")
		{
			if (s.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (command == "top")
		{
			if (!s.empty())
				cout << s.top() << "\n";
			else
				cout << "-1\n";
		}
	}

	return 0;
}
