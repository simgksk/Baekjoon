#include <iostream>

using namespace std;

    int main()
    {
        int n;
        char dp;
        int d = 0;
        int p = 0;

        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> dp;

            if (dp == 'D')
                d++;
            else if (dp == 'P')
                p++;

            if (d - p >= 2 || p - d >= 2)
                break;
        }

        printf("%d:%d", d, p);

        return 0;
    }
