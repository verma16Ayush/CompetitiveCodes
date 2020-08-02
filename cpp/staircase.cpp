#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t = 0;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j >= n - t - 1)
            {
                cout<<'#';
                
            }
            else
            {
                cout<<' ';
            }
        }
        t++;
        cout<<endl;
        
    }
    return 0;
}