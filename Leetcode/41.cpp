#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter the values: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] <= 0)
        {
            nums.erase(nums.begin());
            i--;
        }
        else
        {
            break;
        }
    }

    if (nums.size() > 0)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
    }

    cout << "after erased value: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    int x = 0;
    for (int i = 0; i <= nums.size(); i++)
    {
        if (i < nums.size() && nums[i] != i + 1)
        {
            x = i + 1;
            break;
        }
        else
        {
            x = i + 1;
        }
    }

    cout << "ans: " << x;

    return 0;
}