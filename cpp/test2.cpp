#include <iostream>
#include <cmath>
#include <vector>
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
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        string str;
        cin >> str;
        int ka= 0;
        int kb = 0;

        vector<int> ar;
        int st = str.find('1');
        int en = str.find_last_of('1');

        for (int i = st; i <= en; i++)
        {
            if(str[i] == '0' && ka > 0 || (i == en && str[i] == '1'))
            {
                ar.push_back(ka * a);
                ka = 0;
            }

            if(str[i] == '1' && kb > 0)
            {
                ar.push_back(kb * -1 * b);
                kb = 0;
            }

            if(str[i] == '1')
            {
                ka++;
            }

            else
            {
                kb++;
            }
            
        }
        int cost = ar[0];
        for (int i = 1; i <= ar.size() - 1; i++)
        {
            cost += min(abs(ar[i]),abs(ar[i+1]));
        }

        cout << cost << endl;
        
        
    }
    return 0;
}