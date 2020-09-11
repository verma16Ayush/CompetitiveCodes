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
    set<int> a;
    a.insert(2);
    a.insert(3);
    a.insert(4);
    a.insert(2);
    for(int i : a)
    {
        cout << i << " ";
    }
    return 0;
}