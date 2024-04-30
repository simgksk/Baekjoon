#include <iostream>

using namespace std;

    int main()
    {
        string id;

        cin >> id;

        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++)
            {
                if (i == 1 && j == 1)
                    cout << ":" << id << ":";
                else
                    printf(":fan:");
            }
            printf("\n");
        }

        return 0;
    }
