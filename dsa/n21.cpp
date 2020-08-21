#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void n21(int n)
{
    cout << n << " ";
    if(n == 1)
        return;
    else
        n21(n - 1);
    
}

void one2n(int n)
{
    cout << endl;
    if(n <= 0)
        return;
    one2n(n - 1);
    cout << n << " ";
}

int main()
{
    n21(5);
    one2n(5);
    return 0;
}