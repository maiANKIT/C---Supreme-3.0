#include <iostream>
#include <stack>
#include <vector>
#include <climits>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    stack<int> st;
    for (int i = nums.size() - 1 - i; i >= 0; i--)
    {

        st.push(nums[i]);
    }
    int maxi = INT_MIN;

    for (int i = nums.size() - 1 - i; i >= 0; i--)
    {

        st.push(nums[i]);
        maxi = max(nums[i], maxi);
    }

    vector<int> arr;
    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[i] == maxi)
        {
            arr.push_back(-1);
        }
        else if (nums[i] < st.top())
        {
            arr.push_back(st.top());
            st.pop();
        }
        else
        {

            while (st.top() <= nums[i])
            {

                st.pop();
            }
            arr.push_back(st.top());
            // st.pop();
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}