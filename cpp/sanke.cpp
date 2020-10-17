/** 
 *
 * @author - Ayush
 * @title - sanke.cpp
 * @createdOn - 2020-10-17
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
        ll n;
        cin >> n;
        cin.ignore();
        string b;
        // ?.getline(b, n);
        getline(cin, b);
        int flag = 0;
        ll returnables = 0;
        for (int i = 0; i < n; i++)
        {
            if((b[i] == '>' && b[(n-1+i) % n] == '<') || (b[i] == '<' && b[(n-1+i) % n] == '>')) flag = 1;

            if(b[i] == '-' || b[(n-1+i) % n] == '-') returnables++;
        }
        
        if(flag == 0) cout << n << endl;
        else cout << returnables << endl;
    }
    return 0;
}