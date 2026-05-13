#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter value: ";

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int count1 = 0, count2 = 0, count3 = 0;

    int x = 1;

    for (int i = 0; i < n; i++)
    {

        if (nums[i] < nums[i + 1])
            count1++;
        else if (nums[i] == nums[i + 1])
        {
            x = 1;
            break;
        }
        else
            break;
    }

    count1++;

    for (int i = count1 - 1; i < n; i++)
    {

        if (nums[i] > nums[i + 1])
            count2++;
        else if (nums[i] == nums[i + 1])
        {
            x = 1;
            break;
        }
        else
            break;
    }

    for (int i = count1 + count2 - 1; i < n; i++)
    {

        if (nums[i] < nums[i + 1])
            count3++;
        else if (nums[i] == nums[i + 1])
        {
            x = 1;
            break;
        }
        else
            break;
    }

    // if(nums[n - 1] > nums[n - 2]) count3++;

    cout << "count1: " << count1 << endl;
    cout << "count2: " << count2 << endl;
    cout << "count3: " << count3 << endl;

    if (count1 + count2 + count3 != n + 1)
        cout << "false" << endl;
    else
        cout << "true" << endl;

    return 0;
}