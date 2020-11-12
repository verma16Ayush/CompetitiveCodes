/** 
 *
 * @author - Ayush
 * @title - ters.cpp
 * @createdOn - 2020-10-25 17:08 Hrs
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
        vector<int> a, b;
        a.reserve(n);
        b.reserve(n);
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if(i < n / 2)
            {
                temp *= -1;
                a.push_back(temp);
            }
            else
            {
                a.push_back(temp);
            }
            
        }

        for (int i = n- 1; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
        
        
    }
    return 0;
}