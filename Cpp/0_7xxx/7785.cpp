#include <iostream>
#include <map>
using namespace std;

int main() {
	int n;
	map<string, string> m;
	string name, log;

	cin >> n;

	while (n--){
		cin >> name >> log;

		if (log == "enter")
			m[name] = log;
		else if (log == "leave")
			m.erase(name);
	}
	for (auto item = m.rbegin(); item != m.rend(); item++)
		cout << item->first << "\n";

	return 0;
}