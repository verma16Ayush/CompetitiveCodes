/** 
 *
 * @author - Ayush
 * @title - pull.cpp
 * @createdOn - 2020-10-17
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
    long long int x1, y1, x2, y2;
    while(t--)
    {
        cin >> x1 >>y1 >> x2 >> y2;
        ll delx = abs(x1 - x2);
        ll dely = abs(y1 - y2);
        ll ti;
        if(delx && dely) ti = delx + dely + 2;
        else ti = delx + dely;
        cout << ti << endl;
    }
    return 0;
}