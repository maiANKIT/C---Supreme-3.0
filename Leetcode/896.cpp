#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter the nums: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int i = 0;
    while (i < nums.size() - 1)
    {

        if (nums[i] == nums[i + 1])
        {
            nums.erase(nums.begin() + i + 1);
        }
        else
        {
            i++;
        }
    }

    cout << "nums are: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;

    bool x = 1;

    if (nums.size() == 1)
    {
        // x = 1;
    }
    else if (nums[0] < nums[1])
    {
        // increasing
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                x = 0;
                break;
            }
        }
    }
    else if (nums[0] > nums[1])
    {
        // decreasing
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] < nums[i + 1])
            {
                x = 0;
                break;
            }
        }
    }

    cout << "final value: " << x;

    return 0;
}