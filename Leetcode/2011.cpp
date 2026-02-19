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

    vector<string> operations(n);

    cout << "enter the strings: ";
    for (int i = 0; i < operations.size(); i++)
    {
        cin >> operations[i];
    }

    int i = 0;
    int j = 1;
    int count = 0;
    while (i < operations.size())
    {
        if (operations[i] == "--X")
        {
            --count;
        }
        else if (operations[i] == "X--")
        {
            count--;
        }
        else if (operations[i] == "X++")
        {
            count++;
        }
        else if (operations[i] == "++X")
        {
            ++count;
        }
        i++;
    }

    cout << "value of count: " << count;

    return 0;
}