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
    cout << "enter value: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int k;
    cout << "enter kth value: ";
    cin >> k;

    sort(nums.begin(), nums.end());

    cout << "ans: " << nums[nums.size() - k];

    return 0;
}