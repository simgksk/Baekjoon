#include <iostream>

using namespace std;

int main()
{
	//5523. 경기 결과
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, a, b;
	int a_cnt = 0;
	int b_cnt = 0;

	cin >> n;

	while (n--)
	{
		cin >> a >> b;

		if (a > b)
			a_cnt++;
		else if (a < b)
			b_cnt++;
		else if (a == b)
			continue;
	}
	cout << a_cnt << " " << b_cnt;

	return 0;
}