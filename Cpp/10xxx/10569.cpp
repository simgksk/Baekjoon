#include <iostream>

using namespace std;

int main() {
	int t, v, e;
	cin >> t;

	while (t--){
		cin >> v >> e;

		int polyhedron = e - v + 2;

		cout << polyhedron << "\n";
	}
	return 0;
}