#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int getIndex(vector<int> v, int K, int flag)
{
    vector<int>::iterator it;
    if(flag == 1)
    {
        it = find(v.begin() + 1, v.end(), K);
    }
    else
    {
        it = find(v.begin(), v.end(), K);

    }
    // If element was found
    if (it != v.end())
    {
        // calculating the index
        // of K
        int index = distance(v.begin(), it);
        return index;
    }
    else
    {
        // If the element is not
        // present in the vector
        return - 1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        vector<int> a(l);
        vector<int> temp(l);
        for (int i = 0; i < l; i++)
        {
            cin >> a[i];
        }
        temp = a;
        sort(a.begin(), a.end());
        vector<int> index(3);
        int flag = 0;
        if(a[0] == a[1])
            flag = 1;
        index[0] = getIndex(temp, a[0], 0);
        index[1] = getIndex(temp, a[1], flag);
        index[2] = getIndex(temp, a[a.size() - 1], 0);

        if (a[0] + a[1] > a[a.size() - 1])
        {
            cout << -1 << endl;
        }
        else
        {
            sort(index.begin(), index.end());
            for (int i = 0; i < index.size(); i++)
            {
                cout << index[i] + 1 << endl;
            }
        }
    }
    return 0;
}