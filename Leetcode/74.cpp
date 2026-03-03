#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    int m;
    cout << "enter m: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "enter target: ";
    int target;
    cin >> target;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    bool x = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == target)
            {
                x = 1;
                break;
            }
        }
    }

    cout << x;

    return 0;
}