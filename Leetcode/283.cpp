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

    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            count++;
        }
    }

    cout << "number of zeros: " << count << endl;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == 0)
        {
            swap(nums[i], nums[i + 1]);
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {

        cout << nums[i] << " ";
    }

    for (int i = nums.size() - 1; i >= count; i--)
    {
        if (nums[i] != 0)
        {
            // call function
            for (int i = 0; i < nums.size() - 1; i++)
            {
                if (nums[i] == 0)
                {
                    swap(nums[i], nums[i + 1]);
                }
            }
        }
    }
    cout << endl;

    for (int i = 0; i < nums.size(); i++)
    {

        cout << nums[i] << " ";
    }

    return 0;
}