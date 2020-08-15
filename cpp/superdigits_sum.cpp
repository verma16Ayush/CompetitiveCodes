#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string get_sum(string s, int n)
{
    static int flag = n;
    if (s.length() == 1)
    {
        return s;
    }

    else
    {
        long long int sum = 0;
        for (long long int i = 0; i < s.length(); i++)
        {
            string car = "";
            car += s[i];
            sum += stoi(car);
        }
        sum *= flag;
        flag = 1;
        return get_sum(to_string(sum), flag);
    }
}

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    cin.ignore();
    string res = get_sum(s, n);
    cout << res << endl;
    return 0;
}