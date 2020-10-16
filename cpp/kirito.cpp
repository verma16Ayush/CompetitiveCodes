/** 
 *
 * @author - Ayush
 * @title - kirito.cpp
 * @createdOn - 2020-10-13
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

struct dragon
{
    int str;
    int bon;
};

bool comparator(const dragon d1, const dragon d2)
{
    if(d1.str < d2.str) return true;

    else if(d1.str == d2.str)
    {
        if(d1.bon > d2.bon) return true;
    }
    return false;
}

int main()
{
    int s, n;
    cin >> s >> n;
    vector<dragon> a;
    a.reserve(n);
    for (int i = 0; i < n; i++)
    {
        dragon temp;
        cin >> temp.str >> temp.bon;
        a.push_back(temp);
    }
    
    sort(a.begin(), a.end(), comparator);
    int i;
    for (i = 0; i < a.size(); i++)
    {
        if(s > a[i].str)
        {
            s+=a[i].bon;
        }
        else
        {
            cout << "NO" << endl;
            break;
        }
    }
    if(i == a.size())
        cout << "YES" << endl;

    return 0;
}