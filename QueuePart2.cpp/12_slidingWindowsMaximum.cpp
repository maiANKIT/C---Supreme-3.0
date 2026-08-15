#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";
    for (int i = 0; i < nums.size(); i++)
        cin >> nums[i];

    int k;
    cout << "enter k: ";
    cin >> k;

    deque<int> dq;
    vector<int> ans;
    // first windows
    for (int i = 0; i < k; i++)
    {

        // chhote element remove krdo
        while (!dq.empty() && nums[i] >= nums[dq.back()])
        {

            dq.pop_back();
        }

        // inserting index, so that we can checkout of windows element
        dq.push_back(i);
    }

    // store answer
    ans.push_back(nums[dq.front()]);

    // remaining windows ko process
    for (int i = k; i < nums.size(); i++)
    {
        // out of windows element ko remove kr diya
        if (!dq.empty() && i - dq.front() >= k)
        {
            dq.pop_front();
        }

        // ab firse current element k liye chhote element
        // ko remove krna h

        while (!dq.empty() && nums[i] >= nums[dq.back()])
        {

            dq.pop_back();
        }

        // inserting index, so that we can checkout of windows element
        dq.push_back(i);

        ans.push_back(nums[dq.front()]);
    }

    cout << "final values: ";

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}