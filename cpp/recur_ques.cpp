#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int find(int query, int power, int num)
{
    int val = static_cast<int>(query - pow(num, power));
    if (val == 0)
        return 1;
    
    else if(val < 0)
        return 0;
    
    else
    {
        return find(val, power, num+1) + find(query, power, num + 1);
    }
    
}

int main()
{
    int query, power;
    cin>>query>>power;
    int x = 0;
    x += find(query,power, 1);
    cout << x;
    return 0;
}

