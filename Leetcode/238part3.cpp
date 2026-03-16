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

    vector<int> ans;
    int product = 1;

    int count0 = 0;
    int index0 = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            count0++;
            index0 = i;
        }
    }

    if (count0 == 1)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == index0)
                continue;
            product = product * nums[i];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == index0)
            {
                ans.push_back(product);
            }
            else
            {
                ans.push_back(0);
            }
        }
    }
    else if (count0 > 1)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(0);
        }
    }
    else
    {
        for (int i = 0; i < nums.size(); i++)
        {
            product = product * nums[i];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(product / nums[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}