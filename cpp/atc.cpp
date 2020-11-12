/** 
 *
 * @author - Ayush
 * @title - atc.cpp
 * @createdOn - 2020-10-31 17:43 Hrs
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
    long long int k = 998244353;
    ll a, b, c;
    cin >> a >> b >> c;
    
    ll ansa = (((a % k) * (a + 1) % k) / 2) % k;
    ll ansb = (((b % k) * (b + 1) % k) / 2) % k;
    ll ansc = (((c % k) * (c + 1) % k) / 2) % k;

    ll ans = (ansa * ansb * ansc) % k;

    cout << ans << endl;
    return 0;
}