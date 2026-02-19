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

    vector<int> nums2;

    int i = 0;
    int j = 1;

    while (i < nums.size() && j < nums.size())
    {

        if (nums[i] == nums[j])
        {

            nums.erase(nums.begin() + 1);
            i++;
            j++;
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}