#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<char> letters(n);
    cout << "enter letters: ";
    for (int i = 0; i < letters.size(); i++)
    {
        cin >> letters[i];
    }

    char target;
    cout << "enter target: ";
    cin >> target;

    char x;
    for (int i = 0; i <= letters.size(); i++)
    {
        if (i < letters.size() && target < letters[i])
        {
            x = letters[i];
            break;
        }
        else if (i >= letters.size())
        {
            x = letters[0];
            break;
        }
    }

    cout << x;

    return 0;
}