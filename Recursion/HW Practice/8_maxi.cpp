#include <iostream>
#include <climits>

using namespace std;

int maxi(int arr[], int size, int i, int &y)
{

    if (i >= size)
    {
        return 0;
    }

    if (arr[i] >= y)
    {
        y = arr[i];
    }

    maxi(arr, size, i + 1, y);

    return y;
}

int main()
{

    int a[] = {1, 6, 8, 2, 3, 77, 6};

    int size = sizeof(a) / sizeof(a[0]);

    int i = 0;
    int y = INT_MIN;

    int x = maxi(a, size, i, y);

    cout << x;

    return 0;
}