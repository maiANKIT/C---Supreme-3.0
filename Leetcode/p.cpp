#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    cout << "enter the values: ";
    vector<int> nums(n);

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int x = 0;
    if (nums.size() == 1)
        x = nums[0];
    else
    {
        for (int i = 0; i < nums.size() - 1; i = i + 2)
        {
            if (nums[i] != nums[i + 1])
            {
                x = nums[i];
                break;
            }
        }
    }

    cout << x;

    return 0;
}