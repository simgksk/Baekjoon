#include <iostream>

using namespace std;

	int main()
	{
#pragma region 17388. 와글와글 숭고한

		int s, k, h;

		cin >> s >> k >> h;

		if (s + k + h >= 100)
			cout << "OK";
		else if (s + k + h < 100)
		{
			if (s < k && s < h)
				cout << "Soongsil";
			else if (k < s && k <= h)
				cout << "Korea";
			else if (h < s && h < k)
				cout << "Hanyang";
		}

#pragma endregion

#pragma region 19698. 헛간 청약

		int n, w, h, l;

		cin >> n >> w >> h >> l;

		int result = (w / l) * (h / l);

		if (result < n)
			cout << result;
		else
			cout << n;

#pragma endregion

#pragma region 23825. SASA 모형을 만들어보자

		int n, m;

		cin >> n >> m;

		int sn = n / 2;
		int am = m / 2;

		if (n <= m)
			cout << sn;
		else
			cout << am;

#pragma endregion

		return 0;
	}
