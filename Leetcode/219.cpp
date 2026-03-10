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

    for (int i = 0; i < nums.size() - 1; i++)
    {

        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j] && abs(i - j) <= k)
            {
                x = 1;
                break;
            }
        }
    }

    cout << x;

    return 0;
}