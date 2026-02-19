#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int main()
{

    string s;
    cout << "enter the string: ";
    cin >> s;

    vector<char> ch;
    for (int i = 0; i < s.size(); i++)
    {

        ch.push_back(s[i]);
    }

    set<char> ch1(ch.begin(), ch.end());

    for (auto str : ch1)
    {
        cout << str << " ";
    }

    string x = "";
    for (int i = 0; i < ch1.size(); i++)
    {
        x = x + ch1[i]];
    }

    return 0;
}