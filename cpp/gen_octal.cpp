/** 
 *
 * @author - Ayush
 * @title - gen_octal.cpp
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

int main()
{
    ofstream of("100Octals.txt");
    int octal[200] = {0};
    if(of.is_open())
    {
        for (int i = 0; i < 101; i++)
        {
            int num = i;
            int k = 0;
            of<<i<<" -> ";
            while (num)
            {
                k = num % 8;
                of << k;
                num = num / 8;
                // k++;
            }
            of << endl;
        }
        
    }
    return 0;
}