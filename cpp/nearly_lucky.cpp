/** 
 *
 * @author - Ayush
 * @title - nearly_lucky.cpp
 * @createdOn - 2020-10-16
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
    // ll n;
    // cin >> n;
    // ll temp = n;
    // int count = 0;
    // while(temp)
    // {
    //     int d = temp % 10;
    //     if(d == 4 ||d == 7) count++;

    //     if(count > 7) break;
    // }

    // if(count == 4 || count == 7) cout << "YES" << endl;

    // else cout << "NO" << endl;

    string n;
    cin >> n;
    int count = 0;
    int len = n.length();
    for (int i = 0; i < len; i++)
    {
        if(n[i] == '4' || n[i] == '7') count++;
        if(count > 7) break;
    }
    
    if(count == 4 || count == 7) cout << "YES" << endl;

    else cout << "NO" << endl;


    return 0;
}