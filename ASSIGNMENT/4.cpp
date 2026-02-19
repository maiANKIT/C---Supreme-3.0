#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;

    if (n >= 1 && n <= 300)
    {
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        // int strlen = sizeof(nums) / sizeof(nums[0]);

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] > nums[j])
                {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << nums[i] << " ";
        }
    }
    return 0;
}