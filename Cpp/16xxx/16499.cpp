#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string word;
	unordered_map<string, int> group;

	cin >> n;

	while (n--)	{
		cin >> word;
		sort(begin(word), end(word));
		group[word] = 1;
	}
	cout << group.size();

	return 0;
}