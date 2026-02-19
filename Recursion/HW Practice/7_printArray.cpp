#include <iostream>

using namespace std;

void print(int arr[], int n, int i)
{

    if (i >= n)
    {
        return;
    }

    cout << arr[i] << " ";

    print(arr, n, i + 1);
}

int main()
{

    int a[] = {1, 5, 3, 3, 9, 56};
    int n = sizeof(a) / sizeof(a[0]);
    int i = 0;

    print(a, n, i);

    return 0;
}