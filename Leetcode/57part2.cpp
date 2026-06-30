#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));
    cout << "enter values: ";
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 2; j++)
            cin >> intervals[i][j];
    }

    vector<int> newInterval(2);
    cout << "enter new interval values: ";
    cin >> newInterval[0] >> newInterval[1];

    vector<vector<int>> nums;

    int i = 0;

    while(i < n && newInterval[0] > intervals[i][1]){
        nums.push_back(intervals[i]);
        i++;
    }

    while(i < n && intervals[i][0] <= newInterval[1]){

        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);
        i++;

    }

    nums.push_back({newInterval[0], newInterval[1]});

    while(i<n){
        nums.push_back({intervals[i][0], intervals[i][1]});
        i++;
    }

    cout << "nums size: " << nums.size() << endl;

    for (int i = 0; i < nums.size(); i++)
    {

        cout << "[" << nums[i][0] << ',' << nums[i][1] << ']' << endl;
    }

    return 0;
}