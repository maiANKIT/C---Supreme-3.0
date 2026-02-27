#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the value: ";
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    int count = 1;
    int x = -1;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            count++;
        }
        else if ((nums[i] != nums[i + 1]) && count == 3)
        {
            // count = nums[i];
            x = nums[i + 1];
            break;
        }
        else if (nums[i] != nums[i + 1])
        {
            cout << "this" << endl;
            count = 1;
        }
    }

    cout << "ans: " << x;

    return 0;
}