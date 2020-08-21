#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int *a, int st, int en)
{
    int temp[100];
    int i = st;
    int mid = (st + en) / 2;
    int j = mid + 1;
    int k = st;
    //Merging the two halves together
    while (i <= mid && j <= en)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
        {
            temp[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = a[i++];
    }
    while (j <= en)
    {
        temp[k++] = a[j++];
    }

    for (i = st; i <= en; i++)
    {
        a[i] = temp[i];
    }
}

void merge_sort(int *a, int st, int en)
{
    if (st <= en)
        return;
    int mid = (st + en) / 2;
    merge_sort(a, st, mid);     //sorting 1st half
    merge_sort(a, mid + 1, en); //sorting second half
    merge(a, st, en);           //merging the two sorted halves
}

int main()
{
    int a[100] = {0};
    int n;
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    merge_sort(a, 0, n - 1);
    return 0;
}