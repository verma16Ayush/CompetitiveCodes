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

void swap(ll *x, ll *y) 
{ 
    ll temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
// This function sorts arr[0..n-1] in wave form, i.e., arr[0] >=  
// arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5] .... 
void sortInWave(ll arr[], int n) 
{ 
    // Traverse all even elements 
    for (int i = 0; i < n; i+=2) 
    { 
        // If current even element is smaller than previous 
        if (i>0 && arr[i-1] > arr[i] ) 
            swap(&arr[i], &arr[i-1]); 
  
        // If current even element is smaller than next 
        if (i<n-1 && arr[i] < arr[i+1] ) 
            swap(&arr[i], &arr[i + 1]); 
    } 
} 

void rearrange(ll arr[], int n) 
{ 
    // Auxiliary array to hold modified array 
    ll temp[n]; 
  
    // Indexes of smallest and largest elements 
    // from remaining array. 
    ll small=0, large=n-1; 
  
    // To indicate whether we need to copy rmaining 
    // largest or remaining smallest at next position 
    int flag = true; 
  
    // Store result in temp[] 
    for (int i=0; i<n; i++) 
    { 
        if (flag) 
            temp[i] = arr[large--]; 
        else
            temp[i] = arr[small++]; 
  
        flag = !flag; 
    } 
  
    // Copy temp[] to arr[] 
    for (int i=0; i<n; i++) 
        arr[i] = temp[i]; 
} 

int main()
{
    int n;
    cin >> n;
    ll a[100001];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    rearrange(a, n);
    int count = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if(a[i] < a[i-1] && a[i+1])
            count++;
    }

    cout << count << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
    
    
}