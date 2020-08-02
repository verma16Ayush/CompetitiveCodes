#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n;
    cin>>k;
    vector <int> s(n, 0);
    vector <int> rem(k + 1, 0);
    int count = 0;

    // cout<<s.size()<<endl;
    // cout<<rem.size()<<endl;

    int temp;

    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        s[i] = temp;
        rem[temp % k]++;
    }

    if(k==0 || k == 1)
    {
        cout<<1<<endl;
        return 0;
    }

    if(rem[0] > 0)
    {
        count++;
    }

    if(k % 2 == 0 && rem[k/2] > 0)
    {
        count++;
    }

    for(int r = 1; r < (k + 1) / 2; r++)
    {
        count+=max(rem[r], rem[k - r]);
        
    }
    
    cout<<count<<endl;
    return 0;
}