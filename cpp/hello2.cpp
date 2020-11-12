#include <iostream>
#include <bits/stdc++.h>

using namespace std;

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
        for(int i = 0; i< a.size(); i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }

        for(int i = 0; i< a.size(); i++)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}