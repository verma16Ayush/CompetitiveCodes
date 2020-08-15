#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef numeric_limits<streamsize> max_stream_size;

void selection_sort(vector<int> *a)
{
    int temp;
    vector<int>::iterator i, j, minItr;

    for (i = a->begin(); i != a->end() - 1; i++)
    {
        minItr = i;
        for (j = i + 1; j < a->end(); j++)
        {
            if (*minItr > *j)
            {
                minItr = j;
            }
        }
        temp = *minItr;
        *minItr = *i;
        *i = temp; 
    }
}

int main()
{
    vector<int> a;
    int n;
    cin >> n;
    cin.ignore(max_stream_size::max(), '\n');

    a.reserve(n);
    int temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }

    cout << endl << endl;

    selection_sort(&a);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}