#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n;
        vector<tuple<int, int, int> > c;
        tuple<int, int, int> temp;
        for (int i = 0; i < n; i++)
        {
            int x, y, r;
            cin >> x >> y >> r;
            temp = make_tuple(x, y, r);
            c.push_back(temp);
        }

        
        
    }
    
}