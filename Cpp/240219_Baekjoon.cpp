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

#pragma region 6749. Next in line

        int y, m;

        cin >> y >> m;

        int oldest = (m - y) + m;

        cout << oldest;

#pragma endregion

#pragma region 23795. 사장님 도박은 재미로 하셔야 합니다

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

#pragma endregion

        return 0;

    }

