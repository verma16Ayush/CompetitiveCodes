#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int a[5];
    long int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }

    long int min = a[0];
    long int max = a[0];

    for (int i = 0; i < 5; i++)
    {
        if (min > a[i])
            min = a[i];

        if (max < a[i])
            max = a[i];
    }

    cout<<sum - max<<" ";
    cout<<sum - min;
    

    return 0;
}