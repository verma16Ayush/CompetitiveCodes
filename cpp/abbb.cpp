/** 
 *
 * @author - Ayush
 * @title - abbb.cpp
 * @createdOn - 2020-10-17
 * 
 **/
#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<vector<int>> int_vec_2d;
typedef vector<int>:: iterator vi_it;
typedef map<int, int>::iterator mii_it;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        ll inlen = s.length();



        // string s2 = "";
        // for (int i = 0; i < inlen; i++)
        // {
        //     s2 = s2 + s[i];
        //     if(s2.length() >= 2)
        //     {
        //         string s3 = s2.substr(s2.length() - 2, 2);
        //         if(s3 == "BB" || s3 == "AB")
        //         {
        //             s2.erase(s2.length() - 2);
        //         }
        //     }
        // }
        // cout << s2.length() << endl;


        vector<char> s2;
        s2.reserve(inlen);
        for (int i = 0; i < inlen; i++)
        {
            s2.push_back(s[i]);
            if(s2.size() >= 2)
            {
                if(s2[s2.size()-1] == 'B' && s2[s2.size()-2] == 'A')
                {
                    s2.pop_back();
                    s2.pop_back();
                }
                else if(s2[s2.size()-1] == 'B' && s2[s2.size()-2] == 'B')
                {
                    s2.pop_back();
                    s2.pop_back();
                }
            }
        }
        cout << s2.size() << endl;
        
    }
    return 0;
}