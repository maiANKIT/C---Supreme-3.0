#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    vector<int> x(n);

    int i = 0;

    int j = nums.size() - 1;
    int k = n - 1;
    while (i <= j)
    {
        if (nums[i] < 0)
            nums[i] = nums[i] * (-1);
        if (nums[j] < 0)
            nums[j] = nums[j] * (-1);
        if (nums[i] >= nums[j])
        {
            x[k] = nums[i] * nums[i];
            i++;
            k--;
        }
        else if (nums[i] <= nums[j])
        {
            x[k] = nums[j] * nums[j];
            j--;
            k--;
        }
    }

    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}