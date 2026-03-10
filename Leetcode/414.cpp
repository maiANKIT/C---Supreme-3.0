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

    sort(nums.begin(), nums.end());

    cout << "sorted arr: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    int x = 0;
    int z = -1;

    if (nums.size() < 3)
    {
        x = nums[nums.size() - 1];
    }
    else
    {

        int i = nums.size() - 1;
        int count = 1;

        for (int i = nums.size() - 1; i >= 1; i--)
        {
            if (nums[i] != nums[i - 1])
            {
                count++;
                if (count == 3)
                {
                    z = i - 1;
                    break;
                }
            }

            if (i = 1 && count != 3)
            {
                z = 0;
            }
        }

        cout << "value of z: " << z << endl;

        x = nums[z];
    }

    cout << x;

    return 0;
}