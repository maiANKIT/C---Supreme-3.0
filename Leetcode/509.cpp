#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;

    vector<int> nums(n + 1);
    nums[0] = 0;
    nums[1] = 1;

    if (n == 0)
    {
        cout << "ans: " << nums[0];
    }
    else if (n == 1)
    {
        cout << "ans: " << nums[1];
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            nums[i] = nums[i - 1] + nums[i - 2];
        }

        cout << "ans: " << nums[n];
    }

    return 0;
}