/** 
 *
 * @author - Ayush
 * @title - 2.cpp
 * @createdOn - 2020-10-26 21:28 Hrs
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

struct mapstud
{
    int classi;
    int numpres;
};

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[50][18];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<mapstud> mapp;
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                
            }
        }  
    }

    return 0;
}