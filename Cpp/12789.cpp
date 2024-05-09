#include <iostream>
#include <stack>

using namespace std;

int main()
{
	// 12789. ��Ű��Ű ���ĵ帮��
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, num;
	int cnt = 1;
	stack<int> s;

	cin >> n;

	while (n--)
	{
		cin >> num;

		if (num == cnt)
			cnt++;
		else
			s.push(num);

		while (!s.empty() && s.top() == cnt)
		{
			s.pop();
			cnt++;
		}
	}

	if (s.empty())
		cout << "Nice";
	else
		cout << "Sad";

	return 0;
}