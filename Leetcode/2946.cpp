#include <bits/stdc++.h>

using namespace std;

int main()
{

    int m;
    cout << "m: ";
    cin >> m;

    int n;
    cout << "n: ";
    cin >> n;

    int k;
    cout << "enter k: ";
    cin >> k;

    vector<vector<int>> mat(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < k; i++)
    {
        int x = 0;

        for (int j = 0; j < m; j++)
        {

            rotate(mat[x].begin(), mat[x].end() - 1, mat[x].end());
            x++;
        }
    }

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {

            cout << mat[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}