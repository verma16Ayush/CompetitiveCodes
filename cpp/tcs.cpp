/** 
 *
 * @author - Ayush
 * @title - tcs.cpp
 * @createdOn - 2020-10-26 21:17 Hrs
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
    ll  t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a;
        a.reserve(n);
        a.push_back(0);
        a.push_back(1);
        for (int  i = 2; i <= n; i++)
        {
            ll t = a[i - 1] + a[i - 2];
            a.push_back(t);
        }
        cout << a[n] << endl;
    }
    return 0;
}