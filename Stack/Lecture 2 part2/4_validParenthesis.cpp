#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cout << "enter string: ";
    cin >> s;

    stack<int> st;

    bool x = 1;

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else
        {

            
            if (st.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']'))
            {
                x = 0;
                break;
            }
            
            char topElement = st.top();

            if (s[i] == ')' && topElement == '(')
            {
                st.pop();
            }
            else if (s[i] == '}' && topElement == '{')
            {
                st.pop();
            }
            else if (s[i] == ']' && topElement == '[')
            {
                st.pop();
            }
            else
            {
                x = 0;
                break;
            }
        }
    }

    if (st.size() > 0)
    {
        x = 0;
    }

    if (x == 1)
        cout << "Valid" << endl;
    else
        cout << "Invalid" << endl;

    return 0;
}