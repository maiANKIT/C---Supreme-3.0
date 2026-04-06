#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter size: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int target = INT_MAX;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int x = abs(arr[i] - arr[i + 1]);
        if (target > x)
            target = x;
    }

    cout << "target: " << target << endl;

    int i = 0;
    int j = 1;

    vector<vector<int>> nums;
    while (i < arr.size() - 1 && j < arr.size())
    {

        int x = abs(arr[j] - arr[i]);

        if (x == target)
        {
            nums.push_back({arr[i], arr[j]});
            i++;
        }
        else if (x > target)
        {
            i++;
        }
        else if (x < target)
        {
            j++;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums[0].size(); j++)
        {
            cout << nums[i][j] << " ";
        }
    }

    return 0;
}