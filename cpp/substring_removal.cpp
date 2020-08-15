#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string bin;
        int aliceScr = 0;
        int Bobscr = 0;
        int maxScore = 0;
        int score = 0;
        cin >> bin;
        int i = 0;
        int j = 0;
        int turn = 0;
        while(bin.find('1') != string::npos)
        {
            j = i;
            while(bin[i] == bin[j])
            {
                j++;
                if(maxScore < j - i + 1)
                {
                    maxScore = j - i + 1;
                }
            }
            if(turn%2 == 0)
            {
                aliceScr += maxScore;
            }
            maxScore = 0;
            bin = 
        }
        
    }
}