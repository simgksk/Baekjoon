#include <iostream>

using namespace std;

int main()
{
    	int n, w, h, l;

	cin >> n >> w >> h >> l;

	int result = (w / l) * (h / l);

	if (result < n)
		cout << result;
	else
		cout << n;
        
        return 0;
}
