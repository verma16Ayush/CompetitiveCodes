#include <iostream>
using namespace std;
#include <string>
int main()
{
    string s;

    getline(cin, s);
    cin.ignore();

    cout<<"Hello, World."<<endl;
    cout<<s;

    return 0;
}
