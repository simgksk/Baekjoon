#include <iostream>

using namespace std;

    int main()
    {
        string s;
        int vowels = 0;
        int vowelsY = 0;

        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vowels++;
            
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
                vowelsY++;
        }

        printf("%d %d", vowels, vowelsY);



        return 0;
    }
