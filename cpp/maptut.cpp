#include <iostream>
#include <map>
#include <iterator>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // map<string, string> phone_book;

    int n;

    cin >> n;
    cin.ignore();
    map<string, string> phone_book;

    string temp_name, temp_number;

    for (int i = 0; i < n; i++)
    {
        cin >> temp_name;
        cin >> temp_number;
        phone_book.insert(pair<string, string>(temp_name, temp_number));
    }

    // map<string, string>::iterator itr;
    // // itr = phone_book.begin();

    // for (itr = phone_book.begin(); itr != phone_book.end(); itr++)
    // {
    //     cout << itr->first << " : " << itr->second << endl;
    // }
    string query = "";

    while(cin>>query)
    {
        if(phone_book.find(query) != phone_book.end())
        {
            cout<<query<<"="<<phone_book.find(query)->second<<endl;
        }
        else
        {
            cout<<"Not found"<<endl;
        }  
    }
    
    return 0;
}