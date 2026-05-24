// very important question repeatative in interview

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cout << "enter string: ";
    cin >> s;

    stack<char> st;

    bool x = 1;

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {

            if (!st.empty())
            {
                char topElement = st.top();
                if (s[i] == ')' && topElement == '(')
                {
                    st.pop();
                }
                else if (s[i] == ']' && topElement == '[')
                {
                    st.pop();
                }
                else if (s[i] == '}' && topElement == '{')
                {
                    st.pop();
                }
                else
                {
                    x = 0;
                    break;
                }
            }
            else
            {
                x = 0;
                break;
            }
        }
    }

    if (!st.empty())
        x = 0;

    if (x == 1)
        cout << "Valid";
    else
        cout << "Not valid";

    return 0;
}