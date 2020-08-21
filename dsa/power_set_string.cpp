#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void gen_power_set(string str,  vector<string>* res, string curr = "", int index = 0)
{
    if(index == str.length())
    {
        res->push_back(curr);
        return;
    }
    
    gen_power_set(str, res, curr + str[index], index+1);
    gen_power_set(str, res, curr, index + 1);
}

int main()
{
    string str = "abc";
    vector<string> res;
    gen_power_set(str, &res);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}