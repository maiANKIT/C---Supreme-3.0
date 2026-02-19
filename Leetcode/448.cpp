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

    vector<int> final;

    for (int i = 1; i <= nums.size(); i++)
    {

        if (nums[i - 1] != i)
        {
            final.push_back(i);
        }
    }

    cout << "final answer is: ";
    for (int i = 0; i < final.size(); i++)
    {
        cout << final[i] << " ";
    }

    return 0;
}