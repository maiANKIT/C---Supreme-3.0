#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int rows;
    cout << "enter (rows)m: ";
    cin >> rows;

    int column;
    cout << "enter (column)m: ";
    cin >> column;

    vector<vector<int>> score(rows, vector<int>(column));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> score[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << score[i][j] << " ";
        }
        cout << endl;
    }

    int k;
    cout << "enter k: ";
    cin >> k;

    return 0;
}