#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> binary;

    while (n > 0)
    {
        binary.push_back(n % 2);
        n /= 2;
    }

    int count = 0, maxCount = 0;
    for (int i = 0; i < binary.size(); i++)
    {
        if (binary[i] == 1)
        {
            count++;
        }
        else 
        {
            if (maxCount < count)
            {
                maxCount = count;
            }
            count = 0;
        }
    }

    if(count > maxCount)
    {
        maxCount = count;
    }

    cout << maxCount;
    return 0;
}