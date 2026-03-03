#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int row;
    cout << "enter row: ";
    cin >> row;

    int column;
    cout << "enter column: ";
    cin >> column;

    vector<vector<int>> matrix(row, vector<int>(column));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "enter target: ";
    int target;
    cin >> target;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "row: " << matrix.size() << endl;
    cout << "column: " << matrix[0].size() << endl;

    bool x = 0;
    int i = 0;
    int j = 0;
    while (i < matrix.size())
    {

        if (matrix[i][j] == target)
        {
            x = 1;
            cout << "this is case 1" << endl;
            break;
        }
        else if (matrix[i][j] < target && j < matrix[0].size())
        {
            cout << "this is case 2" << endl;
            j++;
        }
        else if (matrix[i][j] < target && j >= matrix[0].size())
        {
            cout << "this is case 3" << endl;
            j = 0;
            i++;
        }
        else if (matrix[i][j] > target && j < matrix[0].size() && i < matrix.size())
        {
            cout << "this is case 4" << endl;
            j = 0;
            i++;
        }
        else if (matrix[i][j] > target)
        {
            cout << "this is case 5" << endl;
            break;
        }
    }

    cout << "ans: " << x;

    return 0;
}