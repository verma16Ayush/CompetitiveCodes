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
    string s, c;
    int pos = 1;
    getline(cin, s);
    getline(cin ,c);

    for (int i = 0; i < c.length(); i++)
    {
        if(c[i] == s[pos - 1])
            pos++;
    }
    cout << pos << endl;
    return 0;
}