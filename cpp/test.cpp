/** 
 *
 * @author - Ayush
 * @title - test.cpp
 * @createdOn - 2020-10-24 19:49 Hrs
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

bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 

int nextPrime(int N) 
{ 
  
    if (N <= 1) 
        return 2; 
  
    int prime = N; 
    bool found = false; 
    while (!found) { 
        prime++; 
  
        if (isPrime(prime)) 
            found = true; 
    } 
  
    return prime; 
} 

int main()
{
    int t;
    cin >> t;
    int num = nextPrime(t) - (t - 1);
    while(isPrime(num))
    {
        num = nextPrime(num) - (t - 1);
    }
    cout << num;
    return 0;
}