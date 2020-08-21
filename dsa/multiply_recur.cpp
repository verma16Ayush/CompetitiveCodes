#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int multiply(int n, int m, int res = 0)
{
    if(m == 0)
    {
        return res;
    }
    if(m > 0)
    {
        return multiply(n, m - 1, res + n);
    }

    if(m < 0)
    {
        return multiply(n, m + 1, res - n);
    }
    return 0;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int res = multiply(n, m);
    cout << res << endl;
    return 0;
}