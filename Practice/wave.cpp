#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cout << "Enter rows and column of matrix: ";
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    cout << "Enter the matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    cout << "Matrix given by user: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[j][i] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}