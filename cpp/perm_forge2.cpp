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
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        a.reserve(n);
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        if(n % 2 == 0)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if(i % 2 == 0)
                {
                    swap(a[i], a[i+1]);
                }
            }
        }
        else
        {
            /* code */
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        
    }
    return 0;
    
}