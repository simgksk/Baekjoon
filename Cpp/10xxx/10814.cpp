#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, string>> v;

bool compare(pair<int, string> p1, pair<int, string> p2)
{
	return p1.first < p2.first;
}

int main()
{
	int repeat = 0;

	cin >> repeat;

	int num;
	string str;

	for (int i = 0; i < repeat; i++)
	{
		cin >> num >> str;
		v.push_back({ num,str });
	}

	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < repeat; i++)
		cout << v[i].first << " " << v[i].second << '\n';
		
	return 0;
}
