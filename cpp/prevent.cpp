/** 
 *
 * @author - Ayush
 * @title - prevent.cpp
 * @createdOn - 2020-10-18
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
        int n;
        cin >> n;
        char a[201][201];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        char ur = a[0][1], ud = a[1][0];
        char du = a[n-2][n-1], dl = a[n-1][n-2];
        int change = 0;
        if (ur == ud)
        {
            if(du == dl)
            {
                if(du == ur)
                {
                    cout << 2 << endl;
                    cout << n-2 + 1 << " " << n - 1 + 1<< endl;
                    cout << n - 1 + 1<< " " << n - 2 + 1<< endl;
                    continue;
                }
                else
                {
                    cout << 0 << endl;
                    continue;
                }
            }
            else
            {
                if(du == ur)
                {
                    cout << 1 << endl;
                    cout << n-2 + 1<< " " << n-1 + 1<< endl;
                    continue;
                }
                else
                {
                    cout << 1 << endl;
                    cout << n-1 + 1<<" "<< n-2 + 1<< endl;
                    continue;
                }
                
            }
        }
        if(du == dl)
        {
            if(ur != ud)
            {
                if(ur == ud)
                {
                    cout << 1 << endl;
                    cout << 0 + 1 << " " << 1 + 1 << endl;
                    continue;
                }
                else
                {
                    cout << 1 << endl;
                    cout << 1 + 1<< " " << 0 + 1 << endl;
                    continue;
                }
                
            }
        }
    }
    return 0;
}