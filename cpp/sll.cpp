/** 
 *
 * @author - Ayush
 * @title - sll.cpp
 * @createdOn - 2020-10-16
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
    float m, n, a;
    cin >> m >> n >> a;
    long long int t = ceil(m / a) * ceil(n / a);
    cout << t;
    return 0;
}