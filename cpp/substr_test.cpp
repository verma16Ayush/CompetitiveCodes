#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

vector<int> maxRepeating(string str) 
{ 
    int n = str.length(); 
    int count = 0; 
    char res = '1'; 
    int cur_count = 1; 
    vector<int> resvec;
    resvec.reserve(3);
  
    // Traverse string except last character 
    for (int i=0; i<n; i++) 
    { 
        // If current character matches with next 
        if (i < n-1 && str[i] == str[i+1]) 
            cur_count++; 
  
        // If doesn't match, update result 
        // (if required) and reset count 
        else
        { 
            if (cur_count > count) 
            { 
                resvec[0] = i;
                resvec[1] = i + count - 1;
                count = cur_count; 
            } 
            cur_count = 1; 
        } 
    } 
    resvec[2] = count;
    return resvec;
} 

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int aliceScr = 0;
        int turn = 0;
        while(str.find('1') != string::npos || str.length() == 0)
        {
            vector<int> res = maxRepeating(str);
            if(res[0] != 0)
            {
                str = str.substr(0, res[0] + 1) + str.substr(res[1]);
            }
            else
            {
                str = str.substr(res[1]);
            }
            if(turn % 2 == 0)
            {
                aliceScr += res[2];
            }
        }
        cout << aliceScr << endl;
    }
    return 0;
}