#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// #define long long int int
int main()
{
    int t;
    cin>> t;
    cin.ignore();
    vector<long long int> ans;
    while(t--)
    {
        vector<long long int> candies;
        vector<long long int> oranges;
        
        long long int numg;
        cin>>numg;
        cin.ignore();
        long long int temp;
        long long int numops = 0;
        for (int i = 0; i < numg; i++)
        {
            cin>>temp;
            candies.push_back(temp);
        }
        long long int temp2;
        for (int i = 0; i < numg; i++)
        {
            cin>>temp2;
            oranges.push_back(temp2);
        }

        long long int minC = *min_element(candies.begin(), candies.end());
        long long int minO = *min_element(oranges.begin(), oranges.end());

        for (int i = 0; i < numg; i++)
        {
            long long int decC = candies[i] - minC;
            long long int decO = oranges[i] - minO;
            numops += min(decO, decC) + abs(decC - decO);
        }
        
        ans.push_back(numops);
        
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    
    return 0;
}