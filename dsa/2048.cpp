#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_in_words(int n, string* words)
{
    if(n == 0)
        return;
    int dig = n % 10;
    print_in_words(n / 10, words);
    cout << words[dig] << " ";
}

int main()
{
    int n;
    cin >> n;
    string words[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    print_in_words(n, words);
    return 0;
}