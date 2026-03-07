#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

int main()
{

    int rows;
    cout << "enter rows: ";
    cin >> rows;

    int cols;
    cout << "enter cols: ";
    cin >> cols;

    cout << "enter value: ";
    vector<vector<int>> intervals(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> intervals[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j = j + 2)
        {
            cout << "[" << intervals[i][j] << "," << intervals[i][j + 1] << "]";
        }
        cout << endl;
    }

    for (int i = 0, j = 0; i < rows, j < cols; i++, j++)
    {
        // int num = intervals[i+1][j] - intervals[i][j+1];
        if (intervals[i + 1][j] - intervals[i][j + 1] == 1 || intervals[i + 1][j] - intervals[i][j + 1] == -1 || intervals[i + 1][j] - intervals[i][j + 1] == 0)
        {
            intervals[i][j] = max(intervals[i + 1][j], intervals[i][j + 1]);
            int x = min(intervals[i + 1][j], intervals[i][j + 1]);
            intervals.erase();
        }
    }

    return 0;
}