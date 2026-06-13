#include <iostream>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    string s;
    cout << "enter s: ";
    cin >> s;

    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {

        st.push(s[i]);
    }

    int count = 0;
    int maxi = 0;

    for (int i = 0; i < st.size(); i++)
    {

        if (st.top() == ')')
        {
            // char x = st.top();
            st.pop();
            if (st.top() == '(')
            {
                count = count + 2;
                maxi = max(maxi, count);
                st.pop();
            }
            else if (st.top() == ')' && !(st.empty()))
            {
                count++;
                st.pop();
            }
            else
                count = 0;
        }
    }

    cout << maxi;

    return 0;
}