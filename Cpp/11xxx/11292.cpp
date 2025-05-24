#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;

	while (true) {
		string name;
		float height;
		float maxHeight = 0;
		vector<pair<string, float>> vec;

		cin >> n;

		if (n == 0)
			break;

		while (n--)	{
			cin >> name >> height;

			vec.push_back({ name, height });

			if (height > maxHeight)
				maxHeight = height;
		}

		for (const auto& p : vec) {
			if (p.second == maxHeight)
				cout << p.first << " ";
		}
		cout << "\n";
	}

	return 0;
}