#include <iostream>

using namespace std;

    int main()
    {
        string n;

        while (true)
        {
            cin >> n;

            int sum = n.length() + 1;

            if (n == "0")
                break;

            for (int i = 0; i < n.length(); i++)
            {
                if (n[i] == '0')
                    sum += 4;
                else if (n[i] == '1')
                    sum += 2;
                else
                    sum += 3;
            }

            cout << sum << endl;
        }

        return 0;
    }
