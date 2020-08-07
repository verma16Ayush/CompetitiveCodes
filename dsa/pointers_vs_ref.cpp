#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void update(int &a_ptr, int &b_ptr )
{
    cout<<a_ptr<<endl;
    a_ptr = 90;
    // cout<<a_ptr<<endl;
    // *a_ptr = 40;

}

int main()
{
    int a = 20;
    int* ap = &a;
    int b = 30;
    int* bp = &b;
    update(a, b);
    return 0;
}