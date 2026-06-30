#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));

    cout << "enter values: ";
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 2; j++)
            cin >> intervals[i][j];
    }

    sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b){
        return a[0] < b[0];
    });

    vector<vector<int>> nums;
    int a = intervals[0][0];

    for (int i = 0; i < n - 1; i++)
    {

        if (intervals[i][1] < intervals[i + 1][0])
        {
            nums.push_back({a, intervals[i][1]});
            a = intervals[i + 1][0];
        }
    }
    
    if (nums.size() == 0)
    {
        nums.push_back({intervals[0][0], intervals[n - 1][1]});
    }

    cout << "printing value: ";
    for (int i = 0; i < nums.size(); i++)
    {

        for (int j = 0; j < 2; j++)
            cout << nums[i][j] << " ";
    }

    return 0;
}