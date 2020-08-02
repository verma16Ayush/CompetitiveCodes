#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int fact = 1;
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        fact *= i;
    }
    cout<<fact;
    return 0;
}

string multiply(string num1)
{

}
