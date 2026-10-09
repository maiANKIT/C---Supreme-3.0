#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> nums, int sum, int i, int &maxi)
{

    // base case
    if (i >= nums.size())
    {
        maxi = max(maxi, sum);
        return;
    }

    // sum += nums[i];

    //include
    solve(nums, sum + nums[i], i + 2, maxi);
                                                //hm in dono k position ko exchange kr skte h
    //exclude
    solve(nums, sum, i + 1, maxi);

    
}

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> nums(n);

    for (int &x : nums)
        cin >> x;

    int maxi = 0;
    int sum = 0;

    int i = 0;
    solve(nums, sum, i, maxi);

    cout << maxi;

    // cout << "final Ans: " << finalAns << endl;

    return 0;
}