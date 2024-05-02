#include <iostream>

using namespace std;

    int main()
    {
#pragma region 5717. 상근이의 친구들

        int m, f;

        while (true)
        {
            cin >> m >> f;

            if (m == 0 && f == 0)
                break;
            
            cout << m + f << endl;
        }

#pragma endregion

        return 0;

    }

