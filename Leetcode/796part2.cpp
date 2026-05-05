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

    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {

        rotate(goal.begin(), goal.begin() + 1, goal.end());
        if(s == goal) 
        
    }

    cout << "goal: " << s << endl;

    if (s == goal)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}