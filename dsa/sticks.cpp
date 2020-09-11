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
        cin >> n;
        int temp;
        set<int> a;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp != 0)
                a.insert(temp);
        }
        cout << a.size() << endl;
    }
    return 0;

}