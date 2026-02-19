#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter the array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    vector<int> final;

    int count = 0;
    if (nums.size() == 1)
    {
        count = 0;
    }
    else
    {
        for (int i = 0; i <= nums.size() - 2; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                final.push_back(nums[i]);
                i++;
            }
        }

        count = final.size();
    }

    cout << "final array: ";
    for (int i = 0; i < final.size(); i++)
    {
        cout << final[i] << " ";
    }

    return 0;
}