#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
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
        vector<long long int> a;
        a.reserve(n);
        for (int i = 0; i < n; i++)
        {
            long long int temp;
            cin >> temp;
            a.push_back(temp);
        }

        sort(a.begin(), a.end());
       ;
        lli p1 = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
        long long int p2 = a[0] * a[1] * a[2] * a[3] * a[n - 1];
        long long int p3 = a[0] * a[1] * a[n - 1] * a[n - 2] * a[n - 3];
        if(p1 > p2 && p1 > p3)
        {
            cout << p1 << endl;
        }
        else if(p2 > p1 && p2 > p3)
        {
            cout << p2 << endl;
        }
        else
        {
            cout << p3 << endl;
        }
        
        
        
    }
}