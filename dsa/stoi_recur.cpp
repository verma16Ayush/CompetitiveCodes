#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int convert(const char* str, int index, int res = 0)
{
    if(strlen(str) == 0)
        return res;
    int digit = str[0] - '0';
    res += digit * pow(10, index);
    convert(str + 1, index - 1, res);
}

int main()
{
    char str[50];   
    // cin.ignore();
    cin >> str;
    int x = convert(str, strlen(str) - 1);
    cout << x << endl;
    return 0;
}