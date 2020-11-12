/** 
 *
 * @author - Ayush
 * @title - chairs.cpp
 * @createdOn - 2020-11-02 20:12 Hrs
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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int k = 4*n;
        vector<int> a;
        a.reserve(n);

        a.push_back(k);
        for(k; k > 0; k -= 2)
        {
            for(int i  = 0; i < a.size(); i++)
            {
                if(a[i] % k == 0)
                {
                    break;
                }
                if(i == a.size() - 1)
                {
                    a.push_back(k);
                }
            }
        }

        for(int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}