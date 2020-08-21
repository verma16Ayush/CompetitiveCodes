#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int power(int n, int p)
{
    if(p == 1)
    {
        return n;
    }
    else
    {
        return n * power(n, p - 1);
    }
    
}

int fast_power(int n, int p)
{
    if(p == 0)
        return 1;
    
    if(p % 2 == 1)
    {
        return n * fast_power(n, p / 2) * fast_power(n, p / 2);
    }

    if(p % 2 == 0)
    {
        return fast_power(n, p /2) * fast_power(n, p / 2);
    }
    return 0;
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << power(n, p) << endl;
    cout << power(n, p);
    return 0;
}