#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the n: ";
    cin >> n;

    vector<int> nums(n);

    cout << "enter the array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int i = 0;
    int j = i + 1;

    int x = 0;

    while (i < nums.size() && j < nums.size())
    {

        // int x = 0;
        if (nums[i] == nums[j])
        {
            // a.push_back(nums[i]);
            nums.erase(nums.begin() + j);
            nums.erase(nums.begin() + i);

            // i++;
            // j++;
        }
        else
        {
            j++;
        }

        if (j >= nums.size())
        {
            i++;
            j = i + 1;
        }

        if (nums[i] != nums[j] && j == nums.size() - 1)
        {
            x = nums[i];
            break;
        }
    }

    cout << x;

    return 0;
}