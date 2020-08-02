#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    cin>>size;
    long int x[size];

    long int sum  = 0;  
    for (int i = 0; i < size; i++)
    {
        cin>>x[i];
        sum += x[i];
    }

    cout<<sum;
    cout<<"";
    // return 0;
    //sdsada
    return 0;
    
}