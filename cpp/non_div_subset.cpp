#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    // cin.ignore();
    cin >> n;
    // cin.ignore();
    cin >> k;
    // cin.ignore();
    int temp;

    int s[n];
    int rem[k] = {0};

    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        s[i] = temp;
        rem[temp % k]++;
    }

    if(k == 1)
    {
        cout << 1 <<endl;
        return 0;
    }

    else if(k == 0)
    {
        cout<< 1<< endl;
        return 0;
    }

    int i = 0;
    unsigned int count = 0;

    if(k % 2 == 0 && rem[k/2] > 0)
    {
        count+=1;
    }
    
    for(i = 0; i < (k + 1) / 2; i++)
    {
        count = max(rem[i], rem[k - i]);
    }


    // cout<<"hel";
    int t;
    cin>>t;

    return 0;
}
