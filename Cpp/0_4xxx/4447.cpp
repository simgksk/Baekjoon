#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string hero;

	cin >> n;
	getchar();

	while (n--){
		int g_cnt = 0;
		int b_cnt = 0;

		getline(cin, hero);

		for (int i = 0; i < hero.size(); i++) {
			if (hero[i] == 'G' || hero[i] == 'g')
				g_cnt++;
			if (hero[i] == 'B' || hero[i] == 'b')
				b_cnt++;
		}

		if (g_cnt > b_cnt)
			cout << hero << " is GOOD\n";
		else if (g_cnt < b_cnt)
			cout << hero << " is A BADDY\n";
		else
			cout << hero << " is NEUTRAL\n";
	}
	return 0;
}