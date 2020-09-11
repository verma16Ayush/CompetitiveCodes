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
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, maxab = 0;
        cin >> n >> k;
        int ab = 0;
        for (int i = 1; i <= k; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                ab = i & j;
                if(ab < k && ab > maxab)
                {
                    maxab = ab;
                }
            }
            
        }
        cout << maxab << endl;
    }
    return 0;
}