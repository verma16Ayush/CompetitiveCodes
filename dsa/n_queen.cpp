#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<vector<int>> int_vec_2d;
typedef vector<int>::iterator vi_it;
typedef map<int, int>::iterator mii_it;

void print(int a[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i][j] == 1)
            {
                cout << "Q " ;
            }
            else
            {
                cout << "_ ";
            }
            
        }
        cout << endl;
        
    }
    
}

bool IsSafe(int a[][10], int i, int j)
{
    int x = j;
    int y = i;
    while (x >= 0 && y >= 0)
    {
        if (a[y][x] == 1)
            return false;
        y--;
        x--;
    }
    x = j;
    y = i;
    while (x >= 0 && y >= 0)
    {
        if (a[--y][++x] == 1)
            return false;
    }
    x = j;
    y = i;
    while(y >= 0)
    {
        if(a[--y][x] == 1)
            return false;
    }
    return true;
}

bool PossibleLoc(int a[][10], int n, int row = 0)
{
    if (row == n)
    {
        // print
        print(a, n);
        return true;
    }
    else
    {
        for (int j = 0; j < n; j++)
        {
            if(IsSafe(a, row, j))
            {
                a[row][j] = 1;
                bool nextPoss = PossibleLoc(a, n, row + 1);
                if(nextPoss)
                {
                    return true;
                }
                a[row][j] = 0;
            }
        }
        
    }
    return false;
}

int main()
{
    // int_vec_2d board;
    // board.reserve()
    int a[10][10] = {0};
    int n;
    cin >> n;
    PossibleLoc(a, n);
    return 0;
}