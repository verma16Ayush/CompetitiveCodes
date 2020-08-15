#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> str;
    str.push_back("abcdef");
    str.push_back("abc");
    str.push_back("abcd");
    sort(str.begin(), str.end());
    for (int i = 0; i < str.size(); i++)
    {
        cout<<str[i]<<endl;
    }
    return 0;
    
}