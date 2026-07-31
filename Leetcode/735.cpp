#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> asteroids(n);
    cout << "enter values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> asteroids[i];
    }

    stack<int> st;

    st.push(asteroids[asteroids.size() - 1]);

    for (int i = asteroids.size() - 2; i >= 0; i--)
    {

        if (st.empty())
        {
            st.push(asteroids[i]);
        }
        else if (st.top() >= 0)
        {
            st.push(asteroids[i]);
        }
        else
        {
            if (asteroids[i] < 0)
                st.push(asteroids[i]);
            else if (abs(st.top()) > asteroids[i])
            {
            }
            else if (abs(st.top()) == asteroids[i])
            {
                st.pop();
                if (!st.empty())
                    st.pop();
            }
            else if (abs(st.top()) < asteroids[i])
            {
                st.pop();
                st.push(asteroids[i]);
            }
        }
    }

    vector<int> vec;

    while (!st.empty())
    {
        vec.push_back(st.top());
        st.pop();
    }

    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";

    return 0;
}