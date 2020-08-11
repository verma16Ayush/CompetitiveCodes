#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    vector<string> ans(t, "YES");
    int k = 0;
    while(t--)
    {
        int n;
        cin>>n;
        cin.ignore();
        vector<int> nums;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            nums.push_back(temp);
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++)
        {
            if(abs(nums[i] - nums[i + 1]) > 1)
            {
                ans[k] = "NO" ;
                break;
            }
        }
        k++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    
    return 0;
}