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
    while (i < nums.size() - 1)
    {

        if (nums[i] == nums[i + 1])
        {
            nums.erase(nums.begin() + i);
            nums.erase(nums.begin() + i);
        }
        else
        {
            i++;
        }

        if (nums.size() == 2)
        {
            break;
        }
    }

    cout << "final answer is: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}