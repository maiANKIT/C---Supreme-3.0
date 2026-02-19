#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>

using namespace std;

int solve(vector<int> &arr, int target)
{

    // base case
    if (target == 0)
    {
        return 0; // kyuki 0 banane k liye hme kisi element ki jarurat nhi h
    }

    if (target < 0)
    {
        return INT_MAX;
    }

    // lets solve one case
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = solve(arr, target - arr[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, ans + 1);
        }
    }

    return mini;
}

int main()
{

    int n;
    cout << "enter the number of element: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter the array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "enter the target: ";
    cin >> target;

    int ans = solve(arr, target);
    cout << "Answer is " << ans;

    return 0;
}