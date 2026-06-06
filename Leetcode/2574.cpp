#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

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

    vector<int> leftSum(nums.size());
    vector<int> rightSum(nums.size());

    int sum1 = 0;
    int sum2 = 0;

    int total = accumulate(nums.begin(), nums.end(), 0);

    for (int i = 0; i < nums.size(); i++)
    {

        leftSum[i] = sum1;
        rightSum[nums.size() - 1 - i] = sum2;

        sum1 = sum1 + nums[i];
        sum2 = sum2 + nums[nums.size() - 1 - i];
    }

    cout << "leftSum: ";
    for (int i = 0; i < leftSum.size(); i++)
    {
        cout << leftSum[i] << " ";
    }

    cout << "rightSum: ";
    for (int i = 0; i < rightSum.size(); i++)
    {
        cout << rightSum[i] << " ";
    }

    for (int i = 0; i < leftSum.size(); i++)
    {

        leftSum[i] = abs(leftSum[i] - rightSum[i]);
    }

    cout << "ans: ";
    for (int i = 0; i < leftSum.size(); i++)
    {
        cout << leftSum[i] << " ";
    }

    return 0;
}