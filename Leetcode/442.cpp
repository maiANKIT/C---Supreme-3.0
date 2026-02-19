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

    int i = 0;
    int j = 1;

    if (nums.size() == 1)
    {
        nums.erase(nums.begin() + i);
    }
    else
    {

        while (i < nums.size() - 1)
        {

            if ((nums[i] != nums[i + 1]) && (i + 2 == nums.size()))
            {
                nums.erase(nums.begin() + i);
                nums.erase(nums.begin() + i);
                break;
            }
            else if (nums[i] == nums[i + 1] && (i + 2 == nums.size()))
            {
                nums.erase(nums.begin() + i);
            }
            else if (nums[i] != nums[i + 1])
            {
                nums.erase(nums.begin() + i);
            }
            else
            {
                i++;
            }
        }
    }

    cout << "final array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}