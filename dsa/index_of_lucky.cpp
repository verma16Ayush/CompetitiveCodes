#include <iostream>
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
    string n;
    cin >> n;
    int cdig = n.length();
    int ans = (1 << cdig) - 2;
    for (int i = cdig - 1, pos = 0; i >= 0; i--, pos++)
    {
        if(n[i] == '7')
        {
            ans += 1 << pos;
        }
    }
    cout << ans + 1 << endl;

    return 0;
    
}