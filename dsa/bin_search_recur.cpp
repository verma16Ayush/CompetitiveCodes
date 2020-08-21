#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bin_search(int* a, int k, int n)
{
    int mid = n / 2;
    if(k == a[mid])
        return mid;
    if(k < a[mid])
        return bin_search(a, k, mid -1);
    if(k > a[mid])
        return bin_search(a + mid, k, n);
    
}

int main()
{
    int a[10] = {2, 4, 8, 9, 10, 20, 49, 54, 67, 78};
    int key;
    cin >> key;

    cout << bin_search(a, key, 10) << endl;
    return 0;
}