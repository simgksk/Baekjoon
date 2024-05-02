#include <iostream>

using namespace std;

    int main()
    {
#pragma region 13752. 히스토그램

        int n;
        int k[101];

        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> k[i];
            for (int j = 1; j <= k[i]; j++)
                cout << "=";
            cout << "\n";
        }

#pragma endregion

        return 0;
    }

