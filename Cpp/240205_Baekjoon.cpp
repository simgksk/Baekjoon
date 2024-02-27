#include <iostream>

using namespace std;

    int main()
    {
#pragma region 2754번. 학점 계산

        string grade;

        float plus = 4.3;
        float zero = 4.0;
        float minus = 3.7;
        
        cin >> grade;

        if (grade == "A+")
            printf("%.1f", plus);
        else if (grade == "A0")
            printf("%.1f", zero);
        else if (grade == "A-")
            printf("%.1f", minus);

        else if (grade == "B+")
            printf("%.1f", plus - 1.0);
        else if (grade == "B0")
            printf("%.1f", zero - 1.0);
        else if (grade == "B-")
            printf("%.1f", minus - 1.0);

        else if (grade == "C+")
            printf("%.1f", plus - 2.0);
        else if (grade == "C0")
            printf("%.1f", zero - 2.0);
        else if (grade == "C-")
            printf("%.1f", minus - 2.0);

        else if (grade == "D+")
            printf("%.1f", plus - 3.0);
        else if (grade == "D0")
            printf("%.1f", zero - 3.0);
        else if (grade == "D-")
            printf("%.1f", minus - 3.0);

        else if (grade == "F")
            printf("%.1f", zero - 4.0);

#pragma endregion

#pragma region 6840번. Who is in the middle?

        int a, b, c;

        cin >> a;
        cin >> b;
        cin >> c;

        if ((a > b && a < c) || (a<b && a>c))
            cout << a << endl;
        else if ((b > a && b < c) || (b<a && b>c))
            cout << b << endl;
        else if ((c > a && c < b) || (c<a && c>b))
            cout << c << endl;

#pragma endregion

#pragma region 15963. CASIO

        long int n, m;
        
        cin >> n >> m;

        if (n == m)
            cout << true << endl;
        else if (n != m)
            cout << false << endl;

        return 0;

#pragma endregion



    }

