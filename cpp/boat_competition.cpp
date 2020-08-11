#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    vector<int> ans;
    while(t--)
    {
        int n;
        cin>>n;
        cin.ignore();
        int temp;
        vector<int> wt;
        int tms = 0;
        int maxtms = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            wt.push_back(temp);
        }
        sort(wt.begin(), wt.end());
        
        for (int i = 2; i < 101; i++)
        {
            for (int j = 0; j < n && wt[j] < i ; j++)
            {
                for(int k = 0; k < n && wt[k] < i ; k++)
                {
                    if(wt[k] = i - wt[j])
                    tms++;
                }
            }
            if(tms>maxtms)
            {
                maxtms = tms;
            }   
        }

        ans.push_back(maxtms/2);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}