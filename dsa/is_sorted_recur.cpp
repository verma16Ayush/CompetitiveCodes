#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool is_sorted(int *a, int n)
{
    if (n == 1)
    {
        return true;
    }
    if (a[0] < a[1] && is_sorted(a + 1, n - 1))
    {
        return true;
    }
    return false;
}

int main()
{
    int a[5] = {1, 2, 3, 14, 5};
    cout << is_sorted(a, 5) << endl;
    return 0;
}