#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<vector<int>> int_vec_2d;
typedef vector<int>:: iterator vi_it;
typedef map<int, int>::iterator mii_it;

vector<int> sum_sum(vector<int> a, int n)
{
    vector<int> sum;
    sum.reserve(n);
    for (int i = 0; i < n - 1; i++)
    {
        int temp = a[i] + a[i+1];   
        sum.push_back(temp);
    }
    sort(sum.begin(), sum.end());
    return sum;
}

bool is_equal(vector<int> a, vector<int> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] != b[i])
            return false;
    }

    return true;
    
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        auto it = a.rbegin();
        auto it2 = a.rend();
        while(it != it2)
        {
            cout << *it << " ";
            it++;
        }
        
    }
    return 0;
}