#include <iostream>

using namespace std;

    int main()
    {
#pragma region 20492. 세금

        long int n;

        cin >> n;

        cout << (n / 100) * 78 << " ";
        cout << n-(((200 / 100) * 22)* (n/1000)) << endl;

#pragma endregion

        return 0;
    }
