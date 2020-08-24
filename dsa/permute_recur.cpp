#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void permute(char* str, int j = 0)
{
    if(str[j] == '\0')
    {
        cout << str << endl;
        return;
    }
    else
    {
        for (int i = j; i < strlen(str); i++)
        {
            swap(str[i], str[j]);
            permute(str, j + 1);
            swap(str[i], str[j]);
        }
        
    }
    
}

int main()
{
    char str[100];
    cin >> str;
    permute(str);
    return 0;
}