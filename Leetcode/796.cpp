#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s, goal;
    cout << "enter s: ";
    cin >> s;

    cout << "enter goal: ";
    cin >> goal;

    string a = "";
    string b = "";

    int j = 0;

    int x = 0;

    for (int i = 0; i < goal.size(); i++)
    {

        if (s[0] == goal[i] && s[s.size() - 1] == goal[i - 1])
        {
            x = i;
            break;
        }
    }

    reverse(goal.begin(), goal.begin() + x);
    reverse(goal.begin() + x, goal.end());
    reverse(goal.begin(), goal.end());

    cout << "goal: " << goal << endl;

    return 0;
}