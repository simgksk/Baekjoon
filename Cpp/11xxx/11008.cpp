#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	string s, p;

	cin >> t;

	while (t--){
		int time = 0;
		cin >> s >> p;

		size_t pos;
		while ((pos = s.find(p)) != s.npos){
			time++;
			s.erase(pos, p.length());
		}
		time += s.length();

		cout << time << "\n";
	}
	return 0;
}