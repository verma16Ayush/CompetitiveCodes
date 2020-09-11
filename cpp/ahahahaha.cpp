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
    cin.ignore();
    while(t--)
    {
        int n;
        int x;
        int c0 = 0;
        int c1 = 0;
        int rem = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if(x)
                c1++;
        }

        c0 = n - c1;
        
        if(c1 <= n / 2)
        {
            rem = n - c1;
            cout << rem << "\n";
            for (int i = 0; i < rem; i++)
            {
                cout << 0 << " ";
            }
        }
        else    
        {
            rem = n - c0 - c1 % 2;
            cout << rem << endl;
            for (int i = 0; i < rem; i++)
            {
                cout << 1 << " ";
            }
        }
    }
    return 0;
}