#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<vector<int>> int_vec_2d;
typedef vector<int>:: iterator vi_it;
typedef map<int, int>::iterator mii_it;


void Print(int soln[][10], int m, int n)
{
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << soln[i][j] << " ";
        }
        cout << endl;
    }
    
}

bool PossiblePath(char maze[10][10], int soln[][10], int i = 0, int j = 0, int m = 4, int n = 4)
{
    if(i > m || j > n)
    {
        return false;
    }
    
    if(i == m && j == n)
    {
        soln[m][n] = 1;
        Print(soln, m, n);
        return true;
    }

    if (maze[i][j] == 'x')
    {
        return false;
    }

    soln[i][j] = 1;

    bool rightPoss = PossiblePath(maze, soln, i, j+1);
    bool downPoss = PossiblePath(maze, soln, i + 1, j);
    soln[i][j] = 0;

    if(rightPoss || downPoss)    
    {
        return true;
    }
    return false;
}
int main()
{
    char maze[10][10] = {
        "0000",
        "00x0",
        "00x0",
        "0x00"};
    
    int soln[10][10] = {0};
    int m,n;
    cin >> m >> n;
    bool isPoss = PossiblePath(maze, soln);
    if(!PossiblePath)
    {
        cout << "path not possible" << endl;
    }
    return 0;

}
