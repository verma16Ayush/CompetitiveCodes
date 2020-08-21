#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count(float a, int res = 0)
{
    if(a < 4)
    {
        return res;
    }
    else
    {
        float newa = a - 4;
        int countn = res + 1;
        return count(newa, countn);
    }
    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int b;
        cin >> b;
        int area_sq = b * b;
        
    }
    return 0;
}
