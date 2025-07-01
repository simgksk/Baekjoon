#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int n;
	int cnt = 0;
	string first_people, second_people;
	unordered_map<string, bool> um;

	cin >> n;

	while (n--)	{
		cin >> first_people >> second_people;

		if (first_people == "ChongChong")
			um[first_people] = true;
		else if (second_people == "ChongChong")
			um[second_people] = true;

		if (um[first_people])
			um[second_people] = true;
		if (um[second_people])
			um[first_people] = true;
	}

	for (const auto& p : um) {
		if (p.second)
			cnt++;
	}

	cout << cnt;

	return 0;
}