/** 
 *
 * @author - Ayush
 * @title - b.cpp
 * @createdOn - 2020-11-01 17:07 Hrs
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
        int a, b , c, d;
        cin >> a >> b >> c >> d;
        int x = max(a+b, c+d);
        cout << x << endl;
    }

    return 0;
}