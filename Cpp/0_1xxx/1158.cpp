#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k, n;
	queue<int> q;

	cin >> n >> k;


	for (int i = 1; i <= n; i++)
		q.push(i);

	cout << "<";

	while (q.size() != 0){
		for (int i = 1; i < k; i++){
			q.push(q.front());
			q.pop();
		}
		cout << q.front();

		if (q.size() != 1)
			cout << ", ";

		q.pop();
	}

	cout << ">";

	return 0;
}