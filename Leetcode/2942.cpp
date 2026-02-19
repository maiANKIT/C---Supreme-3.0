#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<string> words(n);
    cout << "enter the strings: ";
    for (int i = 0; i < words.size(); i++)
    {
        cin >> words[i];
    }

    char x;
    cout << "enter the char: ";
    cin >> x;

    vector<int> index;
    for (int i = 0; i < words.size(); i++)
    {

        for (int j = 0; j < words[i].size(); j++)
        {

            char t = words[i][j];

            if (t == x)
            {
                index.push_back(i);
                break;
            }
        }
    }

    for (int i = 0; i < index.size(); i++)
    {
        cout << index[i] << " ";
    }

    return 0;
}