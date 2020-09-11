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
        vector<int> a;
        a.reserve(n);
        int temp;
        int count0 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
            if(temp == 0)
                count0++;
        }
        if(count0 == n)
        {
            cout << 1 << " " << 1;
            continue;
        }
        int i_min = 0, i_max = 0;
        int max = a[0], min = a[0];
        for (int i = 0; i < n; i++)
        {
            if(a[i] > max)
            {
                max = a[i];
                i_max = i;
            }
            if(a[i] < min)
            {
                max = a[i];
                i_min = i;
            }
        }

        cout << i_min + 1 << " " << n - i_max << endl;
    }
    return 0;
}