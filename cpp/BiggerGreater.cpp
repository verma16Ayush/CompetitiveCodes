#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    cin.ignore();
    while(cases--)
    {
        string str;
        getline(cin, str);
        int imin = 0;
        int jmin = 0;
        int diff = 26;
        int flag = 0;

        for (int i = 0; i < str.length(); i++)
        {
            for (int j = i; j < str.length(); j++)
            {
                if(str[j] > str[i])
                {
                    flag = 1;
                    if(str[j] - str[i] < diff)
                    {
                        diff = str[j] - str[i];
                        imin = i;
                        jmin = j;
                    }
                }
            }
        }

       bool val = next_permutation(str.begin(), str.end());
       
       if(val)
       {
           cout<<str<<endl;
       }
       else
       {
           cout<<"no answer"<<endl;
       }
       
        
    }

    return 0;
}