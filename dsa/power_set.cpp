#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void gen_power_set(vector<int>* a, vector<int>::iterator iter, vector<vector<int> >* ps, vector<int> curr)
// {
//     if(iter == a->end())
//     {
//         ps->push_back(curr);
//         return;
//     }
//     else
//     {
//         vector<int>::iterator curr_iter = iter;
//         vector<int>::iterator next_iter = ++iter;
//         gen_power_set(a, next_iter, ps, curr);
//         curr.push_back(*iter);
//         gen_power_set(a, next_iter, ps, curr);
//     }

// }

// int main()
// {
//     vector<int> a;
//     vector< vector<int> > power_set;
//     a.push_back(1);
//     a.push_back(2);
//     a.push_back(3);
//     vector<int> curr(1, 0);
//     gen_power_set(&a, a.begin(), &power_set, curr);
//     for (int i = 0; i < power_set.size(); i++)
//     {
//         for (int j = 0; j < power_set[i].size(); j++)
//         {
//             cout << power_set[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;

// }

void gen_power_set(vector<int> a, vector<int> curr_set, vector<vector<int>> ps, int index = 0)
{
    if (index == a.size())
    {
        //op
        cout << endl;
        for (int i = 0; i < curr_set.size(); i++)
        {
            cout << curr_set[i] << " ";
        }
        // curr_set.clear();
        
        return;
    }
    else
    {
        gen_power_set(a, curr_set, ps, index + 1);
        curr_set.push_back(a[index]);
        gen_power_set(a, curr_set, ps, index + 1);
    }
}

int main()
{
    vector<int> a;
    vector<vector<int>> power_set;
    vector<int> curr_set(1);
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    // curr_set[0] = a[0];
    gen_power_set(a, curr_set, power_set);
    

    return 0;
}