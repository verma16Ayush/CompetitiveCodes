#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tests;

    cin>>tests;
    while (tests--)
    {
        int n;
        cin>>n;
        int m[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>m[i][j];
            }
        }
        
        int ballsInEachContainer[n] = {0};
        int NosOfTypeOfEachBall[n] = {0};
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ballsInEachContainer[i] += m[i][j];
                NosOfTypeOfEachBall[j] += m[i][j];
            }
        }

        string str = "Possible";
        string str2 = "Impossible";

        int counter = 0;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(ballsInEachContainer[i] == NosOfTypeOfEachBall[j])
                {
                    counter++;
                    break;
                }
            } 
        }

        string x = (counter==n)?str:str2;
        cout << x << endl;
    }

    return 0;
    
}