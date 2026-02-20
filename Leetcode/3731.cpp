#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    cout << "enter the value: ";
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {

        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    vector<int> ans;
    int j = 0;
    for (int i = nums[0]; i < nums[nums.size() - 1]; i++)
    {

        if (nums[j] != i)
        {
            ans.push_back(i);
        }
        j++;
    }

    cout << "final ans: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}