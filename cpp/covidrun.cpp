/** 
 *
 * @author - Ayush
 * @title - covidrun.cpp
 * @createdOn - 2020-10-09
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
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        cin.ignore();
        // float a = (y - x % n) / (float)(k % n);
        // if(abs(a - (int)a) <= 0.0001)
        // {
        //     cout << "YES" <<endl;
        // }
        // else if(k == 0 && x == y)
        // {
        //     cout << "YES" <<endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        
        if(k == 0 && x == y)
        {
            cout << "YES" << endl;
            continue;
        }
        int i;
        for (i = 0; i <= n; i++)
        {
            if((x + k * i) % n == y)
            {
                cout << "YES" << endl;
                break;
            }
        }
        if(i==n)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}