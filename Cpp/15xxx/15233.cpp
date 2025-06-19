#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	int a, b, g;
	int cnt_A = 0, cnt_B = 0;
	string name;
	unordered_set<string> us_A, us_B;

	cin >> a >> b >> g;

	while (a--)	{
		cin >> name;
		us_A.insert(name);
	}

	while (b--)	{
		cin >> name;
		us_B.insert(name);
	}

	while (g--)	{
		cin >> name;
		
		if (us_A.count(name)) 
			cnt_A++;
		else if (us_B.count(name)) 
			cnt_B++;
	}

	if (cnt_A > cnt_B) 
		cout << "A";
	else if (cnt_A < cnt_B) 
		cout << "B";
	else 
		cout << "TIE";

	return 0;
}