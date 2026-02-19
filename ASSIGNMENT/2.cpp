#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "enter the length of vector: ";
    cin >> n;

    if (n >= 1 && n <= 300)
    {
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // int strlen = sizeof(arr) / sizeof(arr[0]);

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}