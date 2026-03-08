#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter rows: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "enter values: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int size = matrix.size();

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size / 2; j++)
        {
            swap(matrix[i][j], matrix[i][size - j - 1]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}