#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Base
{
public:
    int a, b;

    Base(int p, int q)
    {
        this->a = p;
        this->b = q;
    }

    void testFunc()
    {
        cout<<"test inside base\n";
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<"end of Base class testfunc"<<endl<<endl;
        return;
    }
};

class Derived: public Base
{
public:
    int c;
    Derived(int p, int q, int r): Base(p, q)
    {
        c = r;
    }

    // void testFunc()
    // {
    //     cout<<"inside derived testfunc\n";
    //     cout<<c<<endl;
    //     cout<<"end of derived testfunc"<<endl;
    // }
};

int main()
{
    Base* bs = new Base(10, 20);
    bs->testFunc();

    Derived* dr = new Derived(20, 30, 40);
    dr->testFunc();
    return 0;
}