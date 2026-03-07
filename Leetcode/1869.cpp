#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cout << "enter string: ";
    cin >> s;

    int count1 = 0;
    int count0 = 0;
    int a = 0;
    int b = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            a++;
            if (count1 < a)
            {
                cout << "case-1 of 1" << endl;
                count1 = a;
            }
        }
        else
        {
            a = 0;
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            b++;
            if (count0 < b)
            {
                cout << "case-1 of 1" << endl;
                count0 = b;
            }
        }
        else
        {
            b = 0;
        }
    }

    cout << "1: " << count1 << endl;
    cout << "0: " << count0 << endl;

    bool x = 0;
    if (count1 > count0)
    {
        x = 1;
    }

    cout << x;

    return 0;
}