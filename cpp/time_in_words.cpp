#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;

typedef map<int, string> timeDict;
typedef pair<int, string> numWordPair;

int main()
{
    string words[31] = {"o' clock", "one", "two", "three", "four", "five", "six", "seven", "eight",
                        "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen",
                        "eighteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five",
                        "twenty six", "twenty seven", "twenty eight", "twenty nine"
                                                                      "half"};

    timeDict timeDic;

    for (int i = 0; i < 31; i++)
    {
        timeDic.insert(numWordPair(i, words[i]));
    }

    int h, m;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (m > 1 && m < 30 && m != 15)
    {
        cout << timeDic.find(m)->second << " minutes past " << timeDic.find(h)->second << endl;
    }
    if (m == 1)
    {
        cout << timeDic.find(m)->second << " minute past " << timeDic.find(h)->second << endl;
    }
    if (m == 15)
    {
        cout << timeDic.find(m)->second << " past " << timeDic.find(h)->second << endl;
    }
    
    else if (m == 0)
    {
        cout << timeDic.find(h)->second << " " << timeDic.find(0)->second << endl;
    }
    else if (m > 30 && m != 45 && m < 59)
    {
        m = 60 - m;
        cout << timeDic.find(m)->second << " minutes to " << timeDic.find((h + 1) % 12)->second << endl;
    }
    else if (m == 45)
    {
        m = 60 - m;
        cout << timeDic.find(m)->second << " to " << timeDic.find((h + 1) % 12)->second << endl;
    }
    else if (m == 59)
    {
        m = 60 - m;
        cout << timeDic.find(m)->second << " minute to " << timeDic.find((h + 1) % 12)->second << endl;
    }
    return 0;
}