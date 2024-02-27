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

#pragma region 2083. 럭비 클럽

        int age, weight;
        string name;

        while (true)
        {
            cin >> name >> age >> weight;

            if (name == "#" && age == 0 && weight == 0)
                break;
            if (age > 17 || weight >= 80)
                cout << name << " Senior" << endl;
            else
                cout << name << " Junior" << endl;
        }

#pragma endregion

#pragma region 15964. 이상한 기호

        long int a, b;

        cin >> a >> b;

        long int result = (a + b) * (a - b);

        cout << result << endl;

#pragma endregion

        return 0;
    }

