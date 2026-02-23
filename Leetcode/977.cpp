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
    cout << "enter the values: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = nums[i] * nums[i];
    }

    sort(nums.begin(), nums.end());

    cout << "ans: ";
    for (int i = 0; i < nums.size(); i++)
    {

        cout << nums[i] << " ";
    }

    return 0;
}