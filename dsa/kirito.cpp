#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<vector<int>> int_vec_2d;
typedef vector<int>:: iterator vi_it;
typedef map<int, int>::iterator mii_it;

int main()
{
    int s, n;
    cin >> s >> n;
    map<int, int> db;
    for (int i = 0; i < n; i++)
    {
        int tempd, tempb;
        cin >> tempd >> tempb;
        db[tempd] = tempb;
    }

    // sort(db.begin(), db.end());
    int flag = 1;

    for(auto& item : db)
    {
        if(item.first <= s)    
        {
            s += item.second;
        }
        else
        {
            flag = 0;
        }
        
    }
    if(flag = 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
    
}