#include <iostream>

using namespace std;

    int main()
    {
#pragma region 2741. N찍기

        int n;

        cin >> n;

        for (int i = 1; i <= n; i++)
            printf("%d\n", i);

#pragma endregion

#pragma region 3003. 킹, 퀸, 룩, 비숍, 나이트, 폰

        int king, queen, rook, bishoop, knight, pawn;
        
        cin >> king >> queen >> rook >> bishoop >> knight >> pawn;

        //1
        if (king == 1)
            printf("%d ", 0);
        else if (king > 1)
            printf("%d ", 1 - king);
        else if (king <= 0)
            printf("%d ", 1);
        
        if (queen == 1)
            printf("%d ", 0);
        else if (queen > 1)
            printf("%d ", 1 - queen);
        else if (queen <= 0)
            printf("%d ", 1);

        if (rook == 2)
            printf("%d ", 0);
        else if (rook > 2)
            printf("%d ", 2 - rook);
        else if (rook <= 1)
            printf("%d ", 2 - rook);
        
        if (bishoop == 2)
            printf("%d ", 0);
        else if (bishoop > 2)
            printf("%d ", 2 - bishoop);
        else if (bishoop <= 1)
            printf("%d ", 2 - bishoop);
        
        if (knight == 2)
            printf("%d ", 0);
        else if (knight > 2)
            printf("%d ", 2 - knight);
        else if (knight <= 1)
            printf("%d ", 2 - knight);
        
        if (pawn == 8)
            printf("%d ", 0);
        else if (pawn > 8)
            printf("%d ", 8 - pawn);
        else if (pawn <= 7)
            printf("%d ", 8 - pawn);
        
        //2
        printf("%d ", 1 - king);
        printf("%d ", 1 - queen);
        printf("%d ", 2 - rook);
        printf("%d ", 2 - bishoop);
        printf("%d ", 2 - knight);
        printf("%d ", 8 - pawn);

#pragma endregion

#pragma region 24883. 자동완성

        string a;

        cin >> a;

        if (a == "N" || a == "n")
            cout << "Naver D2" << endl;
        else
            cout << "Naver Whale" << endl;

#pragma endregion

#pragma region 14581. 팬들에게 둘러싸인 홍준

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

#pragma endregion




    }

