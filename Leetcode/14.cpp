#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    cout << "enter strings: ";
    vector<string> strs(n);
    for (int i = 0; i < strs.size(); i++)
    {
        cin >> strs[i];
    }

    int leastSize = INT_MAX;

    for (int i = 0; i < strs.size(); i++)
    {
        if (strs[i].size() < leastSize)
        {
            leastSize = strs[i].size();
        }
    }

    string t = "";

    int x = 0;
    int y = 0;

    for (int i = 0; i < leastSize - 1; i++)
    {
        if (strs[x][i] == strs[x + 1][i + 1])
        {
        }
    }

    cout << t;

    return 0;
}