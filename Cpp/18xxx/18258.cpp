#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, num;
	queue<int> q;
	string command;

	cin >> n;

	while (n--)
	{
		cin >> command;

		if (command == "push")
		{
			cin >> num;
			q.push(num);
		}

		if (command == "pop")
		{
			if (!q.empty())
			{
				cout << q.front() << "\n";
				q.pop();
			}
			
			else if (q.empty())
			{
				cout << -1 << "\n";
			}
		}

		if (command == "size")
		{
			cout << q.size() << "\n";
		}
		
		if (command == "empty")
		{
			if (!q.empty())
			{
				cout << 0 << "\n";
			}

			else if (q.empty())
			{
				cout << 1 << "\n";
			}
		}
		
		if (command == "front")
		{
			if (!q.empty())
			{
				cout << q.front() << "\n";
			}

			else if (q.empty())
			{
				cout << -1 << "\n";
			}
		}
		
		if (command == "back")
		{
			if (!q.empty())
			{
				cout << q.back() << "\n";
			}

			else if (q.empty())
			{
				cout << -1 << "\n";
			}
		}
	}

	return 0;
}
