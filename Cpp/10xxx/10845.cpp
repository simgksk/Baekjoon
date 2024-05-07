#include <iostream>
#include <queue>

using namespace std;

int main()
{
	//10845. ť
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x;
	string command;
	queue<int> queue;

	cin >> n;

	while (n--)
	{
		cin >> command;

		if (command == "push")
		{
			cin >> x;

			queue.push(x);
		}

		else if (command == "pop")
		{
			if (!queue.empty())
			{
				cout << queue.front() << "\n";
				queue.pop();
			}
			else
				cout << -1 << "\n";
		}

		else if (command == "size")
			cout << queue.size() << "\n";

		else if (command == "empty")
		{
			if (queue.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}

		else if (command == "front")
		{
			if (!queue.empty())
				cout << queue.front() << "\n";
			else
				cout << -1 << "\n";
		}

		else if (command == "back")
		{
			if (!queue.empty())
				cout << queue.back() << "\n";
			else
				cout << -1 << "\n";
		}
	}

	return 0;
}