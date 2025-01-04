#include <iostream>

using namespace std;

    int main()
    {
        string school;

        cin >> school;

        if (school == "NLCS")
            cout << "North London Collegiate School" << endl;
        else if (school == "BHA")
            cout << "Branksome Hall Asia" << endl;
        else if (school == "KIS")
            cout << "Korea International School" << endl;
        else if (school == "SJA")
            cout << "St. Johnsbury Academy" << endl;
        
        return 0;
    }
