#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout<<"enter the values: ";
    for (int &i : nums)
        cin >> i;

    for (int i = 0; i < nums.size(); i++)
    {

        int mini = INT_MAX;
        int a = i;

        for (int j = i; j < nums.size(); j++)
        {
            if (nums[j] <= mini)
            {
                mini = nums[j];
                a = j;
            }
        }

        swap(nums[i], nums[a]);
    }

    for (int i : nums)
        cout << i << " ";

    return 0;
}