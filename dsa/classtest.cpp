#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<vector<int>> int_vec_2d;
typedef vector<int>::iterator vi_it;
typedef map<int, int>::iterator mii_it;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a;
    int b;
    // int diff;
    cin >> a >> b;
    int i = 0;
    if(abs(a-b) >= 10)
    {
      i += abs(a-b) / 10;
    }
    int diff = abs(a-b) - i * 10;
    if(diff>=1)
    {
      i+=1;
    }
    cout << i << endl;

  }
  return 0;
}