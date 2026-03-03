#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int row;
    cout << "enter row size: ";
    cin >> row;

    int col;
    cout << "enter column size: ";
    cin >> col;

    vector<vector<int>> grid(row, vector<int>(col));
    cout << "enter the values: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
        }
    }

    // int a = 0;
    // int b = 0;
    // int x = 0;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         if (grid[i][b] == grid[i][j])
    //         {
    //             x = grid[i][b];
    //             break;
    //         }
    //         else if (b < col)
    //         {
    //             b++;
    //         }
    //         else if (b >= col)
    //         {
    //             b = 0;
    //         }
    //     }
    //     if (x != 0)
    //     {
    //         break;
    //     }
    // }

    int y = 1;
    int z = 0;
    int a = 0;
    int b = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + 1 == grid[i][j] &&i != a &&j = b)
            {
                z = i + 1;
                break;
            }
            else
                continue;
        }
    }

    cout << "this is repeated element: " << z;

    return 0;
}