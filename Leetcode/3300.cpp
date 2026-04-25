#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter values: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int mini = INT_MAX;

    for (int i = 0; i < nums.size(); i++)
    {

        int x = 0;

        while (nums[i] > 0)
        {
            x = x + nums[i] % 10;
            nums[i] = nums[i] / 10;
        }

        mini = min(x, mini);
    }

    cout << mini;

    return 0;
}