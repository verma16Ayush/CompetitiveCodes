#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// typedef numeric_limits<streamsize> max_stream_size?

int main()
{
    vector <int> a;
    int n;
    cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    a.reserve(n);
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;

    int temp;

    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        a.push_back(temp);
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i];
    }

    a.clear();

    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    
    return 0;
}