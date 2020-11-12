/** 
 *
 * @author - Ayush
 * @title - a.cpp
 * @createdOn - 2020-11-01 16:40 Hrs
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
        int n, x;
        cin >> n >> x;
        vector<int> a;
        a.reserve(n);

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        
        vector<int> b;
        b.reserve(n);

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            b.push_back(temp);
        }
        

        auto ita = a.begin();
        auto itb = b.rbegin();
        int flag = 0;

        while(ita != a.end())
        {
            if(*ita + *itb > x)
            {
                flag = 1;
                break;
            }
            ita++;
            itb++;
        }
        if (flag == 1) cout << "NO" << endl;
        else
        {
            cout << "YES" <<endl;
        }
    }

    return 0;
}