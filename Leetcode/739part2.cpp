#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> temperatures(n);
    cout << "enter values: ";
    for (int i = 0; i < temperatures.size(); i++)
    {
        cin >> temperatures[i];
    }

    stack<int> st;

    vector<int> nums(temperatures.size());

    for (int i = temperatures.size() - 1; i >= 0; i--)
    {

        if (st.empty())
        {
            nums[i] = 0;
            st.push(i);
        }
        else
        {
            while (!st.empty() && temperatures[i] >= temperatures[st.top()])
            {
                st.pop();
            }

            if (st.empty())
            {
                nums[i] = 0;
                st.push(i);
            }
            else
            {
                nums[i] = st.top() - i;
                st.push(i);
            }
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {

        cout << nums[i] << " ";
    }

    return 0;
}