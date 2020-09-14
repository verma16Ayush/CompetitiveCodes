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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(101);
        // a.reserve(n);
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            a[temp]++;
        }
        int faf = 0, fbf = 0;
        int ma, mb;
        for (int i = 0; i < 101; i++)
        {
            if(a[i] == 0 && faf == 0)
            {
                faf = 1;
                ma = i;
                // continue;
            }
            if(a[i] <= 1 && fbf == 0)
            {
                fbf = 1;
                mb = i;
            }
        }
        cout << ma+mb << endl;
    }

    return 0;
}