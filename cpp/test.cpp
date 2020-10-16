#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double b = 90.000000000123;
    cout << setprecision(20) << b;
    if(b - (int)b < 0.0001)
    cout << " dd";
    return 0;

}