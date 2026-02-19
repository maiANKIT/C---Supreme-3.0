#include <bits/stdc++.h>
// this is just for positive number
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the numbers: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl
         << "Enter values are: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << "missing number is " << i + 1 << endl;
            i++;
        }
    }

    return 0;
}