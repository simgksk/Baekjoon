#include <iostream>

using namespace std;

    int main()
    {
        int money;
        int result = 0;

        while (true)
        {
            cin >> money;

            if (money == -1)
                break;
            else
                result += money;
        }

        cout << result;

        return 0;
    }
