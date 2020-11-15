/** 
 *
 * @author - Ayush
 * @title - permutations2.cpp
 * @createdOn - 2020-11-12 14:28 Hrs
 * 
 **/
#include <iostream>
#include <cmath>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<vector<int>> int_vec_2d;
typedef vector<int>:: iterator vi_it;
// typedef map<int, int>::iterator mii_it;


class Solution 
{
public:

    void Reverse(vector<int>& a, int st, int en)
    {
        int half = st + ((en+1) - st) / 2;
        int endCount = en;
        for (int startCount = st; startCount < half; startCount++) 
        {
            int store = a[startCount];
            a[startCount] = a[endCount];
            a[endCount] = store;
            endCount--;
        }
    }

    void NextPerm(vector<int>& a)
    {
        int k = -1;

        for (int i = 0; i < a.size() - 1; i++)
        {
            if(a[i+1] > a[i]) k = i;
        }
        
        int t = a.size() - 1;
        for(t; t > k; t--)
        {
            if(a[t] > a[k])
            {
                swap(a[t], a[k]);
                break;
            }
        }
        Reverse(a, k+1, a.size()-1);
        return;
    }

    bool IsEqual(vector<int> a, vector<int> b)
    {
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] != b[i]) return false;
        }

        return true;
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector< vector<int> > ans;    
        vector<int> a = nums;
        do
        {
            ans.push_back(nums);
            NextPerm(nums);
        } 
        while (!IsEqual(a, nums));
        
        return ans;
    }
};

void PrintArray(vector<int> a)
{
    for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}

int main()
{
    vector<int> a = {1, 1, 2};

    Solution* sol = new Solution();
    vector<vector<int> > ans = sol->permuteUnique(a);
    for (int i = 0; i < ans.size(); i++)
    {
        PrintArray(ans[i]);
    }

    return 0;
}