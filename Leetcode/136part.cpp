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

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    int i = 0;
    int j = 1;
    int n1 = -1;

    cout << endl;

    if (nums.size() == 1)
    {
        n1 = nums[i];
    }
    else
    {

        while (i < nums.size() && j <= nums.size())
        {

            if (nums[i] == nums[j])
            {
                // i = i + 2;
                // j = i + 1;
                nums.erase(nums.begin(), nums.begin() + 2);
                // nums.erase(nums.begin() + 1);
                // cout << nums[0];
                // cout << endl
                //      << nums[1] << endl;
            }
            else
            {

                n1 = nums[i];
                break;
            }
        }
    }

    cout << n1;

    return 0;
}