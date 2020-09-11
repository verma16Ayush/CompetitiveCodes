#include <iostream>
#include <cmath>
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
        ll a, b, x, y, n;
        map<ll, ll> m;
        cin >> a >> b >> x >> y >> n;
        m.insert(make_pair(a, x));
        m.insert(make_pair(b, y));
        auto it = m.begin();
        a = it->first;
        x = it->second;
        it++;
        b = it->first;
        y = it->second;

        if(a - n >= x)
        {
            a -= n;
            n = 0;
        }
        else
        {
            a = x;
            n -= x;
        }
        if(b - n > y)
        {
            b -= n;
            n = 0;
        }
        else
        {
            b = y;
            n-= y;
        }
        
        cout << a * b << endl;
        
    }
    return 0;
}