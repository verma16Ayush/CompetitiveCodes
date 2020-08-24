#include <iostream>
#include <bits/stdc++.h>
typedef map<int, int> mii;
typedef pair<int, int> pii;
using namespace std;

void gen_sequences(string n, string res, map<char, string> kp, int i = 0)
{
   if(i == n.length()) 
   {
       //base case
       cout << res << endl;
       return;
   }
   else
   {
        char c = n[i];
        string let = kp[c];
        for (int j = 0; j < let.length(); j++)
        {
            gen_sequences(n, res + let[j], kp, i + 1);
        }
        // gen_sequences(n, res, kp, i + 1);
   }
   
}

int main()
{
    string n = "23";
    map<char, string> key_pad;
    key_pad['0'] = "";
    key_pad['1'] = "";
    key_pad['2'] = "abc";
    key_pad['3'] = "def";
    key_pad['4'] = "ghi";
    key_pad['5'] = "jkl";
    key_pad['6'] = "mno";
    key_pad['7'] = "pqrs";
    key_pad['8'] = "tuv";
    key_pad['9'] = "wxyz";

    // string n;
    // cin >> n;
    gen_sequences(n,"", key_pad);
    return 0;

}