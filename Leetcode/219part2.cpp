#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    cout << "enter values: ";
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int k;
    cout << "enter k: ";
    cin >> k;

    // sort(nums.begin(), nums.end());

    bool x = 0;

    int i = 0;
    int j = 1;

    while (i < nums.size() - 1)
    {

        if (j >= nums.size())
        {
            i++;
            j = i + 1;
        }
        else if (nums[i] == nums[j] && j - i <= k)
        {
            x = 1;
            break;
        }
        else if (j < nums.size())
        {
            j++;
        }
    }

    cout << x;

    return 0;
}