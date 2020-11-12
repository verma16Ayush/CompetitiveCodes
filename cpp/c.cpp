/** 
 *
 * @author - Ayush
 * @title - c.cpp
 * @createdOn - 2020-11-01 17:30 Hrs
 * 
 **/
#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<ll, ll> mii;
typedef pair<ll, ll> pii;
typedef vector<vector<ll>> ll_vec_2d;
typedef vector<ll>:: iterator vi_it;
typedef map<ll, ll>::iterator mii_it;

vector<ll> prllDivisors(ll n) 
{ 
    vector<ll> a;
    // Note that this loop runs till square root 
    for (ll i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, prll only one 
            if (n/i == i) 
                a.push_back(i);
  
            else // Otherwise prll both 
            {
                a.push_back(n / i);
                a.push_back(i);
            } 
        } 
    }

    sort(a.begin(), a.end());
    return a;
} 

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll p, q;
        cin >> p >> q;

        vector<ll> a = prllDivisors(p);

        ll ans = a[0];
        for (ll i = 0; i < a.size(); i++)
        {
            if(a[i] % q != 0)
            ans = a[i];
        }
        
        cout << ans << endl;
    }

    return 0;
}