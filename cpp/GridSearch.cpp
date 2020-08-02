#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        int rp, cp;
        cin>>rp;
        cin>>cp;
        cin.ignore();
        string temp;

        vector <string> parent_grid(rp);

        for (int i = 0; i < parent_grid.size(); i++)
        {
            getline(cin, temp);
            cin.ignore();
            parent_grid[i] = temp;
        }
        
        int rc, cc;
        cin>>rc;
        cin>>cc;
        cin.ignore();

        vector<string> child_grid(rc);

        for (int i = 0; i < child_grid.size(); i++)
        {
            getline(cin, temp);
            cin.ignore();
            child_grid[i] = temp;
        }
        
        for (int i = 0; i < rp; i++)
        {
            for (int j = 0; j < cp; j++)
            {
                if(parent_grid[i][j] == child_grid[0][0])
                {
                }
            }
            
        }
        
        
    }
}