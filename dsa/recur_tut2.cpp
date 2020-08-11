//rope cutting problem.
//given a rope of length n
//find the max number of cuts that can be made of lengths
//belonging from a set of values
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int GetMaxCuts(int n, int a, int b, int c)
{
    int ca = GetMaxCuts(n - a, a, b, c);
    int cb = GetMaxCuts(n - b, a, b, c);
    int cc = GetMaxCuts(n - c, a, b, c);

    int numCuts = max(ca, cb, cc);
    
}

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

}