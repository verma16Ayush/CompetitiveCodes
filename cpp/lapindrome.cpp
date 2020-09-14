#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<vector<int>> int_vec_2d;
typedef vector<int>:: iterator vi_it;
typedef map<int, int>::iterator mii_it;

long long C(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string str;
        getline(cin, str);
        long long int count = 0;
        for(char c : str)
        {
            if ( c == '1')
                count++;
        }

        cout << count + C(count, 2) << endl;
    }
    return 0;
}