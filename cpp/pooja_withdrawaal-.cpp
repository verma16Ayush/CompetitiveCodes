#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int amt, bal;
    cin >> amt;
    cin >> bal;

    if (static_cast<float>(amt) + 0.50 > static_cast<float>(bal))
    {
        cout << fixed << setprecision(2) << bal;
        return 0;
    }

    if (amt % 5 != 0)
    {
        cout << fixed << setprecision(2) << bal;
        return 0;
    }

    else if(amt % 5 == 0 &&  (static_cast<float>(amt) + 0.50) < static_cast<float>(bal))
    {
        cout << fixed << setprecision(2)<< static_cast<float>(bal) - (static_cast<float>(amt) + 0.50) << endl;
        return 0;
    }

}