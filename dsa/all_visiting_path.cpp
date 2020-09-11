#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<vector<int>> int_vec_2d;
typedef vector<int>:: iterator vi_it;
typedef map<int, int>::iterator mii_it;

bool num_paths(int a[][7], int visited = 0, int paths = 0, int iter_no = 0, int i= 0, int j = 0)
{
    //base
    if(visited = 49 && i == 7 && j == 7)
    {
        paths+=1;
        return true;
    }
    if(i == 7 && j == 7 && visited < 49)
    {
        return false;
    }
    
    if
    //recursive

}

int main()
{
    int a[7][7] = {0};
}