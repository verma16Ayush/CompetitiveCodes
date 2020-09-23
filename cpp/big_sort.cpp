#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool custom_comparator(string s1, string s2)
{
    bool result;
    long long int l1, l2;
    l1 = s1.length();
    l2 = s2.length();

    if(l1==l2)
    {
        result = s1<s2;
    }
    else
    {
        result = l1<l2;
    }
    
    // if (s1.length() != s2.length())
    // {
    //     result = s1.length() < s2.length();
    // }
    // else if(s1.length() == s2.length())
    // {
    //     for (int i = 0; i < s1.length(); i++)
    //     {
    //         a1 = atoi(&s1[i]);
    //         a2 = atoi(&s2[i]);
    //         if(a1!=a2)
    //         {
    //             result = a1<a2;
    //             break;
    //         }
    //     }
    // }

    return result;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string temp;
    vector<string> s;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s.push_back(temp);
    }

    sort(s.begin(), s.end(), custom_comparator);

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }

    return 0;
}
