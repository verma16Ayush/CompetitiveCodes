/** 
 *
 * @author - Ayush
 * @title - axorb.cpp
 * @createdOn - 2020-10-18
 * 
 **/
#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<vector<int>> int_vec_2d;
typedef vector<int>:: iterator vi_it;
typedef map<int, int>::iterator mii_it;

int findX(int A, int B) 
{ 
    int j = 0, x = 0; 
  
    // While either A or B is non-zero 
    while (A || B) { 
  
        // Position at which both A and B 
        // have a set bit 
        if ((A & 1) && (B & 1)) { 
  
            // Inserting a set bit in x 
            x += (1 << j); 
        } 
  
        // Left shifting both numbers to 
        // traverse all the bits 
        A >>= 1; 
        B >>= 1; 
        j += 1; 
    } 
    return x; 
} 

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int x = findX(a, b);
        int ans = (a ^ x) + (b ^ x);
        cout << ans << endl;
    }
    return 0;
}