#include <iostream>

using namespace std;

    int main()
    {
#pragma region 27110. 특식 배부

        int n, a, b, c;
        int sum = 0;

        cin >> n >> a >> b >> c;

        if (n >= a)
            sum += a;
        else if (n < a)
            sum += n;
        
        if (n >= b)
            sum += b;
        else if (n < b)
            sum += n;
        
        if (n >= c)
            sum += c;
        else if (n < c)
            sum += n;

        cout << sum;

#pragma endregion

#pragma region 27918. 탁구 경기

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

#pragma endregion

#pragma region 31306. Is Y a Vowel?

        string s;
        int vowels = 0;
        int y = 0;

        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vowels++;
            
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
                y++;
        }

        printf("%d %d", vowels, y);

#pragma endregion

#pragma region 30501. 관공... 어찌하여 목만 오셨소...

        int n;
        string name;

        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> name;

            for (int j = 0; j < name.length(); j++)
            {
                if (name[j] == 'S')
                    cout << name << endl;
            }
        }

#pragma endregion

#pragma region 1284. 집 주소

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

#pragma endregion

#pragma region 2455. 지능형 기차
        
        int a, b;
        int people = 0;
        int max = 0;

        for (int i = 0; i < 4; i++)
        {
            cin >> a >> b;

            people += b - a;

            if (people > max)
                max = people;
            else
                max = max;
        }

        cout << max;

#pragma endregion

#pragma region 2460. 지능형 기차 2
        
        int a, b;
        int people = 0;
        int max = 0;

        for (int i = 0; i < 10; i++)
        {
            cin >> a >> b;

            people += b - a;

            if (people > max)
                max = people;
            else
                max = max;
        }

        cout << max;

#pragma endregion

        return 0;
    }

