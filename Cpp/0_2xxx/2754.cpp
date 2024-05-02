#include <iostream>

using namespace std;

    int main()
    {
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

        return 0;
    }

