#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<string> words(n);
    cout << "enter strings: ";
    for (int i = 0; i < words.size(); i++)
    {
        cin >> words[i];
    }

    string order;
    cout << "enter order: ";
    cin >> order;

    string x = "";
    for (int i = 0; i < words.size(); i++)
    {
        x = x + words[i][0];
    }

    int y = -1;
    int z = -1;
    bool x = 1;
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < order.size(); j++)
        {
            if (x[i] == order[j])
            {
                y = j;
            }

            if (z < y)
            {
                x = 0;
                break;
            }
        }
    }

    return 0;
}