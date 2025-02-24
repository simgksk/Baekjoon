#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s;
	vector<int> v;

	for (int i = 1; i <= 5; i++) {
		cin >> s;

		if (s.find("FBI") != string::npos)
			v.push_back(i);
	}

	if (v.size() != 0) {
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
	}
	else
		cout << "HE GOT AWAY!";

	return 0;
}