/** 
 *
 * @author - Ayush
 * @title - hjdfd.cpp
 * @createdOn - 2020-10-25 16:57 Hrs
 * 
 **/
#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<vector<int>> int_vec_2d;
typedef vector<int>:: iterator vi_it;
typedef map<int, int>::iterator mii_it;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a[501][501];
        int b[501][501];
        // int c[501][501];
        vector<int> row, col;
        
        int n, m;
        cin >> n >> m;
        row.reserve(n);
        col.reserve(m);

        map<int, int> hm;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j< m; j++)
            {
                int temp;
                cin >> temp;
                hm[temp] = i;
                a[i][j] = temp;
            }
        }
        int first = a[0][0];
        int firsti = 0;


        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int temp;
                cin >> temp;
                if(temp == first)
                {
                    firsti = i;
                }
                b[i][j] = temp;
            }
        }

        // vector<int> t;
        // t.reserve(n);
        // for (int i = 0; i < n; i++)
        // {
        //     t.push_back(a[0][i]);
        // }
        
        // sort(t.begin(), t.end());

        // vector<int> t2;
        // t2.reserve(n);
        // int 
        // for (int i = 0; i < m; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         t2.push_back(a[i][j]);
        //     }
        //     if(t[0] == t2[0])
        // }

        int* col = b[firsti];
        for (int i = 0; i < n; i++)
        {
            int ind = hm[col[i]];
            for (int j = 0; j < m; j++)
            {
                cout << a[i][ind] << " ";
            }
            cout << endl;
        }
        
        
    }
    return 0;
}