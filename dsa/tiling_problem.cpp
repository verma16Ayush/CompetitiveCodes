#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int calculate(int n)
{
    if(n < 1)
        return 0;
    if(n < 4)
        return 1;
    if(n == 4)
        return 2;
    
    return calculate(n - 1) + calculate( n - 4);
}

int main()
{
    int n;
    cin >> n;
    int tiles = calculate(n);
    cout << tiles << endl;
    return 0;
}