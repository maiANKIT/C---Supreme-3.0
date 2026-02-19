#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    cout << "enter the array: ";
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    vector<int> ans;

    int i = 0;
    while (i < nums.size() - 1)
    {

        // if(nums[i] == nums[i+1] && nums)
        if (nums[i] == nums[i + 1])
        {
            ans.push_back(nums[i]);
            i++;
        }

        i++;

        if (ans.size() == 2)
        {
            break;
        }
    }

    cout << "ans: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}