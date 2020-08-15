#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<string> str;
        string temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            str.push_back(temp);
        }
        int q;
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            string qr;
            getline(cin, qr);
            cin.ignore();
            if(qr.length() == 5)
            {
                int index = atoi(&qr[2]);
                str.push_back(str[index - 1] + qr[4]);
            }

            else if (qr.length() == 1)
            {
                vector<string> temp = str;
                sort(temp.begin(), temp.end());
                if(atoi(&qr[0]) == 2)
                {
                    
                    vector<string>::iterator it = find(str.begin(), str.end(), temp[0]);
                    cout << it - str.begin() + 1 << endl;
                }

                else if(atoi(&qr[0]) == 3)
                {
                    int i = str.size() - 1;
                    while(str[i].find(str[i - 1]) != string::npos)
                    {
                        i--;
                    }
                    cout << i << endl;
                }
                
            }
        }
    }
    return 0;
}