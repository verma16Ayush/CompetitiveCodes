#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3], b[3], score[2] = {0};

    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin>>b[i];
    }

    for (int i = 0; i < 3; i++)
    {
        if(a[i] > b[i])
            score[0]++;
        
        else if (b[i] > a[i])
            score[1]++;
        
        else if(a[i] == b[i])
            continue;
    }
    
    cout<<score[0]<<" ";
    cout<<score[1];

    return 0;
}
