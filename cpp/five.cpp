#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin>>age;
    int candles[age];
    int count = 0;
    for (int i = 0; i < age; i++)
    {
        cin>>candles[i];
    }
    int min = *min_element(candles, candles + age);
    int max = *max_element(candles, candles + age);

    for (int i = 0; i < age; i++)
    {
        if(candles[i] == max)
            count++;
    }

    cout<<count;
    return 0;
    

}