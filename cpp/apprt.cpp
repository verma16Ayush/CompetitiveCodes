/** 
 *
 * @author - Ayush
 * @title - apprt.cpp
 * @createdOn - 2020-10-20
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
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int dig = n % 10;
        int numdigs = 0;
        while(n != 0)
        {
            numdigs++;
            n /= 10;
        }
        int ans = 10 * (dig - 1);
        int sum = (numdigs* (numdigs + 1)) / 2;
        cout << ans + sum << endl;
    }
    return 0;
}