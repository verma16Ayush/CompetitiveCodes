#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<vector<int>> int_vec_2d;
typedef vector<int>::iterator vi_it;
typedef map<int, int>::iterator mii_it;

int get_sum(vector<int> &a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

int get_res(vector<int> &a, int n, int i = 0)
{
    int t = get_sum(a, n);
    if (t == 0)
        return 1;

    if(i == n)
        return 0;

    a[i] -= (i + 1);
    if(get_res(a, n, i + 1) == 0);
        return 1;
    a[i] += (i + 1);
    if(get_res(a, n, i + 1)== 0);
        return 1;

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        a.reserve(n);
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        bool t = get_res(a, n);
        if (t)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}