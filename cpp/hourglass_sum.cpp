#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin>>a[i][j];
        }
    }

    int sum = -90;
    int maxSum = -90;

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            sum = a[i][j] + a[i+1][j+1] + a[i-1][j-1] + a[i-1][j+1] + a[i+1][j-1] + a[i+1][j] + a[i-1][j];
            cout<<sum<<endl;

            if(sum > maxSum)
            {
                maxSum = sum;
            }
        }
        
    }
    
    cout<<maxSum<<endl;

    return 0;
    
}