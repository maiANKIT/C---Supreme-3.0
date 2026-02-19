#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "enter a number ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    cout << "enter values ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "printing real matrix " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "printing spiral matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (int)
        }
    }

    return 0;
}