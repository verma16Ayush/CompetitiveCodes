// input n and print n to 1 recursively
//then print 1 to n
#include <iostream>
using namespace std;

void printn1(int n)
{
    if (n <= 0)
        return;
    cout<<n<<endl;
    printn1(n-1);
}

void print1n(int n)
{
    if(n <= 0)
        return;
    
    print1n(n - 1);
    cout<<n<<endl;
}

int main()
{
    int n;
    cin >> n;
    cout<<endl;
    printn1(n);
    cout<<endl;
    print1n(n);
    return 0;
}