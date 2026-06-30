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

    int c = 0;

    for (int i = 0; i < n; i++)
    {

        int a = intervals[i][0];
        int b = intervals[i][1];

        int x = newInterval[0];
        int y = newInterval[1];

        if (a < x && b < x)
        {
            cout << "c-4" << endl;
            nums.push_back({a, b});
        }
        else if (a > x && b > y)
        {
            cout << "c-1" << endl;
            nums.push_back({a, b});
        }
        else if (a <= x && b >= y)
        {
            cout << "c-2" << endl;
            nums.push_back({a, b});
        }
        else if (a <= x && b < y)
        {

            cout << "c-3" << endl;
            while (i + 1 < n && intervals[i][0] < y)
            {

                if (intervals[i][0] == y)
                {
                    cout << "c-3e3" << endl;
                    nums.push_back({a, intervals[i][1]});
                    break;
                }
                else if (intervals[i][1] >= y)
                {
                    cout << "c-3e1" << endl;
                    nums.push_back({a, intervals[i][1]});
                    break;
                }
                else if (intervals[i + 1][0] > y)
                {
                    cout << "c-3e2" << endl;
                    nums.push_back({a, y});
                    a = intervals[i + 1][0];
                    break;
                }
                i++;
            }
        }
    }

    cout << "nums size: " << nums.size() << endl;

    for (int i = 0; i < nums.size(); i++)
    {

        cout << "[" << nums[i][0] << ',' << nums[i][1] << ']' << endl;
    }

    return 0;
}