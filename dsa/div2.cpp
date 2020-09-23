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

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        int wf = 0;
        int n;
        cin >> n;
        cin.ignore();
        string str;
        getline(cin, str);
        string rd, bd;
        int re = 0, be = 0;
        for (int i = 0; i < n; i++)
        {
            if(i%2 == 1)
            {
                bd += str[i];
                if((str[i] - 48) % 2 == 0)
                {
                    be++;
                }
            }
            else
            {
                rd += str[i];
                if((str[i] - 48) % 2 == 0)
                {
                    re++;
                }
            }
            

        }
        
        if(n % 2 == 0)
        {

            if(be > 0)
                wf = 2;
            else
            {
                wf = 1;
            }
            cout << wf << endl;
            continue;
        }
        else
        {
            if(rd.length() - re > 0)
                wf = 1;
            else
            {
                wf = 2;
            }
            
            cout << wf << endl;
            continue;
        }
    }
    return 0;
}