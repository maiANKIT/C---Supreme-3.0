#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    vector<string> words(n);
    cout << "enter  words: ";
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    string order;
    cout << "enter order: ";
    cin >> order;

    for (int i = 0; i < words.size(); i++)
    {
        if
    }

    int i = 0;
    string t;
    int j = 0;
    while (i < n)
    {
        t = t + words[i][j];
        i++;
    }
    int x = t.size();
    int count = 0;
    int y = 0;
    int g = 0;
    int f = order.size();

    while (g < f)
    {
        if (t[y] == order[g])
        {
            count++;
            g++;
            y++;
        }
        else if (t[y] != order[g])
        {
            g++;
        }
        if (count == x)
        {
            break;
        }
    }

    if (count == x)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}