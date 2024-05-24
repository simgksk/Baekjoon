#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 26489. Gum Gum for Jay Jay
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	int cnt = 0;

	while (true)
	{
		getline(cin, str);

		if (str == "gum gum for jay jay")
			cnt++;
		else
			break;
	}
	cout << cnt;

	return 0;
}