#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a, b, cntA, cntB;
	vector<int> vec1;
	vector<int> vec2;

	cin >> a >> b;

	while (a--)	{
		cin >> cntA;
		vec1.push_back(cntA);
	}

	while (b--)	{
		cin >> cntB;
		vec2.push_back(cntB);
	}

	sort(vec1.begin(), vec1.end());
	sort(vec2.begin(), vec2.end());

	vector<int> buffA(vec1.size() + vec2.size());
	auto iterA = set_difference(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), buffA.begin());
	buffA.erase(iterA, buffA.end());
	
	vector<int> buffB(vec2.size() + vec2.size());
	auto iterB = set_difference(vec2.begin(), vec2.end(), vec1.begin(), vec1.end(), buffB.begin());
	buffB.erase(iterB, buffB.end());

	cout << buffA.size() + buffB.size();

	return 0;
}