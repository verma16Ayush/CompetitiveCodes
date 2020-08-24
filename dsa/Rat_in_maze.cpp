#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<vector<int>> int_vec_2d;
typedef vector<int>::iterator vi_it;
typedef map<int, int>::iterator mii_it;

void print(int soln[10][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << soln[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool RatInMaze(char maze[10][10], int soln[][10], int i = 0, int j = 0, int m = 4, int n = 4)
{
    if (i > m || j > n)
        return false;

    if (maze[i][j] == 'X')
        return false;

    if (i == m && j == n)
    {
        print(soln, m, n);
        return true;
    }

    soln[i][j] = 1;
    bool righPoss = RatInMaze(maze, soln, i, j + 1);
    bool downPoss = RatInMaze(maze, soln, i + 1, j);
    if(righPoss || downPoss)
        return true;
    soln[i][j] = 0;
}

int main()
{
    char maze[10][10] = {
        "0000",
        "00x0",
        "00x0",
        "0x00"};

    int soln[10][10];
    int m = 4, n = 4;
    if(!RatInMaze(maze, soln))
        cout << "soln not possibe" << endl;
    
    return 0;
}